/*
 * Copyright (c) 2018 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

/* CGX driver for OcteonTX2 */

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
#include <sh_fwdata.h>
#include <qlm/qlm.h>
#include <gser_internal.h>

/* define DEBUG_ATF_SFP_MGMT to enable debug logs */
#undef DEBUG_ATF_SFP_MGMT	/* SFP/QSFP management */

#ifdef DEBUG_ATF_SFP_MGMT
#define debug_sfp_mgmt printf
#else
#define debug_sfp_mgmt(...) ((void) (0))
#endif

sfp_shared_data_t *sh_data_global = (void *)SFP_SHMEM_BASE;

/* static data to save the transceiver type and its
 * capabilities for each LMAC.
 */
static sfp_cap_info_t sfp_cap_info[MAX_CGX][MAX_LMAC_PER_CGX];

sfp_shared_data_t *sfp_get_sh_mem_ptr(int cgx_id, int lmac_id)
{
	sfp_shared_data_t *sh_data;

	sh_data = (sh_data_global + (cgx_id * MAX_LMAC_PER_CGX) + lmac_id);
	return sh_data;
}

void shmem_an_lt_update(int cgx_id, int lmac_id)
{
	cgx_lmac_config_t *lmac;
	cgx_config_t *cgx;
	sfp_shared_data_t *sh_data = sfp_get_sh_mem_ptr(cgx_id, lmac_id);
	const qlm_ops_t *qlm_ops;
	int num_lanes, lane_an;

	cgx = &plat_octeontx_bcfg->cgx_cfg[cgx_id];
	lmac = &cgx->lmac_cfg[lmac_id];

	/* Update SHMEM with AN/LT processing */
	if ((!lmac->autoneg_dis) && (lmac->use_training)) {
		debug_sfp_mgmt("%s:%d:%d updating AN/LT data\n",
			       __func__, cgx_id, lmac_id);
		num_lanes = qlm_get_lanes(lmac->qlm +
			  lmac->shift_from_first);

		if (num_lanes == 1)
			lane_an = 0;
		else if (num_lanes == 2)
			lane_an = lmac->lane_an_master % 2;
		else
			lane_an = lmac->lane_an_master;

		qlm_ops = plat_otx2_get_qlm_ops(cgx_id);
		if (qlm_ops != NULL)
			sh_data->an_lt_args.gser_type =
				(uint32_t)qlm_ops->type;
		sh_data->an_lt_args.gser_index = lmac->gserx;
		sh_data->an_lt_args.shift_from_first =
			lmac->shift_from_first;
		sh_data->an_lt_args.lane_mask = lmac->lane_mask;
		sh_data->an_lt_args.an_master = lane_an;
		sh_data->an_lt_args.qlm =
			(lmac->qlm + lmac->shift_from_first);
		sh_data->an_lt_args.max_num_lanes = num_lanes;
	}
}

void sfp_init_shmem(void)
{
	int cgx_idx, lmac_idx;
	cgx_lmac_config_t *lmac;
	cgx_config_t *cgx;
	sfp_shared_data_t *sh_data;

	debug_sfp_mgmt("%s\n", __func__);
	debug_sfp_mgmt("sizeof = %d\n", (int)sizeof(sfp_shared_data_t));

	for (cgx_idx = 0; cgx_idx < MAX_CGX; cgx_idx++) {
		cgx = &plat_octeontx_bcfg->cgx_cfg[cgx_idx];
		for (lmac_idx = 0; lmac_idx < MAX_LMAC_PER_CGX; lmac_idx++) {
			lmac = &cgx->lmac_cfg[lmac_idx];
			sh_data = sfp_get_sh_mem_ptr(cgx_idx, lmac_idx);
			if (sh_data == NULL) {
				ERROR("%s: SM pointer is NULL\n", __func__);
				return;
			}

			/* Initialize shared memory for each LMAC */
			memset(sh_data, 0, sizeof(sfp_shared_data_t));
			sh_data->size = sizeof(sfp_shared_data_t);

			if (lmac->sfp_slot) { /* if SFP slot is present */
				memcpy(&sh_data->sfp_slot, &lmac->sfp_info,
						sizeof(sfp_slot_info_t));
			}
			/* Assign CGX/LMAC IDs */
			sh_data->cgx_id = cgx_idx;
			sh_data->lmac_id = lmac_idx;

			/* Program the AN/LT interface rev */
			sh_data->intf_rev = 0xABCD0000;

			/* Copy the board model */
			strlcpy(sh_data->board_model,
				plat_octeontx_bcfg->bcfg.board_model,
				sizeof(sh_data->board_model));

			/* Update SHMEM with AN/LT processing */
			if ((!lmac->autoneg_dis) && (lmac->use_training)) {
				shmem_an_lt_update(cgx_idx, lmac_idx);
			}
		}
	}
}

int sfp_get_mod_status(int cgx_id, int lmac_id)
{
	int retry_lock = 0;
	sfp_context_t *ctx;
	sfp_shared_data_t *sh_data = sfp_get_sh_mem_ptr(cgx_id, lmac_id);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}
	ctx = &sh_data->sfp_ctx;

retry_acquire_lock:
	if (ctx->lock == SFP_OWN_NONE) {
		ctx->lock = SFP_OWN_AP;
	} else {
		if (retry_lock++ < 5) {
			mdelay(1);
			goto retry_acquire_lock;
		}

		debug_sfp_mgmt("%s %d:%d lock %d not available for AP\n",
					__func__,
					cgx_id, lmac_id, ctx->lock);
		return -1;
	}
	debug_sfp_mgmt("%s: %d:%d ctx %p state %d\n", __func__, cgx_id,
				lmac_id, ctx, ctx->mod_status);
	ctx->lock = SFP_OWN_NONE;

	if (ctx->mod_status == SFP_MOD_STATE_ABSENT)
		debug_sfp_mgmt("%s: %d:%d module not present ctx %p\n",
			__func__, cgx_id, lmac_id, ctx);

	return ctx->mod_status;
}

static void sfp_get_info_1g(int cgx_id, int lmac_id)
{
	sfp_mod_info_t *mod_info;
	sfp_cap_info_t *cap_info = &sfp_cap_info[cgx_id][lmac_id];
	sfp_shared_data_t *sh_data = sfp_get_sh_mem_ptr(cgx_id, lmac_id);

	/* transceiver compliance code : table 5-3 */
	debug_sfp_mgmt("%s: Read BYTE 6 capabilities\n", __func__);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return;
	}
	mod_info = (sfp_mod_info_t *)sh_data->buf;

	/* BYTE 6 : ethernet compliance codes */
	switch (mod_info->compliance_code[3]) {
	case 0x1:
		debug_sfp_mgmt("%s: 1G SX detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_1G_SX;
		break;
	case 0x2:
		debug_sfp_mgmt("%s: 1G LX detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_1G_LX;
		break;
	/* 0x4 - 1000BASE-CX ? */
	case 0x8:
		debug_sfp_mgmt("%s: 1000 BASE-T detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_1000_BASET;
		/* FIXME: detect PHY type */
		break;
	default:
		/* read BYTE 8 SFP+ cable technology fields */
		switch (mod_info->compliance_code[5]) {
		case 0x1:
			cap_info->trans_type = SFP_TRANS_TYPE_1G_PCC;
			debug_sfp_mgmt("%s: 1G passive copper detected\n", __func__);
			break;
		case 0x2:
			cap_info->trans_type = SFP_TRANS_TYPE_1G_ACC;
			debug_sfp_mgmt("%s: 1G active copper detected\n", __func__);
			break;
		default:
			cap_info->trans_type = SFP_TRANS_TYPE_UNKNOWN;
			ERROR("%s: %d:%d unknown SFP/SFP+/SFP28 transceiver type\n",
						__func__, cgx_id, lmac_id);
			break;
		}
		break;
	}
	if (cap_info->trans_type != SFP_TRANS_TYPE_UNKNOWN) {
		debug_sfp_mgmt("%s: Connector type %d Rate %d\n", __func__,
				SFP_CONN_SFP, SFP_RATE_10G);
	}
}

static void sfp_get_info_10g(int cgx_id, int lmac_id)
{
	sfp_mod_info_t *mod_info;
	sfp_cap_info_t *cap_info = &sfp_cap_info[cgx_id][lmac_id];
	sfp_shared_data_t *sh_data = sfp_get_sh_mem_ptr(cgx_id, lmac_id);

	debug_sfp_mgmt("%s: Read BYTE 3 capabilities\n", __func__);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return;
	}

	mod_info = (sfp_mod_info_t *)sh_data->buf;

	/* transceiver compliance codes */
	switch (mod_info->compliance_code[0]) {
	/* SFF 8272 : Table 5-3 : BYTE 3 : 10G ethernet compliance codes/
	 * Infiniband compliance codes
	 */
	case 0x1:
		debug_sfp_mgmt("%s: 10G passive copper inserted\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_10G_PCC;
		break;
	case 0x2:
		debug_sfp_mgmt("%s: 10G active copper inserted\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_10G_ACC;
		break;
	case 0x10:
		debug_sfp_mgmt("%s: 10G SR inserted\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_10G_SR;
		break;
	case 0x20:
		debug_sfp_mgmt("%s: 10G LR inserted\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_10G_LR;
		break;
	case 0x40:
		debug_sfp_mgmt("%s: 10G LRM inserted\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_10G_LRM;
		break;
	case 0x80:
		debug_sfp_mgmt("%s: 10G ER inserted\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_10G_ER;
		break;
	default:
		/* Read BYTE 8 SFP+ cable technology fields */
		switch (mod_info->compliance_code[5]) {
		case 0x4:
			debug_sfp_mgmt("%s: 10G passive copper inserted\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_10G_PCC;
			break;
		case 0x8:
			debug_sfp_mgmt("%s: 10G active copper inserted\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_10G_ACC;
			break;
		default:
			/* SFF 8472 : Table 4-3 connector types */
			switch (mod_info->connector_type) {
			case 0x22:	/* RJ45 */
				debug_sfp_mgmt("%s: 10GBASE-T detected\n", __func__);
				cap_info->trans_type = SFP_TRANS_TYPE_10G_BASET;
				/* FIXME : assert and deassert Tx disable ?
				 * get the PHY type
				 */
				break;
			/* FIXME: other connector types? */
			default:
				cap_info->trans_type = SFP_TRANS_TYPE_UNKNOWN;
				debug_sfp_mgmt("%s: %d:%d Unknown SFP/SFP+/SFP28 detected\n",
						__func__, cgx_id, lmac_id);
				break;
			}
			break;
		}
		break;
	}
	if (cap_info->trans_type != SFP_TRANS_TYPE_UNKNOWN) {
		debug_sfp_mgmt("%s: Connector type %d Rate %d\n", __func__,
				SFP_CONN_SFP, SFP_RATE_10G);
	}
}

static void sfp_get_info_25g(int cgx_id, int lmac_id)
{
	sfp_mod_info_t *mod_info;
	sfp_cap_info_t *cap_info = &sfp_cap_info[cgx_id][lmac_id];
	sfp_shared_data_t *sh_data = sfp_get_sh_mem_ptr(cgx_id, lmac_id);

	debug_sfp_mgmt("%s : Read BYTE 36 capabilities\n", __func__);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return;
	}
	mod_info = (sfp_mod_info_t *)sh_data->buf;

	/* Transceiver compliance codes */
	switch (mod_info->ext_compliance_code) {
	/* Table 5-3 : Bit 0 - 7 : Extended compliance codes
	 * Refer SFF-8024 transceiver management -
	 * TABLE 4-4 EXTENDED SPECIFICATION COMPLIANCE CODES
	 */
	case 0x1:
		debug_sfp_mgmt("%s: 25G active optical cable detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_25G_AOC;
		break;
	case 0x2:
		debug_sfp_mgmt("%s: 25G SR detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_25G_SR;
		break;
	case 0x3:
		debug_sfp_mgmt("%s: 25G LR detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_25G_LR;
		break;
	case 0x4:
		debug_sfp_mgmt("%s: 25G ER detected\n", __func__);
		/*FIXME : cap_info->trans_type = SFP_TRANS_TYPE_25G_ER;  */
		break;
	case 0x8:
		debug_sfp_mgmt("%s: 25G active copper cable detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_25G_ACC_M;
		break;
	case 0xb:
		debug_sfp_mgmt("%s: 25G CA-L detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_25G_CA_L;
		break;
	case 0xc:
		debug_sfp_mgmt("%s: 25G CA-S detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_25G_CA_S;
		break;
	case 0xd:
		debug_sfp_mgmt("%s: 25G CA-N detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_25G_CA_N;
		break;
	case 0x18:
		debug_sfp_mgmt("%s: 25G active optical cable detected BER of 10^(-12) or below\n",
								__func__);
		cap_info->trans_type = SFP_TRANS_TYPE_25G_AOC;
		break;
	case 0x19:
		debug_sfp_mgmt("%s: 25G active copper cable detected BER of 10^(-12) or below\n",
								__func__);
		cap_info->trans_type = SFP_TRANS_TYPE_25G_ACC_M;
		break;
	default:
		/* Read byte 3 to check for copper -
		 * Infiniband compliance codes
		 */
		debug_sfp_mgmt("%s: Read BYTE 3 capabilities\n", __func__);
		switch (mod_info->compliance_code[0]) {
		case 1:
			debug_sfp_mgmt("%s: 25G passive copper detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_25G_CA_N;
			break;
		case 2:
			debug_sfp_mgmt("%s: 25G active copper detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_25G_ACC_S;
			break;
		default:
			debug_sfp_mgmt("%s : Infiniband compliance cable not detected\n", __func__);
			/* Read BYTE 8 SFP+ cable technology capabilities */
			switch (mod_info->compliance_code[5]) {
			case 4:
				debug_sfp_mgmt("%s: 25G passive copper detected\n", __func__);
				cap_info->trans_type = SFP_TRANS_TYPE_25G_CA_N;
				break;
			default:
				/* Read BYTE 2 for optical or copper
				 * SFF-8024 Table 4-3 connector types
				 */
				switch (mod_info->connector_type) {
				case 0x1:
					debug_sfp_mgmt("%s: 25G Subscriber connector\n", __func__);
					cap_info->trans_type = SFP_TRANS_TYPE_25G_SR;
					break;
				case 0x7:
					debug_sfp_mgmt("%s: 25G Lucent connector\n", __func__);
					cap_info->trans_type = SFP_TRANS_TYPE_25G_SR;
					break;
				case 0xb:
					debug_sfp_mgmt("%s: 25G optical pigtail\n", __func__);
					cap_info->trans_type = SFP_TRANS_TYPE_25G_AOC;
					break;
				case 0x21:
					debug_sfp_mgmt("%s: 25G copper pigtail\n", __func__);
					cap_info->trans_type = SFP_TRANS_TYPE_25G_ACC_S;
					break;
				case 0x23:
					debug_sfp_mgmt("%s: 25G No seperable connector\n",
								__func__);
					cap_info->trans_type = SFP_TRANS_TYPE_25G_ACC_S;
					break;
				default:
					cap_info->trans_type = SFP_TRANS_TYPE_UNKNOWN;
					debug_sfp_mgmt("%s: Unknown cable type detected for 25G\n",
								 __func__);
					break;
				}
				break;
			}
			break;
		}
		break;
	}
	if (cap_info->trans_type != SFP_TRANS_TYPE_UNKNOWN) {
		debug_sfp_mgmt("%s: Connector type %d Rate %d\n", __func__,
				SFP_CONN_SFP, SFP_RATE_25G);
	}
}

/* SFP EEPROM contents
 * refer SFF 8472 & SFF 8024
 */
static void sfp_get_info(int cgx_id, int lmac_id)
{
	sfp_mod_info_t *mod_info;
	sfp_cap_info_t *cap_info = &sfp_cap_info[cgx_id][lmac_id];
	sfp_shared_data_t *sh_data = sfp_get_sh_mem_ptr(cgx_id, lmac_id);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return;
	}
	mod_info = (sfp_mod_info_t *)sh_data->buf;

	/* check byte 12 for nominal bit rate */
	if (mod_info->bitrate >= 250) {
		debug_sfp_mgmt("%s: 25G signal rate\n", __func__);
		sfp_get_info_25g(cgx_id, lmac_id);
	} else if (mod_info->bitrate >= 100) {
		debug_sfp_mgmt("%s: 10G signal rate\n", __func__);
		sfp_get_info_10g(cgx_id, lmac_id);
	} else if (mod_info->bitrate >= 10) {
		debug_sfp_mgmt("%s: 1G signal rate\n", __func__);
		sfp_get_info_1g(cgx_id, lmac_id);
	} else {
		WARN("%s: %d:%d signal rate not specified for SFP/SFP+/SFP28\n",
					__func__, cgx_id, lmac_id);
		/* FIXME : as per SFF-8472 5.7, a value of 0 indicates that
		 * the bit rate is not specified and must be determined
		 * from the transceiver technology. As per QLogic team,
		 * newer cables that support higher speeds are more likely
		 * have the bit rate programmed correctly. Hence, check for
		 * 10G ethernet compliance code in this case.
		 */
		switch (mod_info->compliance_code[0]) {
		/* SFF 8272 : Table 5-3 : BYTE 3 : 10G ethernet compliance codes/
		 * Infiniband compliance codes
		 */
		case 0x1:
			debug_sfp_mgmt("%s: 10G passive copper inserted\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_10G_PCC;
			break;
		case 0x2:
			debug_sfp_mgmt("%s: 10G active copper inserted\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_10G_ACC;
			break;
		case 0x10:
			debug_sfp_mgmt("%s: 10G SR inserted\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_10G_SR;
			break;
		case 0x20:
			debug_sfp_mgmt("%s: 10G LR inserted\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_10G_LR;
			break;
		case 0x40:
			debug_sfp_mgmt("%s: 10G LRM inserted\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_10G_LRM;
			break;
		case 0x80:
			debug_sfp_mgmt("%s: 10G ER inserted\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_10G_ER;
			break;
		default:
			/* Read BYTE 8 SFP+ cable technology fields */
			switch (mod_info->compliance_code[5]) {
			case 0x4:
				debug_sfp_mgmt("%s: 10G passive copper inserted\n", __func__);
				cap_info->trans_type = SFP_TRANS_TYPE_10G_PCC;
				break;
			case 0x8:
				debug_sfp_mgmt("%s: 10G active copper inserted\n", __func__);
				cap_info->trans_type = SFP_TRANS_TYPE_10G_ACC;
				break;
			default:
				debug_sfp_mgmt("%s: unknown cable type\n", __func__);
				cap_info->trans_type = SFP_TRANS_TYPE_UNKNOWN;
				break;
			}
			break;
		}
		if (cap_info->trans_type != SFP_TRANS_TYPE_UNKNOWN) {
			debug_sfp_mgmt("%s: Connector type %d Rate %d\n", __func__,
				SFP_CONN_SFP, SFP_RATE_10G);
		}
	}
	if (cap_info->trans_type == SFP_TRANS_TYPE_NONE) {
		/* if transceiver type is not identified, throw error */
		ERROR("%s : %d:%d unknown cable type\n", __func__, cgx_id,
						lmac_id);
		return;
	}
	/* FIXME : Log the other vendor details if required */
	debug_sfp_mgmt("%s: Vendor name: %16.16s Vendor OUI: 02%x:02%x:02%x\t",
			__func__, mod_info->vendor_name, mod_info->vendor_oui[0],
			mod_info->vendor_oui[1], mod_info->vendor_oui[2]);
	debug_sfp_mgmt("Vendor Part num: %16.16s Revision %2.2s\n",
			mod_info->vendor_pn, mod_info->vendor_rev);
}

void qsfp_get_info(int cgx_id, int lmac_id)
{
	int far_end = 0x0;
	qsfp_mod_info_t *mod_info;
	sfp_cap_info_t *cap_info = &sfp_cap_info[cgx_id][lmac_id];
	sfp_shared_data_t *sh_data = sfp_get_sh_mem_ptr(cgx_id, lmac_id);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return;
	}

	/* QFSP module info from upper page */
	mod_info = (qsfp_mod_info_t *)&sh_data->buf[128]; /* upper 128 bytes */

	switch (mod_info->compliance_code[0]) {
	case 0x0:
		/* non-compliance cable : FIXME */
		debug_sfp_mgmt("%s: Non-compliance cable detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_NON_COMP;
		break;
	case 0x1:
		debug_sfp_mgmt("%s: 40G ACTIVE XLPPI detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_XLPPI;
		break;
	case 0x2:
		debug_sfp_mgmt("%s: 40G LR-4 detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_40G_LR4;
		break;
	case 0x4:
		debug_sfp_mgmt("%s: 40G SR-4 detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_40G_SR4;
		break;
	case 0x8:
		debug_sfp_mgmt("%s: 40G CR-4 detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_40G_CR4;
		break;
	case 0x10:
		debug_sfp_mgmt("%s: 10G SR detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_10G_SR;
		break;
	case 0x14:
		/* FIXME - multi-rate cases */
		debug_sfp_mgmt("%s: Multi-rate 10G/40G SR detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_MULTI_RATE_10G_40G_SR;
		break;
	case 0x20:
		debug_sfp_mgmt("%s: 10G LR detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_10G_LR;
		break;
	case 0x40:
		debug_sfp_mgmt("%s: 10G LRM detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_10G_LRM;
		break;
	case 0x88:
		/* FIXME - multi-rate cases */
		debug_sfp_mgmt("%s: Multi-rate 40G/100G CR detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_MULTI_RATE_40G_100G_CR;
		break;
	case 0x80:
		/* Extended bit is set: Read byte 192 to identify the interface and the
		 * table is maintained in SFF 8024 extended specification
		 * compliance codes : table 4 - 4
		 */
		debug_sfp_mgmt("%s: Use extended technology field\n", __func__);
		switch (mod_info->ext_compliance) {
		case 0x0:
			debug_sfp_mgmt("%s: unspecified transceiver type detected\n", __func__);
			break;
		case 0x1:
			/* FIXME: need to turn on CDR for optics */
			debug_sfp_mgmt("%s: 100G active optical cable detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_100G_AOC;
			break;
		case 0x2:
			/* FIXME: need to turn on CDR for optics */
			debug_sfp_mgmt("%s: 100G SR-4 detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_100G_SR4;
			break;
		case 0x3:
			/* FIXME: need to turn on CDR for optics */
			debug_sfp_mgmt("%s: 100G LR-4 detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_100G_LR4;
			break;
		case 0x4:
			/* FIXME: need to turn on CDR for optics */
			debug_sfp_mgmt("%s: 100G ER-4 detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_100G_ER4;
			break;
		case 0x8:
			debug_sfp_mgmt("%s: 100G active copper cable detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_100G_ACC;
			break;
		case 0xb:
			debug_sfp_mgmt("%s: 100G CR-4 detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_100G_CR4;
			break;
		case 0xc:
			debug_sfp_mgmt("%s: 25G CR CA-S detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_25G_CA_S;
			break;
		case 0xd:
			debug_sfp_mgmt("%s: 100G CA-N detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_25G_CA_N;
			break;
		case 0x10:
			/* FIXME */
			debug_sfp_mgmt("%s: 40G ER-4 detected\n", __func__);
			break;
		case 0x11:
			debug_sfp_mgmt("%s: 4X10G SR detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_4x10G_SR;
			break;
		case 0x18:
			debug_sfp_mgmt("%s: 100G active optical cable detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_100G_AOC;
			break;
		case 0x19:
			debug_sfp_mgmt("%s: 100G active copper cable detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_100G_ACC;
			break;
		default:
			debug_sfp_mgmt("%s: unknown medium\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_UNKNOWN;
			break;
		}
	break;
	default:
		debug_sfp_mgmt("%s: unknown medium\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_UNKNOWN;
		break;
	}
	/* FIXME: If the above couldn't detect the cable type, try
	 * checking the bit rate (byte 140) and using the device type
	 */

	/* Check cable for breakout - byte 113 */
	far_end = sh_data->buf[113] & 0x70; /* generate bit mask with bits 4-6 set */
	switch (far_end) {
	case 0x0:
		debug_sfp_mgmt("%s: FAR END unspecified\n", __func__);
		break;
	case 0x20:
	case 0x50:
		debug_sfp_mgmt("%s: Two FAR END specified\n", __func__);
		break;
	case 0x30:
		debug_sfp_mgmt("%s: 1 FAR END specified\n", __func__);
		break;
	case 0x40:
		debug_sfp_mgmt("%s: 4X1 breakout\n", __func__);
		break;
	case 0x60:
		debug_sfp_mgmt("%s: 2X1 breakout\n", __func__);
		break;
	case 0x10:
	default:
		debug_sfp_mgmt("%s: Single FAR END specified\n", __func__);
		break;
	}

	if (cap_info->trans_type == SFP_TRANS_TYPE_NONE) {
		/* if transceiver type is not identified, throw error */
		debug_sfp_mgmt("%s : %d:%d unknown cable type\n",
					__func__, cgx_id,
						lmac_id);
		return;
	}

	/* FIXME : Log the other vendor details if required */
	debug_sfp_mgmt("%s: Vendor name: %16.16s Vendor OUI: 02%x:02%x:02%x\t",
			__func__, mod_info->vendor_name, mod_info->vendor_oui[0],
			mod_info->vendor_oui[1], mod_info->vendor_oui[2]);
	debug_sfp_mgmt("Vendor Part num: %16.16s Revision %2.2s\n",
			mod_info->vendor_pn, mod_info->vendor_rev);
}

/* AN capabilities are determined based on the module
 * connected as specified by IEEE 802.3 SPEC
 * Ref : SFP_QSFP_Transceiver_Modules.xlsx
 */
int sfp_get_an_capability(int cgx_id, int lmac_id)
{
	int an = 0;
	sfp_cap_info_t *cap_info = &sfp_cap_info[cgx_id][lmac_id];
	debug_sfp_mgmt("%s: %d:%d trans_type %d\n", __func__, cgx_id, lmac_id,
			cap_info->trans_type);

	switch (cap_info->trans_type) {
	case SFP_TRANS_TYPE_25G_CA_N:
	case SFP_TRANS_TYPE_25G_CA_S:
	case SFP_TRANS_TYPE_25G_CA_L:
	case SFP_TRANS_TYPE_40G_CR4:
	case SFP_TRANS_TYPE_100G_CR4:
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_CR:
		an = 1;	/* AN supported */
		break;
	default:
		an = 0;	/* AN not supported */
		break;
	}
	cap_info->an_enable = an;

	debug_sfp_mgmt("%s: %d:%d an %d\n", __func__, cgx_id, lmac_id, an);

	return an;
}

/* FEC capabilities are determined based on the module
 * connected as specified by IEEE 802.3 SPEC
 * FIXME:
 * 10G/40G - FIRECODE FEC
 * 25G/50G - RS/FIRECODE FEC
 * 100G	   - RS FEC
 */
int sfp_get_fec_capability(int cgx_id, int lmac_id)
{
	int fec = 0;
	sfp_cap_info_t *cap_info = &sfp_cap_info[cgx_id][lmac_id];

	debug_sfp_mgmt("%s: %d:%d trans_type %d\n", __func__, cgx_id, lmac_id,
			cap_info->trans_type);
	switch (cap_info->trans_type) {
	case SFP_TRANS_TYPE_10G_SR:
	case SFP_TRANS_TYPE_10G_LR:
	case SFP_TRANS_TYPE_10G_LRM:
	case SFP_TRANS_TYPE_10G_ER:
	case SFP_TRANS_TYPE_10G_PCC:
	case SFP_TRANS_TYPE_10G_ACC:
	case SFP_TRANS_TYPE_4x10G_SR:
	case SFP_TRANS_TYPE_40G_CR4:
	case SFP_TRANS_TYPE_40G_LR4:
	case SFP_TRANS_TYPE_40G_SR4:
	case SFP_TRANS_TYPE_MULTI_RATE_10G_40G_SR:
	case SFP_TRANS_TYPE_MULTI_RATE_10G_40G_LR:
	case SFP_TRANS_TYPE_MULTI_RATE_10G_40G_CR:
		fec = SFP_FEC_MODE_FIRECODE;
		break;
	case SFP_TRANS_TYPE_25G_SR:
	case SFP_TRANS_TYPE_25G_LR:
	case SFP_TRANS_TYPE_25G_CA_N:
	case SFP_TRANS_TYPE_25G_CA_L:
	case SFP_TRANS_TYPE_25G_CA_S:
	case SFP_TRANS_TYPE_25G_ACC_S:
	case SFP_TRANS_TYPE_25G_ACC_L:
	case SFP_TRANS_TYPE_25G_AOC:
	case SFP_TRANS_TYPE_4x25G_CR:
	/* FIXME for multi-rate */
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_SR:
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_CR:
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_LR:
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_AOC:
		fec = SFP_FEC_MODE_RS_FIRECODE;
		break;
	case SFP_TRANS_TYPE_100G_AOC:
	case SFP_TRANS_TYPE_100G_SR4:
	case SFP_TRANS_TYPE_100G_LR4:
	case SFP_TRANS_TYPE_100G_ER4:
	case SFP_TRANS_TYPE_100G_ACC:
	case SFP_TRANS_TYPE_100G_CR4:
		fec = SFP_FEC_MODE_RS_FIRECODE;
		break;
	default:
		fec = SFP_FEC_MODE_NONE;
		break;
	}
	cap_info->fec_type = fec;
	debug_sfp_mgmt("%s: %d:%d fec %d\n", __func__, cgx_id, lmac_id, fec);

	return fec;
}

/* Get Speed capabilities */
int sfp_get_speed_capability(int cgx_id, int lmac_id)
{
	int max_speed = 0;
	sfp_cap_info_t *cap_info = &sfp_cap_info[cgx_id][lmac_id];

	debug_sfp_mgmt("%s: %d:%d trans_type %d\n", __func__, cgx_id, lmac_id,
			cap_info->trans_type);
	switch (cap_info->trans_type) {
	case SFP_TRANS_TYPE_1G_PCC:
	case SFP_TRANS_TYPE_1G_ACC:
	case SFP_TRANS_TYPE_1G_LX:
	case SFP_TRANS_TYPE_1G_SX:
	case SFP_TRANS_TYPE_1000_BASET:
		max_speed = 1000;
		break;
	case SFP_TRANS_TYPE_10G_SR:
	case SFP_TRANS_TYPE_10G_LR:
	case SFP_TRANS_TYPE_10G_LRM:
	case SFP_TRANS_TYPE_10G_ER:
	case SFP_TRANS_TYPE_10G_PCC:
	case SFP_TRANS_TYPE_10G_ACC:
	case SFP_TRANS_TYPE_10G_BASET:
	case SFP_TRANS_TYPE_4x10G:
		max_speed = 10000;
		break;
	case SFP_TRANS_TYPE_25G_SR:
	case SFP_TRANS_TYPE_25G_LR:
	case SFP_TRANS_TYPE_25G_CA_N:
	case SFP_TRANS_TYPE_25G_CA_L:
	case SFP_TRANS_TYPE_25G_CA_S:
	case SFP_TRANS_TYPE_25G_ACC_S:
	case SFP_TRANS_TYPE_25G_ACC_L:
	case SFP_TRANS_TYPE_25G_AOC:
	case SFP_TRANS_TYPE_4x25G_CR:
		max_speed = 25000;
		break;
	case SFP_TRANS_TYPE_40G_LR4:
	case SFP_TRANS_TYPE_40G_SR4:
	case SFP_TRANS_TYPE_40G_CR4:
	case SFP_TRANS_TYPE_XLPPI:
	case SFP_TRANS_TYPE_MULTI_RATE_10G_40G_SR:
	case SFP_TRANS_TYPE_MULTI_RATE_10G_40G_LR:
	case SFP_TRANS_TYPE_MULTI_RATE_10G_40G_CR:
		max_speed = 40000;
		break;
	case SFP_TRANS_TYPE_100G_AOC:
	case SFP_TRANS_TYPE_100G_SR4:
	case SFP_TRANS_TYPE_100G_LR4:
	case SFP_TRANS_TYPE_100G_ER4:
	case SFP_TRANS_TYPE_100G_ACC:
	case SFP_TRANS_TYPE_100G_CR4:
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_SR:
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_CR:
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_LR:
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_AOC:
		max_speed = 100000;
		break;
	/* FIXME for 50G/Multirate */
	default:
		max_speed = 0;
		break;
	}
	cap_info->speed_limit = max_speed;
	return max_speed;
}

int sfp_is_transceiver_optical(int cgx_id, int lmac_id)
{
	int optical = 0;
	sfp_cap_info_t *cap_info = &sfp_cap_info[cgx_id][lmac_id];

	debug_sfp_mgmt("%s: %d:%d\n", __func__, cgx_id, lmac_id);

	switch (cap_info->trans_type) {
	case SFP_TRANS_TYPE_1G_LX:
	case SFP_TRANS_TYPE_1G_SX:
	case SFP_TRANS_TYPE_10G_SR:
	case SFP_TRANS_TYPE_10G_LR:
	case SFP_TRANS_TYPE_10G_LRM:
	case SFP_TRANS_TYPE_10G_ER:
	case SFP_TRANS_TYPE_40G_LR4:
	case SFP_TRANS_TYPE_40G_SR4:
	case SFP_TRANS_TYPE_100G_AOC:
	case SFP_TRANS_TYPE_100G_SR4:
	case SFP_TRANS_TYPE_100G_LR4:
	case SFP_TRANS_TYPE_100G_ER4:
	case SFP_TRANS_TYPE_4x10G_SR:
	case SFP_TRANS_TYPE_25G_SR:
	case SFP_TRANS_TYPE_25G_LR:
	case SFP_TRANS_TYPE_25G_AOC:
	case SFP_TRANS_TYPE_MULTI_RATE_10G_40G_SR:
	case SFP_TRANS_TYPE_MULTI_RATE_10G_40G_LR:
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_SR:
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_LR:
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_AOC:
		optical = 1;
		break;
	default:
		optical = 0;
		break;
	}

	cap_info->optical = optical;

	return optical;
}

int sfp_is_transceiver_active(int cgx_id, int lmac_id)
{
	int active = 0;
	sfp_cap_info_t *cap_info = &sfp_cap_info[cgx_id][lmac_id];

	debug_sfp_mgmt("%s: %d:%d\n", __func__, cgx_id, lmac_id);

	switch (cap_info->trans_type) {
	case SFP_TRANS_TYPE_1G_ACC:
	case SFP_TRANS_TYPE_1G_LX:
	case SFP_TRANS_TYPE_1G_SX:
	case SFP_TRANS_TYPE_1000_BASET:
	case SFP_TRANS_TYPE_10G_BASET:
	case SFP_TRANS_TYPE_10G_SR:
	case SFP_TRANS_TYPE_10G_LR:
	case SFP_TRANS_TYPE_10G_LRM:
	case SFP_TRANS_TYPE_10G_ER:
	case SFP_TRANS_TYPE_10G_ACC:
	case SFP_TRANS_TYPE_40G_LR4:
	case SFP_TRANS_TYPE_40G_SR4:
	case SFP_TRANS_TYPE_100G_AOC:
	case SFP_TRANS_TYPE_100G_SR4:
	case SFP_TRANS_TYPE_100G_LR4:
	case SFP_TRANS_TYPE_100G_ER4:
	case SFP_TRANS_TYPE_100G_ACC:
	case SFP_TRANS_TYPE_4x10G_SR:
	case SFP_TRANS_TYPE_25G_ACC_S:
	case SFP_TRANS_TYPE_25G_ACC_M:
	case SFP_TRANS_TYPE_25G_ACC_L:
	case SFP_TRANS_TYPE_25G_SR:
	case SFP_TRANS_TYPE_25G_LR:
	case SFP_TRANS_TYPE_25G_AOC:
	case SFP_TRANS_TYPE_MULTI_RATE_10G_40G_SR:
	case SFP_TRANS_TYPE_MULTI_RATE_10G_40G_LR:
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_SR:
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_LR:
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_AOC:
		active = 1;
		break;
	default:
		active = 0;
		break;
	}
	cap_info->active = active;

	return active;
}

int sfp_parse_eeprom_data(int cgx_id, int lmac_id)
{
	int flag = 0, ret = 0, retry_count = 0;
	int retry_lock = 0;
	sfp_context_t *ctx;
	sfp_mod_info_t *mod_info;
	sfp_shared_data_t *sh_data = sfp_get_sh_mem_ptr(cgx_id, lmac_id);
	sfp_cap_info_t *cap_info = &sfp_cap_info[cgx_id][lmac_id];
	uint16_t sff_id = 0;

	debug_sfp_mgmt("%s: %d:%d\n", __func__, cgx_id, lmac_id);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return SFP_TRANS_TYPE_NONE;
	}
	ctx = &sh_data->sfp_ctx;
	mod_info = (sfp_mod_info_t *)sh_data->buf;

	/* Check if lock is free and if available, check the current state
	 * to parse the buffer
	 */
retry_acquire_lock:
	if (ctx->lock == SFP_OWN_NONE) {
		ctx->lock = SFP_OWN_AP;
retry_read_eeprom:
		if (ctx->data_status == SFP_DATA_STATE_EEPROM_VALID) {
			/* Read BYTE 0 for the identifier val
			 * SFF 8024 : TABLE 4-1 IDENTIFIER VALUES
			 */
			switch (mod_info->id) {
			case 0x3:
				debug_sfp_mgmt("%s: SFP/SFP+/SFP28 inserted\n", __func__);
				sfp_get_info(cgx_id, lmac_id);
				ret = cap_info->trans_type;
				sff_id = ETH_MODULE_SFF_8472;
				break;
			case 0xc:
				debug_sfp_mgmt("%s: QSFP inserted\n", __func__);
				qsfp_get_info(cgx_id, lmac_id);
				ret = cap_info->trans_type;
				sff_id = ETH_MODULE_SFF_8436;
				flag = 1; /* fall through */
			case 0xd:
				if (flag == 0) {
					debug_sfp_mgmt("%s: QSFP+ detected\n", __func__);
					sff_id = ETH_MODULE_SFF_8436;
					flag = 1; /* fall through */
				}
			case 0x11:
				if (flag == 0) {
					debug_sfp_mgmt("%s: QSFP-28 detected\n", __func__);
					sff_id = ETH_MODULE_SFF_8636;
					flag = 1;
				}
				/* INF-8438 Table 18 - Status Indicators
				 * read BYTE 2 (lower page 00) to check if transceiver
				 * is ready :
				 * Bit remains high until data is ready to be read at which time
				 * the device sets the bit low.
				 */
				if ((sh_data->buf[2] & 1) == 0) {
					debug_sfp_mgmt("%s: QSFP detected and transceiver ready\n",
								__func__);
					qsfp_get_info(cgx_id, lmac_id);
					ret = cap_info->trans_type;
				} else
					debug_sfp_mgmt("%s: QSFP detected and transceiver not ready\n",
								__func__);
				break;
			case 0x12:
				debug_sfp_mgmt("%s: CXP-28 inserted\n", __func__);
				break;
			case 0x18:
				debug_sfp_mgmt("%s: QSFP-DD inserted\n", __func__);
				qsfp_get_info(cgx_id, lmac_id);
				sff_id = ETH_MODULE_SFF_8024;
				ret = cap_info->trans_type;
				break;
			default:
				ERROR("%s: %d:%d unknown transceiver type inserted\n", __func__,
									cgx_id, lmac_id);
				ret = SFP_TRANS_TYPE_NONE;
			}
		} else	{
			if (retry_count++ < 5) {
				mdelay(1);
				goto retry_read_eeprom;
			}

			debug_sfp_mgmt("%s %d:%d EEPROM not valid state %d\n",
					 __func__, cgx_id, lmac_id,
					ctx->data_status);
			ret = SFP_TRANS_TYPE_NONE;
		}
	} else {
		if (retry_lock++ < 5) {
			mdelay(1);
			goto retry_acquire_lock;
		}
		debug_sfp_mgmt("%s %d:%d lock %d not available for AP\n",
					 __func__,
					cgx_id, lmac_id, ctx->lock);
		ret = SFP_TRANS_TYPE_NONE;
	}

	/* Copy the data to SH FW data
	 * whenever valid EEPROM data is
	 * obtained. Since the lock is owned
	 * by AP, MCP is not updating the
	 * buffer now.
	 */
	if (ret != SFP_TRANS_TYPE_NONE)
		sh_fwdata_update_eeprom_data(cgx_id, lmac_id, sff_id);

	/* set the lock to free */
	ctx->lock = SFP_OWN_NONE;

	return ret;
}

int sfp_validate_user_options(int cgx_id, int lmac_id)
{
	int speed_conf = 0;
	cgx_lmac_config_t *lmac_cfg;
	phy_config_t *phy;
	sfp_cap_info_t *cap_info = &sfp_cap_info[cgx_id][lmac_id];
	char *fec_str[3] = {"none", "baser", "rs"};

	debug_sfp_mgmt("%s: %d:%d\n", __func__, cgx_id, lmac_id);

	lmac_cfg = &(plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id]);
	phy = &lmac_cfg->phy_config;

	/* Obtain the module capabilities based on transceiver
	 * type retrieved from EEPROM
	 */
	sfp_get_an_capability(cgx_id, lmac_id);
	sfp_get_fec_capability(cgx_id, lmac_id);
	sfp_get_speed_capability(cgx_id, lmac_id);
	sfp_is_transceiver_active(cgx_id, lmac_id);
	sfp_is_transceiver_optical(cgx_id, lmac_id);

	debug_sfp_mgmt("%s: %d:%d AN %d FEC %d speed %d active %d optical %d\n",
			__func__, cgx_id, lmac_id,
			cap_info->an_enable,
			cap_info->fec_type,
			cap_info->speed_limit,
			cap_info->active,
			cap_info->optical);

	/* FIXME: If transceiver detected is not SFF compliant
	 * or unknown type from the supported list, don't validate
	 * the user options against capabilities
	 */
	if ((cap_info->trans_type == SFP_TRANS_TYPE_UNKNOWN) ||
		(cap_info->trans_type == SFP_TRANS_TYPE_NON_COMP))
		return 1;

	if (lmac_cfg->autoneg_dis) {
		/* Validate user options against QSFP/SFP module capabilities
		 * in case of FIXED mode to check if it matches. If it doesn't
		 * match, throw error to the user
		 */
		if ((lmac_cfg->fec != -1) && (lmac_cfg->fec != 0)) {
			/* In this case, user has configured FEC and it needs
			 * to be validated against CAP. If user has not
			 * configured FEC or FEC is disabled, no need to
			 * validate it
			 */
			if ((cap_info->fec_type & lmac_cfg->fec) == 0) {
				ERROR("%s: %d:%d User has configured\t"
				"FEC to be %s,\t"
				"but module's FEC cap is %s\n", __func__,
					cgx_id, lmac_id, fec_str[lmac_cfg->fec],
					fec_str[cap_info->fec_type]);
				return 0;
			}
		}

		speed_conf = cgx_get_lane_speed(cgx_id, lmac_id);
		debug_sfp_mgmt("%s: speed configured %d\n", __func__,
							speed_conf);

		if (speed_conf > cap_info->speed_limit) {
			ERROR("%s: %d:%d User has configured speed to be %d,\t"
					"but module's speed limit is %d\n",
					__func__, cgx_id, lmac_id, speed_conf,
					cap_info->speed_limit);
			return 0;
		}
	} else {
		/* FIXME - AN mode */
		if (cap_info->an_enable != (!lmac_cfg->autoneg_dis)) {
			ERROR("%s: %d:%d User has configured AN to be %d,\t"
					"but module's AN cap is %d\n",
					__func__, cgx_id, lmac_id,
					!lmac_cfg->autoneg_dis,
					cap_info->an_enable);
			return 0;
		}
	}

	if (lmac_cfg->phy_present && phy->init && phy->valid &&
	    phy->mod_type == PHY_MOD_TYPE_PAM4 &&
	    !(cap_info->fec_type & CGX_FEC_RS))
		WARN("%s: %d:%d PAM4 requires RS-FEC, but transceiver is not RS-FEC capable.\n",
		     __func__, cgx_id, lmac_id);

	return 1;
}

int mcp_send_async_req(int cgx_id, int lmac_id, int req_id)
{
	int retry_lock = 0;
	sfp_shared_data_t *sh_data = sfp_get_sh_mem_ptr(cgx_id, lmac_id);

	debug_sfp_mgmt("%s: %d:%d\n", __func__, cgx_id, lmac_id);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}

retry_acquire_lock:
	if (sh_data->async_ctx.lock == AN_LT_OWN_NONE) {
		sh_data->async_ctx.lock = AN_LT_OWN_AP;

		/* If ack bit is clear, post the request
		 * MCP will clear the ack bit when the
		 * request is processed
		 */
		debug_sfp_mgmt("%s: %d:%d ack %d\n",
			__func__, cgx_id, lmac_id, sh_data->async_ctx.ack);
		if (!sh_data->async_ctx.ack) {
			debug_sfp_mgmt("%s: %d:%d updating req_id %d to SM\n",
				__func__, cgx_id, lmac_id, req_id);
			/* Reset the state always to NO_STATE so
			 * MCP can start AN
			 */
			if (req_id == REQ_AN_LT_START)
				sh_data->async_ctx.data = AN_LT_NO_STATE;
			sh_data->async_req.req_id = req_id;
			sh_data->async_ctx.ack = 1;
			l2c_flush();
		} else {
			debug_sfp_mgmt("%s: %d:%d request in progress\n",
				__func__, cgx_id, lmac_id);
			sh_data->async_ctx.lock = AN_LT_OWN_NONE;
			return -1;
		}
	} else {
		if (retry_lock++ < 5) {
			mdelay(1);
			goto retry_acquire_lock;
		}
		debug_sfp_mgmt("%s %d:%d lock %d not available for AP\n",
					 __func__,
					cgx_id, lmac_id,
					sh_data->async_ctx.lock);
		return -1;
	}
	sh_data->async_ctx.lock = AN_LT_OWN_NONE;

	return 0;
}

unsigned int mcp_get_an_lt_state(int cgx_id, int lmac_id)
{
	int retry_lock = 0;
	int state = 0;

	sfp_shared_data_t *sh_data = sfp_get_sh_mem_ptr(cgx_id, lmac_id);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}
	debug_sfp_mgmt("%s: %d:%d\n", __func__, cgx_id, lmac_id);

retry_acquire_lock:
	if (sh_data->async_ctx.lock == AN_LT_OWN_NONE) {
		sh_data->async_ctx.lock = AN_LT_OWN_AP;
		if (retry_lock++ < 5) {
			mdelay(1);
			goto retry_acquire_lock;
		}
		debug_sfp_mgmt("%s %d:%d lock %d not available for AP\n",
					 __func__,
					cgx_id, lmac_id,
					sh_data->async_ctx.lock);
		return -1;
	}

	state = sh_data->async_ctx.data;
	sh_data->async_ctx.lock = AN_LT_OWN_NONE;
	return state;
}

unsigned int mcp_get_an_rx_sig_state(int cgx_id, int lmac_id)
{
	int retry_lock = 0;
	int sig_detect = 0;
	sfp_shared_data_t *sh_data = sfp_get_sh_mem_ptr(cgx_id, lmac_id);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}

	debug_sfp_mgmt("%s: %d:%d\n", __func__, cgx_id, lmac_id);

retry_acquire_lock:
	if (sh_data->async_ctx.lock == AN_LT_OWN_NONE) {
		sh_data->async_ctx.lock = AN_LT_OWN_AP;
		if (retry_lock++ < 5) {
			mdelay(1);
			goto retry_acquire_lock;
		}
		debug_sfp_mgmt("%s %d:%d lock %d not available for AP\n",
					 __func__,
					cgx_id, lmac_id,
					sh_data->async_ctx.lock);
		return -1;
	}

	sig_detect = sh_data->async_ctx.sig_detect;
	sh_data->async_ctx.lock = AN_LT_OWN_NONE;
	return sig_detect;
}

int mcp_set_an_lt_state(int cgx_id, int lmac_id, int state)
{
	int retry_lock = 0;
	sfp_shared_data_t *sh_data = sfp_get_sh_mem_ptr(cgx_id, lmac_id);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}

	debug_sfp_mgmt("%s: %d:%d state %d\n", __func__, cgx_id, lmac_id,
					state);

retry_acquire_lock:
	if (sh_data->async_ctx.lock == AN_LT_OWN_NONE) {
		sh_data->async_ctx.lock = AN_LT_OWN_AP;
		if (retry_lock++ < 5) {
			mdelay(1);
			goto retry_acquire_lock;
		}
		debug_sfp_mgmt("%s %d:%d lock %d not available for AP\n",
					 __func__,
					cgx_id, lmac_id,
					sh_data->async_ctx.lock);
		return -1;
	}

	sh_data->async_ctx.data = state;
	sh_data->async_ctx.lock = AN_LT_OWN_NONE;
	return 0;
}

unsigned int mcp_get_intf_rev(int cgx_id, int lmac_id)
{
	int retry_lock = 0;
	unsigned int mcp_rev = 0;
	sfp_shared_data_t *sh_data = sfp_get_sh_mem_ptr(cgx_id, lmac_id);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}

	debug_sfp_mgmt("%s: %d:%d\n", __func__, cgx_id, lmac_id);

retry_acquire_lock:
	if (sh_data->async_ctx.lock == AN_LT_OWN_NONE) {
		sh_data->async_ctx.lock = AN_LT_OWN_AP;
		if (retry_lock++ < 5) {
			mdelay(1);
			goto retry_acquire_lock;
		}
		debug_sfp_mgmt("%s %d:%d lock %d not available for AP\n",
					 __func__,
					cgx_id, lmac_id,
					sh_data->async_ctx.lock);
		return -1;
	}

	mcp_rev = sh_data->intf_rev;
	sh_data->async_ctx.lock = AN_LT_OWN_NONE;
	return mcp_rev;
}

/**
 * Get MCP AN/LT debug data
 *
 * @param qlm	      QLM to use
 * @param lane	      Which lane
 * @param mcp_an_dbg  MCP AN/LT debug data
 * @return 0 = success, -1 = failure
 */
int mcp_get_an_lt_data(int cgx_id, int lmac_id, mcp_an_dbg_state_t *mcp_an_dbg)
{
	int retry_lock = 0;

	sfp_shared_data_t *sh_data = sfp_get_sh_mem_ptr(cgx_id, lmac_id);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}
	debug_sfp_mgmt("%s: %d:%d\n", __func__, cgx_id, lmac_id);

retry_acquire_lock:
	if (sh_data->async_ctx.lock == AN_LT_OWN_NONE) {
		sh_data->async_ctx.lock = AN_LT_OWN_AP;
		if (retry_lock++ < 5) {
			mdelay(1);
			goto retry_acquire_lock;
		}
		debug_sfp_mgmt("%s %d:%d lock %d not available for AP\n",
					 __func__,
					cgx_id, lmac_id,
					sh_data->async_ctx.lock);
		return -1;
	}
	*mcp_an_dbg = sh_data->an_lt_args.mcp_an_dbg;
	sh_data->async_ctx.lock = AN_LT_OWN_NONE;
	return 0;
}

/**
 * Get MCP AN/LT Negotiated Technology and FEC
 *
 * @param cgx_id     CGX to use
 * @param lmac_id    LMAC to use
 * @param fec_type   Negotiated FEC type
 * @param qlm_mode   Negotiated QLM mode
 * @param lmac_type  Negotiated LMAC type
 * @return 0 on success, -1 on failure
 */
int mcp_get_neg_fec_tech(int cgx_id, int lmac_id, int *fec_type,
			 int *qlm_mode, int *lmac_type)
{
	int retry_lock = 0;
	sfp_shared_data_t *sh_data = sfp_get_sh_mem_ptr(cgx_id, lmac_id);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}
	debug_sfp_mgmt("%s: %d:%d\n", __func__, cgx_id, lmac_id);

retry_acquire_lock:
	if (sh_data->async_ctx.lock == AN_LT_OWN_NONE) {
		sh_data->async_ctx.lock = AN_LT_OWN_AP;
		if (retry_lock++ < 5) {
			mdelay(1);
			goto retry_acquire_lock;
		}
		debug_sfp_mgmt("%s %d:%d lock %d not available for AP\n",
					 __func__,
					cgx_id, lmac_id,
					sh_data->async_ctx.lock);
		return -1;
	}

	*fec_type = sh_data->an_lt_args.fec_type;
	*qlm_mode = sh_data->an_lt_args.qlm_mode;
	*lmac_type = sh_data->an_lt_args.lmac_type;
	sh_data->async_ctx.lock = AN_LT_OWN_NONE;
	return 0;
}

/**
 * Waits for MCP to clear command ack
 *
 * @param cgx_id     CGX to use
 * @param lmac_id    LMAC to use
 * @return 0 on success, -1 on failure/timeout
 */
int mcp_wait_for_cmd_ack_to_clr(int cgx_id, int lmac_id)
{
	int retry_lock = 0;
	sfp_shared_data_t *sh_data = sfp_get_sh_mem_ptr(cgx_id, lmac_id);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}
	debug_sfp_mgmt("%s: %d:%d\n", __func__, cgx_id, lmac_id);

retry_ack_check:
	if (sh_data->async_ctx.ack) {
		if (retry_lock++ < 60) {
			mdelay(1);
			goto retry_ack_check;
		}
		debug_sfp_mgmt("%s %d:%d Waiting for MCP to clear command ack\n",
			       __func__, cgx_id, lmac_id);
		return -1;
	}

	return 0;
}
