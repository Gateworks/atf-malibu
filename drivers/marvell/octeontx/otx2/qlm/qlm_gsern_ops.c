/*
 * Copyright (c) 2019 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <octeontx_common.h>
#include <octeontx_utils.h>
#include <qlm/qlm.h>
#include <qlm/qlm_gsern.h>
#include <gser_internal.h>

int qlm_get_gbaud_mhz(int qlm, int lane)
{
	qlm_state_lane_t state;
	cgx_config_t *cgx;
	int gserx, cgx_idx;

	cgx_idx = plat_get_cgx_idx(qlm);
	cgx = &(plat_octeontx_bcfg->cgx_cfg[cgx_idx]);
	if (cgx->qlm_ops == NULL) {
		debug_gser("%s:CGX%d: has no qlm_ops\n",  __func__, cgx_idx);
		return 0;
	}

	gserx = plat_otx2_get_gserx(qlm, NULL);

	state = cgx->qlm_ops->qlm_get_state(gserx, lane);

	return state.s.baud_mhz;
}

static qlm_state_lane_t qlm_get_state_gsern(int qlm, int lane)
{
	qlm_state_lane_t state;

	state.u = CSR_READ(CAVM_GSERNX_LANEX_SCRATCHX(qlm, lane, 0));

	return state;
}

static void qlm_set_state_gsern(int qlm, int lane, qlm_state_lane_t state)
{
	CSR_WRITE(CAVM_GSERNX_LANEX_SCRATCHX(qlm, lane, 0), state.u);
}

/**
 * Called whenever CGX needs to reset or clear the reset
 * of the GSERN Lane Tx state machine
 *
 * @param qlm
 * @param lane_mask
 * @param reset_tx True if the serdes Tx state machine should be reset
 *
 * @return Zero on success, negative on error
 */
static int qlm_tx_sm_rst_control_gsern(int qlm, uint64_t lane_mask,
				       int reset_tx)
{
	int num_lanes;
	uint64_t lane_mask1;
	cavm_gsernx_lanex_rst2_bcfg_t gsernx_lanex_rst2_bcfg;

	num_lanes = qlm_get_lanes(qlm);
	lane_mask1 = lane_mask;

	if (reset_tx) {
		/* Assert Tx State Machine Reset */
		while (lane_mask1) {
			for (int lane = 0; lane < num_lanes; lane++) {
				if (!(lane_mask1 & (1 << lane)))
					continue;
				gsernx_lanex_rst2_bcfg.u = CSR_READ(
						CAVM_GSERNX_LANEX_RST2_BCFG(
								qlm, lane));
				gsernx_lanex_rst2_bcfg.s.rst_tx_rst_sm = 1;
				CSR_WRITE(CAVM_GSERNX_LANEX_RST2_BCFG(
							qlm, lane),
					gsernx_lanex_rst2_bcfg.u);
			}
		lane_mask1 >>= num_lanes;
		}
	} else {
		/* Deassert Tx State Machine Reset */
		while (lane_mask1) {
			for (int lane = 0; lane < num_lanes; lane++) {
				if (!(lane_mask1 & (1 << lane)))
					continue;
				/* Toggle Tx State Machine Reset */
				gsernx_lanex_rst2_bcfg.u = CSR_READ(
						CAVM_GSERNX_LANEX_RST2_BCFG(
								qlm, lane));
				gsernx_lanex_rst2_bcfg.s.rst_tx_rst_sm = 0;
				CSR_WRITE(CAVM_GSERNX_LANEX_RST2_BCFG(
							qlm, lane),
						gsernx_lanex_rst2_bcfg.u);
			}
			lane_mask1 >>= num_lanes;
		}

		/* Wait for Tx State Machine to be Ready */
		while (lane_mask) {
			for (int lane = 0; lane < num_lanes; lane++) {
				if (!(lane_mask & (1 << lane)))
					continue;
				/* Verify Tx State machine reset complete */
				if (GSER_CSR_WAIT_FOR_FIELD(
					CAVM_GSERNX_LANEX_INIT_BSTS(qlm, lane),
					GSERN_LANEX_TX_RST_SM_COMPLETE_MASK,
					==, 1,
					GSERN_LANEX_TX_RST_SM_TIMEOUT)) {

					GSER_TRACE(QLM,
						"%s: QLM%d.LANE%d Timeout waiting for reset of Tx state machine to complete\n",
						__func__, qlm, lane);
					return -1;
				}
			}
			lane_mask >>= num_lanes;
		}
	}
	return 0;
}

/**
 * Check whether SERDES Rx lane is detecting a signal
 *
 * @param qlm	  QLM to use
 * @param lane	  Which lane
 * @return 0 on successful signal detected, 1 on no signal detected
 */
static int qlm_rx_signal_detect_gsern(int qlm, int lane)
{
	CSR_INIT(rx_idledet_bsts, CAVM_GSERNX_LANEX_RX_IDLEDET_BSTS(qlm, lane));
	if (rx_idledet_bsts.s.idle)
		return 1;
	else
		return 0;
}

/**
 * Get the LMAC physical lane for the GSER physical lane
 *
 * @param  qlm   QLM to use
 * @param  lane          Which lane
 * @return Returns the LMAC physical lane
 */
static int qlm_gsern_get_lmac_phy_lane(int qlm, int lane, int lane_to_sds)
{
	int phy_lane;
	if (IS_OCTEONTX_VAR(read_midr(), T96PARTNUM, 1) && (qlm == 5))
		lane += 2;

	phy_lane = ((lane_to_sds >> (lane * 2)) & 0x3);
	return phy_lane;
}

const qlm_ops_t qlm_gsern_ops = {
	.type = QLM_GSERN_TYPE,
	.qlm_get_state = qlm_get_state_gsern,
	.qlm_set_state = qlm_set_state_gsern,
	.qlm_set_mode = qlm_set_mode_gsern,
	.qlm_measure_refclock = qlm_measure_refclock_gsern,
	.qlm_reset = qlm_reset_gsern,
	.qlm_enable_prbs = qlm_enable_prbs_gsern,
	.qlm_disable_prbs = qlm_disable_prbs_gsern,
	.qlm_get_prbs_errors = qlm_get_prbs_errors_gsern,
	.qlm_inject_prbs_error = qlm_inject_prbs_error_gsern,
	.qlm_enable_loop = qlm_enable_loop_gsern,
	.qlm_tune_lane_tx = qlm_tune_lane_tx_gsern,
	.qlm_get_tune_lane_tx = qlm_get_tune_lane_tx_gsern,
	.qlm_rx_equalization = qlm_rx_equalization_gsern,
	.qlm_display_settings = qlm_display_settings_gsern,
	.qlm_eye_capture = gsern_eye_capture,
	.qlm_tx_control = qlm_tx_control_gsern,
	.qlm_tx_sm_rst_control = qlm_tx_sm_rst_control_gsern,
	.qlm_rx_signal_detect = qlm_rx_signal_detect_gsern,
	.qlm_get_lmac_phy_lane = qlm_gsern_get_lmac_phy_lane,
};
