/*
 * Copyright (c) 2018 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef MARVELL_DEF_H
#define MARVELL_DEF_H

#include <platform_def.h>

#include <arch.h>
#include <common/tbbr/tbbr_img_def.h>
#include <lib/xlat_tables/xlat_tables_v2.h>
#include <plat/common/common_def.h>

/******************************************************************************
 * Definitions common to all MARVELL standard platforms
 *****************************************************************************/

/* Special value used to verify platform parameters from BL2 to BL31 */
#define MARVELL_BL31_PLAT_PARAM_VAL		0x0f1e2d3c4b5a6978ULL


#define MARVELL_CACHE_WRITEBACK_SHIFT	6

/*
 * Macros mapping the MPIDR Affinity levels to MARVELL Platform Power levels.
 * The power levels have a 1:1 mapping with the MPIDR affinity levels.
 */
#define MARVELL_PWR_LVL0		MPIDR_AFFLVL0
#define MARVELL_PWR_LVL1		MPIDR_AFFLVL1
#define MARVELL_PWR_LVL2		MPIDR_AFFLVL2

/*
 *  Macros for local power states in Marvell platforms encoded by
 *  State-ID field within the power-state parameter.
 */
/* Local power state for power domains in Run state. */
#define MARVELL_LOCAL_STATE_RUN	0
/* Local power state for retention. Valid only for CPU power domains */
#define MARVELL_LOCAL_STATE_RET	1
/*
 * Local power state for OFF/power-down. Valid for CPU
 * and cluster power domains
 */
#define MARVELL_LOCAL_STATE_OFF	2

/* This leaves a gap between end of DRAM and start of ROM block */
#define MARVELL_TRUSTED_DRAM_SIZE	0x80000	/* 512 KB */

/* The first 4KB of Trusted SRAM are used as shared memory */
#define MARVELL_SHARED_RAM_BASE		PLAT_MARVELL_ATF_BASE
#define MARVELL_SHARED_RAM_SIZE		0x00001000	/* 4 KB */

/* The remaining Trusted SRAM is used to load the BL images */
#define MARVELL_BL_RAM_BASE		(MARVELL_SHARED_RAM_BASE +	\
					 MARVELL_SHARED_RAM_SIZE)
#define MARVELL_BL_RAM_SIZE		(MARVELL_TRUSTED_DRAM_SIZE - \
					 MARVELL_SHARED_RAM_SIZE)
/* Non-shared DRAM */
#define MARVELL_DRAM_BASE		ULL(0x0)
#define MARVELL_DRAM_SIZE		ULL(0x80000000)
#define MARVELL_DRAM_END		(MARVELL_DRAM_BASE + \
					 MARVELL_DRAM_SIZE - 1)

#define MARVELL_IRQ_PIC0		28
#define MARVELL_IRQ_SEC_PHY_TIMER	29

#define MARVELL_IRQ_SEC_SGI_0		8
#define MARVELL_IRQ_SEC_SGI_1		9
#define MARVELL_IRQ_SEC_SGI_2		10
#define MARVELL_IRQ_SEC_SGI_3		11
#define MARVELL_IRQ_SEC_SGI_4		12
#define MARVELL_IRQ_SEC_SGI_5		13
#define MARVELL_IRQ_SEC_SGI_6		14
#define MARVELL_IRQ_SEC_SGI_7		15

#ifdef SPD_opteed
/*
 * BL2 needs to map 4MB at the end of TZC_DRAM1 in order to
 * load/authenticate the trusted os extra image. The first 512KB of
 * TZC_DRAM1 are reserved for trusted os (OPTEE). The extra image loading
 * for OPTEE is paged image which only include the paging part using
 * virtual memory but without "init" data. OPTEE will copy the "init" data
 * (from pager image) to the first 512KB of TZC_DRAM, and then copy the
 * extra image behind the "init" data.
 */
#define MARVELL_OPTEE_PAGEABLE_LOAD_BASE	\
					(PLAT_MARVELL_TRUSTED_RAM_BASE + \
					 PLAT_MARVELL_TRUSTED_RAM_SIZE - \
					 MARVELL_OPTEE_PAGEABLE_LOAD_SIZE)
#define MARVELL_OPTEE_PAGEABLE_LOAD_SIZE	0x400000
#define MARVELL_OPTEE_PAGEABLE_LOAD_MEM		\
					MAP_REGION_FLAT(		  \
					MARVELL_OPTEE_PAGEABLE_LOAD_BASE, \
					MARVELL_OPTEE_PAGEABLE_LOAD_SIZE, \
					MT_MEMORY | MT_RW | MT_SECURE)

/*
 * Map the memory for the OP-TEE core (also known as OP-TEE pager when paging
 * support is enabled).
 */
#define MARVELL_MAP_OPTEE_CORE_MEM	MAP_REGION_FLAT(		\
						BL32_BASE,		\
						BL32_LIMIT - BL32_BASE,	\
						MT_MEMORY | MT_RW | MT_SECURE)
#endif /* SPD_opteed */

#define MARVELL_MAP_SECURE_RAM		MAP_REGION_FLAT(		 \
						MARVELL_SHARED_RAM_BASE, \
						MARVELL_SHARED_RAM_SIZE, \
						MT_MEMORY | MT_RW | MT_SECURE)

#define MARVELL_MAP_DRAM		MAP_REGION_FLAT(		\
						MARVELL_DRAM_BASE,	\
						MARVELL_DRAM_SIZE,	\
						MT_MEMORY | MT_RW | MT_NS)

/*
 * The number of regions like RO(code), coherent and data required by
 * different BL stages which need to be mapped in the MMU.
 */
#if USE_COHERENT_MEM
#define MARVELL_BL_REGIONS		3
#else
#define MARVELL_BL_REGIONS		2
#endif

#define MAX_MMAP_REGIONS		(PLAT_MARVELL_MMAP_ENTRIES +	\
					 MARVELL_BL_REGIONS)

#define MARVELL_CONSOLE_BAUDRATE	115200

/******************************************************************************
 * Required platform porting definitions common to all MARVELL std. platforms
 *****************************************************************************/

#define PLAT_PHY_ADDR_SPACE_SIZE	(1ULL << 32)
#define PLAT_VIRT_ADDR_SPACE_SIZE	(1ULL << 32)

/*
 * This macro defines the deepest retention state possible. A higher state
 * id will represent an invalid or a power down state.
 */
#define PLAT_MAX_RET_STATE		MARVELL_LOCAL_STATE_RET

/*
 * This macro defines the deepest power down states possible. Any state ID
 * higher than this is invalid.
 */
#define PLAT_MAX_OFF_STATE		MARVELL_LOCAL_STATE_OFF


#define PLATFORM_CORE_COUNT		PLAT_MARVELL_CORE_COUNT
#define PLAT_NUM_PWR_DOMAINS		(PLAT_MARVELL_CLUSTER_COUNT +	\
					 PLATFORM_CORE_COUNT)

/*
 * Some data must be aligned on the biggest cache line size in the platform.
 * This is known only to the platform as it might have a combination of
 * integrated and external caches.
 */
#define CACHE_WRITEBACK_GRANULE		(1 << MARVELL_CACHE_WRITEBACK_SHIFT)


/*******************************************************************************
 * BL1 specific defines.
 * BL1 RW data is relocated from ROM to RAM at runtime so we need 2 sets of
 * addresses.
 ******************************************************************************/
#define BL1_RO_BASE			PLAT_MARVELL_TRUSTED_ROM_BASE
#define BL1_RO_LIMIT			(PLAT_MARVELL_TRUSTED_ROM_BASE	\
					 + PLAT_MARVELL_TRUSTED_ROM_SIZE)
/*
 * Put BL1 RW at the top of the Trusted SRAM.
 */
#define BL1_RW_BASE		(MARVELL_BL_RAM_BASE +		\
					MARVELL_BL_RAM_SIZE -	\
					PLAT_MARVELL_MAX_BL1_RW_SIZE)
#define BL1_RW_LIMIT		(MARVELL_BL_RAM_BASE + MARVELL_BL_RAM_SIZE)

/*******************************************************************************
 * BLE specific defines.
 ******************************************************************************/
#define BLE_BASE			PLAT_MARVELL_SRAM_BASE
#define BLE_LIMIT			PLAT_MARVELL_SRAM_END

/*******************************************************************************
 * BL2 specific defines.
 ******************************************************************************/
/*
 * Put BL2 just below BL31.
 */
#define BL2_BASE			(BL31_BASE - PLAT_MARVELL_MAX_BL2_SIZE)
#define BL2_LIMIT			BL31_BASE

/*******************************************************************************
 * BL31 specific defines.
 ******************************************************************************/
/*
 * Put BL31 at the top of the Trusted SRAM.
 */
#define BL31_BASE			(MARVELL_BL_RAM_BASE +		\
						MARVELL_BL_RAM_SIZE -	\
						PLAT_MARVEL_MAX_BL31_SIZE)
#define BL31_PROGBITS_LIMIT		BL1_RW_BASE
#define BL31_LIMIT			(MARVELL_BL_RAM_BASE +	\
					 MARVELL_BL_RAM_SIZE)

/*******************************************************************************
 * BL32 specific defines.
 ******************************************************************************/
#define BL32_BASE		PLAT_MARVELL_TRUSTED_RAM_BASE
#define BL32_LIMIT		(BL32_BASE + PLAT_MARVELL_TRUSTED_RAM_SIZE)

#ifdef SPD_none
#undef BL32_BASE
#endif /* SPD_none */

#endif /* MARVELL_DEF_H */
