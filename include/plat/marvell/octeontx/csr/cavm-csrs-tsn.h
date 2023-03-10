#ifndef __CAVM_CSRS_TSN_H__
#define __CAVM_CSRS_TSN_H__
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
 * OcteonTX TSN.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration tsn_bar_e
 *
 * TSN Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_TSN_BAR_E_TSNX_PF_BAR0(a) (0x87e0c0000000ll + 0x1000000ll * (a))
#define CAVM_TSN_BAR_E_TSNX_PF_BAR0_SIZE 0x10000ull

/**
 * Register (RSL) tsn#_alt_fuse
 *
 * TSN Alternative Fuse Register
 */
union cavm_tsnx_alt_fuse
{
    uint64_t u;
    struct cavm_tsnx_alt_fuse_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t tran_temp             : 8;  /**< [ 39: 32](R/W) Transition temperature for V calculation. */
        uint64_t max_step              : 8;  /**< [ 31: 24](R/W) V step. */
        uint64_t slope                 : 8;  /**< [ 23: 16](R/W) Slope. */
        uint64_t v_base                : 8;  /**< [ 15:  8](R/W) Base voltage. Minimum voltage that gets written to voltage regulator. */
        uint64_t v_max                 : 8;  /**< [  7:  0](R/W) Max voltage. Maximum voltage that gets written to voltage regulator. */
#else /* Word 0 - Little Endian */
        uint64_t v_max                 : 8;  /**< [  7:  0](R/W) Max voltage. Maximum voltage that gets written to voltage regulator. */
        uint64_t v_base                : 8;  /**< [ 15:  8](R/W) Base voltage. Minimum voltage that gets written to voltage regulator. */
        uint64_t slope                 : 8;  /**< [ 23: 16](R/W) Slope. */
        uint64_t max_step              : 8;  /**< [ 31: 24](R/W) V step. */
        uint64_t tran_temp             : 8;  /**< [ 39: 32](R/W) Transition temperature for V calculation. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsnx_alt_fuse_s cn; */
};
typedef union cavm_tsnx_alt_fuse cavm_tsnx_alt_fuse_t;

static inline uint64_t CAVM_TSNX_ALT_FUSE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSNX_ALT_FUSE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN96XX_PASS1_X) && (a<=9))
        return 0x87e0c0000018ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=10))
        return 0x87e0c0000018ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN96XX_PASS4_X) && (a<=10))
        return 0x87e0c0000018ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN98XX) && (a<=15))
        return 0x87e0c0000018ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=7))
        return 0x87e0c0000018ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95MM) && (a<=7))
        return 0x87e0c0000018ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=7))
        return 0x87e0c0000018ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=7))
        return 0x87e0c0000018ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("TSNX_ALT_FUSE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSNX_ALT_FUSE(a) cavm_tsnx_alt_fuse_t
#define bustype_CAVM_TSNX_ALT_FUSE(a) CSR_TYPE_RSL
#define basename_CAVM_TSNX_ALT_FUSE(a) "TSNX_ALT_FUSE"
#define device_bar_CAVM_TSNX_ALT_FUSE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSNX_ALT_FUSE(a) (a)
#define arguments_CAVM_TSNX_ALT_FUSE(a) (a),-1,-1,-1

/**
 * Register (RSL) tsn#_const
 *
 * TSN Constants Register
 * This register is for software discovery.
 */
union cavm_tsnx_const
{
    uint64_t u;
    struct cavm_tsnx_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsnx_const_s cn; */
};
typedef union cavm_tsnx_const cavm_tsnx_const_t;

static inline uint64_t CAVM_TSNX_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSNX_CONST(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN96XX_PASS1_X) && (a<=9))
        return 0x87e0c0000008ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=10))
        return 0x87e0c0000008ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN96XX_PASS4_X) && (a<=10))
        return 0x87e0c0000008ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN98XX) && (a<=15))
        return 0x87e0c0000008ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=7))
        return 0x87e0c0000008ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95MM) && (a<=7))
        return 0x87e0c0000008ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=7))
        return 0x87e0c0000008ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=7))
        return 0x87e0c0000008ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("TSNX_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSNX_CONST(a) cavm_tsnx_const_t
#define bustype_CAVM_TSNX_CONST(a) CSR_TYPE_RSL
#define basename_CAVM_TSNX_CONST(a) "TSNX_CONST"
#define device_bar_CAVM_TSNX_CONST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSNX_CONST(a) (a)
#define arguments_CAVM_TSNX_CONST(a) (a),-1,-1,-1

/**
 * Register (RSL) tsn#_fuse_bypass
 *
 * TSN Fuse Bypass Register
 */
union cavm_tsnx_fuse_bypass
{
    uint64_t u;
    struct cavm_tsnx_fuse_bypass_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t ctl_hw_bypass         : 1;  /**< [  2:  2](R/W) If set, bypass TSN control hardware responsible for controlling external voltage
                                                                 regulator so software can send commands to the regulator. */
        uint64_t ctl_fuse_bypass       : 1;  /**< [  1:  1](R/W) If set, bypass loaded TSN fuses. */
        uint64_t ts_fuse_bypass        : 1;  /**< [  0:  0](R/W) If set, bypass MC and NOFF fuses which feed the temperature sensor. */
#else /* Word 0 - Little Endian */
        uint64_t ts_fuse_bypass        : 1;  /**< [  0:  0](R/W) If set, bypass MC and NOFF fuses which feed the temperature sensor. */
        uint64_t ctl_fuse_bypass       : 1;  /**< [  1:  1](R/W) If set, bypass loaded TSN fuses. */
        uint64_t ctl_hw_bypass         : 1;  /**< [  2:  2](R/W) If set, bypass TSN control hardware responsible for controlling external voltage
                                                                 regulator so software can send commands to the regulator. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsnx_fuse_bypass_s cn; */
};
typedef union cavm_tsnx_fuse_bypass cavm_tsnx_fuse_bypass_t;

static inline uint64_t CAVM_TSNX_FUSE_BYPASS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSNX_FUSE_BYPASS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN96XX_PASS1_X) && (a<=9))
        return 0x87e0c0000098ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=10))
        return 0x87e0c0000098ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN96XX_PASS4_X) && (a<=10))
        return 0x87e0c0000098ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN98XX) && (a<=15))
        return 0x87e0c0000098ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=7))
        return 0x87e0c0000098ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95MM) && (a<=7))
        return 0x87e0c0000098ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=7))
        return 0x87e0c0000098ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=7))
        return 0x87e0c0000098ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("TSNX_FUSE_BYPASS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSNX_FUSE_BYPASS(a) cavm_tsnx_fuse_bypass_t
#define bustype_CAVM_TSNX_FUSE_BYPASS(a) CSR_TYPE_RSL
#define basename_CAVM_TSNX_FUSE_BYPASS(a) "TSNX_FUSE_BYPASS"
#define device_bar_CAVM_TSNX_FUSE_BYPASS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSNX_FUSE_BYPASS(a) (a)
#define arguments_CAVM_TSNX_FUSE_BYPASS(a) (a),-1,-1,-1

/**
 * Register (RSL) tsn#_pdb
 *
 * TSN Power Down Register
 * This register controls software-programmable power down.
 */
union cavm_tsnx_pdb
{
    uint64_t u;
    struct cavm_tsnx_pdb_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t pdb                   : 1;  /**< [  0:  0](R/W) Software writes a zero to power down the TSENSE module. */
#else /* Word 0 - Little Endian */
        uint64_t pdb                   : 1;  /**< [  0:  0](R/W) Software writes a zero to power down the TSENSE module. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsnx_pdb_s cn; */
};
typedef union cavm_tsnx_pdb cavm_tsnx_pdb_t;

static inline uint64_t CAVM_TSNX_PDB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSNX_PDB(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN96XX_PASS1_X) && (a<=9))
        return 0x87e0c0000010ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=10))
        return 0x87e0c0000010ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN96XX_PASS4_X) && (a<=10))
        return 0x87e0c0000010ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN98XX) && (a<=15))
        return 0x87e0c0000010ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=7))
        return 0x87e0c0000010ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95MM) && (a<=7))
        return 0x87e0c0000010ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=7))
        return 0x87e0c0000010ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=7))
        return 0x87e0c0000010ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("TSNX_PDB", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSNX_PDB(a) cavm_tsnx_pdb_t
#define bustype_CAVM_TSNX_PDB(a) CSR_TYPE_RSL
#define basename_CAVM_TSNX_PDB(a) "TSNX_PDB"
#define device_bar_CAVM_TSNX_PDB(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSNX_PDB(a) (a)
#define arguments_CAVM_TSNX_PDB(a) (a),-1,-1,-1

/**
 * Register (RSL) tsn#_trip
 *
 * TSN Thermal Trip Register
 */
union cavm_tsnx_trip
{
    uint64_t u;
    struct cavm_tsnx_trip_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t trip_level            : 8;  /**< [  7:  0](R/W) If temperature sensed is greater than this value RST_THERMAL_ALERT[TRIP] is set,
                                                                 and the THERMAL_TRIP_L pin asserts. */
#else /* Word 0 - Little Endian */
        uint64_t trip_level            : 8;  /**< [  7:  0](R/W) If temperature sensed is greater than this value RST_THERMAL_ALERT[TRIP] is set,
                                                                 and the THERMAL_TRIP_L pin asserts. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsnx_trip_s cn; */
};
typedef union cavm_tsnx_trip cavm_tsnx_trip_t;

static inline uint64_t CAVM_TSNX_TRIP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSNX_TRIP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN96XX_PASS1_X) && (a<=9))
        return 0x87e0c00000b8ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=10))
        return 0x87e0c00000b8ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN96XX_PASS4_X) && (a<=10))
        return 0x87e0c00000b8ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN98XX) && (a<=15))
        return 0x87e0c00000b8ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=7))
        return 0x87e0c00000b8ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95MM) && (a<=7))
        return 0x87e0c00000b8ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=7))
        return 0x87e0c00000b8ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=7))
        return 0x87e0c00000b8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("TSNX_TRIP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSNX_TRIP(a) cavm_tsnx_trip_t
#define bustype_CAVM_TSNX_TRIP(a) CSR_TYPE_RSL
#define basename_CAVM_TSNX_TRIP(a) "TSNX_TRIP"
#define device_bar_CAVM_TSNX_TRIP(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSNX_TRIP(a) (a)
#define arguments_CAVM_TSNX_TRIP(a) (a),-1,-1,-1

/**
 * Register (RSL) tsn#_ts_temp_conv_coeff_fsm
 *
 * TSN Temp Sensor Conversion Coefficient and FSM Register
 */
union cavm_tsnx_ts_temp_conv_coeff_fsm
{
    uint64_t u;
    struct cavm_tsnx_ts_temp_conv_coeff_fsm_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_58_63        : 6;
        uint64_t t_fsm                 : 10; /**< [ 57: 48](R/W) Sets time interval for FSM update. */
        uint64_t reserved_38_47        : 10;
        uint64_t coeff_a               : 6;  /**< [ 37: 32](R/W) Coefficient A value for polynomial fit.
                                                                 _ \<37\> is a sign bit to flip the shifted results.
                                                                 _ \<36:32\> dictates the amount of right shift. */
        uint64_t reserved_25_31        : 7;
        uint64_t coeff_b               : 9;  /**< [ 24: 16](R/W) Coefficient B value for polynomial fit. It should be a positive number and between 1 and
                                                                 2.
                                                                 _ \<24\> is the integer part should always be one.
                                                                 _ \<23:16\> form the fractional part. */
        uint64_t reserved_12_15        : 4;
        uint64_t coeff_c               : 12; /**< [ 11:  0](R/W) Coefficient C value for polynomial fit.
                                                                 A 2's complement number. */
#else /* Word 0 - Little Endian */
        uint64_t coeff_c               : 12; /**< [ 11:  0](R/W) Coefficient C value for polynomial fit.
                                                                 A 2's complement number. */
        uint64_t reserved_12_15        : 4;
        uint64_t coeff_b               : 9;  /**< [ 24: 16](R/W) Coefficient B value for polynomial fit. It should be a positive number and between 1 and
                                                                 2.
                                                                 _ \<24\> is the integer part should always be one.
                                                                 _ \<23:16\> form the fractional part. */
        uint64_t reserved_25_31        : 7;
        uint64_t coeff_a               : 6;  /**< [ 37: 32](R/W) Coefficient A value for polynomial fit.
                                                                 _ \<37\> is a sign bit to flip the shifted results.
                                                                 _ \<36:32\> dictates the amount of right shift. */
        uint64_t reserved_38_47        : 10;
        uint64_t t_fsm                 : 10; /**< [ 57: 48](R/W) Sets time interval for FSM update. */
        uint64_t reserved_58_63        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsnx_ts_temp_conv_coeff_fsm_s cn; */
};
typedef union cavm_tsnx_ts_temp_conv_coeff_fsm cavm_tsnx_ts_temp_conv_coeff_fsm_t;

static inline uint64_t CAVM_TSNX_TS_TEMP_CONV_COEFF_FSM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSNX_TS_TEMP_CONV_COEFF_FSM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN96XX_PASS1_X) && (a<=9))
        return 0x87e0c0000078ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=10))
        return 0x87e0c0000078ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN96XX_PASS4_X) && (a<=10))
        return 0x87e0c0000078ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN98XX) && (a<=15))
        return 0x87e0c0000078ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=7))
        return 0x87e0c0000078ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95MM) && (a<=7))
        return 0x87e0c0000078ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=7))
        return 0x87e0c0000078ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=7))
        return 0x87e0c0000078ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("TSNX_TS_TEMP_CONV_COEFF_FSM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSNX_TS_TEMP_CONV_COEFF_FSM(a) cavm_tsnx_ts_temp_conv_coeff_fsm_t
#define bustype_CAVM_TSNX_TS_TEMP_CONV_COEFF_FSM(a) CSR_TYPE_RSL
#define basename_CAVM_TSNX_TS_TEMP_CONV_COEFF_FSM(a) "TSNX_TS_TEMP_CONV_COEFF_FSM"
#define device_bar_CAVM_TSNX_TS_TEMP_CONV_COEFF_FSM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSNX_TS_TEMP_CONV_COEFF_FSM(a) (a)
#define arguments_CAVM_TSNX_TS_TEMP_CONV_COEFF_FSM(a) (a),-1,-1,-1

/**
 * Register (RSL) tsn#_ts_temp_conv_ctl
 *
 * TSN Temp Sensor Analog Alternate Conversion Register
 */
union cavm_tsnx_ts_temp_conv_ctl
{
    uint64_t u;
    struct cavm_tsnx_ts_temp_conv_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t reset_sm              : 1;  /**< [ 12: 12](R/W) This will force the temperature conversion state machine into the reset state until
                                                                 [RESET_SM] is cleared. */
        uint64_t sw_access             : 1;  /**< [ 11: 11](R/W) If set, software controls inputs of analog temperature sensor. */
        uint64_t ts_switch             : 9;  /**< [ 10:  2](R/W) Alternate software access to control temperature sensor switches. */
        uint64_t ts_curr2en            : 1;  /**< [  1:  1](R/W) Controls curr2_en pin on analog temperature sensor block. */
        uint64_t strobe                : 1;  /**< [  0:  0](R/W) Controls strobe pin on analog temperature sensor block. */
#else /* Word 0 - Little Endian */
        uint64_t strobe                : 1;  /**< [  0:  0](R/W) Controls strobe pin on analog temperature sensor block. */
        uint64_t ts_curr2en            : 1;  /**< [  1:  1](R/W) Controls curr2_en pin on analog temperature sensor block. */
        uint64_t ts_switch             : 9;  /**< [ 10:  2](R/W) Alternate software access to control temperature sensor switches. */
        uint64_t sw_access             : 1;  /**< [ 11: 11](R/W) If set, software controls inputs of analog temperature sensor. */
        uint64_t reset_sm              : 1;  /**< [ 12: 12](R/W) This will force the temperature conversion state machine into the reset state until
                                                                 [RESET_SM] is cleared. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsnx_ts_temp_conv_ctl_s cn; */
};
typedef union cavm_tsnx_ts_temp_conv_ctl cavm_tsnx_ts_temp_conv_ctl_t;

static inline uint64_t CAVM_TSNX_TS_TEMP_CONV_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSNX_TS_TEMP_CONV_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN96XX_PASS1_X) && (a<=9))
        return 0x87e0c0000058ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=10))
        return 0x87e0c0000058ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN96XX_PASS4_X) && (a<=10))
        return 0x87e0c0000058ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN98XX) && (a<=15))
        return 0x87e0c0000058ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=7))
        return 0x87e0c0000058ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95MM) && (a<=7))
        return 0x87e0c0000058ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=7))
        return 0x87e0c0000058ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=7))
        return 0x87e0c0000058ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("TSNX_TS_TEMP_CONV_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSNX_TS_TEMP_CONV_CTL(a) cavm_tsnx_ts_temp_conv_ctl_t
#define bustype_CAVM_TSNX_TS_TEMP_CONV_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_TSNX_TS_TEMP_CONV_CTL(a) "TSNX_TS_TEMP_CONV_CTL"
#define device_bar_CAVM_TSNX_TS_TEMP_CONV_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSNX_TS_TEMP_CONV_CTL(a) (a)
#define arguments_CAVM_TSNX_TS_TEMP_CONV_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) tsn#_ts_temp_conv_result
 *
 * TSN Temp Sensor Result Register
 */
union cavm_tsnx_ts_temp_conv_result
{
    uint64_t u;
    struct cavm_tsnx_ts_temp_conv_result_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t n_valid               : 1;  /**< [ 23: 23](RO/H) When set [N_VALUE] is valid. */
        uint64_t n_value               : 11; /**< [ 22: 12](RO/H) N cycle count values after calibration initiated. Qualified by [N_VALID]. */
        uint64_t temp_valid            : 1;  /**< [ 11: 11](RO/H) When set [TEMP_CORRECTED] is valid.
                                                                 This bit is pulsed on each conversion, and as such software may not be able to observe the
                                                                 cycle in which [TEMP_VALID] is set. */
        uint64_t temp_corrected        : 11; /**< [ 10:  0](RO/H) Corrected temperature read out from the temp sensor module, in quarter degrees C
                                                                 (two bits of fraction). Twos-complement if negative temperature. Unpredictable
                                                                 due to incomplete reading unless [TEMP_VALID] is set. Unpredictable due to lack
                                                                 of calibration if TSN()_TS_TEMP_NOFF_MC[NOFF] = 0x0. */
#else /* Word 0 - Little Endian */
        uint64_t temp_corrected        : 11; /**< [ 10:  0](RO/H) Corrected temperature read out from the temp sensor module, in quarter degrees C
                                                                 (two bits of fraction). Twos-complement if negative temperature. Unpredictable
                                                                 due to incomplete reading unless [TEMP_VALID] is set. Unpredictable due to lack
                                                                 of calibration if TSN()_TS_TEMP_NOFF_MC[NOFF] = 0x0. */
        uint64_t temp_valid            : 1;  /**< [ 11: 11](RO/H) When set [TEMP_CORRECTED] is valid.
                                                                 This bit is pulsed on each conversion, and as such software may not be able to observe the
                                                                 cycle in which [TEMP_VALID] is set. */
        uint64_t n_value               : 11; /**< [ 22: 12](RO/H) N cycle count values after calibration initiated. Qualified by [N_VALID]. */
        uint64_t n_valid               : 1;  /**< [ 23: 23](RO/H) When set [N_VALUE] is valid. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsnx_ts_temp_conv_result_s cn; */
};
typedef union cavm_tsnx_ts_temp_conv_result cavm_tsnx_ts_temp_conv_result_t;

static inline uint64_t CAVM_TSNX_TS_TEMP_CONV_RESULT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSNX_TS_TEMP_CONV_RESULT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN96XX_PASS1_X) && (a<=9))
        return 0x87e0c0000068ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=10))
        return 0x87e0c0000068ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN96XX_PASS4_X) && (a<=10))
        return 0x87e0c0000068ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN98XX) && (a<=15))
        return 0x87e0c0000068ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=7))
        return 0x87e0c0000068ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95MM) && (a<=7))
        return 0x87e0c0000068ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=7))
        return 0x87e0c0000068ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=7))
        return 0x87e0c0000068ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("TSNX_TS_TEMP_CONV_RESULT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSNX_TS_TEMP_CONV_RESULT(a) cavm_tsnx_ts_temp_conv_result_t
#define bustype_CAVM_TSNX_TS_TEMP_CONV_RESULT(a) CSR_TYPE_RSL
#define basename_CAVM_TSNX_TS_TEMP_CONV_RESULT(a) "TSNX_TS_TEMP_CONV_RESULT"
#define device_bar_CAVM_TSNX_TS_TEMP_CONV_RESULT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSNX_TS_TEMP_CONV_RESULT(a) (a)
#define arguments_CAVM_TSNX_TS_TEMP_CONV_RESULT(a) (a),-1,-1,-1

/**
 * Register (RSL) tsn#_ts_temp_noff_mc
 *
 * TSN Temp Sensor Noff Coefficient Register
 */
union cavm_tsnx_ts_temp_noff_mc
{
    uint64_t u;
    struct cavm_tsnx_ts_temp_noff_mc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_28_63        : 36;
        uint64_t mc                    : 12; /**< [ 27: 16](R/W) MC value, default is 3000 decimal. */
        uint64_t reserved_11_15        : 5;
        uint64_t noff                  : 11; /**< [ 10:  0](R/W) N cycle count offset, used to subtract the appropriate count from N cycle.
                                                                 It should be such that at 0 degrees C, the difference between NOFF and NCYCLE is 0. */
#else /* Word 0 - Little Endian */
        uint64_t noff                  : 11; /**< [ 10:  0](R/W) N cycle count offset, used to subtract the appropriate count from N cycle.
                                                                 It should be such that at 0 degrees C, the difference between NOFF and NCYCLE is 0. */
        uint64_t reserved_11_15        : 5;
        uint64_t mc                    : 12; /**< [ 27: 16](R/W) MC value, default is 3000 decimal. */
        uint64_t reserved_28_63        : 36;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsnx_ts_temp_noff_mc_s cn; */
};
typedef union cavm_tsnx_ts_temp_noff_mc cavm_tsnx_ts_temp_noff_mc_t;

static inline uint64_t CAVM_TSNX_TS_TEMP_NOFF_MC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSNX_TS_TEMP_NOFF_MC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN96XX_PASS1_X) && (a<=9))
        return 0x87e0c0000088ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=10))
        return 0x87e0c0000088ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN96XX_PASS4_X) && (a<=10))
        return 0x87e0c0000088ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN98XX) && (a<=15))
        return 0x87e0c0000088ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=7))
        return 0x87e0c0000088ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95MM) && (a<=7))
        return 0x87e0c0000088ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=7))
        return 0x87e0c0000088ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=7))
        return 0x87e0c0000088ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("TSNX_TS_TEMP_NOFF_MC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSNX_TS_TEMP_NOFF_MC(a) cavm_tsnx_ts_temp_noff_mc_t
#define bustype_CAVM_TSNX_TS_TEMP_NOFF_MC(a) CSR_TYPE_RSL
#define basename_CAVM_TSNX_TS_TEMP_NOFF_MC(a) "TSNX_TS_TEMP_NOFF_MC"
#define device_bar_CAVM_TSNX_TS_TEMP_NOFF_MC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSNX_TS_TEMP_NOFF_MC(a) (a)
#define arguments_CAVM_TSNX_TS_TEMP_NOFF_MC(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_TSN_H__ */
