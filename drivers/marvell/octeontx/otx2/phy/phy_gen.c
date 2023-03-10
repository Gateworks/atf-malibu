/*
 * Copyright (c) 2018 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

/* PHY driver for Generic CLAUSE 22/45 */
#include <arch.h>
#include <stdio.h>
#include <debug.h>
#include <string.h>
#include <platform_def.h>
#include <timers.h>
#include <drivers/delay_timer.h>
#include <platform_def.h>
#include <octeontx_common.h>
#include <plat_board_cfg.h>
#include <eth_intf.h>
#include <phy_mgmt.h>
#include <smi.h>
#include <octeontx_utils.h>

/* define DEBUG_ATF_GENERIC_PHY_DRIVER to enable debug logs */
#undef DEBUG_ATF_GENERIC_PHY_DRIVER	/* Generic PHY Driver logs */

#ifdef DEBUG_ATF_GENERIC_PHY_DRIVER
#define debug_phy_driver printf
#else
#define debug_phy_driver(...) ((void) (0))
#endif

/* Table to map the PHY speed to CGX speed enum for clause 45
 * From IEEE 803.2 cd (amendment) clause 45
 * Bits 1.0.5.2 (for this bits to be effective bit 6
 * (MSB speed selection) & 13 (LSB speed selection)
 * should be set
 * Speed selection
 * 5 4 3 2
 * 1 1 x x = Reserved
 * 1 0 1 x = Reserved
 * 1 0 0 1 = 400 Gb/s
 * 1 0 0 0 = 200 Gb/s
 * 0 1 1 1 = 5 Gb/s
 * 0 1 1 0 = 2.5 Gb/s
 * 0 1 0 1 = 50 Gb/s
 * 0 1 0 0 = 25 Gb/s
 * 0 0 1 1 = 100 Gb/s
 * 0 0 1 0 = 40 Gb/s
 * 0 0 0 1 = 10PASS-TS/2BASE-TL
 * 0 0 0 0 = 10 Gb/s
 */
static int cgx_speed[PHY_CLAUSE45_MAX_SPEED_SEL] = {ETH_LINK_10G,
				ETH_LINK_NONE,
				ETH_LINK_40G,
				ETH_LINK_100G,
				ETH_LINK_25G,
				ETH_LINK_50G,
				ETH_LINK_2HG,
				ETH_LINK_5G};

void phy_generic_c22_get_link_status(int eth_id, int lmac_id, link_state_t *link)
{
	int addr;
	int mdio;
	int control;		/* reg 0 */
	int status;		/* reg 1 */
	int an_adv;		/* reg 4 */
	int link_partner_abil;	/* reg 5 */
	int ms_control;		/* reg 9 */
	int ms_status;		/* reg 10 */
	phy_config_t *phy;

	phy = plat_eth_get_phy_cfg(eth_id, lmac_id);
	addr = phy->addr;
	mdio = phy->mdio_bus;

	if ((mdio == -1) || (addr == -1)) {
		ERROR("%s: mdio bus/addr not valid\n", __func__);
		return;
	}
	debug_phy_driver("%s: mdio_bus %d phy_addr 0x%x\n", __func__, mdio, addr);

	link->u64 = 0;

	status = smi_read(mdio, CLAUSE22, addr, -1, 1);
	if (!(status & 0x4))	/* check bit 2 for Link Status */
		return;		/* Link is down, return link down */

	link->s.link_up = 1;
	control = smi_read(mdio, CLAUSE22, addr, -1, 0);
	/* Check if AN is enabled & complete */
	if ((control & (1 << 12)) && (status & (1 << 5))) {
		debug_phy_driver("AN is enabled & complete\n");
		ms_control = smi_read(mdio, CLAUSE22, addr, -1, 0x9);
		ms_status = smi_read(mdio, CLAUSE22, addr, -1, 0xA);

		ms_status &= ms_control << 2;
		link_partner_abil = smi_read(mdio, CLAUSE22, addr, -1, 0x5);
		an_adv = smi_read(mdio, CLAUSE22, addr, -1, 0x4);
		link_partner_abil &= an_adv;

		if (ms_status & 0xC00) {
			link->s.speed = ETH_LINK_1G;
			link->s.full_duplex = !!(ms_status & 0x800);
		} else if (link_partner_abil & 0x0180) {
			link->s.speed = ETH_LINK_100M;
			link->s.full_duplex = !!(link_partner_abil & 0x100);
		} else if (link_partner_abil & 0x0060) {
			link->s.speed = ETH_LINK_10M;
			link->s.full_duplex = !!(link_partner_abil & 0x0040);
		}
	} else {
		/* AN not enabled */
		debug_phy_driver("AN is not complete\n");
		link->s.full_duplex = !!(control & (1 << 8));

		if (control & (1 << 6))
			link->s.speed = ETH_LINK_1G;
		else if (control & (1 << 13))
			link->s.speed = ETH_LINK_100M;
		else
			link->s.speed = ETH_LINK_10M;
	}
}

void phy_generic_c45_get_link_status(int eth_id, int lmac_id, link_state_t *link)
{
	int addr;
	int mdio;
	int speed_sel;
	int pma_ctrl1;	/* PMA/PMD control reg 0 */
	int phy_status;	/* PMA/PMD status reg 1 */
	phy_config_t *phy;

	phy = plat_eth_get_phy_cfg(eth_id, lmac_id);
	addr = phy->addr;
	mdio = phy->mdio_bus;

	if ((mdio == -1) || (addr == -1)) {
		ERROR("%s: mdio bus/addr not valid\n", __func__);
		return;
	}

	debug_phy_driver("%s: mdio_bus %d phy_addr 0x%x\n", __func__, mdio, addr);

	link->u64 = 0;

	pma_ctrl1 = smi_read(mdio, CLAUSE45, addr, PMA_PMD_DEVICE_ADDR,
					PMA_PMD_CONTROL_REG);
	/* From IEEE 803.2 spec
	 * section 45.2.1.1 PMA/PMD control 1 register (Register 1.0)
	 * Read bits 6 & 13
	 * 6 13
	 * 1 1 = bits 5:2 select speed
	 * 1 0 = 1000 Mb/s
	 * 0 1 = 100 Mb/s
	 * 0 0 = 10 Mb/s
	 */
	switch (pma_ctrl1 & PHY_CLAUSE45_SPEED_SEL_MASK) {
	case PHY_CLAUSE45_SPEED_10M:
		link->s.speed = ETH_LINK_10M;
		break;
	case PHY_CLAUSE45_SPEED_100M:
		link->s.speed = ETH_LINK_100M;
		break;
	case PHY_CLAUSE45_SPEED_1G:
		link->s.speed = ETH_LINK_1G;
		break;
	case PHY_CLAUSE45_SPEED_BITS_2_5_SEL:
		/* If bits 6 & 13 are set to 1, then bits 5:2 selects speed */
		speed_sel = octeontx_bit_extract(pma_ctrl1, 2, 4) & 0xF;
		if ((speed_sel >= 0x0) && (speed_sel < PHY_CLAUSE45_MAX_SPEED_SEL))
			link->s.speed = cgx_speed[speed_sel];
		else
			link->s.speed = ETH_LINK_NONE;
		break;
	default:
		link->s.speed = ETH_LINK_NONE;
		break;
	}
	/* PMA/PMD status reg
	 * 1.1.2 Receive link status
	 * 1 = PMA/PMD receive link up
	 * 0 = PMA/PMD receive link down
	 */
	phy_status = smi_read(mdio, CLAUSE45, addr, PMA_PMD_DEVICE_ADDR,
						PMA_PMD_STATUS_REG);
	link->s.link_up = octeontx_bit_extract(phy_status, 2, 1) & 0x1;
	if (link->s.link_up)
		link->s.full_duplex = 1;
}

/* One time initialization for the PHY if required */
void phy_generic_probe(int eth_id, int lmac_id)
{
	int val = 0;
	phy_config_t *phy;

	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);

	phy = plat_eth_get_phy_cfg(eth_id, lmac_id);

	debug_phy_driver("%s: %d:%d\n", __func__, phy->mdio_bus, phy->addr);

	/* Read the PHY ID and print it to user so that in case of Generic
	 * CLAUSE compatible PHY, PHY type is known
	 */
	val = smi_read(phy->mdio_bus, CLAUSE22, phy->addr, -1, MII_PHY_ID1_REG);
	NOTICE("%s: bus %d addr 0x%x PHY ID1 0x%x\n", __func__, phy->mdio_bus,
					phy->addr, val);

	val = smi_read(phy->mdio_bus, CLAUSE22, phy->addr, -1, MII_PHY_ID2_REG);
	NOTICE("%s: bus %d addr 0x%x PHY ID2 0x%x\n", __func__, phy->mdio_bus,
					phy->addr, val);
}

/* To set the operating mode of the PHY if required */
void phy_generic_config(int eth_id, int lmac_id)
{
	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);
}

void phy_generic_set_an(int eth_id, int lmac_id)
{
	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);
}

void phy_generic_reset(int eth_id, int lmac_id)
{
	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);
}

void phy_generic_set_supported_modes(int eth_id, int lmac_id)
{
	phy_config_t *phy;

	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);

	phy = plat_eth_get_phy_cfg(eth_id, lmac_id);

	if (phy->type == PHY_GENERIC_8023_C22)
		phy->supported_link_modes = ((1 << ETH_MODE_SGMII_BIT) |
			(1 << ETH_MODE_1000_BASEX_BIT) |
			(1 << ETH_MODE_QSGMII_BIT));
	else if (phy->type == PHY_GENERIC_8023_C45)
		/* FIXME: For now, set it only as 10G XFI */
		phy->supported_link_modes = ((1 << ETH_MODE_10G_C2C_BIT) |
				(1 << ETH_MODE_10G_C2M_BIT));
}

void phy_generic_shutdown(int eth_id, int lmac_id)
{
	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);
}

/* Table of Generic PHY driver list */
phy_drv_t generic_drv[] = {
	{
		.drv_name		= "GENERIC-C22",
		.drv_type 		= PHY_GENERIC_8023_C22,
		.flags 			= 0,
		.probe			= phy_generic_probe,
		.config 		= phy_generic_config,
		.set_an			= phy_generic_set_an,
		.reset			= phy_generic_reset,
		.get_link_status	= phy_generic_c22_get_link_status,
		.set_supported_modes	= phy_generic_set_supported_modes,
		.shutdown		= phy_generic_shutdown,
	},
	{
		.drv_name 		= "GENERIC-C45",
		.drv_type 		= PHY_GENERIC_8023_C45,
		.flags 			= 0,
		.probe 			= phy_generic_probe,
		.config 		= phy_generic_config,
		.set_an			= phy_generic_set_an,
		.reset 			= phy_generic_reset,
		.get_link_status 	= phy_generic_c45_get_link_status,
		.set_supported_modes	= phy_generic_set_supported_modes,
		.shutdown		= phy_generic_shutdown,
	},
};

phy_drv_t *phy_generic_drv_lookup(int type)
{
	for (int i = 0; i < ARRAY_SIZE(generic_drv); i++) {
		if (type == generic_drv[i].drv_type) {
			debug_phy_driver("%s: found matching GENERIC PHY driver for type %d\n",
				__func__, type);
			return &generic_drv[i];
		}
	}
	return NULL;
}

