/*
 * Copyright (c) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <stdio.h>
#include <string.h>
#include <platform_def.h>
#include <plat_board_cfg.h>
#include <qlm/qlm.h>
#include <plat_scfg.h>
#include <gser_internal.h>
#include <platform_setup.h>

#if defined(PLAT_f95mm)
extern const qlm_ops_t qlm_ops_f95mm;
const qlm_ops_t *get_qlm_ops_gserj_f95mm(void)
{
	return &qlm_ops_f95mm;
}
#else
const qlm_ops_t *get_qlm_ops_gserj_f95mm(void)
{
	gser_fatal("GSERJ: %s: Unrecognized qlm\n", __func__);
	return NULL;
}
#endif /* defined(PLAT_f95mm) */

/* Fake cgx id used for gserj serdes */
#define CGX_FAKE_ID	-2

static int _get_cgx_id(int qlm, int lane)
{
	int max_lane;
	int cgx_id;

	if (qlm >= MAX_QLM || qlm < 0) {
		WARN("%d not in range, available QLM0-%d\n", qlm, MAX_QLM - 1);
		return -1;
	}

	max_lane = plat_octeontx_scfg->qlm_max_lane_num[qlm];
	if (lane >= max_lane || lane < 0) {
		WARN("For QLM%d supported lanes are 0-%d\n", qlm, max_lane - 1);
		return -1;
	}

	if (cavm_is_model(OCTEONTX_F95MM) && (qlm > 1))
		cgx_id = CGX_FAKE_ID;
	else {
		cgx_id = plat_get_cgx_idx(qlm);
		if (cgx_id == -1) {
			WARN("QLM%d is not mapped to CGX.\n", qlm);
			return -1;
		}
	}
	return cgx_id;
}

static const qlm_ops_t *_get_qlm_ops(int cgx_id)
{
	const qlm_ops_t *qlm_ops;

	if (cgx_id == CGX_FAKE_ID) {
		qlm_ops = get_qlm_ops_gserj_f95mm();
	} else {
		cgx_config_t *cgx_cfg;

		cgx_cfg = &(plat_octeontx_bcfg->cgx_cfg[cgx_id]);
		qlm_ops = cgx_cfg->qlm_ops;
	}

	return qlm_ops;
}

static int _get_gserx(int cgx_id, int qlm)
{
	int gserx;
	if (cgx_id == CGX_FAKE_ID)
		gserx = qlm + CGX_FAKE_ID;
	else
		gserx = plat_otx2_get_gserx(qlm, NULL);

	return gserx;
}

static int start_prbs(int cgx_id, int qlm, int mode, int *show_phy_host,
		int *show_phy_line, int qlm_lane)
{
	int gserx;
	cgx_config_t *cgx_cfg = NULL;
	const qlm_ops_t *qlm_ops;

	qlm_ops = _get_qlm_ops(cgx_id);
	if (qlm_ops == NULL)
		return -1;

	if (mode == 0) {
		WARN("PRBS with pattern memory not implemented yet.\n");
		return -1;
	}

	gserx = _get_gserx(cgx_id, qlm);

	if (cgx_id != CGX_FAKE_ID)
		cgx_cfg = &(plat_octeontx_bcfg->cgx_cfg[cgx_id]);

	/* Start PRBS */
	qlm_ops->qlm_enable_prbs(gserx, mode, QLM_DIRECTION_TX, qlm_lane);

	/* BDK use here bdk_netphy_get_handle function */
	if ((cgx_id != CGX_FAKE_ID) && cgx_cfg->lmac_cfg[qlm_lane].phy_present) {
		if (*show_phy_host) {
			if (phy_enable_prbs(cgx_id, qlm_lane, 1, mode, 1))
				*show_phy_host = 0;
		}
		if (*show_phy_host) {
			if (phy_enable_prbs(cgx_id, qlm_lane, 0, mode, 1))
				*show_phy_line = 0;
		}
	}
	udelay(1000);  /* Let TX run for 1ms before starting RX */
	qlm_ops->qlm_enable_prbs(gserx, mode, QLM_DIRECTION_RX, qlm_lane);

	/* BDK use here bdk_netphy_get_handle function */
	if ((cgx_id != CGX_FAKE_ID) && cgx_cfg->lmac_cfg[qlm_lane].phy_present) {
		if (*show_phy_host) {
			if (phy_enable_prbs(cgx_id, qlm_lane, 1, mode, 1))
				*show_phy_host = 0;
		}
		if (*show_phy_line) {
			if (phy_enable_prbs(cgx_id, qlm_lane, 0, mode, 1))
				*show_phy_line = 0;
		}
	}

	return 0;
}

static int stop_prbs(int cgx_id, int qlm, int mode, int show_phy_host, int qlm_lane)
{
	int gserx;
	cgx_config_t *cgx_cfg;
	const qlm_ops_t *qlm_ops;

	qlm_ops = _get_qlm_ops(cgx_id);
	if (qlm_ops == NULL)
		return -1;

	gserx = _get_gserx(cgx_id, qlm);

	/* Stop PRBS */
	qlm_ops->qlm_disable_prbs(gserx, qlm_lane);

	/* BDK use here bdk_netphy_get_handle function */
	if (cgx_id != CGX_FAKE_ID) {
		cgx_cfg = &(plat_octeontx_bcfg->cgx_cfg[cgx_id]);

		if (cgx_cfg->lmac_cfg[qlm_lane].phy_present
		    && show_phy_host) {
			phy_disable_prbs(cgx_id, qlm_lane, 1, mode);
			phy_disable_prbs(cgx_id, qlm_lane, 0, mode);
		}
	}

	return 0;
}

static void clear_prbs_errors(int cgx_id, int qlm, int qlm_lane, int mode)
{
	int gserx;
	cgx_config_t *cgx_cfg;
	const qlm_ops_t *qlm_ops;

	qlm_ops = _get_qlm_ops(cgx_id);
	if (qlm_ops == NULL)
		return;

	/* gserx index is the same for every lane */
	gserx = _get_gserx(cgx_id, qlm);

	qlm_ops->qlm_get_prbs_errors(gserx, qlm_lane, 1);

	if (cgx_id != CGX_FAKE_ID) {
		cgx_cfg = &(plat_octeontx_bcfg->cgx_cfg[cgx_id]);
		if (cgx_cfg->lmac_cfg[qlm_lane].phy_present)
			phy_get_prbs_errors(cgx_id, qlm_lane, 1, 1, mode);
	}
}

static int get_prbs_errors(int cgx_id, int qlm, int mode,
		int show_phy_host, int show_phy_line,
		cgx_prbs_errors_t *errors, int qlm_lane)
{
	int gserx;
	cgx_config_t *cgx_cfg = NULL;
	const qlm_ops_t *qlm_ops;

	qlm_ops = _get_qlm_ops(cgx_id);
	if (qlm_ops == NULL)
		return -1;

	/* gserx index is the same for every lane */
	gserx = _get_gserx(cgx_id, qlm);

	if (cgx_id != CGX_FAKE_ID)
		cgx_cfg = &(plat_octeontx_bcfg->cgx_cfg[cgx_id]);

	errors[qlm_lane].err = qlm_ops->qlm_get_prbs_errors(gserx,
			qlm_lane, 0);

	/* BDK use here bdk_netphy_get_handle */
	if (!show_phy_host) {
		errors[qlm_lane].phy_host = -2;
	} else if ((cgx_id != CGX_FAKE_ID)
		   && cgx_cfg->lmac_cfg[qlm_lane].phy_present) {
		errors[qlm_lane].phy_host = phy_get_prbs_errors(cgx_id,
						qlm_lane, 1, 0, mode);
	} else {
		errors[qlm_lane].phy_host = -1;
	}
	/* BDK use here bdk_netphy_get_handle */
	if (!show_phy_line) {
		errors[qlm_lane].phy_line = -2;
	} else if ((cgx_id != CGX_FAKE_ID)
		   && cgx_cfg->lmac_cfg[qlm_lane].phy_present) {
		errors[qlm_lane].phy_line = phy_get_prbs_errors(cgx_id,
						qlm_lane, 0, 0, mode);
	} else {
		errors[qlm_lane].phy_line = -1;
	}

	return 0;
}

/* This structure is used to keep information about ongoing PRBS commands */
struct {
	int show_phy_host;
	int show_phy_line;
	int mode;
	int started;
	int inject;
} prbs_status[MAX_QLM][MAX_LANES_PER_QLM];

/* Check if memory region for PRBS data is big enough */
CASSERT(sizeof(cgx_prbs_data) <= SERDES_PRBS_DATA_SIZE,
	assert_serdes_prbs_data_size_to_small);

int cgx_smc_do_prbs(int cmd, int qlm, int x3, int lane)
{
	int rc;
	int cgx_id;
	cgx_prbs_data *prbs_data;

	cgx_id = _get_cgx_id(qlm, lane);
	if (cgx_id == -1)
		return -1;

	//printf("%s: cmd: %d, qlm %d, mode %d, inject_errors = %d lane %d\n",
	//		cmd, qlm, x3 & 0xff, x3 >> 8, lane);
	switch (cmd) {
	case CGX_PRBS_START_CMD:
		if (prbs_status[qlm][lane].started) {
			stop_prbs(cgx_id, qlm,
				prbs_status[qlm][lane].mode,
				prbs_status[qlm][lane].show_phy_host, lane);
			prbs_status[qlm][lane].started = 0;
		}

		prbs_status[qlm][lane].mode = x3 & 0xff;
		prbs_status[qlm][lane].inject = (x3 >> 8) & 0x1;
		rc = start_prbs(cgx_id, qlm,
				prbs_status[qlm][lane].mode,
				&prbs_status[qlm][lane].show_phy_host,
				&prbs_status[qlm][lane].show_phy_line, lane);
		if (rc)
			return -1;

		prbs_status[qlm][lane].started = 1;
		break;

	case CGX_PRBS_STOP_CMD:
		if (prbs_status[qlm][lane].started) {
			stop_prbs(cgx_id, qlm,
				prbs_status[qlm][lane].mode,
				prbs_status[qlm][lane].show_phy_host, lane);
			prbs_status[qlm][lane].started = 0;
		}
		break;

	case CGX_PRBS_CLEAR_CMD:
		if (prbs_status[qlm][lane].started) {
			clear_prbs_errors(cgx_id, qlm, lane,
				prbs_status[qlm][lane].mode);
			prbs_status[qlm][lane].inject = 0;
		}
		break;

	case CGX_PRBS_GET_DATA_CMD:
		if (!prbs_status[qlm][lane].started) {
			WARN("PRBS for QLM%d is not started\n", qlm);
			return -1;
		}

		prbs_data = (cgx_prbs_data *)(SERDES_PRBS_DATA_BASE);

		get_prbs_errors(cgx_id, qlm,
				prbs_status[qlm][lane].mode,
				prbs_status[qlm][lane].show_phy_host,
				prbs_status[qlm][lane].show_phy_line,
				prbs_data->errors, lane);

		/* Inject error if requested */
		if (prbs_data->errors[lane].err != -1) {
			if (prbs_status[qlm][lane].inject) {
				const qlm_ops_t *qlm_ops;

				qlm_ops = _get_qlm_ops(cgx_id);
				if (qlm_ops != NULL)
					qlm_ops->qlm_inject_prbs_error(qlm, lane);
			}
		}

		if (x3) {
			printf("QLM%d.Lane%d: errors:", qlm, lane);
			if (prbs_data->errors[lane].err != -1)
				printf("%lld", prbs_data->errors[lane].err);
			else
				printf("No lock");

			if (prbs_data->errors[lane].phy_host != -2) {
				printf(", PHY Host errors: ");
				if (prbs_data->errors[lane].phy_host != -1)
					printf("%lld", prbs_data->errors[lane].phy_host);
				else
					printf("No lock");
			}

			if (prbs_data->errors[lane].phy_line != -2) {
				printf(", PHY Line errors: ");
			if (prbs_data->errors[lane].phy_line != -1)
				printf("%lld", prbs_data->errors[lane].phy_line);
			else
				printf("No lock");
			}
			printf("\n");
		}
		break;

	default:
		WARN("Unknown PRBS cmd (%d)\n", cmd);
		return -1;
	}

	return CGX_DISPLAY_OK;
}

/*
 * Square root by abacus algorithm, Martin Guy @ UKC, June 1985.
 * From a book on programming abaci by Mr C. Woo.
 */
static uint64_t isqrt(uint64_t num)
{
	uint64_t result = 0;
	/* The second-to-top bit is set: 1 << 62 for 64 bits */
	uint64_t bit = 1ull << 62;

	/* "bit" starts at the highest power of four <= the argument. */
	while (bit > num)
		bit >>= 2;

	while (bit != 0) {
		if (num >= result + bit) {
			num -= result + bit;
			result = (result >> 1) + bit;
		} else {
			result >>= 1;
		}
		bit >>= 2;
	}

	return result;
}

static uint64_t log10(uint64_t num)
{
	uint64_t result = 0;

	while (num > 10) {
		num /= 10;
		result++;
	}
	if (num >= 5)
		result++;

	return result;
}

/* This structure has over 32KiB and cannot be stored on stack */
static gser_qlm_eye_t eye;

int cgx_display_eye(int qlm, int qlm_lane, int show_data)
{
	int x, y, width, height, last_color, level, deltay, deltax, dy, dx;
	int dist, color;
	int eye_area = 0;
	int eye_width = 0;
	int eye_height = 0;
	int gserx;
	int cgx_id = -1;
	int ec;
	const qlm_ops_t *qlm_ops;
	char color_str[] = "\33[40m"; /* Note: This is modified, not constant */

	/* Eye capture is not available on gserj serdes */
	if (cavm_is_model(OCTEONTX_F95MM) && (qlm > 1)) {
		WARN("Eye capture is not available on QLM%d\n", qlm);
		return -1;
	}

	cgx_id = _get_cgx_id(qlm, qlm_lane);
	if (cgx_id == -1)
		return -1;

	qlm_ops = _get_qlm_ops(cgx_id);
	if (qlm_ops == NULL)
		return -1;

	gserx = _get_gserx(cgx_id, qlm);

	ec = qlm_ops->qlm_eye_capture(gserx, qlm_lane, show_data, &eye);
	if (ec)
		return ec;

	if (!show_data) {
		eye.type = qlm_ops->type;
		memcpy((void *)(SERDES_EYE_DATA_BASE), &eye,
				sizeof(gser_qlm_eye_t));

		return CGX_DISPLAY_OK;
	}

	if (qlm_ops->type == QLM_GSERN_TYPE) {
		uint64_t data;
		for (y = 0; y < eye.height; y++) {
			for (x = 0; x < eye.width; x++) {
				data = eye.data[y][x] + eye.data[y][x + 64];
				if (data > UINT32_MAX)
					data = UINT32_MAX;
				eye.data[y][x] = data;
			}
		}
	}

	/* Calculate the max eye width */
	for (y = 0; y < eye.height; y++) {
		width = 0;
		for (x = 0; x < eye.width; x++) {
			if (eye.data[y][x] == 0) {
				width++;
				eye_area++;
			}
		}
		if (width > eye_width)
			eye_width = width;
	}

	/* Calculate the max eye height */
	for (x = 0; x < eye.width; x++) {
		height = 0;
		for (y = 0; y < eye.height; y++) {
			if (eye.data[y][x] == 0) {
				height++;
				eye_area++;
			}
		}
		if (height > eye_height)
			eye_height = height;
	}

	printf("\nEye Diagram for QLM %d, Lane %d\n", qlm, qlm_lane);

	last_color = -1;
	for (y = 0; y < eye.height; y++) {
		for (x = 0; x < eye.width; x++) {
			level = log10(eye.data[y][x] + 1);
			if (level > 9)
				level = 9;
			#define DIFF(a, b) (a < b) ? b-a : a-b
			deltay = (y == (eye.height - 1)) ? -1 : 1;
			deltax = (x == (eye.width - 1)) ? -1 : 1;
			dy = DIFF(eye.data[y][x], eye.data[y + deltay][x]);
			dx = DIFF(eye.data[y][x], eye.data[y][x + deltax]);
			#undef DIFF
			dist = dx * dx + dy * dy;
			color = log10(isqrt(dist) + 1);
			if (color > 6)
				color = 6;
			if (level == 0)
				color = 0;
			if (color != last_color) {
				color_str[3] = '0' + color;
				printf("%s", color_str);
				last_color = color;
			}
			printf("%c", '0' + level);
		}
		printf("\33[0m\n");
		last_color = -1;
	}
	printf("\nEye Width %d, Height %d, Area %d\n",
		eye_width, eye_height, eye_area);

	return CGX_DISPLAY_OK;
}

int cgx_display_serdes_settings(int qlm, int qlm_lane, int show_data)
{
	int gserx;
	int cgx_id = -1;
	const qlm_ops_t *qlm_ops;

	cgx_id = _get_cgx_id(qlm, qlm_lane);
	if (cgx_id  == -1)
		return -1;

	qlm_ops = _get_qlm_ops(cgx_id);
	if (qlm_ops == NULL)
		return -1;

	gserx = _get_gserx(cgx_id, qlm);

	if (show_data) {
		qlm_ops->qlm_display_settings(gserx, qlm_lane, 1, 1,
				NULL, 0);
	} else {
		qlm_ops->qlm_display_settings(gserx, qlm_lane, 1, 1,
				(char *)(SERDES_SETTINGS_DATA_BASE),
				SERDES_SETTINGS_DATA_SIZE);
	}

	return CGX_DISPLAY_OK;
}

/*
 * Apply Serdes TX tuning parameters to the passed QLM and Lane in the QLM.
 */
int cgx_smc_set_serdes_tune(int qlm, int lane, int tx_swing, int tx_pre_post)
{
	int gserx, i;
	int cgx_id = -1;
	const qlm_ops_t *qlm_ops;

	if (lane == -1)
		i = 0;
	else
		i = lane;

	cgx_id = _get_cgx_id(qlm, i);
	if (cgx_id  == -1)
		return -1;

	qlm_ops = _get_qlm_ops(cgx_id);
	if (qlm_ops == NULL)
		return -1;

	gserx = _get_gserx(cgx_id, qlm);

	if (lane == -1) {
		int max_lane = plat_octeontx_scfg->qlm_max_lane_num[qlm];
		/* Apply tuning to all lanes in the given qlm */
		for (i = 0; i < max_lane; i++) {
			qlm_ops->qlm_tune_lane_tx(gserx, i, tx_swing,
				tx_pre_post >> 8, tx_pre_post & 0xff, -1, -1);
		}
	} else {
		qlm_ops->qlm_tune_lane_tx(gserx, lane, tx_swing,
			tx_pre_post >> 8, tx_pre_post & 0xff, -1, -1);
	}

	return 0;
}

/*
 * Configure Serdes in NED (type = 2) loopback or FEA (type = 1) loopback
 * or disable serdes loopback for normal operation.
 */
int cgx_smc_set_serdes_loop(int qlm, int lane, int type)
{
	int gserx;
	int cgx_id = -1;
	const qlm_ops_t *qlm_ops;

	cgx_id = _get_cgx_id(qlm, lane);
	if (cgx_id  == -1)
		return -1;

	qlm_ops = _get_qlm_ops(cgx_id);
	if (qlm_ops == NULL)
		return -1;

	gserx = _get_gserx(cgx_id, qlm);

	//printf("%s: qlm%d lane%d: gserx %d, type %d\n", __func__, qlm, lane, gserx, type);

	if (type == 0) {
		qlm_ops->qlm_ned_loopback(gserx, lane, 0);
		qlm_ops->qlm_fea_loopback(gserx, lane, 0);
		qlm_ops->qlm_nea_loopback(gserx, lane, 0);
		qlm_ops->qlm_fed_loopback(gserx, lane, 0);
	} else if (type == 1)
		qlm_ops->qlm_fea_loopback(gserx, lane, 1);
	else if (type == 2)
		qlm_ops->qlm_ned_loopback(gserx, lane, 1);
	else if (type == 3)
		qlm_ops->qlm_nea_loopback(gserx, lane, 1);
	else
		qlm_ops->qlm_fed_loopback(gserx, lane, 1);

	return 0;
}
