/*
 * Copyright (c) 2019 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <octeontx_common.h>
#include <octeontx_utils.h>
#include <qlm/qlm.h>
#include <qlm/qlm_gserr.h>
#include <plat_otx2_configuration.h>
#include <gser_internal.h>

static void qlm_gserr_set_state(int qlm, int lane, qlm_state_lane_t state)
{
	CSR_WRITE(CAVM_GSERRX_SCRATCHX(qlm, lane), state.u);
}

#if defined(IMAGE_BL31)
/**
 * Check whether SERDES Rx lane is detecting a signal
 *
 * @param qlm	  QLM to use
 * @param lane	  Which lane
 * @return 0 on successful signal detected, 1 on no signal detected
 */
static int qlm_gserr_rx_signal_detect(int qlm, int lane)
{
	/* Skip check if nea or ned loopbacks enabled */
	GSER_CSR_INIT(dpl_rxdp_ctrl1, CAVM_GSERRX_LNX_TOP_DPL_RXDP_CTRL1(qlm, lane));
	GSER_CSR_INIT(afe_loopback_ctrl, CAVM_GSERRX_LNX_TOP_AFE_LOOPBACK_CTRL(qlm, lane));

	if (dpl_rxdp_ctrl1.s.rx_dmux_sel ||
		afe_loopback_ctrl.s.loopback_nea_en)
		return 0;

	CSR_INIT(bsts, CAVM_GSERRX_LANEX_STATUS_BSTS(qlm, lane));
	if (bsts.s.ln_stat_los)
		return 1;
	else
		return 0;
}
#endif

/**
 * Get the LMAC physical lane for the GSER physical lane
 *
 * @param  qlm	  QLM to use
 * @param  lane	  Which lane
 * @return Returns the physical lane
 */
static int qlm_gserr_get_lmac_phy_lane(int qlm, int lane, int lane_to_sds)
{
	int phy_lane;

	phy_lane = ((lane_to_sds >> (lane * 2)) & 0x3);
	return phy_lane;
}

#if defined(IMAGE_BL31)
static void qlm_gserr_rx_leq_adaptation(int qlm, int lane, int disable, int leq_lfg_start,
	int leq_hfg_sql_start, int leq_mbf_start, int leq_mbg_start,
	int gn_apg_start)
{
	/* Configure LEQ adaptation */
	GSER_CSR_MODIFY(c, CAVM_GSERRX_LNX_FEATURE_ADAPT_CONT_CFG0(qlm, lane),
		c.s.en = !disable);
	GSER_CSR_MODIFY(c, CAVM_GSERRX_LNX_FEATURE_CTLE_ADAPT_LFG_CFG(qlm, lane),
		c.s.init1_en = !disable;
		c.s.init0_en = !disable);
	GSER_CSR_MODIFY(c, CAVM_GSERRX_LNX_LEQ_REFCLK_EQ_LFG_CTRL0(qlm, lane),
		c.s.eq_lfg_start = leq_lfg_start);
	GSER_CSR_MODIFY(c, CAVM_GSERRX_LNX_FEATURE_CTLE_ADAPT_APG_CFG(qlm, lane),
		c.s.init1_en = !disable;
		c.s.init0_en = !disable);
	GSER_CSR_MODIFY(c, CAVM_GSERRX_LNX_LEQ_REFCLK_GN_APG_CTRL0(qlm, lane),
		c.s.gn_apg_start = gn_apg_start);
	GSER_CSR_MODIFY(c, CAVM_GSERRX_LNX_FEATURE_CTLE_ADAPT_HFG_CFG0(qlm, lane),
		c.s.cont_en = !disable;
		c.s.init1_en = !disable;
		c.s.init0_en = !disable);
	GSER_CSR_MODIFY(c, CAVM_GSERRX_LNX_FEATURE_CTLE_ADAPT_HFG_CFG1(qlm, lane),
		c.s.init1_en = !disable;
		c.s.init0_en = !disable);
	GSER_CSR_MODIFY(c, CAVM_GSERRX_LNX_LEQ_REFCLK_EQ_HFG_SQL_CTRL0(qlm, lane),
		c.s.eq_hfg_sql_start = leq_hfg_sql_start);
	GSER_CSR_MODIFY(c, CAVM_GSERRX_LNX_FEATURE_CTLE_ADAPT_MBS_CFG0(qlm, lane),
		c.s.init1_en = !disable;
		c.s.init0_en = !disable);
	GSER_CSR_MODIFY(c, CAVM_GSERRX_LNX_FEATURE_CTLE_ADAPT_MBS_CFG1(qlm, lane),
		c.s.init1_en = !disable;
		c.s.init0_en = !disable);
	GSER_CSR_MODIFY(c, CAVM_GSERRX_LNX_LEQ_REFCLK_EQ_MB_CTRL1(qlm, lane),
		c.s.eq_mbg_start = leq_mbg_start;
		c.s.eq_mbf_start = leq_mbf_start);
}

/**
 * Configures GSERR lane with fixed CTLE settings
 * Disables LEQ LFG, APG, HFG, MBG adaptation. Overrides with provided values.
 * Only supports AN disabled modes
 *
 * @param module             Index into GSER* group
 * @param lane               Which lane
 * @param disable            1 disable LEQ adaptation, 0 enable LEQ adaptation
 * @param leq_lfg_start      LEQ Low freq gain override value
 * @param leq_hfg_sql_start  LEQ High freq gain override value
 * @param leq_mbf_start      LEQ Mid-Band Frequency override value
 * @param leq_mbg_start      LEQ Mid-Band Gain override value
 * @param gn_apg_start       LEQ All pass gain override value
 */
static void qlm_gserr_rx_leq_adapt(int module, int lane, int disable, int leq_lfg_start,
	int leq_hfg_sql_start, int leq_mbf_start, int leq_mbg_start,
	int gn_apg_start)
{
	/* Doesn't support AN enabled modes */
	GSER_CSR_INIT(bcfg, CAVM_GSERRX_LANEX_CONTROL_BCFG(module, lane));
	if (bcfg.s.ln_an_cfg != QLM_LANE_AN_DIS)
		return;

	/* 1. Bring all Fixed Mode lanes to RESET power state */
	GSER_CSR_MODIFY(c, CAVM_GSERRX_LANEX_CONTROL_BCFG(module, lane),
			c.s.ln_rst = 1);
	GSER_TRACE(QLM, "GSERR%d.%d: Setting Lane Reset\n", module, lane);

	/* 2. Wait for the PHY firmware to signal that the Lane is in the Reset
	 *	power state which is signaled by the lane Tx and Rx blocks negating
	 *	the Tx/Rx ready signals.
	 *	Read/Poll GSERR(0..2)_LANE(0..3)_STATUS_BSTS
	 *		LN_TX_RDY=0 Lane Tx is not ready
	 *		LN_RX_RDY=0 Lane Rx is not ready
	 *		LN_STATE_CHNG_RDY = 0 Lane is transitioning states
	 */
	if (GSER_CSR_WAIT_FOR_FIELD(CAVM_GSERRX_LANEX_STATUS_BSTS(module, lane), GSERRX_STATUS_BSTS_LN_STATE_CHNG_RDY, ==, 0, 10000))
	{
		/* This is an interim step and happens fast, so sometimes we miss it */
		//GSER_TRACE(QLM, "GSERR%d.%d: CHRDY2: Timeout waiting for GSERRX_LANEX_STATUS_BSTS[ln_state_chng_rdy]=0 (change rate)\n", module, lane);
	}
	if (GSER_CSR_WAIT_FOR_FIELD(CAVM_GSERRX_LANEX_STATUS_BSTS(module, lane), GSERRX_STATUS_BSTS_LN_TX_RDY, ==, 0, 500))
		gser_error("GSERR%d.%d: Timeout waiting for GSERRX_LANEX_STATUS_BSTS[ln_tx_rdy]=0 (change rate)\n", module, lane);
	if (GSER_CSR_WAIT_FOR_FIELD(CAVM_GSERRX_LANEX_STATUS_BSTS(module, lane), GSERRX_STATUS_BSTS_LN_RX_RDY, ==, 0, 500))
		gser_error("GSERR%d.%d: Timeout waiting for GSERRX_LANEX_STATUS_BSTS[ln_rx_rdy]=0 (change rate)\n", module, lane);

	/* 3. Wait for the ???Lane State Change Ready??? to signal that the lane has
	 *	transitioned to the ???Reset??? state.
	 *	Read/Poll GSERR(0..2)_LANE(0..3)_STATUS_BSTS
	 *		LN_STATE_CHNG_RDY = 1 Lane is in the ???Reset??? power state
	 */
	if (GSER_CSR_WAIT_FOR_FIELD(CAVM_GSERRX_LANEX_STATUS_BSTS(module, lane), GSERRX_STATUS_BSTS_LN_STATE_CHNG_RDY, ==, 1, 10000))
		gser_error("GSERR%d.%d: CHRDY3: Timeout waiting for GSERRX_LANEX_STATUS_BSTS[ln_state_chng_rdy]=1 (change rate)\n", module, lane);

	/* Configure GSERR lane with fixed CTLE settings */
	qlm_gserr_rx_leq_adaptation(module, lane, disable, leq_lfg_start, leq_hfg_sql_start, leq_mbf_start, leq_mbg_start, gn_apg_start);

	/* Release all lanes in Fixed Rate mode from Reset
	 * Write GSERR(0..2)_LANE(0..3)_CONTROL_BCFG
	 * LN_RST=0 Release the lane reset
	 */
	GSER_CSR_MODIFY(c, CAVM_GSERRX_LANEX_CONTROL_BCFG(module, lane),
			c.s.ln_rst = 0);

	/* Wait for the ???Lane State Change Ready??? status bit to deassert
	 * indicating the lane is transitioning to the ???RESET??? or "ACTIVE" state.
	 * Read/Poll GSERR(0..2)_LANE(0..3)_STATUS_BSTS
	 * LN_STATE_CHNG_RDY = 0 Lane is transitioning power states
	 */
	if (GSER_CSR_WAIT_FOR_FIELD(CAVM_GSERRX_LANEX_STATUS_BSTS(module, lane), GSERRX_STATUS_BSTS_LN_STATE_CHNG_RDY, ==, 0, 10000))
	{
		/* This is an interim step and happens fast, so sometimes we miss it */
		//gser_error("GSERR%d.%d: CHRDY5: Timeout waiting for GSERRX_LANEX_STATUS_BSTS[ln_state_chng_rdy]=0\n", module, lane);
	}

	/* Read/Poll for the GSERR to set the Lane State Change Ready flag and
	 * drive the Lane Tx and Rx ready flags to signal that the lane as
	 * returned to the ACTIVE state.
	 * Read/Poll GSERR(0..2)_LANE(0..3)_STATUS_BSTS
	 * LN_TX_RDY=1 Lane Tx is ready
	 * LN_RX_RDY=1 Lane Rx is ready
	 * LN_STATE_CHNG_RDY = 1 Lane is in the ???Active??? power state
	 */
	GSER_TRACE(QLM, "GSERR%d.%d: Clearing Lane Reset\n", module, lane);
	if (GSER_CSR_WAIT_FOR_FIELD(CAVM_GSERRX_LANEX_STATUS_BSTS(module, lane), GSERRX_STATUS_BSTS_LN_TX_RDY, ==, 1, 5000))
		gser_error("GSERR%d.%d: Timeout waiting for GSERRX_LANEX_STATUS_BSTS[ln_tx_rdy]=1 (reset done)\n", module, lane);
	if (GSER_CSR_WAIT_FOR_FIELD(CAVM_GSERRX_LANEX_STATUS_BSTS(module, lane), GSERRX_STATUS_BSTS_LN_RX_RDY, ==, 1, 5000))
		gser_error("GSERR%d.%d: Timeout waiting for GSERRX_LANEX_STATUS_BSTS[ln_rx_rdy]=1 (reset done)\n", module, lane);

	/* Wait for the PHY ???Lane State Change Ready??? to signal that the lane has
	 * transitioned to the ???RESET" or "ACTIVE" state.
	 * Read/Poll GSERR(0..2)_LANE(0..3)_STATUS_BSTS
	 * LN_STATE_CHNG_RDY = 1 Lane is in the ???RESET??? or "ACTIVE" power state
	 */
	if (GSER_CSR_WAIT_FOR_FIELD(CAVM_GSERRX_LANEX_STATUS_BSTS(module, lane), GSERRX_STATUS_BSTS_LN_STATE_CHNG_RDY, ==, 1, 10000))
		gser_error("GSERR%d.%d: CHRDY6: Timeout waiting for GSERRX_LANEX_STATUS_BSTS[ln_state_chng_rdy]=1\n", module, lane);

	/* Fixed to Fixed Mode Step 15. Enable the Tx/Rx FIFOs between CGX and GSERR
	 * Write GSERR(0..2)_LANE(0..3)_CONTROL_BCFG
	 * CFG_CGX = 1 Enable Tx and Rx Async FIFOs to CGX
	 */
	GSER_CSR_MODIFY(c, CAVM_GSERRX_LANEX_CONTROL_BCFG(module, lane),
			c.s.cfg_cgx = 1);
	gser_wait_usec(1000);
}

static void qlm_gserr_rx_dfe_adaptation(int qlm, int lane, int disable)
{
	/* Configure DFE adaptation */
	GSER_CSR_MODIFY(c, CAVM_GSERRX_LNX_FEATURE_DFE_ADAPT_TAP1_CFG(qlm, lane),
		c.s.tap1_start_val_sel = 0;
		c.s.tap1_cont_en = !disable;
		c.s.tap1_eie_en = 0;
		c.s.tap1_init_en = !disable);
	GSER_CSR_MODIFY(c, CAVM_GSERRX_LNX_FEATURE_DFE_ADAPT_TAP2_CFG(qlm, lane),
		c.s.tap2_start_val_sel = 0;
		c.s.tap2_cont_en = !disable;
		c.s.tap2_eie_en = 0;
		c.s.tap2_init_en = !disable);
	GSER_CSR_MODIFY(c, CAVM_GSERRX_LNX_FEATURE_DFE_ADAPT_TAP3_CFG(qlm, lane),
		c.s.tap3_start_val_sel = 0;
		c.s.tap3_cont_en = !disable;
		c.s.tap3_eie_en = 0;
		c.s.tap3_init_en = !disable);
	GSER_CSR_MODIFY(c, CAVM_GSERRX_LNX_FEATURE_DFE_ADAPT_TAP4_CFG(qlm, lane),
		c.s.tap4_start_val_sel = 0;
		c.s.tap4_cont_en = !disable;
		c.s.tap4_eie_en = 0;
		c.s.tap4_init_en = !disable);
	GSER_CSR_MODIFY(c, CAVM_GSERRX_LNX_FEATURE_DFE_ADAPT_TAP5_CFG(qlm, lane),
		c.s.tap5_start_val_sel = 0;
		c.s.tap5_cont_en = !disable;
		c.s.tap5_eie_en = 0;
		c.s.tap5_init_en = !disable);
	GSER_CSR_MODIFY(c, CAVM_GSERRX_LNX_FEATURE_DFE_ADAPT_TAP6_CFG(qlm, lane),
		c.s.tap6_start_val_sel = 0;
		c.s.tap6_cont_en = !disable;
		c.s.tap6_eie_en = 0;
		c.s.tap6_init_en = !disable);
	GSER_CSR_MODIFY(c, CAVM_GSERRX_LNX_FEATURE_DFE_ADAPT_TAP7_CFG(qlm, lane),
		c.s.tap7_start_val_sel = 0;
		c.s.tap7_cont_en = !disable;
		c.s.tap7_eie_en = 0;
		c.s.tap7_init_en = !disable);
	GSER_CSR_MODIFY(c, CAVM_GSERRX_LNX_FEATURE_DFE_ADAPT_TAP8_CFG(qlm, lane),
		c.s.tap8_start_val_sel = 0;
		c.s.tap8_cont_en = !disable;
		c.s.tap8_eie_en = 0;
		c.s.tap8_init_en = !disable);
}

/**
 * Disable all DFE taps on GSERR lane.
 * Only supports AN disabled modes
 *
 * @param module     Index into GSER* group
 * @param lane       Which lane
 * @param disable    1 disable DFE adaptation, 0 enable DFE adaptation
 */
static void qlm_gserr_rx_dfe_adapt(int module, int lane, int disable)
{
	/* Doesn't support AN enabled modes */
	GSER_CSR_INIT(bcfg, CAVM_GSERRX_LANEX_CONTROL_BCFG(module, lane));
	if (bcfg.s.ln_an_cfg != QLM_LANE_AN_DIS)
		return;

	/* 1. Bring all Fixed Mode lanes to RESET power state */
	GSER_CSR_MODIFY(c, CAVM_GSERRX_LANEX_CONTROL_BCFG(module, lane),
			c.s.ln_rst = 1);
	GSER_TRACE(QLM, "GSERR%d.%d: Setting Lane Reset\n", module, lane);

	/* 2. Wait for the PHY firmware to signal that the Lane is in the Reset
	 *	power state which is signaled by the lane Tx and Rx blocks negating
	 *	the Tx/Rx ready signals.
	 *	Read/Poll GSERR(0..2)_LANE(0..3)_STATUS_BSTS
	 *		LN_TX_RDY=0 Lane Tx is not ready
	 *		LN_RX_RDY=0 Lane Rx is not ready
	 *		LN_STATE_CHNG_RDY = 0 Lane is transitioning states
	 */
	if (GSER_CSR_WAIT_FOR_FIELD(CAVM_GSERRX_LANEX_STATUS_BSTS(module, lane), GSERRX_STATUS_BSTS_LN_STATE_CHNG_RDY, ==, 0, 10000))
	{
		/* This is an interim step and happens fast, so sometimes we miss it */
		//GSER_TRACE(QLM, "GSERR%d.%d: CHRDY2: Timeout waiting for GSERRX_LANEX_STATUS_BSTS[ln_state_chng_rdy]=0 (change rate)\n", module, lane);
	}
	if (GSER_CSR_WAIT_FOR_FIELD(CAVM_GSERRX_LANEX_STATUS_BSTS(module, lane), GSERRX_STATUS_BSTS_LN_TX_RDY, ==, 0, 500))
		gser_error("GSERR%d.%d: Timeout waiting for GSERRX_LANEX_STATUS_BSTS[ln_tx_rdy]=0 (change rate)\n", module, lane);
	if (GSER_CSR_WAIT_FOR_FIELD(CAVM_GSERRX_LANEX_STATUS_BSTS(module, lane), GSERRX_STATUS_BSTS_LN_RX_RDY, ==, 0, 500))
		gser_error("GSERR%d.%d: Timeout waiting for GSERRX_LANEX_STATUS_BSTS[ln_rx_rdy]=0 (change rate)\n", module, lane);

	/* 3. Wait for the ???Lane State Change Ready??? to signal that the lane has
	 *	transitioned to the ???Reset??? state.
	 *	Read/Poll GSERR(0..2)_LANE(0..3)_STATUS_BSTS
	 *		LN_STATE_CHNG_RDY = 1 Lane is in the ???Reset??? power state
	 */
	if (GSER_CSR_WAIT_FOR_FIELD(CAVM_GSERRX_LANEX_STATUS_BSTS(module, lane), GSERRX_STATUS_BSTS_LN_STATE_CHNG_RDY, ==, 1, 10000))
		gser_error("GSERR%d.%d: CHRDY3: Timeout waiting for GSERRX_LANEX_STATUS_BSTS[ln_state_chng_rdy]=1 (change rate)\n", module, lane);

	/* Disable the DFE taps */
	qlm_gserr_rx_dfe_adaptation(module, lane, disable);

	/* Release all lanes in Fixed Rate mode from Reset
	 * Write GSERR(0..2)_LANE(0..3)_CONTROL_BCFG
	 * LN_RST=0 Release the lane reset
	 */
	GSER_CSR_MODIFY(c, CAVM_GSERRX_LANEX_CONTROL_BCFG(module, lane),
			c.s.ln_rst = 0);

	/* Wait for the ???Lane State Change Ready??? status bit to deassert
	 * indicating the lane is transitioning to the ???RESET??? or "ACTIVE" state.
	 * Read/Poll GSERR(0..2)_LANE(0..3)_STATUS_BSTS
	 * LN_STATE_CHNG_RDY = 0 Lane is transitioning power states
	 */
	if (GSER_CSR_WAIT_FOR_FIELD(CAVM_GSERRX_LANEX_STATUS_BSTS(module, lane), GSERRX_STATUS_BSTS_LN_STATE_CHNG_RDY, ==, 0, 10000))
	{
		/* This is an interim step and happens fast, so sometimes we miss it */
		//gser_error("GSERR%d.%d: CHRDY5: Timeout waiting for GSERRX_LANEX_STATUS_BSTS[ln_state_chng_rdy]=0\n", module, lane);
	}

	/* Read/Poll for the GSERR to set the Lane State Change Ready flag and
	 * drive the Lane Tx and Rx ready flags to signal that the lane as
	 * returned to the ACTIVE state.
	 * Read/Poll GSERR(0..2)_LANE(0..3)_STATUS_BSTS
	 * LN_TX_RDY=1 Lane Tx is ready
	 * LN_RX_RDY=1 Lane Rx is ready
	 * LN_STATE_CHNG_RDY = 1 Lane is in the ???Active??? power state
	 */
	GSER_TRACE(QLM, "GSERR%d.%d: Clearing Lane Reset\n", module, lane);
	if (GSER_CSR_WAIT_FOR_FIELD(CAVM_GSERRX_LANEX_STATUS_BSTS(module, lane), GSERRX_STATUS_BSTS_LN_TX_RDY, ==, 1, 5000))
		gser_error("GSERR%d.%d: Timeout waiting for GSERRX_LANEX_STATUS_BSTS[ln_tx_rdy]=1 (reset done)\n", module, lane);
	if (GSER_CSR_WAIT_FOR_FIELD(CAVM_GSERRX_LANEX_STATUS_BSTS(module, lane), GSERRX_STATUS_BSTS_LN_RX_RDY, ==, 1, 5000))
		gser_error("GSERR%d.%d: Timeout waiting for GSERRX_LANEX_STATUS_BSTS[ln_rx_rdy]=1 (reset done)\n", module, lane);

	/* Wait for the PHY ???Lane State Change Ready??? to signal that the lane has
	 * transitioned to the ???RESET" or "ACTIVE" state.
	 * Read/Poll GSERR(0..2)_LANE(0..3)_STATUS_BSTS
	 * LN_STATE_CHNG_RDY = 1 Lane is in the ???RESET??? or "ACTIVE" power state
	 */
	if (GSER_CSR_WAIT_FOR_FIELD(CAVM_GSERRX_LANEX_STATUS_BSTS(module, lane), GSERRX_STATUS_BSTS_LN_STATE_CHNG_RDY, ==, 1, 10000))
		gser_error("GSERR%d.%d: CHRDY6: Timeout waiting for GSERRX_LANEX_STATUS_BSTS[ln_state_chng_rdy]=1\n", module, lane);

	/* Fixed to Fixed Mode Step 15. Enable the Tx/Rx FIFOs between CGX and GSERR
	 * Write GSERR(0..2)_LANE(0..3)_CONTROL_BCFG
	 * CFG_CGX = 1 Enable Tx and Rx Async FIFOs to CGX
	 */
	GSER_CSR_MODIFY(c, CAVM_GSERRX_LANEX_CONTROL_BCFG(module, lane),
			c.s.cfg_cgx = 1);
	gser_wait_usec(1000);
}
#endif

/**
 * Manually turn on or off the SERDES transmitter
 *
 * @param node	  Node to use in numa setup
 * @param qlm	   QLM to use
 * @param lane	  Which lane
 * @param enable_tx True to enable transmitter, false to disable
 */
static int qlm_gserr_tx_control(int qlm, int lane, int enable_tx)
{
	int en = (enable_tx) ? 1 : 0;

	GSER_TRACE(QLM, "GSERR%d.%d: %s TX\n", qlm, lane, (enable_tx) ? "Enable" : "Disable");
	GSER_CSR_MODIFY(c, CAVM_GSERRX_LANEX_CONTROL_BCFG(qlm, lane),
		c.s.ln_ctrl_tx_en = en);
	return 0;
}

#if defined(IMAGE_BL31)
/**
 * Check if PRBS Rx or Tx is enabled
 *
 * @param  qlm        Index into GSER* group
 * @param lane	  Which lane
 * @return 1 if PRBS enabled on lane, 0 if no PRBS
 */
static int qlm_gserr_prbs_chk(int qlm, int lane)
{
	/* Check if any lane has Rx or Tx PRBS enabled */
	GSER_CSR_INIT(rx_ctrl, CAVM_GSERRX_LNX_BIST_RX_CTRL(qlm, lane));
	GSER_CSR_INIT(tx_ctrl, CAVM_GSERRX_LNX_BIST_TX_CTRL(qlm, lane));
	if (rx_ctrl.s.en || tx_ctrl.s.en)
		return 1;

	return 0;
}

/**
 * Check if farend digital or analog loopbacks are enabled
 *
 * @param qlm    Index into GSER* group
 * @param lane	 Which lane
 * @return 1 if farend loopback enabled on lane, 0 if not enabled
 */
static int qlm_gserr_farend_lpbk_chk(int qlm, int lane)
{
	/* Farend Analog */
	GSER_CSR_INIT(loopback_ctrl, CAVM_GSERRX_LNX_TOP_AFE_LOOPBACK_CTRL(qlm, lane));
	/* Farend Digital */
	GSER_CSR_INIT(txdp_ctrl1, CAVM_GSERRX_LNX_TOP_DPL_TXDP_CTRL1(qlm, lane));

	if (loopback_ctrl.s.loopback_fea_en || txdp_ctrl1.s.lb_fed_tx_en)
		return 1;

	return 0;
}
#endif

const qlm_ops_t qlm_gserr_ops = {
	.type = QLM_GSERR_TYPE,
	.qlm_get_state = qlm_gserr_get_state,
	.qlm_set_state = qlm_gserr_set_state,
	.qlm_cfg_mode = qlm_gserr_cfg_mode,
	.qlm_measure_refclock = qlm_gserr_measure_refclock,
#if defined(IMAGE_BL31)
	.qlm_enable_prbs = qlm_gserr_enable_prbs,
	.qlm_disable_prbs = qlm_gserr_disable_prbs,
	.qlm_get_prbs_errors = qlm_gserr_get_prbs_errors,
	.qlm_inject_prbs_error = qlm_gserr_inject_prbs_error,
	.qlm_enable_loop = qlm_gserr_enable_loop,
#endif
	.qlm_tune_lane_tx = qlm_gserr_tune_lane_tx,
	.qlm_get_tune_lane_tx = qlm_gserr_get_tune_lane_tx,
#if defined(IMAGE_BL31)
	.qlm_rx_equalization = qlm__gserr_rx_equalization,
	.qlm_display_settings = qlm_gserr_display_settings,
	.qlm_eye_capture = qlm_gserr_eye_capture,
	.qlm_rx_signal_detect = qlm_gserr_rx_signal_detect,
#endif
	.qlm_tx_control = qlm_gserr_tx_control,
	.qlm_get_lmac_phy_lane = qlm_gserr_get_lmac_phy_lane,
#if defined(IMAGE_BL31)
	.qlm_prbs_chk = qlm_gserr_prbs_chk,
	.qlm_farend_lpbk_chk = qlm_gserr_farend_lpbk_chk,
	.qlm_display_trace = qlm_gserr_display_trace,
	.qlm_rx_leq_adapt = qlm_gserr_rx_leq_adapt,
	.qlm_rx_dfe_adapt = qlm_gserr_rx_dfe_adapt,
	.qlm_ned_loopback = qlm_gserr_ned_loopback,
	.qlm_fea_loopback = qlm_gserr_fea_loopback,
	.qlm_nea_loopback = qlm_gserr_nea_loopback,
	.qlm_fed_loopback = qlm_gserr_fed_loopback,
	.qlm_mode_chg_full_reset = qlm_gserr_mode_chg_full_reset,
	.qlm_cmu_reset = qlm_gserr_cmu_reset,
#endif
};
