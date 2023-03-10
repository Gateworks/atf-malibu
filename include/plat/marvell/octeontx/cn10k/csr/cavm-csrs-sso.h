#ifndef __CAVM_CSRS_SSO_H__
#define __CAVM_CSRS_SSO_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2018 Marvell
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * OcteonTX SSO.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration sso_af_int_vec_e
 *
 * SSO MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_SSO_AF_INT_VEC_E_ERR0 (0)
#define CAVM_SSO_AF_INT_VEC_E_ERR2 (1)
#define CAVM_SSO_AF_INT_VEC_E_RAS (2)

/**
 * Enumeration sso_lf_int_vec_e
 *
 * SSO MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_SSO_LF_INT_VEC_E_GRP (0)

/**
 * Enumeration sso_lsw_mode_e
 *
 * SSO LSW Mode Enumeration
 * Enumerates the different LSW Mode types.
 */
#define CAVM_SSO_LSW_MODE_E_IMMED (2)
#define CAVM_SSO_LSW_MODE_E_NO_LSW (0)
#define CAVM_SSO_LSW_MODE_E_WAITW (1)

/**
 * Enumeration sso_tt_e
 *
 * SSO Tag Type Enumeration
 * Enumerates the different SSO tag types.
 */
#define CAVM_SSO_TT_E_ATOMIC (1)
#define CAVM_SSO_TT_E_EMPTY (3)
#define CAVM_SSO_TT_E_ORDERED (0)
#define CAVM_SSO_TT_E_UNTAGGED (2)

/**
 * Enumeration sso_wa_e
 *
 * SSO Work Add Interface Enumeration
 * Enumerates the different SSO work-add interfaces bit fields in SSO_AF_AW_INP_CTL[WA_DIS].
 * Note that not all interfaces exist in every chip.
 */
#define CAVM_SSO_WA_E_ADDWQ (3)
#define CAVM_SSO_WA_E_CPTX(a) (2 + 7 * (a))
#define CAVM_SSO_WA_E_DPI (4)
#define CAVM_SSO_WA_E_IOBN (0)
#define CAVM_SSO_WA_E_MLX(a) (0xa + 2 * (a))
#define CAVM_SSO_WA_E_NIXRXX(a) (1 + 7 * (a))
#define CAVM_SSO_WA_E_NIXTXX(a) (5 + 6 * (a))
#define CAVM_SSO_WA_E_PSM (7)
#define CAVM_SSO_WA_E_TIM (6)

/**
 * Register (RVU_PF_BAR0) sso_af_active_cycles0
 *
 * SSO AF Active Cycles Register
 */
union cavm_sso_af_active_cycles0
{
    uint64_t u;
    struct cavm_sso_af_active_cycles0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t act_cyc               : 64; /**< [ 63:  0](R/W/H) Counts every coprocessor-clock cycle that the SSO clocks are active in SSO AW. */
#else /* Word 0 - Little Endian */
        uint64_t act_cyc               : 64; /**< [ 63:  0](R/W/H) Counts every coprocessor-clock cycle that the SSO clocks are active in SSO AW. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_active_cycles0_s cn; */
};
typedef union cavm_sso_af_active_cycles0 cavm_sso_af_active_cycles0_t;

#define CAVM_SSO_AF_ACTIVE_CYCLES0 CAVM_SSO_AF_ACTIVE_CYCLES0_FUNC()
static inline uint64_t CAVM_SSO_AF_ACTIVE_CYCLES0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_ACTIVE_CYCLES0_FUNC(void)
{
    return 0x840070001100ll;
}

#define typedef_CAVM_SSO_AF_ACTIVE_CYCLES0 cavm_sso_af_active_cycles0_t
#define bustype_CAVM_SSO_AF_ACTIVE_CYCLES0 CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_ACTIVE_CYCLES0 "SSO_AF_ACTIVE_CYCLES0"
#define device_bar_CAVM_SSO_AF_ACTIVE_CYCLES0 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_ACTIVE_CYCLES0 0
#define arguments_CAVM_SSO_AF_ACTIVE_CYCLES0 -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_active_cycles1
 *
 * SSO AF Active Cycles Register
 */
union cavm_sso_af_active_cycles1
{
    uint64_t u;
    struct cavm_sso_af_active_cycles1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t act_cyc               : 64; /**< [ 63:  0](R/W/H) Counts every coprocessor-clock cycle that the SSO clocks are active in SSO GW. */
#else /* Word 0 - Little Endian */
        uint64_t act_cyc               : 64; /**< [ 63:  0](R/W/H) Counts every coprocessor-clock cycle that the SSO clocks are active in SSO GW. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_active_cycles1_s cn; */
};
typedef union cavm_sso_af_active_cycles1 cavm_sso_af_active_cycles1_t;

#define CAVM_SSO_AF_ACTIVE_CYCLES1 CAVM_SSO_AF_ACTIVE_CYCLES1_FUNC()
static inline uint64_t CAVM_SSO_AF_ACTIVE_CYCLES1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_ACTIVE_CYCLES1_FUNC(void)
{
    return 0x840070001108ll;
}

#define typedef_CAVM_SSO_AF_ACTIVE_CYCLES1 cavm_sso_af_active_cycles1_t
#define bustype_CAVM_SSO_AF_ACTIVE_CYCLES1 CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_ACTIVE_CYCLES1 "SSO_AF_ACTIVE_CYCLES1"
#define device_bar_CAVM_SSO_AF_ACTIVE_CYCLES1 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_ACTIVE_CYCLES1 0
#define arguments_CAVM_SSO_AF_ACTIVE_CYCLES1 -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_active_cycles2
 *
 * SSO AF Active Cycles Register
 */
union cavm_sso_af_active_cycles2
{
    uint64_t u;
    struct cavm_sso_af_active_cycles2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t act_cyc               : 64; /**< [ 63:  0](R/W/H) Counts every coprocessor-clock cycle that the SSO clocks are active in SSO WS. */
#else /* Word 0 - Little Endian */
        uint64_t act_cyc               : 64; /**< [ 63:  0](R/W/H) Counts every coprocessor-clock cycle that the SSO clocks are active in SSO WS. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_active_cycles2_s cn; */
};
typedef union cavm_sso_af_active_cycles2 cavm_sso_af_active_cycles2_t;

#define CAVM_SSO_AF_ACTIVE_CYCLES2 CAVM_SSO_AF_ACTIVE_CYCLES2_FUNC()
static inline uint64_t CAVM_SSO_AF_ACTIVE_CYCLES2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_ACTIVE_CYCLES2_FUNC(void)
{
    return 0x840070001110ll;
}

#define typedef_CAVM_SSO_AF_ACTIVE_CYCLES2 cavm_sso_af_active_cycles2_t
#define bustype_CAVM_SSO_AF_ACTIVE_CYCLES2 CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_ACTIVE_CYCLES2 "SSO_AF_ACTIVE_CYCLES2"
#define device_bar_CAVM_SSO_AF_ACTIVE_CYCLES2 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_ACTIVE_CYCLES2 0
#define arguments_CAVM_SSO_AF_ACTIVE_CYCLES2 -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_aw_add
 *
 * SSO AF Work-Entries Add Register
 */
union cavm_sso_af_aw_add
{
    uint64_t u;
    struct cavm_sso_af_aw_add_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_30_63        : 34;
        uint64_t rsvd_free             : 14; /**< [ 29: 16](WO) Written value is added to SSO_AF_AW_WE[RSVD_FREE] to prevent races between software and
                                                                 hardware changes. This is a two's complement value so subtraction may also be performed. */
        uint64_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_15         : 16;
        uint64_t rsvd_free             : 14; /**< [ 29: 16](WO) Written value is added to SSO_AF_AW_WE[RSVD_FREE] to prevent races between software and
                                                                 hardware changes. This is a two's complement value so subtraction may also be performed. */
        uint64_t reserved_30_63        : 34;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_aw_add_s cn; */
};
typedef union cavm_sso_af_aw_add cavm_sso_af_aw_add_t;

#define CAVM_SSO_AF_AW_ADD CAVM_SSO_AF_AW_ADD_FUNC()
static inline uint64_t CAVM_SSO_AF_AW_ADD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_AW_ADD_FUNC(void)
{
    return 0x840070002080ll;
}

#define typedef_CAVM_SSO_AF_AW_ADD cavm_sso_af_aw_add_t
#define bustype_CAVM_SSO_AF_AW_ADD CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_AW_ADD "SSO_AF_AW_ADD"
#define device_bar_CAVM_SSO_AF_AW_ADD 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_AW_ADD 0
#define arguments_CAVM_SSO_AF_AW_ADD -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_aw_cfg
 *
 * SSO AF Add-Work Configuration Register
 * This register controls the operation of the add-work block (AW).
 */
union cavm_sso_af_aw_cfg
{
    uint64_t u;
    struct cavm_sso_af_aw_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t ocla_bp               : 1;  /**< [  5:  5](R/W) OCLA backpressure enable. When OCLA FIFOs are near full, allow OCLA to backpressure AW pipeline. */
        uint64_t reserved_0_4          : 5;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_4          : 5;
        uint64_t ocla_bp               : 1;  /**< [  5:  5](R/W) OCLA backpressure enable. When OCLA FIFOs are near full, allow OCLA to backpressure AW pipeline. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    struct cavm_sso_af_aw_cfg_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t reserved_8            : 1;
        uint64_t reserved_7            : 1;
        uint64_t reserved_6            : 1;
        uint64_t ocla_bp               : 1;  /**< [  5:  5](R/W) OCLA backpressure enable. When OCLA FIFOs are near full, allow OCLA to backpressure AW pipeline. */
        uint64_t reserved_4            : 1;
        uint64_t reserved_3            : 1;
        uint64_t reserved_2            : 1;
        uint64_t reserved_1            : 1;
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t reserved_1            : 1;
        uint64_t reserved_2            : 1;
        uint64_t reserved_3            : 1;
        uint64_t reserved_4            : 1;
        uint64_t ocla_bp               : 1;  /**< [  5:  5](R/W) OCLA backpressure enable. When OCLA FIFOs are near full, allow OCLA to backpressure AW pipeline. */
        uint64_t reserved_6            : 1;
        uint64_t reserved_7            : 1;
        uint64_t reserved_8            : 1;
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_sso_af_aw_cfg cavm_sso_af_aw_cfg_t;

#define CAVM_SSO_AF_AW_CFG CAVM_SSO_AF_AW_CFG_FUNC()
static inline uint64_t CAVM_SSO_AF_AW_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_AW_CFG_FUNC(void)
{
    return 0x8400700010f0ll;
}

#define typedef_CAVM_SSO_AF_AW_CFG cavm_sso_af_aw_cfg_t
#define bustype_CAVM_SSO_AF_AW_CFG CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_AW_CFG "SSO_AF_AW_CFG"
#define device_bar_CAVM_SSO_AF_AW_CFG 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_AW_CFG 0
#define arguments_CAVM_SSO_AF_AW_CFG -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_aw_dropped_digest#
 *
 * SSO AF 64 Bit Store To ADD_WORK0 Error Summary Registers
 * One bit per HWGRP to indicate which groups have reported an SSO_AF_ERR0[ADDWQ_DROPPED] error.
 */
union cavm_sso_af_aw_dropped_digestx
{
    uint64_t u;
    struct cavm_sso_af_aw_dropped_digestx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1C/H) One bit per HWGRP. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1C/H) One bit per HWGRP. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_aw_dropped_digestx_s cn; */
};
typedef union cavm_sso_af_aw_dropped_digestx cavm_sso_af_aw_dropped_digestx_t;

static inline uint64_t CAVM_SSO_AF_AW_DROPPED_DIGESTX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_AW_DROPPED_DIGESTX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=3))
        return 0x840070900c00ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x840070900c00ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x840070900c00ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x840070900c00ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("SSO_AF_AW_DROPPED_DIGESTX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_AW_DROPPED_DIGESTX(a) cavm_sso_af_aw_dropped_digestx_t
#define bustype_CAVM_SSO_AF_AW_DROPPED_DIGESTX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_AW_DROPPED_DIGESTX(a) "SSO_AF_AW_DROPPED_DIGESTX"
#define device_bar_CAVM_SSO_AF_AW_DROPPED_DIGESTX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_AW_DROPPED_DIGESTX(a) (a)
#define arguments_CAVM_SSO_AF_AW_DROPPED_DIGESTX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_aw_dropped_digest#_w1s
 *
 * SSO AF WQP0 Error Summary Registers
 * This register reads or sets bits.
 */
union cavm_sso_af_aw_dropped_digestx_w1s
{
    uint64_t u;
    struct cavm_sso_af_aw_dropped_digestx_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_AW_DROPPED_DIGEST(0..3)[HWGRP]. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_AW_DROPPED_DIGEST(0..3)[HWGRP]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_aw_dropped_digestx_w1s_s cn10; */
    /* struct cavm_sso_af_aw_dropped_digestx_w1s_s cn10ka; */
    struct cavm_sso_af_aw_dropped_digestx_w1s_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_AW_DROPPED_DIGEST(0..1)[HWGRP]. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_AW_DROPPED_DIGEST(0..1)[HWGRP]. */
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_aw_dropped_digestx_w1s_s cnf10ka; */
    /* struct cavm_sso_af_aw_dropped_digestx_w1s_s cnf10kb; */
};
typedef union cavm_sso_af_aw_dropped_digestx_w1s cavm_sso_af_aw_dropped_digestx_w1s_t;

static inline uint64_t CAVM_SSO_AF_AW_DROPPED_DIGESTX_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_AW_DROPPED_DIGESTX_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=3))
        return 0x840070900d00ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x840070900d00ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x840070900d00ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x840070900d00ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("SSO_AF_AW_DROPPED_DIGESTX_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_AW_DROPPED_DIGESTX_W1S(a) cavm_sso_af_aw_dropped_digestx_w1s_t
#define bustype_CAVM_SSO_AF_AW_DROPPED_DIGESTX_W1S(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_AW_DROPPED_DIGESTX_W1S(a) "SSO_AF_AW_DROPPED_DIGESTX_W1S"
#define device_bar_CAVM_SSO_AF_AW_DROPPED_DIGESTX_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_AW_DROPPED_DIGESTX_W1S(a) (a)
#define arguments_CAVM_SSO_AF_AW_DROPPED_DIGESTX_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_aw_inp_ctl
 *
 * SSO AF Add-Work Input Control Register
 */
union cavm_sso_af_aw_inp_ctl
{
    uint64_t u;
    struct cavm_sso_af_aw_inp_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t wa_dis                : 13; /**< [ 12:  0](R/W) Add-work input disable.  Each bit corresponds to a hardware input queue, and if
                                                                 set add-works from the corresponding coprocessor will be dropped.
                                                                 Bit numbers enumerated by SSO_WA_E. */
#else /* Word 0 - Little Endian */
        uint64_t wa_dis                : 13; /**< [ 12:  0](R/W) Add-work input disable.  Each bit corresponds to a hardware input queue, and if
                                                                 set add-works from the corresponding coprocessor will be dropped.
                                                                 Bit numbers enumerated by SSO_WA_E. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_aw_inp_ctl_s cn; */
};
typedef union cavm_sso_af_aw_inp_ctl cavm_sso_af_aw_inp_ctl_t;

#define CAVM_SSO_AF_AW_INP_CTL CAVM_SSO_AF_AW_INP_CTL_FUNC()
static inline uint64_t CAVM_SSO_AF_AW_INP_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_AW_INP_CTL_FUNC(void)
{
    return 0x840070002070ll;
}

#define typedef_CAVM_SSO_AF_AW_INP_CTL cavm_sso_af_aw_inp_ctl_t
#define bustype_CAVM_SSO_AF_AW_INP_CTL CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_AW_INP_CTL "SSO_AF_AW_INP_CTL"
#define device_bar_CAVM_SSO_AF_AW_INP_CTL 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_AW_INP_CTL 0
#define arguments_CAVM_SSO_AF_AW_INP_CTL -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_aw_read_arb
 *
 * SSO AF Read Arbitration Register
 * This register fine tunes the AW read arbiter and is for diagnostic use.
 */
union cavm_sso_af_aw_read_arb
{
    uint64_t u;
    struct cavm_sso_af_aw_read_arb_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_30_63        : 34;
        uint64_t xaq_lev               : 6;  /**< [ 29: 24](RO/H) Current number of XAQ reads outstanding. */
        uint64_t reserved_21_23        : 3;
        uint64_t xaq_min               : 5;  /**< [ 20: 16](R/W) Number of read slots reserved for XAQ exclusive use. Values \> 16 will result in
                                                                 reducing the maximum number of AW fills in flight. */
        uint64_t reserved_5_15         : 11;
        uint64_t aw_tag_min            : 5;  /**< [  4:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t aw_tag_min            : 5;  /**< [  4:  0](R/W) Reserved. */
        uint64_t reserved_5_15         : 11;
        uint64_t xaq_min               : 5;  /**< [ 20: 16](R/W) Number of read slots reserved for XAQ exclusive use. Values \> 16 will result in
                                                                 reducing the maximum number of AW fills in flight. */
        uint64_t reserved_21_23        : 3;
        uint64_t xaq_lev               : 6;  /**< [ 29: 24](RO/H) Current number of XAQ reads outstanding. */
        uint64_t reserved_30_63        : 34;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_aw_read_arb_s cn; */
};
typedef union cavm_sso_af_aw_read_arb cavm_sso_af_aw_read_arb_t;

#define CAVM_SSO_AF_AW_READ_ARB CAVM_SSO_AF_AW_READ_ARB_FUNC()
static inline uint64_t CAVM_SSO_AF_AW_READ_ARB_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_AW_READ_ARB_FUNC(void)
{
    return 0x840070002090ll;
}

#define typedef_CAVM_SSO_AF_AW_READ_ARB cavm_sso_af_aw_read_arb_t
#define bustype_CAVM_SSO_AF_AW_READ_ARB CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_AW_READ_ARB "SSO_AF_AW_READ_ARB"
#define device_bar_CAVM_SSO_AF_AW_READ_ARB 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_AW_READ_ARB 0
#define arguments_CAVM_SSO_AF_AW_READ_ARB -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_aw_we
 *
 * SSO AF Work-Entries Count Register
 */
union cavm_sso_af_aw_we
{
    uint64_t u;
    struct cavm_sso_af_aw_we_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_30_63        : 34;
        uint64_t rsvd_free             : 14; /**< [ 29: 16](R/W/H) Number of free reserved entries. Used to ensure that each hardware group can get
                                                                 a specific number of entries. Must always be greater than or equal to the sum
                                                                 across all SSO_AF_HWGRP()_IAQ_THR[RSVD_THR], and will generally be equal to that sum
                                                                 unless changes to SSO_AF_HWGRP()_IAQ_THR[RSVD_THR] are going to be made. To
                                                                 prevent races, software should not change this register when SSO is being used;
                                                                 instead use SSO_AF_AW_ADD[RSVD_FREE]. */
        uint64_t reserved_14_15        : 2;
        uint64_t free_cnt              : 14; /**< [ 13:  0](RO/H) Number of total free entries. */
#else /* Word 0 - Little Endian */
        uint64_t free_cnt              : 14; /**< [ 13:  0](RO/H) Number of total free entries. */
        uint64_t reserved_14_15        : 2;
        uint64_t rsvd_free             : 14; /**< [ 29: 16](R/W/H) Number of free reserved entries. Used to ensure that each hardware group can get
                                                                 a specific number of entries. Must always be greater than or equal to the sum
                                                                 across all SSO_AF_HWGRP()_IAQ_THR[RSVD_THR], and will generally be equal to that sum
                                                                 unless changes to SSO_AF_HWGRP()_IAQ_THR[RSVD_THR] are going to be made. To
                                                                 prevent races, software should not change this register when SSO is being used;
                                                                 instead use SSO_AF_AW_ADD[RSVD_FREE]. */
        uint64_t reserved_30_63        : 34;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_aw_we_s cn10; */
    /* struct cavm_sso_af_aw_we_s cn10ka; */
    struct cavm_sso_af_aw_we_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_29_63        : 35;
        uint64_t rsvd_free             : 13; /**< [ 28: 16](R/W/H) Number of free reserved entries. Used to ensure that each hardware group can get
                                                                 a specific number of entries. Must always be greater than or equal to the sum
                                                                 across all SSO_AF_HWGRP()_IAQ_THR[RSVD_THR], and will generally be equal to that sum
                                                                 unless changes to SSO_AF_HWGRP()_IAQ_THR[RSVD_THR] are going to be made. To
                                                                 prevent races, software should not change this register when SSO is being used;
                                                                 instead use SSO_AF_AW_ADD[RSVD_FREE]. */
        uint64_t reserved_13_15        : 3;
        uint64_t free_cnt              : 13; /**< [ 12:  0](RO/H) Number of total free entries. */
#else /* Word 0 - Little Endian */
        uint64_t free_cnt              : 13; /**< [ 12:  0](RO/H) Number of total free entries. */
        uint64_t reserved_13_15        : 3;
        uint64_t rsvd_free             : 13; /**< [ 28: 16](R/W/H) Number of free reserved entries. Used to ensure that each hardware group can get
                                                                 a specific number of entries. Must always be greater than or equal to the sum
                                                                 across all SSO_AF_HWGRP()_IAQ_THR[RSVD_THR], and will generally be equal to that sum
                                                                 unless changes to SSO_AF_HWGRP()_IAQ_THR[RSVD_THR] are going to be made. To
                                                                 prevent races, software should not change this register when SSO is being used;
                                                                 instead use SSO_AF_AW_ADD[RSVD_FREE]. */
        uint64_t reserved_29_63        : 35;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_aw_we_s cnf10ka; */
    /* struct cavm_sso_af_aw_we_s cnf10kb; */
};
typedef union cavm_sso_af_aw_we cavm_sso_af_aw_we_t;

#define CAVM_SSO_AF_AW_WE CAVM_SSO_AF_AW_WE_FUNC()
static inline uint64_t CAVM_SSO_AF_AW_WE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_AW_WE_FUNC(void)
{
    return 0x840070001080ll;
}

#define typedef_CAVM_SSO_AF_AW_WE cavm_sso_af_aw_we_t
#define bustype_CAVM_SSO_AF_AW_WE CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_AW_WE "SSO_AF_AW_WE"
#define device_bar_CAVM_SSO_AF_AW_WE 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_AW_WE 0
#define arguments_CAVM_SSO_AF_AW_WE -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_awempty_digest#
 *
 * SSO AF AWEMPTY Error Summary Registers
 * One bit per HWGRP to indicate which groups have reported an SSO_AF_ERR0[AWEMPTY] error.
 */
union cavm_sso_af_awempty_digestx
{
    uint64_t u;
    struct cavm_sso_af_awempty_digestx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1C/H) One bit per HWGRP. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1C/H) One bit per HWGRP. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_awempty_digestx_s cn; */
};
typedef union cavm_sso_af_awempty_digestx cavm_sso_af_awempty_digestx_t;

static inline uint64_t CAVM_SSO_AF_AWEMPTY_DIGESTX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_AWEMPTY_DIGESTX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=3))
        return 0x840070900800ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x840070900800ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x840070900800ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x840070900800ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("SSO_AF_AWEMPTY_DIGESTX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_AWEMPTY_DIGESTX(a) cavm_sso_af_awempty_digestx_t
#define bustype_CAVM_SSO_AF_AWEMPTY_DIGESTX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_AWEMPTY_DIGESTX(a) "SSO_AF_AWEMPTY_DIGESTX"
#define device_bar_CAVM_SSO_AF_AWEMPTY_DIGESTX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_AWEMPTY_DIGESTX(a) (a)
#define arguments_CAVM_SSO_AF_AWEMPTY_DIGESTX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_awempty_digest#_w1s
 *
 * SSO AF AWEMPTY Error Summary Registers
 * This register reads or sets bits.
 */
union cavm_sso_af_awempty_digestx_w1s
{
    uint64_t u;
    struct cavm_sso_af_awempty_digestx_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_AWEMPTY_DIGEST(0..3)[HWGRP]. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_AWEMPTY_DIGEST(0..3)[HWGRP]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_awempty_digestx_w1s_s cn10; */
    /* struct cavm_sso_af_awempty_digestx_w1s_s cn10ka; */
    struct cavm_sso_af_awempty_digestx_w1s_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_AWEMPTY_DIGEST(0..1)[HWGRP]. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_AWEMPTY_DIGEST(0..1)[HWGRP]. */
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_awempty_digestx_w1s_s cnf10ka; */
    /* struct cavm_sso_af_awempty_digestx_w1s_s cnf10kb; */
};
typedef union cavm_sso_af_awempty_digestx_w1s cavm_sso_af_awempty_digestx_w1s_t;

static inline uint64_t CAVM_SSO_AF_AWEMPTY_DIGESTX_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_AWEMPTY_DIGESTX_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=3))
        return 0x840070900900ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x840070900900ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x840070900900ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x840070900900ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("SSO_AF_AWEMPTY_DIGESTX_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_AWEMPTY_DIGESTX_W1S(a) cavm_sso_af_awempty_digestx_w1s_t
#define bustype_CAVM_SSO_AF_AWEMPTY_DIGESTX_W1S(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_AWEMPTY_DIGESTX_W1S(a) "SSO_AF_AWEMPTY_DIGESTX_W1S"
#define device_bar_CAVM_SSO_AF_AWEMPTY_DIGESTX_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_AWEMPTY_DIGESTX_W1S(a) (a)
#define arguments_CAVM_SSO_AF_AWEMPTY_DIGESTX_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_bad_stash_digest#
 *
 * SSO AF Bad Stash Error Summary Registers
 * One bit per HWGRP to indicate which groups have reported an SSO_AF_ERR0[BAD_STASH] error.
 */
union cavm_sso_af_bad_stash_digestx
{
    uint64_t u;
    struct cavm_sso_af_bad_stash_digestx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1C/H) One bit per HWGRP. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1C/H) One bit per HWGRP. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_bad_stash_digestx_s cn; */
};
typedef union cavm_sso_af_bad_stash_digestx cavm_sso_af_bad_stash_digestx_t;

static inline uint64_t CAVM_SSO_AF_BAD_STASH_DIGESTX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_BAD_STASH_DIGESTX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a<=3))
        return 0x8400702000e0ll + 0x1000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x8400702000e0ll + 0x1000ll * ((a) & 0x1);
    __cavm_csr_fatal("SSO_AF_BAD_STASH_DIGESTX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_BAD_STASH_DIGESTX(a) cavm_sso_af_bad_stash_digestx_t
#define bustype_CAVM_SSO_AF_BAD_STASH_DIGESTX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_BAD_STASH_DIGESTX(a) "SSO_AF_BAD_STASH_DIGESTX"
#define device_bar_CAVM_SSO_AF_BAD_STASH_DIGESTX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_BAD_STASH_DIGESTX(a) (a)
#define arguments_CAVM_SSO_AF_BAD_STASH_DIGESTX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_bad_stash_digest#_w1s
 *
 * SSO AF Bad Stash Error Summary W1S Registers
 * This register reads or sets bits.
 */
union cavm_sso_af_bad_stash_digestx_w1s
{
    uint64_t u;
    struct cavm_sso_af_bad_stash_digestx_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_BAD_STASH_DIGEST(0..3)[HWGRP]. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_BAD_STASH_DIGEST(0..3)[HWGRP]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_bad_stash_digestx_w1s_s cn10; */
    /* struct cavm_sso_af_bad_stash_digestx_w1s_s cn10ka; */
    struct cavm_sso_af_bad_stash_digestx_w1s_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_BAD_STASH_DIGEST(0..1)[HWGRP]. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_BAD_STASH_DIGEST(0..1)[HWGRP]. */
#endif /* Word 0 - End */
    } cn10kb;
};
typedef union cavm_sso_af_bad_stash_digestx_w1s cavm_sso_af_bad_stash_digestx_w1s_t;

static inline uint64_t CAVM_SSO_AF_BAD_STASH_DIGESTX_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_BAD_STASH_DIGESTX_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a<=3))
        return 0x8400702000f0ll + 0x1000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x8400702000f0ll + 0x1000ll * ((a) & 0x1);
    __cavm_csr_fatal("SSO_AF_BAD_STASH_DIGESTX_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_BAD_STASH_DIGESTX_W1S(a) cavm_sso_af_bad_stash_digestx_w1s_t
#define bustype_CAVM_SSO_AF_BAD_STASH_DIGESTX_W1S(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_BAD_STASH_DIGESTX_W1S(a) "SSO_AF_BAD_STASH_DIGESTX_W1S"
#define device_bar_CAVM_SSO_AF_BAD_STASH_DIGESTX_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_BAD_STASH_DIGESTX_W1S(a) (a)
#define arguments_CAVM_SSO_AF_BAD_STASH_DIGESTX_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_bar2_alias#
 *
 * SSO Admin Function  BAR2 Alias Registers
 * These registers alias to the SSO BAR2 registers for the PF and function
 * selected by SSO_AF_BAR2_SEL[PF_FUNC].
 */
union cavm_sso_af_bar2_aliasx
{
    uint64_t u;
    struct cavm_sso_af_bar2_aliasx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Aliased register data. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Aliased register data. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_bar2_aliasx_s cn; */
};
typedef union cavm_sso_af_bar2_aliasx cavm_sso_af_bar2_aliasx_t;

static inline uint64_t CAVM_SSO_AF_BAR2_ALIASX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_BAR2_ALIASX(uint64_t a)
{
    if (a<=131071)
        return 0x840079100000ll + 8ll * ((a) & 0x1ffff);
    __cavm_csr_fatal("SSO_AF_BAR2_ALIASX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_BAR2_ALIASX(a) cavm_sso_af_bar2_aliasx_t
#define bustype_CAVM_SSO_AF_BAR2_ALIASX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_BAR2_ALIASX(a) "SSO_AF_BAR2_ALIASX"
#define device_bar_CAVM_SSO_AF_BAR2_ALIASX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_BAR2_ALIASX(a) (a)
#define arguments_CAVM_SSO_AF_BAR2_ALIASX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_bar2_sel
 *
 * SSO Admin Function BAR2 Select Register
 * This register configures BAR2 accesses from the SSO_AF_BAR2_ALIAS() registers in BAR0.
 */
union cavm_sso_af_bar2_sel
{
    uint64_t u;
    struct cavm_sso_af_bar2_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t alias_ena             : 1;  /**< [ 16: 16](R/W) Enable BAR2 register accesses from the AF BAR2 alias registers in BAR0. */
        uint64_t alias_pf_func         : 16; /**< [ 15:  0](R/W) PF and function whose BAR2 registers may be accessed from the AF BAR2 alias
                                                                 registers. Format specified by RVU_PF_FUNC_S. */
#else /* Word 0 - Little Endian */
        uint64_t alias_pf_func         : 16; /**< [ 15:  0](R/W) PF and function whose BAR2 registers may be accessed from the AF BAR2 alias
                                                                 registers. Format specified by RVU_PF_FUNC_S. */
        uint64_t alias_ena             : 1;  /**< [ 16: 16](R/W) Enable BAR2 register accesses from the AF BAR2 alias registers in BAR0. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_bar2_sel_s cn; */
};
typedef union cavm_sso_af_bar2_sel cavm_sso_af_bar2_sel_t;

#define CAVM_SSO_AF_BAR2_SEL CAVM_SSO_AF_BAR2_SEL_FUNC()
static inline uint64_t CAVM_SSO_AF_BAR2_SEL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_BAR2_SEL_FUNC(void)
{
    return 0x840079000000ll;
}

#define typedef_CAVM_SSO_AF_BAR2_SEL cavm_sso_af_bar2_sel_t
#define bustype_CAVM_SSO_AF_BAR2_SEL CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_BAR2_SEL "SSO_AF_BAR2_SEL"
#define device_bar_CAVM_SSO_AF_BAR2_SEL 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_BAR2_SEL 0
#define arguments_CAVM_SSO_AF_BAR2_SEL -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_bfp_digest#
 *
 * SSO AF BFP Error Summary Registers
 * One bit per HWGRP to indicate which groups have reported an SSO_AF_ERR0[BFP] error.
 */
union cavm_sso_af_bfp_digestx
{
    uint64_t u;
    struct cavm_sso_af_bfp_digestx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1C/H) One bit per HWGRP. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1C/H) One bit per HWGRP. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_bfp_digestx_s cn; */
};
typedef union cavm_sso_af_bfp_digestx cavm_sso_af_bfp_digestx_t;

static inline uint64_t CAVM_SSO_AF_BFP_DIGESTX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_BFP_DIGESTX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=3))
        return 0x840070900200ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x840070900200ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x840070900200ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x840070900200ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("SSO_AF_BFP_DIGESTX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_BFP_DIGESTX(a) cavm_sso_af_bfp_digestx_t
#define bustype_CAVM_SSO_AF_BFP_DIGESTX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_BFP_DIGESTX(a) "SSO_AF_BFP_DIGESTX"
#define device_bar_CAVM_SSO_AF_BFP_DIGESTX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_BFP_DIGESTX(a) (a)
#define arguments_CAVM_SSO_AF_BFP_DIGESTX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_bfp_digest#_w1s
 *
 * SSO AF BFP Error Summary Registers
 * This register reads or sets bits.
 */
union cavm_sso_af_bfp_digestx_w1s
{
    uint64_t u;
    struct cavm_sso_af_bfp_digestx_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_BFP_DIGEST(0..3)[HWGRP]. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_BFP_DIGEST(0..3)[HWGRP]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_bfp_digestx_w1s_s cn10; */
    /* struct cavm_sso_af_bfp_digestx_w1s_s cn10ka; */
    struct cavm_sso_af_bfp_digestx_w1s_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_BFP_DIGEST(0..1)[HWGRP]. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_BFP_DIGEST(0..1)[HWGRP]. */
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_bfp_digestx_w1s_s cnf10ka; */
    /* struct cavm_sso_af_bfp_digestx_w1s_s cnf10kb; */
};
typedef union cavm_sso_af_bfp_digestx_w1s cavm_sso_af_bfp_digestx_w1s_t;

static inline uint64_t CAVM_SSO_AF_BFP_DIGESTX_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_BFP_DIGESTX_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=3))
        return 0x840070900300ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x840070900300ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x840070900300ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x840070900300ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("SSO_AF_BFP_DIGESTX_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_BFP_DIGESTX_W1S(a) cavm_sso_af_bfp_digestx_w1s_t
#define bustype_CAVM_SSO_AF_BFP_DIGESTX_W1S(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_BFP_DIGESTX_W1S(a) "SSO_AF_BFP_DIGESTX_W1S"
#define device_bar_CAVM_SSO_AF_BFP_DIGESTX_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_BFP_DIGESTX_W1S(a) (a)
#define arguments_CAVM_SSO_AF_BFP_DIGESTX_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_bfpn_digest#
 *
 * SSO AF BFP Error Summary Registers
 * One bit per HWGRP to indicate which groups have reported an SSO_AF_ERR0[BFPN] error.
 */
union cavm_sso_af_bfpn_digestx
{
    uint64_t u;
    struct cavm_sso_af_bfpn_digestx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1C/H) One bit per HWGRP. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1C/H) One bit per HWGRP. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_bfpn_digestx_s cn; */
};
typedef union cavm_sso_af_bfpn_digestx cavm_sso_af_bfpn_digestx_t;

static inline uint64_t CAVM_SSO_AF_BFPN_DIGESTX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_BFPN_DIGESTX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=3))
        return 0x840070900400ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x840070900400ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x840070900400ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x840070900400ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("SSO_AF_BFPN_DIGESTX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_BFPN_DIGESTX(a) cavm_sso_af_bfpn_digestx_t
#define bustype_CAVM_SSO_AF_BFPN_DIGESTX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_BFPN_DIGESTX(a) "SSO_AF_BFPN_DIGESTX"
#define device_bar_CAVM_SSO_AF_BFPN_DIGESTX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_BFPN_DIGESTX(a) (a)
#define arguments_CAVM_SSO_AF_BFPN_DIGESTX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_bfpn_digest#_w1s
 *
 * SSO AF BFPN Error Summary Registers
 * This register reads or sets bits.
 */
union cavm_sso_af_bfpn_digestx_w1s
{
    uint64_t u;
    struct cavm_sso_af_bfpn_digestx_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_BFPN_DIGEST(0..3)[HWGRP]. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_BFPN_DIGEST(0..3)[HWGRP]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_bfpn_digestx_w1s_s cn10; */
    /* struct cavm_sso_af_bfpn_digestx_w1s_s cn10ka; */
    struct cavm_sso_af_bfpn_digestx_w1s_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_BFPN_DIGEST(0..1)[HWGRP]. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_BFPN_DIGEST(0..1)[HWGRP]. */
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_bfpn_digestx_w1s_s cnf10ka; */
    /* struct cavm_sso_af_bfpn_digestx_w1s_s cnf10kb; */
};
typedef union cavm_sso_af_bfpn_digestx_w1s cavm_sso_af_bfpn_digestx_w1s_t;

static inline uint64_t CAVM_SSO_AF_BFPN_DIGESTX_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_BFPN_DIGESTX_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=3))
        return 0x840070900500ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x840070900500ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x840070900500ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x840070900500ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("SSO_AF_BFPN_DIGESTX_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_BFPN_DIGESTX_W1S(a) cavm_sso_af_bfpn_digestx_w1s_t
#define bustype_CAVM_SSO_AF_BFPN_DIGESTX_W1S(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_BFPN_DIGESTX_W1S(a) "SSO_AF_BFPN_DIGESTX_W1S"
#define device_bar_CAVM_SSO_AF_BFPN_DIGESTX_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_BFPN_DIGESTX_W1S(a) (a)
#define arguments_CAVM_SSO_AF_BFPN_DIGESTX_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_blk_rst
 *
 * SSO AF Block Reset Register
 * Writing a 1 to SSO_AF_BLK_RST[RST] resets the SSO. After receiving a store to this CSR, the SSO
 * must not be sent any other operations for 16,000 coprocessor (SCLK) cycles. Note that the
 * contents of this register are reset along with the rest of the SSO.
 */
union cavm_sso_af_blk_rst
{
    uint64_t u;
    struct cavm_sso_af_blk_rst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t busy                  : 1;  /**< [ 63: 63](RO/H) Initialization in progress. After reset asserts, SSO will set this bit until internal
                                                                 structures are initialized. This bit must read as zero before any configuration may be
                                                                 done. */
        uint64_t reserved_1_62         : 62;
        uint64_t rst                   : 1;  /**< [  0:  0](WO) Write one to reset the block, except for privileged AF registers in PF BAR0
                                                                 (SSO_PRIV_*). Software must ensure that all block activity is quiesced before
                                                                 writing 1. */
#else /* Word 0 - Little Endian */
        uint64_t rst                   : 1;  /**< [  0:  0](WO) Write one to reset the block, except for privileged AF registers in PF BAR0
                                                                 (SSO_PRIV_*). Software must ensure that all block activity is quiesced before
                                                                 writing 1. */
        uint64_t reserved_1_62         : 62;
        uint64_t busy                  : 1;  /**< [ 63: 63](RO/H) Initialization in progress. After reset asserts, SSO will set this bit until internal
                                                                 structures are initialized. This bit must read as zero before any configuration may be
                                                                 done. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_blk_rst_s cn; */
};
typedef union cavm_sso_af_blk_rst cavm_sso_af_blk_rst_t;

#define CAVM_SSO_AF_BLK_RST CAVM_SSO_AF_BLK_RST_FUNC()
static inline uint64_t CAVM_SSO_AF_BLK_RST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_BLK_RST_FUNC(void)
{
    return 0x8400700010f8ll;
}

#define typedef_CAVM_SSO_AF_BLK_RST cavm_sso_af_blk_rst_t
#define bustype_CAVM_SSO_AF_BLK_RST CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_BLK_RST "SSO_AF_BLK_RST"
#define device_bar_CAVM_SSO_AF_BLK_RST 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_BLK_RST 0
#define arguments_CAVM_SSO_AF_BLK_RST -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_const
 *
 * SSO AF Constants Register
 * This register contains constants for software discovery.
 */
union cavm_sso_af_const
{
    uint64_t u;
    struct cavm_sso_af_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hws                   : 8;  /**< [ 63: 56](RO) Number of hardware workslots. */
        uint64_t taq_b                 : 8;  /**< [ 55: 48](RO) Number of TAQ entries per line.  Multiply [TAQ_A] times [TAQ_B] to find total entries.
                                                                 A value of 0x0 should be interpreted to mean 0xb. */
        uint64_t taq_a                 : 16; /**< [ 47: 32](RO) Number of TAQ lines.  Multiply [TAQ_A] times [TAQ_B] to find total entries. */
        uint64_t iue                   : 16; /**< [ 31: 16](RO) Number of in-unit entries. */
        uint64_t grp                   : 16; /**< [ 15:  0](RO) Number of hardware groups. */
#else /* Word 0 - Little Endian */
        uint64_t grp                   : 16; /**< [ 15:  0](RO) Number of hardware groups. */
        uint64_t iue                   : 16; /**< [ 31: 16](RO) Number of in-unit entries. */
        uint64_t taq_a                 : 16; /**< [ 47: 32](RO) Number of TAQ lines.  Multiply [TAQ_A] times [TAQ_B] to find total entries. */
        uint64_t taq_b                 : 8;  /**< [ 55: 48](RO) Number of TAQ entries per line.  Multiply [TAQ_A] times [TAQ_B] to find total entries.
                                                                 A value of 0x0 should be interpreted to mean 0xb. */
        uint64_t hws                   : 8;  /**< [ 63: 56](RO) Number of hardware workslots. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_const_s cn; */
};
typedef union cavm_sso_af_const cavm_sso_af_const_t;

#define CAVM_SSO_AF_CONST CAVM_SSO_AF_CONST_FUNC()
static inline uint64_t CAVM_SSO_AF_CONST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_CONST_FUNC(void)
{
    return 0x840070001000ll;
}

#define typedef_CAVM_SSO_AF_CONST cavm_sso_af_const_t
#define bustype_CAVM_SSO_AF_CONST CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_CONST "SSO_AF_CONST"
#define device_bar_CAVM_SSO_AF_CONST 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_CONST 0
#define arguments_CAVM_SSO_AF_CONST -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_const1
 *
 * SSO AF Constants Register 1
 * This register contains constants for software discovery.
 */
union cavm_sso_af_const1
{
    uint64_t u;
    struct cavm_sso_af_const1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t exp_inv_rsp           : 8;  /**< [ 47: 40](RO/H) Number of expected INVAL ACK responses on a SAI_FLUSH. */
        uint64_t reserved_39           : 1;
        uint64_t hw_flr                : 1;  /**< [ 38: 38](RO) Indicates that the WS hardware FLR logic is present. */
        uint64_t prf_present           : 1;  /**< [ 37: 37](RO) Indicates that GET_WORK prefetch feature is present. */
        uint64_t lsw_present           : 1;  /**< [ 36: 36](RO) Indicates that LSW feature is present. */
        uint64_t no_alloc_we           : 1;  /**< [ 35: 35](RO) Indicates that ALLOC_WE operations are not supported. */
        uint64_t no_nsched             : 1;  /**< [ 34: 34](RO) Indicates that Noschedule operations are not supported. */
        uint64_t no_gwi                : 1;  /**< [ 33: 33](RO) Indicates that indexed GET_WORK requests are not supported. */
        uint64_t fwd                   : 1;  /**< [ 32: 32](RO) Indicates that SSO supports forwarding groups. */
        uint64_t xae_waes              : 16; /**< [ 31: 16](RO) Number of WAEs (work entries) in a XAQ buffer. */
        uint64_t xaq_buf_size          : 16; /**< [ 15:  0](RO) Number of bytes in a XAQ buffer. */
#else /* Word 0 - Little Endian */
        uint64_t xaq_buf_size          : 16; /**< [ 15:  0](RO) Number of bytes in a XAQ buffer. */
        uint64_t xae_waes              : 16; /**< [ 31: 16](RO) Number of WAEs (work entries) in a XAQ buffer. */
        uint64_t fwd                   : 1;  /**< [ 32: 32](RO) Indicates that SSO supports forwarding groups. */
        uint64_t no_gwi                : 1;  /**< [ 33: 33](RO) Indicates that indexed GET_WORK requests are not supported. */
        uint64_t no_nsched             : 1;  /**< [ 34: 34](RO) Indicates that Noschedule operations are not supported. */
        uint64_t no_alloc_we           : 1;  /**< [ 35: 35](RO) Indicates that ALLOC_WE operations are not supported. */
        uint64_t lsw_present           : 1;  /**< [ 36: 36](RO) Indicates that LSW feature is present. */
        uint64_t prf_present           : 1;  /**< [ 37: 37](RO) Indicates that GET_WORK prefetch feature is present. */
        uint64_t hw_flr                : 1;  /**< [ 38: 38](RO) Indicates that the WS hardware FLR logic is present. */
        uint64_t reserved_39           : 1;
        uint64_t exp_inv_rsp           : 8;  /**< [ 47: 40](RO/H) Number of expected INVAL ACK responses on a SAI_FLUSH. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_const1_s cn10; */
    struct cavm_sso_af_const1_cn10ka_p1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t exp_inv_rsp           : 8;  /**< [ 47: 40](RO/H) Number of expected INVAL ACK responses on a SAI_FLUSH. */
        uint64_t reserved_38_39        : 2;
        uint64_t prf_present           : 1;  /**< [ 37: 37](RO) Indicates that GET_WORK prefetch feature is present. */
        uint64_t lsw_present           : 1;  /**< [ 36: 36](RO) Indicates that LSW feature is present. */
        uint64_t no_alloc_we           : 1;  /**< [ 35: 35](RO) Indicates that ALLOC_WE operations are not supported. */
        uint64_t no_nsched             : 1;  /**< [ 34: 34](RO) Indicates that Noschedule operations are not supported. */
        uint64_t no_gwi                : 1;  /**< [ 33: 33](RO) Indicates that indexed GET_WORK requests are not supported. */
        uint64_t fwd                   : 1;  /**< [ 32: 32](RO) Indicates that SSO supports forwarding groups. */
        uint64_t xae_waes              : 16; /**< [ 31: 16](RO) Number of WAEs (work entries) in a XAQ buffer. */
        uint64_t xaq_buf_size          : 16; /**< [ 15:  0](RO) Number of bytes in a XAQ buffer. */
#else /* Word 0 - Little Endian */
        uint64_t xaq_buf_size          : 16; /**< [ 15:  0](RO) Number of bytes in a XAQ buffer. */
        uint64_t xae_waes              : 16; /**< [ 31: 16](RO) Number of WAEs (work entries) in a XAQ buffer. */
        uint64_t fwd                   : 1;  /**< [ 32: 32](RO) Indicates that SSO supports forwarding groups. */
        uint64_t no_gwi                : 1;  /**< [ 33: 33](RO) Indicates that indexed GET_WORK requests are not supported. */
        uint64_t no_nsched             : 1;  /**< [ 34: 34](RO) Indicates that Noschedule operations are not supported. */
        uint64_t no_alloc_we           : 1;  /**< [ 35: 35](RO) Indicates that ALLOC_WE operations are not supported. */
        uint64_t lsw_present           : 1;  /**< [ 36: 36](RO) Indicates that LSW feature is present. */
        uint64_t prf_present           : 1;  /**< [ 37: 37](RO) Indicates that GET_WORK prefetch feature is present. */
        uint64_t reserved_38_39        : 2;
        uint64_t exp_inv_rsp           : 8;  /**< [ 47: 40](RO/H) Number of expected INVAL ACK responses on a SAI_FLUSH. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } cn10ka_p1;
    /* struct cavm_sso_af_const1_s cn10ka_p2; */
    /* struct cavm_sso_af_const1_s cn10kb; */
    /* struct cavm_sso_af_const1_cn10ka_p1 cnf10ka; */
    /* struct cavm_sso_af_const1_cn10ka_p1 cnf10kb; */
};
typedef union cavm_sso_af_const1 cavm_sso_af_const1_t;

#define CAVM_SSO_AF_CONST1 CAVM_SSO_AF_CONST1_FUNC()
static inline uint64_t CAVM_SSO_AF_CONST1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_CONST1_FUNC(void)
{
    return 0x840070001008ll;
}

#define typedef_CAVM_SSO_AF_CONST1 cavm_sso_af_const1_t
#define bustype_CAVM_SSO_AF_CONST1 CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_CONST1 "SSO_AF_CONST1"
#define device_bar_CAVM_SSO_AF_CONST1 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_CONST1 0
#define arguments_CAVM_SSO_AF_CONST1 -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_err0
 *
 * SSO AF_PF Error 0 Register
 * This register contains ECC and other miscellaneous error bits.
 */
union cavm_sso_af_err0
{
    uint64_t u;
    struct cavm_sso_af_err0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t bad_stash             : 1;  /**< [ 16: 16](R/W1C/H) Fault when performing a stash request. */
        uint64_t bfpp                  : 1;  /**< [ 15: 15](R/W1C/H) Bad-fill-packet NCB error. NCB detected poison on fill data.  Any
                                                                 groups that experience this error are reported in SSO_AF_POISON(). */
        uint64_t flr_aq_cnt            : 1;  /**< [ 14: 14](R/W1C/H) An FLR was initiated, but SSO_LF_GGRP_AQ_CNT[AQ_CNT] != 0.  Any groups
                                                                 reporting this error are indicated in SSO_AF_FLR_AQ_DIGEST(). */
        uint64_t addwq_dropped_xaqen   : 1;  /**< [ 13: 13](R/W1C/H) Add work dropped due to XAQ pointers not yet initialized.  Any groups
                                                                 reporting this error are indicated in SSO_AF_XAQDIS_DIGEST(). */
        uint64_t ggrp_multi            : 1;  /**< [ 12: 12](R/W1C/H) PF_FUNC map had double-hit error. Set when a load or store accesses an
                                                                 SSO LF register in BAR2 and SSO_PRIV_LF()_HWGRP_CFG has a double hit.
                                                                 When a request thus dropped, even if this bit is already set,
                                                                 SSO_AF_UNMAP_INFO is loaded. */
        uint64_t ggrp_unmap            : 1;  /**< [ 11: 11](R/W1C/H) PF_FUNC mapping not found error. Set when a load or store accesses an
                                                                 SSO LF register in BAR2 and SSO_PRIV_LF()_HWGRP_CFG does not have any
                                                                 matching entry.  When a request thus dropped, even if this bit is
                                                                 already set, SSO_AF_UNMAP_INFO is loaded. */
        uint64_t aw_multi              : 1;  /**< [ 10: 10](R/W1C/H) PF_FUNC map had double-hit error. Set when a coprocessor add-work is
                                                                 dropped due to SSO_PRIV_LF()_HWGRP_CFG having a double hit.
                                                                 When a request thus dropped, even if this bit is already set,
                                                                 SSO_AF_UNMAP_INFO is loaded. */
        uint64_t aw_unmap              : 1;  /**< [  9:  9](R/W1C/H) PF_FUNC mapping not found error. Set when a coprocessor add-work is
                                                                 dropped due to SSO_PRIV_LF()_HWGRP_CFG not having any matching mapping.
                                                                 When a request thus dropped, even if this bit is already set,
                                                                 SSO_AF_UNMAP_INFO is loaded. */
        uint64_t addwq_dropped_qctldis : 1;  /**< [  8:  8](R/W1C/H) Add work dropped due to QTL being disabled, 0x0.  Any groups that
                                                                 experience this error are reported in SSO_AF_QCTLDIS_DIGEST(). */
        uint64_t addwq_dropped_wqp0    : 1;  /**< [  7:  7](R/W1C/H) Add work dropped due to WQP being 0x0.  Any groups that experience
                                                                 this error are reported in SSO_AF_WQP0_DIGEST(). */
        uint64_t addwq_dropped         : 1;  /**< [  6:  6](R/W1C/H) Add work dropped due to 64 bit write to SSO_LF_GGRP_OP_ADD_WORK0. */
        uint64_t awempty               : 1;  /**< [  5:  5](R/W1C/H) Set when received add work with tag type is specified as EMPTY, or when
                                                                 SSO_AF_AW_INP_CTL[WA_DIS] is set and work is added from disabled coprocessor. */
        uint64_t grpdis                : 1;  /**< [  4:  4](R/W1C/H) Add work to disabled hardware group. An ADDWQ was received and dropped
                                                                 to a hardware group with SSO_AF_HWGRP()_IAQ_THR[RSVD_THR] = 0.  Any
                                                                 groups that experience this error are reported in
                                                                 SSO_AF_GRPDIS_DIGEST(). */
        uint64_t bfpn                  : 1;  /**< [  3:  3](R/W1C/H) Bad-fill-packet NCB error. NCB detected error on fill or spill data.
                                                                 Any groups that experience this error are reported in
                                                                 SSO_AF_BFPN_DIGEST(). */
        uint64_t bfp                   : 1;  /**< [  2:  2](R/W1C/H) Bad-fill-packet error. The WAE CRC field was incorrect, or the XAQ
                                                                 next address was zero.  Any groups that experience this error are
                                                                 reported in SSO_AF_BFP_DIGEST(). */
        uint64_t npa                   : 1;  /**< [  1:  1](R/W1C/H) The NPA returned an error indication.  Any groups that experience this
                                                                 error are reported in SSO_AF_NPA_DIGEST().
                                                                 During the initialization phase, failure will be reported when receiving
                                                                 more than 3 null pointer errors for the same group,
                                                                 see SSO_AF_HWGRP()_AW_STATUS[INIT_FAIL]. Once initialization has
                                                                 completed, any subsequent NPA errors will be reported immediately,
                                                                 with no retries.  XAQ operation for the errored group will be disabled
                                                                 after NPA failures, see SSO_AF_HWGRP()_AW_CFG[RWEN]. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t npa                   : 1;  /**< [  1:  1](R/W1C/H) The NPA returned an error indication.  Any groups that experience this
                                                                 error are reported in SSO_AF_NPA_DIGEST().
                                                                 During the initialization phase, failure will be reported when receiving
                                                                 more than 3 null pointer errors for the same group,
                                                                 see SSO_AF_HWGRP()_AW_STATUS[INIT_FAIL]. Once initialization has
                                                                 completed, any subsequent NPA errors will be reported immediately,
                                                                 with no retries.  XAQ operation for the errored group will be disabled
                                                                 after NPA failures, see SSO_AF_HWGRP()_AW_CFG[RWEN]. */
        uint64_t bfp                   : 1;  /**< [  2:  2](R/W1C/H) Bad-fill-packet error. The WAE CRC field was incorrect, or the XAQ
                                                                 next address was zero.  Any groups that experience this error are
                                                                 reported in SSO_AF_BFP_DIGEST(). */
        uint64_t bfpn                  : 1;  /**< [  3:  3](R/W1C/H) Bad-fill-packet NCB error. NCB detected error on fill or spill data.
                                                                 Any groups that experience this error are reported in
                                                                 SSO_AF_BFPN_DIGEST(). */
        uint64_t grpdis                : 1;  /**< [  4:  4](R/W1C/H) Add work to disabled hardware group. An ADDWQ was received and dropped
                                                                 to a hardware group with SSO_AF_HWGRP()_IAQ_THR[RSVD_THR] = 0.  Any
                                                                 groups that experience this error are reported in
                                                                 SSO_AF_GRPDIS_DIGEST(). */
        uint64_t awempty               : 1;  /**< [  5:  5](R/W1C/H) Set when received add work with tag type is specified as EMPTY, or when
                                                                 SSO_AF_AW_INP_CTL[WA_DIS] is set and work is added from disabled coprocessor. */
        uint64_t addwq_dropped         : 1;  /**< [  6:  6](R/W1C/H) Add work dropped due to 64 bit write to SSO_LF_GGRP_OP_ADD_WORK0. */
        uint64_t addwq_dropped_wqp0    : 1;  /**< [  7:  7](R/W1C/H) Add work dropped due to WQP being 0x0.  Any groups that experience
                                                                 this error are reported in SSO_AF_WQP0_DIGEST(). */
        uint64_t addwq_dropped_qctldis : 1;  /**< [  8:  8](R/W1C/H) Add work dropped due to QTL being disabled, 0x0.  Any groups that
                                                                 experience this error are reported in SSO_AF_QCTLDIS_DIGEST(). */
        uint64_t aw_unmap              : 1;  /**< [  9:  9](R/W1C/H) PF_FUNC mapping not found error. Set when a coprocessor add-work is
                                                                 dropped due to SSO_PRIV_LF()_HWGRP_CFG not having any matching mapping.
                                                                 When a request thus dropped, even if this bit is already set,
                                                                 SSO_AF_UNMAP_INFO is loaded. */
        uint64_t aw_multi              : 1;  /**< [ 10: 10](R/W1C/H) PF_FUNC map had double-hit error. Set when a coprocessor add-work is
                                                                 dropped due to SSO_PRIV_LF()_HWGRP_CFG having a double hit.
                                                                 When a request thus dropped, even if this bit is already set,
                                                                 SSO_AF_UNMAP_INFO is loaded. */
        uint64_t ggrp_unmap            : 1;  /**< [ 11: 11](R/W1C/H) PF_FUNC mapping not found error. Set when a load or store accesses an
                                                                 SSO LF register in BAR2 and SSO_PRIV_LF()_HWGRP_CFG does not have any
                                                                 matching entry.  When a request thus dropped, even if this bit is
                                                                 already set, SSO_AF_UNMAP_INFO is loaded. */
        uint64_t ggrp_multi            : 1;  /**< [ 12: 12](R/W1C/H) PF_FUNC map had double-hit error. Set when a load or store accesses an
                                                                 SSO LF register in BAR2 and SSO_PRIV_LF()_HWGRP_CFG has a double hit.
                                                                 When a request thus dropped, even if this bit is already set,
                                                                 SSO_AF_UNMAP_INFO is loaded. */
        uint64_t addwq_dropped_xaqen   : 1;  /**< [ 13: 13](R/W1C/H) Add work dropped due to XAQ pointers not yet initialized.  Any groups
                                                                 reporting this error are indicated in SSO_AF_XAQDIS_DIGEST(). */
        uint64_t flr_aq_cnt            : 1;  /**< [ 14: 14](R/W1C/H) An FLR was initiated, but SSO_LF_GGRP_AQ_CNT[AQ_CNT] != 0.  Any groups
                                                                 reporting this error are indicated in SSO_AF_FLR_AQ_DIGEST(). */
        uint64_t bfpp                  : 1;  /**< [ 15: 15](R/W1C/H) Bad-fill-packet NCB error. NCB detected poison on fill data.  Any
                                                                 groups that experience this error are reported in SSO_AF_POISON(). */
        uint64_t bad_stash             : 1;  /**< [ 16: 16](R/W1C/H) Fault when performing a stash request. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_err0_s cn10; */
    struct cavm_sso_af_err0_cn10ka_p1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t bfpp                  : 1;  /**< [ 15: 15](R/W1C/H) Bad-fill-packet NCB error. NCB detected poison on fill data.  Any
                                                                 groups that experience this error are reported in SSO_AF_POISON(). */
        uint64_t flr_aq_cnt            : 1;  /**< [ 14: 14](R/W1C/H) An FLR was initiated, but SSO_LF_GGRP_AQ_CNT[AQ_CNT] != 0.  Any groups
                                                                 reporting this error are indicated in SSO_AF_FLR_AQ_DIGEST(). */
        uint64_t addwq_dropped_xaqen   : 1;  /**< [ 13: 13](R/W1C/H) Add work dropped due to XAQ pointers not yet initialized.  Any groups
                                                                 reporting this error are indicated in SSO_AF_XAQDIS_DIGEST(). */
        uint64_t ggrp_multi            : 1;  /**< [ 12: 12](R/W1C/H) PF_FUNC map had double-hit error. Set when a load or store accesses an
                                                                 SSO LF register in BAR2 and SSO_PRIV_LF()_HWGRP_CFG has a double hit.
                                                                 When a request thus dropped, even if this bit is already set,
                                                                 SSO_AF_UNMAP_INFO is loaded. */
        uint64_t ggrp_unmap            : 1;  /**< [ 11: 11](R/W1C/H) PF_FUNC mapping not found error. Set when a load or store accesses an
                                                                 SSO LF register in BAR2 and SSO_PRIV_LF()_HWGRP_CFG does not have any
                                                                 matching entry.  When a request thus dropped, even if this bit is
                                                                 already set, SSO_AF_UNMAP_INFO is loaded. */
        uint64_t aw_multi              : 1;  /**< [ 10: 10](R/W1C/H) PF_FUNC map had double-hit error. Set when a coprocessor add-work is
                                                                 dropped due to SSO_PRIV_LF()_HWGRP_CFG having a double hit.
                                                                 When a request thus dropped, even if this bit is already set,
                                                                 SSO_AF_UNMAP_INFO is loaded. */
        uint64_t aw_unmap              : 1;  /**< [  9:  9](R/W1C/H) PF_FUNC mapping not found error. Set when a coprocessor add-work is
                                                                 dropped due to SSO_PRIV_LF()_HWGRP_CFG not having any matching mapping.
                                                                 When a request thus dropped, even if this bit is already set,
                                                                 SSO_AF_UNMAP_INFO is loaded. */
        uint64_t addwq_dropped_qctldis : 1;  /**< [  8:  8](R/W1C/H) Add work dropped due to QTL being disabled, 0x0.  Any groups that
                                                                 experience this error are reported in SSO_AF_QCTLDIS_DIGEST(). */
        uint64_t addwq_dropped_wqp0    : 1;  /**< [  7:  7](R/W1C/H) Add work dropped due to WQP being 0x0.  Any groups that experience
                                                                 this error are reported in SSO_AF_WQP0_DIGEST(). */
        uint64_t addwq_dropped         : 1;  /**< [  6:  6](R/W1C/H) Add work dropped due to 64 bit write to SSO_LF_GGRP_OP_ADD_WORK0. */
        uint64_t awempty               : 1;  /**< [  5:  5](R/W1C/H) Set when received add work with tag type is specified as EMPTY, or when
                                                                 SSO_AF_AW_INP_CTL[WA_DIS] is set and work is added from disabled coprocessor. */
        uint64_t grpdis                : 1;  /**< [  4:  4](R/W1C/H) Add work to disabled hardware group. An ADDWQ was received and dropped
                                                                 to a hardware group with SSO_AF_HWGRP()_IAQ_THR[RSVD_THR] = 0.  Any
                                                                 groups that experience this error are reported in
                                                                 SSO_AF_GRPDIS_DIGEST(). */
        uint64_t bfpn                  : 1;  /**< [  3:  3](R/W1C/H) Bad-fill-packet NCB error. NCB detected error on fill or spill data.
                                                                 Any groups that experience this error are reported in
                                                                 SSO_AF_BFPN_DIGEST(). */
        uint64_t bfp                   : 1;  /**< [  2:  2](R/W1C/H) Bad-fill-packet error. The WAE CRC field was incorrect, or the XAQ
                                                                 next address was zero.  Any groups that experience this error are
                                                                 reported in SSO_AF_BFP_DIGEST(). */
        uint64_t npa                   : 1;  /**< [  1:  1](R/W1C/H) The NPA returned an error indication.  Any groups that experience this
                                                                 error are reported in SSO_AF_NPA_DIGEST().
                                                                 During the initialization phase, failure will be reported when receiving
                                                                 more than 3 null pointer errors for the same group,
                                                                 see SSO_AF_HWGRP()_AW_STATUS[INIT_FAIL]. Once initialization has
                                                                 completed, any subsequent NPA errors will be reported immediately,
                                                                 with no retries.  XAQ operation for the errored group will be disabled
                                                                 after NPA failures, see SSO_AF_HWGRP()_AW_CFG[RWEN]. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t npa                   : 1;  /**< [  1:  1](R/W1C/H) The NPA returned an error indication.  Any groups that experience this
                                                                 error are reported in SSO_AF_NPA_DIGEST().
                                                                 During the initialization phase, failure will be reported when receiving
                                                                 more than 3 null pointer errors for the same group,
                                                                 see SSO_AF_HWGRP()_AW_STATUS[INIT_FAIL]. Once initialization has
                                                                 completed, any subsequent NPA errors will be reported immediately,
                                                                 with no retries.  XAQ operation for the errored group will be disabled
                                                                 after NPA failures, see SSO_AF_HWGRP()_AW_CFG[RWEN]. */
        uint64_t bfp                   : 1;  /**< [  2:  2](R/W1C/H) Bad-fill-packet error. The WAE CRC field was incorrect, or the XAQ
                                                                 next address was zero.  Any groups that experience this error are
                                                                 reported in SSO_AF_BFP_DIGEST(). */
        uint64_t bfpn                  : 1;  /**< [  3:  3](R/W1C/H) Bad-fill-packet NCB error. NCB detected error on fill or spill data.
                                                                 Any groups that experience this error are reported in
                                                                 SSO_AF_BFPN_DIGEST(). */
        uint64_t grpdis                : 1;  /**< [  4:  4](R/W1C/H) Add work to disabled hardware group. An ADDWQ was received and dropped
                                                                 to a hardware group with SSO_AF_HWGRP()_IAQ_THR[RSVD_THR] = 0.  Any
                                                                 groups that experience this error are reported in
                                                                 SSO_AF_GRPDIS_DIGEST(). */
        uint64_t awempty               : 1;  /**< [  5:  5](R/W1C/H) Set when received add work with tag type is specified as EMPTY, or when
                                                                 SSO_AF_AW_INP_CTL[WA_DIS] is set and work is added from disabled coprocessor. */
        uint64_t addwq_dropped         : 1;  /**< [  6:  6](R/W1C/H) Add work dropped due to 64 bit write to SSO_LF_GGRP_OP_ADD_WORK0. */
        uint64_t addwq_dropped_wqp0    : 1;  /**< [  7:  7](R/W1C/H) Add work dropped due to WQP being 0x0.  Any groups that experience
                                                                 this error are reported in SSO_AF_WQP0_DIGEST(). */
        uint64_t addwq_dropped_qctldis : 1;  /**< [  8:  8](R/W1C/H) Add work dropped due to QTL being disabled, 0x0.  Any groups that
                                                                 experience this error are reported in SSO_AF_QCTLDIS_DIGEST(). */
        uint64_t aw_unmap              : 1;  /**< [  9:  9](R/W1C/H) PF_FUNC mapping not found error. Set when a coprocessor add-work is
                                                                 dropped due to SSO_PRIV_LF()_HWGRP_CFG not having any matching mapping.
                                                                 When a request thus dropped, even if this bit is already set,
                                                                 SSO_AF_UNMAP_INFO is loaded. */
        uint64_t aw_multi              : 1;  /**< [ 10: 10](R/W1C/H) PF_FUNC map had double-hit error. Set when a coprocessor add-work is
                                                                 dropped due to SSO_PRIV_LF()_HWGRP_CFG having a double hit.
                                                                 When a request thus dropped, even if this bit is already set,
                                                                 SSO_AF_UNMAP_INFO is loaded. */
        uint64_t ggrp_unmap            : 1;  /**< [ 11: 11](R/W1C/H) PF_FUNC mapping not found error. Set when a load or store accesses an
                                                                 SSO LF register in BAR2 and SSO_PRIV_LF()_HWGRP_CFG does not have any
                                                                 matching entry.  When a request thus dropped, even if this bit is
                                                                 already set, SSO_AF_UNMAP_INFO is loaded. */
        uint64_t ggrp_multi            : 1;  /**< [ 12: 12](R/W1C/H) PF_FUNC map had double-hit error. Set when a load or store accesses an
                                                                 SSO LF register in BAR2 and SSO_PRIV_LF()_HWGRP_CFG has a double hit.
                                                                 When a request thus dropped, even if this bit is already set,
                                                                 SSO_AF_UNMAP_INFO is loaded. */
        uint64_t addwq_dropped_xaqen   : 1;  /**< [ 13: 13](R/W1C/H) Add work dropped due to XAQ pointers not yet initialized.  Any groups
                                                                 reporting this error are indicated in SSO_AF_XAQDIS_DIGEST(). */
        uint64_t flr_aq_cnt            : 1;  /**< [ 14: 14](R/W1C/H) An FLR was initiated, but SSO_LF_GGRP_AQ_CNT[AQ_CNT] != 0.  Any groups
                                                                 reporting this error are indicated in SSO_AF_FLR_AQ_DIGEST(). */
        uint64_t bfpp                  : 1;  /**< [ 15: 15](R/W1C/H) Bad-fill-packet NCB error. NCB detected poison on fill data.  Any
                                                                 groups that experience this error are reported in SSO_AF_POISON(). */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn10ka_p1;
    /* struct cavm_sso_af_err0_s cn10ka_p2; */
    /* struct cavm_sso_af_err0_s cn10kb; */
    /* struct cavm_sso_af_err0_cn10ka_p1 cnf10ka; */
    /* struct cavm_sso_af_err0_cn10ka_p1 cnf10kb; */
};
typedef union cavm_sso_af_err0 cavm_sso_af_err0_t;

#define CAVM_SSO_AF_ERR0 CAVM_SSO_AF_ERR0_FUNC()
static inline uint64_t CAVM_SSO_AF_ERR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_ERR0_FUNC(void)
{
    return 0x840070001220ll;
}

#define typedef_CAVM_SSO_AF_ERR0 cavm_sso_af_err0_t
#define bustype_CAVM_SSO_AF_ERR0 CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_ERR0 "SSO_AF_ERR0"
#define device_bar_CAVM_SSO_AF_ERR0 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_ERR0 0
#define arguments_CAVM_SSO_AF_ERR0 -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_err0_ena_w1c
 *
 * SSO AF Error 0 Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_sso_af_err0_ena_w1c
{
    uint64_t u;
    struct cavm_sso_af_err0_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t bad_stash             : 1;  /**< [ 16: 16](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[BAD_STASH]. */
        uint64_t bfpp                  : 1;  /**< [ 15: 15](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[BFPP]. */
        uint64_t flr_aq_cnt            : 1;  /**< [ 14: 14](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[FLR_AQ_CNT]. */
        uint64_t addwq_dropped_xaqen   : 1;  /**< [ 13: 13](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[ADDWQ_DROPPED_XAQEN]. */
        uint64_t ggrp_multi            : 1;  /**< [ 12: 12](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[GGRP_MULTI]. */
        uint64_t ggrp_unmap            : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[GGRP_UNMAP]. */
        uint64_t aw_multi              : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[AW_MULTI]. */
        uint64_t aw_unmap              : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[AW_UNMAP]. */
        uint64_t addwq_dropped_qctldis : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[ADDWQ_DROPPED_QCTLDIS]. */
        uint64_t addwq_dropped_wqp0    : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[ADDWQ_DROPPED_WQP0]. */
        uint64_t addwq_dropped         : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[ADDWQ_DROPPED]. */
        uint64_t awempty               : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[AWEMPTY]. */
        uint64_t grpdis                : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[GRPDIS]. */
        uint64_t bfpn                  : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[BFPN]. */
        uint64_t bfp                   : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[BFP]. */
        uint64_t npa                   : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[NPA]. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t npa                   : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[NPA]. */
        uint64_t bfp                   : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[BFP]. */
        uint64_t bfpn                  : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[BFPN]. */
        uint64_t grpdis                : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[GRPDIS]. */
        uint64_t awempty               : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[AWEMPTY]. */
        uint64_t addwq_dropped         : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[ADDWQ_DROPPED]. */
        uint64_t addwq_dropped_wqp0    : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[ADDWQ_DROPPED_WQP0]. */
        uint64_t addwq_dropped_qctldis : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[ADDWQ_DROPPED_QCTLDIS]. */
        uint64_t aw_unmap              : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[AW_UNMAP]. */
        uint64_t aw_multi              : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[AW_MULTI]. */
        uint64_t ggrp_unmap            : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[GGRP_UNMAP]. */
        uint64_t ggrp_multi            : 1;  /**< [ 12: 12](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[GGRP_MULTI]. */
        uint64_t addwq_dropped_xaqen   : 1;  /**< [ 13: 13](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[ADDWQ_DROPPED_XAQEN]. */
        uint64_t flr_aq_cnt            : 1;  /**< [ 14: 14](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[FLR_AQ_CNT]. */
        uint64_t bfpp                  : 1;  /**< [ 15: 15](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[BFPP]. */
        uint64_t bad_stash             : 1;  /**< [ 16: 16](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[BAD_STASH]. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_err0_ena_w1c_s cn10; */
    struct cavm_sso_af_err0_ena_w1c_cn10ka_p1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t bfpp                  : 1;  /**< [ 15: 15](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[BFPP]. */
        uint64_t flr_aq_cnt            : 1;  /**< [ 14: 14](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[FLR_AQ_CNT]. */
        uint64_t addwq_dropped_xaqen   : 1;  /**< [ 13: 13](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[ADDWQ_DROPPED_XAQEN]. */
        uint64_t ggrp_multi            : 1;  /**< [ 12: 12](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[GGRP_MULTI]. */
        uint64_t ggrp_unmap            : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[GGRP_UNMAP]. */
        uint64_t aw_multi              : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[AW_MULTI]. */
        uint64_t aw_unmap              : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[AW_UNMAP]. */
        uint64_t addwq_dropped_qctldis : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[ADDWQ_DROPPED_QCTLDIS]. */
        uint64_t addwq_dropped_wqp0    : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[ADDWQ_DROPPED_WQP0]. */
        uint64_t addwq_dropped         : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[ADDWQ_DROPPED]. */
        uint64_t awempty               : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[AWEMPTY]. */
        uint64_t grpdis                : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[GRPDIS]. */
        uint64_t bfpn                  : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[BFPN]. */
        uint64_t bfp                   : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[BFP]. */
        uint64_t npa                   : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[NPA]. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t npa                   : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[NPA]. */
        uint64_t bfp                   : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[BFP]. */
        uint64_t bfpn                  : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[BFPN]. */
        uint64_t grpdis                : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[GRPDIS]. */
        uint64_t awempty               : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[AWEMPTY]. */
        uint64_t addwq_dropped         : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[ADDWQ_DROPPED]. */
        uint64_t addwq_dropped_wqp0    : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[ADDWQ_DROPPED_WQP0]. */
        uint64_t addwq_dropped_qctldis : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[ADDWQ_DROPPED_QCTLDIS]. */
        uint64_t aw_unmap              : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[AW_UNMAP]. */
        uint64_t aw_multi              : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[AW_MULTI]. */
        uint64_t ggrp_unmap            : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[GGRP_UNMAP]. */
        uint64_t ggrp_multi            : 1;  /**< [ 12: 12](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[GGRP_MULTI]. */
        uint64_t addwq_dropped_xaqen   : 1;  /**< [ 13: 13](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[ADDWQ_DROPPED_XAQEN]. */
        uint64_t flr_aq_cnt            : 1;  /**< [ 14: 14](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[FLR_AQ_CNT]. */
        uint64_t bfpp                  : 1;  /**< [ 15: 15](R/W1C/H) Reads or clears enable for SSO_AF_ERR0[BFPP]. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn10ka_p1;
    /* struct cavm_sso_af_err0_ena_w1c_s cn10ka_p2; */
    /* struct cavm_sso_af_err0_ena_w1c_s cn10kb; */
    /* struct cavm_sso_af_err0_ena_w1c_cn10ka_p1 cnf10ka; */
    /* struct cavm_sso_af_err0_ena_w1c_cn10ka_p1 cnf10kb; */
};
typedef union cavm_sso_af_err0_ena_w1c cavm_sso_af_err0_ena_w1c_t;

#define CAVM_SSO_AF_ERR0_ENA_W1C CAVM_SSO_AF_ERR0_ENA_W1C_FUNC()
static inline uint64_t CAVM_SSO_AF_ERR0_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_ERR0_ENA_W1C_FUNC(void)
{
    return 0x840070001230ll;
}

#define typedef_CAVM_SSO_AF_ERR0_ENA_W1C cavm_sso_af_err0_ena_w1c_t
#define bustype_CAVM_SSO_AF_ERR0_ENA_W1C CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_ERR0_ENA_W1C "SSO_AF_ERR0_ENA_W1C"
#define device_bar_CAVM_SSO_AF_ERR0_ENA_W1C 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_ERR0_ENA_W1C 0
#define arguments_CAVM_SSO_AF_ERR0_ENA_W1C -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_err0_ena_w1s
 *
 * SSO AF Error 0 Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_sso_af_err0_ena_w1s
{
    uint64_t u;
    struct cavm_sso_af_err0_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t bad_stash             : 1;  /**< [ 16: 16](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[BAD_STASH]. */
        uint64_t bfpp                  : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[BFPP]. */
        uint64_t flr_aq_cnt            : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[FLR_AQ_CNT]. */
        uint64_t addwq_dropped_xaqen   : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[ADDWQ_DROPPED_XAQEN]. */
        uint64_t ggrp_multi            : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[GGRP_MULTI]. */
        uint64_t ggrp_unmap            : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[GGRP_UNMAP]. */
        uint64_t aw_multi              : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[AW_MULTI]. */
        uint64_t aw_unmap              : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[AW_UNMAP]. */
        uint64_t addwq_dropped_qctldis : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[ADDWQ_DROPPED_QCTLDIS]. */
        uint64_t addwq_dropped_wqp0    : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[ADDWQ_DROPPED_WQP0]. */
        uint64_t addwq_dropped         : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[ADDWQ_DROPPED]. */
        uint64_t awempty               : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[AWEMPTY]. */
        uint64_t grpdis                : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[GRPDIS]. */
        uint64_t bfpn                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[BFPN]. */
        uint64_t bfp                   : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[BFP]. */
        uint64_t npa                   : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[NPA]. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t npa                   : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[NPA]. */
        uint64_t bfp                   : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[BFP]. */
        uint64_t bfpn                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[BFPN]. */
        uint64_t grpdis                : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[GRPDIS]. */
        uint64_t awempty               : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[AWEMPTY]. */
        uint64_t addwq_dropped         : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[ADDWQ_DROPPED]. */
        uint64_t addwq_dropped_wqp0    : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[ADDWQ_DROPPED_WQP0]. */
        uint64_t addwq_dropped_qctldis : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[ADDWQ_DROPPED_QCTLDIS]. */
        uint64_t aw_unmap              : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[AW_UNMAP]. */
        uint64_t aw_multi              : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[AW_MULTI]. */
        uint64_t ggrp_unmap            : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[GGRP_UNMAP]. */
        uint64_t ggrp_multi            : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[GGRP_MULTI]. */
        uint64_t addwq_dropped_xaqen   : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[ADDWQ_DROPPED_XAQEN]. */
        uint64_t flr_aq_cnt            : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[FLR_AQ_CNT]. */
        uint64_t bfpp                  : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[BFPP]. */
        uint64_t bad_stash             : 1;  /**< [ 16: 16](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[BAD_STASH]. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_err0_ena_w1s_s cn10; */
    struct cavm_sso_af_err0_ena_w1s_cn10ka_p1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t bfpp                  : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[BFPP]. */
        uint64_t flr_aq_cnt            : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[FLR_AQ_CNT]. */
        uint64_t addwq_dropped_xaqen   : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[ADDWQ_DROPPED_XAQEN]. */
        uint64_t ggrp_multi            : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[GGRP_MULTI]. */
        uint64_t ggrp_unmap            : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[GGRP_UNMAP]. */
        uint64_t aw_multi              : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[AW_MULTI]. */
        uint64_t aw_unmap              : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[AW_UNMAP]. */
        uint64_t addwq_dropped_qctldis : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[ADDWQ_DROPPED_QCTLDIS]. */
        uint64_t addwq_dropped_wqp0    : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[ADDWQ_DROPPED_WQP0]. */
        uint64_t addwq_dropped         : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[ADDWQ_DROPPED]. */
        uint64_t awempty               : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[AWEMPTY]. */
        uint64_t grpdis                : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[GRPDIS]. */
        uint64_t bfpn                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[BFPN]. */
        uint64_t bfp                   : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[BFP]. */
        uint64_t npa                   : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[NPA]. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t npa                   : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[NPA]. */
        uint64_t bfp                   : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[BFP]. */
        uint64_t bfpn                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[BFPN]. */
        uint64_t grpdis                : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[GRPDIS]. */
        uint64_t awempty               : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[AWEMPTY]. */
        uint64_t addwq_dropped         : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[ADDWQ_DROPPED]. */
        uint64_t addwq_dropped_wqp0    : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[ADDWQ_DROPPED_WQP0]. */
        uint64_t addwq_dropped_qctldis : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[ADDWQ_DROPPED_QCTLDIS]. */
        uint64_t aw_unmap              : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[AW_UNMAP]. */
        uint64_t aw_multi              : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[AW_MULTI]. */
        uint64_t ggrp_unmap            : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[GGRP_UNMAP]. */
        uint64_t ggrp_multi            : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[GGRP_MULTI]. */
        uint64_t addwq_dropped_xaqen   : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[ADDWQ_DROPPED_XAQEN]. */
        uint64_t flr_aq_cnt            : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[FLR_AQ_CNT]. */
        uint64_t bfpp                  : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets enable for SSO_AF_ERR0[BFPP]. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn10ka_p1;
    /* struct cavm_sso_af_err0_ena_w1s_s cn10ka_p2; */
    /* struct cavm_sso_af_err0_ena_w1s_s cn10kb; */
    /* struct cavm_sso_af_err0_ena_w1s_cn10ka_p1 cnf10ka; */
    /* struct cavm_sso_af_err0_ena_w1s_cn10ka_p1 cnf10kb; */
};
typedef union cavm_sso_af_err0_ena_w1s cavm_sso_af_err0_ena_w1s_t;

#define CAVM_SSO_AF_ERR0_ENA_W1S CAVM_SSO_AF_ERR0_ENA_W1S_FUNC()
static inline uint64_t CAVM_SSO_AF_ERR0_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_ERR0_ENA_W1S_FUNC(void)
{
    return 0x840070001238ll;
}

#define typedef_CAVM_SSO_AF_ERR0_ENA_W1S cavm_sso_af_err0_ena_w1s_t
#define bustype_CAVM_SSO_AF_ERR0_ENA_W1S CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_ERR0_ENA_W1S "SSO_AF_ERR0_ENA_W1S"
#define device_bar_CAVM_SSO_AF_ERR0_ENA_W1S 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_ERR0_ENA_W1S 0
#define arguments_CAVM_SSO_AF_ERR0_ENA_W1S -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_err0_w1s
 *
 * SSO AF Error 0 Set Register
 * This register sets interrupt bits.
 */
union cavm_sso_af_err0_w1s
{
    uint64_t u;
    struct cavm_sso_af_err0_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t bad_stash             : 1;  /**< [ 16: 16](R/W1S/H) Reads or sets SSO_AF_ERR0[BAD_STASH]. */
        uint64_t bfpp                  : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets SSO_AF_ERR0[BFPP]. */
        uint64_t flr_aq_cnt            : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets SSO_AF_ERR0[FLR_AQ_CNT]. */
        uint64_t addwq_dropped_xaqen   : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets SSO_AF_ERR0[ADDWQ_DROPPED_XAQEN]. */
        uint64_t ggrp_multi            : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets SSO_AF_ERR0[GGRP_MULTI]. */
        uint64_t ggrp_unmap            : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets SSO_AF_ERR0[GGRP_UNMAP]. */
        uint64_t aw_multi              : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets SSO_AF_ERR0[AW_MULTI]. */
        uint64_t aw_unmap              : 1;  /**< [  9:  9](R/W1S/H) Reads or sets SSO_AF_ERR0[AW_UNMAP]. */
        uint64_t addwq_dropped_qctldis : 1;  /**< [  8:  8](R/W1S/H) Reads or sets SSO_AF_ERR0[ADDWQ_DROPPED_QCTLDIS]. */
        uint64_t addwq_dropped_wqp0    : 1;  /**< [  7:  7](R/W1S/H) Reads or sets SSO_AF_ERR0[ADDWQ_DROPPED_WQP0]. */
        uint64_t addwq_dropped         : 1;  /**< [  6:  6](R/W1S/H) Reads or sets SSO_AF_ERR0[ADDWQ_DROPPED]. */
        uint64_t awempty               : 1;  /**< [  5:  5](R/W1S/H) Reads or sets SSO_AF_ERR0[AWEMPTY]. */
        uint64_t grpdis                : 1;  /**< [  4:  4](R/W1S/H) Reads or sets SSO_AF_ERR0[GRPDIS]. */
        uint64_t bfpn                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets SSO_AF_ERR0[BFPN]. */
        uint64_t bfp                   : 1;  /**< [  2:  2](R/W1S/H) Reads or sets SSO_AF_ERR0[BFP]. */
        uint64_t npa                   : 1;  /**< [  1:  1](R/W1S/H) Reads or sets SSO_AF_ERR0[NPA]. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t npa                   : 1;  /**< [  1:  1](R/W1S/H) Reads or sets SSO_AF_ERR0[NPA]. */
        uint64_t bfp                   : 1;  /**< [  2:  2](R/W1S/H) Reads or sets SSO_AF_ERR0[BFP]. */
        uint64_t bfpn                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets SSO_AF_ERR0[BFPN]. */
        uint64_t grpdis                : 1;  /**< [  4:  4](R/W1S/H) Reads or sets SSO_AF_ERR0[GRPDIS]. */
        uint64_t awempty               : 1;  /**< [  5:  5](R/W1S/H) Reads or sets SSO_AF_ERR0[AWEMPTY]. */
        uint64_t addwq_dropped         : 1;  /**< [  6:  6](R/W1S/H) Reads or sets SSO_AF_ERR0[ADDWQ_DROPPED]. */
        uint64_t addwq_dropped_wqp0    : 1;  /**< [  7:  7](R/W1S/H) Reads or sets SSO_AF_ERR0[ADDWQ_DROPPED_WQP0]. */
        uint64_t addwq_dropped_qctldis : 1;  /**< [  8:  8](R/W1S/H) Reads or sets SSO_AF_ERR0[ADDWQ_DROPPED_QCTLDIS]. */
        uint64_t aw_unmap              : 1;  /**< [  9:  9](R/W1S/H) Reads or sets SSO_AF_ERR0[AW_UNMAP]. */
        uint64_t aw_multi              : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets SSO_AF_ERR0[AW_MULTI]. */
        uint64_t ggrp_unmap            : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets SSO_AF_ERR0[GGRP_UNMAP]. */
        uint64_t ggrp_multi            : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets SSO_AF_ERR0[GGRP_MULTI]. */
        uint64_t addwq_dropped_xaqen   : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets SSO_AF_ERR0[ADDWQ_DROPPED_XAQEN]. */
        uint64_t flr_aq_cnt            : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets SSO_AF_ERR0[FLR_AQ_CNT]. */
        uint64_t bfpp                  : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets SSO_AF_ERR0[BFPP]. */
        uint64_t bad_stash             : 1;  /**< [ 16: 16](R/W1S/H) Reads or sets SSO_AF_ERR0[BAD_STASH]. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_err0_w1s_s cn10; */
    struct cavm_sso_af_err0_w1s_cn10ka_p1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t bfpp                  : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets SSO_AF_ERR0[BFPP]. */
        uint64_t flr_aq_cnt            : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets SSO_AF_ERR0[FLR_AQ_CNT]. */
        uint64_t addwq_dropped_xaqen   : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets SSO_AF_ERR0[ADDWQ_DROPPED_XAQEN]. */
        uint64_t ggrp_multi            : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets SSO_AF_ERR0[GGRP_MULTI]. */
        uint64_t ggrp_unmap            : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets SSO_AF_ERR0[GGRP_UNMAP]. */
        uint64_t aw_multi              : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets SSO_AF_ERR0[AW_MULTI]. */
        uint64_t aw_unmap              : 1;  /**< [  9:  9](R/W1S/H) Reads or sets SSO_AF_ERR0[AW_UNMAP]. */
        uint64_t addwq_dropped_qctldis : 1;  /**< [  8:  8](R/W1S/H) Reads or sets SSO_AF_ERR0[ADDWQ_DROPPED_QCTLDIS]. */
        uint64_t addwq_dropped_wqp0    : 1;  /**< [  7:  7](R/W1S/H) Reads or sets SSO_AF_ERR0[ADDWQ_DROPPED_WQP0]. */
        uint64_t addwq_dropped         : 1;  /**< [  6:  6](R/W1S/H) Reads or sets SSO_AF_ERR0[ADDWQ_DROPPED]. */
        uint64_t awempty               : 1;  /**< [  5:  5](R/W1S/H) Reads or sets SSO_AF_ERR0[AWEMPTY]. */
        uint64_t grpdis                : 1;  /**< [  4:  4](R/W1S/H) Reads or sets SSO_AF_ERR0[GRPDIS]. */
        uint64_t bfpn                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets SSO_AF_ERR0[BFPN]. */
        uint64_t bfp                   : 1;  /**< [  2:  2](R/W1S/H) Reads or sets SSO_AF_ERR0[BFP]. */
        uint64_t npa                   : 1;  /**< [  1:  1](R/W1S/H) Reads or sets SSO_AF_ERR0[NPA]. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t npa                   : 1;  /**< [  1:  1](R/W1S/H) Reads or sets SSO_AF_ERR0[NPA]. */
        uint64_t bfp                   : 1;  /**< [  2:  2](R/W1S/H) Reads or sets SSO_AF_ERR0[BFP]. */
        uint64_t bfpn                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets SSO_AF_ERR0[BFPN]. */
        uint64_t grpdis                : 1;  /**< [  4:  4](R/W1S/H) Reads or sets SSO_AF_ERR0[GRPDIS]. */
        uint64_t awempty               : 1;  /**< [  5:  5](R/W1S/H) Reads or sets SSO_AF_ERR0[AWEMPTY]. */
        uint64_t addwq_dropped         : 1;  /**< [  6:  6](R/W1S/H) Reads or sets SSO_AF_ERR0[ADDWQ_DROPPED]. */
        uint64_t addwq_dropped_wqp0    : 1;  /**< [  7:  7](R/W1S/H) Reads or sets SSO_AF_ERR0[ADDWQ_DROPPED_WQP0]. */
        uint64_t addwq_dropped_qctldis : 1;  /**< [  8:  8](R/W1S/H) Reads or sets SSO_AF_ERR0[ADDWQ_DROPPED_QCTLDIS]. */
        uint64_t aw_unmap              : 1;  /**< [  9:  9](R/W1S/H) Reads or sets SSO_AF_ERR0[AW_UNMAP]. */
        uint64_t aw_multi              : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets SSO_AF_ERR0[AW_MULTI]. */
        uint64_t ggrp_unmap            : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets SSO_AF_ERR0[GGRP_UNMAP]. */
        uint64_t ggrp_multi            : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets SSO_AF_ERR0[GGRP_MULTI]. */
        uint64_t addwq_dropped_xaqen   : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets SSO_AF_ERR0[ADDWQ_DROPPED_XAQEN]. */
        uint64_t flr_aq_cnt            : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets SSO_AF_ERR0[FLR_AQ_CNT]. */
        uint64_t bfpp                  : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets SSO_AF_ERR0[BFPP]. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn10ka_p1;
    /* struct cavm_sso_af_err0_w1s_s cn10ka_p2; */
    /* struct cavm_sso_af_err0_w1s_s cn10kb; */
    /* struct cavm_sso_af_err0_w1s_cn10ka_p1 cnf10ka; */
    /* struct cavm_sso_af_err0_w1s_cn10ka_p1 cnf10kb; */
};
typedef union cavm_sso_af_err0_w1s cavm_sso_af_err0_w1s_t;

#define CAVM_SSO_AF_ERR0_W1S CAVM_SSO_AF_ERR0_W1S_FUNC()
static inline uint64_t CAVM_SSO_AF_ERR0_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_ERR0_W1S_FUNC(void)
{
    return 0x840070001228ll;
}

#define typedef_CAVM_SSO_AF_ERR0_W1S cavm_sso_af_err0_w1s_t
#define bustype_CAVM_SSO_AF_ERR0_W1S CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_ERR0_W1S "SSO_AF_ERR0_W1S"
#define device_bar_CAVM_SSO_AF_ERR0_W1S 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_ERR0_W1S 0
#define arguments_CAVM_SSO_AF_ERR0_W1S -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_err2
 *
 * SSO AF Error 2 Register
 * This register contains workslot related errors.
 */
union cavm_sso_af_err2
{
    uint64_t u;
    struct cavm_sso_af_err2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t ws_multi              : 1;  /**< [ 31: 31](R/W1C/H) Workslot access found HWS PF_FUNC map had double-hit error.  Set when
                                                                 SSOW_PRIV_LF()_HWS_CFG has a double hit for the PF_FUNC and SLOT from
                                                                 the address for an SSOW load or store. When this bit is set,
                                                                 SSO_AF_UNMAP_INFO3 is loaded. */
        uint64_t ws_unmap              : 1;  /**< [ 30: 30](R/W1C/H) Workslot access found no HWS PF_FUNC mapping. Set when
                                                                 SSOW_PRIV_LF()_HWS_CFG has no match for the PF_FUNC and SLOT from the
                                                                 address for an SSOW load or store. When this bit is set,
                                                                 SSO_AF_UNMAP_INFO3 is loaded. */
        uint64_t ws_grp_multi          : 1;  /**< [ 29: 29](R/W1C/H) Workslot operation found HWGRP PF_FUNC map had double-hit error for
                                                                 supplied guest group. Set when SSO_PRIV_LF()_HWGRP_CFG has a double
                                                                 hit for the GGRP parameter in a workslot operation and the workslot's
                                                                 PF_FUNC. When this bit is set, SSO_AF_UNMAP_INFO2 is loaded.

                                                                 Any workslot that experiences this error is recorded in
                                                                 SSO_AF_WS_GMULTI_DIGEST(). */
        uint64_t ws_grp_unmap          : 1;  /**< [ 28: 28](R/W1C/H) Workslot operation found no HWGRP PF_FUNC mapping for
                                                                 supplied guest group. Set when SSO_PRIV_LF()_HWGRP_CFG has no match
                                                                 for the GGRP parameter in a workslot operation and the workslot's
                                                                 PF_FUNC. When this bit is set, SSO_AF_UNMAP_INFO2 is loaded.

                                                                 Any workslot that experiences this error is recorded in
                                                                 SSO_AF_WS_GUNMAP_DIGEST(). */
        uint64_t reserved_4_27         : 24;
        uint64_t ws_flr_nt             : 1;  /**< [  3:  3](R/W1C/H) SSOW_AF_LF_HWS_RST was attempted for a workslot that was still mapped to an AP,
                                                                 i.e., it requires an SAI_INVAL operation.

                                                                 Any workslot that experiences this error is recorded in
                                                                 SSO_AF_WS_NT_DIGEST(). */
        uint64_t ws_flr_ni             : 1;  /**< [  2:  2](R/W1C/H) SSOW_AF_LF_HWS_RST was attempted for a workslot that was not idle,
                                                                 i.e., has a pending operation.

                                                                 Any workslot that experiences this error is recorded in
                                                                 SSO_AF_WS_NI_DIGEST(). */
        uint64_t ws_flr_ne             : 1;  /**< [  1:  1](R/W1C/H) SSOW_AF_LF_HWS_RST was attempted for a workslot that was not empty.

                                                                 Any workslot that experiences this error is recorded in
                                                                 SSO_AF_WS_NE_DIGEST(). */
        uint64_t early_op              : 1;  /**< [  0:  0](R/W1C/H) Attempted access before reset was complete. */
#else /* Word 0 - Little Endian */
        uint64_t early_op              : 1;  /**< [  0:  0](R/W1C/H) Attempted access before reset was complete. */
        uint64_t ws_flr_ne             : 1;  /**< [  1:  1](R/W1C/H) SSOW_AF_LF_HWS_RST was attempted for a workslot that was not empty.

                                                                 Any workslot that experiences this error is recorded in
                                                                 SSO_AF_WS_NE_DIGEST(). */
        uint64_t ws_flr_ni             : 1;  /**< [  2:  2](R/W1C/H) SSOW_AF_LF_HWS_RST was attempted for a workslot that was not idle,
                                                                 i.e., has a pending operation.

                                                                 Any workslot that experiences this error is recorded in
                                                                 SSO_AF_WS_NI_DIGEST(). */
        uint64_t ws_flr_nt             : 1;  /**< [  3:  3](R/W1C/H) SSOW_AF_LF_HWS_RST was attempted for a workslot that was still mapped to an AP,
                                                                 i.e., it requires an SAI_INVAL operation.

                                                                 Any workslot that experiences this error is recorded in
                                                                 SSO_AF_WS_NT_DIGEST(). */
        uint64_t reserved_4_27         : 24;
        uint64_t ws_grp_unmap          : 1;  /**< [ 28: 28](R/W1C/H) Workslot operation found no HWGRP PF_FUNC mapping for
                                                                 supplied guest group. Set when SSO_PRIV_LF()_HWGRP_CFG has no match
                                                                 for the GGRP parameter in a workslot operation and the workslot's
                                                                 PF_FUNC. When this bit is set, SSO_AF_UNMAP_INFO2 is loaded.

                                                                 Any workslot that experiences this error is recorded in
                                                                 SSO_AF_WS_GUNMAP_DIGEST(). */
        uint64_t ws_grp_multi          : 1;  /**< [ 29: 29](R/W1C/H) Workslot operation found HWGRP PF_FUNC map had double-hit error for
                                                                 supplied guest group. Set when SSO_PRIV_LF()_HWGRP_CFG has a double
                                                                 hit for the GGRP parameter in a workslot operation and the workslot's
                                                                 PF_FUNC. When this bit is set, SSO_AF_UNMAP_INFO2 is loaded.

                                                                 Any workslot that experiences this error is recorded in
                                                                 SSO_AF_WS_GMULTI_DIGEST(). */
        uint64_t ws_unmap              : 1;  /**< [ 30: 30](R/W1C/H) Workslot access found no HWS PF_FUNC mapping. Set when
                                                                 SSOW_PRIV_LF()_HWS_CFG has no match for the PF_FUNC and SLOT from the
                                                                 address for an SSOW load or store. When this bit is set,
                                                                 SSO_AF_UNMAP_INFO3 is loaded. */
        uint64_t ws_multi              : 1;  /**< [ 31: 31](R/W1C/H) Workslot access found HWS PF_FUNC map had double-hit error.  Set when
                                                                 SSOW_PRIV_LF()_HWS_CFG has a double hit for the PF_FUNC and SLOT from
                                                                 the address for an SSOW load or store. When this bit is set,
                                                                 SSO_AF_UNMAP_INFO3 is loaded. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_err2_s cn; */
};
typedef union cavm_sso_af_err2 cavm_sso_af_err2_t;

#define CAVM_SSO_AF_ERR2 CAVM_SSO_AF_ERR2_FUNC()
static inline uint64_t CAVM_SSO_AF_ERR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_ERR2_FUNC(void)
{
    return 0x840070001260ll;
}

#define typedef_CAVM_SSO_AF_ERR2 cavm_sso_af_err2_t
#define bustype_CAVM_SSO_AF_ERR2 CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_ERR2 "SSO_AF_ERR2"
#define device_bar_CAVM_SSO_AF_ERR2 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_ERR2 0
#define arguments_CAVM_SSO_AF_ERR2 -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_err2_ena_w1c
 *
 * SSO AF Error 2 Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_sso_af_err2_ena_w1c
{
    uint64_t u;
    struct cavm_sso_af_err2_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t ws_multi              : 1;  /**< [ 31: 31](R/W1C/H) Reads or clears enable for SSO_AF_ERR2[WS_MULTI]. */
        uint64_t ws_unmap              : 1;  /**< [ 30: 30](R/W1C/H) Reads or clears enable for SSO_AF_ERR2[WS_UNMAP]. */
        uint64_t ws_grp_multi          : 1;  /**< [ 29: 29](R/W1C/H) Reads or clears enable for SSO_AF_ERR2[WS_GRP_MULTI]. */
        uint64_t ws_grp_unmap          : 1;  /**< [ 28: 28](R/W1C/H) Reads or clears enable for SSO_AF_ERR2[WS_GRP_UNMAP]. */
        uint64_t reserved_4_27         : 24;
        uint64_t ws_flr_nt             : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for SSO_AF_ERR2[WS_FLR_NT]. */
        uint64_t ws_flr_ni             : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for SSO_AF_ERR2[WS_FLR_NI]. */
        uint64_t ws_flr_ne             : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for SSO_AF_ERR2[WS_FLR_NE]. */
        uint64_t early_op              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for SSO_AF_ERR2[EARLY_OP]. */
#else /* Word 0 - Little Endian */
        uint64_t early_op              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for SSO_AF_ERR2[EARLY_OP]. */
        uint64_t ws_flr_ne             : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for SSO_AF_ERR2[WS_FLR_NE]. */
        uint64_t ws_flr_ni             : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for SSO_AF_ERR2[WS_FLR_NI]. */
        uint64_t ws_flr_nt             : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for SSO_AF_ERR2[WS_FLR_NT]. */
        uint64_t reserved_4_27         : 24;
        uint64_t ws_grp_unmap          : 1;  /**< [ 28: 28](R/W1C/H) Reads or clears enable for SSO_AF_ERR2[WS_GRP_UNMAP]. */
        uint64_t ws_grp_multi          : 1;  /**< [ 29: 29](R/W1C/H) Reads or clears enable for SSO_AF_ERR2[WS_GRP_MULTI]. */
        uint64_t ws_unmap              : 1;  /**< [ 30: 30](R/W1C/H) Reads or clears enable for SSO_AF_ERR2[WS_UNMAP]. */
        uint64_t ws_multi              : 1;  /**< [ 31: 31](R/W1C/H) Reads or clears enable for SSO_AF_ERR2[WS_MULTI]. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_err2_ena_w1c_s cn; */
};
typedef union cavm_sso_af_err2_ena_w1c cavm_sso_af_err2_ena_w1c_t;

#define CAVM_SSO_AF_ERR2_ENA_W1C CAVM_SSO_AF_ERR2_ENA_W1C_FUNC()
static inline uint64_t CAVM_SSO_AF_ERR2_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_ERR2_ENA_W1C_FUNC(void)
{
    return 0x840070001270ll;
}

#define typedef_CAVM_SSO_AF_ERR2_ENA_W1C cavm_sso_af_err2_ena_w1c_t
#define bustype_CAVM_SSO_AF_ERR2_ENA_W1C CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_ERR2_ENA_W1C "SSO_AF_ERR2_ENA_W1C"
#define device_bar_CAVM_SSO_AF_ERR2_ENA_W1C 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_ERR2_ENA_W1C 0
#define arguments_CAVM_SSO_AF_ERR2_ENA_W1C -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_err2_ena_w1s
 *
 * SSO AF Error 2 Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_sso_af_err2_ena_w1s
{
    uint64_t u;
    struct cavm_sso_af_err2_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t ws_multi              : 1;  /**< [ 31: 31](R/W1S/H) Reads or sets enable for SSO_AF_ERR2[WS_MULTI]. */
        uint64_t ws_unmap              : 1;  /**< [ 30: 30](R/W1S/H) Reads or sets enable for SSO_AF_ERR2[WS_UNMAP]. */
        uint64_t ws_grp_multi          : 1;  /**< [ 29: 29](R/W1S/H) Reads or sets enable for SSO_AF_ERR2[WS_GRP_MULTI]. */
        uint64_t ws_grp_unmap          : 1;  /**< [ 28: 28](R/W1S/H) Reads or sets enable for SSO_AF_ERR2[WS_GRP_UNMAP]. */
        uint64_t reserved_4_27         : 24;
        uint64_t ws_flr_nt             : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for SSO_AF_ERR2[WS_FLR_NT]. */
        uint64_t ws_flr_ni             : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for SSO_AF_ERR2[WS_FLR_NI]. */
        uint64_t ws_flr_ne             : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for SSO_AF_ERR2[WS_FLR_NE]. */
        uint64_t early_op              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for SSO_AF_ERR2[EARLY_OP]. */
#else /* Word 0 - Little Endian */
        uint64_t early_op              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for SSO_AF_ERR2[EARLY_OP]. */
        uint64_t ws_flr_ne             : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for SSO_AF_ERR2[WS_FLR_NE]. */
        uint64_t ws_flr_ni             : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for SSO_AF_ERR2[WS_FLR_NI]. */
        uint64_t ws_flr_nt             : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for SSO_AF_ERR2[WS_FLR_NT]. */
        uint64_t reserved_4_27         : 24;
        uint64_t ws_grp_unmap          : 1;  /**< [ 28: 28](R/W1S/H) Reads or sets enable for SSO_AF_ERR2[WS_GRP_UNMAP]. */
        uint64_t ws_grp_multi          : 1;  /**< [ 29: 29](R/W1S/H) Reads or sets enable for SSO_AF_ERR2[WS_GRP_MULTI]. */
        uint64_t ws_unmap              : 1;  /**< [ 30: 30](R/W1S/H) Reads or sets enable for SSO_AF_ERR2[WS_UNMAP]. */
        uint64_t ws_multi              : 1;  /**< [ 31: 31](R/W1S/H) Reads or sets enable for SSO_AF_ERR2[WS_MULTI]. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_err2_ena_w1s_s cn; */
};
typedef union cavm_sso_af_err2_ena_w1s cavm_sso_af_err2_ena_w1s_t;

#define CAVM_SSO_AF_ERR2_ENA_W1S CAVM_SSO_AF_ERR2_ENA_W1S_FUNC()
static inline uint64_t CAVM_SSO_AF_ERR2_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_ERR2_ENA_W1S_FUNC(void)
{
    return 0x840070001278ll;
}

#define typedef_CAVM_SSO_AF_ERR2_ENA_W1S cavm_sso_af_err2_ena_w1s_t
#define bustype_CAVM_SSO_AF_ERR2_ENA_W1S CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_ERR2_ENA_W1S "SSO_AF_ERR2_ENA_W1S"
#define device_bar_CAVM_SSO_AF_ERR2_ENA_W1S 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_ERR2_ENA_W1S 0
#define arguments_CAVM_SSO_AF_ERR2_ENA_W1S -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_err2_w1s
 *
 * SSO AF Error 2 Set Register
 * This register sets interrupt bits.
 */
union cavm_sso_af_err2_w1s
{
    uint64_t u;
    struct cavm_sso_af_err2_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t ws_multi              : 1;  /**< [ 31: 31](R/W1S/H) Reads or sets SSO_AF_ERR2[WS_MULTI]. */
        uint64_t ws_unmap              : 1;  /**< [ 30: 30](R/W1S/H) Reads or sets SSO_AF_ERR2[WS_UNMAP]. */
        uint64_t ws_grp_multi          : 1;  /**< [ 29: 29](R/W1S/H) Reads or sets SSO_AF_ERR2[WS_GRP_MULTI]. */
        uint64_t ws_grp_unmap          : 1;  /**< [ 28: 28](R/W1S/H) Reads or sets SSO_AF_ERR2[WS_GRP_UNMAP]. */
        uint64_t reserved_4_27         : 24;
        uint64_t ws_flr_nt             : 1;  /**< [  3:  3](R/W1S/H) Reads or sets SSO_AF_ERR2[WS_FLR_NT]. */
        uint64_t ws_flr_ni             : 1;  /**< [  2:  2](R/W1S/H) Reads or sets SSO_AF_ERR2[WS_FLR_NI]. */
        uint64_t ws_flr_ne             : 1;  /**< [  1:  1](R/W1S/H) Reads or sets SSO_AF_ERR2[WS_FLR_NE]. */
        uint64_t early_op              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets SSO_AF_ERR2[EARLY_OP]. */
#else /* Word 0 - Little Endian */
        uint64_t early_op              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets SSO_AF_ERR2[EARLY_OP]. */
        uint64_t ws_flr_ne             : 1;  /**< [  1:  1](R/W1S/H) Reads or sets SSO_AF_ERR2[WS_FLR_NE]. */
        uint64_t ws_flr_ni             : 1;  /**< [  2:  2](R/W1S/H) Reads or sets SSO_AF_ERR2[WS_FLR_NI]. */
        uint64_t ws_flr_nt             : 1;  /**< [  3:  3](R/W1S/H) Reads or sets SSO_AF_ERR2[WS_FLR_NT]. */
        uint64_t reserved_4_27         : 24;
        uint64_t ws_grp_unmap          : 1;  /**< [ 28: 28](R/W1S/H) Reads or sets SSO_AF_ERR2[WS_GRP_UNMAP]. */
        uint64_t ws_grp_multi          : 1;  /**< [ 29: 29](R/W1S/H) Reads or sets SSO_AF_ERR2[WS_GRP_MULTI]. */
        uint64_t ws_unmap              : 1;  /**< [ 30: 30](R/W1S/H) Reads or sets SSO_AF_ERR2[WS_UNMAP]. */
        uint64_t ws_multi              : 1;  /**< [ 31: 31](R/W1S/H) Reads or sets SSO_AF_ERR2[WS_MULTI]. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_err2_w1s_s cn; */
};
typedef union cavm_sso_af_err2_w1s cavm_sso_af_err2_w1s_t;

#define CAVM_SSO_AF_ERR2_W1S CAVM_SSO_AF_ERR2_W1S_FUNC()
static inline uint64_t CAVM_SSO_AF_ERR2_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_ERR2_W1S_FUNC(void)
{
    return 0x840070001268ll;
}

#define typedef_CAVM_SSO_AF_ERR2_W1S cavm_sso_af_err2_w1s_t
#define bustype_CAVM_SSO_AF_ERR2_W1S CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_ERR2_W1S "SSO_AF_ERR2_W1S"
#define device_bar_CAVM_SSO_AF_ERR2_W1S 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_ERR2_W1S 0
#define arguments_CAVM_SSO_AF_ERR2_W1S -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_flr_aq_digest#
 *
 * SSO AF FLR_AQ_CNT Error Summary Registers
 * One bit per HWGRP to indicate which groups have reported an SSO_AF_ERR0[FLR_AQ_CNT] error.
 */
union cavm_sso_af_flr_aq_digestx
{
    uint64_t u;
    struct cavm_sso_af_flr_aq_digestx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1C/H) One bit per HWGRP. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1C/H) One bit per HWGRP. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_flr_aq_digestx_s cn; */
};
typedef union cavm_sso_af_flr_aq_digestx cavm_sso_af_flr_aq_digestx_t;

static inline uint64_t CAVM_SSO_AF_FLR_AQ_DIGESTX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_FLR_AQ_DIGESTX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=3))
        return 0x840070901200ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x840070901200ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x840070901200ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x840070901200ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("SSO_AF_FLR_AQ_DIGESTX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_FLR_AQ_DIGESTX(a) cavm_sso_af_flr_aq_digestx_t
#define bustype_CAVM_SSO_AF_FLR_AQ_DIGESTX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_FLR_AQ_DIGESTX(a) "SSO_AF_FLR_AQ_DIGESTX"
#define device_bar_CAVM_SSO_AF_FLR_AQ_DIGESTX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_FLR_AQ_DIGESTX(a) (a)
#define arguments_CAVM_SSO_AF_FLR_AQ_DIGESTX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_flr_aq_digest#_w1s
 *
 * SSO AF FLR_AQ_CNT Error Summary Registers
 * This register reads or sets bits.
 */
union cavm_sso_af_flr_aq_digestx_w1s
{
    uint64_t u;
    struct cavm_sso_af_flr_aq_digestx_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_FLR_AQ_DIGEST(0..3)[HWGRP]. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_FLR_AQ_DIGEST(0..3)[HWGRP]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_flr_aq_digestx_w1s_s cn10; */
    /* struct cavm_sso_af_flr_aq_digestx_w1s_s cn10ka; */
    struct cavm_sso_af_flr_aq_digestx_w1s_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_FLR_AQ_DIGEST(0..1)[HWGRP]. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_FLR_AQ_DIGEST(0..1)[HWGRP]. */
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_flr_aq_digestx_w1s_s cnf10ka; */
    /* struct cavm_sso_af_flr_aq_digestx_w1s_s cnf10kb; */
};
typedef union cavm_sso_af_flr_aq_digestx_w1s cavm_sso_af_flr_aq_digestx_w1s_t;

static inline uint64_t CAVM_SSO_AF_FLR_AQ_DIGESTX_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_FLR_AQ_DIGESTX_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=3))
        return 0x840070901300ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x840070901300ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x840070901300ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x840070901300ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("SSO_AF_FLR_AQ_DIGESTX_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_FLR_AQ_DIGESTX_W1S(a) cavm_sso_af_flr_aq_digestx_w1s_t
#define bustype_CAVM_SSO_AF_FLR_AQ_DIGESTX_W1S(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_FLR_AQ_DIGESTX_W1S(a) "SSO_AF_FLR_AQ_DIGESTX_W1S"
#define device_bar_CAVM_SSO_AF_FLR_AQ_DIGESTX_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_FLR_AQ_DIGESTX_W1S(a) (a)
#define arguments_CAVM_SSO_AF_FLR_AQ_DIGESTX_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_grpdis_digest#
 *
 * SSO AF GRPDIS Error Summary Registers
 * One bit per HWGRP to indicate which groups have reported an SSO_AF_ERR0[GRPDIS] error.
 */
union cavm_sso_af_grpdis_digestx
{
    uint64_t u;
    struct cavm_sso_af_grpdis_digestx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1C/H) One bit per HWGRP. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1C/H) One bit per HWGRP. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_grpdis_digestx_s cn; */
};
typedef union cavm_sso_af_grpdis_digestx cavm_sso_af_grpdis_digestx_t;

static inline uint64_t CAVM_SSO_AF_GRPDIS_DIGESTX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_GRPDIS_DIGESTX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=3))
        return 0x840070900600ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x840070900600ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x840070900600ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x840070900600ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("SSO_AF_GRPDIS_DIGESTX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_GRPDIS_DIGESTX(a) cavm_sso_af_grpdis_digestx_t
#define bustype_CAVM_SSO_AF_GRPDIS_DIGESTX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_GRPDIS_DIGESTX(a) "SSO_AF_GRPDIS_DIGESTX"
#define device_bar_CAVM_SSO_AF_GRPDIS_DIGESTX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_GRPDIS_DIGESTX(a) (a)
#define arguments_CAVM_SSO_AF_GRPDIS_DIGESTX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_grpdis_digest#_w1s
 *
 * SSO AF GRPDIS Error Summary Registers
 * This register reads or sets bits.
 */
union cavm_sso_af_grpdis_digestx_w1s
{
    uint64_t u;
    struct cavm_sso_af_grpdis_digestx_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_GRPDIS_DIGEST(0..3)[HWGRP]. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_GRPDIS_DIGEST(0..3)[HWGRP]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_grpdis_digestx_w1s_s cn10; */
    /* struct cavm_sso_af_grpdis_digestx_w1s_s cn10ka; */
    struct cavm_sso_af_grpdis_digestx_w1s_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_GRPDIS_DIGEST(0..1)[HWGRP]. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_GRPDIS_DIGEST(0..1)[HWGRP]. */
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_grpdis_digestx_w1s_s cnf10ka; */
    /* struct cavm_sso_af_grpdis_digestx_w1s_s cnf10kb; */
};
typedef union cavm_sso_af_grpdis_digestx_w1s cavm_sso_af_grpdis_digestx_w1s_t;

static inline uint64_t CAVM_SSO_AF_GRPDIS_DIGESTX_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_GRPDIS_DIGESTX_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=3))
        return 0x840070900700ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x840070900700ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x840070900700ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x840070900700ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("SSO_AF_GRPDIS_DIGESTX_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_GRPDIS_DIGESTX_W1S(a) cavm_sso_af_grpdis_digestx_w1s_t
#define bustype_CAVM_SSO_AF_GRPDIS_DIGESTX_W1S(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_GRPDIS_DIGESTX_W1S(a) "SSO_AF_GRPDIS_DIGESTX_W1S"
#define device_bar_CAVM_SSO_AF_GRPDIS_DIGESTX_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_GRPDIS_DIGESTX_W1S(a) (a)
#define arguments_CAVM_SSO_AF_GRPDIS_DIGESTX_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_gwe_cfg
 *
 * SSO AF Get-Work Examiner Configuration Register
 * This register controls the operation of the get-work examiner (GWE).
 */
union cavm_sso_af_gwe_cfg
{
    uint64_t u;
    struct cavm_sso_af_gwe_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t dis_wgt_credit        : 1;  /**< [  8:  8](R/W) Disable hardware group weight credits. When set, groups have infinite weight credit. */
        uint64_t ws_retries            : 8;  /**< [  7:  0](R/W) Workslot retries. When a given workslot performs this number of retries without
                                                                 successfully finding work then NO_WORK will be returned. Values zero, one, two,
                                                                 and three are reserved. */
#else /* Word 0 - Little Endian */
        uint64_t ws_retries            : 8;  /**< [  7:  0](R/W) Workslot retries. When a given workslot performs this number of retries without
                                                                 successfully finding work then NO_WORK will be returned. Values zero, one, two,
                                                                 and three are reserved. */
        uint64_t dis_wgt_credit        : 1;  /**< [  8:  8](R/W) Disable hardware group weight credits. When set, groups have infinite weight credit. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_gwe_cfg_s cn; */
};
typedef union cavm_sso_af_gwe_cfg cavm_sso_af_gwe_cfg_t;

#define CAVM_SSO_AF_GWE_CFG CAVM_SSO_AF_GWE_CFG_FUNC()
static inline uint64_t CAVM_SSO_AF_GWE_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_GWE_CFG_FUNC(void)
{
    return 0x840070001098ll;
}

#define typedef_CAVM_SSO_AF_GWE_CFG cavm_sso_af_gwe_cfg_t
#define bustype_CAVM_SSO_AF_GWE_CFG CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_GWE_CFG "SSO_AF_GWE_CFG"
#define device_bar_CAVM_SSO_AF_GWE_CFG 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_GWE_CFG 0
#define arguments_CAVM_SSO_AF_GWE_CFG -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_gwe_random
 *
 * SSO AF Get-Work Examiner Random Register
 * Reserved.
 */
union cavm_sso_af_gwe_random
{
    uint64_t u;
    struct cavm_sso_af_gwe_random_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t rnd                   : 16; /**< [ 15:  0](RAZ) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t rnd                   : 16; /**< [ 15:  0](RAZ) Reserved. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_gwe_random_s cn; */
};
typedef union cavm_sso_af_gwe_random cavm_sso_af_gwe_random_t;

#define CAVM_SSO_AF_GWE_RANDOM CAVM_SSO_AF_GWE_RANDOM_FUNC()
static inline uint64_t CAVM_SSO_AF_GWE_RANDOM_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_GWE_RANDOM_FUNC(void)
{
    return 0x8400700010b0ll;
}

#define typedef_CAVM_SSO_AF_GWE_RANDOM cavm_sso_af_gwe_random_t
#define bustype_CAVM_SSO_AF_GWE_RANDOM CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_GWE_RANDOM "SSO_AF_GWE_RANDOM"
#define device_bar_CAVM_SSO_AF_GWE_RANDOM 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_GWE_RANDOM 0
#define arguments_CAVM_SSO_AF_GWE_RANDOM -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_gws_inv
 *
 * SSO AF Guest Workslot SAI Invalidate Register
 * Sends an SAI Invalidate request to a guest workslot.
 */
union cavm_sso_af_gws_inv
{
    uint64_t u;
    struct cavm_sso_af_gws_inv_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t pf_func               : 16; /**< [ 31: 16](RO/H) PF_FUNC of GWS to be invalidated. */
        uint64_t reserved_12_15        : 4;
        uint64_t slot                  : 8;  /**< [ 11:  4](RO/H) Slot of GWS to be invalidated. */
        uint64_t reserved_3            : 1;
        uint64_t inval_err             : 1;  /**< [  2:  2](RO/H) When set, the invalidation of any GW cache entries associated with this GWS
                                                                 encountered an error. */
        uint64_t inval_pend            : 1;  /**< [  1:  1](RO/H) When set, the invalidation of any GW cache entries associated with
                                                                 this GWS is pending. */
        uint64_t sai_inval             : 1;  /**< [  0:  0](RO/H) When written to one, invalidate any GW cache entries associated with this GWS. */
#else /* Word 0 - Little Endian */
        uint64_t sai_inval             : 1;  /**< [  0:  0](RO/H) When written to one, invalidate any GW cache entries associated with this GWS. */
        uint64_t inval_pend            : 1;  /**< [  1:  1](RO/H) When set, the invalidation of any GW cache entries associated with
                                                                 this GWS is pending. */
        uint64_t inval_err             : 1;  /**< [  2:  2](RO/H) When set, the invalidation of any GW cache entries associated with this GWS
                                                                 encountered an error. */
        uint64_t reserved_3            : 1;
        uint64_t slot                  : 8;  /**< [ 11:  4](RO/H) Slot of GWS to be invalidated. */
        uint64_t reserved_12_15        : 4;
        uint64_t pf_func               : 16; /**< [ 31: 16](RO/H) PF_FUNC of GWS to be invalidated. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_gws_inv_s cn; */
};
typedef union cavm_sso_af_gws_inv cavm_sso_af_gws_inv_t;

#define CAVM_SSO_AF_GWS_INV CAVM_SSO_AF_GWS_INV_FUNC()
static inline uint64_t CAVM_SSO_AF_GWS_INV_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_GWS_INV_FUNC(void)
{
    return 0x840070001060ll;
}

#define typedef_CAVM_SSO_AF_GWS_INV cavm_sso_af_gws_inv_t
#define bustype_CAVM_SSO_AF_GWS_INV CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_GWS_INV "SSO_AF_GWS_INV"
#define device_bar_CAVM_SSO_AF_GWS_INV 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_GWS_INV 0
#define arguments_CAVM_SSO_AF_GWS_INV -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_hwgrp#_aw_cfg
 *
 * SSO AF Per-Group Add-Work Configuration Register
 * This register controls the operation of the add-work block (AW).
 */
union cavm_sso_af_hwgrpx_aw_cfg
{
    uint64_t u;
    struct cavm_sso_af_hwgrpx_aw_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_11_63        : 53;
        uint64_t swtag_dis             : 1;  /**< [ 10: 10](R/W) Disallow SWTAG operations to this group when set. */
        uint64_t rd_psn_ign            : 1;  /**< [  9:  9](R/W) Ignore POISON when reading XAQ entries. */
        uint64_t reserved_8            : 1;
        uint64_t lol                   : 1;  /**< [  7:  7](R/W) Reserved. */
        uint64_t xaq_alloc_dis         : 1;  /**< [  6:  6](R/W) Disable NPA alloc requests to fill the SSO page cache.
                                                                 When this bit is set, all existing cached free pointers will be returned to NPA,
                                                                 software needs to wait for SSO_AF_HWGRP()_AW_STATUS[XAQ_BUF_CACHED] to be zero
                                                                 before sending traffic to that group. */
        uint64_t reserved_5            : 1;
        uint64_t xaq_byp_dis           : 1;  /**< [  4:  4](R/W) Disable bypass path in add-work engine. For diagnostic use only. */
        uint64_t stt                   : 1;  /**< [  3:  3](R/W) Use STT to bypass LLC allocation for XAQ store operations. When this bit is not set it uses STF. */
        uint64_t ldt                   : 1;  /**< [  2:  2](R/W) Use LDT to bypass LLC allocation for XAQ load operations when [LDWB] is not
                                                                 set. When [LDT] and [LDWB] are both clear, uses LDD load type. */
        uint64_t ldwb                  : 1;  /**< [  1:  1](R/W) When reading XAQ cache lines, use LDWB transactions to invalidate the cache
                                                                 line. When clear, use [LDT] to determine load type. */
        uint64_t rwen                  : 1;  /**< [  0:  0](R/W/H) Enable XAQ operations. This bit should be set after SSO_AF_XAQ()_HEAD_PTR and
                                                                 SSO_AF_XAQ()_TAIL_PTR have been programmed. If cleared, all cached buffers will be
                                                                 returned to NPA as soon as possible, and TAQ arbitration is simplified. */
#else /* Word 0 - Little Endian */
        uint64_t rwen                  : 1;  /**< [  0:  0](R/W/H) Enable XAQ operations. This bit should be set after SSO_AF_XAQ()_HEAD_PTR and
                                                                 SSO_AF_XAQ()_TAIL_PTR have been programmed. If cleared, all cached buffers will be
                                                                 returned to NPA as soon as possible, and TAQ arbitration is simplified. */
        uint64_t ldwb                  : 1;  /**< [  1:  1](R/W) When reading XAQ cache lines, use LDWB transactions to invalidate the cache
                                                                 line. When clear, use [LDT] to determine load type. */
        uint64_t ldt                   : 1;  /**< [  2:  2](R/W) Use LDT to bypass LLC allocation for XAQ load operations when [LDWB] is not
                                                                 set. When [LDT] and [LDWB] are both clear, uses LDD load type. */
        uint64_t stt                   : 1;  /**< [  3:  3](R/W) Use STT to bypass LLC allocation for XAQ store operations. When this bit is not set it uses STF. */
        uint64_t xaq_byp_dis           : 1;  /**< [  4:  4](R/W) Disable bypass path in add-work engine. For diagnostic use only. */
        uint64_t reserved_5            : 1;
        uint64_t xaq_alloc_dis         : 1;  /**< [  6:  6](R/W) Disable NPA alloc requests to fill the SSO page cache.
                                                                 When this bit is set, all existing cached free pointers will be returned to NPA,
                                                                 software needs to wait for SSO_AF_HWGRP()_AW_STATUS[XAQ_BUF_CACHED] to be zero
                                                                 before sending traffic to that group. */
        uint64_t lol                   : 1;  /**< [  7:  7](R/W) Reserved. */
        uint64_t reserved_8            : 1;
        uint64_t rd_psn_ign            : 1;  /**< [  9:  9](R/W) Ignore POISON when reading XAQ entries. */
        uint64_t swtag_dis             : 1;  /**< [ 10: 10](R/W) Disallow SWTAG operations to this group when set. */
        uint64_t reserved_11_63        : 53;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_hwgrpx_aw_cfg_s cn; */
};
typedef union cavm_sso_af_hwgrpx_aw_cfg cavm_sso_af_hwgrpx_aw_cfg_t;

static inline uint64_t CAVM_SSO_AF_HWGRPX_AW_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_HWGRPX_AW_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x840070200120ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x840070200120ll + 0x1000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x840070200120ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x840070200120ll + 0x1000ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_HWGRPX_AW_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_HWGRPX_AW_CFG(a) cavm_sso_af_hwgrpx_aw_cfg_t
#define bustype_CAVM_SSO_AF_HWGRPX_AW_CFG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_HWGRPX_AW_CFG(a) "SSO_AF_HWGRPX_AW_CFG"
#define device_bar_CAVM_SSO_AF_HWGRPX_AW_CFG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_HWGRPX_AW_CFG(a) (a)
#define arguments_CAVM_SSO_AF_HWGRPX_AW_CFG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_hwgrp#_aw_fwd
 *
 * SSO AF Hardware Forwarding Register
 * The HWGRP this group forwards to. Resets to HWGRP.
 */
union cavm_sso_af_hwgrpx_aw_fwd
{
    uint64_t u;
    struct cavm_sso_af_hwgrpx_aw_fwd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t fwgrp                 : 8;  /**< [  7:  0](R/W) The HWGRP this group forwards to. */
#else /* Word 0 - Little Endian */
        uint64_t fwgrp                 : 8;  /**< [  7:  0](R/W) The HWGRP this group forwards to. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_hwgrpx_aw_fwd_s cn10; */
    /* struct cavm_sso_af_hwgrpx_aw_fwd_s cn10ka; */
    struct cavm_sso_af_hwgrpx_aw_fwd_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t fwgrp                 : 7;  /**< [  6:  0](R/W) The HWGRP this group forwards to. */
#else /* Word 0 - Little Endian */
        uint64_t fwgrp                 : 7;  /**< [  6:  0](R/W) The HWGRP this group forwards to. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_hwgrpx_aw_fwd_s cnf10ka; */
    /* struct cavm_sso_af_hwgrpx_aw_fwd_s cnf10kb; */
};
typedef union cavm_sso_af_hwgrpx_aw_fwd cavm_sso_af_hwgrpx_aw_fwd_t;

static inline uint64_t CAVM_SSO_AF_HWGRPX_AW_FWD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_HWGRPX_AW_FWD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x840070200030ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x840070200030ll + 0x1000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x840070200030ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x840070200030ll + 0x1000ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_HWGRPX_AW_FWD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_HWGRPX_AW_FWD(a) cavm_sso_af_hwgrpx_aw_fwd_t
#define bustype_CAVM_SSO_AF_HWGRPX_AW_FWD(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_HWGRPX_AW_FWD(a) "SSO_AF_HWGRPX_AW_FWD"
#define device_bar_CAVM_SSO_AF_HWGRPX_AW_FWD(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_HWGRPX_AW_FWD(a) (a)
#define arguments_CAVM_SSO_AF_HWGRPX_AW_FWD(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_hwgrp#_aw_status
 *
 * SSO AF Hardware Group Add-Work Status Register
 * This register indicates the status of the add-work block (AW) for HWGRP {a}.
 */
union cavm_sso_af_hwgrpx_aw_status
{
    uint64_t u;
    struct cavm_sso_af_hwgrpx_aw_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_22_63        : 42;
        uint64_t aw_inflight           : 6;  /**< [ 21: 16](RO/H) The number of addworks in LWA add-work interfaces and software addworks in the
                                                                 input FIFOs, which are not yet included in the TAQ count. */
        uint64_t reserved_14_15        : 2;
        uint64_t error_recovery_w1s    : 1;  /**< [ 13: 13](R/W1S) Software initiated Error Recovery. Status reflected in ERROR_RECOVERY. */
        uint64_t error_recovery        : 1;  /**< [ 12: 12](R/W1C/H) The SSO is trying to cleanup this group after receiving an error'd response. */
        uint64_t npa_return            : 1;  /**< [ 11: 11](RO/H) The SSO buffer pool manager has a pointer return for this group in progress. */
        uint64_t tptr_next_vld         : 1;  /**< [ 10: 10](R/W1C/H) The tail next pointer in SSO_AF_XAQ()_TAIL_NEXT is valid.
                                                                 This field is normally written by hardware, but must be cleared by software on
                                                                 an FLR.

                                                                 SSO_AF_HWGRP()_AW_CFG[RWEN] should be cleared before modifying this field.
                                                                 In addition, software should wait for [NPA_FETCH] to be clear before modifying this bit. */
        uint64_t npa_fetch             : 1;  /**< [  9:  9](RO) The SSO buffer pool manager has a pointer fetch for this group in progress.

                                                                 Software should wait for this bit to be clear before clearing [TPTR_VLD]. */
        uint64_t tptr_vld              : 1;  /**< [  8:  8](R/W1C/H) The tail pointer in SSO_AF_XAQ()_TAIL_PTR is valid.
                                                                 This field is normally written by hardware, but must be cleared by software on
                                                                 an FLR.

                                                                 SSO_AF_HWGRP()_AW_CFG[RWEN] should be cleared before modifying this field.
                                                                 In addition, software should wait for [NPA_FETCH] to be clear before modifying this bit. */
        uint64_t reserved_5_7          : 3;
        uint64_t init_fail             : 1;  /**< [  4:  4](R/W1C/H) The NPA pointer initialization for this group failed.
                                                                 This error is reported after receiving more than 3 null pointers for  the
                                                                 same group during the initialization phase.
                                                                 This error is also reported via SSO_AF_ERR0[NPA] interrupt.
                                                                 XAQ operation for this group will be disabled after this [INIT_FAIL] failure,
                                                                 see SSO_AF_HWGRP()_AW_CFG[RWEN]. */
        uint64_t init_done             : 1;  /**< [  3:  3](RO/H) The NPA pointer initialization for this group is done. */
        uint64_t xaq_buf_cached        : 3;  /**< [  2:  0](RO/H) Indicates number of NPA buffers cached inside SSO for this group. This does not
                                                                 include pointers in the tail pointer memory. */
#else /* Word 0 - Little Endian */
        uint64_t xaq_buf_cached        : 3;  /**< [  2:  0](RO/H) Indicates number of NPA buffers cached inside SSO for this group. This does not
                                                                 include pointers in the tail pointer memory. */
        uint64_t init_done             : 1;  /**< [  3:  3](RO/H) The NPA pointer initialization for this group is done. */
        uint64_t init_fail             : 1;  /**< [  4:  4](R/W1C/H) The NPA pointer initialization for this group failed.
                                                                 This error is reported after receiving more than 3 null pointers for  the
                                                                 same group during the initialization phase.
                                                                 This error is also reported via SSO_AF_ERR0[NPA] interrupt.
                                                                 XAQ operation for this group will be disabled after this [INIT_FAIL] failure,
                                                                 see SSO_AF_HWGRP()_AW_CFG[RWEN]. */
        uint64_t reserved_5_7          : 3;
        uint64_t tptr_vld              : 1;  /**< [  8:  8](R/W1C/H) The tail pointer in SSO_AF_XAQ()_TAIL_PTR is valid.
                                                                 This field is normally written by hardware, but must be cleared by software on
                                                                 an FLR.

                                                                 SSO_AF_HWGRP()_AW_CFG[RWEN] should be cleared before modifying this field.
                                                                 In addition, software should wait for [NPA_FETCH] to be clear before modifying this bit. */
        uint64_t npa_fetch             : 1;  /**< [  9:  9](RO) The SSO buffer pool manager has a pointer fetch for this group in progress.

                                                                 Software should wait for this bit to be clear before clearing [TPTR_VLD]. */
        uint64_t tptr_next_vld         : 1;  /**< [ 10: 10](R/W1C/H) The tail next pointer in SSO_AF_XAQ()_TAIL_NEXT is valid.
                                                                 This field is normally written by hardware, but must be cleared by software on
                                                                 an FLR.

                                                                 SSO_AF_HWGRP()_AW_CFG[RWEN] should be cleared before modifying this field.
                                                                 In addition, software should wait for [NPA_FETCH] to be clear before modifying this bit. */
        uint64_t npa_return            : 1;  /**< [ 11: 11](RO/H) The SSO buffer pool manager has a pointer return for this group in progress. */
        uint64_t error_recovery        : 1;  /**< [ 12: 12](R/W1C/H) The SSO is trying to cleanup this group after receiving an error'd response. */
        uint64_t error_recovery_w1s    : 1;  /**< [ 13: 13](R/W1S) Software initiated Error Recovery. Status reflected in ERROR_RECOVERY. */
        uint64_t reserved_14_15        : 2;
        uint64_t aw_inflight           : 6;  /**< [ 21: 16](RO/H) The number of addworks in LWA add-work interfaces and software addworks in the
                                                                 input FIFOs, which are not yet included in the TAQ count. */
        uint64_t reserved_22_63        : 42;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_hwgrpx_aw_status_s cn10; */
    struct cavm_sso_af_hwgrpx_aw_status_cn10ka_p1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_22_63        : 42;
        uint64_t aw_inflight           : 6;  /**< [ 21: 16](RO/H) The number of addworks in LWA add-work interfaces and software addworks in the
                                                                 input FIFOs, which are not yet included in the TAQ count. */
        uint64_t reserved_11_15        : 5;
        uint64_t tptr_next_vld         : 1;  /**< [ 10: 10](R/W1C/H) The tail next pointer in SSO_AF_XAQ()_TAIL_NEXT is valid.
                                                                 This field is normally written by hardware, but must be cleared by software on
                                                                 an FLR.

                                                                 SSO_AF_HWGRP()_AW_CFG[RWEN] should be cleared before modifying this field.
                                                                 In addition, software should wait for [NPA_FETCH] to be clear before modifying this bit. */
        uint64_t npa_fetch             : 1;  /**< [  9:  9](RO) The SSO buffer pool manager has a pointer fetch for this group in progress.

                                                                 Software should wait for this bit to be clear before clearing [TPTR_VLD]. */
        uint64_t tptr_vld              : 1;  /**< [  8:  8](R/W1C/H) The tail pointer in SSO_AF_XAQ()_TAIL_PTR is valid.
                                                                 This field is normally written by hardware, but must be cleared by software on
                                                                 an FLR.

                                                                 SSO_AF_HWGRP()_AW_CFG[RWEN] should be cleared before modifying this field.
                                                                 In addition, software should wait for [NPA_FETCH] to be clear before modifying this bit. */
        uint64_t reserved_5_7          : 3;
        uint64_t init_fail             : 1;  /**< [  4:  4](R/W1C/H) The NPA pointer initialization for this group failed.
                                                                 This error is reported after receiving more than 3 null pointers for  the
                                                                 same group during the initialization phase.
                                                                 This error is also reported via SSO_AF_ERR0[NPA] interrupt.
                                                                 XAQ operation for this group will be disabled after this [INIT_FAIL] failure,
                                                                 see SSO_AF_HWGRP()_AW_CFG[RWEN]. */
        uint64_t init_done             : 1;  /**< [  3:  3](RO/H) The NPA pointer initialization for this group is done. */
        uint64_t xaq_buf_cached        : 3;  /**< [  2:  0](RO/H) Indicates number of NPA buffers cached inside SSO for this group. This does not
                                                                 include pointers in the tail pointer memory. */
#else /* Word 0 - Little Endian */
        uint64_t xaq_buf_cached        : 3;  /**< [  2:  0](RO/H) Indicates number of NPA buffers cached inside SSO for this group. This does not
                                                                 include pointers in the tail pointer memory. */
        uint64_t init_done             : 1;  /**< [  3:  3](RO/H) The NPA pointer initialization for this group is done. */
        uint64_t init_fail             : 1;  /**< [  4:  4](R/W1C/H) The NPA pointer initialization for this group failed.
                                                                 This error is reported after receiving more than 3 null pointers for  the
                                                                 same group during the initialization phase.
                                                                 This error is also reported via SSO_AF_ERR0[NPA] interrupt.
                                                                 XAQ operation for this group will be disabled after this [INIT_FAIL] failure,
                                                                 see SSO_AF_HWGRP()_AW_CFG[RWEN]. */
        uint64_t reserved_5_7          : 3;
        uint64_t tptr_vld              : 1;  /**< [  8:  8](R/W1C/H) The tail pointer in SSO_AF_XAQ()_TAIL_PTR is valid.
                                                                 This field is normally written by hardware, but must be cleared by software on
                                                                 an FLR.

                                                                 SSO_AF_HWGRP()_AW_CFG[RWEN] should be cleared before modifying this field.
                                                                 In addition, software should wait for [NPA_FETCH] to be clear before modifying this bit. */
        uint64_t npa_fetch             : 1;  /**< [  9:  9](RO) The SSO buffer pool manager has a pointer fetch for this group in progress.

                                                                 Software should wait for this bit to be clear before clearing [TPTR_VLD]. */
        uint64_t tptr_next_vld         : 1;  /**< [ 10: 10](R/W1C/H) The tail next pointer in SSO_AF_XAQ()_TAIL_NEXT is valid.
                                                                 This field is normally written by hardware, but must be cleared by software on
                                                                 an FLR.

                                                                 SSO_AF_HWGRP()_AW_CFG[RWEN] should be cleared before modifying this field.
                                                                 In addition, software should wait for [NPA_FETCH] to be clear before modifying this bit. */
        uint64_t reserved_11_15        : 5;
        uint64_t aw_inflight           : 6;  /**< [ 21: 16](RO/H) The number of addworks in LWA add-work interfaces and software addworks in the
                                                                 input FIFOs, which are not yet included in the TAQ count. */
        uint64_t reserved_22_63        : 42;
#endif /* Word 0 - End */
    } cn10ka_p1;
    /* struct cavm_sso_af_hwgrpx_aw_status_s cn10ka_p2; */
    /* struct cavm_sso_af_hwgrpx_aw_status_s cn10kb; */
    /* struct cavm_sso_af_hwgrpx_aw_status_cn10ka_p1 cnf10ka; */
    /* struct cavm_sso_af_hwgrpx_aw_status_cn10ka_p1 cnf10kb; */
};
typedef union cavm_sso_af_hwgrpx_aw_status cavm_sso_af_hwgrpx_aw_status_t;

static inline uint64_t CAVM_SSO_AF_HWGRPX_AW_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_HWGRPX_AW_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x840070200110ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x840070200110ll + 0x1000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x840070200110ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x840070200110ll + 0x1000ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_HWGRPX_AW_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_HWGRPX_AW_STATUS(a) cavm_sso_af_hwgrpx_aw_status_t
#define bustype_CAVM_SSO_AF_HWGRPX_AW_STATUS(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_HWGRPX_AW_STATUS(a) "SSO_AF_HWGRPX_AW_STATUS"
#define device_bar_CAVM_SSO_AF_HWGRPX_AW_STATUS(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_HWGRPX_AW_STATUS(a) (a)
#define arguments_CAVM_SSO_AF_HWGRPX_AW_STATUS(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_hwgrp#_aw_tagspace
 *
 * SSO AF Per-Group Add-Work Configuration Register
 * This register controls the operation of the add-work block (AW).
 */
union cavm_sso_af_hwgrpx_aw_tagspace
{
    uint64_t u;
    struct cavm_sso_af_hwgrpx_aw_tagspace_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t tagspace              : 8;  /**< [  7:  0](R/W) The tag space assigned to this group. All work-queue entries added to
                                                                 this group will use this tag space, and all tag ordering and atomicity
                                                                 checks will be restricted to work from hardware groups with the same
                                                                 tag space (regardless of what PF_FUNCs those hardware groups are
                                                                 assigned to). */
#else /* Word 0 - Little Endian */
        uint64_t tagspace              : 8;  /**< [  7:  0](R/W) The tag space assigned to this group. All work-queue entries added to
                                                                 this group will use this tag space, and all tag ordering and atomicity
                                                                 checks will be restricted to work from hardware groups with the same
                                                                 tag space (regardless of what PF_FUNCs those hardware groups are
                                                                 assigned to). */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_hwgrpx_aw_tagspace_s cn; */
};
typedef union cavm_sso_af_hwgrpx_aw_tagspace cavm_sso_af_hwgrpx_aw_tagspace_t;

static inline uint64_t CAVM_SSO_AF_HWGRPX_AW_TAGSPACE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_HWGRPX_AW_TAGSPACE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x840070200130ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x840070200130ll + 0x1000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x840070200130ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x840070200130ll + 0x1000ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_HWGRPX_AW_TAGSPACE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_HWGRPX_AW_TAGSPACE(a) cavm_sso_af_hwgrpx_aw_tagspace_t
#define bustype_CAVM_SSO_AF_HWGRPX_AW_TAGSPACE(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_HWGRPX_AW_TAGSPACE(a) "SSO_AF_HWGRPX_AW_TAGSPACE"
#define device_bar_CAVM_SSO_AF_HWGRPX_AW_TAGSPACE(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_HWGRPX_AW_TAGSPACE(a) (a)
#define arguments_CAVM_SSO_AF_HWGRPX_AW_TAGSPACE(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_hwgrp#_dq_pc
 *
 * SSO AF Hardware Group Work-Descheduled Performance Counter Register
 * Counts the number of work schedules of descheduled work for each hardware group. The
 * counter rolls over through zero when the maximum value is exceeded.
 */
union cavm_sso_af_hwgrpx_dq_pc
{
    uint64_t u;
    struct cavm_sso_af_hwgrpx_dq_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Work deschedule performance counter for hardware group. Writes are for diagnostic
                                                                 use only, and defined only when neither work nor GET_WORKs are present in the
                                                                 SSO. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Work deschedule performance counter for hardware group. Writes are for diagnostic
                                                                 use only, and defined only when neither work nor GET_WORKs are present in the
                                                                 SSO. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_hwgrpx_dq_pc_s cn; */
};
typedef union cavm_sso_af_hwgrpx_dq_pc cavm_sso_af_hwgrpx_dq_pc_t;

static inline uint64_t CAVM_SSO_AF_HWGRPX_DQ_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_HWGRPX_DQ_PC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x8400702000a0ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x8400702000a0ll + 0x1000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x8400702000a0ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x8400702000a0ll + 0x1000ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_HWGRPX_DQ_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_HWGRPX_DQ_PC(a) cavm_sso_af_hwgrpx_dq_pc_t
#define bustype_CAVM_SSO_AF_HWGRPX_DQ_PC(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_HWGRPX_DQ_PC(a) "SSO_AF_HWGRPX_DQ_PC"
#define device_bar_CAVM_SSO_AF_HWGRPX_DQ_PC(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_HWGRPX_DQ_PC(a) (a)
#define arguments_CAVM_SSO_AF_HWGRPX_DQ_PC(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_hwgrp#_ds_pc
 *
 * SSO AF Hardware Group Deschedule Performance Counter Register
 * Counts the number of deschedule requests for each hardware group. Counter rolls over
 * through zero when the maximum value is exceeded.
 */
union cavm_sso_af_hwgrpx_ds_pc
{
    uint64_t u;
    struct cavm_sso_af_hwgrpx_ds_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Deschedule performance counter. Writes are for diagnostic use only, and defined only when
                                                                 neither work nor GET_WORKs are present in the SSO. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Deschedule performance counter. Writes are for diagnostic use only, and defined only when
                                                                 neither work nor GET_WORKs are present in the SSO. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_hwgrpx_ds_pc_s cn; */
};
typedef union cavm_sso_af_hwgrpx_ds_pc cavm_sso_af_hwgrpx_ds_pc_t;

static inline uint64_t CAVM_SSO_AF_HWGRPX_DS_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_HWGRPX_DS_PC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x840070200090ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x840070200090ll + 0x1000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x840070200090ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x840070200090ll + 0x1000ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_HWGRPX_DS_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_HWGRPX_DS_PC(a) cavm_sso_af_hwgrpx_ds_pc_t
#define bustype_CAVM_SSO_AF_HWGRPX_DS_PC(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_HWGRPX_DS_PC(a) "SSO_AF_HWGRPX_DS_PC"
#define device_bar_CAVM_SSO_AF_HWGRPX_DS_PC(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_HWGRPX_DS_PC(a) (a)
#define arguments_CAVM_SSO_AF_HWGRPX_DS_PC(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_hwgrp#_ext_pc
 *
 * SSO AF Hardware Group External Schedule Performance Counter Register
 * Counts the number of cache lines of WAEs sent to LLC/DRAM. Counter rolls over
 * through zero when the maximum value is exceeded.
 */
union cavm_sso_af_hwgrpx_ext_pc
{
    uint64_t u;
    struct cavm_sso_af_hwgrpx_ext_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) External admission queue cache lines written. Each write corresponds to 11 WAEs. Writes
                                                                 are for diagnostic use only, and defined only when neither work nor GET_WORKs are present
                                                                 in the SSO. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) External admission queue cache lines written. Each write corresponds to 11 WAEs. Writes
                                                                 are for diagnostic use only, and defined only when neither work nor GET_WORKs are present
                                                                 in the SSO. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_hwgrpx_ext_pc_s cn; */
};
typedef union cavm_sso_af_hwgrpx_ext_pc cavm_sso_af_hwgrpx_ext_pc_t;

static inline uint64_t CAVM_SSO_AF_HWGRPX_EXT_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_HWGRPX_EXT_PC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x840070200060ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x840070200060ll + 0x1000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x840070200060ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x840070200060ll + 0x1000ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_HWGRPX_EXT_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_HWGRPX_EXT_PC(a) cavm_sso_af_hwgrpx_ext_pc_t
#define bustype_CAVM_SSO_AF_HWGRPX_EXT_PC(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_HWGRPX_EXT_PC(a) "SSO_AF_HWGRPX_EXT_PC"
#define device_bar_CAVM_SSO_AF_HWGRPX_EXT_PC(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_HWGRPX_EXT_PC(a) (a)
#define arguments_CAVM_SSO_AF_HWGRPX_EXT_PC(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_hwgrp#_iaq_thr
 *
 * SSO AF Hardware Group In-unit Admission Queue Threshold Registers
 * These registers contain the thresholds for allocating SSO in-unit admission queue entries.
 */
union cavm_sso_af_hwgrpx_iaq_thr
{
    uint64_t u;
    struct cavm_sso_af_hwgrpx_iaq_thr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_62_63        : 2;
        uint64_t grp_cnt               : 14; /**< [ 61: 48](RO/H) Hardware group's entry count. Number of internal entries allocated to IAQ,
                                                                 conflicted work, or CQ in this hardware group. */
        uint64_t reserved_46_47        : 2;
        uint64_t max_thr               : 14; /**< [ 45: 32](R/W) Max threshold for this internal admission queue. If nonzero, must be \>= [RSVD_THR] + 4.
                                                                 To ensure full streaming performance to all cores, should be at least 208. Must not be
                                                                 changed after traffic is sent to this hardware group. */
        uint64_t reserved_14_31        : 18;
        uint64_t rsvd_thr              : 14; /**< [ 13:  0](R/W) Threshold for reserved entries for this internal hardware group queue. Should be
                                                                 at least 0x1 for any hardware groups that must make forward progress when other
                                                                 hardware group's work is pending. Updates to this field must also update
                                                                 SSO_AF_AW_ADD[RSVD_FREE]. Must not be changed after traffic is sent to this
                                                                 hardware group. */
#else /* Word 0 - Little Endian */
        uint64_t rsvd_thr              : 14; /**< [ 13:  0](R/W) Threshold for reserved entries for this internal hardware group queue. Should be
                                                                 at least 0x1 for any hardware groups that must make forward progress when other
                                                                 hardware group's work is pending. Updates to this field must also update
                                                                 SSO_AF_AW_ADD[RSVD_FREE]. Must not be changed after traffic is sent to this
                                                                 hardware group. */
        uint64_t reserved_14_31        : 18;
        uint64_t max_thr               : 14; /**< [ 45: 32](R/W) Max threshold for this internal admission queue. If nonzero, must be \>= [RSVD_THR] + 4.
                                                                 To ensure full streaming performance to all cores, should be at least 208. Must not be
                                                                 changed after traffic is sent to this hardware group. */
        uint64_t reserved_46_47        : 2;
        uint64_t grp_cnt               : 14; /**< [ 61: 48](RO/H) Hardware group's entry count. Number of internal entries allocated to IAQ,
                                                                 conflicted work, or CQ in this hardware group. */
        uint64_t reserved_62_63        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_hwgrpx_iaq_thr_s cn10; */
    /* struct cavm_sso_af_hwgrpx_iaq_thr_s cn10ka; */
    struct cavm_sso_af_hwgrpx_iaq_thr_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_61_63        : 3;
        uint64_t grp_cnt               : 13; /**< [ 60: 48](RO/H) Hardware group's entry count. Number of internal entries allocated to IAQ,
                                                                 conflicted work, or CQ in this hardware group. */
        uint64_t reserved_45_47        : 3;
        uint64_t max_thr               : 13; /**< [ 44: 32](R/W) Max threshold for this internal admission queue. If nonzero, must be \>= [RSVD_THR] + 4.
                                                                 To ensure full streaming performance to all cores, should be at least 208. Must not be
                                                                 changed after traffic is sent to this hardware group. */
        uint64_t reserved_13_31        : 19;
        uint64_t rsvd_thr              : 13; /**< [ 12:  0](R/W) Threshold for reserved entries for this internal hardware group queue. Should be
                                                                 at least 0x1 for any hardware groups that must make forward progress when other
                                                                 hardware group's work is pending. Updates to this field must also update
                                                                 SSO_AF_AW_ADD[RSVD_FREE]. Must not be changed after traffic is sent to this
                                                                 hardware group. */
#else /* Word 0 - Little Endian */
        uint64_t rsvd_thr              : 13; /**< [ 12:  0](R/W) Threshold for reserved entries for this internal hardware group queue. Should be
                                                                 at least 0x1 for any hardware groups that must make forward progress when other
                                                                 hardware group's work is pending. Updates to this field must also update
                                                                 SSO_AF_AW_ADD[RSVD_FREE]. Must not be changed after traffic is sent to this
                                                                 hardware group. */
        uint64_t reserved_13_31        : 19;
        uint64_t max_thr               : 13; /**< [ 44: 32](R/W) Max threshold for this internal admission queue. If nonzero, must be \>= [RSVD_THR] + 4.
                                                                 To ensure full streaming performance to all cores, should be at least 208. Must not be
                                                                 changed after traffic is sent to this hardware group. */
        uint64_t reserved_45_47        : 3;
        uint64_t grp_cnt               : 13; /**< [ 60: 48](RO/H) Hardware group's entry count. Number of internal entries allocated to IAQ,
                                                                 conflicted work, or CQ in this hardware group. */
        uint64_t reserved_61_63        : 3;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_hwgrpx_iaq_thr_s cnf10ka; */
    /* struct cavm_sso_af_hwgrpx_iaq_thr_s cnf10kb; */
};
typedef union cavm_sso_af_hwgrpx_iaq_thr cavm_sso_af_hwgrpx_iaq_thr_t;

static inline uint64_t CAVM_SSO_AF_HWGRPX_IAQ_THR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_HWGRPX_IAQ_THR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x840070200000ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x840070200000ll + 0x1000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x840070200000ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x840070200000ll + 0x1000ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_HWGRPX_IAQ_THR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_HWGRPX_IAQ_THR(a) cavm_sso_af_hwgrpx_iaq_thr_t
#define bustype_CAVM_SSO_AF_HWGRPX_IAQ_THR(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_HWGRPX_IAQ_THR(a) "SSO_AF_HWGRPX_IAQ_THR"
#define device_bar_CAVM_SSO_AF_HWGRPX_IAQ_THR(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_HWGRPX_IAQ_THR(a) (a)
#define arguments_CAVM_SSO_AF_HWGRPX_IAQ_THR(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_hwgrp#_iu_accnt
 *
 * SSO AF Hardware Group In-Unit Account Index Registers
 * These registers assign an in-unit accounting index to each hardware group.
 */
union cavm_sso_af_hwgrpx_iu_accnt
{
    uint64_t u;
    struct cavm_sso_af_hwgrpx_iu_accnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t ena                   : 1;  /**< [ 16: 16](R/W) Enable the use of the in-unit accounting index. When clear, the
                                                                 hardware group does not participate in any in-unit accounting index.

                                                                 Note that the per-group IAQ thresholds in SSO_AF_HWGRP()_IAQ_THR and
                                                                 SSO_LF_GGRP_INT_THR[IAQ_THR] always apply, regardless of the in-unit
                                                                 accounting index. */
        uint64_t reserved_8_15         : 8;
        uint64_t accnt_indx            : 8;  /**< [  7:  0](R/W) In-unit accounting index assigned to this hardware group. */
#else /* Word 0 - Little Endian */
        uint64_t accnt_indx            : 8;  /**< [  7:  0](R/W) In-unit accounting index assigned to this hardware group. */
        uint64_t reserved_8_15         : 8;
        uint64_t ena                   : 1;  /**< [ 16: 16](R/W) Enable the use of the in-unit accounting index. When clear, the
                                                                 hardware group does not participate in any in-unit accounting index.

                                                                 Note that the per-group IAQ thresholds in SSO_AF_HWGRP()_IAQ_THR and
                                                                 SSO_LF_GGRP_INT_THR[IAQ_THR] always apply, regardless of the in-unit
                                                                 accounting index. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_hwgrpx_iu_accnt_s cn10; */
    /* struct cavm_sso_af_hwgrpx_iu_accnt_s cn10ka; */
    struct cavm_sso_af_hwgrpx_iu_accnt_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t ena                   : 1;  /**< [ 16: 16](R/W) Enable the use of the in-unit accounting index. When clear, the
                                                                 hardware group does not participate in any in-unit accounting index.

                                                                 Note that the per-group IAQ thresholds in SSO_AF_HWGRP()_IAQ_THR and
                                                                 SSO_LF_GGRP_INT_THR[IAQ_THR] always apply, regardless of the in-unit
                                                                 accounting index. */
        uint64_t reserved_7_15         : 9;
        uint64_t accnt_indx            : 7;  /**< [  6:  0](R/W) In-unit accounting index assigned to this hardware group. */
#else /* Word 0 - Little Endian */
        uint64_t accnt_indx            : 7;  /**< [  6:  0](R/W) In-unit accounting index assigned to this hardware group. */
        uint64_t reserved_7_15         : 9;
        uint64_t ena                   : 1;  /**< [ 16: 16](R/W) Enable the use of the in-unit accounting index. When clear, the
                                                                 hardware group does not participate in any in-unit accounting index.

                                                                 Note that the per-group IAQ thresholds in SSO_AF_HWGRP()_IAQ_THR and
                                                                 SSO_LF_GGRP_INT_THR[IAQ_THR] always apply, regardless of the in-unit
                                                                 accounting index. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_hwgrpx_iu_accnt_s cnf10ka; */
    /* struct cavm_sso_af_hwgrpx_iu_accnt_s cnf10kb; */
};
typedef union cavm_sso_af_hwgrpx_iu_accnt cavm_sso_af_hwgrpx_iu_accnt_t;

static inline uint64_t CAVM_SSO_AF_HWGRPX_IU_ACCNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_HWGRPX_IU_ACCNT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x840070200230ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x840070200230ll + 0x1000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x840070200230ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x840070200230ll + 0x1000ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_HWGRPX_IU_ACCNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_HWGRPX_IU_ACCNT(a) cavm_sso_af_hwgrpx_iu_accnt_t
#define bustype_CAVM_SSO_AF_HWGRPX_IU_ACCNT(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_HWGRPX_IU_ACCNT(a) "SSO_AF_HWGRPX_IU_ACCNT"
#define device_bar_CAVM_SSO_AF_HWGRPX_IU_ACCNT(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_HWGRPX_IU_ACCNT(a) (a)
#define arguments_CAVM_SSO_AF_HWGRPX_IU_ACCNT(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_hwgrp#_ls_pc
 *
 * SSO AF Hardware Group Scheduled LMTST Performance Counter Register
 * Counts the number of scheduled LMTST work for each hardware group. The
 * counter rolls over through zero when the maximum value is exceeded.
 */
union cavm_sso_af_hwgrpx_ls_pc
{
    uint64_t u;
    struct cavm_sso_af_hwgrpx_ls_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Scheduled LMTST performance counter for hardware group. Writes are for diagnostic
                                                                 use only, and defined only when neither work nor GET_WORKs are present in the
                                                                 SSO. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Scheduled LMTST performance counter for hardware group. Writes are for diagnostic
                                                                 use only, and defined only when neither work nor GET_WORKs are present in the
                                                                 SSO. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_hwgrpx_ls_pc_s cn; */
};
typedef union cavm_sso_af_hwgrpx_ls_pc cavm_sso_af_hwgrpx_ls_pc_t;

static inline uint64_t CAVM_SSO_AF_HWGRPX_LS_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_HWGRPX_LS_PC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x8400702000c0ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x8400702000c0ll + 0x1000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x8400702000c0ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x8400702000c0ll + 0x1000ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_HWGRPX_LS_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_HWGRPX_LS_PC(a) cavm_sso_af_hwgrpx_ls_pc_t
#define bustype_CAVM_SSO_AF_HWGRPX_LS_PC(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_HWGRPX_LS_PC(a) "SSO_AF_HWGRPX_LS_PC"
#define device_bar_CAVM_SSO_AF_HWGRPX_LS_PC(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_HWGRPX_LS_PC(a) (a)
#define arguments_CAVM_SSO_AF_HWGRPX_LS_PC(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_hwgrp#_page_cnt
 *
 * SSO AF Hardware Group In-use Page Count Register
 */
union cavm_sso_af_hwgrpx_page_cnt
{
    uint64_t u;
    struct cavm_sso_af_hwgrpx_page_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t cnt                   : 32; /**< [ 31:  0](R/W/H) In-use page count. Number of pages SSO has allocated and not yet returned for
                                                                 HWGRP {a}. Excludes unused
                                                                 pointers cached in SSO. Hardware updates this register. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 32; /**< [ 31:  0](R/W/H) In-use page count. Number of pages SSO has allocated and not yet returned for
                                                                 HWGRP {a}. Excludes unused
                                                                 pointers cached in SSO. Hardware updates this register. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_hwgrpx_page_cnt_s cn; */
};
typedef union cavm_sso_af_hwgrpx_page_cnt cavm_sso_af_hwgrpx_page_cnt_t;

static inline uint64_t CAVM_SSO_AF_HWGRPX_PAGE_CNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_HWGRPX_PAGE_CNT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x840070200100ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x840070200100ll + 0x1000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x840070200100ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x840070200100ll + 0x1000ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_HWGRPX_PAGE_CNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_HWGRPX_PAGE_CNT(a) cavm_sso_af_hwgrpx_page_cnt_t
#define bustype_CAVM_SSO_AF_HWGRPX_PAGE_CNT(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_HWGRPX_PAGE_CNT(a) "SSO_AF_HWGRPX_PAGE_CNT"
#define device_bar_CAVM_SSO_AF_HWGRPX_PAGE_CNT(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_HWGRPX_PAGE_CNT(a) (a)
#define arguments_CAVM_SSO_AF_HWGRPX_PAGE_CNT(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_hwgrp#_pri
 *
 * SSO AF Hardware Group Priority Register
 * Controls the priority and hardware group affinity arbitration for each hardware group.
 */
union cavm_sso_af_hwgrpx_pri
{
    uint64_t u;
    struct cavm_sso_af_hwgrpx_pri_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_30_63        : 34;
        uint64_t wgt_left              : 6;  /**< [ 29: 24](RO/H) Arbitration credits remaining on this hardware group. */
        uint64_t reserved_22_23        : 2;
        uint64_t weight                : 6;  /**< [ 21: 16](R/W) Arbitration weight to apply to this hardware group. Must be \>= 0x3. */
        uint64_t reserved_12_15        : 4;
        uint64_t affinity              : 4;  /**< [ 11:  8](R/W) Processor affinity arbitration weight to apply to this hardware group. If zero, affinity
                                                                 is disabled. A change to [AFFINITY] will not take effect until the old [AFFINITY]'s
                                                                 value loaded into SSO_AF_HWS()_ARB[AFF_LEFT] has drained to zero. */
        uint64_t reserved_3_7          : 5;
        uint64_t pri                   : 3;  /**< [  2:  0](R/W) Priority for this hardware group relative to other hardware groups. To prevent a
                                                                 HWS from receiving work use SSO_AF_HWS()_S()_GRPMSK().

                                                                 0x0 = highest priority.
                                                                 0x7 = lowest priority.

                                                                 Changing priority while GET_WORKs are in flight may result in a GET_WORK using either the
                                                                 old or new priority, or a mix thereof. */
#else /* Word 0 - Little Endian */
        uint64_t pri                   : 3;  /**< [  2:  0](R/W) Priority for this hardware group relative to other hardware groups. To prevent a
                                                                 HWS from receiving work use SSO_AF_HWS()_S()_GRPMSK().

                                                                 0x0 = highest priority.
                                                                 0x7 = lowest priority.

                                                                 Changing priority while GET_WORKs are in flight may result in a GET_WORK using either the
                                                                 old or new priority, or a mix thereof. */
        uint64_t reserved_3_7          : 5;
        uint64_t affinity              : 4;  /**< [ 11:  8](R/W) Processor affinity arbitration weight to apply to this hardware group. If zero, affinity
                                                                 is disabled. A change to [AFFINITY] will not take effect until the old [AFFINITY]'s
                                                                 value loaded into SSO_AF_HWS()_ARB[AFF_LEFT] has drained to zero. */
        uint64_t reserved_12_15        : 4;
        uint64_t weight                : 6;  /**< [ 21: 16](R/W) Arbitration weight to apply to this hardware group. Must be \>= 0x3. */
        uint64_t reserved_22_23        : 2;
        uint64_t wgt_left              : 6;  /**< [ 29: 24](RO/H) Arbitration credits remaining on this hardware group. */
        uint64_t reserved_30_63        : 34;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_hwgrpx_pri_s cn; */
};
typedef union cavm_sso_af_hwgrpx_pri cavm_sso_af_hwgrpx_pri_t;

static inline uint64_t CAVM_SSO_AF_HWGRPX_PRI(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_HWGRPX_PRI(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x840070200020ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x840070200020ll + 0x1000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x840070200020ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x840070200020ll + 0x1000ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_HWGRPX_PRI", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_HWGRPX_PRI(a) cavm_sso_af_hwgrpx_pri_t
#define bustype_CAVM_SSO_AF_HWGRPX_PRI(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_HWGRPX_PRI(a) "SSO_AF_HWGRPX_PRI"
#define device_bar_CAVM_SSO_AF_HWGRPX_PRI(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_HWGRPX_PRI(a) (a)
#define arguments_CAVM_SSO_AF_HWGRPX_PRI(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_hwgrp#_stash
 *
 * SSO AF Hardware Group Stash Control Register
 * Stash Control Register.
 */
union cavm_sso_af_hwgrpx_stash
{
    uint64_t u;
    struct cavm_sso_af_hwgrpx_stash_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t off                   : 4;  /**< [ 11:  8](R/W) Thr offset in units of 128 bytes from WQE where stashing should begin.
                                                                 This is a two's complement number, and negative values can be used to
                                                                 start stashing up to 8 cachelines before the WQE. */
        uint64_t cntm1                 : 4;  /**< [  7:  4](R/W) The number of cachelines to stash minus 1. */
        uint64_t reserved_1_3          : 3;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable stashing for this group. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable stashing for this group. */
        uint64_t reserved_1_3          : 3;
        uint64_t cntm1                 : 4;  /**< [  7:  4](R/W) The number of cachelines to stash minus 1. */
        uint64_t off                   : 4;  /**< [ 11:  8](R/W) Thr offset in units of 128 bytes from WQE where stashing should begin.
                                                                 This is a two's complement number, and negative values can be used to
                                                                 start stashing up to 8 cachelines before the WQE. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_hwgrpx_stash_s cn; */
};
typedef union cavm_sso_af_hwgrpx_stash cavm_sso_af_hwgrpx_stash_t;

static inline uint64_t CAVM_SSO_AF_HWGRPX_STASH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_HWGRPX_STASH(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a<=255))
        return 0x8400702000d0ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x8400702000d0ll + 0x1000ll * ((a) & 0x7f);
    __cavm_csr_fatal("SSO_AF_HWGRPX_STASH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_HWGRPX_STASH(a) cavm_sso_af_hwgrpx_stash_t
#define bustype_CAVM_SSO_AF_HWGRPX_STASH(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_HWGRPX_STASH(a) "SSO_AF_HWGRPX_STASH"
#define device_bar_CAVM_SSO_AF_HWGRPX_STASH(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_HWGRPX_STASH(a) (a)
#define arguments_CAVM_SSO_AF_HWGRPX_STASH(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_hwgrp#_taq_thr
 *
 * SSO AF Hardware Group Transitory Admission Queue Threshold Registers
 * These registers contain the thresholds for allocating SSO transitory admission queue storage
 * buffers, indexed by hardware group.
 */
union cavm_sso_af_hwgrpx_taq_thr
{
    uint64_t u;
    struct cavm_sso_af_hwgrpx_taq_thr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_59_63        : 5;
        uint64_t grp_cnt               : 11; /**< [ 58: 48](RO/H) hardware group's entry count. Number of transitory admission buffers allocated to this group. */
        uint64_t reserved_43_47        : 5;
        uint64_t max_thr               : 11; /**< [ 42: 32](R/W) Max threshold for this transitory admission queue, in buffers of 11
                                                                 entries. Must be \>= 3, must be \>= [RSVD_THR], and to ensure full streaming
                                                                 performance on this hardware group, should be at least 16 buffers. SSO may
                                                                 exceed this count using unreserved free buffers if and only if persistently
                                                                 backpressured by IOBI. Must not be changed after traffic is sent to this
                                                                 hardware group. */
        uint64_t reserved_11_31        : 21;
        uint64_t rsvd_thr              : 11; /**< [ 10:  0](R/W) Threshold for reserved entries for this transitory admission queue, in buffers
                                                                 of 11 entries. Must be at least three buffers for any hardware groups that are to be
                                                                 used. Changes to this field must also update SSO_AF_TAQ_ADD[RSVD_FREE]. Must not be
                                                                 changed after traffic is sent to this hardware group.

                                                                 If fewer than three hardware groups are used, then the sum of
                                                                 [RSVD_THR] across used hardware groups must be less than
                                                                 SSO_AF_CONST[TAQ_A]-4. */
#else /* Word 0 - Little Endian */
        uint64_t rsvd_thr              : 11; /**< [ 10:  0](R/W) Threshold for reserved entries for this transitory admission queue, in buffers
                                                                 of 11 entries. Must be at least three buffers for any hardware groups that are to be
                                                                 used. Changes to this field must also update SSO_AF_TAQ_ADD[RSVD_FREE]. Must not be
                                                                 changed after traffic is sent to this hardware group.

                                                                 If fewer than three hardware groups are used, then the sum of
                                                                 [RSVD_THR] across used hardware groups must be less than
                                                                 SSO_AF_CONST[TAQ_A]-4. */
        uint64_t reserved_11_31        : 21;
        uint64_t max_thr               : 11; /**< [ 42: 32](R/W) Max threshold for this transitory admission queue, in buffers of 11
                                                                 entries. Must be \>= 3, must be \>= [RSVD_THR], and to ensure full streaming
                                                                 performance on this hardware group, should be at least 16 buffers. SSO may
                                                                 exceed this count using unreserved free buffers if and only if persistently
                                                                 backpressured by IOBI. Must not be changed after traffic is sent to this
                                                                 hardware group. */
        uint64_t reserved_43_47        : 5;
        uint64_t grp_cnt               : 11; /**< [ 58: 48](RO/H) hardware group's entry count. Number of transitory admission buffers allocated to this group. */
        uint64_t reserved_59_63        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_hwgrpx_taq_thr_s cn; */
};
typedef union cavm_sso_af_hwgrpx_taq_thr cavm_sso_af_hwgrpx_taq_thr_t;

static inline uint64_t CAVM_SSO_AF_HWGRPX_TAQ_THR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_HWGRPX_TAQ_THR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x840070200010ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x840070200010ll + 0x1000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x840070200010ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x840070200010ll + 0x1000ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_HWGRPX_TAQ_THR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_HWGRPX_TAQ_THR(a) cavm_sso_af_hwgrpx_taq_thr_t
#define bustype_CAVM_SSO_AF_HWGRPX_TAQ_THR(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_HWGRPX_TAQ_THR(a) "SSO_AF_HWGRPX_TAQ_THR"
#define device_bar_CAVM_SSO_AF_HWGRPX_TAQ_THR(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_HWGRPX_TAQ_THR(a) (a)
#define arguments_CAVM_SSO_AF_HWGRPX_TAQ_THR(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_hwgrp#_ts_pc
 *
 * SSO AF Hardware Group Tag Switch Performance Counter Register
 * Counts the number of tag switch requests for each hardware group being switched
 * to. Counter rolls over through zero when maximum value is exceeded.
 */
union cavm_sso_af_hwgrpx_ts_pc
{
    uint64_t u;
    struct cavm_sso_af_hwgrpx_ts_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Tag switch performance counter. Writes are for diagnostic use only, and defined only when
                                                                 neither work nor GET_WORKs are present in the SSO. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Tag switch performance counter. Writes are for diagnostic use only, and defined only when
                                                                 neither work nor GET_WORKs are present in the SSO. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_hwgrpx_ts_pc_s cn; */
};
typedef union cavm_sso_af_hwgrpx_ts_pc cavm_sso_af_hwgrpx_ts_pc_t;

static inline uint64_t CAVM_SSO_AF_HWGRPX_TS_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_HWGRPX_TS_PC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x840070200080ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x840070200080ll + 0x1000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x840070200080ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x840070200080ll + 0x1000ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_HWGRPX_TS_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_HWGRPX_TS_PC(a) cavm_sso_af_hwgrpx_ts_pc_t
#define bustype_CAVM_SSO_AF_HWGRPX_TS_PC(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_HWGRPX_TS_PC(a) "SSO_AF_HWGRPX_TS_PC"
#define device_bar_CAVM_SSO_AF_HWGRPX_TS_PC(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_HWGRPX_TS_PC(a) (a)
#define arguments_CAVM_SSO_AF_HWGRPX_TS_PC(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_hwgrp#_wa_pc
 *
 * SSO AF Hardware Group Work-Add Performance Counter Registers
 * Counts the number of add new work requests for each hardware group. The counter
 * rolls over through zero when the maximum value is exceeded.
 */
union cavm_sso_af_hwgrpx_wa_pc
{
    uint64_t u;
    struct cavm_sso_af_hwgrpx_wa_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Work add performance counter for hardware group. Increments when work moves into
                                                                 IAQ. Writes are for diagnostic use only, and defined only when neither work nor
                                                                 GET_WORKs are present in the SSO. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Work add performance counter for hardware group. Increments when work moves into
                                                                 IAQ. Writes are for diagnostic use only, and defined only when neither work nor
                                                                 GET_WORKs are present in the SSO. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_hwgrpx_wa_pc_s cn; */
};
typedef union cavm_sso_af_hwgrpx_wa_pc cavm_sso_af_hwgrpx_wa_pc_t;

static inline uint64_t CAVM_SSO_AF_HWGRPX_WA_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_HWGRPX_WA_PC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x840070200070ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x840070200070ll + 0x1000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x840070200070ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x840070200070ll + 0x1000ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_HWGRPX_WA_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_HWGRPX_WA_PC(a) cavm_sso_af_hwgrpx_wa_pc_t
#define bustype_CAVM_SSO_AF_HWGRPX_WA_PC(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_HWGRPX_WA_PC(a) "SSO_AF_HWGRPX_WA_PC"
#define device_bar_CAVM_SSO_AF_HWGRPX_WA_PC(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_HWGRPX_WA_PC(a) (a)
#define arguments_CAVM_SSO_AF_HWGRPX_WA_PC(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_hwgrp#_ws_pc
 *
 * SSO AF Hardware Group Work-Schedule Performance Counter Registers
 * Counts the number of work schedules for each hardware group. The counter rolls over
 * through zero when the maximum value is exceeded.
 */
union cavm_sso_af_hwgrpx_ws_pc
{
    uint64_t u;
    struct cavm_sso_af_hwgrpx_ws_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Work schedule performance counter for hardware group. Writes are for diagnostic
                                                                 use only, and defined only when neither work nor GET_WORKs are present in the
                                                                 SSO. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Work schedule performance counter for hardware group. Writes are for diagnostic
                                                                 use only, and defined only when neither work nor GET_WORKs are present in the
                                                                 SSO. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_hwgrpx_ws_pc_s cn; */
};
typedef union cavm_sso_af_hwgrpx_ws_pc cavm_sso_af_hwgrpx_ws_pc_t;

static inline uint64_t CAVM_SSO_AF_HWGRPX_WS_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_HWGRPX_WS_PC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x840070200050ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x840070200050ll + 0x1000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x840070200050ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x840070200050ll + 0x1000ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_HWGRPX_WS_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_HWGRPX_WS_PC(a) cavm_sso_af_hwgrpx_ws_pc_t
#define bustype_CAVM_SSO_AF_HWGRPX_WS_PC(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_HWGRPX_WS_PC(a) "SSO_AF_HWGRPX_WS_PC"
#define device_bar_CAVM_SSO_AF_HWGRPX_WS_PC(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_HWGRPX_WS_PC(a) (a)
#define arguments_CAVM_SSO_AF_HWGRPX_WS_PC(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_hwgrp#_xaq_aura
 *
 * SSO PF External Admission Queue Aura Register
 */
union cavm_sso_af_hwgrpx_xaq_aura
{
    uint64_t u;
    struct cavm_sso_af_hwgrpx_xaq_aura_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t aura                  : 20; /**< [ 19:  0](R/W) NPA aura assigned to this group for SSO XAQ allocations and frees. The NPA aura
                                                                 selected by [AURA] must correspond to a pool where the buffers are at least 4 KB. */
#else /* Word 0 - Little Endian */
        uint64_t aura                  : 20; /**< [ 19:  0](R/W) NPA aura assigned to this group for SSO XAQ allocations and frees. The NPA aura
                                                                 selected by [AURA] must correspond to a pool where the buffers are at least 4 KB. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_hwgrpx_xaq_aura_s cn; */
};
typedef union cavm_sso_af_hwgrpx_xaq_aura cavm_sso_af_hwgrpx_xaq_aura_t;

static inline uint64_t CAVM_SSO_AF_HWGRPX_XAQ_AURA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_HWGRPX_XAQ_AURA(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x840070200140ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x840070200140ll + 0x1000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x840070200140ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x840070200140ll + 0x1000ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_HWGRPX_XAQ_AURA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_HWGRPX_XAQ_AURA(a) cavm_sso_af_hwgrpx_xaq_aura_t
#define bustype_CAVM_SSO_AF_HWGRPX_XAQ_AURA(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_HWGRPX_XAQ_AURA(a) "SSO_AF_HWGRPX_XAQ_AURA"
#define device_bar_CAVM_SSO_AF_HWGRPX_XAQ_AURA(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_HWGRPX_XAQ_AURA(a) (a)
#define arguments_CAVM_SSO_AF_HWGRPX_XAQ_AURA(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_hwgrp#_xaq_limit
 *
 * SSO AF Hardware Group External Admission Queue Limit Registers
 */
union cavm_sso_af_hwgrpx_xaq_limit
{
    uint64_t u;
    struct cavm_sso_af_hwgrpx_xaq_limit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t xaq_limit             : 33; /**< [ 32:  0](R/W) XAQ limit. Each count holds 11 work entries. If an add work is requested to a
                                                                 group where SSO_LF_GGRP_XAQ_CNT[XAQ_CNT] \>= [XAQ_LIMIT], then the add work is
                                                                 dropped and will SSO_LF_GGRP_QCTL[ENA] is cleared and SSO_LF_GGRP_INT[XAQ_LIMIT] is
                                                                 set. When 0x0, limiting is disabled. Due to pipelining, hardware may exceed this
                                                                 limit by up to the TAQ size (320) entries. */
#else /* Word 0 - Little Endian */
        uint64_t xaq_limit             : 33; /**< [ 32:  0](R/W) XAQ limit. Each count holds 11 work entries. If an add work is requested to a
                                                                 group where SSO_LF_GGRP_XAQ_CNT[XAQ_CNT] \>= [XAQ_LIMIT], then the add work is
                                                                 dropped and will SSO_LF_GGRP_QCTL[ENA] is cleared and SSO_LF_GGRP_INT[XAQ_LIMIT] is
                                                                 set. When 0x0, limiting is disabled. Due to pipelining, hardware may exceed this
                                                                 limit by up to the TAQ size (320) entries. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_hwgrpx_xaq_limit_s cn; */
};
typedef union cavm_sso_af_hwgrpx_xaq_limit cavm_sso_af_hwgrpx_xaq_limit_t;

static inline uint64_t CAVM_SSO_AF_HWGRPX_XAQ_LIMIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_HWGRPX_XAQ_LIMIT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x840070200220ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x840070200220ll + 0x1000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x840070200220ll + 0x1000ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x840070200220ll + 0x1000ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_HWGRPX_XAQ_LIMIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_HWGRPX_XAQ_LIMIT(a) cavm_sso_af_hwgrpx_xaq_limit_t
#define bustype_CAVM_SSO_AF_HWGRPX_XAQ_LIMIT(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_HWGRPX_XAQ_LIMIT(a) "SSO_AF_HWGRPX_XAQ_LIMIT"
#define device_bar_CAVM_SSO_AF_HWGRPX_XAQ_LIMIT(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_HWGRPX_XAQ_LIMIT(a) (a)
#define arguments_CAVM_SSO_AF_HWGRPX_XAQ_LIMIT(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_hws#_arb
 *
 * SSO AF Hardware Workslot Arbitration State Register
 * For diagnostic use, returns the arbitration state for each HWS.
 */
union cavm_sso_af_hwsx_arb
{
    uint64_t u;
    struct cavm_sso_af_hwsx_arb_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t aff_left              : 4;  /**< [ 19: 16](R/W/H) HWS affinity arbitration credits remaining on the last serviced hardware group. */
        uint64_t reserved_10_15        : 6;
        uint64_t last_grp              : 10; /**< [  9:  0](R/W/H) Last hardware group number serviced by this HWS. */
#else /* Word 0 - Little Endian */
        uint64_t last_grp              : 10; /**< [  9:  0](R/W/H) Last hardware group number serviced by this HWS. */
        uint64_t reserved_10_15        : 6;
        uint64_t aff_left              : 4;  /**< [ 19: 16](R/W/H) HWS affinity arbitration credits remaining on the last serviced hardware group. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_hwsx_arb_s cn; */
};
typedef union cavm_sso_af_hwsx_arb cavm_sso_af_hwsx_arb_t;

static inline uint64_t CAVM_SSO_AF_HWSX_ARB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_HWSX_ARB(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=51))
        return 0x840070400100ll + 0x1000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=17))
        return 0x840070400100ll + 0x1000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=51))
        return 0x840070400100ll + 0x1000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=51))
        return 0x840070400100ll + 0x1000ll * ((a) & 0x3f);
    __cavm_csr_fatal("SSO_AF_HWSX_ARB", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_HWSX_ARB(a) cavm_sso_af_hwsx_arb_t
#define bustype_CAVM_SSO_AF_HWSX_ARB(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_HWSX_ARB(a) "SSO_AF_HWSX_ARB"
#define device_bar_CAVM_SSO_AF_HWSX_ARB(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_HWSX_ARB(a) (a)
#define arguments_CAVM_SSO_AF_HWSX_ARB(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_hws#_gmctl
 *
 * SSO AF Hardware Workslot Guest Machine Control Register
 */
union cavm_sso_af_hwsx_gmctl
{
    uint64_t u;
    struct cavm_sso_af_hwsx_gmctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_hwsx_gmctl_s cn; */
};
typedef union cavm_sso_af_hwsx_gmctl cavm_sso_af_hwsx_gmctl_t;

static inline uint64_t CAVM_SSO_AF_HWSX_GMCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_HWSX_GMCTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=51))
        return 0x840070400200ll + 0x1000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=17))
        return 0x840070400200ll + 0x1000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=51))
        return 0x840070400200ll + 0x1000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=51))
        return 0x840070400200ll + 0x1000ll * ((a) & 0x3f);
    __cavm_csr_fatal("SSO_AF_HWSX_GMCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_HWSX_GMCTL(a) cavm_sso_af_hwsx_gmctl_t
#define bustype_CAVM_SSO_AF_HWSX_GMCTL(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_HWSX_GMCTL(a) "SSO_AF_HWSX_GMCTL"
#define device_bar_CAVM_SSO_AF_HWSX_GMCTL(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_HWSX_GMCTL(a) (a)
#define arguments_CAVM_SSO_AF_HWSX_GMCTL(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_hws#_inv
 *
 * SSO AF Hardware Workslot SAI Invalidate Register
 */
union cavm_sso_af_hwsx_inv
{
    uint64_t u;
    struct cavm_sso_af_hwsx_inv_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t inval_err             : 1;  /**< [  2:  2](RO/H) When set, the invalidation of any GW cache entries associated with this HWS
                                                                 encountered an error. */
        uint64_t inval_pend            : 1;  /**< [  1:  1](RO/H) When set, the invalidation of any GW cache entries associated with
                                                                 this HWS is pending. */
        uint64_t sai_inval             : 1;  /**< [  0:  0](R/W) When written to one, invalidate any GW cache entries associated with
                                                                 this HWS. */
#else /* Word 0 - Little Endian */
        uint64_t sai_inval             : 1;  /**< [  0:  0](R/W) When written to one, invalidate any GW cache entries associated with
                                                                 this HWS. */
        uint64_t inval_pend            : 1;  /**< [  1:  1](RO/H) When set, the invalidation of any GW cache entries associated with
                                                                 this HWS is pending. */
        uint64_t inval_err             : 1;  /**< [  2:  2](RO/H) When set, the invalidation of any GW cache entries associated with this HWS
                                                                 encountered an error. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_hwsx_inv_s cn; */
};
typedef union cavm_sso_af_hwsx_inv cavm_sso_af_hwsx_inv_t;

static inline uint64_t CAVM_SSO_AF_HWSX_INV(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_HWSX_INV(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=51))
        return 0x840070400180ll + 0x1000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=17))
        return 0x840070400180ll + 0x1000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=51))
        return 0x840070400180ll + 0x1000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=51))
        return 0x840070400180ll + 0x1000ll * ((a) & 0x3f);
    __cavm_csr_fatal("SSO_AF_HWSX_INV", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_HWSX_INV(a) cavm_sso_af_hwsx_inv_t
#define bustype_CAVM_SSO_AF_HWSX_INV(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_HWSX_INV(a) "SSO_AF_HWSX_INV"
#define device_bar_CAVM_SSO_AF_HWSX_INV(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_HWSX_INV(a) (a)
#define arguments_CAVM_SSO_AF_HWSX_INV(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_hws#_lsw_cfg
 *
 * SSO AF Hardware Workslot LSW Configuration Register
 */
union cavm_sso_af_hwsx_lsw_cfg
{
    uint64_t u;
    struct cavm_sso_af_hwsx_lsw_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t lsw_cnt               : 4;  /**< [  7:  4](RO/H) Number of unallocated LSW entries, range 0 to 8. */
        uint64_t reserved_3            : 1;
        uint64_t wqe_release           : 1;  /**< [  2:  2](R/W) A one indicates SSO WS frees the WQE index immediately upon issuing the release
                                                                 to the LSW block. A zero indicates the WQE index is freed after the LSW
                                                                 acknowledge and guarantees atomicity of releases. */
        uint64_t mode                  : 2;  /**< [  1:  0](R/W) LSW mode as enumerated by SSO_LSW_MODE_E. */
#else /* Word 0 - Little Endian */
        uint64_t mode                  : 2;  /**< [  1:  0](R/W) LSW mode as enumerated by SSO_LSW_MODE_E. */
        uint64_t wqe_release           : 1;  /**< [  2:  2](R/W) A one indicates SSO WS frees the WQE index immediately upon issuing the release
                                                                 to the LSW block. A zero indicates the WQE index is freed after the LSW
                                                                 acknowledge and guarantees atomicity of releases. */
        uint64_t reserved_3            : 1;
        uint64_t lsw_cnt               : 4;  /**< [  7:  4](RO/H) Number of unallocated LSW entries, range 0 to 8. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_hwsx_lsw_cfg_s cn; */
};
typedef union cavm_sso_af_hwsx_lsw_cfg cavm_sso_af_hwsx_lsw_cfg_t;

static inline uint64_t CAVM_SSO_AF_HWSX_LSW_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_HWSX_LSW_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=51))
        return 0x840070400300ll + 0x1000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=17))
        return 0x840070400300ll + 0x1000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=51))
        return 0x840070400300ll + 0x1000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=51))
        return 0x840070400300ll + 0x1000ll * ((a) & 0x3f);
    __cavm_csr_fatal("SSO_AF_HWSX_LSW_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_HWSX_LSW_CFG(a) cavm_sso_af_hwsx_lsw_cfg_t
#define bustype_CAVM_SSO_AF_HWSX_LSW_CFG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_HWSX_LSW_CFG(a) "SSO_AF_HWSX_LSW_CFG"
#define device_bar_CAVM_SSO_AF_HWSX_LSW_CFG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_HWSX_LSW_CFG(a) (a)
#define arguments_CAVM_SSO_AF_HWSX_LSW_CFG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_hws#_s#_grpmsk#
 *
 * SSO AF HWS Hardware Group Mask Registers
 * These registers select which hardware group(s) a HWS belongs to. There are two sets of
 * masks per HWS, each with four registers corresponding to 256 hardware groups
 * (64 hardware groups per register).
 *
 * Note bit-fields are indexed by hardware group, not the guest group; therefore this
 * register should not be exposed as-is to guest drivers.
 */
union cavm_sso_af_hwsx_sx_grpmskx
{
    uint64_t u;
    struct cavm_sso_af_hwsx_sx_grpmskx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t grp_msk               : 64; /**< [ 63:  0](R/W) HWS hardware group mask. A one in any bit position sets the HWS's membership in
                                                                 the corresponding hardware group for hardware groups \<255:0\>.

                                                                 A value of 0x0 in GRPMSK for a given HWS prevents the HWS from receiving new
                                                                 work. HWSs that will never receive work should use GRPMSK=0x0; while this
                                                                 setting is not special in SSO, for backward and forward compatibility this may
                                                                 enable reallocation of internal resources to the remaining (nonzero-mask)
                                                                 hardware workslots.

                                                                 This register is intended only for large-scale save-restore of masks by the AF.
                                                                 Individual changes must use SSOW_LF_GWS_GRPMSK_CHG. */
#else /* Word 0 - Little Endian */
        uint64_t grp_msk               : 64; /**< [ 63:  0](R/W) HWS hardware group mask. A one in any bit position sets the HWS's membership in
                                                                 the corresponding hardware group for hardware groups \<255:0\>.

                                                                 A value of 0x0 in GRPMSK for a given HWS prevents the HWS from receiving new
                                                                 work. HWSs that will never receive work should use GRPMSK=0x0; while this
                                                                 setting is not special in SSO, for backward and forward compatibility this may
                                                                 enable reallocation of internal resources to the remaining (nonzero-mask)
                                                                 hardware workslots.

                                                                 This register is intended only for large-scale save-restore of masks by the AF.
                                                                 Individual changes must use SSOW_LF_GWS_GRPMSK_CHG. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_hwsx_sx_grpmskx_s cn10; */
    /* struct cavm_sso_af_hwsx_sx_grpmskx_s cn10ka; */
    struct cavm_sso_af_hwsx_sx_grpmskx_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t grp_msk               : 64; /**< [ 63:  0](R/W) HWS hardware group mask. A one in any bit position sets the HWS's membership in
                                                                 the corresponding hardware group for hardware groups \<127:0\>.

                                                                 A value of 0x0 in GRPMSK for a given HWS prevents the HWS from receiving new
                                                                 work. HWSs that will never receive work should use GRPMSK=0x0; while this
                                                                 setting is not special in SSO, for backward and forward compatibility this may
                                                                 enable reallocation of internal resources to the remaining (nonzero-mask)
                                                                 hardware workslots.

                                                                 This register is intended only for large-scale save-restore of masks by the AF.
                                                                 Individual changes must use SSOW_LF_GWS_GRPMSK_CHG. */
#else /* Word 0 - Little Endian */
        uint64_t grp_msk               : 64; /**< [ 63:  0](R/W) HWS hardware group mask. A one in any bit position sets the HWS's membership in
                                                                 the corresponding hardware group for hardware groups \<127:0\>.

                                                                 A value of 0x0 in GRPMSK for a given HWS prevents the HWS from receiving new
                                                                 work. HWSs that will never receive work should use GRPMSK=0x0; while this
                                                                 setting is not special in SSO, for backward and forward compatibility this may
                                                                 enable reallocation of internal resources to the remaining (nonzero-mask)
                                                                 hardware workslots.

                                                                 This register is intended only for large-scale save-restore of masks by the AF.
                                                                 Individual changes must use SSOW_LF_GWS_GRPMSK_CHG. */
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_hwsx_sx_grpmskx_s cnf10ka; */
    /* struct cavm_sso_af_hwsx_sx_grpmskx_s cnf10kb; */
};
typedef union cavm_sso_af_hwsx_sx_grpmskx cavm_sso_af_hwsx_sx_grpmskx_t;

static inline uint64_t CAVM_SSO_AF_HWSX_SX_GRPMSKX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_HWSX_SX_GRPMSKX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=51) && (b<=1) && (c<=3)))
        return 0x840070400400ll + 0x1000ll * ((a) & 0x3f) + 0x20ll * ((b) & 0x1) + 8ll * ((c) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=17) && (b<=1) && (c<=1)))
        return 0x840070400400ll + 0x1000ll * ((a) & 0x1f) + 0x20ll * ((b) & 0x1) + 8ll * ((c) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=51) && (b<=1) && (c<=3)))
        return 0x840070400400ll + 0x1000ll * ((a) & 0x3f) + 0x20ll * ((b) & 0x1) + 8ll * ((c) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=51) && (b<=1) && (c<=3)))
        return 0x840070400400ll + 0x1000ll * ((a) & 0x3f) + 0x20ll * ((b) & 0x1) + 8ll * ((c) & 0x3);
    __cavm_csr_fatal("SSO_AF_HWSX_SX_GRPMSKX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_HWSX_SX_GRPMSKX(a,b,c) cavm_sso_af_hwsx_sx_grpmskx_t
#define bustype_CAVM_SSO_AF_HWSX_SX_GRPMSKX(a,b,c) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_HWSX_SX_GRPMSKX(a,b,c) "SSO_AF_HWSX_SX_GRPMSKX"
#define device_bar_CAVM_SSO_AF_HWSX_SX_GRPMSKX(a,b,c) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_HWSX_SX_GRPMSKX(a,b,c) (a)
#define arguments_CAVM_SSO_AF_HWSX_SX_GRPMSKX(a,b,c) (a),(b),(c),-1

/**
 * Register (RVU_PF_BAR0) sso_af_ient#_grp
 *
 * SSO AF Internal Entry Hardware Group Registers
 * Returns unit memory status for an index.
 */
union cavm_sso_af_ientx_grp
{
    uint64_t u;
    struct cavm_sso_af_ientx_grp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_62_63        : 2;
        uint64_t head                  : 1;  /**< [ 61: 61](RO/H) SSO entry is at the head of a tag chain that is descheduled. */
        uint64_t reserved_58_60        : 3;
        uint64_t grp                   : 10; /**< [ 57: 48](RO/H) Hardware group of the SSO entry. This register is typically only for diagnostic
                                                                 use; however if this value is delivered to guest drivers, [GRP] must be
                                                                 converted to a guest group by the hypervisor software. */
        uint64_t reserved_0_47         : 48;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_47         : 48;
        uint64_t grp                   : 10; /**< [ 57: 48](RO/H) Hardware group of the SSO entry. This register is typically only for diagnostic
                                                                 use; however if this value is delivered to guest drivers, [GRP] must be
                                                                 converted to a guest group by the hypervisor software. */
        uint64_t reserved_58_60        : 3;
        uint64_t head                  : 1;  /**< [ 61: 61](RO/H) SSO entry is at the head of a tag chain that is descheduled. */
        uint64_t reserved_62_63        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ientx_grp_s cn; */
};
typedef union cavm_sso_af_ientx_grp cavm_sso_af_ientx_grp_t;

static inline uint64_t CAVM_SSO_AF_IENTX_GRP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_IENTX_GRP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=8191))
        return 0x840070a20000ll + 8ll * ((a) & 0x1fff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=4095))
        return 0x840070a20000ll + 8ll * ((a) & 0xfff);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=8191))
        return 0x840070a20000ll + 8ll * ((a) & 0x1fff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=8191))
        return 0x840070a20000ll + 8ll * ((a) & 0x1fff);
    __cavm_csr_fatal("SSO_AF_IENTX_GRP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_IENTX_GRP(a) cavm_sso_af_ientx_grp_t
#define bustype_CAVM_SSO_AF_IENTX_GRP(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_IENTX_GRP(a) "SSO_AF_IENTX_GRP"
#define device_bar_CAVM_SSO_AF_IENTX_GRP(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_IENTX_GRP(a) (a)
#define arguments_CAVM_SSO_AF_IENTX_GRP(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_ient#_index
 *
 * SSO AF Internal Entry INDEX Registers
 * Returns unit SSC INDEX stored at SSC line number.
 */
union cavm_sso_af_ientx_index
{
    uint64_t u;
    struct cavm_sso_af_ientx_index_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_14_63        : 50;
        uint64_t tail                  : 1;  /**< [ 13: 13](RO/H) The [INDEX] is the tail of tag stored at SSC line. */
        uint64_t index                 : 13; /**< [ 12:  0](RO/H) The SSC INDEX for entry. */
#else /* Word 0 - Little Endian */
        uint64_t index                 : 13; /**< [ 12:  0](RO/H) The SSC INDEX for entry. */
        uint64_t tail                  : 1;  /**< [ 13: 13](RO/H) The [INDEX] is the tail of tag stored at SSC line. */
        uint64_t reserved_14_63        : 50;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ientx_index_s cn10; */
    /* struct cavm_sso_af_ientx_index_s cn10ka; */
    struct cavm_sso_af_ientx_index_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_14_63        : 50;
        uint64_t tail                  : 1;  /**< [ 13: 13](RO/H) The [INDEX] is the tail of tag stored at SSC line. */
        uint64_t reserved_12           : 1;
        uint64_t index                 : 12; /**< [ 11:  0](RO/H) The SSC INDEX for entry. */
#else /* Word 0 - Little Endian */
        uint64_t index                 : 12; /**< [ 11:  0](RO/H) The SSC INDEX for entry. */
        uint64_t reserved_12           : 1;
        uint64_t tail                  : 1;  /**< [ 13: 13](RO/H) The [INDEX] is the tail of tag stored at SSC line. */
        uint64_t reserved_14_63        : 50;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_ientx_index_s cnf10ka; */
    /* struct cavm_sso_af_ientx_index_s cnf10kb; */
};
typedef union cavm_sso_af_ientx_index cavm_sso_af_ientx_index_t;

static inline uint64_t CAVM_SSO_AF_IENTX_INDEX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_IENTX_INDEX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=8191))
        return 0x840070b00000ll + 8ll * ((a) & 0x1fff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=4095))
        return 0x840070b00000ll + 8ll * ((a) & 0xfff);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=8191))
        return 0x840070b00000ll + 8ll * ((a) & 0x1fff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=8191))
        return 0x840070b00000ll + 8ll * ((a) & 0x1fff);
    __cavm_csr_fatal("SSO_AF_IENTX_INDEX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_IENTX_INDEX(a) cavm_sso_af_ientx_index_t
#define bustype_CAVM_SSO_AF_IENTX_INDEX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_IENTX_INDEX(a) "SSO_AF_IENTX_INDEX"
#define device_bar_CAVM_SSO_AF_IENTX_INDEX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_IENTX_INDEX(a) (a)
#define arguments_CAVM_SSO_AF_IENTX_INDEX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_ient#_indexc
 *
 * SSO AF Internal Entry INDEXC Registers
 * Returns unit SSC INDEXC stored at SSC line number.
 */
union cavm_sso_af_ientx_indexc
{
    uint64_t u;
    struct cavm_sso_af_ientx_indexc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_14_63        : 50;
        uint64_t tailc                 : 1;  /**< [ 13: 13](RO/H) The [INDEX] is the conflicted tail of tag stored at SSC line. */
        uint64_t index                 : 13; /**< [ 12:  0](RO/H) The SSC INDEXC for entry. */
#else /* Word 0 - Little Endian */
        uint64_t index                 : 13; /**< [ 12:  0](RO/H) The SSC INDEXC for entry. */
        uint64_t tailc                 : 1;  /**< [ 13: 13](RO/H) The [INDEX] is the conflicted tail of tag stored at SSC line. */
        uint64_t reserved_14_63        : 50;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ientx_indexc_s cn10; */
    /* struct cavm_sso_af_ientx_indexc_s cn10ka; */
    struct cavm_sso_af_ientx_indexc_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_14_63        : 50;
        uint64_t tailc                 : 1;  /**< [ 13: 13](RO/H) The [INDEX] is the conflicted tail of tag stored at SSC line. */
        uint64_t reserved_12           : 1;
        uint64_t index                 : 12; /**< [ 11:  0](RO/H) The SSC INDEXC for entry. */
#else /* Word 0 - Little Endian */
        uint64_t index                 : 12; /**< [ 11:  0](RO/H) The SSC INDEXC for entry. */
        uint64_t reserved_12           : 1;
        uint64_t tailc                 : 1;  /**< [ 13: 13](RO/H) The [INDEX] is the conflicted tail of tag stored at SSC line. */
        uint64_t reserved_14_63        : 50;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_ientx_indexc_s cnf10ka; */
    /* struct cavm_sso_af_ientx_indexc_s cnf10kb; */
};
typedef union cavm_sso_af_ientx_indexc cavm_sso_af_ientx_indexc_t;

static inline uint64_t CAVM_SSO_AF_IENTX_INDEXC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_IENTX_INDEXC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=8191))
        return 0x840070b20000ll + 8ll * ((a) & 0x1fff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=4095))
        return 0x840070b20000ll + 8ll * ((a) & 0xfff);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=8191))
        return 0x840070b20000ll + 8ll * ((a) & 0x1fff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=8191))
        return 0x840070b20000ll + 8ll * ((a) & 0x1fff);
    __cavm_csr_fatal("SSO_AF_IENTX_INDEXC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_IENTX_INDEXC(a) cavm_sso_af_ientx_indexc_t
#define bustype_CAVM_SSO_AF_IENTX_INDEXC(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_IENTX_INDEXC(a) "SSO_AF_IENTX_INDEXC"
#define device_bar_CAVM_SSO_AF_IENTX_INDEXC(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_IENTX_INDEXC(a) (a)
#define arguments_CAVM_SSO_AF_IENTX_INDEXC(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_ient#_line
 *
 * SSO AF Internal Entry Line Registers
 * Returns unit SSC line for an index.
 */
union cavm_sso_af_ientx_line
{
    uint64_t u;
    struct cavm_sso_af_ientx_line_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t line                  : 13; /**< [ 12:  0](RO/H) The SSC line for entry. */
#else /* Word 0 - Little Endian */
        uint64_t line                  : 13; /**< [ 12:  0](RO/H) The SSC line for entry. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ientx_line_s cn10; */
    /* struct cavm_sso_af_ientx_line_s cn10ka; */
    struct cavm_sso_af_ientx_line_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t line                  : 12; /**< [ 11:  0](RO/H) The SSC line for entry. */
#else /* Word 0 - Little Endian */
        uint64_t line                  : 12; /**< [ 11:  0](RO/H) The SSC line for entry. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_ientx_line_s cnf10ka; */
    /* struct cavm_sso_af_ientx_line_s cnf10kb; */
};
typedef union cavm_sso_af_ientx_line cavm_sso_af_ientx_line_t;

static inline uint64_t CAVM_SSO_AF_IENTX_LINE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_IENTX_LINE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=8191))
        return 0x840070ae0000ll + 8ll * ((a) & 0x1fff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=4095))
        return 0x840070ae0000ll + 8ll * ((a) & 0xfff);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=8191))
        return 0x840070ae0000ll + 8ll * ((a) & 0x1fff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=8191))
        return 0x840070ae0000ll + 8ll * ((a) & 0x1fff);
    __cavm_csr_fatal("SSO_AF_IENTX_LINE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_IENTX_LINE(a) cavm_sso_af_ientx_line_t
#define bustype_CAVM_SSO_AF_IENTX_LINE(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_IENTX_LINE(a) "SSO_AF_IENTX_LINE"
#define device_bar_CAVM_SSO_AF_IENTX_LINE(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_IENTX_LINE(a) (a)
#define arguments_CAVM_SSO_AF_IENTX_LINE(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_ient#_links
 *
 * SSO AF Internal Entry Links Registers
 * Returns unit memory status for an index.
 */
union cavm_sso_af_ientx_links
{
    uint64_t u;
    struct cavm_sso_af_ientx_links_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_29_63        : 35;
        uint64_t prev_index            : 13; /**< [ 28: 16](RO/H) The previous entry in the tag chain. Unpredictable if the entry is at the head of the list
                                                                 or the head of a conflicted tag chain. */
        uint64_t reserved_14_15        : 2;
        uint64_t next_index_vld        : 1;  /**< [ 13: 13](RO/H) The [NEXT_INDEX] is valid. Unpredictable unless the entry is the tail entry of an atomic tag chain. */
        uint64_t next_index            : 13; /**< [ 12:  0](RO/H) The next entry in the tag chain or conflicted tag chain. Unpredictable if the entry is at
                                                                 the tail of the list. */
#else /* Word 0 - Little Endian */
        uint64_t next_index            : 13; /**< [ 12:  0](RO/H) The next entry in the tag chain or conflicted tag chain. Unpredictable if the entry is at
                                                                 the tail of the list. */
        uint64_t next_index_vld        : 1;  /**< [ 13: 13](RO/H) The [NEXT_INDEX] is valid. Unpredictable unless the entry is the tail entry of an atomic tag chain. */
        uint64_t reserved_14_15        : 2;
        uint64_t prev_index            : 13; /**< [ 28: 16](RO/H) The previous entry in the tag chain. Unpredictable if the entry is at the head of the list
                                                                 or the head of a conflicted tag chain. */
        uint64_t reserved_29_63        : 35;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ientx_links_s cn10; */
    /* struct cavm_sso_af_ientx_links_s cn10ka; */
    struct cavm_sso_af_ientx_links_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_28_63        : 36;
        uint64_t prev_index            : 12; /**< [ 27: 16](RO/H) The previous entry in the tag chain. Unpredictable if the entry is at the head of the list
                                                                 or the head of a conflicted tag chain. */
        uint64_t reserved_14_15        : 2;
        uint64_t next_index_vld        : 1;  /**< [ 13: 13](RO/H) The [NEXT_INDEX] is valid. Unpredictable unless the entry is the tail entry of an atomic tag chain. */
        uint64_t reserved_12           : 1;
        uint64_t next_index            : 12; /**< [ 11:  0](RO/H) The next entry in the tag chain or conflicted tag chain. Unpredictable if the entry is at
                                                                 the tail of the list. */
#else /* Word 0 - Little Endian */
        uint64_t next_index            : 12; /**< [ 11:  0](RO/H) The next entry in the tag chain or conflicted tag chain. Unpredictable if the entry is at
                                                                 the tail of the list. */
        uint64_t reserved_12           : 1;
        uint64_t next_index_vld        : 1;  /**< [ 13: 13](RO/H) The [NEXT_INDEX] is valid. Unpredictable unless the entry is the tail entry of an atomic tag chain. */
        uint64_t reserved_14_15        : 2;
        uint64_t prev_index            : 12; /**< [ 27: 16](RO/H) The previous entry in the tag chain. Unpredictable if the entry is at the head of the list
                                                                 or the head of a conflicted tag chain. */
        uint64_t reserved_28_63        : 36;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_ientx_links_s cnf10ka; */
    /* struct cavm_sso_af_ientx_links_s cnf10kb; */
};
typedef union cavm_sso_af_ientx_links cavm_sso_af_ientx_links_t;

static inline uint64_t CAVM_SSO_AF_IENTX_LINKS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_IENTX_LINKS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=8191))
        return 0x840070a60000ll + 8ll * ((a) & 0x1fff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=4095))
        return 0x840070a60000ll + 8ll * ((a) & 0xfff);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=8191))
        return 0x840070a60000ll + 8ll * ((a) & 0x1fff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=8191))
        return 0x840070a60000ll + 8ll * ((a) & 0x1fff);
    __cavm_csr_fatal("SSO_AF_IENTX_LINKS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_IENTX_LINKS(a) cavm_sso_af_ientx_links_t
#define bustype_CAVM_SSO_AF_IENTX_LINKS(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_IENTX_LINKS(a) "SSO_AF_IENTX_LINKS"
#define device_bar_CAVM_SSO_AF_IENTX_LINKS(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_IENTX_LINKS(a) (a)
#define arguments_CAVM_SSO_AF_IENTX_LINKS(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_ient#_lsw
 *
 * SSO AF Internal Entry LSW Registers
 * Returns unit memory status for an index.
 */
union cavm_sso_af_ientx_lsw
{
    uint64_t u;
    struct cavm_sso_af_ientx_lsw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_23_63        : 41;
        uint64_t pnd                   : 1;  /**< [ 22: 22](RO/H) Scheduled LMTST pending. */
        uint64_t block                 : 5;  /**< [ 21: 17](RO/H) RVU block LMTST target. */
        uint64_t index                 : 10; /**< [ 16:  7](RO/H) LSW index. */
        uint64_t hws                   : 7;  /**< [  6:  0](RO/H) HWS number. */
#else /* Word 0 - Little Endian */
        uint64_t hws                   : 7;  /**< [  6:  0](RO/H) HWS number. */
        uint64_t index                 : 10; /**< [ 16:  7](RO/H) LSW index. */
        uint64_t block                 : 5;  /**< [ 21: 17](RO/H) RVU block LMTST target. */
        uint64_t pnd                   : 1;  /**< [ 22: 22](RO/H) Scheduled LMTST pending. */
        uint64_t reserved_23_63        : 41;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ientx_lsw_s cn; */
};
typedef union cavm_sso_af_ientx_lsw cavm_sso_af_ientx_lsw_t;

static inline uint64_t CAVM_SSO_AF_IENTX_LSW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_IENTX_LSW(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=8191))
        return 0x840070ac0000ll + 8ll * ((a) & 0x1fff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=4095))
        return 0x840070ac0000ll + 8ll * ((a) & 0xfff);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=8191))
        return 0x840070ac0000ll + 8ll * ((a) & 0x1fff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=8191))
        return 0x840070ac0000ll + 8ll * ((a) & 0x1fff);
    __cavm_csr_fatal("SSO_AF_IENTX_LSW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_IENTX_LSW(a) cavm_sso_af_ientx_lsw_t
#define bustype_CAVM_SSO_AF_IENTX_LSW(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_IENTX_LSW(a) "SSO_AF_IENTX_LSW"
#define device_bar_CAVM_SSO_AF_IENTX_LSW(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_IENTX_LSW(a) (a)
#define arguments_CAVM_SSO_AF_IENTX_LSW(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_ient#_pendtag
 *
 * SSO AF Internal Entry Pending Tag Registers
 * Returns unit memory status for an index.
 */
union cavm_sso_af_ientx_pendtag
{
    uint64_t u;
    struct cavm_sso_af_ientx_pendtag_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_38_63        : 26;
        uint64_t pend_switch           : 1;  /**< [ 37: 37](RO/H) Set when there is a pending SWTAG or SWTAG_FULL and the SSO entry has not
                                                                 left the list for the original tag. */
        uint64_t reserved_34_36        : 3;
        uint64_t pend_tt               : 2;  /**< [ 33: 32](RO/H) The next tag type for the new tag list when [PEND_SWITCH] is set. Enumerated by SSO_TT_E. */
        uint64_t pend_tag              : 32; /**< [ 31:  0](RO/H) The next tag for the new tag list when [PEND_SWITCH] is set. */
#else /* Word 0 - Little Endian */
        uint64_t pend_tag              : 32; /**< [ 31:  0](RO/H) The next tag for the new tag list when [PEND_SWITCH] is set. */
        uint64_t pend_tt               : 2;  /**< [ 33: 32](RO/H) The next tag type for the new tag list when [PEND_SWITCH] is set. Enumerated by SSO_TT_E. */
        uint64_t reserved_34_36        : 3;
        uint64_t pend_switch           : 1;  /**< [ 37: 37](RO/H) Set when there is a pending SWTAG or SWTAG_FULL and the SSO entry has not
                                                                 left the list for the original tag. */
        uint64_t reserved_38_63        : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ientx_pendtag_s cn; */
};
typedef union cavm_sso_af_ientx_pendtag cavm_sso_af_ientx_pendtag_t;

static inline uint64_t CAVM_SSO_AF_IENTX_PENDTAG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_IENTX_PENDTAG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=8191))
        return 0x840070a40000ll + 8ll * ((a) & 0x1fff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=4095))
        return 0x840070a40000ll + 8ll * ((a) & 0xfff);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=8191))
        return 0x840070a40000ll + 8ll * ((a) & 0x1fff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=8191))
        return 0x840070a40000ll + 8ll * ((a) & 0x1fff);
    __cavm_csr_fatal("SSO_AF_IENTX_PENDTAG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_IENTX_PENDTAG(a) cavm_sso_af_ientx_pendtag_t
#define bustype_CAVM_SSO_AF_IENTX_PENDTAG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_IENTX_PENDTAG(a) "SSO_AF_IENTX_PENDTAG"
#define device_bar_CAVM_SSO_AF_IENTX_PENDTAG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_IENTX_PENDTAG(a) (a)
#define arguments_CAVM_SSO_AF_IENTX_PENDTAG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_ient#_qlinks
 *
 * SSO AF Internal Queue Links Registers
 * Returns unit memory status for an index.
 */
union cavm_sso_af_ientx_qlinks
{
    uint64_t u;
    struct cavm_sso_af_ientx_qlinks_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t next_index            : 13; /**< [ 12:  0](RO/H) The next entry in the AQ/CQ/DQ. */
#else /* Word 0 - Little Endian */
        uint64_t next_index            : 13; /**< [ 12:  0](RO/H) The next entry in the AQ/CQ/DQ. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ientx_qlinks_s cn10; */
    /* struct cavm_sso_af_ientx_qlinks_s cn10ka; */
    struct cavm_sso_af_ientx_qlinks_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t next_index            : 12; /**< [ 11:  0](RO/H) The next entry in the AQ/CQ/DQ. */
#else /* Word 0 - Little Endian */
        uint64_t next_index            : 12; /**< [ 11:  0](RO/H) The next entry in the AQ/CQ/DQ. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_ientx_qlinks_s cnf10ka; */
    /* struct cavm_sso_af_ientx_qlinks_s cnf10kb; */
};
typedef union cavm_sso_af_ientx_qlinks cavm_sso_af_ientx_qlinks_t;

static inline uint64_t CAVM_SSO_AF_IENTX_QLINKS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_IENTX_QLINKS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=8191))
        return 0x840070a80000ll + 8ll * ((a) & 0x1fff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=4095))
        return 0x840070a80000ll + 8ll * ((a) & 0xfff);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=8191))
        return 0x840070a80000ll + 8ll * ((a) & 0x1fff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=8191))
        return 0x840070a80000ll + 8ll * ((a) & 0x1fff);
    __cavm_csr_fatal("SSO_AF_IENTX_QLINKS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_IENTX_QLINKS(a) cavm_sso_af_ientx_qlinks_t
#define bustype_CAVM_SSO_AF_IENTX_QLINKS(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_IENTX_QLINKS(a) "SSO_AF_IENTX_QLINKS"
#define device_bar_CAVM_SSO_AF_IENTX_QLINKS(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_IENTX_QLINKS(a) (a)
#define arguments_CAVM_SSO_AF_IENTX_QLINKS(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_ient#_tag
 *
 * SSO AF Internal Entry Tag Registers
 * Returns unit memory status for an index.
 */
union cavm_sso_af_ientx_tag
{
    uint64_t u;
    struct cavm_sso_af_ientx_tag_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_34_63        : 30;
        uint64_t tt                    : 2;  /**< [ 33: 32](RO/H) The tag type of the SSO entry. Enumerated by SSO_TT_E. */
        uint64_t tag                   : 32; /**< [ 31:  0](RO/H) The tag of the SSO entry. */
#else /* Word 0 - Little Endian */
        uint64_t tag                   : 32; /**< [ 31:  0](RO/H) The tag of the SSO entry. */
        uint64_t tt                    : 2;  /**< [ 33: 32](RO/H) The tag type of the SSO entry. Enumerated by SSO_TT_E. */
        uint64_t reserved_34_63        : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ientx_tag_s cn; */
};
typedef union cavm_sso_af_ientx_tag cavm_sso_af_ientx_tag_t;

static inline uint64_t CAVM_SSO_AF_IENTX_TAG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_IENTX_TAG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=8191))
        return 0x840070a00000ll + 8ll * ((a) & 0x1fff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=4095))
        return 0x840070a00000ll + 8ll * ((a) & 0xfff);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=8191))
        return 0x840070a00000ll + 8ll * ((a) & 0x1fff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=8191))
        return 0x840070a00000ll + 8ll * ((a) & 0x1fff);
    __cavm_csr_fatal("SSO_AF_IENTX_TAG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_IENTX_TAG(a) cavm_sso_af_ientx_tag_t
#define bustype_CAVM_SSO_AF_IENTX_TAG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_IENTX_TAG(a) "SSO_AF_IENTX_TAG"
#define device_bar_CAVM_SSO_AF_IENTX_TAG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_IENTX_TAG(a) (a)
#define arguments_CAVM_SSO_AF_IENTX_TAG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_ient#_wqp
 *
 * SSO AF Internal Entry WQP Registers
 * Returns unit memory status for an index.
 */
union cavm_sso_af_ientx_wqp
{
    uint64_t u;
    struct cavm_sso_af_ientx_wqp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wqp                   : 64; /**< [ 63:  0](RO/H) Work queue LF IOVA held in the SSO entry.
                                                                 Bits \<63:53\> are a sign extension of \<52\>.  Bits \<2:0\> are 0x0. */
#else /* Word 0 - Little Endian */
        uint64_t wqp                   : 64; /**< [ 63:  0](RO/H) Work queue LF IOVA held in the SSO entry.
                                                                 Bits \<63:53\> are a sign extension of \<52\>.  Bits \<2:0\> are 0x0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ientx_wqp_s cn; */
};
typedef union cavm_sso_af_ientx_wqp cavm_sso_af_ientx_wqp_t;

static inline uint64_t CAVM_SSO_AF_IENTX_WQP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_IENTX_WQP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=8191))
        return 0x840070aa0000ll + 8ll * ((a) & 0x1fff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=4095))
        return 0x840070aa0000ll + 8ll * ((a) & 0xfff);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=8191))
        return 0x840070aa0000ll + 8ll * ((a) & 0x1fff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=8191))
        return 0x840070aa0000ll + 8ll * ((a) & 0x1fff);
    __cavm_csr_fatal("SSO_AF_IENTX_WQP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_IENTX_WQP(a) cavm_sso_af_ientx_wqp_t
#define bustype_CAVM_SSO_AF_IENTX_WQP(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_IENTX_WQP(a) "SSO_AF_IENTX_WQP"
#define device_bar_CAVM_SSO_AF_IENTX_WQP(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_IENTX_WQP(a) (a)
#define arguments_CAVM_SSO_AF_IENTX_WQP(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_ipl_conf#
 *
 * SSO AF Hardware Group Conflicted List State Registers
 * Returns list status for the conflicted list indexed by hardware group. Register
 * fields are identical to those in SSO_AF_IPL_IAQ() above.
 */
union cavm_sso_af_ipl_confx
{
    uint64_t u;
    struct cavm_sso_af_ipl_confx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_28_63        : 36;
        uint64_t queue_val             : 1;  /**< [ 27: 27](RO/H) One or more valid entries are in the queue. */
        uint64_t queue_one             : 1;  /**< [ 26: 26](RO/H) Exactly one valid entry is in the queue. */
        uint64_t queue_head            : 13; /**< [ 25: 13](RO/H) Index of entry at the head of the queue. */
        uint64_t queue_tail            : 13; /**< [ 12:  0](RO/H) Index of entry at the tail of the queue. */
#else /* Word 0 - Little Endian */
        uint64_t queue_tail            : 13; /**< [ 12:  0](RO/H) Index of entry at the tail of the queue. */
        uint64_t queue_head            : 13; /**< [ 25: 13](RO/H) Index of entry at the head of the queue. */
        uint64_t queue_one             : 1;  /**< [ 26: 26](RO/H) Exactly one valid entry is in the queue. */
        uint64_t queue_val             : 1;  /**< [ 27: 27](RO/H) One or more valid entries are in the queue. */
        uint64_t reserved_28_63        : 36;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ipl_confx_s cn10; */
    /* struct cavm_sso_af_ipl_confx_s cn10ka; */
    struct cavm_sso_af_ipl_confx_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_28_63        : 36;
        uint64_t queue_val             : 1;  /**< [ 27: 27](RO/H) One or more valid entries are in the queue. */
        uint64_t queue_one             : 1;  /**< [ 26: 26](RO/H) Exactly one valid entry is in the queue. */
        uint64_t reserved_25           : 1;
        uint64_t queue_head            : 12; /**< [ 24: 13](RO/H) Index of entry at the head of the queue. */
        uint64_t reserved_12           : 1;
        uint64_t queue_tail            : 12; /**< [ 11:  0](RO/H) Index of entry at the tail of the queue. */
#else /* Word 0 - Little Endian */
        uint64_t queue_tail            : 12; /**< [ 11:  0](RO/H) Index of entry at the tail of the queue. */
        uint64_t reserved_12           : 1;
        uint64_t queue_head            : 12; /**< [ 24: 13](RO/H) Index of entry at the head of the queue. */
        uint64_t reserved_25           : 1;
        uint64_t queue_one             : 1;  /**< [ 26: 26](RO/H) Exactly one valid entry is in the queue. */
        uint64_t queue_val             : 1;  /**< [ 27: 27](RO/H) One or more valid entries are in the queue. */
        uint64_t reserved_28_63        : 36;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_ipl_confx_s cnf10ka; */
    /* struct cavm_sso_af_ipl_confx_s cnf10kb; */
};
typedef union cavm_sso_af_ipl_confx cavm_sso_af_ipl_confx_t;

static inline uint64_t CAVM_SSO_AF_IPL_CONFX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_IPL_CONFX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x840070880000ll + 8ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x840070880000ll + 8ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x840070880000ll + 8ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x840070880000ll + 8ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_IPL_CONFX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_IPL_CONFX(a) cavm_sso_af_ipl_confx_t
#define bustype_CAVM_SSO_AF_IPL_CONFX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_IPL_CONFX(a) "SSO_AF_IPL_CONFX"
#define device_bar_CAVM_SSO_AF_IPL_CONFX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_IPL_CONFX(a) (a)
#define arguments_CAVM_SSO_AF_IPL_CONFX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_ipl_desched#
 *
 * SSO AF Hardware Group Deschedule List State Registers
 * Returns list status for the deschedule list indexed by hardware group. Register
 * fields are identical to those in SSO_AF_IPL_IAQ() above.
 */
union cavm_sso_af_ipl_deschedx
{
    uint64_t u;
    struct cavm_sso_af_ipl_deschedx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_28_63        : 36;
        uint64_t queue_val             : 1;  /**< [ 27: 27](RO/H) One or more valid entries are in the queue. */
        uint64_t queue_one             : 1;  /**< [ 26: 26](RO/H) Exactly one valid entry is in the queue. */
        uint64_t queue_head            : 13; /**< [ 25: 13](RO/H) Index of entry at the head of the queue. */
        uint64_t queue_tail            : 13; /**< [ 12:  0](RO/H) Index of entry at the tail of the queue. */
#else /* Word 0 - Little Endian */
        uint64_t queue_tail            : 13; /**< [ 12:  0](RO/H) Index of entry at the tail of the queue. */
        uint64_t queue_head            : 13; /**< [ 25: 13](RO/H) Index of entry at the head of the queue. */
        uint64_t queue_one             : 1;  /**< [ 26: 26](RO/H) Exactly one valid entry is in the queue. */
        uint64_t queue_val             : 1;  /**< [ 27: 27](RO/H) One or more valid entries are in the queue. */
        uint64_t reserved_28_63        : 36;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ipl_deschedx_s cn10; */
    /* struct cavm_sso_af_ipl_deschedx_s cn10ka; */
    struct cavm_sso_af_ipl_deschedx_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_28_63        : 36;
        uint64_t queue_val             : 1;  /**< [ 27: 27](RO/H) One or more valid entries are in the queue. */
        uint64_t queue_one             : 1;  /**< [ 26: 26](RO/H) Exactly one valid entry is in the queue. */
        uint64_t reserved_25           : 1;
        uint64_t queue_head            : 12; /**< [ 24: 13](RO/H) Index of entry at the head of the queue. */
        uint64_t reserved_12           : 1;
        uint64_t queue_tail            : 12; /**< [ 11:  0](RO/H) Index of entry at the tail of the queue. */
#else /* Word 0 - Little Endian */
        uint64_t queue_tail            : 12; /**< [ 11:  0](RO/H) Index of entry at the tail of the queue. */
        uint64_t reserved_12           : 1;
        uint64_t queue_head            : 12; /**< [ 24: 13](RO/H) Index of entry at the head of the queue. */
        uint64_t reserved_25           : 1;
        uint64_t queue_one             : 1;  /**< [ 26: 26](RO/H) Exactly one valid entry is in the queue. */
        uint64_t queue_val             : 1;  /**< [ 27: 27](RO/H) One or more valid entries are in the queue. */
        uint64_t reserved_28_63        : 36;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_ipl_deschedx_s cnf10ka; */
    /* struct cavm_sso_af_ipl_deschedx_s cnf10kb; */
};
typedef union cavm_sso_af_ipl_deschedx cavm_sso_af_ipl_deschedx_t;

static inline uint64_t CAVM_SSO_AF_IPL_DESCHEDX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_IPL_DESCHEDX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x840070860000ll + 8ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x840070860000ll + 8ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x840070860000ll + 8ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x840070860000ll + 8ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_IPL_DESCHEDX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_IPL_DESCHEDX(a) cavm_sso_af_ipl_deschedx_t
#define bustype_CAVM_SSO_AF_IPL_DESCHEDX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_IPL_DESCHEDX(a) "SSO_AF_IPL_DESCHEDX"
#define device_bar_CAVM_SSO_AF_IPL_DESCHEDX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_IPL_DESCHEDX(a) (a)
#define arguments_CAVM_SSO_AF_IPL_DESCHEDX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_ipl_free#
 *
 * SSO AF Free List State Registers
 * Returns list status.
 */
union cavm_sso_af_ipl_freex
{
    uint64_t u;
    struct cavm_sso_af_ipl_freex_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t qnum_head             : 2;  /**< [ 59: 58](RO/H) Subqueue with current head. */
        uint64_t qnum_tail             : 2;  /**< [ 57: 56](RO/H) Subqueue for next tail. */
        uint64_t reserved_41_55        : 15;
        uint64_t queue_val             : 1;  /**< [ 40: 40](RO/H) One or more valid entries are in this subqueue. */
        uint64_t queue_cnt             : 14; /**< [ 39: 26](RO/H) Number of valid entries in this subqueue. */
        uint64_t queue_head            : 13; /**< [ 25: 13](RO/H) Index of entry at the head of this subqueue. */
        uint64_t queue_tail            : 13; /**< [ 12:  0](RO/H) Index of entry at the tail of this subqueue. */
#else /* Word 0 - Little Endian */
        uint64_t queue_tail            : 13; /**< [ 12:  0](RO/H) Index of entry at the tail of this subqueue. */
        uint64_t queue_head            : 13; /**< [ 25: 13](RO/H) Index of entry at the head of this subqueue. */
        uint64_t queue_cnt             : 14; /**< [ 39: 26](RO/H) Number of valid entries in this subqueue. */
        uint64_t queue_val             : 1;  /**< [ 40: 40](RO/H) One or more valid entries are in this subqueue. */
        uint64_t reserved_41_55        : 15;
        uint64_t qnum_tail             : 2;  /**< [ 57: 56](RO/H) Subqueue for next tail. */
        uint64_t qnum_head             : 2;  /**< [ 59: 58](RO/H) Subqueue with current head. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ipl_freex_s cn10; */
    /* struct cavm_sso_af_ipl_freex_s cn10ka; */
    struct cavm_sso_af_ipl_freex_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t qnum_head             : 2;  /**< [ 59: 58](RO/H) Subqueue with current head. */
        uint64_t qnum_tail             : 2;  /**< [ 57: 56](RO/H) Subqueue for next tail. */
        uint64_t reserved_41_55        : 15;
        uint64_t queue_val             : 1;  /**< [ 40: 40](RO/H) One or more valid entries are in this subqueue. */
        uint64_t reserved_39           : 1;
        uint64_t queue_cnt             : 13; /**< [ 38: 26](RO/H) Number of valid entries in this subqueue. */
        uint64_t reserved_25           : 1;
        uint64_t queue_head            : 12; /**< [ 24: 13](RO/H) Index of entry at the head of this subqueue. */
        uint64_t reserved_12           : 1;
        uint64_t queue_tail            : 12; /**< [ 11:  0](RO/H) Index of entry at the tail of this subqueue. */
#else /* Word 0 - Little Endian */
        uint64_t queue_tail            : 12; /**< [ 11:  0](RO/H) Index of entry at the tail of this subqueue. */
        uint64_t reserved_12           : 1;
        uint64_t queue_head            : 12; /**< [ 24: 13](RO/H) Index of entry at the head of this subqueue. */
        uint64_t reserved_25           : 1;
        uint64_t queue_cnt             : 13; /**< [ 38: 26](RO/H) Number of valid entries in this subqueue. */
        uint64_t reserved_39           : 1;
        uint64_t queue_val             : 1;  /**< [ 40: 40](RO/H) One or more valid entries are in this subqueue. */
        uint64_t reserved_41_55        : 15;
        uint64_t qnum_tail             : 2;  /**< [ 57: 56](RO/H) Subqueue for next tail. */
        uint64_t qnum_head             : 2;  /**< [ 59: 58](RO/H) Subqueue with current head. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_ipl_freex_s cnf10ka; */
    /* struct cavm_sso_af_ipl_freex_s cnf10kb; */
};
typedef union cavm_sso_af_ipl_freex cavm_sso_af_ipl_freex_t;

static inline uint64_t CAVM_SSO_AF_IPL_FREEX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_IPL_FREEX(uint64_t a)
{
    if (a<=3)
        return 0x840070800000ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("SSO_AF_IPL_FREEX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_IPL_FREEX(a) cavm_sso_af_ipl_freex_t
#define bustype_CAVM_SSO_AF_IPL_FREEX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_IPL_FREEX(a) "SSO_AF_IPL_FREEX"
#define device_bar_CAVM_SSO_AF_IPL_FREEX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_IPL_FREEX(a) (a)
#define arguments_CAVM_SSO_AF_IPL_FREEX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_ipl_iaq#
 *
 * SSO AF Hardware Group IAQ List State Registers
 * Returns list status for the internal admission queue indexed by hardware group.
 */
union cavm_sso_af_ipl_iaqx
{
    uint64_t u;
    struct cavm_sso_af_ipl_iaqx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_28_63        : 36;
        uint64_t queue_val             : 1;  /**< [ 27: 27](RO/H) One or more valid entries are in the queue. */
        uint64_t queue_one             : 1;  /**< [ 26: 26](RO/H) Exactly one valid entry is in the queue. */
        uint64_t queue_head            : 13; /**< [ 25: 13](RO/H) Index of entry at the head of the queue. */
        uint64_t queue_tail            : 13; /**< [ 12:  0](RO/H) Index of entry at the tail of the queue. */
#else /* Word 0 - Little Endian */
        uint64_t queue_tail            : 13; /**< [ 12:  0](RO/H) Index of entry at the tail of the queue. */
        uint64_t queue_head            : 13; /**< [ 25: 13](RO/H) Index of entry at the head of the queue. */
        uint64_t queue_one             : 1;  /**< [ 26: 26](RO/H) Exactly one valid entry is in the queue. */
        uint64_t queue_val             : 1;  /**< [ 27: 27](RO/H) One or more valid entries are in the queue. */
        uint64_t reserved_28_63        : 36;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ipl_iaqx_s cn10; */
    /* struct cavm_sso_af_ipl_iaqx_s cn10ka; */
    struct cavm_sso_af_ipl_iaqx_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_28_63        : 36;
        uint64_t queue_val             : 1;  /**< [ 27: 27](RO/H) One or more valid entries are in the queue. */
        uint64_t queue_one             : 1;  /**< [ 26: 26](RO/H) Exactly one valid entry is in the queue. */
        uint64_t reserved_25           : 1;
        uint64_t queue_head            : 12; /**< [ 24: 13](RO/H) Index of entry at the head of the queue. */
        uint64_t reserved_12           : 1;
        uint64_t queue_tail            : 12; /**< [ 11:  0](RO/H) Index of entry at the tail of the queue. */
#else /* Word 0 - Little Endian */
        uint64_t queue_tail            : 12; /**< [ 11:  0](RO/H) Index of entry at the tail of the queue. */
        uint64_t reserved_12           : 1;
        uint64_t queue_head            : 12; /**< [ 24: 13](RO/H) Index of entry at the head of the queue. */
        uint64_t reserved_25           : 1;
        uint64_t queue_one             : 1;  /**< [ 26: 26](RO/H) Exactly one valid entry is in the queue. */
        uint64_t queue_val             : 1;  /**< [ 27: 27](RO/H) One or more valid entries are in the queue. */
        uint64_t reserved_28_63        : 36;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_ipl_iaqx_s cnf10ka; */
    /* struct cavm_sso_af_ipl_iaqx_s cnf10kb; */
};
typedef union cavm_sso_af_ipl_iaqx cavm_sso_af_ipl_iaqx_t;

static inline uint64_t CAVM_SSO_AF_IPL_IAQX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_IPL_IAQX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x840070840000ll + 8ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x840070840000ll + 8ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x840070840000ll + 8ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x840070840000ll + 8ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_IPL_IAQX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_IPL_IAQX(a) cavm_sso_af_ipl_iaqx_t
#define bustype_CAVM_SSO_AF_IPL_IAQX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_IPL_IAQX(a) "SSO_AF_IPL_IAQX"
#define device_bar_CAVM_SSO_AF_IPL_IAQX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_IPL_IAQX(a) (a)
#define arguments_CAVM_SSO_AF_IPL_IAQX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_iu_accnt#_cfg
 *
 * SSO AF In-Unit Accounting Configuration Registers
 * These registers configure and report status for the in-unit entry
 * accounting indices.
 */
union cavm_sso_af_iu_accntx_cfg
{
    uint64_t u;
    struct cavm_sso_af_iu_accntx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_31_63        : 33;
        uint64_t thresh                : 15; /**< [ 30: 16](R/W) The maximum number of in-unit entries that may be used by this
                                                                 accounting index. */
        uint64_t cnt                   : 16; /**< [ 15:  0](RO/H) The number of in-unit entries currently used by this accounting index.
                                                                 This is a signed number and may temporarily be negative due to
                                                                 different latencies between incrementing and decrementing the count. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 16; /**< [ 15:  0](RO/H) The number of in-unit entries currently used by this accounting index.
                                                                 This is a signed number and may temporarily be negative due to
                                                                 different latencies between incrementing and decrementing the count. */
        uint64_t thresh                : 15; /**< [ 30: 16](R/W) The maximum number of in-unit entries that may be used by this
                                                                 accounting index. */
        uint64_t reserved_31_63        : 33;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_iu_accntx_cfg_s cn; */
};
typedef union cavm_sso_af_iu_accntx_cfg cavm_sso_af_iu_accntx_cfg_t;

static inline uint64_t CAVM_SSO_AF_IU_ACCNTX_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_IU_ACCNTX_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x840070050000ll + 8ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x840070050000ll + 8ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x840070050000ll + 8ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x840070050000ll + 8ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_IU_ACCNTX_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_IU_ACCNTX_CFG(a) cavm_sso_af_iu_accntx_cfg_t
#define bustype_CAVM_SSO_AF_IU_ACCNTX_CFG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_IU_ACCNTX_CFG(a) "SSO_AF_IU_ACCNTX_CFG"
#define device_bar_CAVM_SSO_AF_IU_ACCNTX_CFG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_IU_ACCNTX_CFG(a) (a)
#define arguments_CAVM_SSO_AF_IU_ACCNTX_CFG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_iu_accnt#_rst
 *
 * SSO AF In-Unit Accounting Count Reset Registers
 */
union cavm_sso_af_iu_accntx_rst
{
    uint64_t u;
    struct cavm_sso_af_iu_accntx_rst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t rst                   : 1;  /**< [  0:  0](WO) Resets the IU accounting index count for SSO_AF_IU_ACCNT()_CFG[CNT]. */
#else /* Word 0 - Little Endian */
        uint64_t rst                   : 1;  /**< [  0:  0](WO) Resets the IU accounting index count for SSO_AF_IU_ACCNT()_CFG[CNT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_iu_accntx_rst_s cn; */
};
typedef union cavm_sso_af_iu_accntx_rst cavm_sso_af_iu_accntx_rst_t;

static inline uint64_t CAVM_SSO_AF_IU_ACCNTX_RST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_IU_ACCNTX_RST(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x840070060000ll + 8ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x840070060000ll + 8ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x840070060000ll + 8ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x840070060000ll + 8ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_IU_ACCNTX_RST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_IU_ACCNTX_RST(a) cavm_sso_af_iu_accntx_rst_t
#define bustype_CAVM_SSO_AF_IU_ACCNTX_RST(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_IU_ACCNTX_RST(a) "SSO_AF_IU_ACCNTX_RST"
#define device_bar_CAVM_SSO_AF_IU_ACCNTX_RST(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_IU_ACCNTX_RST(a) (a)
#define arguments_CAVM_SSO_AF_IU_ACCNTX_RST(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_lf_hwgrp_rst
 *
 * SSO AF LF HWGRP Reset Register
 */
union cavm_sso_af_lf_hwgrp_rst
{
    uint64_t u;
    struct cavm_sso_af_lf_hwgrp_rst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t exec                  : 1;  /**< [ 12: 12](R/W1S/H) Execute LF software-initiated reset. When software writes a one to set this bit, hardware
                                                                 resets the local function selected by [LF]. Hardware clears this bit when
                                                                 done. */
        uint64_t reserved_8_11         : 4;
        uint64_t lf                    : 8;  /**< [  7:  0](R/W) Local function that is reset when [EXEC] is set. */
#else /* Word 0 - Little Endian */
        uint64_t lf                    : 8;  /**< [  7:  0](R/W) Local function that is reset when [EXEC] is set. */
        uint64_t reserved_8_11         : 4;
        uint64_t exec                  : 1;  /**< [ 12: 12](R/W1S/H) Execute LF software-initiated reset. When software writes a one to set this bit, hardware
                                                                 resets the local function selected by [LF]. Hardware clears this bit when
                                                                 done. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_lf_hwgrp_rst_s cn; */
};
typedef union cavm_sso_af_lf_hwgrp_rst cavm_sso_af_lf_hwgrp_rst_t;

#define CAVM_SSO_AF_LF_HWGRP_RST CAVM_SSO_AF_LF_HWGRP_RST_FUNC()
static inline uint64_t CAVM_SSO_AF_LF_HWGRP_RST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_LF_HWGRP_RST_FUNC(void)
{
    return 0x8400700010e0ll;
}

#define typedef_CAVM_SSO_AF_LF_HWGRP_RST cavm_sso_af_lf_hwgrp_rst_t
#define bustype_CAVM_SSO_AF_LF_HWGRP_RST CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_LF_HWGRP_RST "SSO_AF_LF_HWGRP_RST"
#define device_bar_CAVM_SSO_AF_LF_HWGRP_RST 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_LF_HWGRP_RST 0
#define arguments_CAVM_SSO_AF_LF_HWGRP_RST -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_npa_digest#
 *
 * SSO AF NPA Error Summary W1C Registers
 * One bit per HWGRP to indicate which groups have reported an SSO_AF_ERR0[NPA] error.
 */
union cavm_sso_af_npa_digestx
{
    uint64_t u;
    struct cavm_sso_af_npa_digestx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1C/H) One bit per HWGRP. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1C/H) One bit per HWGRP. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_npa_digestx_s cn; */
};
typedef union cavm_sso_af_npa_digestx cavm_sso_af_npa_digestx_t;

static inline uint64_t CAVM_SSO_AF_NPA_DIGESTX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_NPA_DIGESTX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=3))
        return 0x840070900000ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x840070900000ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x840070900000ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x840070900000ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("SSO_AF_NPA_DIGESTX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_NPA_DIGESTX(a) cavm_sso_af_npa_digestx_t
#define bustype_CAVM_SSO_AF_NPA_DIGESTX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_NPA_DIGESTX(a) "SSO_AF_NPA_DIGESTX"
#define device_bar_CAVM_SSO_AF_NPA_DIGESTX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_NPA_DIGESTX(a) (a)
#define arguments_CAVM_SSO_AF_NPA_DIGESTX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_npa_digest#_w1s
 *
 * SSO AF NPA Error Summary W1S Registers
 * This register reads or sets bits.
 */
union cavm_sso_af_npa_digestx_w1s
{
    uint64_t u;
    struct cavm_sso_af_npa_digestx_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_NPA_DIGEST(0..3)[HWGRP]. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_NPA_DIGEST(0..3)[HWGRP]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_npa_digestx_w1s_s cn10; */
    /* struct cavm_sso_af_npa_digestx_w1s_s cn10ka; */
    struct cavm_sso_af_npa_digestx_w1s_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_NPA_DIGEST(0..1)[HWGRP]. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_NPA_DIGEST(0..1)[HWGRP]. */
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_npa_digestx_w1s_s cnf10ka; */
    /* struct cavm_sso_af_npa_digestx_w1s_s cnf10kb; */
};
typedef union cavm_sso_af_npa_digestx_w1s cavm_sso_af_npa_digestx_w1s_t;

static inline uint64_t CAVM_SSO_AF_NPA_DIGESTX_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_NPA_DIGESTX_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=3))
        return 0x840070900100ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x840070900100ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x840070900100ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x840070900100ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("SSO_AF_NPA_DIGESTX_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_NPA_DIGESTX_W1S(a) cavm_sso_af_npa_digestx_w1s_t
#define bustype_CAVM_SSO_AF_NPA_DIGESTX_W1S(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_NPA_DIGESTX_W1S(a) "SSO_AF_NPA_DIGESTX_W1S"
#define device_bar_CAVM_SSO_AF_NPA_DIGESTX_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_NPA_DIGESTX_W1S(a) (a)
#define arguments_CAVM_SSO_AF_NPA_DIGESTX_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_poison#
 *
 * SSO AF Poison Registers
 * These registers report which hardware group(s) have had POISON returned
 * during an XAQ read operation. There is one bit for each hardware group.
 */
union cavm_sso_af_poisonx
{
    uint64_t u;
    struct cavm_sso_af_poisonx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrps                : 64; /**< [ 63:  0](R/W1C/H) One bit per hardware group indicating XAQ poison. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrps                : 64; /**< [ 63:  0](R/W1C/H) One bit per hardware group indicating XAQ poison. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_poisonx_s cn; */
};
typedef union cavm_sso_af_poisonx cavm_sso_af_poisonx_t;

static inline uint64_t CAVM_SSO_AF_POISONX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_POISONX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=3))
        return 0x840070002100ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x840070002100ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x840070002100ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x840070002100ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("SSO_AF_POISONX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_POISONX(a) cavm_sso_af_poisonx_t
#define bustype_CAVM_SSO_AF_POISONX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_POISONX(a) "SSO_AF_POISONX"
#define device_bar_CAVM_SSO_AF_POISONX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_POISONX(a) (a)
#define arguments_CAVM_SSO_AF_POISONX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_poison#_w1s
 *
 * SSO AF Poison Set Registers
 * This register reads or sets bits.
 */
union cavm_sso_af_poisonx_w1s
{
    uint64_t u;
    struct cavm_sso_af_poisonx_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrps                : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_POISON(0..3)[HWGRPS]. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrps                : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_POISON(0..3)[HWGRPS]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_poisonx_w1s_s cn10; */
    /* struct cavm_sso_af_poisonx_w1s_s cn10ka; */
    struct cavm_sso_af_poisonx_w1s_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrps                : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_POISON(0..1)[HWGRPS]. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrps                : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_POISON(0..1)[HWGRPS]. */
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_poisonx_w1s_s cnf10ka; */
    /* struct cavm_sso_af_poisonx_w1s_s cnf10kb; */
};
typedef union cavm_sso_af_poisonx_w1s cavm_sso_af_poisonx_w1s_t;

static inline uint64_t CAVM_SSO_AF_POISONX_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_POISONX_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=3))
        return 0x840070002200ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x840070002200ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x840070002200ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x840070002200ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("SSO_AF_POISONX_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_POISONX_W1S(a) cavm_sso_af_poisonx_w1s_t
#define bustype_CAVM_SSO_AF_POISONX_W1S(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_POISONX_W1S(a) "SSO_AF_POISONX_W1S"
#define device_bar_CAVM_SSO_AF_POISONX_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_POISONX_W1S(a) (a)
#define arguments_CAVM_SSO_AF_POISONX_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_qctldis_digest#
 *
 * SSO AF QCTLDIS Error Summary Registers
 * One bit per HWGRP to indicate which groups have reported an
 * SSO_AF_ERR0[ADDWQ_DROPPED_QCTLDIS] error.
 */
union cavm_sso_af_qctldis_digestx
{
    uint64_t u;
    struct cavm_sso_af_qctldis_digestx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1C/H) One bit per HWGRP. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1C/H) One bit per HWGRP. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_qctldis_digestx_s cn; */
};
typedef union cavm_sso_af_qctldis_digestx cavm_sso_af_qctldis_digestx_t;

static inline uint64_t CAVM_SSO_AF_QCTLDIS_DIGESTX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_QCTLDIS_DIGESTX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=3))
        return 0x840070900e00ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x840070900e00ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x840070900e00ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x840070900e00ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("SSO_AF_QCTLDIS_DIGESTX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_QCTLDIS_DIGESTX(a) cavm_sso_af_qctldis_digestx_t
#define bustype_CAVM_SSO_AF_QCTLDIS_DIGESTX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_QCTLDIS_DIGESTX(a) "SSO_AF_QCTLDIS_DIGESTX"
#define device_bar_CAVM_SSO_AF_QCTLDIS_DIGESTX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_QCTLDIS_DIGESTX(a) (a)
#define arguments_CAVM_SSO_AF_QCTLDIS_DIGESTX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_qctldis_digest#_w1s
 *
 * SSO AF QCTLDIS Error Summary Registers
 * This register reads or sets bits.
 */
union cavm_sso_af_qctldis_digestx_w1s
{
    uint64_t u;
    struct cavm_sso_af_qctldis_digestx_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_QCTLDIS_DIGEST(0..3)[HWGRP]. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_QCTLDIS_DIGEST(0..3)[HWGRP]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_qctldis_digestx_w1s_s cn10; */
    /* struct cavm_sso_af_qctldis_digestx_w1s_s cn10ka; */
    struct cavm_sso_af_qctldis_digestx_w1s_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_QCTLDIS_DIGEST(0..1)[HWGRP]. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_QCTLDIS_DIGEST(0..1)[HWGRP]. */
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_qctldis_digestx_w1s_s cnf10ka; */
    /* struct cavm_sso_af_qctldis_digestx_w1s_s cnf10kb; */
};
typedef union cavm_sso_af_qctldis_digestx_w1s cavm_sso_af_qctldis_digestx_w1s_t;

static inline uint64_t CAVM_SSO_AF_QCTLDIS_DIGESTX_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_QCTLDIS_DIGESTX_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=3))
        return 0x840070900f00ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x840070900f00ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x840070900f00ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x840070900f00ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("SSO_AF_QCTLDIS_DIGESTX_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_QCTLDIS_DIGESTX_W1S(a) cavm_sso_af_qctldis_digestx_w1s_t
#define bustype_CAVM_SSO_AF_QCTLDIS_DIGESTX_W1S(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_QCTLDIS_DIGESTX_W1S(a) "SSO_AF_QCTLDIS_DIGESTX_W1S"
#define device_bar_CAVM_SSO_AF_QCTLDIS_DIGESTX_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_QCTLDIS_DIGESTX_W1S(a) (a)
#define arguments_CAVM_SSO_AF_QCTLDIS_DIGESTX_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_ras
 *
 * SSO AF RAS Register
 * This register reports and clears RAS interrupts.
 */
union cavm_sso_af_ras
{
    uint64_t u;
    struct cavm_sso_af_ras_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t xaq_psn               : 1;  /**< [  0:  0](R/W1C/H) An XAQ read returned poison. See SSO_AF_POISON() to determine which
                                                                 hardware group(s) have been affected. */
#else /* Word 0 - Little Endian */
        uint64_t xaq_psn               : 1;  /**< [  0:  0](R/W1C/H) An XAQ read returned poison. See SSO_AF_POISON() to determine which
                                                                 hardware group(s) have been affected. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ras_s cn; */
};
typedef union cavm_sso_af_ras cavm_sso_af_ras_t;

#define CAVM_SSO_AF_RAS CAVM_SSO_AF_RAS_FUNC()
static inline uint64_t CAVM_SSO_AF_RAS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_RAS_FUNC(void)
{
    return 0x840070001420ll;
}

#define typedef_CAVM_SSO_AF_RAS cavm_sso_af_ras_t
#define bustype_CAVM_SSO_AF_RAS CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_RAS "SSO_AF_RAS"
#define device_bar_CAVM_SSO_AF_RAS 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_RAS 0
#define arguments_CAVM_SSO_AF_RAS -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_ras_ena_w1c
 *
 * SSO AF RAS Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_sso_af_ras_ena_w1c
{
    uint64_t u;
    struct cavm_sso_af_ras_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t xaq_psn               : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for SSO_AF_RAS[XAQ_PSN]. */
#else /* Word 0 - Little Endian */
        uint64_t xaq_psn               : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for SSO_AF_RAS[XAQ_PSN]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ras_ena_w1c_s cn; */
};
typedef union cavm_sso_af_ras_ena_w1c cavm_sso_af_ras_ena_w1c_t;

#define CAVM_SSO_AF_RAS_ENA_W1C CAVM_SSO_AF_RAS_ENA_W1C_FUNC()
static inline uint64_t CAVM_SSO_AF_RAS_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_RAS_ENA_W1C_FUNC(void)
{
    return 0x840070001460ll;
}

#define typedef_CAVM_SSO_AF_RAS_ENA_W1C cavm_sso_af_ras_ena_w1c_t
#define bustype_CAVM_SSO_AF_RAS_ENA_W1C CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_RAS_ENA_W1C "SSO_AF_RAS_ENA_W1C"
#define device_bar_CAVM_SSO_AF_RAS_ENA_W1C 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_RAS_ENA_W1C 0
#define arguments_CAVM_SSO_AF_RAS_ENA_W1C -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_ras_ena_w1s
 *
 * SSO AF RAS Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_sso_af_ras_ena_w1s
{
    uint64_t u;
    struct cavm_sso_af_ras_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t xaq_psn               : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for SSO_AF_RAS[XAQ_PSN]. */
#else /* Word 0 - Little Endian */
        uint64_t xaq_psn               : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for SSO_AF_RAS[XAQ_PSN]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ras_ena_w1s_s cn; */
};
typedef union cavm_sso_af_ras_ena_w1s cavm_sso_af_ras_ena_w1s_t;

#define CAVM_SSO_AF_RAS_ENA_W1S CAVM_SSO_AF_RAS_ENA_W1S_FUNC()
static inline uint64_t CAVM_SSO_AF_RAS_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_RAS_ENA_W1S_FUNC(void)
{
    return 0x840070001470ll;
}

#define typedef_CAVM_SSO_AF_RAS_ENA_W1S cavm_sso_af_ras_ena_w1s_t
#define bustype_CAVM_SSO_AF_RAS_ENA_W1S CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_RAS_ENA_W1S "SSO_AF_RAS_ENA_W1S"
#define device_bar_CAVM_SSO_AF_RAS_ENA_W1S 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_RAS_ENA_W1S 0
#define arguments_CAVM_SSO_AF_RAS_ENA_W1S -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_ras_w1s
 *
 * SSO AF RAS Set Register
 * This register sets interrupt bits.
 */
union cavm_sso_af_ras_w1s
{
    uint64_t u;
    struct cavm_sso_af_ras_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t xaq_psn               : 1;  /**< [  0:  0](R/W1S/H) Reads or sets SSO_AF_RAS[XAQ_PSN]. */
#else /* Word 0 - Little Endian */
        uint64_t xaq_psn               : 1;  /**< [  0:  0](R/W1S/H) Reads or sets SSO_AF_RAS[XAQ_PSN]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ras_w1s_s cn; */
};
typedef union cavm_sso_af_ras_w1s cavm_sso_af_ras_w1s_t;

#define CAVM_SSO_AF_RAS_W1S CAVM_SSO_AF_RAS_W1S_FUNC()
static inline uint64_t CAVM_SSO_AF_RAS_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_RAS_W1S_FUNC(void)
{
    return 0x840070001430ll;
}

#define typedef_CAVM_SSO_AF_RAS_W1S cavm_sso_af_ras_w1s_t
#define bustype_CAVM_SSO_AF_RAS_W1S CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_RAS_W1S "SSO_AF_RAS_W1S"
#define device_bar_CAVM_SSO_AF_RAS_W1S 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_RAS_W1S 0
#define arguments_CAVM_SSO_AF_RAS_W1S -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_rvu_lf_cfg_debug
 *
 * SSO Privileged Local Function Configuration Debug Register
 */
union cavm_sso_af_rvu_lf_cfg_debug
{
    uint64_t u;
    struct cavm_sso_af_rvu_lf_cfg_debug_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t pf_func               : 16; /**< [ 39: 24](R/W) RVU VF/PF for reverse lookup. Format defined by RVU_PF_FUNC_S. */
        uint64_t slot                  : 8;  /**< [ 23: 16](R/W) Slot within the VF/PF selected by [PF_FUNC] for reverse lookup. Must be
                                                                 zero for NIX and NPA. */
        uint64_t reserved_14_15        : 2;
        uint64_t exec                  : 1;  /**< [ 13: 13](R/W1S/H) Execute lookup. Writing a one to this bit initiates the reverse lookup
                                                                 from {[PF_FUNC], [SLOT]}. Hardware writes the lookup result to {[LF_VALID],
                                                                 [LF]} and clears this bit when done. */
        uint64_t lf_valid              : 1;  /**< [ 12: 12](RO/H) When set, indicates local function [LF] is provisioned to the VF/PF slot
                                                                 indexed by this register. When clear, a local function is not provisioned
                                                                 to the VF/PF slot. */
        uint64_t lf                    : 12; /**< [ 11:  0](RO/H) When [LF_VALID] is set, local function provisioned to the VF/PF slot. */
#else /* Word 0 - Little Endian */
        uint64_t lf                    : 12; /**< [ 11:  0](RO/H) When [LF_VALID] is set, local function provisioned to the VF/PF slot. */
        uint64_t lf_valid              : 1;  /**< [ 12: 12](RO/H) When set, indicates local function [LF] is provisioned to the VF/PF slot
                                                                 indexed by this register. When clear, a local function is not provisioned
                                                                 to the VF/PF slot. */
        uint64_t exec                  : 1;  /**< [ 13: 13](R/W1S/H) Execute lookup. Writing a one to this bit initiates the reverse lookup
                                                                 from {[PF_FUNC], [SLOT]}. Hardware writes the lookup result to {[LF_VALID],
                                                                 [LF]} and clears this bit when done. */
        uint64_t reserved_14_15        : 2;
        uint64_t slot                  : 8;  /**< [ 23: 16](R/W) Slot within the VF/PF selected by [PF_FUNC] for reverse lookup. Must be
                                                                 zero for NIX and NPA. */
        uint64_t pf_func               : 16; /**< [ 39: 24](R/W) RVU VF/PF for reverse lookup. Format defined by RVU_PF_FUNC_S. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_rvu_lf_cfg_debug_s cn; */
};
typedef union cavm_sso_af_rvu_lf_cfg_debug cavm_sso_af_rvu_lf_cfg_debug_t;

#define CAVM_SSO_AF_RVU_LF_CFG_DEBUG CAVM_SSO_AF_RVU_LF_CFG_DEBUG_FUNC()
static inline uint64_t CAVM_SSO_AF_RVU_LF_CFG_DEBUG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_RVU_LF_CFG_DEBUG_FUNC(void)
{
    return 0x840070003800ll;
}

#define typedef_CAVM_SSO_AF_RVU_LF_CFG_DEBUG cavm_sso_af_rvu_lf_cfg_debug_t
#define bustype_CAVM_SSO_AF_RVU_LF_CFG_DEBUG CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_RVU_LF_CFG_DEBUG "SSO_AF_RVU_LF_CFG_DEBUG"
#define device_bar_CAVM_SSO_AF_RVU_LF_CFG_DEBUG 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_RVU_LF_CFG_DEBUG 0
#define arguments_CAVM_SSO_AF_RVU_LF_CFG_DEBUG -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_taq#_link
 *
 * SSO AF Transitory Admission Queue Link Registers
 * Returns TAQ status for a given line.
 */
union cavm_sso_af_taqx_link
{
    uint64_t u;
    struct cavm_sso_af_taqx_link_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_11_63        : 53;
        uint64_t next                  : 11; /**< [ 10:  0](RO/H) Next TAQ entry in linked list. Only valid when not at the tail of the list. */
#else /* Word 0 - Little Endian */
        uint64_t next                  : 11; /**< [ 10:  0](RO/H) Next TAQ entry in linked list. Only valid when not at the tail of the list. */
        uint64_t reserved_11_63        : 53;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_taqx_link_s cn; */
};
typedef union cavm_sso_af_taqx_link cavm_sso_af_taqx_link_t;

static inline uint64_t CAVM_SSO_AF_TAQX_LINK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_TAQX_LINK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1279))
        return 0x840070c00000ll + 8ll * ((a) & 0x7ff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=639))
        return 0x840070c00000ll + 8ll * ((a) & 0x3ff);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1279))
        return 0x840070c00000ll + 8ll * ((a) & 0x7ff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1279))
        return 0x840070c00000ll + 8ll * ((a) & 0x7ff);
    __cavm_csr_fatal("SSO_AF_TAQX_LINK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_TAQX_LINK(a) cavm_sso_af_taqx_link_t
#define bustype_CAVM_SSO_AF_TAQX_LINK(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_TAQX_LINK(a) "SSO_AF_TAQX_LINK"
#define device_bar_CAVM_SSO_AF_TAQX_LINK(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_TAQX_LINK(a) (a)
#define arguments_CAVM_SSO_AF_TAQX_LINK(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_taq#_wae#_tag
 *
 * SSO AF Transitory Admission Queue Tag Registers
 * Returns TAQ status for a given line and WAE within that line.
 */
union cavm_sso_af_taqx_waex_tag
{
    uint64_t u;
    struct cavm_sso_af_taqx_waex_tag_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_34_63        : 30;
        uint64_t tt                    : 2;  /**< [ 33: 32](RO/H) The tag type of the TAQ entry. Enumerated by SSO_TT_E. */
        uint64_t tag                   : 32; /**< [ 31:  0](RO/H) The tag of the TAQ entry. */
#else /* Word 0 - Little Endian */
        uint64_t tag                   : 32; /**< [ 31:  0](RO/H) The tag of the TAQ entry. */
        uint64_t tt                    : 2;  /**< [ 33: 32](RO/H) The tag type of the TAQ entry. Enumerated by SSO_TT_E. */
        uint64_t reserved_34_63        : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_taqx_waex_tag_s cn; */
};
typedef union cavm_sso_af_taqx_waex_tag cavm_sso_af_taqx_waex_tag_t;

static inline uint64_t CAVM_SSO_AF_TAQX_WAEX_TAG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_TAQX_WAEX_TAG(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1279) && (b<=10)))
        return 0x840070e00000ll + 0x100ll * ((a) & 0x7ff) + 0x10ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=639) && (b<=10)))
        return 0x840070e00000ll + 0x100ll * ((a) & 0x3ff) + 0x10ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1279) && (b<=10)))
        return 0x840070e00000ll + 0x100ll * ((a) & 0x7ff) + 0x10ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1279) && (b<=10)))
        return 0x840070e00000ll + 0x100ll * ((a) & 0x7ff) + 0x10ll * ((b) & 0xf);
    __cavm_csr_fatal("SSO_AF_TAQX_WAEX_TAG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_TAQX_WAEX_TAG(a,b) cavm_sso_af_taqx_waex_tag_t
#define bustype_CAVM_SSO_AF_TAQX_WAEX_TAG(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_TAQX_WAEX_TAG(a,b) "SSO_AF_TAQX_WAEX_TAG"
#define device_bar_CAVM_SSO_AF_TAQX_WAEX_TAG(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_TAQX_WAEX_TAG(a,b) (a)
#define arguments_CAVM_SSO_AF_TAQX_WAEX_TAG(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_taq#_wae#_wqp
 *
 * SSO AF Transitory Admission Queue Pointer Registers
 * Returns TAQ status for a given line and WAE within that line.
 */
union cavm_sso_af_taqx_waex_wqp
{
    uint64_t u;
    struct cavm_sso_af_taqx_waex_wqp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wqp                   : 64; /**< [ 63:  0](RO/H) Work queue LF IOVA held in the TAQ entry.
                                                                 Bits \<63:49\> are a sign extension of \<52\>.  Bits \<2:0\> are 0x0. */
#else /* Word 0 - Little Endian */
        uint64_t wqp                   : 64; /**< [ 63:  0](RO/H) Work queue LF IOVA held in the TAQ entry.
                                                                 Bits \<63:49\> are a sign extension of \<52\>.  Bits \<2:0\> are 0x0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_taqx_waex_wqp_s cn; */
};
typedef union cavm_sso_af_taqx_waex_wqp cavm_sso_af_taqx_waex_wqp_t;

static inline uint64_t CAVM_SSO_AF_TAQX_WAEX_WQP(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_TAQX_WAEX_WQP(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1279) && (b<=10)))
        return 0x840070e00008ll + 0x100ll * ((a) & 0x7ff) + 0x10ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=639) && (b<=10)))
        return 0x840070e00008ll + 0x100ll * ((a) & 0x3ff) + 0x10ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1279) && (b<=10)))
        return 0x840070e00008ll + 0x100ll * ((a) & 0x7ff) + 0x10ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1279) && (b<=10)))
        return 0x840070e00008ll + 0x100ll * ((a) & 0x7ff) + 0x10ll * ((b) & 0xf);
    __cavm_csr_fatal("SSO_AF_TAQX_WAEX_WQP", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_TAQX_WAEX_WQP(a,b) cavm_sso_af_taqx_waex_wqp_t
#define bustype_CAVM_SSO_AF_TAQX_WAEX_WQP(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_TAQX_WAEX_WQP(a,b) "SSO_AF_TAQX_WAEX_WQP"
#define device_bar_CAVM_SSO_AF_TAQX_WAEX_WQP(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_TAQX_WAEX_WQP(a,b) (a)
#define arguments_CAVM_SSO_AF_TAQX_WAEX_WQP(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_taq_add
 *
 * SSO AF Transitory Admission Queue Add Register
 */
union cavm_sso_af_taq_add
{
    uint64_t u;
    struct cavm_sso_af_taq_add_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_29_63        : 35;
        uint64_t rsvd_free             : 13; /**< [ 28: 16](WO) Written value is added to SSO_AF_TAQ_CNT[RSVD_FREE] to prevent races between software and
                                                                 hardware changes. This is a two's complement value so subtraction may also be performed. */
        uint64_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_15         : 16;
        uint64_t rsvd_free             : 13; /**< [ 28: 16](WO) Written value is added to SSO_AF_TAQ_CNT[RSVD_FREE] to prevent races between software and
                                                                 hardware changes. This is a two's complement value so subtraction may also be performed. */
        uint64_t reserved_29_63        : 35;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_taq_add_s cn; */
};
typedef union cavm_sso_af_taq_add cavm_sso_af_taq_add_t;

#define CAVM_SSO_AF_TAQ_ADD CAVM_SSO_AF_TAQ_ADD_FUNC()
static inline uint64_t CAVM_SSO_AF_TAQ_ADD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_TAQ_ADD_FUNC(void)
{
    return 0x8400700020e0ll;
}

#define typedef_CAVM_SSO_AF_TAQ_ADD cavm_sso_af_taq_add_t
#define bustype_CAVM_SSO_AF_TAQ_ADD CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_TAQ_ADD "SSO_AF_TAQ_ADD"
#define device_bar_CAVM_SSO_AF_TAQ_ADD 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_TAQ_ADD 0
#define arguments_CAVM_SSO_AF_TAQ_ADD -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_taq_cnt
 *
 * SSO AF Transitory Admission Queue Count Register
 */
union cavm_sso_af_taq_cnt
{
    uint64_t u;
    struct cavm_sso_af_taq_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_27_63        : 37;
        uint64_t rsvd_free             : 11; /**< [ 26: 16](R/W/H) Number of free reserved buffers. Used to ensure each hardware group may get a
                                                                 specific number of buffers. Must always be greater than or equal to the sum
                                                                 across all SSO_AF_HWGRP()_TAQ_THR[RSVD_THR], and will generally be equal to that sum
                                                                 unless changes to SSO_AF_HWGRP()_TAQ_THR[RSVD_THR] are going to be made. To
                                                                 prevent races, software should not change this register when SSO is being used;
                                                                 instead use SSO_AF_TAQ_ADD[RSVD_FREE]. Legal values are 0..0x4FF. */
        uint64_t reserved_11_15        : 5;
        uint64_t free_cnt              : 11; /**< [ 10:  0](RO/H) Number of total free buffers. */
#else /* Word 0 - Little Endian */
        uint64_t free_cnt              : 11; /**< [ 10:  0](RO/H) Number of total free buffers. */
        uint64_t reserved_11_15        : 5;
        uint64_t rsvd_free             : 11; /**< [ 26: 16](R/W/H) Number of free reserved buffers. Used to ensure each hardware group may get a
                                                                 specific number of buffers. Must always be greater than or equal to the sum
                                                                 across all SSO_AF_HWGRP()_TAQ_THR[RSVD_THR], and will generally be equal to that sum
                                                                 unless changes to SSO_AF_HWGRP()_TAQ_THR[RSVD_THR] are going to be made. To
                                                                 prevent races, software should not change this register when SSO is being used;
                                                                 instead use SSO_AF_TAQ_ADD[RSVD_FREE]. Legal values are 0..0x4FF. */
        uint64_t reserved_27_63        : 37;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_taq_cnt_s cn10; */
    /* struct cavm_sso_af_taq_cnt_s cn10ka; */
    struct cavm_sso_af_taq_cnt_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_26_63        : 38;
        uint64_t rsvd_free             : 10; /**< [ 25: 16](R/W/H) Number of free reserved buffers. Used to ensure each hardware group may get a
                                                                 specific number of buffers. Must always be greater than or equal to the sum
                                                                 across all SSO_AF_HWGRP()_TAQ_THR[RSVD_THR], and will generally be equal to that sum
                                                                 unless changes to SSO_AF_HWGRP()_TAQ_THR[RSVD_THR] are going to be made. To
                                                                 prevent races, software should not change this register when SSO is being used;
                                                                 instead use SSO_AF_TAQ_ADD[RSVD_FREE]. Legal values are 0..0x4FF. */
        uint64_t reserved_10_15        : 6;
        uint64_t free_cnt              : 10; /**< [  9:  0](RO/H) Number of total free buffers. */
#else /* Word 0 - Little Endian */
        uint64_t free_cnt              : 10; /**< [  9:  0](RO/H) Number of total free buffers. */
        uint64_t reserved_10_15        : 6;
        uint64_t rsvd_free             : 10; /**< [ 25: 16](R/W/H) Number of free reserved buffers. Used to ensure each hardware group may get a
                                                                 specific number of buffers. Must always be greater than or equal to the sum
                                                                 across all SSO_AF_HWGRP()_TAQ_THR[RSVD_THR], and will generally be equal to that sum
                                                                 unless changes to SSO_AF_HWGRP()_TAQ_THR[RSVD_THR] are going to be made. To
                                                                 prevent races, software should not change this register when SSO is being used;
                                                                 instead use SSO_AF_TAQ_ADD[RSVD_FREE]. Legal values are 0..0x4FF. */
        uint64_t reserved_26_63        : 38;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_taq_cnt_s cnf10ka; */
    /* struct cavm_sso_af_taq_cnt_s cnf10kb; */
};
typedef union cavm_sso_af_taq_cnt cavm_sso_af_taq_cnt_t;

#define CAVM_SSO_AF_TAQ_CNT CAVM_SSO_AF_TAQ_CNT_FUNC()
static inline uint64_t CAVM_SSO_AF_TAQ_CNT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_TAQ_CNT_FUNC(void)
{
    return 0x8400700020c0ll;
}

#define typedef_CAVM_SSO_AF_TAQ_CNT cavm_sso_af_taq_cnt_t
#define bustype_CAVM_SSO_AF_TAQ_CNT CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_TAQ_CNT "SSO_AF_TAQ_CNT"
#define device_bar_CAVM_SSO_AF_TAQ_CNT 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_TAQ_CNT 0
#define arguments_CAVM_SSO_AF_TAQ_CNT -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_tiaq#_status
 *
 * SSO AF Hardware Group Transitory Input Admission Queue Status Registers
 * This register returns TAQ inbound status indexed by hardware group.
 */
union cavm_sso_af_tiaqx_status
{
    uint64_t u;
    struct cavm_sso_af_tiaqx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wae_head              : 4;  /**< [ 63: 60](RO/H) Head's WAE number within current cache line, 0-10. This provides the second index into
                                                                 SSO_AF_TAQ()_WAE()_TAG and SSO_AF_TAQ()_WAE()_WQP. */
        uint64_t wae_tail              : 4;  /**< [ 59: 56](RO/H) When [WAE_USED] is nonzero, this provides the next free WAE number in the cache
                                                                 line of the tail entry. If 0x0, the next entry will be placed at the beginning of
                                                                 a new cache line. This provides the second index into SSO_AF_TAQ()_WAE()_TAG and
                                                                 SSO_AF_TAQ()_WAE()_WQP. */
        uint64_t reserved_47_55        : 9;
        uint64_t wae_used              : 15; /**< [ 46: 32](RO/H) Number of WAEs in use. */
        uint64_t reserved_23_31        : 9;
        uint64_t ent_head              : 11; /**< [ 22: 12](RO/H) Head's entry number. This provides the first index into SSO_AF_TAQ()_WAE()_TAG
                                                                 and SSO_AF_TAQ()_WAE()_WQP. */
        uint64_t reserved_11           : 1;
        uint64_t ent_tail              : 11; /**< [ 10:  0](RO/H) Tail's entry number. This provides the first index into SSO_AF_TAQ()_WAE()_TAG
                                                                 and SSO_AF_TAQ()_WAE()_WQP. */
#else /* Word 0 - Little Endian */
        uint64_t ent_tail              : 11; /**< [ 10:  0](RO/H) Tail's entry number. This provides the first index into SSO_AF_TAQ()_WAE()_TAG
                                                                 and SSO_AF_TAQ()_WAE()_WQP. */
        uint64_t reserved_11           : 1;
        uint64_t ent_head              : 11; /**< [ 22: 12](RO/H) Head's entry number. This provides the first index into SSO_AF_TAQ()_WAE()_TAG
                                                                 and SSO_AF_TAQ()_WAE()_WQP. */
        uint64_t reserved_23_31        : 9;
        uint64_t wae_used              : 15; /**< [ 46: 32](RO/H) Number of WAEs in use. */
        uint64_t reserved_47_55        : 9;
        uint64_t wae_tail              : 4;  /**< [ 59: 56](RO/H) When [WAE_USED] is nonzero, this provides the next free WAE number in the cache
                                                                 line of the tail entry. If 0x0, the next entry will be placed at the beginning of
                                                                 a new cache line. This provides the second index into SSO_AF_TAQ()_WAE()_TAG and
                                                                 SSO_AF_TAQ()_WAE()_WQP. */
        uint64_t wae_head              : 4;  /**< [ 63: 60](RO/H) Head's WAE number within current cache line, 0-10. This provides the second index into
                                                                 SSO_AF_TAQ()_WAE()_TAG and SSO_AF_TAQ()_WAE()_WQP. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_tiaqx_status_s cn10; */
    /* struct cavm_sso_af_tiaqx_status_s cn10ka; */
    struct cavm_sso_af_tiaqx_status_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wae_head              : 4;  /**< [ 63: 60](RO/H) Head's WAE number within current cache line, 0-10. This provides the second index into
                                                                 SSO_AF_TAQ()_WAE()_TAG and SSO_AF_TAQ()_WAE()_WQP. */
        uint64_t wae_tail              : 4;  /**< [ 59: 56](RO/H) When [WAE_USED] is nonzero, this provides the next free WAE number in the cache
                                                                 line of the tail entry. If 0x0, the next entry will be placed at the beginning of
                                                                 a new cache line. This provides the second index into SSO_AF_TAQ()_WAE()_TAG and
                                                                 SSO_AF_TAQ()_WAE()_WQP. */
        uint64_t reserved_47_55        : 9;
        uint64_t wae_used              : 15; /**< [ 46: 32](RO/H) Number of WAEs in use. */
        uint64_t reserved_22_31        : 10;
        uint64_t ent_head              : 10; /**< [ 21: 12](RO/H) Head's entry number. This provides the first index into SSO_AF_TAQ()_WAE()_TAG
                                                                 and SSO_AF_TAQ()_WAE()_WQP. */
        uint64_t reserved_10_11        : 2;
        uint64_t ent_tail              : 10; /**< [  9:  0](RO/H) Tail's entry number. This provides the first index into SSO_AF_TAQ()_WAE()_TAG
                                                                 and SSO_AF_TAQ()_WAE()_WQP. */
#else /* Word 0 - Little Endian */
        uint64_t ent_tail              : 10; /**< [  9:  0](RO/H) Tail's entry number. This provides the first index into SSO_AF_TAQ()_WAE()_TAG
                                                                 and SSO_AF_TAQ()_WAE()_WQP. */
        uint64_t reserved_10_11        : 2;
        uint64_t ent_head              : 10; /**< [ 21: 12](RO/H) Head's entry number. This provides the first index into SSO_AF_TAQ()_WAE()_TAG
                                                                 and SSO_AF_TAQ()_WAE()_WQP. */
        uint64_t reserved_22_31        : 10;
        uint64_t wae_used              : 15; /**< [ 46: 32](RO/H) Number of WAEs in use. */
        uint64_t reserved_47_55        : 9;
        uint64_t wae_tail              : 4;  /**< [ 59: 56](RO/H) When [WAE_USED] is nonzero, this provides the next free WAE number in the cache
                                                                 line of the tail entry. If 0x0, the next entry will be placed at the beginning of
                                                                 a new cache line. This provides the second index into SSO_AF_TAQ()_WAE()_TAG and
                                                                 SSO_AF_TAQ()_WAE()_WQP. */
        uint64_t wae_head              : 4;  /**< [ 63: 60](RO/H) Head's WAE number within current cache line, 0-10. This provides the second index into
                                                                 SSO_AF_TAQ()_WAE()_TAG and SSO_AF_TAQ()_WAE()_WQP. */
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_tiaqx_status_s cnf10ka; */
    /* struct cavm_sso_af_tiaqx_status_s cnf10kb; */
};
typedef union cavm_sso_af_tiaqx_status cavm_sso_af_tiaqx_status_t;

static inline uint64_t CAVM_SSO_AF_TIAQX_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_TIAQX_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x8400700c0000ll + 8ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x8400700c0000ll + 8ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x8400700c0000ll + 8ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x8400700c0000ll + 8ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_TIAQX_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_TIAQX_STATUS(a) cavm_sso_af_tiaqx_status_t
#define bustype_CAVM_SSO_AF_TIAQX_STATUS(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_TIAQX_STATUS(a) "SSO_AF_TIAQX_STATUS"
#define device_bar_CAVM_SSO_AF_TIAQX_STATUS(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_TIAQX_STATUS(a) (a)
#define arguments_CAVM_SSO_AF_TIAQX_STATUS(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_tilemap#
 *
 * SSO AF Tile Map Registers
 * Contains PF, Func and GWS for the AP tile addressed by the given Index {a} tile ID + slot LSB.
 * For diagnostic use only.
 */
union cavm_sso_af_tilemapx
{
    uint64_t u;
    struct cavm_sso_af_tilemapx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pn                    : 6;  /**< [ 63: 58](RO/H) Processor Number of the corresponding tile_id. */
        uint64_t ngws                  : 7;  /**< [ 57: 51](R/W) GWS being re-mapped to tile NTID if [MV]=1. */
        uint64_t npf_func              : 16; /**< [ 50: 35](R/W) PF and function being re-mapped to NTID tile if [MV]=1. */
        uint64_t mv                    : 1;  /**< [ 34: 34](RO/H) Move bit.  Indicates PF, Func and GWS is being moved to another AP tile, NTID. */
        uint64_t nclid                 : 4;  /**< [ 33: 30](RO/H) New column id; PF, Func and GWS being re-mapped to an AP in this column if
                                                                 [MV]=1, holds current column id when [MV]=0. */
        uint64_t ntid                  : 6;  /**< [ 29: 24](RO/H) New tile_id. PF, Func and GWS being re-mapped to this AP tile if [MV]=1. */
        uint64_t vld                   : 1;  /**< [ 23: 23](R/W) Indicates this entry hold a valid PF,Func,GWS mapping for this AP tile. */
        uint64_t gws                   : 7;  /**< [ 22: 16](R/W) GWS mapped to this AP tile. */
        uint64_t pf_func               : 16; /**< [ 15:  0](R/W) PF and function mapped to this AP tile. Format specified by RVU_PF_FUNC_S. */
#else /* Word 0 - Little Endian */
        uint64_t pf_func               : 16; /**< [ 15:  0](R/W) PF and function mapped to this AP tile. Format specified by RVU_PF_FUNC_S. */
        uint64_t gws                   : 7;  /**< [ 22: 16](R/W) GWS mapped to this AP tile. */
        uint64_t vld                   : 1;  /**< [ 23: 23](R/W) Indicates this entry hold a valid PF,Func,GWS mapping for this AP tile. */
        uint64_t ntid                  : 6;  /**< [ 29: 24](RO/H) New tile_id. PF, Func and GWS being re-mapped to this AP tile if [MV]=1. */
        uint64_t nclid                 : 4;  /**< [ 33: 30](RO/H) New column id; PF, Func and GWS being re-mapped to an AP in this column if
                                                                 [MV]=1, holds current column id when [MV]=0. */
        uint64_t mv                    : 1;  /**< [ 34: 34](RO/H) Move bit.  Indicates PF, Func and GWS is being moved to another AP tile, NTID. */
        uint64_t npf_func              : 16; /**< [ 50: 35](R/W) PF and function being re-mapped to NTID tile if [MV]=1. */
        uint64_t ngws                  : 7;  /**< [ 57: 51](R/W) GWS being re-mapped to tile NTID if [MV]=1. */
        uint64_t pn                    : 6;  /**< [ 63: 58](RO/H) Processor Number of the corresponding tile_id. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_tilemapx_s cn10; */
    struct cavm_sso_af_tilemapx_cn10ka_p1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_35_63        : 29;
        uint64_t mv                    : 1;  /**< [ 34: 34](RO/H) Move bit.  Indicates PF, Func and GWS is being moved to another AP tile, NTID. */
        uint64_t nclid                 : 4;  /**< [ 33: 30](RO/H) New column id; PF, Func and GWS being re-mapped to an AP in this column if
                                                                 [MV]=1, holds current column id when [MV]=0. */
        uint64_t ntid                  : 6;  /**< [ 29: 24](RO/H) New tile_id. PF, Func and GWS being re-mapped to this AP tile if [MV]=1. */
        uint64_t vld                   : 1;  /**< [ 23: 23](R/W) Indicates this entry hold a valid PF,Func,GWS mapping for this AP tile. */
        uint64_t gws                   : 7;  /**< [ 22: 16](R/W) GWS mapped to this AP tile. */
        uint64_t pf_func               : 16; /**< [ 15:  0](R/W) PF and function mapped to this AP tile. Format specified by RVU_PF_FUNC_S. */
#else /* Word 0 - Little Endian */
        uint64_t pf_func               : 16; /**< [ 15:  0](R/W) PF and function mapped to this AP tile. Format specified by RVU_PF_FUNC_S. */
        uint64_t gws                   : 7;  /**< [ 22: 16](R/W) GWS mapped to this AP tile. */
        uint64_t vld                   : 1;  /**< [ 23: 23](R/W) Indicates this entry hold a valid PF,Func,GWS mapping for this AP tile. */
        uint64_t ntid                  : 6;  /**< [ 29: 24](RO/H) New tile_id. PF, Func and GWS being re-mapped to this AP tile if [MV]=1. */
        uint64_t nclid                 : 4;  /**< [ 33: 30](RO/H) New column id; PF, Func and GWS being re-mapped to an AP in this column if
                                                                 [MV]=1, holds current column id when [MV]=0. */
        uint64_t mv                    : 1;  /**< [ 34: 34](RO/H) Move bit.  Indicates PF, Func and GWS is being moved to another AP tile, NTID. */
        uint64_t reserved_35_63        : 29;
#endif /* Word 0 - End */
    } cn10ka_p1;
    /* struct cavm_sso_af_tilemapx_s cn10ka_p2; */
    /* struct cavm_sso_af_tilemapx_s cn10kb; */
    /* struct cavm_sso_af_tilemapx_cn10ka_p1 cnf10ka; */
    /* struct cavm_sso_af_tilemapx_cn10ka_p1 cnf10kb; */
};
typedef union cavm_sso_af_tilemapx cavm_sso_af_tilemapx_t;

static inline uint64_t CAVM_SSO_AF_TILEMAPX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_TILEMAPX(uint64_t a)
{
    if (a<=127)
        return 0x840070400600ll + 0x1000ll * ((a) & 0x7f);
    __cavm_csr_fatal("SSO_AF_TILEMAPX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_TILEMAPX(a) cavm_sso_af_tilemapx_t
#define bustype_CAVM_SSO_AF_TILEMAPX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_TILEMAPX(a) "SSO_AF_TILEMAPX"
#define device_bar_CAVM_SSO_AF_TILEMAPX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_TILEMAPX(a) (a)
#define arguments_CAVM_SSO_AF_TILEMAPX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_toaq#_status
 *
 * SSO AF Hardware Group Transitory Output Admission Queue Status Registers
 * This register returns TAQ outbound status indexed by hardware group.
 */
union cavm_sso_af_toaqx_status
{
    uint64_t u;
    struct cavm_sso_af_toaqx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_62_63        : 2;
        uint64_t ext_vld               : 1;  /**< [ 61: 61](RO/H) External queuing is in use on this hardware group. */
        uint64_t partial               : 1;  /**< [ 60: 60](RO/H) Partial cache line is allocated to tail of queue. */
        uint64_t wae_tail              : 4;  /**< [ 59: 56](RO/H) If [PARTIAL] is set, this provides the next free WAE number in the cache line of
                                                                 the tail entry. If [PARTIAL] is clear, the next entry will be placed at the
                                                                 beginning of a new cache line. This provides the second index into
                                                                 SSO_AF_TAQ()_WAE()_TAG and SSO_AF_TAQ()_WAE()_WQP. */
        uint64_t reserved_43_55        : 13;
        uint64_t cl_used               : 11; /**< [ 42: 32](RO/H) Number of cache lines in use. */
        uint64_t reserved_23_31        : 9;
        uint64_t ent_head              : 11; /**< [ 22: 12](RO/H) Head's entry number. This provides the first index into SSO_AF_TAQ()_WAE()_TAG
                                                                 and SSO_AF_TAQ()_WAE()_WQP. */
        uint64_t reserved_11           : 1;
        uint64_t ent_tail              : 11; /**< [ 10:  0](RO/H) Tail's entry number. This provides the first index into SSO_AF_TAQ()_WAE()_TAG
                                                                 and SSO_AF_TAQ()_WAE()_WQP. */
#else /* Word 0 - Little Endian */
        uint64_t ent_tail              : 11; /**< [ 10:  0](RO/H) Tail's entry number. This provides the first index into SSO_AF_TAQ()_WAE()_TAG
                                                                 and SSO_AF_TAQ()_WAE()_WQP. */
        uint64_t reserved_11           : 1;
        uint64_t ent_head              : 11; /**< [ 22: 12](RO/H) Head's entry number. This provides the first index into SSO_AF_TAQ()_WAE()_TAG
                                                                 and SSO_AF_TAQ()_WAE()_WQP. */
        uint64_t reserved_23_31        : 9;
        uint64_t cl_used               : 11; /**< [ 42: 32](RO/H) Number of cache lines in use. */
        uint64_t reserved_43_55        : 13;
        uint64_t wae_tail              : 4;  /**< [ 59: 56](RO/H) If [PARTIAL] is set, this provides the next free WAE number in the cache line of
                                                                 the tail entry. If [PARTIAL] is clear, the next entry will be placed at the
                                                                 beginning of a new cache line. This provides the second index into
                                                                 SSO_AF_TAQ()_WAE()_TAG and SSO_AF_TAQ()_WAE()_WQP. */
        uint64_t partial               : 1;  /**< [ 60: 60](RO/H) Partial cache line is allocated to tail of queue. */
        uint64_t ext_vld               : 1;  /**< [ 61: 61](RO/H) External queuing is in use on this hardware group. */
        uint64_t reserved_62_63        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_toaqx_status_s cn10; */
    /* struct cavm_sso_af_toaqx_status_s cn10ka; */
    struct cavm_sso_af_toaqx_status_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_62_63        : 2;
        uint64_t ext_vld               : 1;  /**< [ 61: 61](RO/H) External queuing is in use on this hardware group. */
        uint64_t partial               : 1;  /**< [ 60: 60](RO/H) Partial cache line is allocated to tail of queue. */
        uint64_t wae_tail              : 4;  /**< [ 59: 56](RO/H) If [PARTIAL] is set, this provides the next free WAE number in the cache line of
                                                                 the tail entry. If [PARTIAL] is clear, the next entry will be placed at the
                                                                 beginning of a new cache line. This provides the second index into
                                                                 SSO_AF_TAQ()_WAE()_TAG and SSO_AF_TAQ()_WAE()_WQP. */
        uint64_t reserved_42_55        : 14;
        uint64_t cl_used               : 10; /**< [ 41: 32](RO/H) Number of cache lines in use. */
        uint64_t reserved_22_31        : 10;
        uint64_t ent_head              : 10; /**< [ 21: 12](RO/H) Head's entry number. This provides the first index into SSO_AF_TAQ()_WAE()_TAG
                                                                 and SSO_AF_TAQ()_WAE()_WQP. */
        uint64_t reserved_10_11        : 2;
        uint64_t ent_tail              : 10; /**< [  9:  0](RO/H) Tail's entry number. This provides the first index into SSO_AF_TAQ()_WAE()_TAG
                                                                 and SSO_AF_TAQ()_WAE()_WQP. */
#else /* Word 0 - Little Endian */
        uint64_t ent_tail              : 10; /**< [  9:  0](RO/H) Tail's entry number. This provides the first index into SSO_AF_TAQ()_WAE()_TAG
                                                                 and SSO_AF_TAQ()_WAE()_WQP. */
        uint64_t reserved_10_11        : 2;
        uint64_t ent_head              : 10; /**< [ 21: 12](RO/H) Head's entry number. This provides the first index into SSO_AF_TAQ()_WAE()_TAG
                                                                 and SSO_AF_TAQ()_WAE()_WQP. */
        uint64_t reserved_22_31        : 10;
        uint64_t cl_used               : 10; /**< [ 41: 32](RO/H) Number of cache lines in use. */
        uint64_t reserved_42_55        : 14;
        uint64_t wae_tail              : 4;  /**< [ 59: 56](RO/H) If [PARTIAL] is set, this provides the next free WAE number in the cache line of
                                                                 the tail entry. If [PARTIAL] is clear, the next entry will be placed at the
                                                                 beginning of a new cache line. This provides the second index into
                                                                 SSO_AF_TAQ()_WAE()_TAG and SSO_AF_TAQ()_WAE()_WQP. */
        uint64_t partial               : 1;  /**< [ 60: 60](RO/H) Partial cache line is allocated to tail of queue. */
        uint64_t ext_vld               : 1;  /**< [ 61: 61](RO/H) External queuing is in use on this hardware group. */
        uint64_t reserved_62_63        : 2;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_toaqx_status_s cnf10ka; */
    /* struct cavm_sso_af_toaqx_status_s cnf10kb; */
};
typedef union cavm_sso_af_toaqx_status cavm_sso_af_toaqx_status_t;

static inline uint64_t CAVM_SSO_AF_TOAQX_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_TOAQX_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x8400700d0000ll + 8ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x8400700d0000ll + 8ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x8400700d0000ll + 8ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x8400700d0000ll + 8ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_TOAQX_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_TOAQX_STATUS(a) cavm_sso_af_toaqx_status_t
#define bustype_CAVM_SSO_AF_TOAQX_STATUS(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_TOAQX_STATUS(a) "SSO_AF_TOAQX_STATUS"
#define device_bar_CAVM_SSO_AF_TOAQX_STATUS(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_TOAQX_STATUS(a) (a)
#define arguments_CAVM_SSO_AF_TOAQX_STATUS(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_unmap_info
 *
 * SSO AF Unmapped Error Information Register
 * When any of SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI], SSO_AF_ERR0[GGRP_UNMAP],
 * SSO_AF_ERR0[GGRP_MULTI], or SSO_AF_ERR0[ADDWQ_DROPPED_WQP0]
 * error occurs, this register is latched with information from the original request.
 * This register latches the first error detected for SSO_AF_ERR0[ADDWQ_DROPPED_WQP0] and
 * the first error detected for SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI],
 * SSO_AF_ERR0[GGRP_UNMAP] or SSO_AF_ERR0[GGRP_MULTI]. Values in
 * register are held until errors are cleared in SSO_AF_ERR0 register.
 */
union cavm_sso_af_unmap_info
{
    uint64_t u;
    struct cavm_sso_af_unmap_info_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_45_63        : 19;
        uint64_t wqp0_src              : 13; /**< [ 44: 32](RO/H) Illegal WQP0 error source. This field is updated when
                                                                 SSO_AF_ERR0[ADDWQ_DROPPED_WQP0] error occurs, and is held until
                                                                 SSO_AF_ERR0[ADDWQ_DROPPED_WQP0] is cleared.
                                                                 \<11\> = unused
                                                                 \<10\> = unused
                                                                 \<9\> = unused
                                                                 \<8\> = PSM
                                                                 \<7\> = TIM.
                                                                 \<6\> = NIXTX0.
                                                                 \<5\> = DPI0.
                                                                 \<4\> = unused
                                                                 \<3\> = ADDWQ.
                                                                 \<2\> = unused
                                                                 \<1\> = NIXRX0.
                                                                 \<0\> = unused */
        uint64_t ggrp_multi            : 1;  /**< [ 31: 31](RO/H) PF_FUNC map had double-hit error. Set when SSO_AF_ERR0[GGRP_MULTI] is set
                                                                 and held until SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI],
                                                                 SSO_AF_ERR0[GGRP_UNMAP], and SSO_AF_ERR0[GGRP_MULTI] are cleared. */
        uint64_t ggrp_unmap            : 1;  /**< [ 30: 30](RO/H) PF_FUNC mapping not found error. Set when SSO_AF_ERR0[GGRP_UNMAP] is set and held
                                                                 until SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI], SSO_AF_ERR0[GGRP_UNMAP], and
                                                                 SSO_AF_ERR0[GGRP_MULTI] are cleared. */
        uint64_t aw_multi              : 1;  /**< [ 29: 29](RO/H) PF_FUNC map had double-hit error. Set when SSO_AF_ERR0[AW_MULTI] is set
                                                                 and held until SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI],
                                                                 SSO_AF_ERR0[GGRP_UNMAP], and SSO_AF_ERR0[GGRP_MULTI] are cleared. */
        uint64_t aw_unmap              : 1;  /**< [ 28: 28](RO/H) PF_FUNC mapping not found error. Set when SSO_AF_ERR0[AW_UNMAP] is set and held
                                                                 until SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI], SSO_AF_ERR0[GGRP_UNMAP], and
                                                                 SSO_AF_ERR0[GGRP_MULTI] are cleared. */
        uint64_t reserved_26_27        : 2;
        uint64_t ggrp                  : 10; /**< [ 25: 16](RO/H) This field indicates the failing GGRP. This field is updated when
                                                                 any of he following errors occur: SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI],
                                                                 SSO_AF_ERR0[GGRP_UNMAP] or SSO_AF_ERR0[GGRP_MULTI] and is held until all four
                                                                 errors are cleared in
                                                                 SSO_AF_ERR0. */
        uint64_t pf_func               : 16; /**< [ 15:  0](RO/H) Failing PF_FUNC. This field is updated when
                                                                 any of he following errors occur: SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI],
                                                                 SSO_AF_ERR0[GGRP_UNMAP] or SSO_AF_ERR0[GGRP_MULTI] and is held until all four
                                                                 errors are cleared in
                                                                 SSO_AF_ERR0. */
#else /* Word 0 - Little Endian */
        uint64_t pf_func               : 16; /**< [ 15:  0](RO/H) Failing PF_FUNC. This field is updated when
                                                                 any of he following errors occur: SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI],
                                                                 SSO_AF_ERR0[GGRP_UNMAP] or SSO_AF_ERR0[GGRP_MULTI] and is held until all four
                                                                 errors are cleared in
                                                                 SSO_AF_ERR0. */
        uint64_t ggrp                  : 10; /**< [ 25: 16](RO/H) This field indicates the failing GGRP. This field is updated when
                                                                 any of he following errors occur: SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI],
                                                                 SSO_AF_ERR0[GGRP_UNMAP] or SSO_AF_ERR0[GGRP_MULTI] and is held until all four
                                                                 errors are cleared in
                                                                 SSO_AF_ERR0. */
        uint64_t reserved_26_27        : 2;
        uint64_t aw_unmap              : 1;  /**< [ 28: 28](RO/H) PF_FUNC mapping not found error. Set when SSO_AF_ERR0[AW_UNMAP] is set and held
                                                                 until SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI], SSO_AF_ERR0[GGRP_UNMAP], and
                                                                 SSO_AF_ERR0[GGRP_MULTI] are cleared. */
        uint64_t aw_multi              : 1;  /**< [ 29: 29](RO/H) PF_FUNC map had double-hit error. Set when SSO_AF_ERR0[AW_MULTI] is set
                                                                 and held until SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI],
                                                                 SSO_AF_ERR0[GGRP_UNMAP], and SSO_AF_ERR0[GGRP_MULTI] are cleared. */
        uint64_t ggrp_unmap            : 1;  /**< [ 30: 30](RO/H) PF_FUNC mapping not found error. Set when SSO_AF_ERR0[GGRP_UNMAP] is set and held
                                                                 until SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI], SSO_AF_ERR0[GGRP_UNMAP], and
                                                                 SSO_AF_ERR0[GGRP_MULTI] are cleared. */
        uint64_t ggrp_multi            : 1;  /**< [ 31: 31](RO/H) PF_FUNC map had double-hit error. Set when SSO_AF_ERR0[GGRP_MULTI] is set
                                                                 and held until SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI],
                                                                 SSO_AF_ERR0[GGRP_UNMAP], and SSO_AF_ERR0[GGRP_MULTI] are cleared. */
        uint64_t wqp0_src              : 13; /**< [ 44: 32](RO/H) Illegal WQP0 error source. This field is updated when
                                                                 SSO_AF_ERR0[ADDWQ_DROPPED_WQP0] error occurs, and is held until
                                                                 SSO_AF_ERR0[ADDWQ_DROPPED_WQP0] is cleared.
                                                                 \<11\> = unused
                                                                 \<10\> = unused
                                                                 \<9\> = unused
                                                                 \<8\> = PSM
                                                                 \<7\> = TIM.
                                                                 \<6\> = NIXTX0.
                                                                 \<5\> = DPI0.
                                                                 \<4\> = unused
                                                                 \<3\> = ADDWQ.
                                                                 \<2\> = unused
                                                                 \<1\> = NIXRX0.
                                                                 \<0\> = unused */
        uint64_t reserved_45_63        : 19;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_unmap_info_s cn10; */
    struct cavm_sso_af_unmap_info_cn10ka_p1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_44_63        : 20;
        uint64_t wqp0_src              : 12; /**< [ 43: 32](RO/H) Illegal WQP0 error source. This field is updated when
                                                                 SSO_AF_ERR0[ADDWQ_DROPPED_WQP0] error occurs, and is held until
                                                                 SSO_AF_ERR0[ADDWQ_DROPPED_WQP0] is cleared.
                                                                 \<11\> = unused
                                                                 \<10\> = unused
                                                                 \<9\> = unused
                                                                 \<8\> = PSM
                                                                 \<7\> = TIM.
                                                                 \<6\> = NIXTX0.
                                                                 \<5\> = DPI0.
                                                                 \<4\> = unused
                                                                 \<3\> = ADDWQ.
                                                                 \<2\> = unused
                                                                 \<1\> = NIXRX0.
                                                                 \<0\> = unused */
        uint64_t ggrp_multi            : 1;  /**< [ 31: 31](RO/H) PF_FUNC map had double-hit error. Set when SSO_AF_ERR0[GGRP_MULTI] is set
                                                                 and held until SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI],
                                                                 SSO_AF_ERR0[GGRP_UNMAP], and SSO_AF_ERR0[GGRP_MULTI] are cleared. */
        uint64_t ggrp_unmap            : 1;  /**< [ 30: 30](RO/H) PF_FUNC mapping not found error. Set when SSO_AF_ERR0[GGRP_UNMAP] is set and held
                                                                 until SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI], SSO_AF_ERR0[GGRP_UNMAP], and
                                                                 SSO_AF_ERR0[GGRP_MULTI] are cleared. */
        uint64_t aw_multi              : 1;  /**< [ 29: 29](RO/H) PF_FUNC map had double-hit error. Set when SSO_AF_ERR0[AW_MULTI] is set
                                                                 and held until SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI],
                                                                 SSO_AF_ERR0[GGRP_UNMAP], and SSO_AF_ERR0[GGRP_MULTI] are cleared. */
        uint64_t aw_unmap              : 1;  /**< [ 28: 28](RO/H) PF_FUNC mapping not found error. Set when SSO_AF_ERR0[AW_UNMAP] is set and held
                                                                 until SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI], SSO_AF_ERR0[GGRP_UNMAP], and
                                                                 SSO_AF_ERR0[GGRP_MULTI] are cleared. */
        uint64_t reserved_26_27        : 2;
        uint64_t ggrp                  : 10; /**< [ 25: 16](RO/H) This field indicates the failing GGRP. This field is updated when
                                                                 any of he following errors occur: SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI],
                                                                 SSO_AF_ERR0[GGRP_UNMAP] or SSO_AF_ERR0[GGRP_MULTI] and is held until all four
                                                                 errors are cleared in
                                                                 SSO_AF_ERR0. */
        uint64_t pf_func               : 16; /**< [ 15:  0](RO/H) Failing PF_FUNC. This field is updated when
                                                                 any of he following errors occur: SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI],
                                                                 SSO_AF_ERR0[GGRP_UNMAP] or SSO_AF_ERR0[GGRP_MULTI] and is held until all four
                                                                 errors are cleared in
                                                                 SSO_AF_ERR0. */
#else /* Word 0 - Little Endian */
        uint64_t pf_func               : 16; /**< [ 15:  0](RO/H) Failing PF_FUNC. This field is updated when
                                                                 any of he following errors occur: SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI],
                                                                 SSO_AF_ERR0[GGRP_UNMAP] or SSO_AF_ERR0[GGRP_MULTI] and is held until all four
                                                                 errors are cleared in
                                                                 SSO_AF_ERR0. */
        uint64_t ggrp                  : 10; /**< [ 25: 16](RO/H) This field indicates the failing GGRP. This field is updated when
                                                                 any of he following errors occur: SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI],
                                                                 SSO_AF_ERR0[GGRP_UNMAP] or SSO_AF_ERR0[GGRP_MULTI] and is held until all four
                                                                 errors are cleared in
                                                                 SSO_AF_ERR0. */
        uint64_t reserved_26_27        : 2;
        uint64_t aw_unmap              : 1;  /**< [ 28: 28](RO/H) PF_FUNC mapping not found error. Set when SSO_AF_ERR0[AW_UNMAP] is set and held
                                                                 until SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI], SSO_AF_ERR0[GGRP_UNMAP], and
                                                                 SSO_AF_ERR0[GGRP_MULTI] are cleared. */
        uint64_t aw_multi              : 1;  /**< [ 29: 29](RO/H) PF_FUNC map had double-hit error. Set when SSO_AF_ERR0[AW_MULTI] is set
                                                                 and held until SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI],
                                                                 SSO_AF_ERR0[GGRP_UNMAP], and SSO_AF_ERR0[GGRP_MULTI] are cleared. */
        uint64_t ggrp_unmap            : 1;  /**< [ 30: 30](RO/H) PF_FUNC mapping not found error. Set when SSO_AF_ERR0[GGRP_UNMAP] is set and held
                                                                 until SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI], SSO_AF_ERR0[GGRP_UNMAP], and
                                                                 SSO_AF_ERR0[GGRP_MULTI] are cleared. */
        uint64_t ggrp_multi            : 1;  /**< [ 31: 31](RO/H) PF_FUNC map had double-hit error. Set when SSO_AF_ERR0[GGRP_MULTI] is set
                                                                 and held until SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI],
                                                                 SSO_AF_ERR0[GGRP_UNMAP], and SSO_AF_ERR0[GGRP_MULTI] are cleared. */
        uint64_t wqp0_src              : 12; /**< [ 43: 32](RO/H) Illegal WQP0 error source. This field is updated when
                                                                 SSO_AF_ERR0[ADDWQ_DROPPED_WQP0] error occurs, and is held until
                                                                 SSO_AF_ERR0[ADDWQ_DROPPED_WQP0] is cleared.
                                                                 \<11\> = unused
                                                                 \<10\> = unused
                                                                 \<9\> = unused
                                                                 \<8\> = PSM
                                                                 \<7\> = TIM.
                                                                 \<6\> = NIXTX0.
                                                                 \<5\> = DPI0.
                                                                 \<4\> = unused
                                                                 \<3\> = ADDWQ.
                                                                 \<2\> = unused
                                                                 \<1\> = NIXRX0.
                                                                 \<0\> = unused */
        uint64_t reserved_44_63        : 20;
#endif /* Word 0 - End */
    } cn10ka_p1;
    struct cavm_sso_af_unmap_info_cn10ka_p2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_45_63        : 19;
        uint64_t wqp0_src              : 13; /**< [ 44: 32](RO/H) Illegal WQP0 error source (LWA may not be present). This field is updated when
                                                                 SSO_AF_ERR0[ADDWQ_DROPPED_WQP0] error occurs, and is held until
                                                                 SSO_AF_ERR0[ADDWQ_DROPPED_WQP0] is cleared.
                                                                 \<12\> = ML1.
                                                                 \<11\> = NIXTX1.
                                                                 \<10\> = ML0
                                                                 \<9\> = CPT1
                                                                 \<8\> = NIXRX1
                                                                 \<7\> = PSM
                                                                 \<6\> = TIM.
                                                                 \<5\> = NIXTX0.
                                                                 \<4\> = DPI0.
                                                                 \<3\> = ADDWQ.
                                                                 \<2\> = CPT0
                                                                 \<1\> = NIXRX0.
                                                                 \<0\> = unused */
        uint64_t ggrp_multi            : 1;  /**< [ 31: 31](RO/H) PF_FUNC map had double-hit error. Set when SSO_AF_ERR0[GGRP_MULTI] is set
                                                                 and held until SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI],
                                                                 SSO_AF_ERR0[GGRP_UNMAP], and SSO_AF_ERR0[GGRP_MULTI] are cleared. */
        uint64_t ggrp_unmap            : 1;  /**< [ 30: 30](RO/H) PF_FUNC mapping not found error. Set when SSO_AF_ERR0[GGRP_UNMAP] is set and held
                                                                 until SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI], SSO_AF_ERR0[GGRP_UNMAP], and
                                                                 SSO_AF_ERR0[GGRP_MULTI] are cleared. */
        uint64_t aw_multi              : 1;  /**< [ 29: 29](RO/H) PF_FUNC map had double-hit error. Set when SSO_AF_ERR0[AW_MULTI] is set
                                                                 and held until SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI],
                                                                 SSO_AF_ERR0[GGRP_UNMAP], and SSO_AF_ERR0[GGRP_MULTI] are cleared. */
        uint64_t aw_unmap              : 1;  /**< [ 28: 28](RO/H) PF_FUNC mapping not found error. Set when SSO_AF_ERR0[AW_UNMAP] is set and held
                                                                 until SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI], SSO_AF_ERR0[GGRP_UNMAP], and
                                                                 SSO_AF_ERR0[GGRP_MULTI] are cleared. */
        uint64_t reserved_26_27        : 2;
        uint64_t ggrp                  : 10; /**< [ 25: 16](RO/H) This field indicates the failing GGRP. This field is updated when
                                                                 any of he following errors occur: SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI],
                                                                 SSO_AF_ERR0[GGRP_UNMAP] or SSO_AF_ERR0[GGRP_MULTI] and is held until all four
                                                                 errors are cleared in
                                                                 SSO_AF_ERR0. */
        uint64_t pf_func               : 16; /**< [ 15:  0](RO/H) Failing PF_FUNC. This field is updated when
                                                                 any of he following errors occur: SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI],
                                                                 SSO_AF_ERR0[GGRP_UNMAP] or SSO_AF_ERR0[GGRP_MULTI] and is held until all four
                                                                 errors are cleared in
                                                                 SSO_AF_ERR0. */
#else /* Word 0 - Little Endian */
        uint64_t pf_func               : 16; /**< [ 15:  0](RO/H) Failing PF_FUNC. This field is updated when
                                                                 any of he following errors occur: SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI],
                                                                 SSO_AF_ERR0[GGRP_UNMAP] or SSO_AF_ERR0[GGRP_MULTI] and is held until all four
                                                                 errors are cleared in
                                                                 SSO_AF_ERR0. */
        uint64_t ggrp                  : 10; /**< [ 25: 16](RO/H) This field indicates the failing GGRP. This field is updated when
                                                                 any of he following errors occur: SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI],
                                                                 SSO_AF_ERR0[GGRP_UNMAP] or SSO_AF_ERR0[GGRP_MULTI] and is held until all four
                                                                 errors are cleared in
                                                                 SSO_AF_ERR0. */
        uint64_t reserved_26_27        : 2;
        uint64_t aw_unmap              : 1;  /**< [ 28: 28](RO/H) PF_FUNC mapping not found error. Set when SSO_AF_ERR0[AW_UNMAP] is set and held
                                                                 until SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI], SSO_AF_ERR0[GGRP_UNMAP], and
                                                                 SSO_AF_ERR0[GGRP_MULTI] are cleared. */
        uint64_t aw_multi              : 1;  /**< [ 29: 29](RO/H) PF_FUNC map had double-hit error. Set when SSO_AF_ERR0[AW_MULTI] is set
                                                                 and held until SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI],
                                                                 SSO_AF_ERR0[GGRP_UNMAP], and SSO_AF_ERR0[GGRP_MULTI] are cleared. */
        uint64_t ggrp_unmap            : 1;  /**< [ 30: 30](RO/H) PF_FUNC mapping not found error. Set when SSO_AF_ERR0[GGRP_UNMAP] is set and held
                                                                 until SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI], SSO_AF_ERR0[GGRP_UNMAP], and
                                                                 SSO_AF_ERR0[GGRP_MULTI] are cleared. */
        uint64_t ggrp_multi            : 1;  /**< [ 31: 31](RO/H) PF_FUNC map had double-hit error. Set when SSO_AF_ERR0[GGRP_MULTI] is set
                                                                 and held until SSO_AF_ERR0[AW_UNMAP], SSO_AF_ERR0[AW_MULTI],
                                                                 SSO_AF_ERR0[GGRP_UNMAP], and SSO_AF_ERR0[GGRP_MULTI] are cleared. */
        uint64_t wqp0_src              : 13; /**< [ 44: 32](RO/H) Illegal WQP0 error source (LWA may not be present). This field is updated when
                                                                 SSO_AF_ERR0[ADDWQ_DROPPED_WQP0] error occurs, and is held until
                                                                 SSO_AF_ERR0[ADDWQ_DROPPED_WQP0] is cleared.
                                                                 \<12\> = ML1.
                                                                 \<11\> = NIXTX1.
                                                                 \<10\> = ML0
                                                                 \<9\> = CPT1
                                                                 \<8\> = NIXRX1
                                                                 \<7\> = PSM
                                                                 \<6\> = TIM.
                                                                 \<5\> = NIXTX0.
                                                                 \<4\> = DPI0.
                                                                 \<3\> = ADDWQ.
                                                                 \<2\> = CPT0
                                                                 \<1\> = NIXRX0.
                                                                 \<0\> = unused */
        uint64_t reserved_45_63        : 19;
#endif /* Word 0 - End */
    } cn10ka_p2;
    /* struct cavm_sso_af_unmap_info_cn10ka_p2 cn10kb; */
    /* struct cavm_sso_af_unmap_info_cn10ka_p1 cnf10ka; */
    /* struct cavm_sso_af_unmap_info_cn10ka_p1 cnf10kb; */
};
typedef union cavm_sso_af_unmap_info cavm_sso_af_unmap_info_t;

#define CAVM_SSO_AF_UNMAP_INFO CAVM_SSO_AF_UNMAP_INFO_FUNC()
static inline uint64_t CAVM_SSO_AF_UNMAP_INFO_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_UNMAP_INFO_FUNC(void)
{
    return 0x8400700012f0ll;
}

#define typedef_CAVM_SSO_AF_UNMAP_INFO cavm_sso_af_unmap_info_t
#define bustype_CAVM_SSO_AF_UNMAP_INFO CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_UNMAP_INFO "SSO_AF_UNMAP_INFO"
#define device_bar_CAVM_SSO_AF_UNMAP_INFO 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_UNMAP_INFO 0
#define arguments_CAVM_SSO_AF_UNMAP_INFO -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_unmap_info2
 *
 * SSO AF Unmapped Error2 Information Register
 * When any SSO_AF_ERR2[WS_GRP_UNMAP] or SSO_AF_ERR2[WS_GRP_MULTI] error occurs, this
 * register is latched with information from the original request. This register
 * latches the first error and will not be updated again until all of the
 * corresponding SSO_AF_ERR2 bits are cleared.
 */
union cavm_sso_af_unmap_info2
{
    uint64_t u;
    struct cavm_sso_af_unmap_info2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_35_63        : 29;
        uint64_t cam_src               : 3;  /**< [ 34: 32](RO/H) Failing WS GCAM error path. This field is updated when one of he following errors
                                                                 occur: SSO_AF_ERR2[WS_GRP_UNMAP] or SSO_AF_ERR2[WS_GRP_MULTI] and is held until both
                                                                 errors are cleared from SSO_AF_ERR2. When multiple errors occur at the same
                                                                 time, the priority to latch error information is as follows: WS to PP, NCBO1 to WS,
                                                                 NCBO0 to WS.
                                                                 \<0\> = GGRP field in a WorkSlot Op failed
                                                                 \<1\> = One of the GGRP fields in a SSOW_LF_GWS_GRPMSK_CHG store failed. */
        uint64_t reserved_30_31        : 2;
        uint64_t ws_grp_multi          : 1;  /**< [ 29: 29](RO/H) PF_FUNC map had double-hit error. Set when SSO_AF_ERR2[WS_GRP_MULTI] is set
                                                                 and held until SSO_AF_ERR2[WS_GRP_MULTI] and SSO_AF_ERR2[WS_GRP_UNMAP] are cleared. */
        uint64_t ws_grp_unmap          : 1;  /**< [ 28: 28](RO/H) PF_FUNC mapping not found error. Set when SSO_AF_ERR2[WS_GRP_UNMAP] is set and held
                                                                 until SSO_AF_ERR2[WS_GRP_UNMAP] and SSO_AF_ERR2[WS_GRP_MULTI] are cleared */
        uint64_t reserved_26_27        : 2;
        uint64_t grp                   : 10; /**< [ 25: 16](RO/H) This field indicates the failing GGRP or HWGRP. See [CAM_SRC] to identify the
                                                                 type. This field is updated when  any of he following errors occur:
                                                                 SSO_AF_ERR2[WS_GRP_UNMAP] or SSO_AF_ERR2[WS_GRP_MULTI] and is held until all both
                                                                 errors are cleared in SSO_AF_ERR2. */
        uint64_t pf_func               : 16; /**< [ 15:  0](RO/H) Failing PF_FUNC. This field is updated when any of he following errors occur:
                                                                 SSO_AF_ERR2[WS_GRP_UNMAP] or SSO_AF_ERR2[WS_GRP_MULTI] and is held until both errors
                                                                 are cleared from SSO_AF_ERR2. */
#else /* Word 0 - Little Endian */
        uint64_t pf_func               : 16; /**< [ 15:  0](RO/H) Failing PF_FUNC. This field is updated when any of he following errors occur:
                                                                 SSO_AF_ERR2[WS_GRP_UNMAP] or SSO_AF_ERR2[WS_GRP_MULTI] and is held until both errors
                                                                 are cleared from SSO_AF_ERR2. */
        uint64_t grp                   : 10; /**< [ 25: 16](RO/H) This field indicates the failing GGRP or HWGRP. See [CAM_SRC] to identify the
                                                                 type. This field is updated when  any of he following errors occur:
                                                                 SSO_AF_ERR2[WS_GRP_UNMAP] or SSO_AF_ERR2[WS_GRP_MULTI] and is held until all both
                                                                 errors are cleared in SSO_AF_ERR2. */
        uint64_t reserved_26_27        : 2;
        uint64_t ws_grp_unmap          : 1;  /**< [ 28: 28](RO/H) PF_FUNC mapping not found error. Set when SSO_AF_ERR2[WS_GRP_UNMAP] is set and held
                                                                 until SSO_AF_ERR2[WS_GRP_UNMAP] and SSO_AF_ERR2[WS_GRP_MULTI] are cleared */
        uint64_t ws_grp_multi          : 1;  /**< [ 29: 29](RO/H) PF_FUNC map had double-hit error. Set when SSO_AF_ERR2[WS_GRP_MULTI] is set
                                                                 and held until SSO_AF_ERR2[WS_GRP_MULTI] and SSO_AF_ERR2[WS_GRP_UNMAP] are cleared. */
        uint64_t reserved_30_31        : 2;
        uint64_t cam_src               : 3;  /**< [ 34: 32](RO/H) Failing WS GCAM error path. This field is updated when one of he following errors
                                                                 occur: SSO_AF_ERR2[WS_GRP_UNMAP] or SSO_AF_ERR2[WS_GRP_MULTI] and is held until both
                                                                 errors are cleared from SSO_AF_ERR2. When multiple errors occur at the same
                                                                 time, the priority to latch error information is as follows: WS to PP, NCBO1 to WS,
                                                                 NCBO0 to WS.
                                                                 \<0\> = GGRP field in a WorkSlot Op failed
                                                                 \<1\> = One of the GGRP fields in a SSOW_LF_GWS_GRPMSK_CHG store failed. */
        uint64_t reserved_35_63        : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_unmap_info2_s cn; */
};
typedef union cavm_sso_af_unmap_info2 cavm_sso_af_unmap_info2_t;

#define CAVM_SSO_AF_UNMAP_INFO2 CAVM_SSO_AF_UNMAP_INFO2_FUNC()
static inline uint64_t CAVM_SSO_AF_UNMAP_INFO2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_UNMAP_INFO2_FUNC(void)
{
    return 0x840070001300ll;
}

#define typedef_CAVM_SSO_AF_UNMAP_INFO2 cavm_sso_af_unmap_info2_t
#define bustype_CAVM_SSO_AF_UNMAP_INFO2 CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_UNMAP_INFO2 "SSO_AF_UNMAP_INFO2"
#define device_bar_CAVM_SSO_AF_UNMAP_INFO2 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_UNMAP_INFO2 0
#define arguments_CAVM_SSO_AF_UNMAP_INFO2 -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_unmap_info3
 *
 * SSO AF Unmapped Error3 Information Register
 * When any SSO_AF_ERR2[WS_UNMAP] or SSO_AF_ERR2[WS_MULTI] error occurs, this
 * register is latched with information from the original request. This register
 * latches the first error and will not be updated again until all of the
 * corresponding SSO_AF_ERR2 bits are cleared.
 */
union cavm_sso_af_unmap_info3
{
    uint64_t u;
    struct cavm_sso_af_unmap_info3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_35_63        : 29;
        uint64_t cam_src               : 3;  /**< [ 34: 32](RO/H) Failing WCAM error path. This field is updated when one of the following errors
                                                                 occur: SSO_AF_ERR2[WS_UNMAP] or SSO_AF_ERR2[WS_MULTI] and is held until both
                                                                 errors are cleared from SSO_AF_ERR2. */
        uint64_t reserved_30_31        : 2;
        uint64_t ws_multi              : 1;  /**< [ 29: 29](RO/H) PF_FUNC map had double-hit error. Set when SSO_AF_ERR2[WS_MULTI] is set
                                                                 and held until SSO_AF_ERR2[WS_MULTI] and SSO_AF_ERR2[WS_UNMAP] are cleared. */
        uint64_t ws_unmap              : 1;  /**< [ 28: 28](RO/H) PF_FUNC mapping not found error. Set when SSO_AF_ERR2[WS_UNMAP] is set and held
                                                                 until SSO_AF_ERR2[WS_UNMAP] and SSO_AF_ERR2[WS_MULTI] are cleared. */
        uint64_t reserved_22_27        : 6;
        uint64_t gws                   : 6;  /**< [ 21: 16](RO/H) This field indicates the failing GWS. This field is updated when any
                                                                 of the following errors occur: SSO_AF_ERR2[WS_UNMAP] or SSO_AF_ERR2[WS_MULTI]
                                                                 and is held until all both errors are cleared in SSO_AF_ERR2. */
        uint64_t pf_func               : 16; /**< [ 15:  0](RO/H) Failing PF_FUNC. This field is updated when any of the following errors occur:
                                                                 SSO_AF_ERR2[WS_UNMAP] or SSO_AF_ERR2[WS_MULTI] and is held until both errors
                                                                 are cleared from SSO_AF_ERR2. */
#else /* Word 0 - Little Endian */
        uint64_t pf_func               : 16; /**< [ 15:  0](RO/H) Failing PF_FUNC. This field is updated when any of the following errors occur:
                                                                 SSO_AF_ERR2[WS_UNMAP] or SSO_AF_ERR2[WS_MULTI] and is held until both errors
                                                                 are cleared from SSO_AF_ERR2. */
        uint64_t gws                   : 6;  /**< [ 21: 16](RO/H) This field indicates the failing GWS. This field is updated when any
                                                                 of the following errors occur: SSO_AF_ERR2[WS_UNMAP] or SSO_AF_ERR2[WS_MULTI]
                                                                 and is held until all both errors are cleared in SSO_AF_ERR2. */
        uint64_t reserved_22_27        : 6;
        uint64_t ws_unmap              : 1;  /**< [ 28: 28](RO/H) PF_FUNC mapping not found error. Set when SSO_AF_ERR2[WS_UNMAP] is set and held
                                                                 until SSO_AF_ERR2[WS_UNMAP] and SSO_AF_ERR2[WS_MULTI] are cleared. */
        uint64_t ws_multi              : 1;  /**< [ 29: 29](RO/H) PF_FUNC map had double-hit error. Set when SSO_AF_ERR2[WS_MULTI] is set
                                                                 and held until SSO_AF_ERR2[WS_MULTI] and SSO_AF_ERR2[WS_UNMAP] are cleared. */
        uint64_t reserved_30_31        : 2;
        uint64_t cam_src               : 3;  /**< [ 34: 32](RO/H) Failing WCAM error path. This field is updated when one of the following errors
                                                                 occur: SSO_AF_ERR2[WS_UNMAP] or SSO_AF_ERR2[WS_MULTI] and is held until both
                                                                 errors are cleared from SSO_AF_ERR2. */
        uint64_t reserved_35_63        : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_unmap_info3_s cn10; */
    /* struct cavm_sso_af_unmap_info3_s cn10ka; */
    struct cavm_sso_af_unmap_info3_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_35_63        : 29;
        uint64_t cam_src               : 3;  /**< [ 34: 32](RO/H) Failing WCAM error path. This field is updated when one of the following errors
                                                                 occur: SSO_AF_ERR2[WS_UNMAP] or SSO_AF_ERR2[WS_MULTI] and is held until both
                                                                 errors are cleared from SSO_AF_ERR2. */
        uint64_t reserved_30_31        : 2;
        uint64_t ws_multi              : 1;  /**< [ 29: 29](RO/H) PF_FUNC map had double-hit error. Set when SSO_AF_ERR2[WS_MULTI] is set
                                                                 and held until SSO_AF_ERR2[WS_MULTI] and SSO_AF_ERR2[WS_UNMAP] are cleared. */
        uint64_t ws_unmap              : 1;  /**< [ 28: 28](RO/H) PF_FUNC mapping not found error. Set when SSO_AF_ERR2[WS_UNMAP] is set and held
                                                                 until SSO_AF_ERR2[WS_UNMAP] and SSO_AF_ERR2[WS_MULTI] are cleared. */
        uint64_t reserved_21_27        : 7;
        uint64_t gws                   : 5;  /**< [ 20: 16](RO/H) This field indicates the failing GWS. This field is updated when any
                                                                 of the following errors occur: SSO_AF_ERR2[WS_UNMAP] or SSO_AF_ERR2[WS_MULTI]
                                                                 and is held until all both errors are cleared in SSO_AF_ERR2. */
        uint64_t pf_func               : 16; /**< [ 15:  0](RO/H) Failing PF_FUNC. This field is updated when any of the following errors occur:
                                                                 SSO_AF_ERR2[WS_UNMAP] or SSO_AF_ERR2[WS_MULTI] and is held until both errors
                                                                 are cleared from SSO_AF_ERR2. */
#else /* Word 0 - Little Endian */
        uint64_t pf_func               : 16; /**< [ 15:  0](RO/H) Failing PF_FUNC. This field is updated when any of the following errors occur:
                                                                 SSO_AF_ERR2[WS_UNMAP] or SSO_AF_ERR2[WS_MULTI] and is held until both errors
                                                                 are cleared from SSO_AF_ERR2. */
        uint64_t gws                   : 5;  /**< [ 20: 16](RO/H) This field indicates the failing GWS. This field is updated when any
                                                                 of the following errors occur: SSO_AF_ERR2[WS_UNMAP] or SSO_AF_ERR2[WS_MULTI]
                                                                 and is held until all both errors are cleared in SSO_AF_ERR2. */
        uint64_t reserved_21_27        : 7;
        uint64_t ws_unmap              : 1;  /**< [ 28: 28](RO/H) PF_FUNC mapping not found error. Set when SSO_AF_ERR2[WS_UNMAP] is set and held
                                                                 until SSO_AF_ERR2[WS_UNMAP] and SSO_AF_ERR2[WS_MULTI] are cleared. */
        uint64_t ws_multi              : 1;  /**< [ 29: 29](RO/H) PF_FUNC map had double-hit error. Set when SSO_AF_ERR2[WS_MULTI] is set
                                                                 and held until SSO_AF_ERR2[WS_MULTI] and SSO_AF_ERR2[WS_UNMAP] are cleared. */
        uint64_t reserved_30_31        : 2;
        uint64_t cam_src               : 3;  /**< [ 34: 32](RO/H) Failing WCAM error path. This field is updated when one of the following errors
                                                                 occur: SSO_AF_ERR2[WS_UNMAP] or SSO_AF_ERR2[WS_MULTI] and is held until both
                                                                 errors are cleared from SSO_AF_ERR2. */
        uint64_t reserved_35_63        : 29;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_unmap_info3_s cnf10ka; */
    /* struct cavm_sso_af_unmap_info3_s cnf10kb; */
};
typedef union cavm_sso_af_unmap_info3 cavm_sso_af_unmap_info3_t;

#define CAVM_SSO_AF_UNMAP_INFO3 CAVM_SSO_AF_UNMAP_INFO3_FUNC()
static inline uint64_t CAVM_SSO_AF_UNMAP_INFO3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_UNMAP_INFO3_FUNC(void)
{
    return 0x840070001310ll;
}

#define typedef_CAVM_SSO_AF_UNMAP_INFO3 cavm_sso_af_unmap_info3_t
#define bustype_CAVM_SSO_AF_UNMAP_INFO3 CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_UNMAP_INFO3 "SSO_AF_UNMAP_INFO3"
#define device_bar_CAVM_SSO_AF_UNMAP_INFO3 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_UNMAP_INFO3 0
#define arguments_CAVM_SSO_AF_UNMAP_INFO3 -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_wq_int_pc
 *
 * SSO AF Work-Queue Interrupt Periodic Counter Register
 * Contains the threshold value for the work-executable interrupt periodic counter and also a
 * read-only copy of the periodic counter. For more information on this register, refer to
 * Interrupts.
 */
union cavm_sso_af_wq_int_pc
{
    uint64_t u;
    struct cavm_sso_af_wq_int_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t pc                    : 28; /**< [ 59: 32](RO/H) Work-executable interrupt periodic counter. */
        uint64_t reserved_28_31        : 4;
        uint64_t pc_thr                : 20; /**< [ 27:  8](R/W) Work-executable interrupt periodic counter threshold. Zero disables the counter.
                                                                 If nonzero, the value must be \>= 3. */
        uint64_t reserved_0_7          : 8;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_7          : 8;
        uint64_t pc_thr                : 20; /**< [ 27:  8](R/W) Work-executable interrupt periodic counter threshold. Zero disables the counter.
                                                                 If nonzero, the value must be \>= 3. */
        uint64_t reserved_28_31        : 4;
        uint64_t pc                    : 28; /**< [ 59: 32](RO/H) Work-executable interrupt periodic counter. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_wq_int_pc_s cn; */
};
typedef union cavm_sso_af_wq_int_pc cavm_sso_af_wq_int_pc_t;

#define CAVM_SSO_AF_WQ_INT_PC CAVM_SSO_AF_WQ_INT_PC_FUNC()
static inline uint64_t CAVM_SSO_AF_WQ_INT_PC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_WQ_INT_PC_FUNC(void)
{
    return 0x840070001020ll;
}

#define typedef_CAVM_SSO_AF_WQ_INT_PC cavm_sso_af_wq_int_pc_t
#define bustype_CAVM_SSO_AF_WQ_INT_PC CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_WQ_INT_PC "SSO_AF_WQ_INT_PC"
#define device_bar_CAVM_SSO_AF_WQ_INT_PC 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_WQ_INT_PC 0
#define arguments_CAVM_SSO_AF_WQ_INT_PC -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_wqp0_digest#
 *
 * SSO AF WQP0 Error Summary Registers
 * One bit per HWGRP to indicate which groups have reported an SSO_AF_ERR0[ADDWQ_DROPPED_WQP0] error.
 */
union cavm_sso_af_wqp0_digestx
{
    uint64_t u;
    struct cavm_sso_af_wqp0_digestx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1C/H) One bit per HWGRP. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1C/H) One bit per HWGRP. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_wqp0_digestx_s cn; */
};
typedef union cavm_sso_af_wqp0_digestx cavm_sso_af_wqp0_digestx_t;

static inline uint64_t CAVM_SSO_AF_WQP0_DIGESTX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_WQP0_DIGESTX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=3))
        return 0x840070900a00ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x840070900a00ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x840070900a00ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x840070900a00ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("SSO_AF_WQP0_DIGESTX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_WQP0_DIGESTX(a) cavm_sso_af_wqp0_digestx_t
#define bustype_CAVM_SSO_AF_WQP0_DIGESTX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_WQP0_DIGESTX(a) "SSO_AF_WQP0_DIGESTX"
#define device_bar_CAVM_SSO_AF_WQP0_DIGESTX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_WQP0_DIGESTX(a) (a)
#define arguments_CAVM_SSO_AF_WQP0_DIGESTX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_wqp0_digest#_w1s
 *
 * SSO AF WQP0 Error Summary Registers
 * This register reads or sets bits.
 */
union cavm_sso_af_wqp0_digestx_w1s
{
    uint64_t u;
    struct cavm_sso_af_wqp0_digestx_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_WQP0_DIGEST(0..3)[HWGRP]. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_WQP0_DIGEST(0..3)[HWGRP]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_wqp0_digestx_w1s_s cn10; */
    /* struct cavm_sso_af_wqp0_digestx_w1s_s cn10ka; */
    struct cavm_sso_af_wqp0_digestx_w1s_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_WQP0_DIGEST(0..1)[HWGRP]. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_WQP0_DIGEST(0..1)[HWGRP]. */
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_wqp0_digestx_w1s_s cnf10ka; */
    /* struct cavm_sso_af_wqp0_digestx_w1s_s cnf10kb; */
};
typedef union cavm_sso_af_wqp0_digestx_w1s cavm_sso_af_wqp0_digestx_w1s_t;

static inline uint64_t CAVM_SSO_AF_WQP0_DIGESTX_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_WQP0_DIGESTX_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=3))
        return 0x840070900b00ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x840070900b00ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x840070900b00ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x840070900b00ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("SSO_AF_WQP0_DIGESTX_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_WQP0_DIGESTX_W1S(a) cavm_sso_af_wqp0_digestx_w1s_t
#define bustype_CAVM_SSO_AF_WQP0_DIGESTX_W1S(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_WQP0_DIGESTX_W1S(a) "SSO_AF_WQP0_DIGESTX_W1S"
#define device_bar_CAVM_SSO_AF_WQP0_DIGESTX_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_WQP0_DIGESTX_W1S(a) (a)
#define arguments_CAVM_SSO_AF_WQP0_DIGESTX_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_ws_cfg
 *
 * SSO AF Configuration Register
 * This register contains various SSO workslot configuration bits.
 */
union cavm_sso_af_ws_cfg
{
    uint64_t u;
    struct cavm_sso_af_ws_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_56_63        : 8;
        uint64_t ocla_bp               : 8;  /**< [ 55: 48](R/W) Reserved. */
        uint64_t reserved_31_47        : 17;
        uint64_t bp_interval           : 3;  /**< [ 30: 28](R/W) Coprocessor-clock cycles between each 16 cycle interval of HWS backpressure.
                                                                 For diagnostic use only.
                                                                 0x0 = Disable this backpressure mechanism.
                                                                 0x1 =   64 cycles.
                                                                 0x2 =  128 cycles.
                                                                 0x3 =  256 cycles.
                                                                 0x4 =  512 cycles.
                                                                 0x5 = 1024 cycles.
                                                                 0x6 = 2048 cycles.
                                                                 0x7 = 4096 cycles. */
        uint64_t reserved_20_27        : 8;
        uint64_t inv_rsp_cnt           : 8;  /**< [ 19: 12](RO/H) Number of INVAL responses received by GW Caches after [SAI_FLUSH]. When [SAI_FLUSH]
                                                                 gets set the counter will reset and start counting the number of INVAL
                                                                 responses. Counter maximum is 128. */
        uint64_t reserved_11           : 1;
        uint64_t force_gwc_one_slot    : 1;  /**< [ 10: 10](R/W) Force single slot per GWC. Must always be set to the
                                                                 same value as APR_GWC_AF_CORE()_CFG[FORCE_ONE_SLOT]. For diagnostic use only. */
        uint64_t dq_opt_ena            : 1;  /**< [  9:  9](R/W) Enable early DQ push optimization. */
        uint64_t force_ncbi_clk_en     : 1;  /**< [  8:  8](R/W) Force NCBI conditional clocks on. For diagnostic use only. */
        uint64_t sai_flush             : 1;  /**< [  7:  7](R/W1) When written with one, send a pulse to invalidate the GW cache
                                                                 inside the cores.  Reads as zero. For diagnostic use only. */
        uint64_t aw_clk_dis            : 1;  /**< [  6:  6](R/W) Reserved. */
        uint64_t gw_clk_dis            : 1;  /**< [  5:  5](R/W) Reserved. */
        uint64_t disable_prefetch      : 1;  /**< [  4:  4](R/W) Disable GET_WORK prefetching to the GWCs. */
        uint64_t issue_step_en         : 1;  /**< [  3:  3](R/W) Enable single-stepping issue unit, 1 command at a time. For diagnostic use only. */
        uint64_t ncbo_step_en          : 1;  /**< [  2:  2](R/W) Enable single-stepping commands from NCBO, once per 32 clocks. For diagnostic use only. */
        uint64_t soc_ccam_dis          : 1;  /**< [  1:  1](R/W) Disable power saving SSC conditional CAM. */
        uint64_t sso_cclk_dis          : 1;  /**< [  0:  0](R/W) Disable power saving SSO conditional clocking. */
#else /* Word 0 - Little Endian */
        uint64_t sso_cclk_dis          : 1;  /**< [  0:  0](R/W) Disable power saving SSO conditional clocking. */
        uint64_t soc_ccam_dis          : 1;  /**< [  1:  1](R/W) Disable power saving SSC conditional CAM. */
        uint64_t ncbo_step_en          : 1;  /**< [  2:  2](R/W) Enable single-stepping commands from NCBO, once per 32 clocks. For diagnostic use only. */
        uint64_t issue_step_en         : 1;  /**< [  3:  3](R/W) Enable single-stepping issue unit, 1 command at a time. For diagnostic use only. */
        uint64_t disable_prefetch      : 1;  /**< [  4:  4](R/W) Disable GET_WORK prefetching to the GWCs. */
        uint64_t gw_clk_dis            : 1;  /**< [  5:  5](R/W) Reserved. */
        uint64_t aw_clk_dis            : 1;  /**< [  6:  6](R/W) Reserved. */
        uint64_t sai_flush             : 1;  /**< [  7:  7](R/W1) When written with one, send a pulse to invalidate the GW cache
                                                                 inside the cores.  Reads as zero. For diagnostic use only. */
        uint64_t force_ncbi_clk_en     : 1;  /**< [  8:  8](R/W) Force NCBI conditional clocks on. For diagnostic use only. */
        uint64_t dq_opt_ena            : 1;  /**< [  9:  9](R/W) Enable early DQ push optimization. */
        uint64_t force_gwc_one_slot    : 1;  /**< [ 10: 10](R/W) Force single slot per GWC. Must always be set to the
                                                                 same value as APR_GWC_AF_CORE()_CFG[FORCE_ONE_SLOT]. For diagnostic use only. */
        uint64_t reserved_11           : 1;
        uint64_t inv_rsp_cnt           : 8;  /**< [ 19: 12](RO/H) Number of INVAL responses received by GW Caches after [SAI_FLUSH]. When [SAI_FLUSH]
                                                                 gets set the counter will reset and start counting the number of INVAL
                                                                 responses. Counter maximum is 128. */
        uint64_t reserved_20_27        : 8;
        uint64_t bp_interval           : 3;  /**< [ 30: 28](R/W) Coprocessor-clock cycles between each 16 cycle interval of HWS backpressure.
                                                                 For diagnostic use only.
                                                                 0x0 = Disable this backpressure mechanism.
                                                                 0x1 =   64 cycles.
                                                                 0x2 =  128 cycles.
                                                                 0x3 =  256 cycles.
                                                                 0x4 =  512 cycles.
                                                                 0x5 = 1024 cycles.
                                                                 0x6 = 2048 cycles.
                                                                 0x7 = 4096 cycles. */
        uint64_t reserved_31_47        : 17;
        uint64_t ocla_bp               : 8;  /**< [ 55: 48](R/W) Reserved. */
        uint64_t reserved_56_63        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ws_cfg_s cn; */
};
typedef union cavm_sso_af_ws_cfg cavm_sso_af_ws_cfg_t;

#define CAVM_SSO_AF_WS_CFG CAVM_SSO_AF_WS_CFG_FUNC()
static inline uint64_t CAVM_SSO_AF_WS_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_WS_CFG_FUNC(void)
{
    return 0x840070001088ll;
}

#define typedef_CAVM_SSO_AF_WS_CFG cavm_sso_af_ws_cfg_t
#define bustype_CAVM_SSO_AF_WS_CFG CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_WS_CFG "SSO_AF_WS_CFG"
#define device_bar_CAVM_SSO_AF_WS_CFG 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_WS_CFG 0
#define arguments_CAVM_SSO_AF_WS_CFG -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_ws_gmulti_digest#
 *
 * SSO AF WS GRP MULTI Error Summary Registers
 * One bit per HWS to indicate which workslots have reported an SSO_AF_ERR2[WS_GRP_MULTI] error.
 */
union cavm_sso_af_ws_gmulti_digestx
{
    uint64_t u;
    struct cavm_sso_af_ws_gmulti_digestx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1C/H) One bit per HWS. */
#else /* Word 0 - Little Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1C/H) One bit per HWS. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ws_gmulti_digestx_s cn; */
};
typedef union cavm_sso_af_ws_gmulti_digestx cavm_sso_af_ws_gmulti_digestx_t;

static inline uint64_t CAVM_SSO_AF_WS_GMULTI_DIGESTX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_WS_GMULTI_DIGESTX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_AX) && (a<=1))
        return 0x840070902000ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a==0))
        return 0x840070902000ll + 8ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a==0))
        return 0x840070902000ll + 8ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x840070902000ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x840070902000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("SSO_AF_WS_GMULTI_DIGESTX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_WS_GMULTI_DIGESTX(a) cavm_sso_af_ws_gmulti_digestx_t
#define bustype_CAVM_SSO_AF_WS_GMULTI_DIGESTX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_WS_GMULTI_DIGESTX(a) "SSO_AF_WS_GMULTI_DIGESTX"
#define device_bar_CAVM_SSO_AF_WS_GMULTI_DIGESTX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_WS_GMULTI_DIGESTX(a) (a)
#define arguments_CAVM_SSO_AF_WS_GMULTI_DIGESTX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_ws_gmulti_digest#_w1s
 *
 * SSO AF WS GRP MULTI Error Summary Registers
 * This register reads or sets bits.
 */
union cavm_sso_af_ws_gmulti_digestx_w1s
{
    uint64_t u;
    struct cavm_sso_af_ws_gmulti_digestx_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_WS_GMULTI_DIGEST(0..1)[HWS]. */
#else /* Word 0 - Little Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_WS_GMULTI_DIGEST(0..1)[HWS]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ws_gmulti_digestx_w1s_s cn10; */
    /* struct cavm_sso_af_ws_gmulti_digestx_w1s_s cn10ka_p1; */
    struct cavm_sso_af_ws_gmulti_digestx_w1s_cn10ka_p2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_WS_GMULTI_DIGEST(0..0)[HWS]. */
#else /* Word 0 - Little Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_WS_GMULTI_DIGEST(0..0)[HWS]. */
#endif /* Word 0 - End */
    } cn10ka_p2;
    /* struct cavm_sso_af_ws_gmulti_digestx_w1s_cn10ka_p2 cn10kb; */
    /* struct cavm_sso_af_ws_gmulti_digestx_w1s_s cnf10ka; */
    /* struct cavm_sso_af_ws_gmulti_digestx_w1s_s cnf10kb; */
};
typedef union cavm_sso_af_ws_gmulti_digestx_w1s cavm_sso_af_ws_gmulti_digestx_w1s_t;

static inline uint64_t CAVM_SSO_AF_WS_GMULTI_DIGESTX_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_WS_GMULTI_DIGESTX_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_AX) && (a<=1))
        return 0x840070902100ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a==0))
        return 0x840070902100ll + 8ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a==0))
        return 0x840070902100ll + 8ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x840070902100ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x840070902100ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("SSO_AF_WS_GMULTI_DIGESTX_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_WS_GMULTI_DIGESTX_W1S(a) cavm_sso_af_ws_gmulti_digestx_w1s_t
#define bustype_CAVM_SSO_AF_WS_GMULTI_DIGESTX_W1S(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_WS_GMULTI_DIGESTX_W1S(a) "SSO_AF_WS_GMULTI_DIGESTX_W1S"
#define device_bar_CAVM_SSO_AF_WS_GMULTI_DIGESTX_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_WS_GMULTI_DIGESTX_W1S(a) (a)
#define arguments_CAVM_SSO_AF_WS_GMULTI_DIGESTX_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_ws_gunmap_digest#
 *
 * SSO AF WS GRP UNMAP Error Summary Registers
 * One bit per HWS to indicate which workslots have reported an SSO_AF_ERR2[WS_GRP_UNMAP] error.
 */
union cavm_sso_af_ws_gunmap_digestx
{
    uint64_t u;
    struct cavm_sso_af_ws_gunmap_digestx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1C/H) One bit per HWS. */
#else /* Word 0 - Little Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1C/H) One bit per HWS. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ws_gunmap_digestx_s cn; */
};
typedef union cavm_sso_af_ws_gunmap_digestx cavm_sso_af_ws_gunmap_digestx_t;

static inline uint64_t CAVM_SSO_AF_WS_GUNMAP_DIGESTX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_WS_GUNMAP_DIGESTX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_AX) && (a<=1))
        return 0x840070902200ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a==0))
        return 0x840070902200ll + 8ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a==0))
        return 0x840070902200ll + 8ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x840070902200ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x840070902200ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("SSO_AF_WS_GUNMAP_DIGESTX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_WS_GUNMAP_DIGESTX(a) cavm_sso_af_ws_gunmap_digestx_t
#define bustype_CAVM_SSO_AF_WS_GUNMAP_DIGESTX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_WS_GUNMAP_DIGESTX(a) "SSO_AF_WS_GUNMAP_DIGESTX"
#define device_bar_CAVM_SSO_AF_WS_GUNMAP_DIGESTX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_WS_GUNMAP_DIGESTX(a) (a)
#define arguments_CAVM_SSO_AF_WS_GUNMAP_DIGESTX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_ws_gunmap_digest#_w1s
 *
 * SSO AF WS GRP UNMAP Error Summary Registers
 * This register reads or sets bits.
 */
union cavm_sso_af_ws_gunmap_digestx_w1s
{
    uint64_t u;
    struct cavm_sso_af_ws_gunmap_digestx_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_WS_GUNMAP_DIGEST(0..1)[HWS]. */
#else /* Word 0 - Little Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_WS_GUNMAP_DIGEST(0..1)[HWS]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ws_gunmap_digestx_w1s_s cn10; */
    /* struct cavm_sso_af_ws_gunmap_digestx_w1s_s cn10ka_p1; */
    struct cavm_sso_af_ws_gunmap_digestx_w1s_cn10ka_p2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_WS_GUNMAP_DIGEST(0..0)[HWS]. */
#else /* Word 0 - Little Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_WS_GUNMAP_DIGEST(0..0)[HWS]. */
#endif /* Word 0 - End */
    } cn10ka_p2;
    /* struct cavm_sso_af_ws_gunmap_digestx_w1s_cn10ka_p2 cn10kb; */
    /* struct cavm_sso_af_ws_gunmap_digestx_w1s_s cnf10ka; */
    /* struct cavm_sso_af_ws_gunmap_digestx_w1s_s cnf10kb; */
};
typedef union cavm_sso_af_ws_gunmap_digestx_w1s cavm_sso_af_ws_gunmap_digestx_w1s_t;

static inline uint64_t CAVM_SSO_AF_WS_GUNMAP_DIGESTX_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_WS_GUNMAP_DIGESTX_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_AX) && (a<=1))
        return 0x840070902300ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a==0))
        return 0x840070902300ll + 8ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a==0))
        return 0x840070902300ll + 8ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x840070902300ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x840070902300ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("SSO_AF_WS_GUNMAP_DIGESTX_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_WS_GUNMAP_DIGESTX_W1S(a) cavm_sso_af_ws_gunmap_digestx_w1s_t
#define bustype_CAVM_SSO_AF_WS_GUNMAP_DIGESTX_W1S(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_WS_GUNMAP_DIGESTX_W1S(a) "SSO_AF_WS_GUNMAP_DIGESTX_W1S"
#define device_bar_CAVM_SSO_AF_WS_GUNMAP_DIGESTX_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_WS_GUNMAP_DIGESTX_W1S(a) (a)
#define arguments_CAVM_SSO_AF_WS_GUNMAP_DIGESTX_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_ws_ne_digest#
 *
 * SSO AF WS IOP (FLR initiated while not empty) Error Summary Registers
 * One bit per HWS to indicate which workslots have reported an SSO_AF_ERR2[WS_FLR_NE] error.
 */
union cavm_sso_af_ws_ne_digestx
{
    uint64_t u;
    struct cavm_sso_af_ws_ne_digestx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1C/H) One bit per HWS. */
#else /* Word 0 - Little Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1C/H) One bit per HWS. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ws_ne_digestx_s cn; */
};
typedef union cavm_sso_af_ws_ne_digestx cavm_sso_af_ws_ne_digestx_t;

static inline uint64_t CAVM_SSO_AF_WS_NE_DIGESTX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_WS_NE_DIGESTX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_AX) && (a<=1))
        return 0x840070902800ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a==0))
        return 0x840070902800ll + 8ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a==0))
        return 0x840070902800ll + 8ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x840070902800ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x840070902800ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("SSO_AF_WS_NE_DIGESTX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_WS_NE_DIGESTX(a) cavm_sso_af_ws_ne_digestx_t
#define bustype_CAVM_SSO_AF_WS_NE_DIGESTX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_WS_NE_DIGESTX(a) "SSO_AF_WS_NE_DIGESTX"
#define device_bar_CAVM_SSO_AF_WS_NE_DIGESTX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_WS_NE_DIGESTX(a) (a)
#define arguments_CAVM_SSO_AF_WS_NE_DIGESTX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_ws_ne_digest#_w1s
 *
 * SSO AF WS IOP (FLR initiated while not empty) Error Summary Registers
 * This register reads or sets bits.
 */
union cavm_sso_af_ws_ne_digestx_w1s
{
    uint64_t u;
    struct cavm_sso_af_ws_ne_digestx_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_WS_NE_DIGEST(0..1)[HWS]. */
#else /* Word 0 - Little Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_WS_NE_DIGEST(0..1)[HWS]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ws_ne_digestx_w1s_s cn10; */
    /* struct cavm_sso_af_ws_ne_digestx_w1s_s cn10ka_p1; */
    struct cavm_sso_af_ws_ne_digestx_w1s_cn10ka_p2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_WS_NE_DIGEST(0..0)[HWS]. */
#else /* Word 0 - Little Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_WS_NE_DIGEST(0..0)[HWS]. */
#endif /* Word 0 - End */
    } cn10ka_p2;
    /* struct cavm_sso_af_ws_ne_digestx_w1s_cn10ka_p2 cn10kb; */
    /* struct cavm_sso_af_ws_ne_digestx_w1s_s cnf10ka; */
    /* struct cavm_sso_af_ws_ne_digestx_w1s_s cnf10kb; */
};
typedef union cavm_sso_af_ws_ne_digestx_w1s cavm_sso_af_ws_ne_digestx_w1s_t;

static inline uint64_t CAVM_SSO_AF_WS_NE_DIGESTX_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_WS_NE_DIGESTX_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_AX) && (a<=1))
        return 0x840070902900ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a==0))
        return 0x840070902900ll + 8ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a==0))
        return 0x840070902900ll + 8ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x840070902900ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x840070902900ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("SSO_AF_WS_NE_DIGESTX_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_WS_NE_DIGESTX_W1S(a) cavm_sso_af_ws_ne_digestx_w1s_t
#define bustype_CAVM_SSO_AF_WS_NE_DIGESTX_W1S(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_WS_NE_DIGESTX_W1S(a) "SSO_AF_WS_NE_DIGESTX_W1S"
#define device_bar_CAVM_SSO_AF_WS_NE_DIGESTX_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_WS_NE_DIGESTX_W1S(a) (a)
#define arguments_CAVM_SSO_AF_WS_NE_DIGESTX_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_ws_ni_digest#
 *
 * SSO AF WS IOP (FLR initiated while not idle) Error Summary Registers
 * One bit per HWS to indicate which workslots have reported an SSO_AF_ERR2[WS_FLR_NI] error.
 */
union cavm_sso_af_ws_ni_digestx
{
    uint64_t u;
    struct cavm_sso_af_ws_ni_digestx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1C/H) One bit per HWS. */
#else /* Word 0 - Little Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1C/H) One bit per HWS. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ws_ni_digestx_s cn; */
};
typedef union cavm_sso_af_ws_ni_digestx cavm_sso_af_ws_ni_digestx_t;

static inline uint64_t CAVM_SSO_AF_WS_NI_DIGESTX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_WS_NI_DIGESTX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_AX) && (a<=1))
        return 0x840070903000ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a==0))
        return 0x840070903000ll + 8ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a==0))
        return 0x840070903000ll + 8ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x840070903000ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x840070903000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("SSO_AF_WS_NI_DIGESTX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_WS_NI_DIGESTX(a) cavm_sso_af_ws_ni_digestx_t
#define bustype_CAVM_SSO_AF_WS_NI_DIGESTX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_WS_NI_DIGESTX(a) "SSO_AF_WS_NI_DIGESTX"
#define device_bar_CAVM_SSO_AF_WS_NI_DIGESTX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_WS_NI_DIGESTX(a) (a)
#define arguments_CAVM_SSO_AF_WS_NI_DIGESTX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_ws_ni_digest#_w1s
 *
 * SSO AF WS IOP (FLR initiated while not idle) Error Summary Registers
 * This register reads or sets bits.
 */
union cavm_sso_af_ws_ni_digestx_w1s
{
    uint64_t u;
    struct cavm_sso_af_ws_ni_digestx_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_WS_NI_DIGEST(0..1)[HWS]. */
#else /* Word 0 - Little Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_WS_NI_DIGEST(0..1)[HWS]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ws_ni_digestx_w1s_s cn10; */
    /* struct cavm_sso_af_ws_ni_digestx_w1s_s cn10ka_p1; */
    struct cavm_sso_af_ws_ni_digestx_w1s_cn10ka_p2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_WS_NI_DIGEST(0..0)[HWS]. */
#else /* Word 0 - Little Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_WS_NI_DIGEST(0..0)[HWS]. */
#endif /* Word 0 - End */
    } cn10ka_p2;
    /* struct cavm_sso_af_ws_ni_digestx_w1s_cn10ka_p2 cn10kb; */
    /* struct cavm_sso_af_ws_ni_digestx_w1s_s cnf10ka; */
    /* struct cavm_sso_af_ws_ni_digestx_w1s_s cnf10kb; */
};
typedef union cavm_sso_af_ws_ni_digestx_w1s cavm_sso_af_ws_ni_digestx_w1s_t;

static inline uint64_t CAVM_SSO_AF_WS_NI_DIGESTX_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_WS_NI_DIGESTX_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_AX) && (a<=1))
        return 0x840070903100ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a==0))
        return 0x840070903100ll + 8ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a==0))
        return 0x840070903100ll + 8ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x840070903100ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x840070903100ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("SSO_AF_WS_NI_DIGESTX_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_WS_NI_DIGESTX_W1S(a) cavm_sso_af_ws_ni_digestx_w1s_t
#define bustype_CAVM_SSO_AF_WS_NI_DIGESTX_W1S(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_WS_NI_DIGESTX_W1S(a) "SSO_AF_WS_NI_DIGESTX_W1S"
#define device_bar_CAVM_SSO_AF_WS_NI_DIGESTX_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_WS_NI_DIGESTX_W1S(a) (a)
#define arguments_CAVM_SSO_AF_WS_NI_DIGESTX_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_ws_nt_digest#
 *
 * SSO AF WS IOP (FLR initiated while not idle) Error Summary Registers
 * One bit per HWS to indicate which workslots have reported an SSO_AF_ERR2[WS_FLR_NT] error.
 */
union cavm_sso_af_ws_nt_digestx
{
    uint64_t u;
    struct cavm_sso_af_ws_nt_digestx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1C/H) One bit per HWS. */
#else /* Word 0 - Little Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1C/H) One bit per HWS. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ws_nt_digestx_s cn; */
};
typedef union cavm_sso_af_ws_nt_digestx cavm_sso_af_ws_nt_digestx_t;

static inline uint64_t CAVM_SSO_AF_WS_NT_DIGESTX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_WS_NT_DIGESTX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_AX) && (a<=1))
        return 0x840070903200ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a==0))
        return 0x840070903200ll + 8ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a==0))
        return 0x840070903200ll + 8ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x840070903200ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x840070903200ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("SSO_AF_WS_NT_DIGESTX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_WS_NT_DIGESTX(a) cavm_sso_af_ws_nt_digestx_t
#define bustype_CAVM_SSO_AF_WS_NT_DIGESTX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_WS_NT_DIGESTX(a) "SSO_AF_WS_NT_DIGESTX"
#define device_bar_CAVM_SSO_AF_WS_NT_DIGESTX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_WS_NT_DIGESTX(a) (a)
#define arguments_CAVM_SSO_AF_WS_NT_DIGESTX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_ws_nt_digest#_w1s
 *
 * SSO AF WS IOP (FLR initiated while not idle) Error Summary Registers
 * This register reads or sets bits.
 */
union cavm_sso_af_ws_nt_digestx_w1s
{
    uint64_t u;
    struct cavm_sso_af_ws_nt_digestx_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_WS_NT_DIGEST(0..1)[HWS]. */
#else /* Word 0 - Little Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_WS_NT_DIGEST(0..1)[HWS]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_ws_nt_digestx_w1s_s cn10; */
    /* struct cavm_sso_af_ws_nt_digestx_w1s_s cn10ka_p1; */
    struct cavm_sso_af_ws_nt_digestx_w1s_cn10ka_p2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_WS_NT_DIGEST(0..0)[HWS]. */
#else /* Word 0 - Little Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_WS_NT_DIGEST(0..0)[HWS]. */
#endif /* Word 0 - End */
    } cn10ka_p2;
    /* struct cavm_sso_af_ws_nt_digestx_w1s_cn10ka_p2 cn10kb; */
    /* struct cavm_sso_af_ws_nt_digestx_w1s_s cnf10ka; */
    /* struct cavm_sso_af_ws_nt_digestx_w1s_s cnf10kb; */
};
typedef union cavm_sso_af_ws_nt_digestx_w1s cavm_sso_af_ws_nt_digestx_w1s_t;

static inline uint64_t CAVM_SSO_AF_WS_NT_DIGESTX_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_WS_NT_DIGESTX_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_AX) && (a<=1))
        return 0x840070903300ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a==0))
        return 0x840070903300ll + 8ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a==0))
        return 0x840070903300ll + 8ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x840070903300ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x840070903300ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("SSO_AF_WS_NT_DIGESTX_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_WS_NT_DIGESTX_W1S(a) cavm_sso_af_ws_nt_digestx_w1s_t
#define bustype_CAVM_SSO_AF_WS_NT_DIGESTX_W1S(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_WS_NT_DIGESTX_W1S(a) "SSO_AF_WS_NT_DIGESTX_W1S"
#define device_bar_CAVM_SSO_AF_WS_NT_DIGESTX_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_WS_NT_DIGESTX_W1S(a) (a)
#define arguments_CAVM_SSO_AF_WS_NT_DIGESTX_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_xaq#_gmctl
 *
 * SSO PF External Admission Queue Guest Machine Control Register
 */
union cavm_sso_af_xaqx_gmctl
{
    uint64_t u;
    struct cavm_sso_af_xaqx_gmctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t pf_func               : 16; /**< [ 15:  0](R/W) NPA PF and function whose auras are used to allocate and free buffers.
                                                                 Format specified by RVU_PF_FUNC_S. */
#else /* Word 0 - Little Endian */
        uint64_t pf_func               : 16; /**< [ 15:  0](R/W) NPA PF and function whose auras are used to allocate and free buffers.
                                                                 Format specified by RVU_PF_FUNC_S. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_xaqx_gmctl_s cn; */
};
typedef union cavm_sso_af_xaqx_gmctl cavm_sso_af_xaqx_gmctl_t;

static inline uint64_t CAVM_SSO_AF_XAQX_GMCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_XAQX_GMCTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x8400700e0000ll + 8ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x8400700e0000ll + 8ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x8400700e0000ll + 8ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x8400700e0000ll + 8ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_XAQX_GMCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_XAQX_GMCTL(a) cavm_sso_af_xaqx_gmctl_t
#define bustype_CAVM_SSO_AF_XAQX_GMCTL(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_XAQX_GMCTL(a) "SSO_AF_XAQX_GMCTL"
#define device_bar_CAVM_SSO_AF_XAQX_GMCTL(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_XAQX_GMCTL(a) (a)
#define arguments_CAVM_SSO_AF_XAQX_GMCTL(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_xaq#_head_next
 *
 * SSO AF Hardware Group External Admission Queue Head Next Register
 * These registers contain the pointer to the next buffer to become the head when the final cache
 * line in this buffer is read.
 *
 * This register must not be written when SSO_AF_HWGRP()_AW_CFG[RWEN] is set.
 */
union cavm_sso_af_xaqx_head_next
{
    uint64_t u;
    struct cavm_sso_af_xaqx_head_next_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t ptr                   : 46; /**< [ 52:  7](R/W/H) LF IOVA pointer, divided by 128 bytes. */
        uint64_t reserved_0_6          : 7;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_6          : 7;
        uint64_t ptr                   : 46; /**< [ 52:  7](R/W/H) LF IOVA pointer, divided by 128 bytes. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_xaqx_head_next_s cn; */
};
typedef union cavm_sso_af_xaqx_head_next cavm_sso_af_xaqx_head_next_t;

static inline uint64_t CAVM_SSO_AF_XAQX_HEAD_NEXT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_XAQX_HEAD_NEXT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x8400700a0000ll + 8ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x8400700a0000ll + 8ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x8400700a0000ll + 8ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x8400700a0000ll + 8ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_XAQX_HEAD_NEXT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_XAQX_HEAD_NEXT(a) cavm_sso_af_xaqx_head_next_t
#define bustype_CAVM_SSO_AF_XAQX_HEAD_NEXT(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_XAQX_HEAD_NEXT(a) "SSO_AF_XAQX_HEAD_NEXT"
#define device_bar_CAVM_SSO_AF_XAQX_HEAD_NEXT(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_XAQX_HEAD_NEXT(a) (a)
#define arguments_CAVM_SSO_AF_XAQX_HEAD_NEXT(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_xaq#_head_ptr
 *
 * SSO AF Hardware-Group External Admission Queue Head Pointer Register
 * These registers contain the pointer to the first entry of the external linked
 * list(s) for a particular hardware group. These pointers are initialized by hardware.
 *
 * This register must not be written when SSO_AF_HWGRP()_AW_CFG[RWEN] is set.
 */
union cavm_sso_af_xaqx_head_ptr
{
    uint64_t u;
    struct cavm_sso_af_xaqx_head_ptr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t ptr                   : 46; /**< [ 52:  7](R/W/H) LF IOVA pointer, divided by 128 bytes. */
        uint64_t reserved_5_6          : 2;
        uint64_t cl                    : 5;  /**< [  4:  0](R/W/H) Cache line number in buffer. Cache line zero contains the next pointer. */
#else /* Word 0 - Little Endian */
        uint64_t cl                    : 5;  /**< [  4:  0](R/W/H) Cache line number in buffer. Cache line zero contains the next pointer. */
        uint64_t reserved_5_6          : 2;
        uint64_t ptr                   : 46; /**< [ 52:  7](R/W/H) LF IOVA pointer, divided by 128 bytes. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_xaqx_head_ptr_s cn; */
};
typedef union cavm_sso_af_xaqx_head_ptr cavm_sso_af_xaqx_head_ptr_t;

static inline uint64_t CAVM_SSO_AF_XAQX_HEAD_PTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_XAQX_HEAD_PTR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x840070080000ll + 8ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x840070080000ll + 8ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x840070080000ll + 8ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x840070080000ll + 8ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_XAQX_HEAD_PTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_XAQX_HEAD_PTR(a) cavm_sso_af_xaqx_head_ptr_t
#define bustype_CAVM_SSO_AF_XAQX_HEAD_PTR(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_XAQX_HEAD_PTR(a) "SSO_AF_XAQX_HEAD_PTR"
#define device_bar_CAVM_SSO_AF_XAQX_HEAD_PTR(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_XAQX_HEAD_PTR(a) (a)
#define arguments_CAVM_SSO_AF_XAQX_HEAD_PTR(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_xaq#_tail_next
 *
 * SSO AF Hardware Group External Admission Queue Tail Next Register
 * These registers contain the pointer to the next buffer to become the tail when the final cache
 * line in this buffer is written.  Register fields are identical to those in
 * SSO_AF_XAQ()_HEAD_NEXT above.
 *
 * This register must not be written when SSO_AF_HWGRP()_AW_CFG[RWEN] is set.
 */
union cavm_sso_af_xaqx_tail_next
{
    uint64_t u;
    struct cavm_sso_af_xaqx_tail_next_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t ptr                   : 46; /**< [ 52:  7](R/W/H) LF IOVA pointer, divided by 128 bytes. */
        uint64_t reserved_0_6          : 7;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_6          : 7;
        uint64_t ptr                   : 46; /**< [ 52:  7](R/W/H) LF IOVA pointer, divided by 128 bytes. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_xaqx_tail_next_s cn; */
};
typedef union cavm_sso_af_xaqx_tail_next cavm_sso_af_xaqx_tail_next_t;

static inline uint64_t CAVM_SSO_AF_XAQX_TAIL_NEXT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_XAQX_TAIL_NEXT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x8400700b0000ll + 8ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x8400700b0000ll + 8ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x8400700b0000ll + 8ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x8400700b0000ll + 8ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_XAQX_TAIL_NEXT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_XAQX_TAIL_NEXT(a) cavm_sso_af_xaqx_tail_next_t
#define bustype_CAVM_SSO_AF_XAQX_TAIL_NEXT(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_XAQX_TAIL_NEXT(a) "SSO_AF_XAQX_TAIL_NEXT"
#define device_bar_CAVM_SSO_AF_XAQX_TAIL_NEXT(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_XAQX_TAIL_NEXT(a) (a)
#define arguments_CAVM_SSO_AF_XAQX_TAIL_NEXT(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_xaq#_tail_ptr
 *
 * SSO AF Hardware-Group External Admission Queue Tail Pointer Register
 * These registers contain the pointer to the last entry of the external linked list(s)
 * for a particular hardware group. Register fields are identical to those in
 * SSO_AF_XAQ()_HEAD_PTR above.
 *
 * During an FLR event, software must return the reset group's tail pointers to NPA and clear
 * SSO_AF_HWGRP()_AW_STATUS[TPTR_VLD].
 *
 * This register must not be written when SSO_AF_HWGRP()_AW_CFG[RWEN] is set.
 */
union cavm_sso_af_xaqx_tail_ptr
{
    uint64_t u;
    struct cavm_sso_af_xaqx_tail_ptr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t ptr                   : 46; /**< [ 52:  7](R/W/H) LF IOVA pointer, divided by 128 bytes. */
        uint64_t reserved_5_6          : 2;
        uint64_t cl                    : 5;  /**< [  4:  0](R/W/H) Cache line number in buffer. Cache line zero contains the next pointer. */
#else /* Word 0 - Little Endian */
        uint64_t cl                    : 5;  /**< [  4:  0](R/W/H) Cache line number in buffer. Cache line zero contains the next pointer. */
        uint64_t reserved_5_6          : 2;
        uint64_t ptr                   : 46; /**< [ 52:  7](R/W/H) LF IOVA pointer, divided by 128 bytes. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_xaqx_tail_ptr_s cn; */
};
typedef union cavm_sso_af_xaqx_tail_ptr cavm_sso_af_xaqx_tail_ptr_t;

static inline uint64_t CAVM_SSO_AF_XAQX_TAIL_PTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_XAQX_TAIL_PTR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x840070090000ll + 8ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x840070090000ll + 8ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x840070090000ll + 8ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x840070090000ll + 8ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_AF_XAQX_TAIL_PTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_XAQX_TAIL_PTR(a) cavm_sso_af_xaqx_tail_ptr_t
#define bustype_CAVM_SSO_AF_XAQX_TAIL_PTR(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_XAQX_TAIL_PTR(a) "SSO_AF_XAQX_TAIL_PTR"
#define device_bar_CAVM_SSO_AF_XAQX_TAIL_PTR(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_XAQX_TAIL_PTR(a) (a)
#define arguments_CAVM_SSO_AF_XAQX_TAIL_PTR(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_xaq_latency_pc
 *
 * SSO AF External Admission Queue Latency Perf-Count Register
 */
union cavm_sso_af_xaq_latency_pc
{
    uint64_t u;
    struct cavm_sso_af_xaq_latency_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of cycles waiting for XAQ read returns. This may be divided by SSO_AF_XAQ_REQ_PC to
                                                                 determine the average read latency. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of cycles waiting for XAQ read returns. This may be divided by SSO_AF_XAQ_REQ_PC to
                                                                 determine the average read latency. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_xaq_latency_pc_s cn; */
};
typedef union cavm_sso_af_xaq_latency_pc cavm_sso_af_xaq_latency_pc_t;

#define CAVM_SSO_AF_XAQ_LATENCY_PC CAVM_SSO_AF_XAQ_LATENCY_PC_FUNC()
static inline uint64_t CAVM_SSO_AF_XAQ_LATENCY_PC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_XAQ_LATENCY_PC_FUNC(void)
{
    return 0x8400700020b8ll;
}

#define typedef_CAVM_SSO_AF_XAQ_LATENCY_PC cavm_sso_af_xaq_latency_pc_t
#define bustype_CAVM_SSO_AF_XAQ_LATENCY_PC CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_XAQ_LATENCY_PC "SSO_AF_XAQ_LATENCY_PC"
#define device_bar_CAVM_SSO_AF_XAQ_LATENCY_PC 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_XAQ_LATENCY_PC 0
#define arguments_CAVM_SSO_AF_XAQ_LATENCY_PC -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_xaq_req_pc
 *
 * SSO AF External Admission Queue Requests Perf-Count Register
 */
union cavm_sso_af_xaq_req_pc
{
    uint64_t u;
    struct cavm_sso_af_xaq_req_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of XAQ read requests. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of XAQ read requests. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_xaq_req_pc_s cn; */
};
typedef union cavm_sso_af_xaq_req_pc cavm_sso_af_xaq_req_pc_t;

#define CAVM_SSO_AF_XAQ_REQ_PC CAVM_SSO_AF_XAQ_REQ_PC_FUNC()
static inline uint64_t CAVM_SSO_AF_XAQ_REQ_PC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_XAQ_REQ_PC_FUNC(void)
{
    return 0x8400700020b0ll;
}

#define typedef_CAVM_SSO_AF_XAQ_REQ_PC cavm_sso_af_xaq_req_pc_t
#define bustype_CAVM_SSO_AF_XAQ_REQ_PC CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_XAQ_REQ_PC "SSO_AF_XAQ_REQ_PC"
#define device_bar_CAVM_SSO_AF_XAQ_REQ_PC 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_XAQ_REQ_PC 0
#define arguments_CAVM_SSO_AF_XAQ_REQ_PC -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_xaqdis_digest#
 *
 * SSO AF XAQDIS Error Summary Registers
 * One bit per HWGRP to indicate which groups have reported an SSO_AF_ERR0[ADDWQ_DROPPED_XAQEN] error.
 */
union cavm_sso_af_xaqdis_digestx
{
    uint64_t u;
    struct cavm_sso_af_xaqdis_digestx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1C/H) One bit per HWGRP. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1C/H) One bit per HWGRP. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_xaqdis_digestx_s cn; */
};
typedef union cavm_sso_af_xaqdis_digestx cavm_sso_af_xaqdis_digestx_t;

static inline uint64_t CAVM_SSO_AF_XAQDIS_DIGESTX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_XAQDIS_DIGESTX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=3))
        return 0x840070901000ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x840070901000ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x840070901000ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x840070901000ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("SSO_AF_XAQDIS_DIGESTX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_XAQDIS_DIGESTX(a) cavm_sso_af_xaqdis_digestx_t
#define bustype_CAVM_SSO_AF_XAQDIS_DIGESTX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_XAQDIS_DIGESTX(a) "SSO_AF_XAQDIS_DIGESTX"
#define device_bar_CAVM_SSO_AF_XAQDIS_DIGESTX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_XAQDIS_DIGESTX(a) (a)
#define arguments_CAVM_SSO_AF_XAQDIS_DIGESTX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_af_xaqdis_digest#_w1s
 *
 * SSO AF XAQDIS Error Summary Registers
 * This register reads or sets bits.
 */
union cavm_sso_af_xaqdis_digestx_w1s
{
    uint64_t u;
    struct cavm_sso_af_xaqdis_digestx_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_XAQDIS_DIGEST(0..3)[HWGRP]. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_XAQDIS_DIGEST(0..3)[HWGRP]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_af_xaqdis_digestx_w1s_s cn10; */
    /* struct cavm_sso_af_xaqdis_digestx_w1s_s cn10ka; */
    struct cavm_sso_af_xaqdis_digestx_w1s_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_XAQDIS_DIGEST(0..1)[HWGRP]. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SSO_AF_XAQDIS_DIGEST(0..1)[HWGRP]. */
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_af_xaqdis_digestx_w1s_s cnf10ka; */
    /* struct cavm_sso_af_xaqdis_digestx_w1s_s cnf10kb; */
};
typedef union cavm_sso_af_xaqdis_digestx_w1s cavm_sso_af_xaqdis_digestx_w1s_t;

static inline uint64_t CAVM_SSO_AF_XAQDIS_DIGESTX_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_AF_XAQDIS_DIGESTX_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=3))
        return 0x840070901100ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x840070901100ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x840070901100ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x840070901100ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("SSO_AF_XAQDIS_DIGESTX_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_AF_XAQDIS_DIGESTX_W1S(a) cavm_sso_af_xaqdis_digestx_w1s_t
#define bustype_CAVM_SSO_AF_XAQDIS_DIGESTX_W1S(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_AF_XAQDIS_DIGESTX_W1S(a) "SSO_AF_XAQDIS_DIGESTX_W1S"
#define device_bar_CAVM_SSO_AF_XAQDIS_DIGESTX_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_AF_XAQDIS_DIGESTX_W1S(a) (a)
#define arguments_CAVM_SSO_AF_XAQDIS_DIGESTX_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) sso_lf_ggrp_aq_cnt
 *
 * SSO LF Guest Group Admission Queue Count Registers
 */
union cavm_sso_lf_ggrp_aq_cnt
{
    uint64_t u;
    struct cavm_sso_lf_ggrp_aq_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t aq_cnt                : 33; /**< [ 32:  0](RO/H) Number of total in-unit, transitional and external admission queue entries for this guest group. */
#else /* Word 0 - Little Endian */
        uint64_t aq_cnt                : 33; /**< [ 32:  0](RO/H) Number of total in-unit, transitional and external admission queue entries for this guest group. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_lf_ggrp_aq_cnt_s cn; */
};
typedef union cavm_sso_lf_ggrp_aq_cnt cavm_sso_lf_ggrp_aq_cnt_t;

#define CAVM_SSO_LF_GGRP_AQ_CNT CAVM_SSO_LF_GGRP_AQ_CNT_FUNC()
static inline uint64_t CAVM_SSO_LF_GGRP_AQ_CNT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_LF_GGRP_AQ_CNT_FUNC(void)
{
    return 0x8402007001c0ll;
}

#define typedef_CAVM_SSO_LF_GGRP_AQ_CNT cavm_sso_lf_ggrp_aq_cnt_t
#define bustype_CAVM_SSO_LF_GGRP_AQ_CNT CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSO_LF_GGRP_AQ_CNT "SSO_LF_GGRP_AQ_CNT"
#define device_bar_CAVM_SSO_LF_GGRP_AQ_CNT 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSO_LF_GGRP_AQ_CNT 0
#define arguments_CAVM_SSO_LF_GGRP_AQ_CNT -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) sso_lf_ggrp_aq_thr
 *
 * SSO LF Guest Group Total Admission Queue Threshold Register
 */
union cavm_sso_lf_ggrp_aq_thr
{
    uint64_t u;
    struct cavm_sso_lf_ggrp_aq_thr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t aq_thr                : 33; /**< [ 32:  0](R/W) Total admission queue entry threshold. Compared against SSO_LF_GGRP_AQ_CNT for
                                                                 triggering AQ interrupts. */
#else /* Word 0 - Little Endian */
        uint64_t aq_thr                : 33; /**< [ 32:  0](R/W) Total admission queue entry threshold. Compared against SSO_LF_GGRP_AQ_CNT for
                                                                 triggering AQ interrupts. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_lf_ggrp_aq_thr_s cn; */
};
typedef union cavm_sso_lf_ggrp_aq_thr cavm_sso_lf_ggrp_aq_thr_t;

#define CAVM_SSO_LF_GGRP_AQ_THR CAVM_SSO_LF_GGRP_AQ_THR_FUNC()
static inline uint64_t CAVM_SSO_LF_GGRP_AQ_THR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_LF_GGRP_AQ_THR_FUNC(void)
{
    return 0x8402007001e0ll;
}

#define typedef_CAVM_SSO_LF_GGRP_AQ_THR cavm_sso_lf_ggrp_aq_thr_t
#define bustype_CAVM_SSO_LF_GGRP_AQ_THR CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSO_LF_GGRP_AQ_THR "SSO_LF_GGRP_AQ_THR"
#define device_bar_CAVM_SSO_LF_GGRP_AQ_THR 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSO_LF_GGRP_AQ_THR 0
#define arguments_CAVM_SSO_LF_GGRP_AQ_THR -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) sso_lf_ggrp_exe_dis
 *
 * SSO LF Guest Group Interrupt Temporary Disable Register
 * Contains the per-guest group temporary interrupt disable.  This register
 * must be written before the interrupt is enabled or cleared. For more
 * information on this register, refer to Interrupts.
 */
union cavm_sso_lf_ggrp_exe_dis
{
    uint64_t u;
    struct cavm_sso_lf_ggrp_exe_dis_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t exe_dis               : 1;  /**< [ 63: 63](R/W1S/H) Executable interrupt temporary disable. Corresponding SSO_LF_GGRP_INT[EXE_INT]
                                                                 bit cannot be set due to IAQ_CNT/IAQ_THR check when this bit is set. [EXE_DIS]
                                                                 is cleared by hardware whenever:
                                                                 * SSO_LF_GGRP_INT_CNT[IAQ_CNT] is zero.
                                                                 * Or, the hardware decrements the time counter for this guest group to zero, i.e.
                                                                 SSO_LF_GGRP_INT_CNT[TC_CNT] is equal to one when periodic counter SSO_AF_WQ_INT_PC[PC] is
                                                                 equal to zero. */
        uint64_t reserved_0_62         : 63;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_62         : 63;
        uint64_t exe_dis               : 1;  /**< [ 63: 63](R/W1S/H) Executable interrupt temporary disable. Corresponding SSO_LF_GGRP_INT[EXE_INT]
                                                                 bit cannot be set due to IAQ_CNT/IAQ_THR check when this bit is set. [EXE_DIS]
                                                                 is cleared by hardware whenever:
                                                                 * SSO_LF_GGRP_INT_CNT[IAQ_CNT] is zero.
                                                                 * Or, the hardware decrements the time counter for this guest group to zero, i.e.
                                                                 SSO_LF_GGRP_INT_CNT[TC_CNT] is equal to one when periodic counter SSO_AF_WQ_INT_PC[PC] is
                                                                 equal to zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_lf_ggrp_exe_dis_s cn; */
};
typedef union cavm_sso_lf_ggrp_exe_dis cavm_sso_lf_ggrp_exe_dis_t;

#define CAVM_SSO_LF_GGRP_EXE_DIS CAVM_SSO_LF_GGRP_EXE_DIS_FUNC()
static inline uint64_t CAVM_SSO_LF_GGRP_EXE_DIS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_LF_GGRP_EXE_DIS_FUNC(void)
{
    return 0x840200700080ll;
}

#define typedef_CAVM_SSO_LF_GGRP_EXE_DIS cavm_sso_lf_ggrp_exe_dis_t
#define bustype_CAVM_SSO_LF_GGRP_EXE_DIS CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSO_LF_GGRP_EXE_DIS "SSO_LF_GGRP_EXE_DIS"
#define device_bar_CAVM_SSO_LF_GGRP_EXE_DIS 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSO_LF_GGRP_EXE_DIS 0
#define arguments_CAVM_SSO_LF_GGRP_EXE_DIS -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) sso_lf_ggrp_int
 *
 * SSO LF Guest Group Interrupt Register
 * Contains the per-guest group interrupts and is used to clear these
 * interrupts. For more information on this register, refer to Interrupts.
 */
union cavm_sso_lf_ggrp_int
{
    uint64_t u;
    struct cavm_sso_lf_ggrp_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t xaq_limit             : 1;  /**< [  2:  2](R/W1C/H) Guest group XAQ exceeded allocation limit error; add-works to this GGRP may
                                                                 be dropped. Set when SSO_LF_GGRP_XAQ_CNT[XAQ_CNT] \>=
                                                                 SSO_AF_HWGRP()_XAQ_LIMIT[XAQ_LIMIT]. */
        uint64_t exe_int               : 1;  /**< [  1:  1](R/W1C/H) Work-executable interrupt. Generally used to indicate work is waiting for software.
                                                                 Set by hardware whenever:

                                                                 * SSO_LF_GGRP_INT_CNT[IAQ_CNT] \>= SSO_LF_GGRP_INT_THR[IAQ_THR] and [IAQ_THR] != 0
                                                                 and SSO_LF_GGRP_EXE_DIS[EXE_DIS] is clear.

                                                                 * SSO_LF_GGRP_INT_CNT[DS_CNT] \>= SSO_LF_GGRP_INT_THR[DS_THR] and [DS_THR] != 0.

                                                                 * SSO_LF_GGRP_INT_CNT[CQ_CNT] \>= SSO_LF_GGRP_INT_THR[CQ_THR] and [CQ_THR] != 0.

                                                                 * SSO_LF_GGRP_INT_CNT[TC_CNT] is equal to one when periodic counter SSO_AF_WQ_INT_PC[PC] is
                                                                 equal to zero and SSO_LF_GGRP_INT_THR[TC_EN] is set and at least one of the following is
                                                                 true:
                                                                   o SSO_LF_GGRP_INT_CNT[IAQ_CNT] \> 0.
                                                                   o SSO_LF_GGRP_INT_CNT[DS_CNT] \> 0.
                                                                   o SSO_LF_GGRP_INT_CNT[CQ_CNT] \> 0. */
        uint64_t aq_int                : 1;  /**< [  0:  0](R/W1C/H) AQ threshold interrupt. Set if SSO_LF_GGRP_AQ_CNT changes, and the
                                                                 resulting value is equal to SSO_LF_GGRP_AQ_THR. */
#else /* Word 0 - Little Endian */
        uint64_t aq_int                : 1;  /**< [  0:  0](R/W1C/H) AQ threshold interrupt. Set if SSO_LF_GGRP_AQ_CNT changes, and the
                                                                 resulting value is equal to SSO_LF_GGRP_AQ_THR. */
        uint64_t exe_int               : 1;  /**< [  1:  1](R/W1C/H) Work-executable interrupt. Generally used to indicate work is waiting for software.
                                                                 Set by hardware whenever:

                                                                 * SSO_LF_GGRP_INT_CNT[IAQ_CNT] \>= SSO_LF_GGRP_INT_THR[IAQ_THR] and [IAQ_THR] != 0
                                                                 and SSO_LF_GGRP_EXE_DIS[EXE_DIS] is clear.

                                                                 * SSO_LF_GGRP_INT_CNT[DS_CNT] \>= SSO_LF_GGRP_INT_THR[DS_THR] and [DS_THR] != 0.

                                                                 * SSO_LF_GGRP_INT_CNT[CQ_CNT] \>= SSO_LF_GGRP_INT_THR[CQ_THR] and [CQ_THR] != 0.

                                                                 * SSO_LF_GGRP_INT_CNT[TC_CNT] is equal to one when periodic counter SSO_AF_WQ_INT_PC[PC] is
                                                                 equal to zero and SSO_LF_GGRP_INT_THR[TC_EN] is set and at least one of the following is
                                                                 true:
                                                                   o SSO_LF_GGRP_INT_CNT[IAQ_CNT] \> 0.
                                                                   o SSO_LF_GGRP_INT_CNT[DS_CNT] \> 0.
                                                                   o SSO_LF_GGRP_INT_CNT[CQ_CNT] \> 0. */
        uint64_t xaq_limit             : 1;  /**< [  2:  2](R/W1C/H) Guest group XAQ exceeded allocation limit error; add-works to this GGRP may
                                                                 be dropped. Set when SSO_LF_GGRP_XAQ_CNT[XAQ_CNT] \>=
                                                                 SSO_AF_HWGRP()_XAQ_LIMIT[XAQ_LIMIT]. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_lf_ggrp_int_s cn; */
};
typedef union cavm_sso_lf_ggrp_int cavm_sso_lf_ggrp_int_t;

#define CAVM_SSO_LF_GGRP_INT CAVM_SSO_LF_GGRP_INT_FUNC()
static inline uint64_t CAVM_SSO_LF_GGRP_INT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_LF_GGRP_INT_FUNC(void)
{
    return 0x840200700100ll;
}

#define typedef_CAVM_SSO_LF_GGRP_INT cavm_sso_lf_ggrp_int_t
#define bustype_CAVM_SSO_LF_GGRP_INT CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSO_LF_GGRP_INT "SSO_LF_GGRP_INT"
#define device_bar_CAVM_SSO_LF_GGRP_INT 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSO_LF_GGRP_INT 0
#define arguments_CAVM_SSO_LF_GGRP_INT -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) sso_lf_ggrp_int_cnt
 *
 * SSO LF Guest Group Work-Queue Interrupt Count Registers
 * These registers contain a read-only copy of the counts used to trigger work-queue interrupts
 * (one per guest group). For more information on this register, refer to Interrupts.
 */
union cavm_sso_lf_ggrp_int_cnt
{
    uint64_t u;
    struct cavm_sso_lf_ggrp_int_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_62_63        : 2;
        uint64_t tc_cnt                : 14; /**< [ 61: 48](RO/H) Time counter current value. Hardware sets this field to the value of
                                                                 SSO_LF_GGRP_INT_THR[TC_THR] whenever:
                                                                 * Corresponding SSO_LF_GGRP_INT_CNT[IAQ_CNT, DS_CNT, CQ_CNT] are all equal to zero.
                                                                 * Corresponding SSO_LF_GGRP_INT[EXE_INT] is written with a one to clear by software.
                                                                 * Corresponding SSO_LF_GGRP_EXE_DIS[EXE_DIS] is written with a one to set by software.
                                                                 * Corresponding SSO_LF_GGRP_INT_THR is written by software.
                                                                 * [TC_CNT] is equal to one and periodic counter SSO_AF_WQ_INT_PC[PC] is equal to zero.

                                                                 Otherwise, hardware decrements this field whenever the periodic counter SSO_AF_WQ_INT_PC[PC]
                                                                 is equal to zero. This field is zero whenever SSO_LF_GGRP_INT_THR[TC_THR] is equal to zero. */
        uint64_t reserved_46_47        : 2;
        uint64_t cq_cnt                : 14; /**< [ 45: 32](RO/H) Conflicted queue executable count. */
        uint64_t reserved_30_31        : 2;
        uint64_t ds_cnt                : 14; /**< [ 29: 16](RO/H) Deschedule executable count. */
        uint64_t reserved_14_15        : 2;
        uint64_t iaq_cnt               : 14; /**< [ 13:  0](RO/H) Work-queue entries for this in-unit admission queue. */
#else /* Word 0 - Little Endian */
        uint64_t iaq_cnt               : 14; /**< [ 13:  0](RO/H) Work-queue entries for this in-unit admission queue. */
        uint64_t reserved_14_15        : 2;
        uint64_t ds_cnt                : 14; /**< [ 29: 16](RO/H) Deschedule executable count. */
        uint64_t reserved_30_31        : 2;
        uint64_t cq_cnt                : 14; /**< [ 45: 32](RO/H) Conflicted queue executable count. */
        uint64_t reserved_46_47        : 2;
        uint64_t tc_cnt                : 14; /**< [ 61: 48](RO/H) Time counter current value. Hardware sets this field to the value of
                                                                 SSO_LF_GGRP_INT_THR[TC_THR] whenever:
                                                                 * Corresponding SSO_LF_GGRP_INT_CNT[IAQ_CNT, DS_CNT, CQ_CNT] are all equal to zero.
                                                                 * Corresponding SSO_LF_GGRP_INT[EXE_INT] is written with a one to clear by software.
                                                                 * Corresponding SSO_LF_GGRP_EXE_DIS[EXE_DIS] is written with a one to set by software.
                                                                 * Corresponding SSO_LF_GGRP_INT_THR is written by software.
                                                                 * [TC_CNT] is equal to one and periodic counter SSO_AF_WQ_INT_PC[PC] is equal to zero.

                                                                 Otherwise, hardware decrements this field whenever the periodic counter SSO_AF_WQ_INT_PC[PC]
                                                                 is equal to zero. This field is zero whenever SSO_LF_GGRP_INT_THR[TC_THR] is equal to zero. */
        uint64_t reserved_62_63        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_lf_ggrp_int_cnt_s cn10; */
    /* struct cavm_sso_lf_ggrp_int_cnt_s cn10ka; */
    struct cavm_sso_lf_ggrp_int_cnt_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_61_63        : 3;
        uint64_t tc_cnt                : 13; /**< [ 60: 48](RO/H) Time counter current value. Hardware sets this field to the value of
                                                                 SSO_LF_GGRP_INT_THR[TC_THR] whenever:
                                                                 * Corresponding SSO_LF_GGRP_INT_CNT[IAQ_CNT, DS_CNT, CQ_CNT] are all equal to zero.
                                                                 * Corresponding SSO_LF_GGRP_INT[EXE_INT] is written with a one to clear by software.
                                                                 * Corresponding SSO_LF_GGRP_EXE_DIS[EXE_DIS] is written with a one to set by software.
                                                                 * Corresponding SSO_LF_GGRP_INT_THR is written by software.
                                                                 * [TC_CNT] is equal to one and periodic counter SSO_AF_WQ_INT_PC[PC] is equal to zero.

                                                                 Otherwise, hardware decrements this field whenever the periodic counter SSO_AF_WQ_INT_PC[PC]
                                                                 is equal to zero. This field is zero whenever SSO_LF_GGRP_INT_THR[TC_THR] is equal to zero. */
        uint64_t reserved_45_47        : 3;
        uint64_t cq_cnt                : 13; /**< [ 44: 32](RO/H) Conflicted queue executable count. */
        uint64_t reserved_29_31        : 3;
        uint64_t ds_cnt                : 13; /**< [ 28: 16](RO/H) Deschedule executable count. */
        uint64_t reserved_13_15        : 3;
        uint64_t iaq_cnt               : 13; /**< [ 12:  0](RO/H) Work-queue entries for this in-unit admission queue. */
#else /* Word 0 - Little Endian */
        uint64_t iaq_cnt               : 13; /**< [ 12:  0](RO/H) Work-queue entries for this in-unit admission queue. */
        uint64_t reserved_13_15        : 3;
        uint64_t ds_cnt                : 13; /**< [ 28: 16](RO/H) Deschedule executable count. */
        uint64_t reserved_29_31        : 3;
        uint64_t cq_cnt                : 13; /**< [ 44: 32](RO/H) Conflicted queue executable count. */
        uint64_t reserved_45_47        : 3;
        uint64_t tc_cnt                : 13; /**< [ 60: 48](RO/H) Time counter current value. Hardware sets this field to the value of
                                                                 SSO_LF_GGRP_INT_THR[TC_THR] whenever:
                                                                 * Corresponding SSO_LF_GGRP_INT_CNT[IAQ_CNT, DS_CNT, CQ_CNT] are all equal to zero.
                                                                 * Corresponding SSO_LF_GGRP_INT[EXE_INT] is written with a one to clear by software.
                                                                 * Corresponding SSO_LF_GGRP_EXE_DIS[EXE_DIS] is written with a one to set by software.
                                                                 * Corresponding SSO_LF_GGRP_INT_THR is written by software.
                                                                 * [TC_CNT] is equal to one and periodic counter SSO_AF_WQ_INT_PC[PC] is equal to zero.

                                                                 Otherwise, hardware decrements this field whenever the periodic counter SSO_AF_WQ_INT_PC[PC]
                                                                 is equal to zero. This field is zero whenever SSO_LF_GGRP_INT_THR[TC_THR] is equal to zero. */
        uint64_t reserved_61_63        : 3;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_lf_ggrp_int_cnt_s cnf10ka; */
    /* struct cavm_sso_lf_ggrp_int_cnt_s cnf10kb; */
};
typedef union cavm_sso_lf_ggrp_int_cnt cavm_sso_lf_ggrp_int_cnt_t;

#define CAVM_SSO_LF_GGRP_INT_CNT CAVM_SSO_LF_GGRP_INT_CNT_FUNC()
static inline uint64_t CAVM_SSO_LF_GGRP_INT_CNT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_LF_GGRP_INT_CNT_FUNC(void)
{
    return 0x840200700180ll;
}

#define typedef_CAVM_SSO_LF_GGRP_INT_CNT cavm_sso_lf_ggrp_int_cnt_t
#define bustype_CAVM_SSO_LF_GGRP_INT_CNT CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSO_LF_GGRP_INT_CNT "SSO_LF_GGRP_INT_CNT"
#define device_bar_CAVM_SSO_LF_GGRP_INT_CNT 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSO_LF_GGRP_INT_CNT 0
#define arguments_CAVM_SSO_LF_GGRP_INT_CNT -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) sso_lf_ggrp_int_ena_w1c
 *
 * SSO LF Guest Group Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_sso_lf_ggrp_int_ena_w1c
{
    uint64_t u;
    struct cavm_sso_lf_ggrp_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t xaq_limit             : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for SSO_LF_GGRP_INT[XAQ_LIMIT]. */
        uint64_t exe_int               : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for SSO_LF_GGRP_INT[EXE_INT]. */
        uint64_t aq_int                : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for SSO_LF_GGRP_INT[AQ_INT]. */
#else /* Word 0 - Little Endian */
        uint64_t aq_int                : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for SSO_LF_GGRP_INT[AQ_INT]. */
        uint64_t exe_int               : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for SSO_LF_GGRP_INT[EXE_INT]. */
        uint64_t xaq_limit             : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for SSO_LF_GGRP_INT[XAQ_LIMIT]. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_lf_ggrp_int_ena_w1c_s cn; */
};
typedef union cavm_sso_lf_ggrp_int_ena_w1c cavm_sso_lf_ggrp_int_ena_w1c_t;

#define CAVM_SSO_LF_GGRP_INT_ENA_W1C CAVM_SSO_LF_GGRP_INT_ENA_W1C_FUNC()
static inline uint64_t CAVM_SSO_LF_GGRP_INT_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_LF_GGRP_INT_ENA_W1C_FUNC(void)
{
    return 0x840200700118ll;
}

#define typedef_CAVM_SSO_LF_GGRP_INT_ENA_W1C cavm_sso_lf_ggrp_int_ena_w1c_t
#define bustype_CAVM_SSO_LF_GGRP_INT_ENA_W1C CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSO_LF_GGRP_INT_ENA_W1C "SSO_LF_GGRP_INT_ENA_W1C"
#define device_bar_CAVM_SSO_LF_GGRP_INT_ENA_W1C 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSO_LF_GGRP_INT_ENA_W1C 0
#define arguments_CAVM_SSO_LF_GGRP_INT_ENA_W1C -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) sso_lf_ggrp_int_ena_w1s
 *
 * SSO LF Guest Group Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_sso_lf_ggrp_int_ena_w1s
{
    uint64_t u;
    struct cavm_sso_lf_ggrp_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t xaq_limit             : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for SSO_LF_GGRP_INT[XAQ_LIMIT]. */
        uint64_t exe_int               : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for SSO_LF_GGRP_INT[EXE_INT]. */
        uint64_t aq_int                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for SSO_LF_GGRP_INT[AQ_INT]. */
#else /* Word 0 - Little Endian */
        uint64_t aq_int                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for SSO_LF_GGRP_INT[AQ_INT]. */
        uint64_t exe_int               : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for SSO_LF_GGRP_INT[EXE_INT]. */
        uint64_t xaq_limit             : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for SSO_LF_GGRP_INT[XAQ_LIMIT]. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_lf_ggrp_int_ena_w1s_s cn; */
};
typedef union cavm_sso_lf_ggrp_int_ena_w1s cavm_sso_lf_ggrp_int_ena_w1s_t;

#define CAVM_SSO_LF_GGRP_INT_ENA_W1S CAVM_SSO_LF_GGRP_INT_ENA_W1S_FUNC()
static inline uint64_t CAVM_SSO_LF_GGRP_INT_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_LF_GGRP_INT_ENA_W1S_FUNC(void)
{
    return 0x840200700110ll;
}

#define typedef_CAVM_SSO_LF_GGRP_INT_ENA_W1S cavm_sso_lf_ggrp_int_ena_w1s_t
#define bustype_CAVM_SSO_LF_GGRP_INT_ENA_W1S CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSO_LF_GGRP_INT_ENA_W1S "SSO_LF_GGRP_INT_ENA_W1S"
#define device_bar_CAVM_SSO_LF_GGRP_INT_ENA_W1S 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSO_LF_GGRP_INT_ENA_W1S 0
#define arguments_CAVM_SSO_LF_GGRP_INT_ENA_W1S -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) sso_lf_ggrp_int_thr
 *
 * SSO LF Guest Group Work-Queue Interrupt Threshold Registers
 * These registers contain the thresholds for enabling and setting work-queue interrupts (one per
 * guest group). For more information on this register, refer to Interrupts.
 */
union cavm_sso_lf_ggrp_int_thr
{
    uint64_t u;
    struct cavm_sso_lf_ggrp_int_thr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tc_en                 : 1;  /**< [ 63: 63](R/W) Time counter interrupt enable for this guest group. This field must be zero
                                                                 when [TC_THR] is zero. */
        uint64_t reserved_61_62        : 2;
        uint64_t tc_thr                : 13; /**< [ 60: 48](R/W) Time counter interrupt threshold for this guest group. Compared against
                                                                 SSO_LF_GGRP_INT_CNT[TC_CNT]. When this field is equal to zero,
                                                                 SSO_LF_GGRP_INT_CNT[TC_CNT] is zero. */
        uint64_t reserved_46_47        : 2;
        uint64_t cq_thr                : 14; /**< [ 45: 32](R/W) Conflicted queue count threshold for this guest group. Compared against
                                                                 SSO_LF_GGRP_INT_CNT[CQ_CNT]. When this field is zero, the threshold interrupt is
                                                                 disabled. */
        uint64_t reserved_30_31        : 2;
        uint64_t ds_thr                : 14; /**< [ 29: 16](R/W) Deschedule count threshold for this guest group. Compared against
                                                                 SSO_LF_GGRP_INT_CNT[DS_CNT]. When
                                                                 this field is zero, the threshold interrupt is disabled. */
        uint64_t reserved_14_15        : 2;
        uint64_t iaq_thr               : 14; /**< [ 13:  0](R/W) In-unit admission queue threshold for this guest group. Compared against
                                                                 SSO_LF_GGRP_INT_CNT[IAQ_CNT]. When this field is zero, the threshold interrupt is
                                                                 disabled. */
#else /* Word 0 - Little Endian */
        uint64_t iaq_thr               : 14; /**< [ 13:  0](R/W) In-unit admission queue threshold for this guest group. Compared against
                                                                 SSO_LF_GGRP_INT_CNT[IAQ_CNT]. When this field is zero, the threshold interrupt is
                                                                 disabled. */
        uint64_t reserved_14_15        : 2;
        uint64_t ds_thr                : 14; /**< [ 29: 16](R/W) Deschedule count threshold for this guest group. Compared against
                                                                 SSO_LF_GGRP_INT_CNT[DS_CNT]. When
                                                                 this field is zero, the threshold interrupt is disabled. */
        uint64_t reserved_30_31        : 2;
        uint64_t cq_thr                : 14; /**< [ 45: 32](R/W) Conflicted queue count threshold for this guest group. Compared against
                                                                 SSO_LF_GGRP_INT_CNT[CQ_CNT]. When this field is zero, the threshold interrupt is
                                                                 disabled. */
        uint64_t reserved_46_47        : 2;
        uint64_t tc_thr                : 13; /**< [ 60: 48](R/W) Time counter interrupt threshold for this guest group. Compared against
                                                                 SSO_LF_GGRP_INT_CNT[TC_CNT]. When this field is equal to zero,
                                                                 SSO_LF_GGRP_INT_CNT[TC_CNT] is zero. */
        uint64_t reserved_61_62        : 2;
        uint64_t tc_en                 : 1;  /**< [ 63: 63](R/W) Time counter interrupt enable for this guest group. This field must be zero
                                                                 when [TC_THR] is zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_lf_ggrp_int_thr_s cn10; */
    /* struct cavm_sso_lf_ggrp_int_thr_s cn10ka; */
    struct cavm_sso_lf_ggrp_int_thr_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tc_en                 : 1;  /**< [ 63: 63](R/W) Time counter interrupt enable for this guest group. This field must be zero
                                                                 when [TC_THR] is zero. */
        uint64_t reserved_60_62        : 3;
        uint64_t tc_thr                : 12; /**< [ 59: 48](R/W) Time counter interrupt threshold for this guest group. Compared against
                                                                 SSO_LF_GGRP_INT_CNT[TC_CNT]. When this field is equal to zero,
                                                                 SSO_LF_GGRP_INT_CNT[TC_CNT] is zero. */
        uint64_t reserved_45_47        : 3;
        uint64_t cq_thr                : 13; /**< [ 44: 32](R/W) Conflicted queue count threshold for this guest group. Compared against
                                                                 SSO_LF_GGRP_INT_CNT[CQ_CNT]. When this field is zero, the threshold interrupt is
                                                                 disabled. */
        uint64_t reserved_29_31        : 3;
        uint64_t ds_thr                : 13; /**< [ 28: 16](R/W) Deschedule count threshold for this guest group. Compared against
                                                                 SSO_LF_GGRP_INT_CNT[DS_CNT]. When
                                                                 this field is zero, the threshold interrupt is disabled. */
        uint64_t reserved_13_15        : 3;
        uint64_t iaq_thr               : 13; /**< [ 12:  0](R/W) In-unit admission queue threshold for this guest group. Compared against
                                                                 SSO_LF_GGRP_INT_CNT[IAQ_CNT]. When this field is zero, the threshold interrupt is
                                                                 disabled. */
#else /* Word 0 - Little Endian */
        uint64_t iaq_thr               : 13; /**< [ 12:  0](R/W) In-unit admission queue threshold for this guest group. Compared against
                                                                 SSO_LF_GGRP_INT_CNT[IAQ_CNT]. When this field is zero, the threshold interrupt is
                                                                 disabled. */
        uint64_t reserved_13_15        : 3;
        uint64_t ds_thr                : 13; /**< [ 28: 16](R/W) Deschedule count threshold for this guest group. Compared against
                                                                 SSO_LF_GGRP_INT_CNT[DS_CNT]. When
                                                                 this field is zero, the threshold interrupt is disabled. */
        uint64_t reserved_29_31        : 3;
        uint64_t cq_thr                : 13; /**< [ 44: 32](R/W) Conflicted queue count threshold for this guest group. Compared against
                                                                 SSO_LF_GGRP_INT_CNT[CQ_CNT]. When this field is zero, the threshold interrupt is
                                                                 disabled. */
        uint64_t reserved_45_47        : 3;
        uint64_t tc_thr                : 12; /**< [ 59: 48](R/W) Time counter interrupt threshold for this guest group. Compared against
                                                                 SSO_LF_GGRP_INT_CNT[TC_CNT]. When this field is equal to zero,
                                                                 SSO_LF_GGRP_INT_CNT[TC_CNT] is zero. */
        uint64_t reserved_60_62        : 3;
        uint64_t tc_en                 : 1;  /**< [ 63: 63](R/W) Time counter interrupt enable for this guest group. This field must be zero
                                                                 when [TC_THR] is zero. */
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_lf_ggrp_int_thr_s cnf10ka; */
    /* struct cavm_sso_lf_ggrp_int_thr_s cnf10kb; */
};
typedef union cavm_sso_lf_ggrp_int_thr cavm_sso_lf_ggrp_int_thr_t;

#define CAVM_SSO_LF_GGRP_INT_THR CAVM_SSO_LF_GGRP_INT_THR_FUNC()
static inline uint64_t CAVM_SSO_LF_GGRP_INT_THR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_LF_GGRP_INT_THR_FUNC(void)
{
    return 0x840200700140ll;
}

#define typedef_CAVM_SSO_LF_GGRP_INT_THR cavm_sso_lf_ggrp_int_thr_t
#define bustype_CAVM_SSO_LF_GGRP_INT_THR CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSO_LF_GGRP_INT_THR "SSO_LF_GGRP_INT_THR"
#define device_bar_CAVM_SSO_LF_GGRP_INT_THR 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSO_LF_GGRP_INT_THR 0
#define arguments_CAVM_SSO_LF_GGRP_INT_THR -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) sso_lf_ggrp_int_w1s
 *
 * SSO LF Guest Group Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_sso_lf_ggrp_int_w1s
{
    uint64_t u;
    struct cavm_sso_lf_ggrp_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t xaq_limit             : 1;  /**< [  2:  2](R/W1S/H) Reads or sets SSO_LF_GGRP_INT[XAQ_LIMIT]. */
        uint64_t exe_int               : 1;  /**< [  1:  1](R/W1S/H) Reads or sets SSO_LF_GGRP_INT[EXE_INT]. */
        uint64_t aq_int                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets SSO_LF_GGRP_INT[AQ_INT]. */
#else /* Word 0 - Little Endian */
        uint64_t aq_int                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets SSO_LF_GGRP_INT[AQ_INT]. */
        uint64_t exe_int               : 1;  /**< [  1:  1](R/W1S/H) Reads or sets SSO_LF_GGRP_INT[EXE_INT]. */
        uint64_t xaq_limit             : 1;  /**< [  2:  2](R/W1S/H) Reads or sets SSO_LF_GGRP_INT[XAQ_LIMIT]. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_lf_ggrp_int_w1s_s cn; */
};
typedef union cavm_sso_lf_ggrp_int_w1s cavm_sso_lf_ggrp_int_w1s_t;

#define CAVM_SSO_LF_GGRP_INT_W1S CAVM_SSO_LF_GGRP_INT_W1S_FUNC()
static inline uint64_t CAVM_SSO_LF_GGRP_INT_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_LF_GGRP_INT_W1S_FUNC(void)
{
    return 0x840200700108ll;
}

#define typedef_CAVM_SSO_LF_GGRP_INT_W1S cavm_sso_lf_ggrp_int_w1s_t
#define bustype_CAVM_SSO_LF_GGRP_INT_W1S CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSO_LF_GGRP_INT_W1S "SSO_LF_GGRP_INT_W1S"
#define device_bar_CAVM_SSO_LF_GGRP_INT_W1S 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSO_LF_GGRP_INT_W1S 0
#define arguments_CAVM_SSO_LF_GGRP_INT_W1S -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) sso_lf_ggrp_misc_cnt
 *
 * SSO LF Guest Group Desched Pending Register
 */
union cavm_sso_lf_ggrp_misc_cnt
{
    uint64_t u;
    struct cavm_sso_lf_ggrp_misc_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_14_63        : 50;
        uint64_t ds_pend_sw            : 14; /**< [ 13:  0](R/W/H) Number of descheduled pending switches and descheduled pending LSW entries. */
#else /* Word 0 - Little Endian */
        uint64_t ds_pend_sw            : 14; /**< [ 13:  0](R/W/H) Number of descheduled pending switches and descheduled pending LSW entries. */
        uint64_t reserved_14_63        : 50;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_lf_ggrp_misc_cnt_s cn10; */
    /* struct cavm_sso_lf_ggrp_misc_cnt_s cn10ka; */
    struct cavm_sso_lf_ggrp_misc_cnt_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t ds_pend_sw            : 13; /**< [ 12:  0](R/W/H) Number of descheduled pending switches and descheduled pending LSW entries. */
#else /* Word 0 - Little Endian */
        uint64_t ds_pend_sw            : 13; /**< [ 12:  0](R/W/H) Number of descheduled pending switches and descheduled pending LSW entries. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_sso_lf_ggrp_misc_cnt_s cnf10ka; */
    /* struct cavm_sso_lf_ggrp_misc_cnt_s cnf10kb; */
};
typedef union cavm_sso_lf_ggrp_misc_cnt cavm_sso_lf_ggrp_misc_cnt_t;

#define CAVM_SSO_LF_GGRP_MISC_CNT CAVM_SSO_LF_GGRP_MISC_CNT_FUNC()
static inline uint64_t CAVM_SSO_LF_GGRP_MISC_CNT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_LF_GGRP_MISC_CNT_FUNC(void)
{
    return 0x840200700200ll;
}

#define typedef_CAVM_SSO_LF_GGRP_MISC_CNT cavm_sso_lf_ggrp_misc_cnt_t
#define bustype_CAVM_SSO_LF_GGRP_MISC_CNT CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSO_LF_GGRP_MISC_CNT "SSO_LF_GGRP_MISC_CNT"
#define device_bar_CAVM_SSO_LF_GGRP_MISC_CNT 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSO_LF_GGRP_MISC_CNT 0
#define arguments_CAVM_SSO_LF_GGRP_MISC_CNT -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) sso_lf_ggrp_op_add_work0
 *
 * SSO LF Guest Group Add Work Register 0
 * A single-transaction 128-bit store (STP) is used to SSO_LF_GGRP_OP_ADD_WORK0 and
 * SSO_LF_GGRP_OP_ADD_WORK1 to perform a single add work with both a tag and work
 * pointer.
 */
union cavm_sso_lf_ggrp_op_add_work0
{
    uint64_t u;
    struct cavm_sso_lf_ggrp_op_add_work0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_34_63        : 30;
        uint64_t tt                    : 2;  /**< [ 33: 32](WO) Tag type to add, enumerated by SSO_TT_E.  Must not be EMPTY. */
        uint64_t tag                   : 32; /**< [ 31:  0](WO) Tag of the work-queue entry, if [TT] is ATOMIC or ORDERED. */
#else /* Word 0 - Little Endian */
        uint64_t tag                   : 32; /**< [ 31:  0](WO) Tag of the work-queue entry, if [TT] is ATOMIC or ORDERED. */
        uint64_t tt                    : 2;  /**< [ 33: 32](WO) Tag type to add, enumerated by SSO_TT_E.  Must not be EMPTY. */
        uint64_t reserved_34_63        : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_lf_ggrp_op_add_work0_s cn; */
};
typedef union cavm_sso_lf_ggrp_op_add_work0 cavm_sso_lf_ggrp_op_add_work0_t;

#define CAVM_SSO_LF_GGRP_OP_ADD_WORK0 CAVM_SSO_LF_GGRP_OP_ADD_WORK0_FUNC()
static inline uint64_t CAVM_SSO_LF_GGRP_OP_ADD_WORK0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_LF_GGRP_OP_ADD_WORK0_FUNC(void)
{
    return 0x840200700000ll;
}

#define typedef_CAVM_SSO_LF_GGRP_OP_ADD_WORK0 cavm_sso_lf_ggrp_op_add_work0_t
#define bustype_CAVM_SSO_LF_GGRP_OP_ADD_WORK0 CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSO_LF_GGRP_OP_ADD_WORK0 "SSO_LF_GGRP_OP_ADD_WORK0"
#define device_bar_CAVM_SSO_LF_GGRP_OP_ADD_WORK0 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSO_LF_GGRP_OP_ADD_WORK0 0
#define arguments_CAVM_SSO_LF_GGRP_OP_ADD_WORK0 -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) sso_lf_ggrp_op_add_work1
 *
 * SSO LF Guest Group Add Work Register 1
 * See SSO_LF_GGRP_OP_ADD_WORK0.
 */
union cavm_sso_lf_ggrp_op_add_work1
{
    uint64_t u;
    struct cavm_sso_lf_ggrp_op_add_work1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wqp                   : 64; /**< [ 63:  0](WO) LF IOVA of the work-queue entry.  Bits \<63:53\> and \<2:0\> are ignored. */
#else /* Word 0 - Little Endian */
        uint64_t wqp                   : 64; /**< [ 63:  0](WO) LF IOVA of the work-queue entry.  Bits \<63:53\> and \<2:0\> are ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_lf_ggrp_op_add_work1_s cn; */
};
typedef union cavm_sso_lf_ggrp_op_add_work1 cavm_sso_lf_ggrp_op_add_work1_t;

#define CAVM_SSO_LF_GGRP_OP_ADD_WORK1 CAVM_SSO_LF_GGRP_OP_ADD_WORK1_FUNC()
static inline uint64_t CAVM_SSO_LF_GGRP_OP_ADD_WORK1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_LF_GGRP_OP_ADD_WORK1_FUNC(void)
{
    return 0x840200700008ll;
}

#define typedef_CAVM_SSO_LF_GGRP_OP_ADD_WORK1 cavm_sso_lf_ggrp_op_add_work1_t
#define bustype_CAVM_SSO_LF_GGRP_OP_ADD_WORK1 CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSO_LF_GGRP_OP_ADD_WORK1 "SSO_LF_GGRP_OP_ADD_WORK1"
#define device_bar_CAVM_SSO_LF_GGRP_OP_ADD_WORK1 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSO_LF_GGRP_OP_ADD_WORK1 0
#define arguments_CAVM_SSO_LF_GGRP_OP_ADD_WORK1 -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) sso_lf_ggrp_op_aw_lmtst#
 *
 * SSO LF Guest Group Desched Pending Register
 * A write to this register performs an add work.
 * *  This can only be accessed via NCB LMTST OP, and must be 1-8 words.
 */
union cavm_sso_lf_ggrp_op_aw_lmtstx
{
    uint64_t u;
    struct cavm_sso_lf_ggrp_op_aw_lmtstx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](WO) This must use the format specified in SSO_ADD_WORK_S. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](WO) This must use the format specified in SSO_ADD_WORK_S. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_lf_ggrp_op_aw_lmtstx_s cn; */
};
typedef union cavm_sso_lf_ggrp_op_aw_lmtstx cavm_sso_lf_ggrp_op_aw_lmtstx_t;

static inline uint64_t CAVM_SSO_LF_GGRP_OP_AW_LMTSTX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_LF_GGRP_OP_AW_LMTSTX(uint64_t a)
{
    if (a<=15)
        return 0x840200700400ll + 8ll * ((a) & 0xf);
    __cavm_csr_fatal("SSO_LF_GGRP_OP_AW_LMTSTX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_LF_GGRP_OP_AW_LMTSTX(a) cavm_sso_lf_ggrp_op_aw_lmtstx_t
#define bustype_CAVM_SSO_LF_GGRP_OP_AW_LMTSTX(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSO_LF_GGRP_OP_AW_LMTSTX(a) "SSO_LF_GGRP_OP_AW_LMTSTX"
#define device_bar_CAVM_SSO_LF_GGRP_OP_AW_LMTSTX(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSO_LF_GGRP_OP_AW_LMTSTX(a) (a)
#define arguments_CAVM_SSO_LF_GGRP_OP_AW_LMTSTX(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) sso_lf_ggrp_qctl
 *
 * SSO Admission Queue Control Register
 */
union cavm_sso_lf_ggrp_qctl
{
    uint64_t u;
    struct cavm_sso_lf_ggrp_qctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W/H) GGRP enable. If clear, add work is dropped.

                                                                 Cleared by hardware when SSO_AF_HWGRP()_XAQ_LIMIT[XAQ_LIMIT] \>=
                                                                 SSO_LF_GGRP_XAQ_CNT[XAQ_CNT]. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W/H) GGRP enable. If clear, add work is dropped.

                                                                 Cleared by hardware when SSO_AF_HWGRP()_XAQ_LIMIT[XAQ_LIMIT] \>=
                                                                 SSO_LF_GGRP_XAQ_CNT[XAQ_CNT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_lf_ggrp_qctl_s cn; */
};
typedef union cavm_sso_lf_ggrp_qctl cavm_sso_lf_ggrp_qctl_t;

#define CAVM_SSO_LF_GGRP_QCTL CAVM_SSO_LF_GGRP_QCTL_FUNC()
static inline uint64_t CAVM_SSO_LF_GGRP_QCTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_LF_GGRP_QCTL_FUNC(void)
{
    return 0x840200700020ll;
}

#define typedef_CAVM_SSO_LF_GGRP_QCTL cavm_sso_lf_ggrp_qctl_t
#define bustype_CAVM_SSO_LF_GGRP_QCTL CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSO_LF_GGRP_QCTL "SSO_LF_GGRP_QCTL"
#define device_bar_CAVM_SSO_LF_GGRP_QCTL 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSO_LF_GGRP_QCTL 0
#define arguments_CAVM_SSO_LF_GGRP_QCTL -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) sso_lf_ggrp_xaq_cnt
 *
 * SSO LF Guest Group External Queue Count Registers
 */
union cavm_sso_lf_ggrp_xaq_cnt
{
    uint64_t u;
    struct cavm_sso_lf_ggrp_xaq_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t xaq_cnt               : 33; /**< [ 32:  0](RO/H) Number of external admission queue entries for this guest group. */
#else /* Word 0 - Little Endian */
        uint64_t xaq_cnt               : 33; /**< [ 32:  0](RO/H) Number of external admission queue entries for this guest group. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_lf_ggrp_xaq_cnt_s cn; */
};
typedef union cavm_sso_lf_ggrp_xaq_cnt cavm_sso_lf_ggrp_xaq_cnt_t;

#define CAVM_SSO_LF_GGRP_XAQ_CNT CAVM_SSO_LF_GGRP_XAQ_CNT_FUNC()
static inline uint64_t CAVM_SSO_LF_GGRP_XAQ_CNT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_LF_GGRP_XAQ_CNT_FUNC(void)
{
    return 0x8402007001b0ll;
}

#define typedef_CAVM_SSO_LF_GGRP_XAQ_CNT cavm_sso_lf_ggrp_xaq_cnt_t
#define bustype_CAVM_SSO_LF_GGRP_XAQ_CNT CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSO_LF_GGRP_XAQ_CNT "SSO_LF_GGRP_XAQ_CNT"
#define device_bar_CAVM_SSO_LF_GGRP_XAQ_CNT 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSO_LF_GGRP_XAQ_CNT 0
#define arguments_CAVM_SSO_LF_GGRP_XAQ_CNT -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_priv_af_int_cfg
 *
 * SSO Privileged Admin Function Interrupt Configuration Register
 */
union cavm_sso_priv_af_int_cfg
{
    uint64_t u;
    struct cavm_sso_priv_af_int_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t msix_size             : 8;  /**< [ 19: 12](RO) Number of interrupt vectors enumerated by SSO_AF_INT_VEC_E. */
        uint64_t reserved_11           : 1;
        uint64_t msix_offset           : 11; /**< [ 10:  0](R/W) MSI-X offset. Offset of AF interrupt vectors enumerated by
                                                                 SSO_AF_INT_VEC_E in RVU PF(0)'s MSI-X table. This offset is added to each
                                                                 enumerated value to obtain the corresponding MSI-X vector index. The
                                                                 highest enumerated value plus [MSIX_OFFSET] must be less than or equal to
                                                                 RVU_PRIV_PF(0)_MSIX_CFG[PF_MSIXT_SIZEM1]. */
#else /* Word 0 - Little Endian */
        uint64_t msix_offset           : 11; /**< [ 10:  0](R/W) MSI-X offset. Offset of AF interrupt vectors enumerated by
                                                                 SSO_AF_INT_VEC_E in RVU PF(0)'s MSI-X table. This offset is added to each
                                                                 enumerated value to obtain the corresponding MSI-X vector index. The
                                                                 highest enumerated value plus [MSIX_OFFSET] must be less than or equal to
                                                                 RVU_PRIV_PF(0)_MSIX_CFG[PF_MSIXT_SIZEM1]. */
        uint64_t reserved_11           : 1;
        uint64_t msix_size             : 8;  /**< [ 19: 12](RO) Number of interrupt vectors enumerated by SSO_AF_INT_VEC_E. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_priv_af_int_cfg_s cn; */
};
typedef union cavm_sso_priv_af_int_cfg cavm_sso_priv_af_int_cfg_t;

#define CAVM_SSO_PRIV_AF_INT_CFG CAVM_SSO_PRIV_AF_INT_CFG_FUNC()
static inline uint64_t CAVM_SSO_PRIV_AF_INT_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_PRIV_AF_INT_CFG_FUNC(void)
{
    return 0x840070003000ll;
}

#define typedef_CAVM_SSO_PRIV_AF_INT_CFG cavm_sso_priv_af_int_cfg_t
#define bustype_CAVM_SSO_PRIV_AF_INT_CFG CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_PRIV_AF_INT_CFG "SSO_PRIV_AF_INT_CFG"
#define device_bar_CAVM_SSO_PRIV_AF_INT_CFG 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_PRIV_AF_INT_CFG 0
#define arguments_CAVM_SSO_PRIV_AF_INT_CFG -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_priv_lf#_hwgrp_cfg
 *
 * SSO Privileged Local Function Configuration Registers
 */
union cavm_sso_priv_lfx_hwgrp_cfg
{
    uint64_t u;
    struct cavm_sso_priv_lfx_hwgrp_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ena                   : 1;  /**< [ 63: 63](R/W) Enable. When set, the LF is enabled and provisioned to the VF/PF slot
                                                                 selected by [PF_FUNC] and [SLOT]. When clear, the LF is not provisioned.

                                                                 LF to slot mapping must be 1-to-1. Thus, each enabled LF must be provisioned
                                                                 to a unique {[PF_FUNC], [SLOT]} combination. */
        uint64_t reserved_24_62        : 39;
        uint64_t pf_func               : 16; /**< [ 23:  8](R/W) RVU VF/PF to which the LF is provisioned. Format defined by RVU_PF_FUNC_S.
                                                                 Interrupts from the LF are delivered to the selected PF/VF. */
        uint64_t slot                  : 8;  /**< [  7:  0](R/W) Slot within the VF/PF selected by [PF_FUNC] to which the LF is
                                                                 provisioned. */
#else /* Word 0 - Little Endian */
        uint64_t slot                  : 8;  /**< [  7:  0](R/W) Slot within the VF/PF selected by [PF_FUNC] to which the LF is
                                                                 provisioned. */
        uint64_t pf_func               : 16; /**< [ 23:  8](R/W) RVU VF/PF to which the LF is provisioned. Format defined by RVU_PF_FUNC_S.
                                                                 Interrupts from the LF are delivered to the selected PF/VF. */
        uint64_t reserved_24_62        : 39;
        uint64_t ena                   : 1;  /**< [ 63: 63](R/W) Enable. When set, the LF is enabled and provisioned to the VF/PF slot
                                                                 selected by [PF_FUNC] and [SLOT]. When clear, the LF is not provisioned.

                                                                 LF to slot mapping must be 1-to-1. Thus, each enabled LF must be provisioned
                                                                 to a unique {[PF_FUNC], [SLOT]} combination. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_priv_lfx_hwgrp_cfg_s cn; */
};
typedef union cavm_sso_priv_lfx_hwgrp_cfg cavm_sso_priv_lfx_hwgrp_cfg_t;

static inline uint64_t CAVM_SSO_PRIV_LFX_HWGRP_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_PRIV_LFX_HWGRP_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x840070010000ll + 8ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x840070010000ll + 8ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x840070010000ll + 8ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x840070010000ll + 8ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_PRIV_LFX_HWGRP_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_PRIV_LFX_HWGRP_CFG(a) cavm_sso_priv_lfx_hwgrp_cfg_t
#define bustype_CAVM_SSO_PRIV_LFX_HWGRP_CFG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_PRIV_LFX_HWGRP_CFG(a) "SSO_PRIV_LFX_HWGRP_CFG"
#define device_bar_CAVM_SSO_PRIV_LFX_HWGRP_CFG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_PRIV_LFX_HWGRP_CFG(a) (a)
#define arguments_CAVM_SSO_PRIV_LFX_HWGRP_CFG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) sso_priv_lf#_hwgrp_int_cfg
 *
 * SSO Privileged Local Function Interrupt Configuration Registers
 */
union cavm_sso_priv_lfx_hwgrp_int_cfg
{
    uint64_t u;
    struct cavm_sso_priv_lfx_hwgrp_int_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t msix_size             : 8;  /**< [ 19: 12](RO) Number of interrupt vectors enumerated by SSO_LF_INT_VEC_E. */
        uint64_t reserved_11           : 1;
        uint64_t msix_offset           : 11; /**< [ 10:  0](R/W) MSI-X offset. Offset of LF interrupt vectors enumerated by the block's
                                                                 SSO_LF_INT_VEC_E in the MSI-X table of the corresponding RVU VF/PF (see
                                                                 SSO_PRIV_LF()_HWGRP_CFG[PF_FUNC]). This offset is added to each enumerated value
                                                                 to obtain the corresponding MSI-X vector index. The highest enumerated
                                                                 value plus [MSIX_OFFSET] must be less than or equal to
                                                                 RVU_PRIV_PF()_MSIX_CFG[PF_MSIXT_SIZEM1,VF_MSIXT_SIZEM1]. */
#else /* Word 0 - Little Endian */
        uint64_t msix_offset           : 11; /**< [ 10:  0](R/W) MSI-X offset. Offset of LF interrupt vectors enumerated by the block's
                                                                 SSO_LF_INT_VEC_E in the MSI-X table of the corresponding RVU VF/PF (see
                                                                 SSO_PRIV_LF()_HWGRP_CFG[PF_FUNC]). This offset is added to each enumerated value
                                                                 to obtain the corresponding MSI-X vector index. The highest enumerated
                                                                 value plus [MSIX_OFFSET] must be less than or equal to
                                                                 RVU_PRIV_PF()_MSIX_CFG[PF_MSIXT_SIZEM1,VF_MSIXT_SIZEM1]. */
        uint64_t reserved_11           : 1;
        uint64_t msix_size             : 8;  /**< [ 19: 12](RO) Number of interrupt vectors enumerated by SSO_LF_INT_VEC_E. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sso_priv_lfx_hwgrp_int_cfg_s cn; */
};
typedef union cavm_sso_priv_lfx_hwgrp_int_cfg cavm_sso_priv_lfx_hwgrp_int_cfg_t;

static inline uint64_t CAVM_SSO_PRIV_LFX_HWGRP_INT_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSO_PRIV_LFX_HWGRP_INT_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=255))
        return 0x840070020000ll + 8ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x840070020000ll + 8ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x840070020000ll + 8ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x840070020000ll + 8ll * ((a) & 0xff);
    __cavm_csr_fatal("SSO_PRIV_LFX_HWGRP_INT_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSO_PRIV_LFX_HWGRP_INT_CFG(a) cavm_sso_priv_lfx_hwgrp_int_cfg_t
#define bustype_CAVM_SSO_PRIV_LFX_HWGRP_INT_CFG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSO_PRIV_LFX_HWGRP_INT_CFG(a) "SSO_PRIV_LFX_HWGRP_INT_CFG"
#define device_bar_CAVM_SSO_PRIV_LFX_HWGRP_INT_CFG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSO_PRIV_LFX_HWGRP_INT_CFG(a) (a)
#define arguments_CAVM_SSO_PRIV_LFX_HWGRP_INT_CFG(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_SSO_H__ */
