/*
 * Copyright (c) 2016 Marvell.
 * This program is provided "as is" without any warranty of any kind,
 * and is distributed under the applicable Marvell proprietary limited use
 * license agreement.
 */

#include <stdint.h>
#include <stdio.h>
#include <timers.h>
#include <platform_def.h>
#include <debug.h>
#include <assert.h>
#include <octeontx_common.h>
#include <hw_timers.h>
#include <octeontx_sata.h>
#include <drivers/delay_timer.h>
#include <string.h>
#include <plat_scfg.h>
#include <octeontx_dram.h>

#include "cavm-csrs-gser.h"
#include "cavm-csrs-sata.h"

#undef SATA_DEBUG

#define PM_DISABLE_PARTIAL	0x1
#define PM_DISABLE_SLUMBER	0x2

#define SATA_POLL_INTERVAL	250
#define SATA_PMP_DET_TIMEOUT	200
#define SATA_HDD_DET_TIMEOUT	2

#define SSTS_DET_PHY_DEV_GOOD	0x3

#ifdef SATA_DEBUG
#define debug(...) printf(__VA_ARGS__)
#else
#define debug(...) ((void) (0))
#endif

inline uint32_t upper_32(uintptr_t addr)
{
	return (addr >> 32);
}

inline uint32_t lower_32(uintptr_t addr)
{
	return addr & 0xFFFFFFFF;
}


/**
 * OCTEONTX has an issue where SATA drives may randomly drop out if power
 * management is enabled on two lanes of a half of a QLM. Force the SCTL[IPM]
 * bits to disable PARTIAL sleep and SLUMBER. We do this periodically in case
 * the OS tries to enable power management. We silently fix it so the OS doesn't
 * change.
 *
 * @param sata   SATA controller to check
 *
 * @return Zero, unused
 */
static int sata_drive_check_power_management(int sata)
{
	union cavm_satax_uahc_p0_sctl sctl;

	sctl.u = CSR_READ(CAVM_SATAX_UAHC_P0_SCTL(sata));

	if (sctl.s.ipm != (PM_DISABLE_SLUMBER | PM_DISABLE_PARTIAL)) {
		sctl.s.ipm = PM_DISABLE_PARTIAL | PM_DISABLE_SLUMBER;
		debug("ATF: SATA%d: Force disabling PARTIAL and SLUMBER\n", sata);
		CSR_WRITE(CAVM_SATAX_UAHC_P0_SCTL(sata), sctl.u);
	}
	return 0;
}

/**
 * OCTEONTX has an issue where drives may be detected and stuck
 * in busy after a SATA controller reset. Poll the drive status
 * to detect this, issuing a COMRESET as needed.
 *
 * @param sata   SATA controller to check
 *
 * @return Zero, unused
 */
static int sata_drive_check_detect_failure(int sata)
{
	union cavm_satax_uahc_p0_cmd cmd;
	union cavm_satax_uahc_p0_sctl sctl;
	union cavm_satax_uahc_p0_ssts ssts;
	union cavm_satax_uahc_p0_tfd tfd;
	union cavm_satax_uahc_p0_sig sig;
	int is_detected;
	int is_busy;

	/*
	 * Check if the SATA controller is started. If so assume drive is
	 * working fine. Also if FIS processing is not started, then
	 * the SATA controller must not be setup yet.
	 */
	cmd.u = CSR_READ(CAVM_SATAX_UAHC_P0_CMD(sata));
	if (cmd.s.st || !cmd.s.fre || sata_hba[sata].sig == SATA_SIG_PMP) {
		sata_hba[sata].state_count = 0;
		return 0;
	}

	/* Check if the controller is sending COMRESET (SCTL[DET]=1) */
	sctl.u = CSR_READ(CAVM_SATAX_UAHC_P0_SCTL(sata));
	if (sata_hba[sata].state_count && sctl.s.det) {
		/* We have already started COMRESET, finish it */
		debug("ATF: SATA%d: Restart drive detect\n", sata);
		sctl.s.det = 0;
		CSR_WRITE(CAVM_SATAX_UAHC_P0_SCTL(sata),
			  sctl.u);
		sata_hba[sata].state_count = 0;
		return 0;
	}

	/* See if the controller has detected the drive */
	ssts.u = CSR_READ(CAVM_SATAX_UAHC_P0_SSTS(sata));
	is_detected = (ssts.s.det == SSTS_DET_PHY_DEV_GOOD);

	sig.u = CSR_READ(CAVM_SATAX_UAHC_P0_SIG(sata));

	debug("ATF: SATA%d: Connected device: %x->%x\n", sata,
	      sata_hba[sata].sig, sig.s.sig);

	sata_hba[sata].sig = sig.s.sig;

	/* See if the drive is busy */
	tfd.u = CSR_READ(CAVM_SATAX_UAHC_P0_TFD(sata));
	is_busy = ((tfd.s.sts & ATA_TFD_BSY) != 0);

	/*
	 * If the drive isn't detected or busy we will need to
	 * recover it using COMRESET.
	 */
	if (!is_detected || is_busy) {
		/*
		 * Require the drive to be missing for 2 timer
		 * periods before starting COMRESET.
		 */
		if (sata_hba[sata].state_count < sata_hba[sata].timeout) {
			sata_hba[sata].state_count++;
			return 0;
		}
		debug("ATF: SATA%d: Failed drive detect\n", sata);
		sctl.s.det = 1;
		CSR_WRITE(CAVM_SATAX_UAHC_P0_SCTL(sata), sctl.u);
		return 0;
	} else {
		/* Drive looks good even though the controller is not ready */
		sata_hba[sata].state_count = 0;
	}

	return 0;
}

/**
 * OCTEONTX has an issue where hot unplug of drives may not be detected.
 * Poll the SATA controller to detect and recover this condition.
 *
 * @param sata   SATA controller to check
 *
 * @return Zero, unused
 */

#define NUM_CONTINUOUS_EIE_READ 10
static int sata_drive_check_unplug_failure(int sata)
{
	union cavm_gserx_rx_eie_detsts detsts;
	union cavm_satax_uahc_p0_ssts ssts;
	union cavm_satax_uahc_p0_serr serr;
	union cavm_gserx_lanex_lbert_cfg lbert_cfg;
	union cavm_gserx_lanex_misc_cfg_0 cfg_0;
	int i, lane, qlm;

	/* Determine which GSER and lane this SATA connects to */
	qlm = plat_octeontx_scfg->scfg.sata_cfg.to_gser[sata];
	lane = plat_octeontx_scfg->scfg.sata_cfg.to_lane[sata];
	if (lane < 0 || qlm < 0)
		return 0;

	/*
	 * Use exiting eletrical idle to detect if a drive is unplugged. The
	 * lane's EIESTS becomes zero when a drive is hot unplugged.
	 */
	for (i = 0; i < NUM_CONTINUOUS_EIE_READ; i++) {
		detsts.u = CSR_READ(CAVM_GSERX_RX_EIE_DETSTS(qlm));
		if (detsts.s.eiests & (1 << lane)) {
			/* EIESTS is set, so a drive is plugged in */
			goto detected;
		}
	}

	/* See if the controller has detected the drive */
	ssts.u = CSR_READ(CAVM_SATAX_UAHC_P0_SSTS(sata));
	if (ssts.s.det != SSTS_DET_PHY_DEV_GOOD) {
		/*
		 * The controller knows there isn't a drive, so we
		 * don't need to do anything.
		 */
		goto detected;
	}

	serr.u = CSR_READ(CAVM_SATAX_UAHC_P0_SERR(sata));
	if (serr.u != 0) {
		/*
		 * The controller knows there isn't a drive, so we
		 * don't need to do anything.
		 */
		goto detected;
	}

	if (sata_hba[sata].last_state == 0) {
		sata_hba[sata].last_state = 1;
		return 0;
	}

	debug("ATF: SATA%d: Fixup hot unplug (QLM %d, Lane %d)\n", sata, qlm, lane);

	/* Set the pattern generator to create a static pattern of zeros */
	CSR_WRITE(CAVM_GSERX_LANEX_LBERT_PAT_CFG(qlm, lane), 0);

	/* Enable the pattern generator creating 8b/10b patterns of zeros */
	lbert_cfg.u = CSR_READ(CAVM_GSERX_LANEX_LBERT_CFG(qlm, lane));
	lbert_cfg.s.lbert_pg_width = 3;
	lbert_cfg.s.lbert_pg_mode = 8;
	lbert_cfg.s.lbert_pg_en = 1;
	CSR_WRITE(CAVM_GSERX_LANEX_LBERT_CFG(qlm, lane), lbert_cfg.u);

	/* Put the PCS in internal loopback */
	cfg_0.u = CSR_READ(CAVM_GSERX_LANEX_MISC_CFG_0(qlm, lane));
	cfg_0.s.cfg_pcs_loopback = 1;
	CSR_WRITE(CAVM_GSERX_LANEX_MISC_CFG_0(qlm, lane), cfg_0.u);
	CSR_READ(CAVM_GSERX_LANEX_MISC_CFG_0(qlm, lane));

	/* SATA controller should detect link drop */
	serr.u = CSR_READ(CAVM_SATAX_UAHC_P0_SERR(sata));

	/* Disable PCS loopback */
	cfg_0.s.cfg_pcs_loopback = 0;
	CSR_WRITE(CAVM_GSERX_LANEX_MISC_CFG_0(qlm, lane), cfg_0.u);

	/* Disable pattern generator */
	lbert_cfg.s.lbert_pg_en = 0;
	CSR_WRITE(CAVM_GSERX_LANEX_LBERT_CFG(qlm, lane), lbert_cfg.u);
	CSR_READ(CAVM_GSERX_LANEX_LBERT_CFG(qlm, lane));

	/* Clear non-recovered persistent communication error */
	CSR_WRITE(CAVM_SATAX_UAHC_P0_SERR(sata), 0x200);

	return 0;
detected:
	sata_hba[sata].last_state = 0;
	return 0;

}

static int timer_cb(int hd)
{
	int sata;

	for (sata = 0; sata < sata_ctrlr_count; ++sata) {
		if (sata_hba[sata].ctrl_base == 0)
			continue;
		sata_drive_check_power_management(sata);
		sata_drive_check_detect_failure(sata);
		sata_drive_check_unplug_failure(sata);
	}
	return 0;
}

void sata_ipm_quirk()
{
	int sata, gser;
	union cavm_satax_uctl_ctl uctl_ctl;
	union cavm_gserx_cfg gser_cfg;
	union cavm_satax_uahc_p0_ssts ssts;
	union cavm_satax_uahc_p0_sig sig;
	union cavm_satax_uahc_p0_cmd cmd;
	union cavm_satax_uahc_p0_tfd tfd;
	union cavm_satax_uahc_p0_clb clb;
	union cavm_satax_uahc_p0_fb fb;
	union cavm_satax_uahc_p0_serr serr;
	union cavm_satax_uahc_gbl_ghc ghc;
	union cavm_satax_uahc_p0_ci ci;
	union cavm_satax_uahc_p0_is is;
	struct ahci_received_fis *ahci_rfis = (void *)(octeontx_dram_size() - 0x2000);
	struct ahci_command_list *ahci_cbl = (void *)(octeontx_dram_size() - 0x3000);
	struct ahci_command_fis *ahci_cfis = (void *)(octeontx_dram_size() - 0x4000);
	int i, timeout, retry;

	for (sata = 0; sata < MAX_SATA; sata++) {
		gser = plat_octeontx_scfg->scfg.sata_cfg.to_gser[sata];

		gser_cfg.u = CSR_READ(CAVM_GSERX_CFG(gser));
		debug("CAVM_GSERX_CFG(%d): %lx\n", gser, gser_cfg.u);

		if (!gser_cfg.s.sata) {
			sata_hba[sata].ctrl_base = 0;
			continue;
		}

		sata_hba[sata].ctrl_base = CAVM_SATA_BAR_E_SATAX_PF_BAR0(sata);

			/* check if we are in SATA mode */
		uctl_ctl.u = CSR_READ(CAVM_SATAX_UCTL_CTL(sata));
		debug("CAVM_SATAX_UCTL_CTL(%d): %lx\n", sata, uctl_ctl.u);

		if (!uctl_ctl.s.a_clk_en || uctl_ctl.s.a_clkdiv_rst) {
			/*
			 * Assume we cannot have 0 as address.
			 * Mark this controller unavailable.
			 */
			sata_hba[sata].ctrl_base = 0;
			continue;
		}

		retry = 2;

		do {
			memset(ahci_rfis, 0, sizeof (struct ahci_received_fis) * 32);
			memset(ahci_cbl, 0, sizeof (struct ahci_command_list) * 32);
			memset(ahci_cfis, 0, sizeof (struct ahci_command_fis) * 32);

			ghc.u = CSR_READ(CAVM_SATAX_UAHC_GBL_GHC(sata));
			ghc.s.hr = 1;
			CSR_WRITE(CAVM_SATAX_UAHC_GBL_GHC(sata), ghc.u);

			do {
				ghc.u = CSR_READ(CAVM_SATAX_UAHC_GBL_GHC(sata));
				udelay(1);
			} while (ghc.s.hr);

			cmd.u = CSR_READ(CAVM_SATAX_UAHC_P0_CMD(sata));
			cmd.s.pod = 1;
			cmd.s.sud = 1;
			CSR_WRITE(CAVM_SATAX_UAHC_P0_CMD(sata), cmd.u);

			timeout = 100;

			do {
				mdelay(1);
				ssts.u = CSR_READ(CAVM_SATAX_UAHC_P0_SSTS(sata));
			} while (timeout-- && !ssts.s.det);

			debug("ATF: SATA%d: SSTS: %x\n", sata, ssts.u);

			timeout = 10;

			do {
				serr.u = CSR_READ(CAVM_SATAX_UAHC_P0_SERR(sata));
				CSR_WRITE(CAVM_SATAX_UAHC_P0_SERR(sata), serr.u);

				tfd.u = CSR_READ(CAVM_SATAX_UAHC_P0_TFD(sata));
				tfd.s.sts &= (1 << 7) | (1 << 3) | (1 << 0);

				mdelay(1);
			} while (timeout-- && tfd.s.sts);

			is.u = CSR_READ(CAVM_SATAX_UAHC_P0_IS(sata));
			CSR_WRITE(CAVM_SATAX_UAHC_P0_IS(sata), is.u);

			clb.u = (uintptr_t)ahci_cbl;
			CSR_WRITE(CAVM_SATAX_UAHC_P0_CLB(sata), clb.u);

			fb.u = (uintptr_t)ahci_rfis;
			CSR_WRITE(CAVM_SATAX_UAHC_P0_FB(sata), fb.u);

			cmd.u = CSR_READ(CAVM_SATAX_UAHC_P0_CMD(sata));
			cmd.s.fre = 1;
			cmd.s.icc = 1;
			CSR_WRITE(CAVM_SATAX_UAHC_P0_CMD(sata), cmd.u);

			cmd.s.clo = 1;
			CSR_WRITE(CAVM_SATAX_UAHC_P0_CMD(sata), cmd.u);

			cmd.s.st = 1;
			CSR_WRITE(CAVM_SATAX_UAHC_P0_CMD(sata), cmd.u);

			is.u = CSR_READ(CAVM_SATAX_UAHC_P0_IS(sata));
			CSR_WRITE(CAVM_SATAX_UAHC_P0_IS(sata), is.u);

			ahci_cfis[0].pmnum = 0xF; //PMP
			ahci_cfis[0].type  = AHCI_FIS_REGISTER_H2D;
			ahci_cfis[0].control = ATA_CTL_SRST;

			ahci_cbl[0].cmd_c = 1;
			ahci_cbl[0].cmd_r = 1;
			ahci_cbl[0].cmd_ctba = lower_32((uintptr_t)&ahci_cfis[0]);
			ahci_cbl[0].cmd_ctbau = upper_32((uintptr_t)&ahci_cfis[0]);
			ahci_cbl[0].cmd_cfl = AHCI_FIS_REGISTER_H2D_LENGTH;

			ci.s.ci = 1 << 0;
			CSR_WRITE(CAVM_SATAX_UAHC_P0_CI(sata), ci.u);

			timeout = 1000;

			do {
				udelay(1);
				ci.u = CSR_READ(CAVM_SATAX_UAHC_P0_CI(sata));
			} while (timeout-- && ci.s.ci);

			debug("ATF: SATA%d: TO: %d, CI: %08x\n", sata, timeout, ci.s.ci);

			mdelay(1); //Wait 1ms instead of 5us

			is.u = CSR_READ(CAVM_SATAX_UAHC_P0_IS(sata));
			CSR_WRITE(CAVM_SATAX_UAHC_P0_IS(sata), is.u);

			ahci_cbl[0].cmd_c = 0;
			ahci_cbl[0].cmd_r = 0;
			ahci_cbl[0].cmd_ctba = lower_32((uintptr_t)&ahci_cfis[0]);
			ahci_cbl[0].cmd_ctbau = upper_32((uintptr_t)&ahci_cfis[0]);
			ahci_cbl[0].cmd_cfl = AHCI_FIS_REGISTER_H2D_LENGTH;

			ahci_cfis[0].pmnum = 0xF; //PMP
			ahci_cfis[0].type  = AHCI_FIS_REGISTER_H2D;
			ahci_cfis[0].control = 0;

			ci.s.ci = 1 << 0;
			CSR_WRITE(CAVM_SATAX_UAHC_P0_CI(sata), ci.u);

			timeout = 1000;

			do {
				udelay(1);
				ci.u = CSR_READ(CAVM_SATAX_UAHC_P0_CI(sata));
			} while (timeout-- && ci.s.ci);

			debug("ATF: SATA%d: TO: %d, CI: %08x\n",
			      sata, timeout, ci.s.ci);

			serr.u = CSR_READ(CAVM_SATAX_UAHC_P0_SERR(sata));
			tfd.u = CSR_READ(CAVM_SATAX_UAHC_P0_TFD(sata));
			sig.u = CSR_READ(CAVM_SATAX_UAHC_P0_SIG(sata));
			is.u = CSR_READ(CAVM_SATAX_UAHC_P0_IS(sata));

			debug("ATF: SATA%d: TFD: %02x, SIG: %08x, SERR: %x, IS: %x\n",
			      sata, tfd.s.sts, sig.s.sig, serr.u, is.u);

			for (i = 0; i < 12; i++)
				debug("ATF: SATA%d: RFIS[%d]: %02x\n",
				      sata, i, ahci_rfis[0].d2h_register[i]);
		} while (retry--);

		cmd.u = CSR_READ(CAVM_SATAX_UAHC_P0_CMD(sata));
		cmd.s.fre = 0;
		cmd.s.clo = 0;
		cmd.s.st = 0;
		CSR_WRITE(CAVM_SATAX_UAHC_P0_CMD(sata), cmd.u);

		sig.u = CSR_READ(CAVM_SATAX_UAHC_P0_SIG(sata));

		sata_hba[sata].sig = sig.s.sig;

		switch (sig.s.sig) {
		case SATA_SIG_PMP:
			sata_hba[sata].timeout = 0;

			cmd.u = CSR_READ(CAVM_SATAX_UAHC_P0_CMD(sata));
			cmd.s.pma = 1;
			CSR_WRITE(CAVM_SATAX_UAHC_P0_CMD(sata), cmd.u);

			break;
		default:
			sata_hba[sata].timeout = SATA_HDD_DET_TIMEOUT;
		}
	}

	timer_hd = timer_create(TM_PERIODIC, SATA_POLL_INTERVAL, timer_cb);
	if (timer_hd == -1) {
		printf("ATF: can't create new timer\n");
	} else {
		debug("ATF: timer id = %d created successfully\n", timed_hd);
		timer_start(timer_hd);
	}
}
