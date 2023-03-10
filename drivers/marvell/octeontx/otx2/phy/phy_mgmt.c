/*
 * Copyright (c) 2018 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

/* PHY driver for OcteonTX2 */

#include <arch.h>
#include <stdio.h>
#include <debug.h>
#include <string.h>
#include <platform_def.h>
#include <timers.h>
#include <octeontx_common.h>
#include <drivers/delay_timer.h>
#include <plat_board_cfg.h>
#include <smi.h>
#include <eth_intf.h>
#include <cgx.h>
#include <phy_mgmt.h>
#include <octeontx_utils.h>
#include <sh_fwdata.h>
#include <octeontx_mmap_utils.h>

/* define DEBUG_ATF_NW_MGMT to enable debug logs */
#undef DEBUG_ATF_NW_MGMT	/* PHY, SFP/QSFP management */

#ifdef DEBUG_ATF_NW_MGMT
#define debug_nw_mgmt printf
#else
#define debug_nw_mgmt(...) ((void) (0))
#endif

int phy_get_link_status(int cgx_id, int lmac_id,
				link_state_t *link)
{
	cgx_lmac_config_t *lmac = NULL;
	phy_config_t *phy = NULL;

	debug_nw_mgmt("%s: %d:%d\n", __func__, cgx_id, lmac_id);

	/* Get the LMAC type for each LMAC */
	lmac = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id];
	phy = &lmac->phy_config;

	debug_nw_mgmt("%s: mode %d\n", __func__, lmac->mode);

	if (!lmac->phy_present)
		return -1;

	if (phy->mux_switch)
		smi_set_switch(phy, 1); /* Enable the switch */

	/* Call PHY specific probe callback here */
	if (phy->valid) {
		lmac->phy_config.drv->get_link_status(cgx_id,
				lmac_id, link);
		lmac->phy_config.link_speed = link->s.speed;
		lmac->phy_config.link_duplex = link->s.full_duplex;
	}

	if (phy->mux_switch)
		smi_set_switch(phy, 0); /* Disable the switch */

	return 0;
}

void phy_probe(int cgx_id, int lmac_id)
{
	phy_config_t *phy;

	debug_nw_mgmt("%s: %d:%d\n", __func__, cgx_id, lmac_id);

	phy = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id].phy_config;

	/* Enable the SMI/MDIO bus */
	smi_reset(phy->mdio_bus);

	if (phy->mux_switch)
		smi_set_switch(phy, 1); /* enable the switch */

	/* Call PHY specific probe callback here */
	if (phy->valid)
		phy->drv->probe(cgx_id, lmac_id);

	if (phy->mux_switch)
		smi_set_switch(phy, 0); /* Disable the switch */

	sh_fwdata_update_phy_mod_type(cgx_id, lmac_id);
	sh_fwdata_update_phy_can_change_mod_type(cgx_id, lmac_id);
	sh_fwdata_update_phy_has_fec_stats(cgx_id, lmac_id);
}

void phy_config(int cgx_id, int lmac_id)
{
	phy_config_t *phy;

	debug_nw_mgmt("%s: %d:%d\n", __func__, cgx_id, lmac_id);

	phy = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id].phy_config;

	if (phy->mux_switch)
		smi_set_switch(phy, 1); /* Enable the switch */

	/* Call PHY specific config callback here */
	if (phy->valid)
		phy->drv->config(cgx_id, lmac_id);

	if (phy->mux_switch)
		smi_set_switch(phy, 0); /* Disable the switch */
}

#ifdef DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS

int phy_set_loopback(int eth_id, int lmac_id, int host_side, int lbk_type, int enable)
{
	int ret = -1;
	phy_config_t *phy;

	debug_nw_mgmt("%s: %d:%d en=%d\n", __func__, eth_id, lmac_id, enable);

	if (eth_id < 0 || eth_id >= MAX_CGX)
		return -1;

	phy = &plat_octeontx_bcfg->cgx_cfg[eth_id].lmac_cfg[lmac_id].phy_config;

	if (phy->mux_switch)
		smi_set_switch(phy, 1); /* Enable the switch */

	/* Call PHY specific config callback here */
	if (phy->valid && phy->drv->set_loopback)
		ret = phy->drv->set_loopback(eth_id, lmac_id, host_side, lbk_type, enable);

	if (phy->mux_switch)
		smi_set_switch(phy, 0); /* Disable the switch */

	return ret;
}

int phy_get_temp(int eth_id, int lmac_id, int *temp)
{
	int ret = -1;
	phy_config_t *phy;

	debug_nw_mgmt("%s: %d:%d\n", __func__, eth_id, lmac_id);

	if (eth_id < 0 || eth_id >= MAX_CGX)
		return -1;

	phy = &plat_octeontx_bcfg->cgx_cfg[eth_id].lmac_cfg[lmac_id].phy_config;

	if (phy->mux_switch)
		smi_set_switch(phy, 1); /* Enable the switch */

	/* Call PHY specific config callback here */
	if (phy->valid && phy->drv->get_temp && temp)
		ret = phy->drv->get_temp(eth_id, lmac_id, temp);

	if (phy->mux_switch)
		smi_set_switch(phy, 0); /* Disable the switch */

	return ret;
}

int phy_set_serdes_cfg(int eth_id, int lmac_id, phy_serdes_cfg_t *cfg)
{
	int ret = -1;
	phy_config_t *phy;

	debug_nw_mgmt("%s: %d:%d\n", __func__, eth_id, lmac_id);

	if (eth_id < 0 || eth_id >= MAX_CGX)
		return -1;

	phy = &plat_octeontx_bcfg->cgx_cfg[eth_id].lmac_cfg[lmac_id].phy_config;

	if (phy->mux_switch)
		smi_set_switch(phy, 1); /* Enable the switch */

	/* Call PHY specific config callback here */
	if (phy->valid && phy->drv->set_serdes_cfg && cfg)
		ret = phy->drv->set_serdes_cfg(eth_id, lmac_id, cfg);

	if (phy->mux_switch)
		smi_set_switch(phy, 0); /* Disable the switch */

	return ret;
}

int phy_get_serdes_cfg(int eth_id, int lmac_id, phy_serdes_cfg_t *cfg)
{
	int ret = -1;
	phy_config_t *phy;

	debug_nw_mgmt("%s: %d:%d\n", __func__, eth_id, lmac_id);

	if (eth_id < 0 || eth_id >= MAX_CGX)
		return -1;

	phy = &plat_octeontx_bcfg->cgx_cfg[eth_id].lmac_cfg[lmac_id].phy_config;

	if (phy->mux_switch)
		smi_set_switch(phy, 1); /* Enable the switch */

	/* Call PHY specific config callback here */
	if (phy->valid && phy->drv->get_serdes_cfg && cfg)
		ret = phy->drv->get_serdes_cfg(eth_id, lmac_id, cfg);

	if (phy->mux_switch)
		smi_set_switch(phy, 0); /* Disable the switch */

	return ret;
}

int phy_read_reg(int eth_id, int lmac_id,
	int mode, int dev_page, int reg, int *val)
{
	int ret = -1;
	phy_config_t *phy;

	debug_nw_mgmt("%s: %d:%d\n", __func__, eth_id, lmac_id);

	if (eth_id < 0 || eth_id >= MAX_CGX)
		return -1;

	phy = &plat_octeontx_bcfg->cgx_cfg[eth_id].lmac_cfg[lmac_id].phy_config;

	if (phy->mux_switch)
		smi_set_switch(phy, 1); /* Enable the switch */

	if (phy->valid && val) {
		if (mode == CLAUSE22) {
			*val = (dev_page >= 0) ?
				phy_mdio_c22_paged_read(phy, dev_page, reg) :
				phy_mdio_read(phy, mode, dev_page, reg);

			ret = 0;
		} else if (mode == CLAUSE45 && dev_page >= 0) {
			*val = phy_mdio_read(phy, mode, dev_page, reg);
			ret = 0;
		}
	}

	if (phy->mux_switch)
		smi_set_switch(phy, 0); /* Disable the switch */

	return ret;
}

int phy_write_reg(int eth_id, int lmac_id,
	int mode, int dev_page, int reg, int val)
{
	int ret = -1;
	phy_config_t *phy;

	debug_nw_mgmt("%s: %d:%d\n", __func__, eth_id, lmac_id);

	if (eth_id < 0 || eth_id >= MAX_CGX)
		return -1;

	phy = &plat_octeontx_bcfg->cgx_cfg[eth_id].lmac_cfg[lmac_id].phy_config;

	if (phy->mux_switch)
		smi_set_switch(phy, 1); /* Enable the switch */

	if (phy->valid) {
		if (mode == CLAUSE22) {
			if (dev_page >= 0)
				phy_mdio_c22_paged_write(phy, dev_page, reg, val);
			else
				phy_mdio_write(phy, mode, dev_page, reg, val);

			ret = 0;
		} else if (mode == CLAUSE45 && dev_page >= 0) {
			phy_mdio_write(phy, mode, dev_page, reg, val);
			ret = 0;
		}
	}

	if (phy->mux_switch)
		smi_set_switch(phy, 0); /* Disable the switch */

	return ret;
}
int phy_eye_capture(int eth_id, int lmac_id, int host_side, int type)
{
	int ret = -1;
	phy_config_t *phy;

	debug_nw_mgmt("%s: %d:%d\n", __func__, eth_id, lmac_id);

	if (eth_id < 0 || eth_id >= MAX_CGX)
		return -1;

	phy = &plat_octeontx_bcfg->cgx_cfg[eth_id].lmac_cfg[lmac_id].phy_config;

	if (phy->mux_switch)
		smi_set_switch(phy, 1); /* Enable the switch */

	/* Call PHY specific config callback here */
	if (phy->valid && phy->drv->get_eye)
		ret = phy->drv->get_eye(eth_id, lmac_id, host_side, type);

	if (phy->mux_switch)
		smi_set_switch(phy, 0); /* Disable the switch */
	return ret;
}
int phy_pkt_gen(int eth_id, int lmac_id, int cmd, int value)
{
	int ret = -1;
	phy_config_t *phy;

	debug_nw_mgmt("%s: %d:%d\n", __func__, eth_id, lmac_id);

	if (eth_id < 0 || eth_id >= MAX_CGX)
		return -1;

	phy = &plat_octeontx_bcfg->cgx_cfg[eth_id].lmac_cfg[lmac_id].phy_config;

	if (phy->mux_switch)
		smi_set_switch(phy, 1); /* Enable the switch */

	/* Call PHY specific config callback here */
	if (phy->valid && phy->drv->pkt_gen)
		ret = phy->drv->pkt_gen(eth_id, lmac_id, cmd, value);

	if (phy->mux_switch)
		smi_set_switch(phy, 0); /* Disable the switch */
	return ret;
}

#endif /* DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS */

#ifdef ATF_ENABLE_MAC_ADV_CMDS
int phy_advance_commads(int eth_id, int lmac_id, uintptr_t *adv_cmds, int size)
{
	int ret = -1;
	phy_config_t *phy;
	uint64_t base_addr = 0;
	const uint64_t mask = ~((uint64_t)PAGE_SIZE_MASK);
	int ns_map_size;

	debug_nw_mgmt("%s: %d:%d\n", __func__, eth_id, lmac_id);

	if (eth_id < 0 || eth_id >= MAX_CGX)
		return -1;

	phy = &plat_octeontx_bcfg->cgx_cfg[eth_id].lmac_cfg[lmac_id].phy_config;

	if (phy->mux_switch)
		smi_set_switch(phy, 1); /* Enable the switch */

	/* User Buffer  */
	ns_map_size = (size + PAGE_SIZE - 1) & -PAGE_SIZE;
	base_addr = (uintptr_t)adv_cmds & mask;

	debug_nw_mgmt("%s: base_addr %llx ns_map_size %d\n", __func__,
					base_addr, ns_map_size);
	if (((uintptr_t)adv_cmds + size) > (base_addr + ns_map_size))
		ns_map_size += PAGE_SIZE;

	ret = octeontx_mmap_add_dynamic_region_with_sync(base_addr, base_addr,
						ns_map_size, MT_RW | MT_NS);
	if (ret) {
		WARN("Version check descriptor mmap failed (%d)\n", ret);
		goto error;
	}
	debug_nw_mgmt("%s: Mapping OK %d:%d\n", __func__, eth_id, lmac_id);

	debug_nw_mgmt("%s: phy->valid %d %d:%d\n", __func__, phy->valid, eth_id, lmac_id);
	/* Call PHY specific config callback here */
	if (phy->valid && phy->drv->mac_adv_cmds) {
		phy->drv->mac_adv_cmds(eth_id, lmac_id, adv_cmds, size);
		debug_nw_mgmt("%s: called >mac_adv_cmds %d:%d adv_cmds %p"
			" size %d\n", __func__, eth_id, lmac_id, adv_cmds, size);
	}

	if (base_addr && ns_map_size)
		octeontx_mmap_remove_dynamic_region_with_sync(base_addr,
							ns_map_size);

	if (phy->mux_switch)
		smi_set_switch(phy, 0); /* Disable the switch */

	debug_nw_mgmt("%s: Exit %d:%d\n", __func__, eth_id, lmac_id);

error:
	return ret;
}
#endif /* ATF_ENABLE_MAC_ADV_CMDS */

int phy_set_mod_type(int cgx_id, int lmac_id, phy_mod_type_t mod_type)
{
	cgx_lmac_config_t *lmac;
	phy_config_t *phy;
	int qlm_mode;

	debug_nw_mgmt("%s: %d:%d\n", __func__, cgx_id, lmac_id);

	lmac = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id];
	phy = &lmac->phy_config;

	if (phy->mod_type == mod_type)
		return 0; /* no change in mod_type */

	if (!(phy->drv->flags & PHY_FLAG_SUPPORTS_CHANGING_MOD_TYPE)) {
		ERROR("%s: %d:%d Changing PHY modulation type not supported\n",
		      __func__, cgx_id, lmac_id);
		return -1;
	}

	if (mod_type != PHY_MOD_TYPE_PAM4 && mod_type != PHY_MOD_TYPE_NRZ) {
		ERROR("%s: %d:%d invalid mod_type %d\n", __func__, cgx_id,
		      lmac_id, mod_type);
		return -1;
	}

	if (mod_type == PHY_MOD_TYPE_PAM4) {
		qlm_mode = lmac->mode_idx;
		switch (qlm_mode) {
		/* For now, only these two QLM modes are permitted to have
		 * PAM4 modulation on the PHY line side.
		 */
		case QLM_MODE_50GAUI_2_C2C:
		case QLM_MODE_50GAUI_4_C2C:
			phy->mod_type = PHY_MOD_TYPE_PAM4;
			if (lmac->line_fec != CGX_FEC_RS) {
				WARN("%s: %d:%d Setting FEC to RS because PAM4 requires it.\n",
				     __func__, cgx_id, lmac_id);
				cgx_set_fec_type(cgx_id, lmac_id, CGX_FEC_RS);
				cgx_update_flash_fec_param(cgx_id, lmac_id,
							   CGX_FEC_RS);
				/* No need to call phy_config() here because it
				 * already got called from cgx_set_fec_type().
				 */
			} else {
				phy_config(cgx_id, lmac_id);
			}
			break;

		default:
			ERROR("%s: %d:%d PAM4 is not supported at current link speed.\n",
			      __func__, cgx_id, lmac_id);
			return -1;
		}
	} else {
		phy->mod_type = PHY_MOD_TYPE_NRZ;
		phy_config(cgx_id, lmac_id);
	}

	sh_fwdata_update_phy_mod_type(cgx_id, lmac_id);

	return 0;
}

void phy_set_supported_link_modes(int cgx_id, int lmac_id)
{
	phy_config_t *phy;

	debug_nw_mgmt("%s: %d:%d\n", __func__, cgx_id, lmac_id);

	phy = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id].phy_config;

	/* Call PHY specific callback here */
	if (phy->valid)
		phy->drv->set_supported_modes(cgx_id, lmac_id);
}

void phy_reset(int cgx_id, int lmac_id)
{
	phy_config_t *phy;

	debug_nw_mgmt("%s: %d:%d\n", __func__, cgx_id, lmac_id);

	phy = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id].phy_config;

	if (phy->mux_switch)
		smi_set_switch(phy, 1); /* Enable the switch */

	/* Call PHY specific config callback here */
	if (phy->valid)
		phy->drv->reset(cgx_id, lmac_id);

	if (phy->mux_switch)
		smi_set_switch(phy, 0); /* Disable the switch */
}

void phy_lookup(int cgx_id, int lmac_id, int type)
{
	cgx_lmac_config_t *lmac;

	debug_nw_mgmt("%s: %d:%d\n", __func__, cgx_id, lmac_id);

	lmac = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id];

	/* First look for PHY driver in Marvell PHY table */
	lmac->phy_config.drv = phy_marvell_drv_lookup(type);
	if (lmac->phy_config.drv != NULL) {
		lmac->phy_config.valid = 1;
		return;
	}
	/* Next look for PHY driver in Vitesse PHY table */
	lmac->phy_config.drv = phy_vitesse_drv_lookup(type);
	if (lmac->phy_config.drv != NULL) {
		lmac->phy_config.valid = 1;
		return;
	}

	/* FIXME: Add new PHY table lookup here */

	/* Last, look for PHY type in Generic PHY table */
	lmac->phy_config.drv = phy_generic_drv_lookup(type);
	if (lmac->phy_config.drv != NULL) {
		lmac->phy_config.valid = 1;
		return;
	}

	/* If reached here, no valid PHY driver found */
	lmac->phy_config.valid = 0;
	ERROR("%s: %d:%d, no valid PHY driver found for type %d\n", __func__,
			cgx_id, lmac_id, type);
}

#if defined(DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS) ||\
	defined(DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS)
int phy_enable_prbs(int cgx_id, int lmac_id, int host_side, int prbs, int dir)
{
	phy_config_t *phy;
	uint64_t ret = -1;

	debug_nw_mgmt("%s: %d:%d\n", __func__, cgx_id, lmac_id);

	if (cgx_id < 0 || cgx_id >= MAX_CGX)
		return -1;

	phy = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id].phy_config;

	if (phy->mux_switch)
		smi_set_switch(phy, 1); /* Enable the switch */

	/* Call PHY specific enable_prbs callback here */
	if (phy->valid && phy->drv->enable_prbs)
		ret = phy->drv->enable_prbs(cgx_id, lmac_id, host_side, prbs,
					dir);

	if (phy->mux_switch)
		smi_set_switch(phy, 0); /* Disable the switch */

	return ret;
}

int phy_disable_prbs(int cgx_id, int lmac_id, int host_side, int prbs)
{
	phy_config_t *phy;
	uint64_t ret = -1;

	debug_nw_mgmt("%s: %d:%d\n", __func__, cgx_id, lmac_id);

	if (cgx_id < 0 || cgx_id >= MAX_CGX)
		return -1;

	phy = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id].phy_config;

	if (phy->mux_switch)
		smi_set_switch(phy, 1); /* Enable the switch */

	/* Call PHY specific disable_prbs callback here */
	if (phy->valid && phy->drv->disable_prbs)
		ret = phy->drv->disable_prbs(cgx_id, lmac_id, host_side, prbs);

	if (phy->mux_switch)
		smi_set_switch(phy, 0); /* Disable the switch */

	return ret;
}

uint64_t phy_get_prbs_errors(int cgx_id, int lmac_id, int host_side,
	int clear, int prbs)
{
	phy_config_t *phy;
	uint64_t ret = -1;

	debug_nw_mgmt("%s: %d:%d\n", __func__, cgx_id, lmac_id);

	if (cgx_id < 0 || cgx_id >= MAX_CGX)
		return -1;

	phy = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id].phy_config;

	if (phy->mux_switch)
		smi_set_switch(phy, 1); /* Enable the switch */

	/* Call PHY specific get_prbs_errors callback here */
	if (phy->valid && phy->drv->get_prbs_errors)
		ret = phy->drv->get_prbs_errors(cgx_id, lmac_id, host_side,
					clear, prbs);

	if (phy->mux_switch)
		smi_set_switch(phy, 0); /* Disable the switch */

	return ret;
}
#endif /* DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS ||
	* DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS
	*/

/* Wrapper APIs for SMI driver for now */
void phy_set_switch(phy_config_t *phy, int enable)
{
	smi_set_switch(phy, enable);
}

int phy_mdio_read(phy_config_t *phy, int mode, int devad, int reg)
{
	int val = 0;

	if (phy->mux_switch)
		smi_set_switch(phy, 1); /* enable the switch */

	val = smi_read(phy->mdio_bus, mode, phy->addr, devad, reg);

	if (phy->mux_switch)
		smi_set_switch(phy, 0); /* Disable the switch */

	return val;
}

void phy_mdio_write(phy_config_t *phy, int mode, int devad, int reg, int val)
{
	smi_write(phy->mdio_bus, phy->addr, devad, mode, reg, val);
}

int phy_mdio_c22_paged_read(phy_config_t *phy, int page, int reg)
{
	int val = 0;
	int page_sel_reg;

	if (phy->valid && phy->drv->get_page_select_register)
		page_sel_reg = phy->drv->get_page_select_register();
	else
		page_sel_reg = MII_MARVELL_22_PAGE_REG;

	if (phy->mux_switch)
		smi_set_switch(phy, 1); /* enable the switch */

	/* First, set the requested page */
	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22, page_sel_reg, page);
	/* Read the register */
	val = smi_read(phy->mdio_bus, CLAUSE22, phy->addr, -1, reg);
	/* Set the page back to zero */
	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22, page_sel_reg, 0);

	if (phy->mux_switch)
		smi_set_switch(phy, 0); /* Disable the switch */

	return val;
}

void phy_mdio_c22_paged_write(phy_config_t *phy, int page, int reg, int val)
{
	int page_sel_reg;

	if (phy->valid && phy->drv->get_page_select_register)
		page_sel_reg = phy->drv->get_page_select_register();
	else
		page_sel_reg = MII_MARVELL_22_PAGE_REG;

	if (phy->mux_switch)
		smi_set_switch(phy, 1); /* enable the switch */

	/* First, set the requested page */
	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22, page_sel_reg, page);
	/* Read the register */
	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22, reg, val);
	/* Set the page back to zero */
	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22, page_sel_reg, 0);

	if (phy->mux_switch)
		smi_set_switch(phy, 0); /* Disable the switch */
}

int phy_get_fec_stats(int cgx_id, int lmac_id)
{
	cgx_lmac_config_t *lmac = NULL;
	phy_config_t *phy = NULL;
	int ret;

	debug_nw_mgmt("%s: %d:%d\n", __func__, cgx_id, lmac_id);

	lmac = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id];
	phy = &lmac->phy_config;

	if (!lmac->phy_present)
		return -1;

	if (!(phy->drv->flags & PHY_FLAG_HAS_FEC_STATS))
		return -1;

	if (phy->mux_switch)
		smi_set_switch(phy, 1); /* Enable the switch */

	if (phy->valid && phy->drv->get_fec_stats)
		ret = phy->drv->get_fec_stats(cgx_id, lmac_id);
	else
		ret = -1;

	if (phy->mux_switch)
		smi_set_switch(phy, 0); /* Disable the switch */

	return ret;
}
