/*
 * Copyright (c) 2016 Marvell.
 * This program is provided "as is" without any warranty of any kind,
 * and is distributed under the applicable Marvell proprietary limited use
 * license agreement.
 */

#include <platform_def.h>
#include <octeontx_common.h>

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <strtol.h>
#include <libfdt.h>
#include <plat_board_cfg.h>
#include <octeontx_ecam.h>
#include <octeontx_utils.h>
#include <plat_scfg.h>
#include <octeontx_irqs_def.h>

#include "cavm-csrs-ecam.h"
#include "cavm-csrs-gic.h"
#include "cavm-csrs-gpio.h"
#include "cavm-csrs-gser.h"
#include "cavm-csrs-pccpf.h"
#include "cavm-csrs-rst.h"

#ifdef DEBUG_ATF_PLAT_ECAM
#define debug_plat_ecam printf
#else
#define debug_plat_ecam(...) ((void) (0))
#endif

/* Probe for disabling TWSI busses from PCI scan */
static int ecam_probe_twsi(unsigned long long arg)
{
	return (plat_octeontx_bcfg->bcfg.bmc_boot_twsi_bus != arg);
}

/* Probe RST_CTLX for PEM usability. */
static int ecam_probe_pem(unsigned long long arg)
{
	union cavm_rst_soft_prstx soft_prst;

	soft_prst.u = CSR_READ(CAVM_RST_SOFT_PRSTX(arg));

	return soft_prst.s.soft_prst == 0;
}

/* Probe GSERX_CFG[SATA] for SATA usability. arg is the GSER number. */
static int ecam_probe_sata(unsigned long long arg)
{
	union cavm_gserx_cfg cfg;

	cfg.u = CSR_READ(CAVM_GSERX_CFG(arg / 2 + 4));

	return cfg.s.sata != 0;
}

/* Probe GSERX_CFG[BGX] for BGX usability. arg is the GSER number. */
static int ecam_probe_bgx(unsigned long long arg)
{
	union cavm_gserx_cfg cfg_dlm0;
	union cavm_gserx_cfg cfg_dlm1;

	cfg_dlm1.u = 0;

	/*
	 * On 83xx BGX is split across 2 DLMs, check both DLMs
	 * for marking BGX PCi device secure 
	 */
	switch (arg) {
	case 0:
		cfg_dlm0.u = CSR_READ(CAVM_GSERX_CFG(2));
		break;
	case 1:
		cfg_dlm0.u = CSR_READ(CAVM_GSERX_CFG(3));
		break;
	case 2:
		cfg_dlm0.u = CSR_READ(CAVM_GSERX_CFG(5));
		cfg_dlm1.u = CSR_READ(CAVM_GSERX_CFG(6));
		break;
	case 3:
		cfg_dlm0.u = CSR_READ(CAVM_GSERX_CFG(4));
		break;
	default:
		cfg_dlm0.u = 0;
	}

	return (cfg_dlm0.s.bgx || cfg_dlm1.s.bgx);
}

/* arg is LMC number */
static int ecam_probe_lmc(unsigned long long arg)
{
	return plat_octeontx_scfg->scfg.is_lmc_enabled[arg];
}

struct ecam_probe_callback probe_callbacks[] = {
	{0xa012, 0x177d, ecam_probe_twsi, 0},
	{0xa020, 0x177d, ecam_probe_pem, 0},
	{0xa01c, 0x177d, ecam_probe_sata, 0},
	{0xa026, 0x177d, ecam_probe_bgx, 0},
	{0xa022, 0x177d, ecam_probe_lmc, 0},
	{ECAM_INVALID_DEV_ID, 0, 0, 0}
};

static void init_cpt_rid(uint64_t config_base, uint64_t config_size)
{
	union cavm_pccpf_xxx_vsec_sctl vsec_sctl;

	vsec_sctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	vsec_sctl.cn8.rid = 0;
	octeontx_write32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL, vsec_sctl.u);
}

static void init_gpio(uint64_t config_base, uint64_t config_size)
{
	union cavm_pccpf_xxx_vsec_sctl vsec_sctl;
	struct pcie_config *pconfig = (struct pcie_config *)config_base;
	uint64_t vector_base;
	int i, vector_skip;
	uint16_t table_size = 0;
	uint8_t cap_ptr = pconfig->cap_pointer;
	uint8_t bir = 0;

	/*
	 * Check if we are intercepting interrupts of GPIO in ATF.
	 * This is for a feature where ATF will intercept certain GPIO
	 * interrupts and call a user space handler. It is done for low latency
	 * interrupt handling requirement in the user space.
	 *
	 * Do not continue if not intercepting.
	 */
	if (!plat_octeontx_bcfg->gpio_intercept_intr)
		return;

	debug_plat_ecam("GPIO init called config_base:%lx size:%lx\n",
			config_base, config_size);

	/* Mark the MSI-X interrupts as physical */
	vsec_sctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	vsec_sctl.s.msix_phys = 1;
	octeontx_write32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL, vsec_sctl.u);

	enable_msix(config_base, cap_ptr, &table_size, &bir);

	if (table_size) {
		debug_plat_ecam("table_size: %x, bir:%1x\n", table_size, bir);
		vector_base = get_bar_val(pconfig, bir);
		debug_plat_ecam("MSI-X vector base:%lx\n", vector_base);

		/* Skip the multicast interrupt vectors */
		vector_skip = CAVM_GPIO_INT_VEC_E_INTR_PINX_CN83XX(0);
		vector_base += vector_skip * 0x10;

		for (i = vector_skip; i < table_size; i++) {
			/* enable SECVEC (bit0) for each MSI-X vectors*/
			octeontx_write64(vector_base, ((i % 2) ?
						CAVM_GICD_CLRSPI_NSR :
						CAVM_GICD_SETSPI_NSR) | 1);
			vector_base += 8;
			octeontx_write64(vector_base, GPIO_SPI_IRQ_NSEC(0));
			vector_base += 8;
		}
	}
}

/*
 * Callback for platform specific block initialization
 */
struct ecam_init_callback plat_init_callbacks[] = {
	{0xa00a, 0x177d, init_gpio},
	{0xa040, 0x177d, init_cpt_rid}, /* 0x40 - PCC_DEV_IDL_E::CPT_PF */
	{0xa041, 0x177d, init_cpt_rid}, /* 0x41 - PCC_DEV_IDL_E::CPT_VF */
	{ECAM_INVALID_DEV_ID, 0, 0}
};


/*
 * Following device's BAR0 will be hidden
 * from non-secure world.
 * Set instance to the instance number
 * you want to hide or ECAM_ALL_INSTANCES
 * if all the instances are hidden
 */

struct secure_devices secure_devs[] = {
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_SMMU, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_GIC, ECAM_ALL_INSTANCES},
/*	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_GTI, ECAM_ALL_INSTANCES}, */
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_L2C, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_SGP, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_DAP, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_MIO_FUS, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_FUSF, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_NCSI, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_KEY, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_MIO_BOOT, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_UAA, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_PEM, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_IOBN, ECAM_ALL_INSTANCES},
/*	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_SLIRE, ECAM_ALL_INSTANCES}, */
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_VRM, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_CN83XX, CAVM_PCC_DEV_IDL_E_PCIERC, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_CN83XX, CAVM_PCC_DEV_IDL_E_CHIP, ECAM_ALL_INSTANCES},
/*	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_NDF, ECAM_ALL_INSTANCES}, */
	{ECAM_INVALID_PROD_ID, ECAM_INVALID_PCC_IDL_ID, ECAM_ALL_INSTANCES}
};

static inline uint64_t cn83xx_get_dev_config(struct ecam_device *dev)
{
	uint64_t pconfig;
	cavm_pccpf_xxx_id_t pccpf_id;

	pconfig = (dev->base_addr |
		  ((dev->bus << ECAM_BUS_SHIFT) & ECAM_BUS_MASK) |
		  ((dev->dev << ECAM_DEV_SHIFT) & ECAM_DEV_MASK) |
		  ((dev->func << ECAM_FUNC_SHIFT) & ECAM_FUNC_MASK));

	pccpf_id.u = octeontx_read32(pconfig + CAVM_PCCPF_XXX_ID);
	if (pccpf_id.s.vendid == 0xffff || pccpf_id.s.devid == 0xffff)
		return 0;

	return pconfig;
}

static int cn83xx_is_bus_disabled(struct ecam_device *dev)
{
	int rc = 0;

	if (((dev->ecam == 0) && (dev->bus > 11)) ||
	    ((dev->ecam == 1) && (dev->bus > 5)))
		rc = 1;

	return rc;
}

static inline int cn83xx_skip_bus(struct ecam_device *dev)
{
	return (((dev->ecam == 1) && (dev->bus > 0)) ||
		((dev->ecam == 0) && (dev->bus > 11)));
}

static inline void cn83xx_disable_bus(struct ecam_device *dev)
{
	cavm_ecamx_busx_sdis_t bus_sdis;

	/* disable bus */
	bus_sdis.u = CSR_READ(CAVM_ECAMX_BUSX_SDIS(dev->ecam, dev->bus));
	bus_sdis.s.sec = 1;
	CSR_WRITE(CAVM_ECAMX_BUSX_SDIS(dev->ecam, dev->bus), bus_sdis.u);
	debug_plat_ecam("disable_bus %d:%d\n", dev->ecam,
			dev->bus);
}

static inline void cn83xx_enable_bus(struct ecam_device *dev)
{
	cavm_ecamx_busx_sdis_t bus_sdis;
	cavm_ecamx_busx_nsdis_t bus_nsdis;

	/* enable bus */
	bus_sdis.u = CSR_READ(CAVM_ECAMX_BUSX_SDIS(dev->ecam, dev->bus));
	bus_sdis.s.sec = 0;
	bus_sdis.s.dis = 0;
	CSR_WRITE(CAVM_ECAMX_BUSX_SDIS(dev->ecam, dev->bus), bus_sdis.u);

	bus_nsdis.u = CSR_READ(CAVM_ECAMX_BUSX_NSDIS(dev->ecam, dev->bus));
	bus_nsdis.s.dis = 0;
	CSR_WRITE(CAVM_ECAMX_BUSX_NSDIS(dev->ecam, dev->bus), bus_nsdis.u);

	debug_plat_ecam("enable_bus %d:%d\n", dev->ecam, dev->bus);
}

static inline void cn83xx_disable_dev(struct ecam_device *dev)
{
	cavm_ecamx_devx_sdis_t dev_sdis;

	/* disable device */
	dev_sdis.u = CSR_READ(CAVM_ECAMX_DEVX_SDIS(dev->ecam, dev->dev));
	dev_sdis.s.sec = 1;
	CSR_WRITE(CAVM_ECAMX_DEVX_SDIS(dev->ecam, dev->dev), dev_sdis.u);
	debug_plat_ecam("disable_dev %d:%d:%02x\n", dev->ecam, dev->dev);
}

/* Function to read PCC-BRIDGE-ENABLE
 * from FDT.
 */
static inline int cn83xx_fdt_get_pccbr(void)
{
	const char *str;
	const void *fdt = fdt_ptr;
	int offset, len;
	static int pccbr, parse;

	if (parse) {
		return pccbr;

	} else {

		offset = fdt_path_offset(fdt, "/cavium,bdk");
		if (offset < 0) {
			WARN("FDT node not found\n");
			return offset;
		}
		str = fdt_getprop(fdt, offset, "PCC-BRIDGE-ENABLE", &len);
		if (str) {
			parse = 1;
			pccbr = strtol(str, NULL, 10);
			return pccbr;
		}

		/*If dts parameter is not present, default value is 0 */
		return 0;
	}
}

static inline int disable_pccbr(struct ecam_device *dev)
{
	/* disable PCC Bridge of BCH and RAD */
	if ((dev->ecam == 0) && (dev->bus == 0) &&
		(dev->dev == 0xE) && (dev->func == 0) &&
			!cn83xx_fdt_get_pccbr())
		return 1;

	return 0;
}

static inline void cn83xx_enable_dev(struct ecam_device *dev)
{
	cavm_ecamx_devx_sdis_t dev_sdis;
	cavm_ecamx_devx_nsdis_t dev_nsdis;

	if (disable_pccbr(dev)) {
		cn83xx_disable_dev(dev);
		return;
	}

	/* enable device */
	dev_sdis.u = CSR_READ(CAVM_ECAMX_DEVX_SDIS(dev->ecam, dev->dev));
	dev_sdis.s.sec = 0;
	dev_sdis.s.dis = 0;
	CSR_WRITE(CAVM_ECAMX_DEVX_SDIS(dev->ecam, dev->dev), dev_sdis.u);

	dev_nsdis.u = CSR_READ(CAVM_ECAMX_DEVX_NSDIS(dev->ecam, dev->dev));
	dev_nsdis.s.dis = 0;
	CSR_WRITE(CAVM_ECAMX_DEVX_NSDIS(dev->ecam, dev->dev), dev_nsdis.u);

	debug_plat_ecam("enable_dev %d:%02x\n", dev->ecam, dev->dev);
}

static inline void cn83xx_disable_func(struct ecam_device *dev)
{
	cavm_ecamx_rslx_sdis_t rsl_sdis;

	/* disable function */
	rsl_sdis.u = CSR_READ(CAVM_ECAMX_RSLX_SDIS(dev->ecam, dev->func));
	rsl_sdis.s.sec = 1;
	CSR_WRITE(CAVM_ECAMX_RSLX_SDIS(dev->ecam, dev->func), rsl_sdis.u);
	debug_plat_ecam("disable_func %d:%02x\n", dev->ecam, dev->func);
}

static inline void cn83xx_enable_func(struct ecam_device *dev)
{
	cavm_ecamx_rslx_sdis_t rsl_sdis;
	cavm_ecamx_rslx_nsdis_t rsl_nsdis;

	/* enable function */
	rsl_sdis.u = CSR_READ(CAVM_ECAMX_RSLX_SDIS(dev->ecam, dev->func));
	rsl_sdis.s.sec = 0;
	rsl_sdis.s.dis = 0;
	CSR_WRITE(CAVM_ECAMX_RSLX_SDIS(dev->ecam, dev->func), rsl_sdis.u);

	rsl_nsdis.u = CSR_READ(CAVM_ECAMX_RSLX_NSDIS(dev->ecam, dev->func));
	rsl_nsdis.s.dis = 0;
	CSR_WRITE(CAVM_ECAMX_RSLX_NSDIS(dev->ecam, dev->func), rsl_nsdis.u);

	debug_plat_ecam("enable_func %d:%02x\n", dev->ecam, dev->func);
}

static inline int cn83xx_get_ecam_count()
{
	cavm_ecamx_const_t ecam_const;

	ecam_const.u = CSR_READ(CAVM_ECAMX_CONST(0));

	return ecam_const.s.ecams;
}

static int cn83xx_get_domain_count(struct ecam_device *dev)
{
	/*
	 * In CN83xx ECAM topology, there're no domains.
	 * To satisfy PCI scan, at least 1 domain needs to be present
	 */
	return 1;
}

static inline int cn83xx_is_domain_present(struct ecam_device *dev)
{
	/*
	 * To satisfy proper PCI scan,
	 * at least 1 domain needs to be present
	 */
	return (dev->domain == 0);
}

static int cn83xx_get_secure_settings(struct ecam_device *dev, uint64_t pconfig)
{
	cavm_pccpf_xxx_id_t pccpf_id;
	union cavm_pccpf_xxx_vsec_ctl vsec_ctl;
	int i = 0;

	/* Get secure/non-secure setting */
	pccpf_id.u = octeontx_read32(pconfig + CAVM_PCCPF_XXX_ID);
	vsec_ctl.u = octeontx_read32(pconfig + CAVM_PCCPF_XXX_VSEC_CTL);
	debug_plat_ecam("%s: DeviceID=0x%04x\n", __func__, pccpf_id.s.devid);
	debug_plat_ecam("%s: InstNum=0x%04x\n", __func__, vsec_ctl.s.inst_num);

	dev->config.s.is_secure = 0;
	while (secure_devs[i].devid != ECAM_INVALID_PCC_IDL_ID) {
		if ((((secure_devs[i].prodid << ECAM_PROD_SHIFT) |
			secure_devs[i].devid) == pccpf_id.s.devid) &&
			(secure_devs[i].instance == ECAM_ALL_INSTANCES ||
			secure_devs[i].instance == vsec_ctl.s.inst_num))
			dev->config.s.is_secure = 1;
		i++;
	}

	/* Set SCP/MCP to 0, as they don't exist on T83 */
	dev->config.s.is_mcp_secure = 0;
	dev->config.s.is_scp_secure = 0;

	return 1;
}

struct ecam_probe_callback *cn83xx_get_probe_callbacks(void)
{
	return &probe_callbacks[0];
}

struct ecam_init_callback *cn83xx_get_init_callbacks(void)
{
	return &plat_init_callbacks[0];
}

const struct ecam_platform_defs plat_ops = {
	.soc_type = T83PARTNUM,
	.get_ecam_count = cn83xx_get_ecam_count,
	.get_domain_count = cn83xx_get_domain_count,
	.is_domain_present = cn83xx_is_domain_present,
	.get_secure_settings = cn83xx_get_secure_settings,
	.get_dev_config = cn83xx_get_dev_config,
	.get_probes = cn83xx_get_probe_callbacks,
	.get_plat_inits = cn83xx_get_init_callbacks,
	.is_bus_disabled = cn83xx_is_bus_disabled,
	.skip_bus = cn83xx_skip_bus,
	.enable_bus = cn83xx_enable_bus,
	.disable_bus = cn83xx_disable_bus,
	.enable_dev = cn83xx_enable_dev,
	.disable_dev = cn83xx_disable_dev,
	.enable_func = cn83xx_enable_func,
	.disable_func = cn83xx_disable_func
};
