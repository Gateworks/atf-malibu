#ifndef __CAVM_CSRS_PSBM_H__
#define __CAVM_CSRS_PSBM_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (c) 2018 Marvell.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * OcteonTX PSBM.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration psbm_ap_chain_e
 *
 * PSBM AP Chain Enumeration
 * Enumerates the PSB AP chains.
 */
#define CAVM_PSBM_AP_CHAIN_E_APX(a) (0 + (a))

/**
 * Enumeration psbm_bar_e
 *
 * PSBM Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_PSBM_BAR_E_PSBM_PF_BAR0 (0x87e0de000000ll)
#define CAVM_PSBM_BAR_E_PSBM_PF_BAR0_SIZE 0x100000ull
#define CAVM_PSBM_BAR_E_PSBM_PF_BAR2 (0x87e0df000000ll)
#define CAVM_PSBM_BAR_E_PSBM_PF_BAR2_SIZE 0x1000000ull

/**
 * Enumeration psbm_sys_chain_e
 *
 * PSBM AP Chain Enumeration
 * Enumerates the PSB SYS chains.
 */
#define CAVM_PSBM_SYS_CHAIN_E_CPT (0xb)
#define CAVM_PSBM_SYS_CHAIN_E_CPTX(a) (0xd + (a))
#define CAVM_PSBM_SYS_CHAIN_E_DCPX_CN96XX(a) (4 + (a))
#define CAVM_PSBM_SYS_CHAIN_E_DCPX_CN98XX(a) (6 + (a))
#define CAVM_PSBM_SYS_CHAIN_E_DCPX_CNF95XX(a) (1 + (a))
#define CAVM_PSBM_SYS_CHAIN_E_DCPX_F95MM(a) (1 + (a))
#define CAVM_PSBM_SYS_CHAIN_E_DCPX_F95O(a) (1 + (a))
#define CAVM_PSBM_SYS_CHAIN_E_DCPX_LOKI(a) (1 + (a))
#define CAVM_PSBM_SYS_CHAIN_E_GSERX_CN96XX(a) (7 + (a))
#define CAVM_PSBM_SYS_CHAIN_E_GSERX_CN98XX(a) (9 + (a))
#define CAVM_PSBM_SYS_CHAIN_E_GSERX_CNF95XX(a) (3 + (a))
#define CAVM_PSBM_SYS_CHAIN_E_GSERX_F95MM(a) (3 + (a))
#define CAVM_PSBM_SYS_CHAIN_E_GSERX_F95O(a) (3 + (a))
#define CAVM_PSBM_SYS_CHAIN_E_GSERX_LOKI(a) (3 + (a))
#define CAVM_PSBM_SYS_CHAIN_E_IOB_CN96XX (6)
#define CAVM_PSBM_SYS_CHAIN_E_IOB_CN98XX (8)
#define CAVM_PSBM_SYS_CHAIN_E_IOBX(a) (2 + (a))

/**
 * Enumeration psbm_sys_map_e
 *
 * PSBM SYS Slave Enumeration
 * Enumerates the PSB system slave identifiers.
 */
#define CAVM_PSBM_SYS_MAP_E_CPTX_CN96XX(a) (0xd + (a))
#define CAVM_PSBM_SYS_MAP_E_CPTX_CN98XX(a) (0x17 + (a))
#define CAVM_PSBM_SYS_MAP_E_GSERX_CN96XX(a) (5 + (a))
#define CAVM_PSBM_SYS_MAP_E_GSERX_CN98XX(a) (9 + (a))
#define CAVM_PSBM_SYS_MAP_E_GSERX_CNF95XX(a) (3 + (a))
#define CAVM_PSBM_SYS_MAP_E_GSERX_F95MM(a) (3 + (a))
#define CAVM_PSBM_SYS_MAP_E_GSERX_F95O(a) (3 + (a))
#define CAVM_PSBM_SYS_MAP_E_GSERX_LOKI(a) (3 + (a))
#define CAVM_PSBM_SYS_MAP_E_GSERRX_CN96XX(a) (0xa + (a))
#define CAVM_PSBM_SYS_MAP_E_GSERRX_CN98XX(a) (0x12 + (a))
#define CAVM_PSBM_SYS_MAP_E_IOBX_CN96XX(a) (3 + (a))
#define CAVM_PSBM_SYS_MAP_E_IOBX_CN98XX(a) (6 + (a))
#define CAVM_PSBM_SYS_MAP_E_IOBX_CNF95XX(a) (2 + (a))
#define CAVM_PSBM_SYS_MAP_E_IOBX_F95MM(a) (2 + (a))
#define CAVM_PSBM_SYS_MAP_E_IOBX_F95O(a) (2 + (a))
#define CAVM_PSBM_SYS_MAP_E_IOBX_LOKI(a) (2 + (a))
#define CAVM_PSBM_SYS_MAP_E_LMCX_CN96XX(a) (0 + (a))
#define CAVM_PSBM_SYS_MAP_E_LMCX_CN98XX(a) (0 + (a))
#define CAVM_PSBM_SYS_MAP_E_LMCX_CNF95XX(a) (0x00 | a>>1)
#define CAVM_PSBM_SYS_MAP_E_LMCX_F95MM(a) (0x00 | a>>1)
#define CAVM_PSBM_SYS_MAP_E_LMCX_F95O(a) (0x00 | a>>1)
#define CAVM_PSBM_SYS_MAP_E_LMCX_LOKI(a) (0x00 | a>>1)
#define CAVM_PSBM_SYS_MAP_E_RSVDX(a) (4 + (a))

/**
 * Register (NCB32b) psbm_ap#_data#
 *
 * PSBM AP Slave Data Register
 * These registers contain the data captured by the last polling of the AP PSBS slaves.
 */
union cavm_psbm_apx_datax
{
    uint32_t u;
    struct cavm_psbm_apx_datax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W/H) Data read from the specified AP slave's register.
                                                                 _ DATA(0) = Upper half of PSBS_AP()_ACTIVITY/PSBS_SYS()_ACTIVITY.
                                                                 _ DATA(1) = Lower half of PSBS_AP()_ACTIVITY/PSBS_SYS()_ACTIVITY.
                                                                 _ DATA(2) = PSBS_AP()_ACCUM(0)/PSBS_SYS()_ACCUM(0).
                                                                 _ DATA(3) = PSBS_AP()_ACCUM(0)/PSBS_SYS()_ACCUM(1).
                                                                 _ DATA(4) = PSBS_AP()_ACCUM(0)/PSBS_SYS()_ACCUM(2).
                                                                 _ DATA(5) = PSBS_AP()_ACCUM(0)/PSBS_SYS()_ACCUM(3). */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W/H) Data read from the specified AP slave's register.
                                                                 _ DATA(0) = Upper half of PSBS_AP()_ACTIVITY/PSBS_SYS()_ACTIVITY.
                                                                 _ DATA(1) = Lower half of PSBS_AP()_ACTIVITY/PSBS_SYS()_ACTIVITY.
                                                                 _ DATA(2) = PSBS_AP()_ACCUM(0)/PSBS_SYS()_ACCUM(0).
                                                                 _ DATA(3) = PSBS_AP()_ACCUM(0)/PSBS_SYS()_ACCUM(1).
                                                                 _ DATA(4) = PSBS_AP()_ACCUM(0)/PSBS_SYS()_ACCUM(2).
                                                                 _ DATA(5) = PSBS_AP()_ACCUM(0)/PSBS_SYS()_ACCUM(3). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psbm_apx_datax_s cn9; */
    /* struct cavm_psbm_apx_datax_s cn96xxp1; */
    struct cavm_psbm_apx_datax_cn96xxp3
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W/H) Data read from the specified AP slave's register.
                                                                 _ DATA(0) = Lower half of PSBS_AP()_ACTIVITY/PSBS_SYS()_ACTIVITY.
                                                                 _ DATA(1) = Upper half of PSBS_AP()_ACTIVITY/PSBS_SYS()_ACTIVITY.
                                                                 _ DATA(2) = PSBS_AP()_ACCUM(0)/PSBS_SYS()_ACCUM(0).
                                                                 _ DATA(3) = PSBS_AP()_ACCUM(0)/PSBS_SYS()_ACCUM(1).
                                                                 _ DATA(4) = PSBS_AP()_ACCUM(0)/PSBS_SYS()_ACCUM(2).
                                                                 _ DATA(5) = PSBS_AP()_ACCUM(0)/PSBS_SYS()_ACCUM(3). */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W/H) Data read from the specified AP slave's register.
                                                                 _ DATA(0) = Lower half of PSBS_AP()_ACTIVITY/PSBS_SYS()_ACTIVITY.
                                                                 _ DATA(1) = Upper half of PSBS_AP()_ACTIVITY/PSBS_SYS()_ACTIVITY.
                                                                 _ DATA(2) = PSBS_AP()_ACCUM(0)/PSBS_SYS()_ACCUM(0).
                                                                 _ DATA(3) = PSBS_AP()_ACCUM(0)/PSBS_SYS()_ACCUM(1).
                                                                 _ DATA(4) = PSBS_AP()_ACCUM(0)/PSBS_SYS()_ACCUM(2).
                                                                 _ DATA(5) = PSBS_AP()_ACCUM(0)/PSBS_SYS()_ACCUM(3). */
#endif /* Word 0 - End */
    } cn96xxp3;
    /* struct cavm_psbm_apx_datax_cn96xxp3 cn96xxp4; */
    /* struct cavm_psbm_apx_datax_cn96xxp3 cn98xx; */
    /* struct cavm_psbm_apx_datax_cn96xxp3 cnf95xx; */
    /* struct cavm_psbm_apx_datax_cn96xxp3 f95mm; */
    /* struct cavm_psbm_apx_datax_cn96xxp3 f95o; */
    /* struct cavm_psbm_apx_datax_cn96xxp3 loki; */
};
typedef union cavm_psbm_apx_datax cavm_psbm_apx_datax_t;

static inline uint64_t CAVM_PSBM_APX_DATAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSBM_APX_DATAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN96XX) && ((a<=23) && (b<=5)))
        return 0x87e0de010000ll + 0x100ll * ((a) & 0x1f) + 0x10ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a<=35) && (b<=5)))
        return 0x87e0de010000ll + 0x100ll * ((a) & 0x3f) + 0x10ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a<=5) && (b<=5)))
        return 0x87e0de010000ll + 0x100ll * ((a) & 0x7) + 0x10ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_F95MM) && ((a<=5) && (b<=5)))
        return 0x87e0de010000ll + 0x100ll * ((a) & 0x7) + 0x10ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_F95O) && ((a<=5) && (b<=5)))
        return 0x87e0de010000ll + 0x100ll * ((a) & 0x7) + 0x10ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_LOKI) && ((a<=5) && (b<=5)))
        return 0x87e0de010000ll + 0x100ll * ((a) & 0x7) + 0x10ll * ((b) & 0x7);
    __cavm_csr_fatal("PSBM_APX_DATAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PSBM_APX_DATAX(a,b) cavm_psbm_apx_datax_t
#define bustype_CAVM_PSBM_APX_DATAX(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_PSBM_APX_DATAX(a,b) "PSBM_APX_DATAX"
#define device_bar_CAVM_PSBM_APX_DATAX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSBM_APX_DATAX(a,b) (a)
#define arguments_CAVM_PSBM_APX_DATAX(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) psbm_ap#_hdr
 *
 * PSBM AP Slave Header Register
 * These registers contain the header captured by the last polling of the AP PSBS
 * slaves. For diagnostic use only.
 */
union cavm_psbm_apx_hdr
{
    uint32_t u;
    struct cavm_psbm_apx_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t cmd                   : 4;  /**< [ 31: 28](R/W/H) PSB command. */
        uint32_t psbs_id               : 8;  /**< [ 27: 20](R/W/H) PSBS slave ID. */
        uint32_t entries               : 4;  /**< [ 19: 16](R/W/H) Number of entries in the slave. */
        uint32_t ras                   : 16; /**< [ 15:  0](R/W/H) RAS capture data. */
#else /* Word 0 - Little Endian */
        uint32_t ras                   : 16; /**< [ 15:  0](R/W/H) RAS capture data. */
        uint32_t entries               : 4;  /**< [ 19: 16](R/W/H) Number of entries in the slave. */
        uint32_t psbs_id               : 8;  /**< [ 27: 20](R/W/H) PSBS slave ID. */
        uint32_t cmd                   : 4;  /**< [ 31: 28](R/W/H) PSB command. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psbm_apx_hdr_s cn; */
};
typedef union cavm_psbm_apx_hdr cavm_psbm_apx_hdr_t;

static inline uint64_t CAVM_PSBM_APX_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSBM_APX_HDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=23))
        return 0x87e0de018000ll + 0x10ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN98XX) && (a<=35))
        return 0x87e0de018000ll + 0x10ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=5))
        return 0x87e0de018000ll + 0x10ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95MM) && (a<=5))
        return 0x87e0de018000ll + 0x10ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=5))
        return 0x87e0de018000ll + 0x10ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=5))
        return 0x87e0de018000ll + 0x10ll * ((a) & 0x7);
    __cavm_csr_fatal("PSBM_APX_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSBM_APX_HDR(a) cavm_psbm_apx_hdr_t
#define bustype_CAVM_PSBM_APX_HDR(a) CSR_TYPE_NCB32b
#define basename_CAVM_PSBM_APX_HDR(a) "PSBM_APX_HDR"
#define device_bar_CAVM_PSBM_APX_HDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSBM_APX_HDR(a) (a)
#define arguments_CAVM_PSBM_APX_HDR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) psbm_const
 *
 * PSBM Constants Register
 * This register is for software discovery of PSBM features.
 */
union cavm_psbm_const
{
    uint32_t u;
    struct cavm_psbm_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ap_slaves             : 8;  /**< [ 31: 24](RO) Maximum number of AP slaves connected to PSBM. This number may exceed the number
                                                                 of cores implemented in a given SKU; software should access CSRs and expect
                                                                 results only for those slaves which are out of reset. */
        uint32_t ap_entries            : 8;  /**< [ 23: 16](RO) Number of 32-bit values in each AP slave. */
        uint32_t sys_slaves            : 8;  /**< [ 15:  8](RO) Maximum number of ROC chains connected to PSBM. */
        uint32_t sys_entries           : 8;  /**< [  7:  0](RO) Number of 32-bit values in each ROC slave. */
#else /* Word 0 - Little Endian */
        uint32_t sys_entries           : 8;  /**< [  7:  0](RO) Number of 32-bit values in each ROC slave. */
        uint32_t sys_slaves            : 8;  /**< [ 15:  8](RO) Maximum number of ROC chains connected to PSBM. */
        uint32_t ap_entries            : 8;  /**< [ 23: 16](RO) Number of 32-bit values in each AP slave. */
        uint32_t ap_slaves             : 8;  /**< [ 31: 24](RO) Maximum number of AP slaves connected to PSBM. This number may exceed the number
                                                                 of cores implemented in a given SKU; software should access CSRs and expect
                                                                 results only for those slaves which are out of reset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psbm_const_s cn; */
};
typedef union cavm_psbm_const cavm_psbm_const_t;

#define CAVM_PSBM_CONST CAVM_PSBM_CONST_FUNC()
static inline uint64_t CAVM_PSBM_CONST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSBM_CONST_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x87e0de000008ll;
    __cavm_csr_fatal("PSBM_CONST", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSBM_CONST cavm_psbm_const_t
#define bustype_CAVM_PSBM_CONST CSR_TYPE_NCB32b
#define basename_CAVM_PSBM_CONST "PSBM_CONST"
#define device_bar_CAVM_PSBM_CONST 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSBM_CONST 0
#define arguments_CAVM_PSBM_CONST -1,-1,-1,-1

/**
 * Register (NCB32b) psbm_const1
 *
 * PSBM Constants Register 1
 */
union cavm_psbm_const1
{
    uint32_t u;
    struct cavm_psbm_const1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psbm_const1_s cn; */
};
typedef union cavm_psbm_const1 cavm_psbm_const1_t;

#define CAVM_PSBM_CONST1 CAVM_PSBM_CONST1_FUNC()
static inline uint64_t CAVM_PSBM_CONST1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSBM_CONST1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x87e0de000010ll;
    __cavm_csr_fatal("PSBM_CONST1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSBM_CONST1 cavm_psbm_const1_t
#define bustype_CAVM_PSBM_CONST1 CSR_TYPE_NCB32b
#define basename_CAVM_PSBM_CONST1 "PSBM_CONST1"
#define device_bar_CAVM_PSBM_CONST1 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSBM_CONST1 0
#define arguments_CAVM_PSBM_CONST1 -1,-1,-1,-1

/**
 * Register (NCB32b) psbm_ctl
 *
 * PSBM Control Register
 */
union cavm_psbm_ctl
{
    uint32_t u;
    struct cavm_psbm_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t done                  : 1;  /**< [ 31: 31](RO/H) Cleared by PSBM when software writes one to [START], and stays cleared until set
                                                                 by PSBM when data collection is complete. */
        uint32_t reserved_1_30         : 30;
        uint32_t start                 : 1;  /**< [  0:  0](WO) When written with one, start a poll of the PSB registers. */
#else /* Word 0 - Little Endian */
        uint32_t start                 : 1;  /**< [  0:  0](WO) When written with one, start a poll of the PSB registers. */
        uint32_t reserved_1_30         : 30;
        uint32_t done                  : 1;  /**< [ 31: 31](RO/H) Cleared by PSBM when software writes one to [START], and stays cleared until set
                                                                 by PSBM when data collection is complete. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psbm_ctl_s cn; */
};
typedef union cavm_psbm_ctl cavm_psbm_ctl_t;

#define CAVM_PSBM_CTL CAVM_PSBM_CTL_FUNC()
static inline uint64_t CAVM_PSBM_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSBM_CTL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x87e0de000000ll;
    __cavm_csr_fatal("PSBM_CTL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSBM_CTL cavm_psbm_ctl_t
#define bustype_CAVM_PSBM_CTL CSR_TYPE_NCB32b
#define basename_CAVM_PSBM_CTL "PSBM_CTL"
#define device_bar_CAVM_PSBM_CTL 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSBM_CTL 0
#define arguments_CAVM_PSBM_CTL -1,-1,-1,-1

/**
 * Register (NCB32b) psbm_lint
 *
 * PSBM Interrupt Register
 */
union cavm_psbm_lint
{
    uint32_t u;
    struct cavm_psbm_lint_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t wakeup                : 1;  /**< [  0:  0](R/W1C/H) PSB slave wakeup interrupt. */
#else /* Word 0 - Little Endian */
        uint32_t wakeup                : 1;  /**< [  0:  0](R/W1C/H) PSB slave wakeup interrupt. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psbm_lint_s cn; */
};
typedef union cavm_psbm_lint cavm_psbm_lint_t;

#define CAVM_PSBM_LINT CAVM_PSBM_LINT_FUNC()
static inline uint64_t CAVM_PSBM_LINT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSBM_LINT_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x87e0de000020ll;
    __cavm_csr_fatal("PSBM_LINT", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSBM_LINT cavm_psbm_lint_t
#define bustype_CAVM_PSBM_LINT CSR_TYPE_NCB32b
#define basename_CAVM_PSBM_LINT "PSBM_LINT"
#define device_bar_CAVM_PSBM_LINT 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSBM_LINT 0
#define arguments_CAVM_PSBM_LINT -1,-1,-1,-1

/**
 * Register (NCB32b) psbm_lint_ena_w1c
 *
 * PSBM Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_psbm_lint_ena_w1c
{
    uint32_t u;
    struct cavm_psbm_lint_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t wakeup                : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for PSBM_LINT[WAKEUP]. */
#else /* Word 0 - Little Endian */
        uint32_t wakeup                : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for PSBM_LINT[WAKEUP]. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psbm_lint_ena_w1c_s cn; */
};
typedef union cavm_psbm_lint_ena_w1c cavm_psbm_lint_ena_w1c_t;

#define CAVM_PSBM_LINT_ENA_W1C CAVM_PSBM_LINT_ENA_W1C_FUNC()
static inline uint64_t CAVM_PSBM_LINT_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSBM_LINT_ENA_W1C_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x87e0de000030ll;
    __cavm_csr_fatal("PSBM_LINT_ENA_W1C", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSBM_LINT_ENA_W1C cavm_psbm_lint_ena_w1c_t
#define bustype_CAVM_PSBM_LINT_ENA_W1C CSR_TYPE_NCB32b
#define basename_CAVM_PSBM_LINT_ENA_W1C "PSBM_LINT_ENA_W1C"
#define device_bar_CAVM_PSBM_LINT_ENA_W1C 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSBM_LINT_ENA_W1C 0
#define arguments_CAVM_PSBM_LINT_ENA_W1C -1,-1,-1,-1

/**
 * Register (NCB32b) psbm_lint_ena_w1s
 *
 * PSBM Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_psbm_lint_ena_w1s
{
    uint32_t u;
    struct cavm_psbm_lint_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t wakeup                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for PSBM_LINT[WAKEUP]. */
#else /* Word 0 - Little Endian */
        uint32_t wakeup                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for PSBM_LINT[WAKEUP]. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psbm_lint_ena_w1s_s cn; */
};
typedef union cavm_psbm_lint_ena_w1s cavm_psbm_lint_ena_w1s_t;

#define CAVM_PSBM_LINT_ENA_W1S CAVM_PSBM_LINT_ENA_W1S_FUNC()
static inline uint64_t CAVM_PSBM_LINT_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSBM_LINT_ENA_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x87e0de000038ll;
    __cavm_csr_fatal("PSBM_LINT_ENA_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSBM_LINT_ENA_W1S cavm_psbm_lint_ena_w1s_t
#define bustype_CAVM_PSBM_LINT_ENA_W1S CSR_TYPE_NCB32b
#define basename_CAVM_PSBM_LINT_ENA_W1S "PSBM_LINT_ENA_W1S"
#define device_bar_CAVM_PSBM_LINT_ENA_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSBM_LINT_ENA_W1S 0
#define arguments_CAVM_PSBM_LINT_ENA_W1S -1,-1,-1,-1

/**
 * Register (NCB32b) psbm_lint_w1s
 *
 * PSBM Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_psbm_lint_w1s
{
    uint32_t u;
    struct cavm_psbm_lint_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t wakeup                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets PSBM_LINT[WAKEUP]. */
#else /* Word 0 - Little Endian */
        uint32_t wakeup                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets PSBM_LINT[WAKEUP]. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psbm_lint_w1s_s cn; */
};
typedef union cavm_psbm_lint_w1s cavm_psbm_lint_w1s_t;

#define CAVM_PSBM_LINT_W1S CAVM_PSBM_LINT_W1S_FUNC()
static inline uint64_t CAVM_PSBM_LINT_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSBM_LINT_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x87e0de000028ll;
    __cavm_csr_fatal("PSBM_LINT_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSBM_LINT_W1S cavm_psbm_lint_w1s_t
#define bustype_CAVM_PSBM_LINT_W1S CSR_TYPE_NCB32b
#define basename_CAVM_PSBM_LINT_W1S "PSBM_LINT_W1S"
#define device_bar_CAVM_PSBM_LINT_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSBM_LINT_W1S 0
#define arguments_CAVM_PSBM_LINT_W1S -1,-1,-1,-1

/**
 * Register (NCB32b) psbm_sys#_data#
 *
 * PSBM ROC Data Register
 * These registers contain the data captured by the last polling of the SYS PSBS slaves.
 * Index {a} is enumerated by PSBM_SYS_MAP_E.
 */
union cavm_psbm_sysx_datax
{
    uint32_t u;
    struct cavm_psbm_sysx_datax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W/H) Data read from the specified ROC device's register. */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W/H) Data read from the specified ROC device's register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psbm_sysx_datax_s cn; */
};
typedef union cavm_psbm_sysx_datax cavm_psbm_sysx_datax_t;

static inline uint64_t CAVM_PSBM_SYSX_DATAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSBM_SYSX_DATAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN96XX) && ((a<=13) && (b<=5)))
        return 0x87e0de020000ll + 0x100ll * ((a) & 0xf) + 0x10ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a<=24) && (b<=5)))
        return 0x87e0de020000ll + 0x100ll * ((a) & 0x1f) + 0x10ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a<=4) && (b<=5)))
        return 0x87e0de020000ll + 0x100ll * ((a) & 0x7) + 0x10ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_F95MM) && ((a<=4) && (b<=5)))
        return 0x87e0de020000ll + 0x100ll * ((a) & 0x7) + 0x10ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_F95O) && ((a<=4) && (b<=5)))
        return 0x87e0de020000ll + 0x100ll * ((a) & 0x7) + 0x10ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_LOKI) && ((a<=4) && (b<=5)))
        return 0x87e0de020000ll + 0x100ll * ((a) & 0x7) + 0x10ll * ((b) & 0x7);
    __cavm_csr_fatal("PSBM_SYSX_DATAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PSBM_SYSX_DATAX(a,b) cavm_psbm_sysx_datax_t
#define bustype_CAVM_PSBM_SYSX_DATAX(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_PSBM_SYSX_DATAX(a,b) "PSBM_SYSX_DATAX"
#define device_bar_CAVM_PSBM_SYSX_DATAX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSBM_SYSX_DATAX(a,b) (a)
#define arguments_CAVM_PSBM_SYSX_DATAX(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) psbm_sys#_hdr
 *
 * PSBM SYS Slave Header Register
 * These registers contain the header captured by the last polling of the SYS PSBS
 * slaves. Index {a} is enumerated by PSBM_SYS_MAP_E. For diagnostic use only.
 */
union cavm_psbm_sysx_hdr
{
    uint32_t u;
    struct cavm_psbm_sysx_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t cmd                   : 4;  /**< [ 31: 28](R/W/H) PSB command. */
        uint32_t psbs_id               : 8;  /**< [ 27: 20](R/W/H) PSBS slave ID. */
        uint32_t entries               : 4;  /**< [ 19: 16](R/W/H) Number of entries in the slave. */
        uint32_t ras                   : 16; /**< [ 15:  0](R/W/H) RAS capture data. */
#else /* Word 0 - Little Endian */
        uint32_t ras                   : 16; /**< [ 15:  0](R/W/H) RAS capture data. */
        uint32_t entries               : 4;  /**< [ 19: 16](R/W/H) Number of entries in the slave. */
        uint32_t psbs_id               : 8;  /**< [ 27: 20](R/W/H) PSBS slave ID. */
        uint32_t cmd                   : 4;  /**< [ 31: 28](R/W/H) PSB command. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psbm_sysx_hdr_s cn; */
};
typedef union cavm_psbm_sysx_hdr cavm_psbm_sysx_hdr_t;

static inline uint64_t CAVM_PSBM_SYSX_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSBM_SYSX_HDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=13))
        return 0x87e0de028000ll + 0x10ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN98XX) && (a<=24))
        return 0x87e0de028000ll + 0x10ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=4))
        return 0x87e0de028000ll + 0x10ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95MM) && (a<=4))
        return 0x87e0de028000ll + 0x10ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=4))
        return 0x87e0de028000ll + 0x10ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=4))
        return 0x87e0de028000ll + 0x10ll * ((a) & 0x7);
    __cavm_csr_fatal("PSBM_SYSX_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSBM_SYSX_HDR(a) cavm_psbm_sysx_hdr_t
#define bustype_CAVM_PSBM_SYSX_HDR(a) CSR_TYPE_NCB32b
#define basename_CAVM_PSBM_SYSX_HDR(a) "PSBM_SYSX_HDR"
#define device_bar_CAVM_PSBM_SYSX_HDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSBM_SYSX_HDR(a) (a)
#define arguments_CAVM_PSBM_SYSX_HDR(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_PSBM_H__ */
