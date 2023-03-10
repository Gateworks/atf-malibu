/*
 * Copyright (c) 2016 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __PLAT_OTX2_DEF_H__
#define __PLAT_OTX2_DEF_H__

#include <arch.h>
#include <plat/common/common_def.h>
#include <tbbr_img_def.h>
#include <lib/xlat_tables/xlat_tables_v2.h>

#define DATA_ALIGN	8

/*******************************************************************************
 * Generic platform constants
 ******************************************************************************/

#define ARM_BL31_PLAT_PARAM_VAL		0x0f1e2d3c4b5a6978ULL

/* Size of cacheable stacks */
#define PLATFORM_STACK_SIZE		0x1000

#define OCTEONTX_PRIMARY_CPU		0x0

/* Required platform porting definitions */
#define PLAT_NUM_PWR_DOMAINS		(PLATFORM_CLUSTER_COUNT + \
					PLATFORM_CORE_COUNT + \
					PLATFORM_NODE_COUNT)
#define PLAT_MAX_PWR_LVL		MPIDR_AFFLVL2

#define PLAT_OTX2_FAMILY		1

/*******************************************************************************
 * Platform power states
 ******************************************************************************/
#define OCTEONTX_STATE_ON		0
#define OCTEONTX_STATE_RET		1
#define OCTEONTX_STATE_OFF		2
#define PLAT_MAX_RET_STATE		OCTEONTX_STATE_RET
#define PLAT_MAX_OFF_STATE		OCTEONTX_STATE_OFF

#define PLATFORM_NODE_COUNT		(PLATFORM_MAX_NODES)
#define PLATFORM_CLUSTER_COUNT		(PLATFORM_MAX_NODES * \
						PLATFORM_MAX_CLUSTERS_PER_NODE)
#define PLATFORM_MAX_CPUS_PER_CLUSTER	PLATFORM_CORE_PER_CLUSTER
#define PLATFORM_CORE_COUNT		(PLATFORM_CLUSTER_COUNT * \
						PLATFORM_CORE_PER_CLUSTER)

/* Marvell's OCTEONTX doesn't support AArch32 in EL1/2 */

#define NO_AARCH32_EL2	1

/*******************************************************************************
 * Declarations and constants to access the mailboxes safely. Each mailbox is
 * aligned on the biggest cache line size in the platform. This is known only
 * to the platform as it might have a combination of integrated and external
 * caches. Such alignment ensures that two maiboxes do not sit on the same cache
 * line at any cache level. They could belong to different cpus/clusters &
 * get written while being protected by different locks causing corruption of
 * a valid mailbox address.
 ******************************************************************************/
#define CACHE_WRITEBACK_SHIFT   7
#define CACHE_WRITEBACK_GRANULE (1 << CACHE_WRITEBACK_SHIFT)

#define MAX_IO_DEVICES			5
#define MAX_IO_HANDLES			4

/*******************************************************************************
 * Platform specific page table and MMU setup constants
 ******************************************************************************/
#define ADDR_SPACE_SIZE_SHIFT		48
#define PLAT_VIRT_ADDR_SPACE_SIZE	(1ull << ADDR_SPACE_SIZE_SHIFT)
#define PLAT_PHY_ADDR_SPACE_SIZE	(1ull << ADDR_SPACE_SIZE_SHIFT)

#define MAX_MMAP_REGIONS		256

#define NS_DMA_MEMORY_SIZE		0x100000

#define CVM_PN_EL1			S3_0_C11_C4_2

/*
 * Memory used for redistributors LPI property, pending
 * tables placed below BL33 memory region, with a size of 2MB
 */
#define LPI_NRBITS			16
#define LPI_PROP_TBL_SIZE		(U(1) << LPI_NRBITS)
#define LPI_PEND_TBL_SIZE		(U(1) << LPI_NRBITS)
#define LPI_PROPPEND_TBLS_SIZE		(LPI_PROP_TBL_SIZE + \
					 LPI_PEND_TBL_SIZE * \
					 PLATFORM_CORE_COUNT)

#define LPI_PROP_TBL_BASE		(NS_IMAGE_BASE - 0x200000)

/* Load address of BL33 in the OcteonTX2 port. */
#define NS_IMAGE_BASE			0x04000000
#define NS_IMAGE_MAX_SIZE		(0x40000000 - NS_IMAGE_BASE)

/* Number of TWSI interfaces */
#define TWSI_NUM			6

/* Signals used to communicate with MCU */
#define OCTEONTX_MCU_SHUTDOWN_SIGNAL	0x96

#define MAX_GPIO_INTERRUPTS		64

#define GIC_RDIST_OFFSET	0x800000ll
#define GIC_PF_BAR4				(CAVM_GIC_BAR_E_GIC_PF_BAR4_CN9 + GIC_RDIST_OFFSET)
#define GIC_PF_BAR4_SIZE	CAVM_GIC_BAR_E_GIC_PF_BAR4_CN9_SIZE

#define PEM_INT_VEC_E_INTA			CAVM_PEM_INT_VEC_E_INTA_CN9
#define PEM_INT_VEC_E_INT_SUM		CAVM_PEM_INT_VEC_E_INT_SUM_CN9

#define UAAX_PF_BAR0(x)		CAVM_UAA_BAR_E_UAAX_PF_BAR0_CN9(x)

#define ECAM_PF_BAR2(x)		CAVM_ECAM_BAR_E_ECAMX_PF_BAR2_CN9(x)

/* Priority levels for OcteonTX platforms */
#if SDEI_SUPPORT
/* Non-interrupt SDEI explicit events are used by RAS for EL0-2 notification;
 * they must be higher priority than RAS interrupts.
 */
#define PLAT_SDEI_CRITICAL_PRI		0x10
#define PLAT_RAS_PRI			0x20
#define PLAT_IRQ_PRI			0x30
#define PLAT_SDEI_NORMAL_PRI		0x70
#else
#define PLAT_RAS_PRI			0x10
#define PLAT_IRQ_PRI			0x30
#endif // SDEI_SUPPORT

/* OcteonTX platforms use 3 upper bits of secure interrupt priority */
#define OCTEONTX_PRI_BITS		3

#define FWLOG_SEC_LIMIT			BL31_BASE
#define FWLOG_SEC_SIZE			(512 * 1024)
#define FWLOG_SEC_BASE			(FWLOG_SEC_LIMIT - FWLOG_SEC_SIZE)

/* Firmware log at 4MB @60MB */
#define FWLOG_NS_MEM_BASE   (60 * 1024 * 1024)
#define FWLOG_NS_MEM_SIZE   (4 * 1024 * 1024)
#define FWLOG_NS_MEM_END    (FWLOG_NS_MEM_BASE + FWLOG_NS_MEM_SIZE)

#endif
