/*
 * Copyright (c) 2019 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <arch.h>
#include <stdio.h>
#include <debug.h>
#include <drivers/delay_timer.h>
#include <platform_def.h>
#include <octeontx_common.h>
#include <plat_board_cfg.h>
#include <cgx.h>
#include <eth_intf.h>
#include <phy_marvell.h>
#include <phy_mgmt.h>
#include <smi.h>

#include "mydApiRegs.h"
#include "mydApiTypes.h"
#include "mydAPI.h"
#include "mydDiagnostics.h"
#include "mydUtils.h"
#include "mydInitialization.h"
#include "mydFwImages.h"
#include "mydHwSerdesCntl.h"
#include "mydFEC.h"

/* In the device tree, the "port" property of a 6141 phy node specifies the
 * PHY lane number to use.  If "port" is absent in a phy node, the device tree
 * parser will return -1 as the value of port.  We will treat -1 as if it were
 * 0 so that this 6141 driver remains compatible with legacy device trees that
 * have missing "port"s in their 6141 phy nodes.
 */
#define PHY_PORT_TO_LANE(p) (((p) == -1) ? 0 : (p))

typedef struct {
	MYD_DEV_PTR pdev;
	MYD_DEV myd_dev;
#define STATE_DOWN       0
#define STATE_UP         1
#define STATE_CONFIGURED 2
	int state;
} priv_6141_t;

#define PDEV(p) ((priv_6141_t *)(p))->pdev

priv_6141_t marvell_6141_priv[MAX_CGX];

static MYD_STATUS myd_read_mdio(MYD_DEV_PTR pDev, MYD_U16 mdioPort,
				MYD_U16 mmd, MYD_U16 reg, MYD_U16 *value)
{
	int read;
	phy_config_t *phy = pDev->hostContext;

	read = smi_read(phy->mdio_bus, CLAUSE45, phy->addr, mmd, reg);
	*value = read;
	return MYD_OK;
}

static MYD_STATUS myd_write_mdio(MYD_DEV_PTR pDev, MYD_U16 mdioPort,
				 MYD_U16 mmd, MYD_U16 reg, MYD_U16 value)
{
	phy_config_t *phy = pDev->hostContext;

	smi_write(phy->mdio_bus, phy->addr, mmd, CLAUSE45, reg, value);
	return MYD_OK;
}

void phy_marvell_6141_probe(int cgx_id, int lmac_id)
{
	MYD_U16 x6141_sbus_master_image_size;
	MYD_U16 x6141_serdes_image_size;
	MYD_STATUS status;
	phy_config_t *phy;
	MYD_BOOL possible_to_skip_fw_load;
	int val;
	MYD_U16 serdesRevision = 0;
	MYD_U16 sbmRevision = 0;
	MYD_U8 major, minor, buildID;

	debug_phy_driver("%s: %d:%d\n", __func__, cgx_id, lmac_id);

	phy = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id].phy_config;
	phy->priv = &marvell_6141_priv[cgx_id];
	if (cgx_id == 2 &&
	    !strncmp(plat_octeontx_bcfg->bcfg.board_model,
		     "cn3380_250sv_v5", 15)) {
		/* For this rev of the LIO3 card, there is only one 6141 PHY.
		 * QLM6 and QLM7 connect to that one-and-only PHY.  A PHY must
		 * have just one associated MYD_DEV struct.  So CGX2's PDEV and
		 * CGX0's PDEV must both point to that one MYD_DEV struct.
		 */
		PDEV(phy->priv) = &marvell_6141_priv[0].myd_dev;
	} else
		PDEV(phy->priv) = &marvell_6141_priv[cgx_id].myd_dev;

	if (PDEV(phy->priv)->devEnabled)
		return;

	mydGetAPIVersion(&major, &minor, &buildID);
	NOTICE("MYD API version %d.%d.%d\n", major, minor, buildID);

	/* Look for indication of recent cold reset. */
	val = smi_read(phy->mdio_bus, CLAUSE45, phy->addr, MYD_LINE_SIDE,
		       MYD_MODE_SELECTION) & 0xF;
	if (!val) {
		/* There was a recent board cold reset. */
		possible_to_skip_fw_load = MYD_FALSE;
	} else {
		/* There was a recent T93 warm reset, meanwhile the 6141 remains
		 * fully operational and reset-free.  It is possible to skip
		 * the PHY firmware load operation, but we won't on some cases.
		 */
		possible_to_skip_fw_load = MYD_TRUE;

		/* Look at the flag that indicates if we should force PHY
		 * firmware load (for debug purposes).  That flag is bit 13 of
		 * PHY reg LED1_CTRL_STATUS, which is, according to PHY team,
		 * available for general purpose SW use.
		 */
#define FORCE_PHY_FW_LOAD_FLAG 0x2000
		val = smi_read(phy->mdio_bus, CLAUSE45, phy->addr, MYD_CHIP_REG,
			       MYD_LED1_CTRL_STATUS);
		if (val & FORCE_PHY_FW_LOAD_FLAG) {
			possible_to_skip_fw_load = MYD_FALSE;

			/* clear the flag in the register */
			val &= ~FORCE_PHY_FW_LOAD_FLAG;
			smi_write(phy->mdio_bus, phy->addr, MYD_CHIP_REG,
				  CLAUSE45, MYD_LED1_CTRL_STATUS, val);
		}
	}

	if (possible_to_skip_fw_load) {
		status = mydReloadDriver(myd_read_mdio, myd_write_mdio,
					 phy->addr,
					 phy,
					 MYD_RELOAD_CONFIG,
					 PDEV(phy->priv));
		if (status != MYD_OK) {
			ERROR("%s: %d:%d mydReloadDriver() failed\n",
			      __func__, cgx_id, lmac_id);
			return;
		}

		status = mydSerdesGetRevision(PDEV(phy->priv), phy->addr,
					      &serdesRevision, &sbmRevision);
		if (status != MYD_OK) {
			ERROR("%s: %d:%d mydSerdesGetRevision() failed\n",
			      __func__, cgx_id, lmac_id);
			return;
		}

		if (serdesRevision == x6141_serdes_fw_rev &&
		    sbmRevision == x6141_sbus_master_fw_rev) {
			/* The PHY is already running the proper firmware, and
			 * we were not instructed to force a firmware load, and
			 * so we skip it.  But before returning from this
			 * function, put the PHY line-side in disengage mode
			 * (for an explanantion, see other comments at the
			 * bottom of this function).
			 */
			myd_write_mdio(PDEV(phy->priv), phy->addr, MYD_LINE_SIDE,
				       MYD_DATAPATH_CNTL,
				       MYD_DP_DISENGAGE_MODE << 14);

			NOTICE("Skipping firmware load for 6141 PHY at address %d\n",
			       phy->addr);
			return;
		}

		/* The PHY is not running the firmware that we want, so we need
		 * to replace it.  But before we load the right firmware, we
		 * need to unload MYD driver because the API for firmware load
		 * requires an uninitialized MYD driver.
		 */
		status = mydUnloadDriver(PDEV(phy->priv));
		if (status != MYD_OK)
			ERROR("%s: %d:%d mydUnloadDriver() failed\n",
			      __func__, cgx_id, lmac_id);
	}

	NOTICE("Loading firmware to 6141 PHY at address %d\n", phy->addr);
	x6141_sbus_master_image_size = x6141_sbus_master_image_end -
						x6141_sbus_master_image_start;
	x6141_serdes_image_size = x6141_serdes_image_end -
						x6141_serdes_image_start;

	status = mydInitDriver(myd_read_mdio, myd_write_mdio, phy->addr, NULL,
			       0,
			       x6141_sbus_master_image_start,
			       x6141_sbus_master_image_size,
			       x6141_serdes_image_start,
			       x6141_serdes_image_size,
			       phy,
			       PDEV(phy->priv));
	if (status != MYD_OK) {
		ERROR("%s: %d:%d mydInitDriver() failed\n", __func__, cgx_id,
		      lmac_id);
		return;
	}

	/* Put the line-side in disengage mode.  This allows the line-side PCS
	 * to get link up with the link partner even if the host-side PCS link
	 * is down.  This fulfills a customer requirement to keep the line-side
	 * link up during an LIO3 (T93) warm reset.
	 */
	myd_write_mdio(PDEV(phy->priv), phy->addr, MYD_LINE_SIDE, MYD_DATAPATH_CNTL,
		       MYD_DP_DISENGAGE_MODE << 14);
}

void phy_marvell_6141_config(int cgx_id, int lmac_id)
{
	phy_config_t *phy;
	cgx_lmac_config_t *lmac_cfg;
	MYD_STATUS status;
	MYD_U16 result;
	MYD_OP_MODE host_mode, line_mode;
	MYD_U16 lane;
	MYD_U32 mode_option;
	MYD_DEV_PTR myd_dev;
	PMYD_MODE_CONFIG myd_host_config;

	lmac_cfg = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id];
	debug_phy_driver("%s: %d:%d fec %d line fec %d\n", __func__, cgx_id, lmac_id,
			lmac_cfg->fec, lmac_cfg->line_fec);

	phy = &lmac_cfg->phy_config;

	switch (lmac_cfg->mode_idx) {
	case QLM_MODE_XFI:
	case QLM_MODE_SFI:
	case QLM_MODE_10G_KR:
		/* Update host_mode based on HOST FEC type
		 * and line_mode based on LINE FEC type
		 */
		switch (lmac_cfg->fec) {
		case CGX_FEC_BASE_R:
			if (lmac_cfg->mode_idx == QLM_MODE_10G_KR)
				host_mode = MYD_P10KF;
			else
				host_mode = MYD_P10LF;
			break;
		case CGX_FEC_NONE:
		default:
			if (lmac_cfg->mode_idx == QLM_MODE_10G_KR)
				host_mode = MYD_P10KN;
			else
				host_mode = MYD_P10LN;
			break;
		}
		switch (lmac_cfg->line_fec) {
		case CGX_FEC_BASE_R:
			if (lmac_cfg->mode_idx == QLM_MODE_10G_KR)
				line_mode = MYD_P10KF;
			else
				line_mode = MYD_P10LF;
			break;
		case CGX_FEC_NONE:
		default:
			if (lmac_cfg->mode_idx == QLM_MODE_10G_KR)
				line_mode = MYD_P10KN;
			else
				line_mode = MYD_P10LN;
			break;
		}
		break;

	case QLM_MODE_25GAUI_C2C:
		/* Update host_mode based on HOST FEC type
		 * and line_mode based on LINE FEC type
		 */
		switch (lmac_cfg->fec) {
		case CGX_FEC_RS:
			host_mode = MYD_P25LR;
			break;
		case CGX_FEC_BASE_R:
			host_mode = MYD_P25LF;
			break;
		case CGX_FEC_NONE:
		default:
			host_mode = MYD_P25LN;
			break;
		}

		switch (lmac_cfg->line_fec) {
		case CGX_FEC_RS:
			line_mode = MYD_P25LR;
			break;
		case CGX_FEC_BASE_R:
			line_mode = MYD_P25LF;
			break;
		case CGX_FEC_NONE:
		default:
			line_mode = MYD_P25LN;
			break;
		}
		break;

	case QLM_MODE_25GAUI_2_C2C:
		/* Update host_mode FEC to none as 25GAUI_2_C2C
		 * doesn't FEC
		 * set line_mode based on LINE FEC type
		 */
		host_mode = MYD_P25YN; /* 25GBASE-R2, no FEC, no AN */
		switch (lmac_cfg->line_fec) {
		case CGX_FEC_RS:
			line_mode = MYD_P25LR;
			break;
		case CGX_FEC_BASE_R:
			line_mode = MYD_P25LF;
			break;
		case CGX_FEC_NONE:
		default:
			line_mode = MYD_P25LN;
			break;
		}
		break;

	case QLM_MODE_50GAUI_2_C2C:
	case QLM_MODE_50GAUI_4_C2C:
		if (phy->mod_type == PHY_MOD_TYPE_PAM4) {
			line_mode = MYD_P50UP; /* 50GBASE-R, RS-FEC, no AN */
		} else {
			switch (lmac_cfg->line_fec) {
			case CGX_FEC_RS:
				line_mode = MYD_P50MR;
				break;
			case CGX_FEC_BASE_R:
				line_mode = MYD_P50MF;
				break;
			case CGX_FEC_NONE:
			default:
				line_mode = MYD_P50MN;
				break;
			}
		}

		if (lmac_cfg->mode_idx == QLM_MODE_50GAUI_2_C2C) {
			switch (lmac_cfg->fec) {
			case CGX_FEC_BASE_R:
				host_mode = MYD_P50MF;
				break;
			case CGX_FEC_RS:
				host_mode = MYD_P50MR;
				break;
			case CGX_FEC_NONE:
			default:
				host_mode = MYD_P50MN;
				break;
			}
		} else
			host_mode = MYD_P50LN; /* 50GBASE-R4, no-FEC, no AN */
		break;

	default:
		ERROR("%s: %d:%d QLM_MODE %d is not supported\n", __func__,
		      cgx_id, lmac_id, lmac_cfg->mode_idx);
		return;
	}

	lane = PHY_PORT_TO_LANE(phy->port);
	myd_dev = PDEV(phy->priv);
	myd_host_config = &myd_dev->hostConfig[0][lane];

	if (myd_host_config->opMode == MYD_P25YN && host_mode != MYD_P25YN) {
		/* undo the 25GBASE-R2 hack */
		myd_write_mdio(PDEV(phy->priv), phy->addr, 4, 0xF06C, 0);
	}

	debug_phy_driver("%s: %d:%d Tune RX equalizer at 6141 PHY line side\n",
			 __func__, cgx_id, lmac_id);
	/* Tune CTLE coefficients for cable lengths 0.5m to 3m */
	/* MYD_MODE_CTLE */
	myd_dev->modeParams.hostMaxHF = MYD_MODE_OPTION_DEFAULT;
	myd_dev->modeParams.hostMinHF = MYD_MODE_OPTION_DEFAULT;
	myd_dev->modeParams.hostMaxLF = MYD_MODE_OPTION_DEFAULT;
	myd_dev->modeParams.hostMinLF = MYD_MODE_OPTION_DEFAULT;

	myd_dev->modeParams.lineMaxHF = 0x6;
	myd_dev->modeParams.lineMinHF = MYD_MODE_OPTION_IGNORE;
	myd_dev->modeParams.lineMaxLF = MYD_MODE_OPTION_IGNORE;
	myd_dev->modeParams.lineMinLF = MYD_MODE_OPTION_IGNORE;

	/* MYD_MODE_INIT_CTLE */
	myd_dev->modeParams.hostInitHF = MYD_MODE_OPTION_DEFAULT;
	myd_dev->modeParams.hostInitLF = MYD_MODE_OPTION_DEFAULT;
	myd_dev->modeParams.lineInitHF = 0;
	myd_dev->modeParams.lineInitLF = 4;

	mode_option = MYD_MODE_CTLE | MYD_MODE_INIT_CTLE |
		      MYD_MODE_FORCE_RECONFIG;

	status = mydSetModeSelection(PDEV(phy->priv), phy->addr, lane, host_mode,
				     line_mode, mode_option,
				     &result);
	if (status == MYD_OK) {
		priv_6141_t *priv_6141;

		if (host_mode == MYD_P25YN) {
			/* Hack the 6141's P25YN mode to make its 25GBASE-R2 PCS
			 * conform to the T9x's "implementation" of 25GBASE-R2
			 * (which looks like a scaled down 50GBASE-R2 with CGX
			 * LMAC type set to FIFTYG_R and GSER speed at
			 * 12.89 Gbd).
			 * The settings below came from the 6141 design team.
			 */

			/* fix alignment markers */
			myd_write_mdio(PDEV(phy->priv), phy->addr, 4, 0xF06C, 0xF000);

			/* host-side sw reset */
			myd_write_mdio(PDEV(phy->priv), phy->addr,
					31, 0xF003, 0x0080);
		}

		priv_6141 = phy->priv;
		priv_6141->state = STATE_CONFIGURED;
		return;
	}

	ERROR("%s: %d:%d mydSetModeSelection() failed, lane=%hu, result=%hu\n",
	      __func__, cgx_id, lmac_id, lane, result);
}

static MYD_BOOL host_side_has_block_lock(phy_config_t *phy)
{
	MYD_U16 lane = PHY_PORT_TO_LANE(phy->port);
	MYD_U16 value = 0;

#define BASE_R_STATUS_1 0x1020
	myd_read_mdio(PDEV(phy->priv), phy->addr, MYD_HOST_SIDE,
		      BASE_R_STATUS_1 + (lane * 0x200),
		      &value);

#define BLOCK_LOCK_MASK 1
	if (value & BLOCK_LOCK_MASK)
		return MYD_TRUE;

	return MYD_FALSE;
}

static void check_for_host_side_link_flap(int cgx_id, int lmac_id,
					  int line_side_is_up)
{
	cgx_lmac_config_t *lmac_cfg;
	priv_6141_t *priv_6141;
	phy_config_t *phy;
	int *state;

	lmac_cfg = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id];
	phy = &lmac_cfg->phy_config;
	priv_6141 = phy->priv;
	state = &priv_6141->state;

	switch (*state) {
	case STATE_DOWN:
		if (line_side_is_up) {
			if (host_side_has_block_lock(phy))
				*state = STATE_UP;
		}
		break;

	case STATE_UP:
		if (line_side_is_up) {
			if (host_side_has_block_lock(phy)) {
				/* Remain at STATE_UP */
			} else {
				/* Host-side link flap detected.  Reconfig the
				 * PHY.  This will cause host-side RX adaptation
				 * to be executed again.  Tests show that this
				 * results in better subsequent performance of
				 * the host-side RX equalizer, and no repeated
				 * link flapping.
				 */
				debug_phy_driver("%d:%d 6141 PHY host-side link flap detected.\n",
						 cgx_id, lmac_id);
				phy_marvell_6141_config(cgx_id, lmac_id);
				/* The above PHY config function already assigns
				 * STATE_CONFIGURED to "*state", so we don't
				 * need to explicitly do the assignment here.
				 * Besides getting called from this state
				 * machine, phy_marvell_6141_config() can get
				 * called from elsewhere.
				 */
			}
		} else {
			*state = STATE_DOWN;
		}
		break;

	case STATE_CONFIGURED:
	default:
		*state = STATE_DOWN;
		break;
	}
}

void phy_marvell_6141_get_link_status(int cgx_id, int lmac_id,
				      link_state_t *link)
{
	MYD_U16 latchedStatus, currentStatus;
	MYD_PCS_LINK_STATUS statusDetail;
	MYD_STATUS status;
	MYD_U16 lane;
	phy_config_t *phy;
	cgx_lmac_config_t *lmac_cfg;
	MYD_DEV_PTR myd_dev;
	PMYD_MODE_CONFIG myd_mode_config;

	debug_phy_driver("%s: %d:%d\n", __func__, cgx_id, lmac_id);

	lmac_cfg = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id];
	phy = &lmac_cfg->phy_config;
	lane = PHY_PORT_TO_LANE(phy->port);

	mydMemSet(&statusDetail, 0, sizeof(MYD_PCS_LINK_STATUS));
	link->u64 = 0;

	status = mydCheckPCSLinkStatus(PDEV(phy->priv), phy->addr, lane,
				       &currentStatus, &latchedStatus,
				       &statusDetail);
	if (status != MYD_OK) {
		ERROR("%s: %d:%d mydCheckPCSLinkStatus failed for lane %hu.\n",
		      __func__, cgx_id, lmac_id, lane);
		return;
	}

	if (lmac_cfg->mode_idx == QLM_MODE_50GAUI_2_C2C)
		check_for_host_side_link_flap(cgx_id, lmac_id,
					      statusDetail.lineCurrent);

	if (currentStatus != MYD_LINK_UP)
		return;

	link->s.link_up = 1;
	link->s.full_duplex = 1;

	myd_dev = PDEV(phy->priv);
	myd_mode_config = &myd_dev->lineConfig[0][lane];
	switch (myd_mode_config->opMode) {
	case MYD_P10LN:
		link->s.speed = ETH_LINK_10G;
		link->s.fec = CGX_FEC_NONE;
		break;
	case MYD_P10KF:
		link->s.speed = ETH_LINK_10G;
		link->s.fec = CGX_FEC_BASE_R;
		break;
	case MYD_P25LN:
		link->s.speed = ETH_LINK_25G;
		link->s.fec = CGX_FEC_NONE;
		break;
	case MYD_P25LR:
		link->s.speed = ETH_LINK_25G;
		link->s.fec = CGX_FEC_RS;
		break;
	case MYD_P25LF:
		link->s.speed = ETH_LINK_25G;
		link->s.fec = CGX_FEC_BASE_R;
		break;
	case MYD_P50MN:
		link->s.speed = ETH_LINK_50G;
		link->s.fec = CGX_FEC_NONE;
		break;
	case MYD_P50MF:
		link->s.speed = ETH_LINK_50G;
		link->s.fec = CGX_FEC_BASE_R;
		break;
	case MYD_P50MR:
	case MYD_P50UP:
		link->s.speed = ETH_LINK_50G;
		link->s.fec = CGX_FEC_RS;
		break;
	default:
		ERROR("%s: %d:%d Unexpected line mode %d\n",
		      __func__, cgx_id, lmac_id,
		      myd_mode_config->speed);
		break;
	}

	if (link->s.speed == ETH_LINK_50G &&
	    myd_mode_config->opMode !=MYD_P50UP) {
		int val, err_blks_counter, ber_counter;

		val = smi_read(phy->mdio_bus, CLAUSE45, phy->addr,
			       MYD_LINE_SIDE, 0x1021);

		if (val & 0x4000)
			debug_phy_driver("%d:%d PHY line side PCS has high BER\n",
					 cgx_id, lmac_id);

		ber_counter = (val & 0x3F00) >> 8;
		if (ber_counter)
			debug_phy_driver("%d:%d PHY line side PCS BER counter = %d\n",
					 cgx_id, lmac_id, ber_counter);

		err_blks_counter = val & 0xFF;
		if (err_blks_counter)
			debug_phy_driver("%d:%d PHY line side PCS errored blocks counter = %d\n",
					 cgx_id, lmac_id, err_blks_counter);
	}
}

void phy_marvell_6141_supported_modes(int cgx_id, int lmac_id)
{
	phy_config_t *phy;

	debug_phy_driver("%s: %d:%d\n", __func__, cgx_id, lmac_id);

	phy = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id].phy_config;

	phy->supported_link_modes = ((1 << ETH_MODE_10G_KR_BIT) |
			(1 << ETH_MODE_10G_C2C_BIT) |
			(1 << ETH_MODE_10G_C2M_BIT) |
			(1 << ETH_MODE_25G_C2C_BIT) |
			(1 << ETH_MODE_25G_2_C2C_BIT) |
			(1 << ETH_MODE_50GAUI_2_C2C_BIT) |
			(1 << ETH_MODE_50G_4_C2C_BIT));
}

static int phy_marvell_6141_get_fec_stats(int cgx_id, int lmac_id)
{
	cgx_lmac_config_t *lmac_cfg;
	phy_config_t *phy;
	MYD_U16 lane;
	MYD_STATUS status;
	MYD_U32 cntr;
	int i;
	phy_fec_stats_t *s;

	debug_phy_driver("%s: %d:%d\n", __func__, cgx_id, lmac_id);

	lmac_cfg = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id];
	phy = &lmac_cfg->phy_config;
	lane = PHY_PORT_TO_LANE(phy->port);
	s = &phy->fec_stats;

	struct {
		MYD_STATUS (*func)(MYD_DEV_PTR, MYD_U16, MYD_U16, MYD_U16,
				   MYD_U32 *);
		unsigned    *cntr;
	} table[] = {
		{mydGetRsFecCorrectedCwCntr,	&s->rsfec_corr_cws},
		{mydGetRsFecUnCorrectedCwCntr,	&s->rsfec_uncorr_cws},
		{mydGetKrFecCorrectedBlkCntr,	&s->brfec_corr_blks},
		{mydGetKrFecUnCorrectedBlkCntr,	&s->brfec_uncorr_blks},
	};

	for (i = 0; i < ARRAY_SIZE(table); i++) {
		status = table[i].func(PDEV(phy->priv), phy->addr, MYD_LINE_SIDE,
				       lane, &cntr);
		if (status == MYD_OK) {
			*table[i].cntr = cntr;
		} else {
			ERROR("%s: %d:%d table entry %d function returned error\n",
			      __func__, cgx_id, lmac_id, i);
			return -1;
		}
	}

	return 0;
}

#ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
static MYD_PRBS_SELECTOR_TYPE phy_marvell_6141_get_prbs_selector(int prbs)
{
	MYD_PRBS_SELECTOR_TYPE prbs_sel;

	switch (prbs) {
	case 7:
		prbs_sel = MYD_PRBS7;
		break;
	case 9:
		prbs_sel = MYD_PRBS9;
		break;
	case 13:
		prbs_sel = MYD_PRBS13;
		break;
	case 15:
		prbs_sel = MYD_PRBS15;
		break;
	case 23:
		prbs_sel = MYD_PRBS23;
		break;
	case 31:
		prbs_sel = MYD_PRBS31;
		break;
	default:
		WARN("Unsupported PRBS mode %d, using 7\n", prbs);
		prbs_sel = MYD_PRBS7;
		break;
	}

	return prbs_sel;
}

static int phy_marvell_6141_enable_prbs(int cgx_id, int lmac_id, int host_side,
	int prbs, int dir)
{
	MYD_STATUS status;
	phy_config_t *phy;
	MYD_U16 lane;
	cgx_lmac_config_t *lmac_cfg;
	MYD_PRBS_SELECTOR_TYPE prbs_sel;
	int enable_tx;
	int enable_rx;

	debug_phy_driver("%s: %d:%d\n", __func__, cgx_id, lmac_id);

	lmac_cfg = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id];
	phy = &lmac_cfg->phy_config;
	lane = PHY_PORT_TO_LANE(phy->port);
	prbs_sel = phy_marvell_6141_get_prbs_selector(prbs);

	status = mydSetPRBSClearOnRead(
		PDEV(phy->priv),
		phy->addr,
		MYD_HOST_SIDE,
		lane,
		1);
	if (status != MYD_OK) {
		WARN(
			"CGX%d(%d): mydSetPRBSClearOnRead() for host side failed\n",
			cgx_id, lane);
		return -1;
	}

	status = mydSetPRBSClearOnRead(
		PDEV(phy->priv),
		phy->addr,
		MYD_LINE_SIDE,
		lane,
		1);
	if (status != MYD_OK) {
		WARN(
			"CGX%d(%d): mydSetPRBSClearOnRead() for line side failed\n",
			cgx_id, lane);
		return -1;
	}

	status = mydSetPRBSPattern(
		PDEV(phy->priv),
		phy->addr,
		MYD_LINE_SIDE,
		lane,
		prbs_sel,
		MYD_PRBS_NONE);
	if (status != MYD_OK) {
		WARN("CGX%d(%d): mydSetPRBSPattern() for line side failed\n",
			cgx_id, lane);
		return -1;
	}

	status = mydSetPRBSPattern(
		PDEV(phy->priv),
		phy->addr,
		MYD_HOST_SIDE,
		lane,
		prbs_sel,
		MYD_PRBS_NONE);
	if (status != MYD_OK) {
		WARN("CGX%d(%d): mydSetPRBSPattern() for host side failed\n",
			cgx_id, lane);
		return -1;
	}

	enable_tx = (dir == QLM_DIRECTION_TX);
	enable_rx = (dir == QLM_DIRECTION_RX);

	status = mydSetPRBSEnableTxRx(
		PDEV(phy->priv),
		phy->addr,
		host_side ? MYD_HOST_SIDE : MYD_LINE_SIDE,
		lane,
		(enable_tx | enable_rx) ? MYD_ENABLE : MYD_DISABLE, /* TX */
		(enable_rx) ? MYD_ENABLE : MYD_DISABLE, /* RX */
		prbs_sel);
	if (status != MYD_OK) {
		WARN("CGX%d(%d): mydSetPRBSEnableTxRx() failed\n",
			cgx_id, lane);
		return -1;
	}

	return 0;
}

static int phy_marvell_6141_disable_prbs(int cgx_id, int lmac_id, int host_side,
	int prbs)
{
	MYD_STATUS status;
	phy_config_t *phy;
	cgx_lmac_config_t *lmac_cfg;
	MYD_U16 lane;
	MYD_PRBS_SELECTOR_TYPE prbs_sel;

	debug_phy_driver("%s: %d:%d\n", __func__, cgx_id, lmac_id);

	lmac_cfg = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id];
	phy = &lmac_cfg->phy_config;
	lane = PHY_PORT_TO_LANE(phy->port);
	prbs_sel = phy_marvell_6141_get_prbs_selector(prbs);

	status = mydSetPRBSEnableTxRx(
		PDEV(phy->priv),
		phy->addr,
		host_side ? MYD_HOST_SIDE : MYD_LINE_SIDE,
		lane,
		MYD_DISABLE, /* TX */
		MYD_DISABLE, /* RX */
		prbs_sel);
	if (status != MYD_OK) {
		WARN("CGX%d(%d): mydSetPRBSEnableTxRx() failed\n",
			cgx_id, lane);
		return -1;
	}

	mydLaneSoftReset(
		PDEV(phy->priv),
		phy->addr,
		host_side ? MYD_HOST_SIDE : MYD_LINE_SIDE,
		lane,
		10);

	return 0;
}

static uint64_t phy_marvell_6141_get_prbs_errors(int cgx_id, int lmac_id,
	int host_side, int clear, int prbs)
{
	MYD_STATUS status;
	phy_config_t *phy;
	cgx_lmac_config_t *lmac_cfg;
	MYD_U16 lane;
	MYD_PRBS_SELECTOR_TYPE prbs_sel;
	MYD_BOOL prbsLocked;
	MYD_U64 txBitCount, rxBitCount, rxBitErrorCount;
	uint64_t errors;

	debug_phy_driver("%s: %d:%d\n", __func__, cgx_id, lmac_id);

	lmac_cfg = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id];
	phy = &lmac_cfg->phy_config;
	lane = PHY_PORT_TO_LANE(phy->port);
	prbs_sel = phy_marvell_6141_get_prbs_selector(prbs);

	status = mydGetPRBSLocked(
		PDEV(phy->priv),
		phy->addr,
		host_side ? MYD_HOST_SIDE : MYD_LINE_SIDE,
		lane,
		&prbsLocked);
	if (status != MYD_OK) {
		WARN("CGX%d(%d): mydGetPRBSLocked() failed\n", cgx_id, lane);
		return -1;
	}
	if (!prbsLocked) {
		WARN("CGX%d(%d): did not get PRBS lock\n", cgx_id, lane);
		return -1;
	}

	status = mydGetPRBSCounts(
		PDEV(phy->priv),
		phy->addr,
		host_side ? MYD_HOST_SIDE : MYD_LINE_SIDE,
		lane,
		prbs_sel,
		&txBitCount, &rxBitCount, &rxBitErrorCount);
	if (status != MYD_OK) {
		WARN("CGX%d(%d): mydGetPRBSCounts() failed\n", cgx_id, lane);
		return -1;
	}

	if (host_side) {
		errors = lmac_cfg->prbs_errors_host + rxBitErrorCount;
		lmac_cfg->prbs_errors_host = (clear) ? 0 : errors;
		return errors;
	}

	errors = lmac_cfg->prbs_errors_line + rxBitErrorCount;
	lmac_cfg->prbs_errors_line = (clear) ? 0 : errors;
	return errors;
}
#endif /* DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS */

phy_drv_t marvell_6141_drv = {
		.drv_name		= "MARVELL-88X6141",
		.drv_type		= PHY_MARVELL_6141,
		.flags			= PHY_FLAG_SUPPORTS_CHANGING_MOD_TYPE |
					  PHY_FLAG_HAS_FEC_STATS,
		.probe			= phy_marvell_6141_probe,
		.config			= phy_marvell_6141_config,
		.reset			= phy_generic_reset,
		.get_link_status	= phy_marvell_6141_get_link_status,
		.set_supported_modes	= phy_marvell_6141_supported_modes,
		.get_fec_stats		= phy_marvell_6141_get_fec_stats,
		.shutdown		= phy_generic_shutdown,
#ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
		.enable_prbs		= phy_marvell_6141_enable_prbs,
		.disable_prbs		= phy_marvell_6141_disable_prbs,
		.get_prbs_errors	= phy_marvell_6141_get_prbs_errors,
#endif /* DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS */
	};

phy_drv_t *marvell_6141_check_type(int type)
{
	if (marvell_6141_drv.drv_type == type)
		return &marvell_6141_drv;
	return NULL;
}
