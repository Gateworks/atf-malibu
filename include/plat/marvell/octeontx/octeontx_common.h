/*
 * Copyright (c) 2016 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __OCTEONTX_COMMON_H__
#define __OCTEONTX_COMMON_H__

#include <debug.h>
#include <stdint.h>
#include <lib/xlat_tables/xlat_tables_v2.h>
#include <arch_helpers.h>
#include <stddef.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#include "cavm-arch.h"
#pragma GCC diagnostic pop

#define MPIDR_MASK24	0xFFFFFF
#if defined(PLAT_CN10K_FAMILY)
#define CPU_ID_SHIFT	MPIDR_AFF2_SHIFT
#else
#define CPU_ID_SHIFT	MPIDR_AFF0_SHIFT
#endif

#define CPU_TO_MPIDR(cpu) ((read_mpidr() & ~(MPIDR_MASK24)) | (cpu << CPU_ID_SHIFT))

#define MIDR_REVISION(midr)     ((midr) & MIDR_REV_MASK)
#define MIDR_VARIANT(midr)     \
	(((midr) >> MIDR_VAR_SHIFT) & MIDR_VAR_MASK)
#define MIDR_PARTNUM(midr)      \
        (((midr) >> MIDR_PN_SHIFT) & MIDR_PN_MASK)

#define T81PARTNUM	0xA2
#define T83PARTNUM	0xA3
#define T98PARTNUM	0xB1
#define T96PARTNUM	0xB2
#define F95PARTNUM	0xB3
#define LOKIPARTNUM	0xB4
#define F95MMPARTNUM	0xB5
#define F95OPARTNUM	0xB6
#define CN10KAPARTNUM	0xB9
#define CNF10KAPARTNUM	0xBA
#define CNF10KBPARTNUM	0xBC
#define CN10KBPARTNUM	0xBD

/* Boot type definitions */
#define OCTEONTX_BOOT_UNSUPPORTED	1
#define OCTEONTX_BOOT_REMOTE		10
#define OCTEONTX_BOOT_SPI		11
#define OCTEONTX_BOOT_EMMC		12

#undef AP_CVMCTL_EL1
#undef AP_CVM_ACCESS_EL1
#undef AP_CVMMEMCTL0_EL1
#undef AP_CVMMEMCTL1_EL1
#undef AP_CVM_ACCESS_EL2
#undef AP_CVM_ACCESS_EL3

#define AP_CVMCTL_EL1		S3_0_C11_C0_0
#define AP_CVMCTL2_EL1		S3_0_C11_C0_1
#define AP_CVM_ACCESS_EL1	S3_0_C11_C0_3
#define AP_CVMMEMCTL0_EL1	S3_0_C11_C0_4
#define AP_CVMMEMCTL1_EL1	S3_0_C11_C0_5
#define AP_CVMMEMCTL2_EL1	S3_0_C11_C0_6
#define AP_CVMMEMCTL3_EL1	S3_0_C11_C0_7
#define AP_CVM_ACCESS_EL2	S3_4_C11_C0_3
#define AP_CVM_ACCESS_EL3	S3_6_C11_C0_3
#define AP_CVM_NVBAR_EL3	S3_6_C11_C6_0
#if defined(PLAT_CN10K_FAMILY)
#define AP_CVM_CPURNDBR_EL3	S3_6_C15_C3_0
#define AP_CVM_CPURNDPEID_EL3	S3_6_C15_C3_1
#endif

DEFINE_RENAME_SYSREG_RW_FUNCS(cvmctl_el1, AP_CVMCTL_EL1)
DEFINE_RENAME_SYSREG_RW_FUNCS(cvmctl2_el1, AP_CVMCTL2_EL1)
DEFINE_RENAME_SYSREG_RW_FUNCS(cvmmemctl0_el1, AP_CVMMEMCTL0_EL1)
DEFINE_RENAME_SYSREG_RW_FUNCS(cvmmemctl1_el1, AP_CVMMEMCTL1_EL1)
DEFINE_RENAME_SYSREG_RW_FUNCS(cvmmemctl2_el1, AP_CVMMEMCTL2_EL1)
DEFINE_RENAME_SYSREG_RW_FUNCS(cvmmemctl3_el1, AP_CVMMEMCTL3_EL1)
DEFINE_RENAME_SYSREG_RW_FUNCS(cvm_access_el1, AP_CVM_ACCESS_EL1)
DEFINE_RENAME_SYSREG_RW_FUNCS(cvm_access_el2, AP_CVM_ACCESS_EL2)
DEFINE_RENAME_SYSREG_RW_FUNCS(cvm_access_el3, AP_CVM_ACCESS_EL3)
DEFINE_RENAME_SYSREG_RW_FUNCS(cvmnvbar_el3, AP_CVM_NVBAR_EL3)
#if defined(PLAT_CN10K_FAMILY)
DEFINE_RENAME_SYSREG_RW_FUNCS(cvmcpurndbr_el3, AP_CVM_CPURNDBR_EL3)
DEFINE_RENAME_SYSREG_RW_FUNCS(cvmcpurndpeid_el3, AP_CVM_CPURNDPEID_EL3)
#endif

/*
 * Defines for AP_CVMMEMCTL2_EL1 register
 */
#define MTLB0_BLOCK_WIDTH	9
#define MTLB0_BLOCK_SHIFT	0
/* Default value for better performance */
#define MTLB0_BLOCK_VALUE	ULL(0xf)

#define TLBI_BLOCK_WIDTH	9
#define TLBI_BLOCK_SHIFT	16
/* Default value for better performance */
#define TLBI_BLOCK_VALUE	ULL(0xf)

/*
 * Defines for AP_CVMCTL2_EL1 register
 */
#define LIVELOCK_STALL_WIDTH	4
#define LIVELOCK_STALL_SHIFT	8
#define LIVELOCK_STALL_VALUE	ULL(0x8)

/* In Mhz */
#if defined(PLAT_CN10K_FAMILY)
#define OCTEONTX_SYSCNT_FREQ	1000ull
#else
#define OCTEONTX_SYSCNT_FREQ	100ull
#endif

#define SMMU_NUM_CONTEXTS	0x80

#define set_bit(reg, bit) reg |= (1ULL<<(bit))
#define unset_bit(reg, bit) reg &= ~(1ULL<<(bit))

#define ROUND_DOWN(val, align)	((val) / (align) * (align))
#define ROUND_UP(val, align)	(((val) + (align) - 1) / (align) * (align))

#define PEM_ALL_STREAM_IDS	0xFFFF

/* LLC cache locking */
static inline int octeontx_llc_lock(uint64_t phys_addr, uint64_t size)
{
	/* Check for cache size alignment */
	if (size & (CACHE_WRITEBACK_GRANULE - 1) ||
	    phys_addr & (CACHE_WRITEBACK_GRANULE - 1))
		return -1;

	while (size) {
		/* Ensure cache block is allocated in LLC for this address */
		*(volatile uint8_t *)phys_addr = *(volatile uint8_t *)phys_addr;
		CACHE_LCK_L2(phys_addr);
		phys_addr += CACHE_WRITEBACK_GRANULE;
		size -= CACHE_WRITEBACK_GRANULE;
	}

	/* Ensure completion */
	MB;

	return 0;
}

void add_map_record(unsigned long addr, unsigned long size, unsigned int attr);

void plat_add_mmio_map(void);

extern void *fdt_ptr;
unsigned int octeontx_calc_core_pos(unsigned long mpidr);
void sata_ipm_quirk(void);

void plat_flr_init(void);
void plat_initialize_boot_error_data_area(unsigned long attr);
void plat_initialize_ghes_hest_area(void);

bool plat_ras_feature_supported(void);
void plat_remove_ras_fdt_nodes(void);

#ifdef NT_FW_CONFIG
void plat_octeontx_set_nt_fw_config_size(uint64_t nt_fw_config_size);
#endif

#if !(defined(PLAT_CN10K_FAMILY))
void l2c_flush(void);
#else
void llc_flush(void);
#endif

void cavm_setup_platform(void);

#if defined(PLAT_CN10K_FAMILY)
void plat_cn10x_early_initialization(void);
#elif defined(PLAT_OTX2_FAMILY)
void plat_otx2_early_initialization(void);
#endif

#ifdef MRVL_TF_LOG_MODULE
void initialize_tf_logging(void);
#endif // MRVL_TF_LOG_MODULE

int octeontx_fdt_get_pem_secure(void);
uint32_t octeontx_fdt_get_next_strmid(void **prop, void **prop_end);
int octeontx_fdt_get_strmid_ptrs(int pem, void **prop, void **prop_end);

#endif /* __OCTEONTX_COMMON_H__ */
