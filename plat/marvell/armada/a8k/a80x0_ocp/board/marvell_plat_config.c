/*
 * Copyright (c) 2018 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <armada_common.h>
#include <mvebu_def.h>
#include <pci_ep.h>

/*
 * If bootrom is currently at BLE there's no need to include the memory
 * maps structure at this point
 */
#ifndef IMAGE_BLE

/*****************************************************************************
 * AMB Configuration
 *****************************************************************************
 */
struct addr_map_win amb_memory_map[] = {
	/* CP1 SPI1 CS0 Direct Mode access */
	{0xf900,	0x1000000,	AMB_SPI1_CS0_ID},
};

int marvell_get_amb_memory_map(struct addr_map_win **win, uint32_t *size,
			       uintptr_t base)
{
	*win = amb_memory_map;
	if (*win == NULL)
		*size = 0;
	else
		*size = ARRAY_SIZE(amb_memory_map);

	return 0;
}
#endif

/*****************************************************************************
 * IO WIN Configuration
 *****************************************************************************
 */
struct addr_map_win io_win_memory_map[] = {
	/* CP1 (MCI0) internal regs */
	{0x00000000f4000000,		0x2000000,  MCI_0_TID},
#ifndef IMAGE_BLE
	/* SPI1_CS0 (RUNIT) on CP1*/
	{0x00000000f9000000,		0x2000000,  MCI_0_TID},
	/* MCI 0 indirect window */
	{MVEBU_MCI_REG_BASE_REMAP(0),	0x100000,   MCI_0_TID},
	/* MCI 1 indirect window */
	{MVEBU_MCI_REG_BASE_REMAP(1),	0x100000,   MCI_1_TID},
#endif
};

uint32_t marvell_get_io_win_gcr_target(int ap_index)
{
	return PIDI_TID;
}

int marvell_get_io_win_memory_map(int ap_index, struct addr_map_win **win,
				  uint32_t *size)
{
	*win = io_win_memory_map;
	if (*win == NULL)
		*size = 0;
	else
		*size = ARRAY_SIZE(io_win_memory_map);

	return 0;
}

#ifndef IMAGE_BLE
/*****************************************************************************
 * IOB Configuration
 *****************************************************************************
 */
struct addr_map_win iob_memory_map_cp0[] = {
	/* CP0 */
	/* PEX0_X4 window */
	/*0x800000000 should be first due to DIOB config*/
	{0x0000008000000000,	0x800000000,	PEX0_TID}
};

struct addr_map_win iob_memory_map_cp1[] = {
	/* CP1 */
	/* SPI1_CS0 (RUNIT) window */
	{0x00000000f9000000,	0x1000000,	RUNIT_TID},
};
int marvell_get_iob_memory_map(struct addr_map_win **win, uint32_t *size,
			       uintptr_t base)
{
	switch (base) {
	case MVEBU_CP_REGS_BASE(0):
		*win = iob_memory_map_cp0;
		*size = ARRAY_SIZE(iob_memory_map_cp0);
		return 0;
	case MVEBU_CP_REGS_BASE(1):
		*win = iob_memory_map_cp1;
		*size = ARRAY_SIZE(iob_memory_map_cp1);
		return 0;
	default:
		*size = 0;
		*win = 0;
		return 1;
	}
}
#endif

/*****************************************************************************
 * CCU Configuration
 *****************************************************************************
 */
struct addr_map_win ccu_memory_map[] = {
#ifdef IMAGE_BLE
	{0x00000000f2000000,	0x4000000,  IO_0_TID}, /* IO window */
#else
#if LLC_SRAM
	{PLAT_MARVELL_LLC_SRAM_BASE, PLAT_MARVELL_LLC_SRAM_SIZE, DRAM_0_TID},
#endif
	{0x00000000f2000000,	0xe000000,  IO_0_TID}, /* IO window */
	{0x0000008000000000,	0x800000000,   IO_0_TID}, /* IO window */
#endif
};

uint32_t marvell_get_ccu_gcr_target(int ap)
{
	return DRAM_0_TID;
}

int marvell_get_ccu_memory_map(int ap_index, struct addr_map_win **win,
			       uint32_t *size)
{
	*win = ccu_memory_map;
	*size = ARRAY_SIZE(ccu_memory_map);

	return 0;
}

#ifdef IMAGE_BLE
/*****************************************************************************
 * PCIe Configuration
 *****************************************************************************
 */
struct addr_map_win atu_memory_map[] = {
	{0x0000000000000000,	0x000100000,	PCI_BAR0},	/* ATU inbound */
	{0x000000003f000000,	0x001000000,	PCI_BAR2},	/* ATU inbound */
	{0x00000000f0000000,	0x001000000,	PCI_BAR4},	/* ATU inbound */
	{0x0000008000000000,	0x400000000,	PCI_HOST},	/* ATU outbound */
};

struct pci_ep_header pci_hdr = {
	.vendorid		= PCI_VENDOR_ID_MARVELL,
	.deviceid		= 0x7080,
	.vf_deviceid		= 0x7081,
	.revid			= 0,
	.progif_code		= 0,
	.subclass_code		= 0,
	.baseclass_code		= 0x2,
	.cache_line_size	= 0,
	.subsys_vendor_id	= 0,
	.subsys_id		= 0,
};

struct pci_hw_cfg ocp_pci_hw_cfg = {
	.delay_cfg	= 0,
	.master_en	= 1,
	.lane_width	= 4,
	.lane_ids	= {0, 1, 2, 3},
	.clk_src	= 0,
	.clk_out	= 0,	/* clk is not output */
	.is_end_point	= 1,
	.mac_base	= MVEBU_PCIE_X4_MAC_BASE(0),
	.comphy_base	= MVEBU_COMPHY_BASE(0),
	.hpipe_base	= MVEBU_HPIPE_BASE(0),
	.dfx_base	= MVEBU_CP_REGS_BASE(0) + MVEBU_CP_DFX_OFFSET,
	.shadow_base	= MVEBU_PCIE_X4_SHADOW_MAC_BASE(0),
	.atu_map	= atu_memory_map,
	.atu_map_size	= ARRAY_SIZE(atu_memory_map),
	.hdr		= &pci_hdr,
};

struct pci_hw_cfg *plat_get_pcie_hw_data(void)
{
	return &ocp_pci_hw_cfg;
}

/*****************************************************************************
 * SKIP IMAGE Configuration
 *****************************************************************************
 */
#if PLAT_RECOVERY_IMAGE_ENABLE
void *plat_get_skip_image_data(void)
{
	/* Return the skip_image configurations */
	return NULL;
}
#endif
#endif
