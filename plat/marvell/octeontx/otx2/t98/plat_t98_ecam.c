/*
 * Copyright (c) 2016 Marvell.
 * This program is provided "as is" without any warranty of any kind,
 * and is distributed under the applicable Marvell proprietary limited use
 * license agreement.
 */

#include <platform_def.h>
#include <platform_setup.h>
#include <octeontx_common.h>

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <octeontx_ecam.h>
#include <platform_irqs_def.h>
#include <plat_board_cfg.h>
#include <plat_scfg.h>
#include <cgx.h>
#include <octeontx_utils.h>
#include <plat_otx2_configuration.h>
#include <rvu.h>
#include <qlm/qlm.h>

#include "cavm-csrs-ecam.h"
#include "cavm-csrs-pccpf.h"

/* for LEGACY logging, define DEBUG_ATF_PLAT_ECAM to enable debug logs */
#undef DEBUG_ATF_PLAT_ECAM

#if defined(MRVL_TF_LOG_MODULE)
#  undef MRVL_TF_LOG_MODULE
#  define MRVL_TF_LOG_MODULE  MRVL_TF_LOG_MODULE_PLAT_ECAM
#  define debug_plat_ecam(...) (mrvl_tf_log_modules & MRVL_TF_LOG_MODULE) ? \
				tf_log(LOG_MARKER_NOTICE __VA_ARGS__) : (void)0
#elif DEBUG_ATF_PLAT_ECAM
#define debug_plat_ecam printf
#else
#define debug_plat_ecam(...) ((void) (0))
#endif

/* Probe GSERNX_LANE_SCRATCHX[] for CGX config */
static int is_qlm_configured_as_cgx(int qlm)
{
	qlm_state_lane_t qlm_state;
	int lnum;
	int gserx, cgx_idx;
	cgx_config_t *cgx;

	cgx_idx = plat_get_cgx_idx(qlm);

	cgx = &(plat_octeontx_bcfg->cgx_cfg[cgx_idx]);
	if (cgx->qlm_ops == NULL) {
		debug_plat_ecam("%s:CGX%d: has no qlm_ops\n",  __func__, cgx_idx);
		return 0;
	}

	gserx = plat_otx2_get_gserx(qlm, NULL);

	lnum = plat_octeontx_scfg->qlm_max_lane_num[qlm];
	for (int lane = 0; lane < lnum; lane++) {
		qlm_state = cgx->qlm_ops->qlm_get_state(gserx, lane);
		if (qlm_state.s.cgx) {
			debug_plat_ecam("%s: CGX detected on qlm %d lane %d\n",
					__func__, qlm, lane);
			return 1;
		}
	};

	return 0;
}

static int ecam_probe_cgx(unsigned long long arg)
{
	int qlm;

	debug_plat_ecam("%s arg %lld\n", __func__, arg);

	/* cgx to qlm mapping.
	 * CGX0 - QLM9
	 * CGX1 - QLM10
	 * CGX2 - QLM11
	 * CGX3 - QLM12
	 * CGX4 - QLM13
	 */
	if (arg >= 5)
		return 0;

	qlm = arg + 9;

	return is_qlm_configured_as_cgx(qlm);
}

struct ecam_probe_callback probe_callbacks[] = {
	{0xa059, 0x177d, ecam_probe_cgx, 0},
	{ECAM_INVALID_DEV_ID, 0, 0, 0}
};

static void init_gpio(uint64_t config_base, uint64_t config_size)
{
	union cavm_pccpf_xxx_vsec_sctl vsec_sctl;

	debug_plat_ecam("GPIO init called config_base:%llx size:%llx\n",
			config_base, config_size);

	/* Block can have mix of secure and non-secure MSI-X interrupts */
	vsec_sctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	vsec_sctl.cn9.msix_sec_en = 1;
	vsec_sctl.cn9.msix_sec_phys = 1;
	octeontx_write32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL, vsec_sctl.u);
}

static void init_cpt_rid(uint64_t config_base, uint64_t config_size)
{
	union cavm_pccpf_xxx_vsec_sctl vsec_sctl;

	vsec_sctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	vsec_sctl.cn9.rid = plat_configure_cpt_rid();
	octeontx_write32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL, vsec_sctl.u);
}

static void init_rvu_rid(uint64_t config_base, uint64_t config_size)
{
	union cavm_pccpf_xxx_vsec_sctl vsec_sctl;

	vsec_sctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	vsec_sctl.cn9.rid = plat_configure_rid();
	octeontx_write32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL, vsec_sctl.u);
}

static void init_rvu(uint64_t config_base, uint64_t config_size)
{
	union cavm_pccpf_xxx_vsec_sctl vsec_sctl;

	vsec_sctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	vsec_sctl.cn9.rid = plat_configure_rid();
	octeontx_write32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL, vsec_sctl.u);

	octeontx_rvu_init();
}

static void init_cgx(uint64_t config_base, uint64_t config_size)
{
	union cavm_pccpf_xxx_vsec_ctl vsec_ctl;
	int cgx_id;

	vsec_ctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_CTL);
	cgx_id = vsec_ctl.s.inst_num;

	debug_plat_ecam("CGX(%d): init config_base:%llx size:%llx\n",
		vsec_ctl.s.inst_num, config_base, config_size);

	cgx_hw_init(cgx_id);
}

static void init_scp(uint64_t config_base, uint64_t config_size)
{
	struct pcie_config *pconfig = (struct pcie_config *)config_base;
	uint32_t *sctl = (uint32_t *)(config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	union cavm_pccpf_xxx_vsec_sctl vsec_sctl;
	uint16_t table_size;
	uint8_t cap_pointer, bir;
	uint64_t vector_base, msg;
	uint8_t i;

	/* Alter interrupts just for XCP0 */
	if (config_base & 0xffff)
		return;

	debug_plat_ecam("SCP init called config_base:%llx size:%llx\n",
		 config_base, config_size);

	vsec_sctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	/* Bypass SMMU */
	*sctl |= 0x1;

	/* Enable MSIX */
	bir = 0;
	table_size = 0;
	cap_pointer = pconfig->cap_pointer;
	enable_msix(config_base, cap_pointer, &table_size, &bir);

	vsec_sctl.s.msix_sec = 0;
	vsec_sctl.s.msix_sec_phys = 0;
	vsec_sctl.s.msix_phys = 1;
	octeontx_write32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL, vsec_sctl.u);

	/* Initialize MSI-X Vector table */
	if (table_size && (table_size > 2)) {
		vector_base = get_bar_val(pconfig, bir);
		debug_plat_ecam("table_size: %x bir:%1x\n", table_size, bir);
		debug_plat_ecam("MSI-X vector base: %llx\n", vector_base);

		for (i = 0; i < table_size; i++) {
			/* Ensure the interrupt is not pending ! */
			CSR_WRITE(CAVM_XCPX_XCP_DEVX_MBOX_RINT(0, i), 1ULL);
			octeontx_write64(vector_base, CAVM_GICD_SETSPI_NSR);
			vector_base += 8;
			msg = SCP_SPI_IRQ(i);
			debug_plat_ecam("SCP: vect: %d addr: %llx irq: %llu\n",
					i, CAVM_GICD_SETSPI_NSR, msg);
			octeontx_write64(vector_base, msg);
			vector_base += 8;
			CSR_WRITE(CAVM_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1S(0, i),
				  1ULL);
		}
	}
}

/* used for any device which just needs MSIX enabled */
static void init_msixen(uint64_t config_base, uint64_t config_size)
{
	union cavm_pccpf_xxx_msix_cap_hdr msix_cap_hdr;

	/* Enable MSIX delivery via PCCPF_XXX_MSIX_CAP_HDR[MSIXEN]. */
	msix_cap_hdr.u = octeontx_read32(config_base +
					 CAVM_PCCPF_XXX_MSIX_CAP_HDR);
	msix_cap_hdr.s.msixen = 1;
	octeontx_write32(config_base + CAVM_PCCPF_XXX_MSIX_CAP_HDR,
			 msix_cap_hdr.u);
}

struct ecam_init_callback plat_init_callbacks[] = {
	{0xa00a, 0x177d, init_gpio},
	{0xa022, 0x177d, init_msixen}, /* 0x20 - PCC_DEV_IDL_E::LMC */
	{0xa070, 0x177d, init_msixen}, /* 0x70 - PCC_DEV_IDL_E::MCC */
	{0xa073, 0x177d, init_msixen}, /* 0x73 - PCC_DEV_IDL_E::MDC */
	{0xa059, 0x177d, init_cgx}, /* 0x59 - PCC_DEV_IDL_E::CGX */
	{0xa065, 0x177d, init_rvu}, /* 0x65 - PCC_DEV_IDL_E::RVU_AF */
	{0xa067, 0x177d, init_scp}, /* 0x67 - PCC_DEV_IDL_E::XCP */
	{0xa063, 0x177d, init_rvu_rid}, /* 0x63 - PCC_DEV_IDL_E::RVU */
	{0xa0f6, 0x177d, init_rvu_rid}, /* 0xf6 - SW defined for SDP RVU PF */
	{0xa0f8, 0x177d, init_rvu_rid}, /* 0xf8 - PCC_DEV_IDL_E::RVU_AF_VF */
	{0xa0fd, 0x177d, init_cpt_rid}, /* 0xfd - PCC_DEV_IDL_E::RVU_CPT_PF */
	{0xa0fe, 0x177d, init_cpt_rid}, /* 0xfe - PCC_DEV_IDL_E::RVU_CPT_VF */
	{0xa0fb, 0x177d, init_rvu_rid}, /* 0xfb - PCC_DEV_IDL_E::RVU_NPA_PF */
	{0xa0fc, 0x177d, init_rvu_rid}, /* 0xfc - PCC_DEV_IDL_E::RVU_NPA_VF */
	{0xa0f9, 0x177d, init_rvu_rid}, /* 0xf9 - PCC_DEV_IDL_E::RVU_SSO_PF */
	{0xa0fa, 0x177d, init_rvu_rid}, /* 0xfa - PCC_DEV_IDL_E::RVU_SSO_VF */
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
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_GIC5, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_MIO_TWS, ECAM_CUSTOM_INSTANCE},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_UAA, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_LMC, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_OCLA, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_GSERN, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_DAP, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_FUSF, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_AVS, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_TSN, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_CCS, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_CCU, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_FUS5, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_BTS, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_NDF, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_PEM5, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_BCH, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_PSBM, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_XCP, ECAM_ALL_INSTANCES},
	{ECAM_INVALID_PROD_ID, ECAM_INVALID_PCC_IDL_ID, ECAM_ALL_INSTANCES}
};

struct secure_devices secure_mcp_devs[] = {
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_GIC5, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_GTI, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_UAA, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_LMC, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_OCLA, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_GSERN, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_DAP, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_FUSF, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_AVS, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_TSN, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_CCS, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_CCU, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_FUS5, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_RST5, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_BTS, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_BCH, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_PSBM, ECAM_ALL_INSTANCES},
	{ECAM_INVALID_PROD_ID, ECAM_INVALID_PCC_IDL_ID, ECAM_ALL_INSTANCES},
};

/*
 * Currently we're not hidding anything from SCP,
 * since it's operating in secure domain
 */
struct secure_devices secure_scp_devs[] = {
	{ECAM_INVALID_PROD_ID, ECAM_INVALID_PCC_IDL_ID, ECAM_ALL_INSTANCES},
};

static inline uint64_t cn98xx_get_dev_config(struct ecam_device *dev)
{
	uint64_t pconfig;
	cavm_pccpf_xxx_id_t pccpf_id;

	pconfig = (dev->base_addr |
		  ((dev->domain << ECAM_DOM_SHIFT) & ECAM_DOM_MASK) |
		  ((dev->bus << ECAM_BUS_SHIFT) & ECAM_BUS_MASK) |
		  ((dev->dev << ECAM_DEV_SHIFT) & ECAM_DEV_MASK) |
		  ((dev->func << ECAM_FUNC_SHIFT) & ECAM_FUNC_MASK));

	pccpf_id.u = octeontx_read32(pconfig + CAVM_PCCPF_XXX_ID);
	if (pccpf_id.s.vendid == 0xffff || pccpf_id.s.devid == 0xffff)
		return 0;

	return pconfig;
}

static int cn98xx_is_bus_disabled(struct ecam_device *dev)
{
	int rc = 0;

	/* Below buses does not exist in internal T98 topology */
	if (((dev->domain == 0) && (dev->bus > 12)) ||
	    ((dev->domain == 1) && ((dev->bus > 1) && (dev->bus != 4)))  ||
	    ((dev->domain == 2) && (dev->bus > 24)))
		rc = 1;

	return rc;
}

static int cn98xx_skip_bus(struct ecam_device *dev)
{
	return 0;
}

static inline void cn98xx_enable_bus(struct ecam_device *dev)
{
	cavm_ecamx_domx_busx_permit_t bus_permit;

	/* enable bus */
	bus_permit.u = CSR_READ(CAVM_ECAMX_DOMX_BUSX_PERMIT(dev->ecam,
				   dev->domain, dev->bus));
	bus_permit.s.sec_dis = 0;
	bus_permit.s.nsec_dis = 0;
	bus_permit.s.xcp0_dis = 0;
	bus_permit.s.xcp1_dis = 0;
	CSR_WRITE(CAVM_ECAMX_DOMX_BUSX_PERMIT(dev->ecam, dev->domain,
		     dev->bus), bus_permit.u);
	debug_plat_ecam("enable_bus E%d:DOM%d:B%d\n", dev->ecam, dev->domain, dev->bus);
}

static inline void cn98xx_disable_bus(struct ecam_device *dev)
{
	cavm_ecamx_domx_busx_permit_t bus_permit;

	/* disable bus */
	bus_permit.u = CSR_READ(CAVM_ECAMX_DOMX_BUSX_PERMIT(dev->ecam,
				   dev->domain, dev->bus));
	bus_permit.s.sec_dis = 0;
	bus_permit.s.nsec_dis = 1;
	bus_permit.s.xcp0_dis = 0;
	bus_permit.s.xcp1_dis = 0;
	CSR_WRITE(CAVM_ECAMX_DOMX_BUSX_PERMIT(dev->ecam, dev->domain,
		     dev->bus), bus_permit.u);
	debug_plat_ecam("disable_bus E%d:DOM%d:B%d\n", dev->ecam, dev->domain, dev->bus);
}

static inline void cn98xx_enable_dev(struct ecam_device *dev)
{
	cavm_ecamx_domx_devx_permit_t dev_permit;

	/* enable dev */
	dev_permit.u = CSR_READ(CAVM_ECAMX_DOMX_DEVX_PERMIT(dev->ecam,
				   dev->domain, dev->dev));
	dev_permit.s.sec_dis = 0;
	dev_permit.s.nsec_dis = 0;
	dev_permit.s.xcp0_dis = dev->config.s.is_scp_secure;
	dev_permit.s.xcp1_dis = dev->config.s.is_mcp_secure;
	CSR_WRITE(CAVM_ECAMX_DOMX_DEVX_PERMIT(dev->ecam, dev->domain,
		     dev->dev), dev_permit.u);
	debug_plat_ecam("enable_dev E%d:DOM%d:D%d\n", dev->ecam, dev->domain, dev->dev);
}

static inline void cn98xx_disable_dev(struct ecam_device *dev)
{
	cavm_ecamx_domx_devx_permit_t dev_permit;

	/* enable dev */
	dev_permit.u = CSR_READ(CAVM_ECAMX_DOMX_DEVX_PERMIT(dev->ecam,
				   dev->domain, dev->dev));
	dev_permit.s.sec_dis = 0;
	dev_permit.s.nsec_dis = 1;
	dev_permit.s.xcp0_dis = dev->config.s.is_scp_secure;
	dev_permit.s.xcp1_dis = dev->config.s.is_mcp_secure;
	CSR_WRITE(CAVM_ECAMX_DOMX_DEVX_PERMIT(dev->ecam, dev->domain,
		     dev->dev), dev_permit.u);
	debug_plat_ecam("disable_dev E%d:DOM%d:D%d\n", dev->ecam, dev->domain, dev->dev);
}

static inline void cn98xx_enable_func(struct ecam_device *dev)
{
	cavm_ecamx_domx_rslx_permit_t rsl_permit;

	/* enable func */
	rsl_permit.u = CSR_READ(CAVM_ECAMX_DOMX_RSLX_PERMIT(dev->ecam,
				   dev->domain, dev->func));
	rsl_permit.s.sec_dis = 0;
	rsl_permit.s.nsec_dis = 0;
	rsl_permit.s.xcp0_dis = dev->config.s.is_scp_secure;
	rsl_permit.s.xcp1_dis = dev->config.s.is_mcp_secure;
	CSR_WRITE(CAVM_ECAMX_DOMX_RSLX_PERMIT(dev->ecam, dev->domain,
		     dev->func), rsl_permit.u);
	debug_plat_ecam("enable_func E%d:DOM%d:F%d\n", dev->ecam, dev->domain, dev->func);
}

static inline void cn98xx_disable_func(struct ecam_device *dev)
{
	cavm_ecamx_domx_rslx_permit_t rsl_permit;

	/* disable func */
	rsl_permit.u = CSR_READ(CAVM_ECAMX_DOMX_RSLX_PERMIT(dev->ecam,
				   dev->domain, dev->func));
	rsl_permit.s.sec_dis = 0;
	rsl_permit.s.nsec_dis = 1;
	rsl_permit.s.xcp0_dis = dev->config.s.is_scp_secure;
	rsl_permit.s.xcp1_dis = dev->config.s.is_mcp_secure;
	CSR_WRITE(CAVM_ECAMX_DOMX_RSLX_PERMIT(dev->ecam, dev->domain,
		     dev->func), rsl_permit.u);
	debug_plat_ecam("disable_func E%d:DOM%d:F%d\n", dev->ecam, dev->domain, dev->func);
}

static int cn98xx_get_ecam_count()
{
	cavm_ecamx_const_t ecam_const;

	ecam_const.u = CSR_READ(CAVM_ECAMX_CONST(0));

	return ecam_const.s.ecams;
}

static int cn98xx_get_domain_count(struct ecam_device *dev)
{
	cavm_ecamx_const_t ecam_const;

	ecam_const.u = CSR_READ(CAVM_ECAMX_CONST(dev->ecam));

	return ecam_const.s.domains;
}

static inline int cn98xx_is_domain_present(struct ecam_device *dev)
{
	cavm_ecamx_domx_const_t dom_const;

	dom_const.u = CSR_READ(CAVM_ECAMX_DOMX_CONST(dev->ecam,
				  dev->domain));

	return (dom_const.s.pres && dom_const.s.permit);
}

static int cn98xx_matched_twsi(int instance)
{
	if (plat_octeontx_bcfg->bcfg.atf_managed_twsi[instance])
		return 1;

	if (plat_octeontx_bcfg->bcfg.slave_twsi.s.bus == -1)
		return 0;

	return (plat_octeontx_bcfg->bcfg.slave_twsi.s.bus == instance) ? 1 : 0;
}

static int cn98xx_matched_dev(struct secure_devices *dev,
	uint32_t g_pccpf_id, uint32_t g_vsec_ctl)
{
	cavm_pccpf_xxx_id_t pccpf_id;
	union cavm_pccpf_xxx_vsec_ctl vsec_ctl;

	pccpf_id.u = g_pccpf_id;
	vsec_ctl.u = g_vsec_ctl;

	// not matched product and device id
	if (ECAM_DEV_ID(dev->prodid, dev->devid) != pccpf_id.s.devid)
		return 0;

	// any instance is matching
	if (dev->instance == ECAM_ALL_INSTANCES)
		return 1;

	// given instance is matching
	if (dev->instance == vsec_ctl.s.inst_num)
		return 1;

	// custom match for specific instance
	if (dev->instance == ECAM_CUSTOM_INSTANCE) {
		debug_plat_ecam(
			"ECAM custom instance: pccpf.devid = %x instance=%d did=%x\n",
			pccpf_id.s.devid, vsec_ctl.s.inst_num,
			ECAM_PROD_DEV_ID(CAVM_PCC_DEV_IDL_E_MIO_TWS));

		switch (pccpf_id.s.devid) {
		case ECAM_PROD_DEV_ID(CAVM_PCC_DEV_IDL_E_MIO_TWS):
			return cn98xx_matched_twsi(vsec_ctl.s.inst_num);
		}
	}

	return 0;
}

static int cn98xx_get_secure_settings(struct ecam_device *dev, uint64_t pconfig)
{
	cavm_pccpf_xxx_id_t pccpf_id;
	union cavm_pccpf_xxx_vsec_ctl vsec_ctl;
	struct secure_devices *sdev;

	/* Get secure/non-secure setting */
	pccpf_id.u = octeontx_read32(pconfig + CAVM_PCCPF_XXX_ID);
	vsec_ctl.u = octeontx_read32(pconfig + CAVM_PCCPF_XXX_VSEC_CTL);
	debug_plat_ecam("%s: DeviceID=0x%04x\n", __func__, pccpf_id.s.devid);
	debug_plat_ecam("%s: InstNum=0x%04x\n", __func__, vsec_ctl.s.inst_num);

	dev->config.s.is_secure = 0;
	dev->config.s.is_mcp_secure = 0;
	dev->config.s.is_scp_secure = 0;

	sdev = secure_devs;
	while (sdev->devid != ECAM_INVALID_PCC_IDL_ID) {
		if (cn98xx_matched_dev(sdev, pccpf_id.u, vsec_ctl.u)) {
			dev->config.s.is_secure = 1;
			break;
		}
		sdev++;
	}

	sdev = secure_mcp_devs;
	while (sdev->devid != ECAM_INVALID_PCC_IDL_ID) {
		if (cn98xx_matched_dev(sdev, pccpf_id.u, vsec_ctl.u)) {
			dev->config.s.is_mcp_secure = 1;
			break;
		}
		sdev++;
	}

	sdev = secure_scp_devs;
	while (sdev->devid != ECAM_INVALID_PCC_IDL_ID) {
		if (cn98xx_matched_dev(sdev, pccpf_id.u, vsec_ctl.u)) {
			dev->config.s.is_scp_secure = 1;
			break;
		}
		sdev++;
	}

	return 1;
}

struct ecam_probe_callback *cn98xx_get_probe_callbacks(void)
{
	return &probe_callbacks[0];
}

struct ecam_init_callback *cn98xx_get_init_callbacks(void)
{
	return &plat_init_callbacks[0];
}

const struct ecam_platform_defs plat_ops = {
	.soc_type = T98PARTNUM,
	.get_ecam_count = cn98xx_get_ecam_count,
	.get_domain_count = cn98xx_get_domain_count,
	.is_domain_present = cn98xx_is_domain_present,
	.get_secure_settings = cn98xx_get_secure_settings,
	.get_dev_config = cn98xx_get_dev_config,
	.get_probes = cn98xx_get_probe_callbacks,
	.get_plat_inits = cn98xx_get_init_callbacks,
	.is_bus_disabled = cn98xx_is_bus_disabled,
	.skip_bus = cn98xx_skip_bus,
	.enable_bus = cn98xx_enable_bus,
	.disable_bus = cn98xx_disable_bus,
	.enable_dev = cn98xx_enable_dev,
	.disable_dev = cn98xx_disable_dev,
	.enable_func = cn98xx_enable_func,
	.disable_func = cn98xx_disable_func,
};