#ifndef __CAVM_CSRS_PSBS_H__
#define __CAVM_CSRS_PSBS_H__
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
 * OcteonTX PSBS.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration psbs_bar_e
 *
 * PSBS Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_PSBS_BAR_E_PSBS_PF_BAR2 (0x87e0df000000ll)
#define CAVM_PSBS_BAR_E_PSBS_PF_BAR2_SIZE 0x1000000ull

/**
 * Register (RSL) psbs_ap#_accum#
 *
 * PSB Slave AP Event Accumulator Data Register
 */
union cavm_psbs_apx_accumx
{
    uint64_t u;
    struct cavm_psbs_apx_accumx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t sum                   : 32; /**< [ 31:  0](R/W/H) Current live accumulator sum value. Writing will overwrite the calculated value. */
#else /* Word 0 - Little Endian */
        uint64_t sum                   : 32; /**< [ 31:  0](R/W/H) Current live accumulator sum value. Writing will overwrite the calculated value. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psbs_apx_accumx_s cn; */
};
typedef union cavm_psbs_apx_accumx cavm_psbs_apx_accumx_t;

static inline uint64_t CAVM_PSBS_APX_ACCUMX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSBS_APX_ACCUMX(uint64_t a, uint64_t b)
{
    if ((a<=26) && (b<=3))
        return 0x87e0df000600ll + 0x10000ll * ((a) & 0x1f) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("PSBS_APX_ACCUMX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PSBS_APX_ACCUMX(a,b) cavm_psbs_apx_accumx_t
#define bustype_CAVM_PSBS_APX_ACCUMX(a,b) CSR_TYPE_RSL
#define basename_CAVM_PSBS_APX_ACCUMX(a,b) "PSBS_APX_ACCUMX"
#define device_bar_CAVM_PSBS_APX_ACCUMX(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_PSBS_APX_ACCUMX(a,b) (a)
#define arguments_CAVM_PSBS_APX_ACCUMX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) psbs_ap#_accum#_sel
 *
 * PSB Slave AP Accumulator Event Select Register
 */
union cavm_psbs_apx_accumx_sel
{
    uint64_t u;
    struct cavm_psbs_apx_accumx_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t sel                   : 16; /**< [ 15:  0](R/W) Selects an event for input into each of the accumulators.
                                                                 For AP slaves, enumerated by AP_PSB_ACCUM_SEL_E. */
#else /* Word 0 - Little Endian */
        uint64_t sel                   : 16; /**< [ 15:  0](R/W) Selects an event for input into each of the accumulators.
                                                                 For AP slaves, enumerated by AP_PSB_ACCUM_SEL_E. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psbs_apx_accumx_sel_s cn; */
};
typedef union cavm_psbs_apx_accumx_sel cavm_psbs_apx_accumx_sel_t;

static inline uint64_t CAVM_PSBS_APX_ACCUMX_SEL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSBS_APX_ACCUMX_SEL(uint64_t a, uint64_t b)
{
    if ((a<=26) && (b<=3))
        return 0x87e0df000400ll + 0x10000ll * ((a) & 0x1f) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("PSBS_APX_ACCUMX_SEL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PSBS_APX_ACCUMX_SEL(a,b) cavm_psbs_apx_accumx_sel_t
#define bustype_CAVM_PSBS_APX_ACCUMX_SEL(a,b) CSR_TYPE_RSL
#define basename_CAVM_PSBS_APX_ACCUMX_SEL(a,b) "PSBS_APX_ACCUMX_SEL"
#define device_bar_CAVM_PSBS_APX_ACCUMX_SEL(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_PSBS_APX_ACCUMX_SEL(a,b) (a)
#define arguments_CAVM_PSBS_APX_ACCUMX_SEL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) psbs_ap#_activity
 *
 * PSB Slave AP Activity Sum Data Register
 */
union cavm_psbs_apx_activity
{
    uint64_t u;
    struct cavm_psbs_apx_activity_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sum                   : 64; /**< [ 63:  0](R/W/H) Current live activity CPA sum value. Write will overwrite the calculated value. */
#else /* Word 0 - Little Endian */
        uint64_t sum                   : 64; /**< [ 63:  0](R/W/H) Current live activity CPA sum value. Write will overwrite the calculated value. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psbs_apx_activity_s cn; */
};
typedef union cavm_psbs_apx_activity cavm_psbs_apx_activity_t;

static inline uint64_t CAVM_PSBS_APX_ACTIVITY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSBS_APX_ACTIVITY(uint64_t a)
{
    if (a<=26)
        return 0x87e0df000620ll + 0x10000ll * ((a) & 0x1f);
    __cavm_csr_fatal("PSBS_APX_ACTIVITY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSBS_APX_ACTIVITY(a) cavm_psbs_apx_activity_t
#define bustype_CAVM_PSBS_APX_ACTIVITY(a) CSR_TYPE_RSL
#define basename_CAVM_PSBS_APX_ACTIVITY(a) "PSBS_APX_ACTIVITY"
#define device_bar_CAVM_PSBS_APX_ACTIVITY(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_PSBS_APX_ACTIVITY(a) (a)
#define arguments_CAVM_PSBS_APX_ACTIVITY(a) (a),-1,-1,-1

/**
 * Register (RSL) psbs_ap#_cfg
 *
 * PSB Slave AP Configuration Register
 */
union cavm_psbs_apx_cfg
{
    uint64_t u;
    struct cavm_psbs_apx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t force_wakeup          : 1;  /**< [  0:  0](WO) When written with one, force trigger a PSBS wakeup event. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t force_wakeup          : 1;  /**< [  0:  0](WO) When written with one, force trigger a PSBS wakeup event. For diagnostic use only. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psbs_apx_cfg_s cn; */
};
typedef union cavm_psbs_apx_cfg cavm_psbs_apx_cfg_t;

static inline uint64_t CAVM_PSBS_APX_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSBS_APX_CFG(uint64_t a)
{
    if (a<=26)
        return 0x87e0df000000ll + 0x10000ll * ((a) & 0x1f);
    __cavm_csr_fatal("PSBS_APX_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSBS_APX_CFG(a) cavm_psbs_apx_cfg_t
#define bustype_CAVM_PSBS_APX_CFG(a) CSR_TYPE_RSL
#define basename_CAVM_PSBS_APX_CFG(a) "PSBS_APX_CFG"
#define device_bar_CAVM_PSBS_APX_CFG(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_PSBS_APX_CFG(a) (a)
#define arguments_CAVM_PSBS_APX_CFG(a) (a),-1,-1,-1

/**
 * Register (RSL) psbs_ap#_const
 *
 * PSB Slave AP Constants Register
 */
union cavm_psbs_apx_const
{
    uint64_t u;
    struct cavm_psbs_apx_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t events                : 16; /**< [ 31: 16](RO) Maximum number of events in activity CSA tree. */
        uint64_t accum                 : 16; /**< [ 15:  0](RO) Number of 32-bit accumulator values in each AP slave. */
#else /* Word 0 - Little Endian */
        uint64_t accum                 : 16; /**< [ 15:  0](RO) Number of 32-bit accumulator values in each AP slave. */
        uint64_t events                : 16; /**< [ 31: 16](RO) Maximum number of events in activity CSA tree. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psbs_apx_const_s cn; */
};
typedef union cavm_psbs_apx_const cavm_psbs_apx_const_t;

static inline uint64_t CAVM_PSBS_APX_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSBS_APX_CONST(uint64_t a)
{
    if (a<=26)
        return 0x87e0df000008ll + 0x10000ll * ((a) & 0x1f);
    __cavm_csr_fatal("PSBS_APX_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSBS_APX_CONST(a) cavm_psbs_apx_const_t
#define bustype_CAVM_PSBS_APX_CONST(a) CSR_TYPE_RSL
#define basename_CAVM_PSBS_APX_CONST(a) "PSBS_APX_CONST"
#define device_bar_CAVM_PSBS_APX_CONST(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_PSBS_APX_CONST(a) (a)
#define arguments_CAVM_PSBS_APX_CONST(a) (a),-1,-1,-1

/**
 * Register (RSL) psbs_ap#_event#_cfg
 *
 * PSB Slave AP Events Configuration Register
 * Index {b} is enumerated by AP_PSB_EVENT_E.
 */
union cavm_psbs_apx_eventx_cfg
{
    uint64_t u;
    struct cavm_psbs_apx_eventx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t wakeup_en             : 1;  /**< [ 16: 16](R/W) When set, enables the corresponding event number input assertion to assert the
                                                                 PSBS wakeup trigger interrupt. */
        uint64_t reserved_8_15         : 8;
        uint64_t weight                : 8;  /**< [  7:  0](R/W) Carry-save-adder weight for this event. The reset values are determined by
                                                                 block-specific estimates of typical weights, and for APs are in units of mA/GHz
                                                                 at 0.9V VDD_CORE. The field value is decoded using:

                                                                 _ expanded\<9:0\> = ([WEIGHT]\<5:0\> \<\< [WEIGHT]\<7:6\>)
                                                                    + { & [WEIGHT]\<7:6\>, [WEIGHT]\<7\>, | [WEIGHT]\<7:6\>, 6'b0};

                                                                 0x0 = Zero weight.
                                                                 0x1 = Weight 0x1.
                                                                 _ ...
                                                                 0x3E = Weight 0x3E.
                                                                 0x3F = Weight 0x3F.
                                                                 0x40 = Weight 0x40.
                                                                 0x41 = Weight 0x42.
                                                                 _ ...
                                                                 0x7E = Weight 0xBC.
                                                                 0x7F = Weight 0xBE.
                                                                 0x80 = Weight 0xC0.
                                                                 0x81 = Weight 0xC4.
                                                                 _ etc. */
#else /* Word 0 - Little Endian */
        uint64_t weight                : 8;  /**< [  7:  0](R/W) Carry-save-adder weight for this event. The reset values are determined by
                                                                 block-specific estimates of typical weights, and for APs are in units of mA/GHz
                                                                 at 0.9V VDD_CORE. The field value is decoded using:

                                                                 _ expanded\<9:0\> = ([WEIGHT]\<5:0\> \<\< [WEIGHT]\<7:6\>)
                                                                    + { & [WEIGHT]\<7:6\>, [WEIGHT]\<7\>, | [WEIGHT]\<7:6\>, 6'b0};

                                                                 0x0 = Zero weight.
                                                                 0x1 = Weight 0x1.
                                                                 _ ...
                                                                 0x3E = Weight 0x3E.
                                                                 0x3F = Weight 0x3F.
                                                                 0x40 = Weight 0x40.
                                                                 0x41 = Weight 0x42.
                                                                 _ ...
                                                                 0x7E = Weight 0xBC.
                                                                 0x7F = Weight 0xBE.
                                                                 0x80 = Weight 0xC0.
                                                                 0x81 = Weight 0xC4.
                                                                 _ etc. */
        uint64_t reserved_8_15         : 8;
        uint64_t wakeup_en             : 1;  /**< [ 16: 16](R/W) When set, enables the corresponding event number input assertion to assert the
                                                                 PSBS wakeup trigger interrupt. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psbs_apx_eventx_cfg_s cn; */
};
typedef union cavm_psbs_apx_eventx_cfg cavm_psbs_apx_eventx_cfg_t;

static inline uint64_t CAVM_PSBS_APX_EVENTX_CFG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSBS_APX_EVENTX_CFG(uint64_t a, uint64_t b)
{
    if ((a<=26) && (b<=63))
        return 0x87e0df000200ll + 0x10000ll * ((a) & 0x1f) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("PSBS_APX_EVENTX_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PSBS_APX_EVENTX_CFG(a,b) cavm_psbs_apx_eventx_cfg_t
#define bustype_CAVM_PSBS_APX_EVENTX_CFG(a,b) CSR_TYPE_RSL
#define basename_CAVM_PSBS_APX_EVENTX_CFG(a,b) "PSBS_APX_EVENTX_CFG"
#define device_bar_CAVM_PSBS_APX_EVENTX_CFG(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_PSBS_APX_EVENTX_CFG(a,b) (a)
#define arguments_CAVM_PSBS_APX_EVENTX_CFG(a,b) (a),(b),-1,-1

/**
 * Register (RSL) psbs_ap#_throttle
 *
 * PSB Slave AP Throttle Config Register
 */
union cavm_psbs_apx_throttle
{
    uint64_t u;
    struct cavm_psbs_apx_throttle_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t target                : 16; /**< [ 15:  0](R/W) Throttle target value used by AP throttle logic. */
#else /* Word 0 - Little Endian */
        uint64_t target                : 16; /**< [ 15:  0](R/W) Throttle target value used by AP throttle logic. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psbs_apx_throttle_s cn; */
};
typedef union cavm_psbs_apx_throttle cavm_psbs_apx_throttle_t;

static inline uint64_t CAVM_PSBS_APX_THROTTLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSBS_APX_THROTTLE(uint64_t a)
{
    if (a<=26)
        return 0x87e0df000630ll + 0x10000ll * ((a) & 0x1f);
    __cavm_csr_fatal("PSBS_APX_THROTTLE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSBS_APX_THROTTLE(a) cavm_psbs_apx_throttle_t
#define bustype_CAVM_PSBS_APX_THROTTLE(a) CSR_TYPE_RSL
#define basename_CAVM_PSBS_APX_THROTTLE(a) "PSBS_APX_THROTTLE"
#define device_bar_CAVM_PSBS_APX_THROTTLE(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_PSBS_APX_THROTTLE(a) (a)
#define arguments_CAVM_PSBS_APX_THROTTLE(a) (a),-1,-1,-1

/**
 * Register (RSL) psbs_sys#_accum#
 *
 * PSB Slave SYS Event Accumulator Data Register
 */
union cavm_psbs_sysx_accumx
{
    uint64_t u;
    struct cavm_psbs_sysx_accumx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t sum                   : 32; /**< [ 31:  0](R/W/H) Current live accumulator sum value. Writing will overwrite the calculated value. */
#else /* Word 0 - Little Endian */
        uint64_t sum                   : 32; /**< [ 31:  0](R/W/H) Current live accumulator sum value. Writing will overwrite the calculated value. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psbs_sysx_accumx_s cn; */
};
typedef union cavm_psbs_sysx_accumx cavm_psbs_sysx_accumx_t;

static inline uint64_t CAVM_PSBS_SYSX_ACCUMX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSBS_SYSX_ACCUMX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=11) && (b<=3)))
        return 0x87e0df800600ll + 0x10000ll * ((a) & 0xf) + 8ll * ((b) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=11) && (b<=3)))
        return 0x87e0df800600ll + 0x10000ll * ((a) & 0xf) + 8ll * ((b) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=14) && (b<=3)))
        return 0x87e0df800600ll + 0x10000ll * ((a) & 0xf) + 8ll * ((b) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=14) && (b<=3)))
        return 0x87e0df800600ll + 0x10000ll * ((a) & 0xf) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("PSBS_SYSX_ACCUMX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PSBS_SYSX_ACCUMX(a,b) cavm_psbs_sysx_accumx_t
#define bustype_CAVM_PSBS_SYSX_ACCUMX(a,b) CSR_TYPE_RSL
#define basename_CAVM_PSBS_SYSX_ACCUMX(a,b) "PSBS_SYSX_ACCUMX"
#define device_bar_CAVM_PSBS_SYSX_ACCUMX(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_PSBS_SYSX_ACCUMX(a,b) (a)
#define arguments_CAVM_PSBS_SYSX_ACCUMX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) psbs_sys#_accum#_sel
 *
 * PSB Slave System Accumulator Select Register
 * Index {b} is enumerated by the appropriate slaves' accumulator enumeration:
 * GSERN_PSB_ACC_E, IOBN_PSB_ACC_E, LMC_PSB_ACC_E, CPT_PSB_ACC_E.
 */
union cavm_psbs_sysx_accumx_sel
{
    uint64_t u;
    struct cavm_psbs_sysx_accumx_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t sel                   : 16; /**< [ 15:  0](R/W) Selects an event for input into each of the accumulators. */
#else /* Word 0 - Little Endian */
        uint64_t sel                   : 16; /**< [ 15:  0](R/W) Selects an event for input into each of the accumulators. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psbs_sysx_accumx_sel_s cn; */
};
typedef union cavm_psbs_sysx_accumx_sel cavm_psbs_sysx_accumx_sel_t;

static inline uint64_t CAVM_PSBS_SYSX_ACCUMX_SEL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSBS_SYSX_ACCUMX_SEL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=11) && (b<=3)))
        return 0x87e0df800400ll + 0x10000ll * ((a) & 0xf) + 8ll * ((b) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=11) && (b<=3)))
        return 0x87e0df800400ll + 0x10000ll * ((a) & 0xf) + 8ll * ((b) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=14) && (b<=3)))
        return 0x87e0df800400ll + 0x10000ll * ((a) & 0xf) + 8ll * ((b) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=14) && (b<=3)))
        return 0x87e0df800400ll + 0x10000ll * ((a) & 0xf) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("PSBS_SYSX_ACCUMX_SEL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PSBS_SYSX_ACCUMX_SEL(a,b) cavm_psbs_sysx_accumx_sel_t
#define bustype_CAVM_PSBS_SYSX_ACCUMX_SEL(a,b) CSR_TYPE_RSL
#define basename_CAVM_PSBS_SYSX_ACCUMX_SEL(a,b) "PSBS_SYSX_ACCUMX_SEL"
#define device_bar_CAVM_PSBS_SYSX_ACCUMX_SEL(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_PSBS_SYSX_ACCUMX_SEL(a,b) (a)
#define arguments_CAVM_PSBS_SYSX_ACCUMX_SEL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) psbs_sys#_activity
 *
 * PSB Slave SYS Activity Sum Data Register
 */
union cavm_psbs_sysx_activity
{
    uint64_t u;
    struct cavm_psbs_sysx_activity_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sum                   : 64; /**< [ 63:  0](R/W/H) Current live activity CPA sum value. Write will overwrite the calculated value. */
#else /* Word 0 - Little Endian */
        uint64_t sum                   : 64; /**< [ 63:  0](R/W/H) Current live activity CPA sum value. Write will overwrite the calculated value. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psbs_sysx_activity_s cn; */
};
typedef union cavm_psbs_sysx_activity cavm_psbs_sysx_activity_t;

static inline uint64_t CAVM_PSBS_SYSX_ACTIVITY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSBS_SYSX_ACTIVITY(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=11))
        return 0x87e0df800620ll + 0x10000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=11))
        return 0x87e0df800620ll + 0x10000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=14))
        return 0x87e0df800620ll + 0x10000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=14))
        return 0x87e0df800620ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("PSBS_SYSX_ACTIVITY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSBS_SYSX_ACTIVITY(a) cavm_psbs_sysx_activity_t
#define bustype_CAVM_PSBS_SYSX_ACTIVITY(a) CSR_TYPE_RSL
#define basename_CAVM_PSBS_SYSX_ACTIVITY(a) "PSBS_SYSX_ACTIVITY"
#define device_bar_CAVM_PSBS_SYSX_ACTIVITY(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_PSBS_SYSX_ACTIVITY(a) (a)
#define arguments_CAVM_PSBS_SYSX_ACTIVITY(a) (a),-1,-1,-1

/**
 * Register (RSL) psbs_sys#_cfg
 *
 * PSB Slave System Configuration Register
 */
union cavm_psbs_sysx_cfg
{
    uint64_t u;
    struct cavm_psbs_sysx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t force_wakeup          : 1;  /**< [  0:  0](WO) When written with one, force trigger a PSBS wakeup event. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t force_wakeup          : 1;  /**< [  0:  0](WO) When written with one, force trigger a PSBS wakeup event. For diagnostic use only. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psbs_sysx_cfg_s cn; */
};
typedef union cavm_psbs_sysx_cfg cavm_psbs_sysx_cfg_t;

static inline uint64_t CAVM_PSBS_SYSX_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSBS_SYSX_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=11))
        return 0x87e0df800000ll + 0x10000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=11))
        return 0x87e0df800000ll + 0x10000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=14))
        return 0x87e0df800000ll + 0x10000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=14))
        return 0x87e0df800000ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("PSBS_SYSX_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSBS_SYSX_CFG(a) cavm_psbs_sysx_cfg_t
#define bustype_CAVM_PSBS_SYSX_CFG(a) CSR_TYPE_RSL
#define basename_CAVM_PSBS_SYSX_CFG(a) "PSBS_SYSX_CFG"
#define device_bar_CAVM_PSBS_SYSX_CFG(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_PSBS_SYSX_CFG(a) (a)
#define arguments_CAVM_PSBS_SYSX_CFG(a) (a),-1,-1,-1

/**
 * Register (RSL) psbs_sys#_const
 *
 * PSB Slave System Constants Register
 */
union cavm_psbs_sysx_const
{
    uint64_t u;
    struct cavm_psbs_sysx_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t events                : 16; /**< [ 31: 16](RO) Maximum number of events in activity CSA tree. */
        uint64_t accum                 : 16; /**< [ 15:  0](RO) Number of 32-bit accumulator values in each SYS slave. */
#else /* Word 0 - Little Endian */
        uint64_t accum                 : 16; /**< [ 15:  0](RO) Number of 32-bit accumulator values in each SYS slave. */
        uint64_t events                : 16; /**< [ 31: 16](RO) Maximum number of events in activity CSA tree. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psbs_sysx_const_s cn; */
};
typedef union cavm_psbs_sysx_const cavm_psbs_sysx_const_t;

static inline uint64_t CAVM_PSBS_SYSX_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSBS_SYSX_CONST(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=11))
        return 0x87e0df800008ll + 0x10000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=11))
        return 0x87e0df800008ll + 0x10000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=14))
        return 0x87e0df800008ll + 0x10000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=14))
        return 0x87e0df800008ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("PSBS_SYSX_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSBS_SYSX_CONST(a) cavm_psbs_sysx_const_t
#define bustype_CAVM_PSBS_SYSX_CONST(a) CSR_TYPE_RSL
#define basename_CAVM_PSBS_SYSX_CONST(a) "PSBS_SYSX_CONST"
#define device_bar_CAVM_PSBS_SYSX_CONST(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_PSBS_SYSX_CONST(a) (a)
#define arguments_CAVM_PSBS_SYSX_CONST(a) (a),-1,-1,-1

/**
 * Register (RSL) psbs_sys#_event#_cfg
 *
 * PSB Slave System Events Configuration Register
 * Index {b} is enumerated by the appropriate slaves' event enumeration:
 * GSERN_PSB_EVENT_E, IOBN_PSB_EVENT_E, LMC_PSB_EVENT_E, CPT_PSB_EVENT_E.
 */
union cavm_psbs_sysx_eventx_cfg
{
    uint64_t u;
    struct cavm_psbs_sysx_eventx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t wakeup_en             : 1;  /**< [ 16: 16](R/W) When set, enables the corresponding event number input assertion to assert the
                                                                 PSBS wakeup trigger interrupt. */
        uint64_t reserved_8_15         : 8;
        uint64_t weight                : 8;  /**< [  7:  0](R/W) Carry-save-adder weight for this event. The reset values are determined by
                                                                 block-specific estimates of typical weights, and are in units of mA/GHz
                                                                 at 0.9V VDD_CORE. The field value is decoded using:

                                                                 _ expanded\<9:0\> = ([WEIGHT]\<5:0\> \<\< [WEIGHT]\<7:6\>)
                                                                    + { & [WEIGHT]\<7:6\>, [WEIGHT]\<7\>, | [WEIGHT]\<7:6\>, 6'b0};

                                                                 0x0 = Zero weight.
                                                                 0x1 = Weight 0x1.
                                                                 _ ...
                                                                 0x3E = Weight 0x3E.
                                                                 0x3F = Weight 0x3F.
                                                                 0x40 = Weight 0x40.
                                                                 0x41 = Weight 0x42.
                                                                 _ ...
                                                                 0x7E = Weight 0xBC.
                                                                 0x7F = Weight 0xBE.
                                                                 0x80 = Weight 0xC0.
                                                                 0x81 = Weight 0xC4.
                                                                 _ etc. */
#else /* Word 0 - Little Endian */
        uint64_t weight                : 8;  /**< [  7:  0](R/W) Carry-save-adder weight for this event. The reset values are determined by
                                                                 block-specific estimates of typical weights, and are in units of mA/GHz
                                                                 at 0.9V VDD_CORE. The field value is decoded using:

                                                                 _ expanded\<9:0\> = ([WEIGHT]\<5:0\> \<\< [WEIGHT]\<7:6\>)
                                                                    + { & [WEIGHT]\<7:6\>, [WEIGHT]\<7\>, | [WEIGHT]\<7:6\>, 6'b0};

                                                                 0x0 = Zero weight.
                                                                 0x1 = Weight 0x1.
                                                                 _ ...
                                                                 0x3E = Weight 0x3E.
                                                                 0x3F = Weight 0x3F.
                                                                 0x40 = Weight 0x40.
                                                                 0x41 = Weight 0x42.
                                                                 _ ...
                                                                 0x7E = Weight 0xBC.
                                                                 0x7F = Weight 0xBE.
                                                                 0x80 = Weight 0xC0.
                                                                 0x81 = Weight 0xC4.
                                                                 _ etc. */
        uint64_t reserved_8_15         : 8;
        uint64_t wakeup_en             : 1;  /**< [ 16: 16](R/W) When set, enables the corresponding event number input assertion to assert the
                                                                 PSBS wakeup trigger interrupt. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psbs_sysx_eventx_cfg_s cn; */
};
typedef union cavm_psbs_sysx_eventx_cfg cavm_psbs_sysx_eventx_cfg_t;

static inline uint64_t CAVM_PSBS_SYSX_EVENTX_CFG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSBS_SYSX_EVENTX_CFG(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=11) && (b<=63)))
        return 0x87e0df800200ll + 0x10000ll * ((a) & 0xf) + 8ll * ((b) & 0x3f);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=11) && (b<=63)))
        return 0x87e0df800200ll + 0x10000ll * ((a) & 0xf) + 8ll * ((b) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=14) && (b<=63)))
        return 0x87e0df800200ll + 0x10000ll * ((a) & 0xf) + 8ll * ((b) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=14) && (b<=63)))
        return 0x87e0df800200ll + 0x10000ll * ((a) & 0xf) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("PSBS_SYSX_EVENTX_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PSBS_SYSX_EVENTX_CFG(a,b) cavm_psbs_sysx_eventx_cfg_t
#define bustype_CAVM_PSBS_SYSX_EVENTX_CFG(a,b) CSR_TYPE_RSL
#define basename_CAVM_PSBS_SYSX_EVENTX_CFG(a,b) "PSBS_SYSX_EVENTX_CFG"
#define device_bar_CAVM_PSBS_SYSX_EVENTX_CFG(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_PSBS_SYSX_EVENTX_CFG(a,b) (a)
#define arguments_CAVM_PSBS_SYSX_EVENTX_CFG(a,b) (a),(b),-1,-1

/**
 * Register (RSL) psbs_sys#_throttle
 *
 * PSB Slave SYS Throttle Config Register
 */
union cavm_psbs_sysx_throttle
{
    uint64_t u;
    struct cavm_psbs_sysx_throttle_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t target                : 16; /**< [ 15:  0](R/W) Throttle target value used by throttle logic. */
#else /* Word 0 - Little Endian */
        uint64_t target                : 16; /**< [ 15:  0](R/W) Throttle target value used by throttle logic. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psbs_sysx_throttle_s cn; */
};
typedef union cavm_psbs_sysx_throttle cavm_psbs_sysx_throttle_t;

static inline uint64_t CAVM_PSBS_SYSX_THROTTLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSBS_SYSX_THROTTLE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=11))
        return 0x87e0df800630ll + 0x10000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=11))
        return 0x87e0df800630ll + 0x10000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=14))
        return 0x87e0df800630ll + 0x10000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=14))
        return 0x87e0df800630ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("PSBS_SYSX_THROTTLE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSBS_SYSX_THROTTLE(a) cavm_psbs_sysx_throttle_t
#define bustype_CAVM_PSBS_SYSX_THROTTLE(a) CSR_TYPE_RSL
#define basename_CAVM_PSBS_SYSX_THROTTLE(a) "PSBS_SYSX_THROTTLE"
#define device_bar_CAVM_PSBS_SYSX_THROTTLE(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_PSBS_SYSX_THROTTLE(a) (a)
#define arguments_CAVM_PSBS_SYSX_THROTTLE(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_PSBS_H__ */
