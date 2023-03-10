/*
 * Copyright (c) 2016 Marvell.
 * This program is provided "as is" without any warranty of any kind,
 * and is distributed under the applicable Marvell proprietary limited use
 * license agreement.
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <assert.h>
#include <octeontx_common.h>
#include <plat_board_cfg.h>
#include <octeontx_ecam.h>
#include <octeontx_utils.h>
#include <platform_def.h>
#include <octeontx_irqs_def.h>
#if defined(PLAT_OTX2_FAMILY)
#  include <plat_otx2_configuration.h>
#elif defined(PLAT_OTX_FAMILY)
#  include <plat_otx_configuration.h>
#elif defined(PLAT_CN10K_FAMILY)
#  include <plat_cn10k_configuration.h>
#endif

#include "cavm-csrs-ecam.h"
#include "cavm-csrs-gpio.h"
#include "cavm-csrs-gic.h"
#include "cavm-csrs-gti.h"
#include "cavm-csrs-iobn.h"
#include "cavm-csrs-pccbr.h"
#include "cavm-csrs-pccpf.h"
#include "cavm-csrs-pem.h"
#include "cavm-csrs-smmu.h"

/* for LEGACY logging, define DEBUG_ATF_ECAM to enable debug logs */
#undef DEBUG_ATF_ECAM

#if defined(MRVL_TF_LOG_MODULE)
#  undef MRVL_TF_LOG_MODULE
#  define MRVL_TF_LOG_MODULE  MRVL_TF_LOG_MODULE_GEN_ECAM
#  define debug_io(...) (mrvl_tf_log_modules & MRVL_TF_LOG_MODULE) ? \
			 tf_log(LOG_MARKER_NOTICE __VA_ARGS__) : (void)0
#elif DEBUG_ATF_ECAM
#define debug_io printf
#else
#define debug_io(x,...);
#endif

/*
 * Platform methods defined in plat_XX_ecam.c file, where XX is specific
 * OcteonTX platform (t81, t83, f95, t96)
 */
extern const struct ecam_platform_defs plat_ops;

static struct ecam_device ecam_bridges[OCTEONTX_ECAM_MAX_DEV];

/*
 * Global ecam_device instance
 */
static struct ecam_device ecam_dev;

static uint64_t get_bar_val_from_enhanced_allocation(
	struct pcie_config *pconfig, int bar, int cap_offset)
{
	uint32_t cap, header;
	uint64_t baseh, basel;
	int entry_size, bei, num_of_entries;

	cap = octeontx_read32((uint8_t *) pconfig + cap_offset);
	num_of_entries = ECAM_PCCPF_XXX_EA_CAP_HDR_NUM_ENTRIES(cap);

	/* Skip EA capabilities header, go to first EA Entry */
	cap_offset += 4;
	while (num_of_entries) {
		header = octeontx_read32(ECAM_EA_HEADER_ADDR(
					pconfig, cap_offset));

		entry_size = ECAM_EA_ES(header);
		bei = ECAM_EA_BEI(header);
		if (bei == bar) {
			baseh = 0;
			basel = octeontx_read32(ECAM_EA_BASEL_ADDR(
						pconfig, cap_offset));
			if (basel & ECAM_EA_IS_64)
				baseh = octeontx_read32(ECAM_EA_BASEH_ADDR(
							pconfig, cap_offset));
			basel &= ECAM_EA_FIELD_MASK;

			return (baseh << 32) | basel;
		}
		/* Calculate offset to the next EA entry */
		cap_offset += ECAM_EA_END_OFFSET(entry_size);
		num_of_entries--;
	}
	WARN("EA entry for bar %d in 0x%p was not found\n", bar, pconfig);
	return 0;
}

static uint64_t get_bar_val_from_pccpf_xxx_bar(struct pcie_config *pconfig,
	int bar)
{
	uint64_t baseh, basel;

	baseh = 0;
	basel = pconfig->baseaddress_reg[bar];
	if (basel & ECAM_PCCPF_XXX_BARXL_IS_64)
		baseh = pconfig->baseaddress_reg[bar + 1];

	basel &= ECAM_PCCPF_XXX_BARXL_LBAB_MASK;
	return (baseh << 32) | basel;
}

uint64_t get_bar_val(struct pcie_config *pconfig, int bar)
{
	uint32_t cap;
	/* Capability offset in bytes */
	int cap_offset = pconfig->cap_pointer;

	do {
		cap = octeontx_read32((uint8_t *) pconfig + cap_offset);
		if (ECAM_PCCPF_XXX_E_CAP_HDR_PCIEID(cap) ==
		    ECAM_PCIEID_ENHANCED_ALLOCATION_CAP_ID)
			/* Found EA */
			return get_bar_val_from_enhanced_allocation(
					pconfig, bar, cap_offset);

		cap_offset = ECAM_PCCPF_XXX_E_CAP_HDR_NCP(cap);
	} while (cap_offset);

	return get_bar_val_from_pccpf_xxx_bar(pconfig, bar);
}

#ifdef DEBUG_ATF_IO
static void print_config_space(struct pcie_config *pconfig)
{
	int i;
	debug_io("************pcie config(%x:%x)***************\n",
		 pconfig->devid, pconfig->vendor_id);

	debug_io(" class_code\t\t::%6x\n", pconfig->class_code);
	debug_io(" header_type\t\t::%2x\n", (uint8_t) pconfig->header_type);
	for (i = 0; i < 6; i++)
		debug_io(" baseaddress_reg[%d]\t::%x\n", i,
			 pconfig->baseaddress_reg[i]);
	debug_io(" sub_system_vendor_id\t::%4x\n",
		 pconfig->sub_system_vendor_id);
	debug_io(" sub_system_id\t\t::%4x\n", pconfig->sub_system_id);
	debug_io(" cap_pointer\t\t::%2x\n", pconfig->cap_pointer);
	debug_io(" intterrupt_line\t::%2x\n", pconfig->intterrupt_line);
	debug_io(" intterrupt_pin\t\t::%2x\n", pconfig->intterrupt_pin);

	debug_io("**********************************************\n");
}
#else
static inline void print_config_space(struct pcie_config *pconfig)
{
}
#endif

int enable_msix(uint64_t config_base, uint8_t cap_pointer, uint16_t *table_size,
		uint8_t *bir)
{
	struct msix_cap *msicap;
	/* enable MSI-X */
	while (cap_pointer) {
		msicap = (struct msix_cap *)(config_base + cap_pointer);
		if (msicap->cap_ID == ECAM_PCIEID_MSIX_CAP_ID) {
			msicap->messagecontrol |= (1 << 15);
			*table_size = (msicap->messagecontrol & 0x3ff) + 1;
			*bir = (msicap->table_offset_and_bir & 0x7);
			break;
		}
		cap_pointer = msicap->next_pointer;
	}
	return 0;

}

static inline int smmu_get_irq(int smmunr, int vectornr)
{
/*
 * Suppress warning about unused variable is_context_irq (When there is no
 * SMMU devs, than SMMU_SPI_IRQ is always -1)
 */
#if SMMU_SPI_IRQ_DEVS > 0
	uint8_t is_context_irq;

	assert(smmunr < SMMU_SPI_IRQ_DEVS);
	/*
	 * Check if the requested vectornr is in range of SMMU CTX irqs
	 * (as per SMMU_INT_VEC_E)
	 */
	is_context_irq = (vectornr < (SMMU_NUM_CONTEXTS * 2)) ? 1 : 0;
	return SMMU_SPI_IRQ(smmunr, is_context_irq);
#else
	return -1;
#endif
}

#if !(defined(PLAT_CN10K_FAMILY))
static void init_smmu(uint64_t config_base, uint64_t config_size)
{
	struct pcie_config *pconfig = (struct pcie_config *)config_base;
	uint8_t cap_pointer = pconfig->cap_pointer;
	uint16_t table_size = 0;
	uint8_t bir = 0;
	uint64_t vector_base = 0;
	int i;
	int smmunr = ((config_base >> 36) & 0xff) - 0x48;

	debug_io("SMMU(%d) init called config_base:%llx size:%llx\n",
		 smmunr, config_base, config_size);
	print_config_space(pconfig);

	/*
	 * Allow all IO units to access only non secure memory
	 * We can program secure devices later when they discovered.
	 */
	/* FIXME: Making devices non-secure from SMMU should be done differently */
	for (i = 0; i < 2048; i++) {
		/* Only eMMC in SMMU0 is secure */
		/*if (i == 8 && smmunr == 0) {
			CSR_WRITE((unsigned long)node,
				     CAVM_SMMUX_SSDRX(smmunr, i), 0xffffcfff);
			continue;
		}*/

		CSR_WRITE(CAVM_SMMUX_SSDRX(smmunr, i),
			     0xffffffff);
	}

	enable_msix(config_base, cap_pointer, &table_size, &bir);
	/* initialise MSI-X Vector table */

	if (table_size) {
		debug_io("table_size :%x bir:%1x \n", table_size, bir);
		vector_base = get_bar_val(pconfig, bir);
		debug_io("MSI-X vector base:%llx\n", vector_base);

		/* configure interrupt vectors first */
		for (i = 0; i < table_size; i++) {
			octeontx_write64(vector_base, (i % 2) ? CAVM_GICD_CLRSPI_NSR : CAVM_GICD_SETSPI_NSR);
			vector_base += 8;
			octeontx_write64(vector_base, smmu_get_irq(smmunr, i));
			vector_base += 8;
			debug_io("SMMU(%d) : Vector:%d address :%lx irq:%d\n",
				smmunr, i,
				((i%2) ? (long)CAVM_GICD_CLRSPI_NSR :
					(long)CAVM_GICD_SETSPI_NSR),
				smmu_get_irq(smmunr, i));
		}
	}
}
#endif

static void init_uaa(uint64_t config_base, uint64_t config_size)
{
	struct pcie_config *pconfig = (struct pcie_config *)config_base;
	uint8_t cap_pointer = pconfig->cap_pointer;
	uint16_t table_size = 0;
	uint8_t bir = 0;
	uint64_t vector_base = 0;
	int i, uaa_irq;
	uint32_t *sctl = (uint32_t *) (config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	union cavm_pccpf_xxx_vsec_ctl vsec_ctl;
	union cavm_pccpf_xxx_cmd cmd;

	vsec_ctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_CTL);

	/* Bypass SMMU translation for MSIx delivery, since we pretend
	 * UAA as non PCI device for non secure world
	 */
	*sctl |= 0x1;
	debug_io("Marking MSIX for UAA as phys(SMMU bypass)\n");

	assert(vsec_ctl.s.inst_num < UAA_SPI_IRQ_DEVS);
	uaa_irq = UAA_SPI_IRQ(vsec_ctl.s.inst_num);

	/* enable bus master for uaa, not like 8xxx always en */
	cmd.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_CMD);
	cmd.s.me = 1;
	octeontx_write32(config_base + CAVM_PCCPF_XXX_CMD, cmd.u);

	debug_io("UAA(%d) init called config_base:%llx size:%llx\n",
		 vsec_ctl.s.inst_num, config_base, config_size);
	print_config_space(pconfig);
	enable_msix(config_base, cap_pointer, &table_size, &bir);
	/* initialise MSI-X Vector table */

	if (table_size) {
		debug_io("table_size :%x bir:%1x \n", table_size, bir);
		vector_base = get_bar_val(pconfig, bir);
		debug_io("MSI-X vector base:%llx\n", vector_base);

		/* configure interrupt vectors first */
		for (i = 0; i < table_size; i++) {
			octeontx_write64(vector_base, (i % 2) ? CAVM_GICD_CLRSPI_NSR : CAVM_GICD_SETSPI_NSR);
			vector_base += 8;
			printf("\r"); /* Need to revisit and remove this workaround */
			octeontx_write64(vector_base, uaa_irq);
			vector_base += 8;
			debug_io("UAA(%d): Vector:%d address :%llx irq:%d\n",
				 vsec_ctl.s.inst_num, i,
				 ((i % 2) ? CAVM_GICD_CLRSPI_NSR : CAVM_GICD_SETSPI_NSR),
				 uaa_irq);
		}
	}
}

static void init_pem(uint64_t config_base, uint64_t config_size)
{
	struct pcie_config *pconfig = (struct pcie_config *)config_base;
	uint8_t cap_pointer = pconfig->cap_pointer;
	uint16_t table_size = 0;
	uint8_t bir = 0;
	uint64_t vector_base = 0;
	int i;
	uint64_t addr, msg;
	union cavm_pccpf_xxx_vsec_ctl vsec_ctl;
	union cavm_pccpf_xxx_vsec_sctl vsec_sctl;

	vsec_ctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_CTL);

	debug_io("PEM(%d) init called config_base:%llx size:%llx\n",
		 vsec_ctl.s.inst_num, config_base, config_size);
	print_config_space(pconfig);
	enable_msix(config_base, cap_pointer, &table_size, &bir);
	/* initialise MSI-X Vector table */

	if (table_size) {
		debug_io("table_size :%x bir:%1x \n", table_size, bir);
		vector_base = get_bar_val(pconfig, bir);
		debug_io("MSI-X vector base:%llx\n", vector_base);

		/* configure interrupt vectors first */
		for (i = 0; i < table_size; i++) {
			/*
			 * Ints PEM_INT_VEC_E_INTA..INTD are level-triggered
			 * and use two vectors:
			 *   even vectors SET int via GICD_SETSPI
			 *   odd vectors CLEAR int via GICD_CLRSPI
			 *
			 * Ints PEM_INT_VEC_E_INT_SUM & PEM_INT_VEC_E_RST_INT
			 * are edge-triggered and use a single vector each,
			 * setting the interrupt via GICD_SETSPI.
			 * NOTE: these two PEM interrupts are defined by
			 * 'PEM_SPI_MISC_IRQ(pem, x)'
			 *
			 * Not all platforms support interrupts other than
			 * PEM_INT_VEC_E_INTA..INTD.
			 *
			 * In RC mode, PEM_INT_VEC_E_INTA..INTD are marked as
			 * secure so that Linux enumeration doesn't remap the
			 * vector addresses. This needs msix_sec_phys to be set
			 * in RC mode to avoid SMMU translation.
			 * This is needed to avoid Linux re-map of MSIX vectors
			 * to LPI instead of SPI in GIC.
			 * This helps Legacy INTx and RST vectors to co-exist
			 * as secure and non-secure and work.
			 *
			 */
			if (i < PEM_INT_VEC_E_INT_SUM) {
				addr = (i % 2) ? CAVM_GICD_CLRSPI_NSR :
						 CAVM_GICD_SETSPI_NSR;
				addr |= is_pem_in_rc_mode(vsec_ctl.s.inst_num);
			} else {
				addr = CAVM_GICD_SETSPI_NSR;
			}
			octeontx_write64(vector_base, addr);
			vector_base += 8;
			if (i >= PEM_INT_VEC_E_INTA && i < PEM_INT_VEC_E_INT_SUM)
				msg = PEM_SPI_IRQ(vsec_ctl.s.inst_num,
						(i - PEM_INT_VEC_E_INTA) / 2);
			else if (PEM_SPI_MISC_IRQS_PER_DEV != 0) {
				msg = PEM_SPI_MISC_IRQ(vsec_ctl.s.inst_num,
						(i - PEM_INT_VEC_E_INTA) % 8);
#if defined(PLAT_CN10K_FAMILY)
				/* Mask RST_INT if hot-plug disabled */
				if ((((i - PEM_INT_VEC_E_INTA) % 8) == 1) &&
					!is_pem_hotplug(vsec_ctl.s.inst_num) &&
					is_pem_in_rc_mode(vsec_ctl.s.inst_num))
					msg |= 0x100000000ull;
#endif
			} else
				msg = 0x100000000ull;	/* Masked */
			octeontx_write64(vector_base, msg);
			vector_base += 8;
			debug_io
			    ("PEM(%d): Vector:%d address :%llx irq:%llu\n",
			     vsec_ctl.s.inst_num, i, addr, msg);
		}
	}

	/*
	 * Bypass SMMU translation for MSIx delivery by PEM in ENDPOINT mode.
	 * In RC mode, the Linux driver will setup vector addresses to use
	 * virtual addresses, thus the 'msix_phys' bit must be clear.
	 */
	vsec_sctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	vsec_sctl.s.msix_phys = is_pem_in_ep_mode(vsec_ctl.s.inst_num);
	/* Bypass SMMU translation for MSIx delivery in PEM
	 * This helps legacy INT support for Switch as endpoint
	 */
#if defined(PLAT_CN10K_FAMILY)
	if (cavm_is_model(OCTEONTX_CN10KA) && (vsec_ctl.s.inst_num == 5) &&
	    (cavm_is_platform(PLATFORM_ASIM) ||
		(CSR_READ(CAVM_GPIO_PKG_VER) == 0x0)))
		vsec_sctl.s.msix_phys = 1;
#endif
	vsec_sctl.s.msix_sec_phys = is_pem_in_rc_mode(vsec_ctl.s.inst_num);
	octeontx_write32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL, vsec_sctl.u);
}

static void init_gti(uint64_t config_base, uint64_t config_size)
{
	struct pcie_config *pconfig = (struct pcie_config *)config_base;
	int i;
	uint8_t cap_pointer, bir = 0;
	uint16_t table_size = 0;
	uint64_t vector_base = 0, msg = 0;
	volatile uint32_t *sctl = (uint32_t *)
			 (config_base + CAVM_PCCPF_XXX_VSEC_SCTL);

	debug_io("GTI init called config_base:%llx size:%llx\n",
		 config_base, config_size);
	cap_pointer = pconfig->cap_pointer;
	print_config_space(pconfig);

	enable_msix(config_base, cap_pointer, &table_size, &bir);

	/* initialise MSI-X Vector table */
	if (table_size) {
		vector_base = get_bar_val(pconfig, bir);
		debug_io("table_size :%x bir:%1x \n", table_size, bir);
		debug_io("MSI-X vector base:%llx\n", vector_base);
	}

	/* configure interrupt vectors */
	for (i = 0; i < table_size; i++) {
		if (i < CAVM_GTI_INT_VEC_E_TX_TIMESTAMP)
			octeontx_write64(vector_base, (i % 2) ? CAVM_GICD_CLRSPI_NSR : CAVM_GICD_SETSPI_NSR);
		else
			octeontx_write64(vector_base, CAVM_GICD_SETSPI_NSR);
		vector_base += 8;
		if (i == CAVM_GTI_INT_VEC_E_WATCHDOG ||
		    i == CAVM_GTI_INT_VEC_E_WATCHDOG_CLEAR) {
			assert(GTI_WATCHDOG_SPI_IRQ_DEVS > 0);
			msg = GTI_WATCHDOG_SPI_IRQ(0);
		} else {
			msg = 0x100000000ULL; /* Masked */
		}
		octeontx_write64(vector_base, msg);
		vector_base += 8;
		debug_io("GTI: Vector:%d address :%llx irq:%llu\n", i,
			(i % 2 && i < CAVM_GTI_INT_VEC_E_TX_TIMESTAMP) ?
				CAVM_GICD_CLRSPI_NSR : CAVM_GICD_SETSPI_NSR,
			msg);
	}
	*sctl |= 0x1;
}

static void init_iobn(uint64_t config_base, uint64_t config_size)
{
	struct pcie_config *pconfig = (struct pcie_config *)config_base;
	union cavm_pccpf_xxx_vsec_ctl vsec_ctl;

	vsec_ctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_CTL);
	/* avoid 'unused' warning if IO debugging is not enabled */
	(void)vsec_ctl;

	debug_io("IOBN(%d) init called config_base:%llx size:%llx\n",
		vsec_ctl.s.inst_num, config_base, config_size);

	print_config_space(pconfig);

	/* invoke family-specific API */
	octeontx_init_iobn(config_base, config_size);
}

/*
 * This is the callback structure that holds callback for
 * different devices.
 */
struct ecam_init_callback init_callbacks[] = {
#if !(defined(PLAT_CN10K_FAMILY))
	{0xa008, 0x177d, init_smmu},
#endif
	{0xa020, 0x177d, init_pem},
	{0xa06c, 0x177d, init_pem},
	{0xa00f, 0x177d, init_uaa},
	{0xa017, 0x177d, init_gti},
	{0xa027, 0x177d, init_iobn},
	{0xa06b, 0x177d, init_iobn},
	{0xa094, 0x177d, init_iobn},
	{ECAM_INVALID_DEV_ID, 0, 0},	//no more callbacks
};

static inline int octeontx_bus_is_rsl(struct ecam_device *device)
{
#if defined(PLAT_CN10K_FAMILY)
	return (device->ecam == 0 && device->domain == 0 &&
		(device->bus > 0 && device->bus < 5));
#else
	return (device->ecam == 0 && device->domain == 0 && device->bus == 1);
#endif
}

/*
 * Initialize ECAM device structure
 */
static void octeontx_ecam_dev_init(struct ecam_device *device, unsigned ecam)
{
	device->base_addr = ECAM_PF_BAR2(ecam);
	device->ecam = ecam;
}

/*
 * Method to use probe_callbacks structure defined in
 * SoC-specific ECAM files to determine if given device should
 * be hidden from non-secure world.
 */
static int octeontx_call_probe(uint64_t pconfig)
{
	cavm_pccpf_xxx_id_t pccpf_id;
	struct ecam_probe_callback *probe_callbacks;
	int rc, i = 0;

	probe_callbacks = plat_ops.get_probes();
	if (!probe_callbacks)
		return 1;

	pccpf_id.u = octeontx_read32(pconfig + CAVM_PCCPF_XXX_ID);

	for (i = 0; probe_callbacks[i].devid != ECAM_INVALID_DEV_ID; i++) {
		if (probe_callbacks[i].devid == pccpf_id.s.devid
		    && probe_callbacks[i].vendor_id == pccpf_id.s.vendid) {
			debug_io("'calling io_probe ... %llx\n",
				 (uint64_t) probe_callbacks[i].io_probe);
			rc = probe_callbacks[i].io_probe(probe_callbacks[i].call_count);
			probe_callbacks[i].call_count++;
			return rc;
		}
	}

	return 1;
}

/*
 * Method to initialize given device if matched in init_callbacks definition. 
 */
static void octeontx_call_init(uint64_t pconfig)
{
	struct ecam_init_callback *plat_init_callbacks;
	cavm_pccpf_xxx_id_t pccpf_id;
	int i = 0;

	pccpf_id.u = octeontx_read32(pconfig + CAVM_PCCPF_XXX_ID);

	for (i = 0; init_callbacks[i].devid != ECAM_INVALID_DEV_ID; i++) {
		if (init_callbacks[i].devid == pccpf_id.s.devid
		    && init_callbacks[i].vendor_id == pccpf_id.s.vendid) {
			debug_io("'calling io_init ... %llx\n",
				 (uint64_t) init_callbacks[i].io_init);
			init_callbacks[i].io_init(pconfig,
						  sizeof(struct pcie_config));
		}
	}

	/* Look for plat_init_callbacks */
	plat_init_callbacks = plat_ops.get_plat_inits();
	if (!plat_init_callbacks)
		return;

	i = 0;
	for (i = 0; plat_init_callbacks[i].devid != ECAM_INVALID_DEV_ID; i++) {
		if (plat_init_callbacks[i].devid == pccpf_id.s.devid
		    && plat_init_callbacks[i].vendor_id == pccpf_id.s.vendid) {
			debug_io("'calling plat_io_init ... %llx\n",
				 (uint64_t) plat_init_callbacks[i].io_init);
			plat_init_callbacks[i].io_init(pconfig,
						sizeof(struct pcie_config));
		}
	}
}

static unsigned prev_ns_func = 0;
static void octeontx_ari_capability(struct ecam_device *device)
{
	cavm_pccpf_xxx_vsec_ctl_t vsec_ctl;
	unsigned act_func;
	uint64_t pconfig;

	if (device->func == 0)
		prev_ns_func = 0;

	/* Store the actual function number */
	act_func = device->func;

	/* Read pconfig for previous, valid function */
	device->func = prev_ns_func;
	pconfig = plat_ops.get_dev_config(device);

	/* Program ARI capability properly */
	vsec_ctl.u = octeontx_read32(pconfig + CAVM_PCCPF_XXX_VSEC_CTL);
	vsec_ctl.s.nxtfn_ns = act_func;
	octeontx_write32(pconfig + CAVM_PCCPF_XXX_VSEC_CTL, vsec_ctl.u);

	/* Update prev_ns_func value */
	device->func = act_func;
	prev_ns_func = device->func;
}

static inline int octeontx_dev_is_bridge(uint64_t pconfig)
{
	cavm_pccpf_xxx_id_t pccpf_id;

	pccpf_id.u = octeontx_read32(pconfig + CAVM_PCCPF_XXX_ID);
	if ((pccpf_id.s.devid & 0xff) == 0x02)
		return 1;

	return 0;
}

static void octeontx_ecam_dev_enumerate(struct ecam_device *device)
{
	uint64_t pconfig;
	int rc;
	union cavm_pccpf_xxx_vsec_ctl vsec_ctl;
	union cavm_pccpf_xxx_vsec_sctl vsec_sctl;

	/* Get address of the device */
	pconfig = plat_ops.get_dev_config(device);
	if (!pconfig) {
		debug_io("%s: Unable to get config\n", __func__);
		return;
	}

	/* reset the PCCPF_XXX_VSEC_CTL[NXTFN_NS] and PCCPF_XXX_VSEC_SCTL
	 * [NXTFN_S] with zero as BDK might have built the ARI chain
	 * and needs to be reset before configuring it
	 */
	if (octeontx_bus_is_rsl(device)) {
		debug_io("%s: reset NXTFN for ARI devices\n", __func__);
		vsec_ctl.u = octeontx_read32(pconfig + CAVM_PCCPF_XXX_VSEC_CTL);
		vsec_ctl.s.nxtfn_ns = 0;
		octeontx_write32(pconfig + CAVM_PCCPF_XXX_VSEC_CTL, vsec_ctl.u);
		vsec_sctl.u =  octeontx_read32(pconfig + CAVM_PCCPF_XXX_VSEC_SCTL);
		vsec_sctl.s.nxtfn_s = 0;
		octeontx_write32(pconfig + CAVM_PCCPF_XXX_VSEC_SCTL, vsec_sctl.u);
	}

	/* Call platform-specific method for secure settings */
	rc = plat_ops.get_secure_settings(device, pconfig);
	if (!rc) {
		debug_io("%s: Unable to get secure settings\n", __func__);
		return;
	}

	/* Call probe function on device (if probe method exist) */
	rc = octeontx_call_probe(pconfig);
	if (!rc) {
		debug_io("%s: Probe returned with rc=%d\n", __func__, rc);
		if (octeontx_bus_is_rsl(device))
			plat_ops.disable_func(device);
		else
			plat_ops.disable_dev(device);
		return;
	}

	/* Call init function on device */
	octeontx_call_init(pconfig);

	debug_io("%s: E%u:DOM%u:B%u:D%u:FUN%u\n"
		 "pconfig: 0x%llx, secure:%u, scp:%u, mcp:%u\n",
		 __func__, device->ecam, device->domain,
		 device->bus, device->dev, device->func, pconfig,
		 device->config.s.is_secure, device->config.s.is_scp_secure,
		 device->config.s.is_mcp_secure);

	/* For RSL bus, configure secure settings for function,
	 * otherwise configure device */
	if (octeontx_bus_is_rsl(device)) {
		if (device->config.s.is_secure) {
			plat_ops.disable_func(device);
		} else {
			octeontx_ari_capability(device);
			plat_ops.enable_func(device);
		}
	} else {
		if (device->config.s.is_secure) {
			plat_ops.disable_dev(device);
		} else {
			plat_ops.enable_dev(device);
		}
	}
	/* Program SSID for the device if applicable for
	* the platform
	*/
	if (plat_ops.program_ssid) {
		debug_io("%s: programming platform ssid...\n", __func__);
		plat_ops.program_ssid(device, pconfig);
	}

	debug_io("%s: pconfig: 0x%llx, value: 0x%x\n", __func__, pconfig,
		octeontx_read32(pconfig));

	if (octeontx_dev_is_bridge(pconfig)) {
		cavm_pccbr_xxx_bus_t sbus;

		sbus.u = octeontx_read32(pconfig + CAVM_PCCBR_XXX_BUS);
		if (sbus.s.sbnum != 0) {
			/* Add to brigdes list */
			ecam_bridges[device->dev].bus = sbus.s.sbnum;
			debug_io("Adding bridge=%d to list...\n",
				  sbus.s.sbnum);
		}
	}
}

static void octeontx_rsl_enumerate(struct ecam_device *device)
{
	/*
	 * Enumerate new RSL BUS, reset prev_ns_func counter
	 */
	prev_ns_func = 0;
	for (device->func = 0;
	     device->func < OCTEONTX_ECAM_MAX_FUNC;
	     device->func++) {
		device->dev = 0;
		octeontx_ecam_dev_enumerate(device);
	}
}

static void octeontx_dev_on_bus_enumerate(struct ecam_device *device)
{
	for (device->dev = 0;
	     device->dev < OCTEONTX_ECAM_MAX_DEV;
	     device->dev++) {
		device->func = 0;

		if (MIDR_PARTNUM(read_midr()) == T83PARTNUM &&
		    device->ecam == 0 && device->bus == 0 &&
		    device->dev == 0x19 && device->func == 0)
			plat_ops.disable_dev(device);
		else
			octeontx_ecam_dev_enumerate(device);
	}
}

static void octeontx_bus_enumerate(struct ecam_device *device)
{
	debug_io("%s: E%u:DOM%u:B%u\n",
		 __func__, device->ecam, device->domain, device->bus);

	plat_ops.enable_bus(device);

	octeontx_dev_on_bus_enumerate(device);
}

static void octeontx_scan_bridge(struct ecam_device *device)
{
	int bridge;

	for (bridge = 0; bridge < OCTEONTX_ECAM_MAX_DEV; bridge++) {
		/* Disable buses that does not exist */
		if (plat_ops.is_bus_disabled(device)) {
			plat_ops.disable_bus(device);
			continue;
		}
		/* We've got bus bridge */
		if (device->bus == ecam_bridges[bridge].bus) {
			plat_ops.enable_bus(device);
			if (plat_ops.skip_bus(device))
				return;

			if (octeontx_bus_is_rsl(device)) {
				octeontx_rsl_enumerate(device);
			} else {
				octeontx_dev_on_bus_enumerate(device);
			}

			ecam_bridges[bridge].bus = 0;
			continue;
		}
	}
}

static void octeontx_domain_setup(struct ecam_device *device)
{
	/* Scan bus 0 for all bridges */
	device->bus = 0;
	octeontx_bus_enumerate(device);

	/* Now go through all found bridges */
	for (device->bus = 1;
	     device->bus < OCTEONTX_ECAM_MAX_BUS;
	     device->bus++) {
		octeontx_scan_bridge(device);
	}
}

static void octeontx_ecam_setup(unsigned ecam)
{
	struct ecam_device *device = &ecam_dev;
	unsigned domain_count;

	octeontx_ecam_dev_init(device, ecam);
	domain_count = plat_ops.get_domain_count(device);

	for (device->domain = 0;
	     device->domain < domain_count;
	     device->domain++) {
		if (!plat_ops.is_domain_present(device))
			continue;
		octeontx_domain_setup(device);
	}
}

void octeontx_pci_init(void)
{
	unsigned ecam_count, ecam;

	ecam_count = plat_ops.get_ecam_count();
	for (ecam = 0; ecam < ecam_count; ecam++)
		octeontx_ecam_setup(ecam);
}
