/*
 * Copyright (c) 2016 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __PLAT_BOARD_CFG_H__
#define __PLAT_BOARD_CFG_H__

#include <platform_dt.h>
#include <cgx.h>
#include <qlm/qlm.h>
#include <sfp_mgmt.h>
#include <phy_mgmt.h>
#include <platform_scfg.h>
#include <octeontx_board_cfg.h>

typedef enum ccs_region_index {
	SECURE_NONPRESERVE,
	NSECURE_NONPRESERVE,
	SECURE_PRESERVE, /* used as ARM Trace Buffer */
	NSECURE_PRESERVE,
	CCS_REGION_IDX_MAX,
} ccs_region_index_t;

typedef enum {
	SW_RVU_MAP_NONE,
	SW_RVU_MAP_LEGACY,
	SW_RVU_MAP_AVAILABLE,
	SW_RVU_MAP_FORCE,
} sw_rvu_mapping;

/* Frequency in Hz for GPIO activity LED */
#define GPIO_LED_ACTVITY_FREQ_HZ 0x4ULL

typedef struct rvu_sw_rvu_pf {
	int num_rvu_vfs;
	int num_msix_vec;
	sw_rvu_mapping mapping;
} rvu_sw_rvu_pf_t;

/* default, if not defined by platform */
#ifndef SW_RVU_SSO_TIM_NUM_PF
#define SW_RVU_SSO_TIM_NUM_PF 1
#endif

/* default, if not defined by platform */
#ifndef SW_RVU_NPA_NUM_PF
#define SW_RVU_NPA_NUM_PF     1
#endif

/* default, if not defined by platform */
#ifndef SW_RVU_SDP_NUM_PF
#define SW_RVU_SDP_NUM_PF     0
#endif

/* default, if not defined by platform */
#ifndef SW_RVU_REE_NUM_PF
#define SW_RVU_REE_NUM_PF     0
#endif

/* default, if not defined in platform */
#ifndef SW_RVU_CPT_NUM_PF
#define SW_RVU_CPT_NUM_PF     1
#endif

typedef enum {
	SW_RVU_NODEV = 0, /* 0 is reserved */
	SW_RVU_SSO_TIM_BASE,
	SW_RVU_NPA_BASE = SW_RVU_SSO_TIM_BASE + SW_RVU_SSO_TIM_NUM_PF,
	SW_RVU_SDP_BASE = SW_RVU_NPA_BASE + SW_RVU_NPA_NUM_PF,
	SW_RVU_CPT_BASE = SW_RVU_SDP_BASE + SW_RVU_SDP_NUM_PF,
	SW_RVU_REE_BASE = SW_RVU_CPT_BASE + SW_RVU_CPT_NUM_PF,
} sw_rvu_pfs;

/*
 * Implementation note: the 'SW_RVU_xxx_PF' values do not correspond directly
 * to RVU PF IDs; rather, they are simply an identifier (ID).
 * If a platform defines 0 instances of a device, the ID == 0.
 * See 'find_sw_rvu_dev()'.
 */
#define SW_RVU_SSO_TIM_PF(n) (!SW_RVU_SSO_TIM_NUM_PF ? SW_RVU_NODEV : \
			      SW_RVU_SSO_TIM_BASE + (n))
#define SW_RVU_NPA_PF(n)     (!SW_RVU_NPA_NUM_PF ? SW_RVU_NODEV : \
			      SW_RVU_NPA_BASE + (n))
#define SW_RVU_SDP_PF(n)     (!SW_RVU_SDP_NUM_PF ? SW_RVU_NODEV : \
			      SW_RVU_SDP_BASE + (n))
#define SW_RVU_CPT_PF(n)     (!SW_RVU_CPT_NUM_PF ? SW_RVU_NODEV : \
			      SW_RVU_CPT_BASE + (n))
#define SW_RVU_REE_PF(n)     (!SW_RVU_REE_NUM_PF ? SW_RVU_NODEV : \
			      SW_RVU_REE_BASE + (n))

#define SW_RVU_NUM_PF        (SW_RVU_SSO_TIM_NUM_PF \
			      + SW_RVU_NPA_NUM_PF \
			      + SW_RVU_SDP_NUM_PF \
			      + SW_RVU_CPT_NUM_PF \
			      + SW_RVU_REE_NUM_PF \
			      + 1 /* for SW_RVU_NODEV */)

typedef struct rvu_config {
	int valid;
	int cpt_dis;	/* to indicate if CPT block is not present */
	rvu_sw_rvu_pf_t admin_pf;
	rvu_sw_rvu_pf_t sw_pf[SW_RVU_NUM_PF];
} rvu_config_t;

typedef struct gpio_led_eth {
	uint8_t  link;
	uint8_t  activity;
	uint64_t prev_tx_pkt_cnt;
	uint64_t prev_rx_pkt_cnt;
	uint8_t  link_status:1;
	uint8_t  link_active_high:1;
	uint8_t  is_link_supported:1;
	uint8_t  is_act_supported:1;
} gpio_led_eth_t;

#define MDIO_NUM 2

/* Define LMAC structure. */
typedef struct cgx_lmac_config {
	/* for RVU */
	int num_rvu_vfs;
	int num_msix_vec;
	/* below info to be filled by
	 * FDT parser during boot time or mode
	 * change
	 */
	int lane_to_sds;
	int use_training;
	int mode;		/* octeontx_qlm_mode enum type */
	int mode_idx;		/* helper field for the mode mapping */
	int qlm;		/* from BDK DT */
	int lane;		/* from BDK DT */
	int first_phy_lane;	/* 1st Physical lane */
	/* NOTE: when this bit is set, it doesn't necessarily
	 * mean the link is up until the user sends LINK UP command
	 */
	bool lmac_enable;
	bool phy_mode;		/* MAC or PHY mode for SGMII */
	bool sgmii_1000x_mode;	/* SGMII or 1000x mode for SGMII */
	bool phy_present;
	bool sfp_slot;
	bool autoneg_dis;
	int fec;	/* host side of PHY's fec type */
	int line_fec; /* line side of PHY's fec type */
#ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
	int prbs_errors_host;
	int prbs_errors_line;
#endif /* DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS */
	uint8_t local_mac_address[6];
	phy_config_t phy_config;
	sfp_slot_info_t sfp_info;
	uint64_t supported_link_modes;	/* cgx_mode_t enum */
	uint32_t lane_mask;
	/*
	 * Shift from first qlm and gser is always the same it can be easily
	 * calculated by adding shift value to qlm/gser.
	 */
	int shift_from_first;
	int gserx;
	int max_lane_count;
	int an_loopback;
	int lane_an_master;
	gpio_led_eth_t gpio_led;
	int net_flags; /* EBF FEC setting */
} cgx_lmac_config_t;

typedef enum {
	NIX0 = 1,
	NIX1 = 2
} nix_block_t;

typedef struct cgx_config {
	uint32_t lmac_count:4;
	uint32_t lmacs_used:4;
	uint32_t usxgmii_mode:1; /* global - per CGX */
	/* for RVU */
	uint32_t enable:1;
	uint32_t is_rfoe:1;
	uint16_t lanes_used_mask;
	uint16_t network_lane_order;
	cgx_lmac_config_t lmac_cfg[MAX_LMAC_PER_CGX];
	const qlm_ops_t *qlm_ops;
	int load;
	nix_block_t nix_block;
} cgx_config_t;

typedef struct qlm_config {
	int lane_rx_polarity[MAX_LANES_PER_QLM];
	int lane_tx_polarity[MAX_LANES_PER_QLM];
	int lane_rx_prevga_gn_adapt[MAX_LANES_PER_QLM];
	int lane_rx_prevga_gn_ovrd[MAX_LANES_PER_QLM];
	int rx_adaptation[MAX_LANES_PER_QLM];
	int lane_idle_refset[MAX_LANES_PER_QLM];
	int is_cpri;
	int cpri_baud_rate[MAX_LANES_PER_QLM];
	int clk_term;
	int lt_init_state[MAX_LANES_PER_QLM];
} qlm_config_t;

/* Total number of SPI Bus */
#define MAX_SPI_BUS		2

/* Total number of SPI CS */
#define MAX_SPI_CS		4

typedef struct spi_config {
	uint32_t has_efivar;
	uint32_t efivar_offset;
	uint32_t cs[MAX_SPI_CS];
	bool is_secure;
} spi_config_t;

typedef struct plat_octeontx_board_cfg {
	board_cfg_t bcfg;
	rvu_config_t rvu_config;
	cgx_config_t cgx_cfg[MAX_CGX];
	qlm_config_t qlm_cfg[MAX_QLM];
	int qlm_voltage;
	ras_config_t ras_config;
	uint64_t pf_mac_base; /* PF MAC Address */
	int pf_mac_num;
	int qlm_auto_config;
	int timer1_ms;
	int timer2_ms;
	struct {
		uint64_t base;
		uint64_t size;
	} bert_area; /* Boot Error Data area parameters */
	spi_config_t spi_cfg[MAX_SPI_BUS];
	int reserved_os_memory_size;
} plat_octeontx_board_cfg_t;

extern plat_octeontx_board_cfg_t * const plat_octeontx_bcfg;
uint64_t ccs_region_get_info(ccs_region_index_t index, uint64_t *start);

#define SPI_CTRL0_ADDR	U(0x3000)
#define SPI_CTRL1_ADDR	U(0x3800)

#endif /* __PLAT_BOARD_CFG_H__ */
