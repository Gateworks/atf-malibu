#ifndef __CAVM_CSRS_SGP_H__
#define __CAVM_CSRS_SGP_H__
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
 * OcteonTX SGP.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration sgp_bar_e
 *
 * SGPIO Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_SGP_BAR_E_SGP_PF_BAR0_CN8 (0x87e027000000ll)
#define CAVM_SGP_BAR_E_SGP_PF_BAR0_CN8_SIZE 0x800000ull
#define CAVM_SGP_BAR_E_SGP_PF_BAR0_CN9 (0x87e027000000ll)
#define CAVM_SGP_BAR_E_SGP_PF_BAR0_CN9_SIZE 0x80000ull

/**
 * Enumeration sgp_tx_act_e
 *
 * SGPIO Transmit Activity Enumeration
 * Enumerates the values of SGP_TX()[*_ACT].
 */
#define CAVM_SGP_TX_ACT_E_A_OFF_ON (3)
#define CAVM_SGP_TX_ACT_E_A_ON_OFF (2)
#define CAVM_SGP_TX_ACT_E_BRIEF_END (4)
#define CAVM_SGP_TX_ACT_E_BRIEF_START (5)
#define CAVM_SGP_TX_ACT_E_B_OFF_ON (7)
#define CAVM_SGP_TX_ACT_E_B_ON_OFF (6)
#define CAVM_SGP_TX_ACT_E_STATIC_OFF (0)
#define CAVM_SGP_TX_ACT_E_STATIC_ON (1)

/**
 * Enumeration sgp_tx_err_e
 *
 * SGPIO Transmit Error Enumeration
 * Enumerates the values of SGP_TX()[*_ERR].
 */
#define CAVM_SGP_TX_ERR_E_A_OFF_ON (3)
#define CAVM_SGP_TX_ERR_E_A_ON_OFF (2)
#define CAVM_SGP_TX_ERR_E_B_OFF_ON (7)
#define CAVM_SGP_TX_ERR_E_B_ON_OFF (6)
#define CAVM_SGP_TX_ERR_E_STATIC_OFF (0)
#define CAVM_SGP_TX_ERR_E_STATIC_ON (1)
#define CAVM_SGP_TX_ERR_E_STATIC_ON4 (4)
#define CAVM_SGP_TX_ERR_E_STATIC_ON5 (5)

/**
 * Enumeration sgp_tx_loc_e
 *
 * SGPIO Transmit Locate Enumeration
 * Enumerates the values of SGP_TX()[*_LOC].
 */
#define CAVM_SGP_TX_LOC_E_A_OFF_ON (3)
#define CAVM_SGP_TX_LOC_E_A_ON_OFF (2)
#define CAVM_SGP_TX_LOC_E_STATIC_OFF (0)
#define CAVM_SGP_TX_LOC_E_STATIC_ON (1)

/**
 * Register (RSL32b) sgp_cfg0
 *
 * SGPIO Configuration 0 Register
 */
union cavm_sgp_cfg0
{
    uint32_t u;
    struct cavm_sgp_cfg0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t drive_cnt             : 8;  /**< [ 31: 24](RO) Number of supported drives. */
        uint32_t gp_cnt                : 4;  /**< [ 23: 20](RO) Number of general purpose data registers. */
        uint32_t cfg_cnt               : 3;  /**< [ 19: 17](RO) Number of configuration registers. */
        uint32_t ena                   : 1;  /**< [ 16: 16](R/W) SGPIO enable. Enables the SGPIO inputs and outputs. When zero the bus is not driven,
                                                                 inputs are zero, and shifts do not occur. A change from enabled to disabled does not take
                                                                 effect until the current bit-stream has completed. */
        uint32_t ver                   : 4;  /**< [ 15: 12](RO) Version. */
        uint32_t reserved_0_11         : 12;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_11         : 12;
        uint32_t ver                   : 4;  /**< [ 15: 12](RO) Version. */
        uint32_t ena                   : 1;  /**< [ 16: 16](R/W) SGPIO enable. Enables the SGPIO inputs and outputs. When zero the bus is not driven,
                                                                 inputs are zero, and shifts do not occur. A change from enabled to disabled does not take
                                                                 effect until the current bit-stream has completed. */
        uint32_t cfg_cnt               : 3;  /**< [ 19: 17](RO) Number of configuration registers. */
        uint32_t gp_cnt                : 4;  /**< [ 23: 20](RO) Number of general purpose data registers. */
        uint32_t drive_cnt             : 8;  /**< [ 31: 24](RO) Number of supported drives. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sgp_cfg0_s cn; */
};
typedef union cavm_sgp_cfg0 cavm_sgp_cfg0_t;

#define CAVM_SGP_CFG0 CAVM_SGP_CFG0_FUNC()
static inline uint64_t CAVM_SGP_CFG0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SGP_CFG0_FUNC(void)
{
    return 0x87e027000000ll;
}

#define typedef_CAVM_SGP_CFG0 cavm_sgp_cfg0_t
#define bustype_CAVM_SGP_CFG0 CSR_TYPE_RSL32b
#define basename_CAVM_SGP_CFG0 "SGP_CFG0"
#define device_bar_CAVM_SGP_CFG0 0x0 /* PF_BAR0 */
#define busnum_CAVM_SGP_CFG0 0
#define arguments_CAVM_SGP_CFG0 -1,-1,-1,-1

/**
 * Register (RSL32b) sgp_cfg1
 *
 * SGPIO Configuration 1 Register
 */
union cavm_sgp_cfg1
{
    uint32_t u;
    struct cavm_sgp_cfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t blink_b               : 4;  /**< [ 23: 20](R/W) Blink generator rate B. */
        uint32_t blink_a               : 4;  /**< [ 19: 16](R/W) Blink generator rate A:
                                                                 0x0 = 1/8 second.
                                                                 0x1 = 2/8 second.
                                                                 ...
                                                                 0xF = 16/8 seconds. */
        uint32_t force_off             : 4;  /**< [ 15: 12](R/W) Force activity off time. The minimum amount of time to disable the activity indicator if
                                                                 it has been continually enabled for the [MAX_ON] time, and the SGP_TX()[*_ACT] is
                                                                 0x4 or 0x5.
                                                                 0x0 = No minimum.
                                                                 0x1 = 1/8 second.
                                                                 ...
                                                                 0xF = 15/8 seconds. */
        uint32_t max_on                : 4;  /**< [ 11:  8](R/W) Maximum activity on time. The maximum amount of time to enable the activity indicator if
                                                                 SGP_TX()[*_ACT] is 0x4 or 0x5. Note all drives will not reach the [MAX_ON] time
                                                                 simultaneously, the pattern will appear somewhat random.
                                                                 0x0 = No maximum.
                                                                 0x1 = 1/4 second.
                                                                 ...
                                                                 0xF = 15/4 seconds. */
        uint32_t stretch_off           : 4;  /**< [  7:  4](R/W) Stretch activity off. The minimum amount of time to disable the activity indicator if
                                                                 SGP_TX()[*_ACT] is 0x4 or 0x5.
                                                                 0x0 = No minimum.
                                                                 0x1 = 1/64 second.
                                                                 ...
                                                                 0xF = 15/64 seconds. */
        uint32_t stretch_on            : 4;  /**< [  3:  0](R/W) Stretch activity on. The minimum amount of time to enable the activity indicator if
                                                                 SGP_TX()[*_ACT] is 0x4 or 0x5.
                                                                 0x0 = 1/64 second.
                                                                 0x1 = 2/64 second.
                                                                 ...
                                                                 0xF = 16/64 seconds. */
#else /* Word 0 - Little Endian */
        uint32_t stretch_on            : 4;  /**< [  3:  0](R/W) Stretch activity on. The minimum amount of time to enable the activity indicator if
                                                                 SGP_TX()[*_ACT] is 0x4 or 0x5.
                                                                 0x0 = 1/64 second.
                                                                 0x1 = 2/64 second.
                                                                 ...
                                                                 0xF = 16/64 seconds. */
        uint32_t stretch_off           : 4;  /**< [  7:  4](R/W) Stretch activity off. The minimum amount of time to disable the activity indicator if
                                                                 SGP_TX()[*_ACT] is 0x4 or 0x5.
                                                                 0x0 = No minimum.
                                                                 0x1 = 1/64 second.
                                                                 ...
                                                                 0xF = 15/64 seconds. */
        uint32_t max_on                : 4;  /**< [ 11:  8](R/W) Maximum activity on time. The maximum amount of time to enable the activity indicator if
                                                                 SGP_TX()[*_ACT] is 0x4 or 0x5. Note all drives will not reach the [MAX_ON] time
                                                                 simultaneously, the pattern will appear somewhat random.
                                                                 0x0 = No maximum.
                                                                 0x1 = 1/4 second.
                                                                 ...
                                                                 0xF = 15/4 seconds. */
        uint32_t force_off             : 4;  /**< [ 15: 12](R/W) Force activity off time. The minimum amount of time to disable the activity indicator if
                                                                 it has been continually enabled for the [MAX_ON] time, and the SGP_TX()[*_ACT] is
                                                                 0x4 or 0x5.
                                                                 0x0 = No minimum.
                                                                 0x1 = 1/8 second.
                                                                 ...
                                                                 0xF = 15/8 seconds. */
        uint32_t blink_a               : 4;  /**< [ 19: 16](R/W) Blink generator rate A:
                                                                 0x0 = 1/8 second.
                                                                 0x1 = 2/8 second.
                                                                 ...
                                                                 0xF = 16/8 seconds. */
        uint32_t blink_b               : 4;  /**< [ 23: 20](R/W) Blink generator rate B. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sgp_cfg1_s cn; */
};
typedef union cavm_sgp_cfg1 cavm_sgp_cfg1_t;

#define CAVM_SGP_CFG1 CAVM_SGP_CFG1_FUNC()
static inline uint64_t CAVM_SGP_CFG1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SGP_CFG1_FUNC(void)
{
    return 0x87e027000004ll;
}

#define typedef_CAVM_SGP_CFG1 cavm_sgp_cfg1_t
#define bustype_CAVM_SGP_CFG1 CSR_TYPE_RSL32b
#define basename_CAVM_SGP_CFG1 "SGP_CFG1"
#define device_bar_CAVM_SGP_CFG1 0x0 /* PF_BAR0 */
#define busnum_CAVM_SGP_CFG1 0
#define arguments_CAVM_SGP_CFG1 -1,-1,-1,-1

/**
 * Register (RSL32b) sgp_imp_clk
 *
 * SGPIO Implementation Clock Register
 */
union cavm_sgp_imp_clk
{
    uint32_t u;
    struct cavm_sgp_imp_clk_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t div                   : 27; /**< [ 26:  0](R/W) Coprocessor-clock divisor. Number of coprocessor clock cycles per
                                                                 GPIO_SCLOCK. May only be changed when SGP_CFG0[ENA] and SGP_IMP_CTL[BUSY] are
                                                                 clear. Should be programmed to yield a frequency between 64 Hz and 100 kHz;
                                                                 reset value assumes a coprocessor clock of 800 MHz and a SGPIO_SCLOCK of 100
                                                                 KHz. */
#else /* Word 0 - Little Endian */
        uint32_t div                   : 27; /**< [ 26:  0](R/W) Coprocessor-clock divisor. Number of coprocessor clock cycles per
                                                                 GPIO_SCLOCK. May only be changed when SGP_CFG0[ENA] and SGP_IMP_CTL[BUSY] are
                                                                 clear. Should be programmed to yield a frequency between 64 Hz and 100 kHz;
                                                                 reset value assumes a coprocessor clock of 800 MHz and a SGPIO_SCLOCK of 100
                                                                 KHz. */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sgp_imp_clk_s cn8; */
    struct cavm_sgp_imp_clk_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t div                   : 27; /**< [ 26:  0](R/W) 100 MHz reference-clock divisor. Number of 100 MHz reference clock cycles per
                                                                 SGPIO_SCLOCK. May only be changed when SGP_CFG0[ENA] and SGP_IMP_CTL[BUSY] are
                                                                 clear. Should be programmed to yield a frequency between 64 Hz and 100 kHz;
                                                                 reset value assumes a SGPIO_SCLOCK of 100 KHz. */
#else /* Word 0 - Little Endian */
        uint32_t div                   : 27; /**< [ 26:  0](R/W) 100 MHz reference-clock divisor. Number of 100 MHz reference clock cycles per
                                                                 SGPIO_SCLOCK. May only be changed when SGP_CFG0[ENA] and SGP_IMP_CTL[BUSY] are
                                                                 clear. Should be programmed to yield a frequency between 64 Hz and 100 kHz;
                                                                 reset value assumes a SGPIO_SCLOCK of 100 KHz. */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_sgp_imp_clk cavm_sgp_imp_clk_t;

#define CAVM_SGP_IMP_CLK CAVM_SGP_IMP_CLK_FUNC()
static inline uint64_t CAVM_SGP_IMP_CLK_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SGP_IMP_CLK_FUNC(void)
{
    return 0x87e027030010ll;
}

#define typedef_CAVM_SGP_IMP_CLK cavm_sgp_imp_clk_t
#define bustype_CAVM_SGP_IMP_CLK CSR_TYPE_RSL32b
#define basename_CAVM_SGP_IMP_CLK "SGP_IMP_CLK"
#define device_bar_CAVM_SGP_IMP_CLK 0x0 /* PF_BAR0 */
#define busnum_CAVM_SGP_IMP_CLK 0
#define arguments_CAVM_SGP_IMP_CLK -1,-1,-1,-1

/**
 * Register (RSL32b) sgp_imp_ctl
 *
 * SGPIO Implementation Control Register
 */
union cavm_sgp_imp_ctl
{
    uint32_t u;
    struct cavm_sgp_imp_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_5_31         : 27;
        uint32_t datains               : 3;  /**< [  4:  2](R/W) Number of SGP_SDATAIN connections:
                                                                 0x0 = No SGP_SDATAIN, all input shift data will be zero.
                                                                 0x1 = SGP_SDATAIN(0) for drives 0-15.
                                                                 0x2 = SGP_SDATAIN(0) for drives 0-7, (1) for drives 8-15.
                                                                 0x3 = SGP_SDATAIN(0) for drives 0-3, (1) for drives 4-7, (2) for drives 8-11, (3) for
                                                                 drives 12-15.
                                                                 0x4-0x7 = Reserved. */
        uint32_t hold                  : 1;  /**< [  1:  1](R/W) Hold shift. When set, automatic shifts will not occur, and the SGP_TX_GP_CFG[COUNT] must
                                                                 be used to initiate a shift operation. */
        uint32_t busy                  : 1;  /**< [  0:  0](RO/H) Shift in progress. */
#else /* Word 0 - Little Endian */
        uint32_t busy                  : 1;  /**< [  0:  0](RO/H) Shift in progress. */
        uint32_t hold                  : 1;  /**< [  1:  1](R/W) Hold shift. When set, automatic shifts will not occur, and the SGP_TX_GP_CFG[COUNT] must
                                                                 be used to initiate a shift operation. */
        uint32_t datains               : 3;  /**< [  4:  2](R/W) Number of SGP_SDATAIN connections:
                                                                 0x0 = No SGP_SDATAIN, all input shift data will be zero.
                                                                 0x1 = SGP_SDATAIN(0) for drives 0-15.
                                                                 0x2 = SGP_SDATAIN(0) for drives 0-7, (1) for drives 8-15.
                                                                 0x3 = SGP_SDATAIN(0) for drives 0-3, (1) for drives 4-7, (2) for drives 8-11, (3) for
                                                                 drives 12-15.
                                                                 0x4-0x7 = Reserved. */
        uint32_t reserved_5_31         : 27;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sgp_imp_ctl_s cn8; */
    struct cavm_sgp_imp_ctl_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_5_31         : 27;
        uint32_t datains               : 3;  /**< [  4:  2](R/W) Number of SGPIO_SDATAIN connections:
                                                                 0x0 = No SGPIO_SDATAIN, all input shift data will be zero.
                                                                 0x1 = SGPIO_SDATAIN\<0\> for drives 0-19.
                                                                 0x2 = SGPIO_SDATAIN\<0\> for drives 0-15, \<1\> for drives 16-19.
                                                                 0x3 = SGPIO_SDATAIN\<0\> for drives 0-7, \<1\> for drives 8-15, \<2\> for drives 16-19.
                                                                 0x4 = SGPIO_SDATAIN\<0\> for drives 0-3, \<1\> for drives 4-7, \<2\> for drives 8-11, \<3\> for
                                                                 drives 12-15, \<4\> for drives 16-19.
                                                                 0x5-0x7 = Reserved. */
        uint32_t hold                  : 1;  /**< [  1:  1](R/W) Hold shift. When set, automatic shifts will not occur, and the SGP_TX_GP_CFG[COUNT] must
                                                                 be used to initiate a shift operation. */
        uint32_t busy                  : 1;  /**< [  0:  0](RO/H) Shift in progress. */
#else /* Word 0 - Little Endian */
        uint32_t busy                  : 1;  /**< [  0:  0](RO/H) Shift in progress. */
        uint32_t hold                  : 1;  /**< [  1:  1](R/W) Hold shift. When set, automatic shifts will not occur, and the SGP_TX_GP_CFG[COUNT] must
                                                                 be used to initiate a shift operation. */
        uint32_t datains               : 3;  /**< [  4:  2](R/W) Number of SGPIO_SDATAIN connections:
                                                                 0x0 = No SGPIO_SDATAIN, all input shift data will be zero.
                                                                 0x1 = SGPIO_SDATAIN\<0\> for drives 0-19.
                                                                 0x2 = SGPIO_SDATAIN\<0\> for drives 0-15, \<1\> for drives 16-19.
                                                                 0x3 = SGPIO_SDATAIN\<0\> for drives 0-7, \<1\> for drives 8-15, \<2\> for drives 16-19.
                                                                 0x4 = SGPIO_SDATAIN\<0\> for drives 0-3, \<1\> for drives 4-7, \<2\> for drives 8-11, \<3\> for
                                                                 drives 12-15, \<4\> for drives 16-19.
                                                                 0x5-0x7 = Reserved. */
        uint32_t reserved_5_31         : 27;
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_sgp_imp_ctl cavm_sgp_imp_ctl_t;

#define CAVM_SGP_IMP_CTL CAVM_SGP_IMP_CTL_FUNC()
static inline uint64_t CAVM_SGP_IMP_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SGP_IMP_CTL_FUNC(void)
{
    return 0x87e027030000ll;
}

#define typedef_CAVM_SGP_IMP_CTL cavm_sgp_imp_ctl_t
#define bustype_CAVM_SGP_IMP_CTL CSR_TYPE_RSL32b
#define basename_CAVM_SGP_IMP_CTL "SGP_IMP_CTL"
#define device_bar_CAVM_SGP_IMP_CTL 0x0 /* PF_BAR0 */
#define busnum_CAVM_SGP_IMP_CTL 0
#define arguments_CAVM_SGP_IMP_CTL -1,-1,-1,-1

/**
 * Register (RSL32b) sgp_imp_drive#
 *
 * SGPIO Implementation Drive Map Register
 */
union cavm_sgp_imp_drivex
{
    uint32_t u;
    struct cavm_sgp_imp_drivex_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_9_31         : 23;
        uint32_t pres_det              : 1;  /**< [  8:  8](R/W) "Presence detect. If set, logically OR SGPIO_SDATAIN's ID#.0 bit with any GPIO related
                                                                 present detect and send to the relevant SATA controller's mechanical presence detect." */
        uint32_t reserved_5_7          : 3;
        uint32_t ctrlr                 : 5;  /**< [  4:  0](R/W) SATA controller attached to this index's SGPIO drive. Indicates which SATA(0..15) connects
                                                                 to the corresponding indexed SGPIO drive 0..15. Resets to the index number; controller 0
                                                                 for drive 0, controller 1 for drive 1, etc.

                                                                 If SGP_TX()[D0_ACT]..[D3_ACT] = SGP_TX_ACT_E::BRIEF_START or
                                                                 SGP_TX_ACT_E::BRIEF_END, the activity input will come from SATA controller
                                                                 number [CTRLR].  Else, the activity indication is controlled by software alone.

                                                                 If [PRES_DET] is set, SATA controller number [CTRLR] will receive the indexed drive's
                                                                 presence detect. */
#else /* Word 0 - Little Endian */
        uint32_t ctrlr                 : 5;  /**< [  4:  0](R/W) SATA controller attached to this index's SGPIO drive. Indicates which SATA(0..15) connects
                                                                 to the corresponding indexed SGPIO drive 0..15. Resets to the index number; controller 0
                                                                 for drive 0, controller 1 for drive 1, etc.

                                                                 If SGP_TX()[D0_ACT]..[D3_ACT] = SGP_TX_ACT_E::BRIEF_START or
                                                                 SGP_TX_ACT_E::BRIEF_END, the activity input will come from SATA controller
                                                                 number [CTRLR].  Else, the activity indication is controlled by software alone.

                                                                 If [PRES_DET] is set, SATA controller number [CTRLR] will receive the indexed drive's
                                                                 presence detect. */
        uint32_t reserved_5_7          : 3;
        uint32_t pres_det              : 1;  /**< [  8:  8](R/W) "Presence detect. If set, logically OR SGPIO_SDATAIN's ID#.0 bit with any GPIO related
                                                                 present detect and send to the relevant SATA controller's mechanical presence detect." */
        uint32_t reserved_9_31         : 23;
#endif /* Word 0 - End */
    } s;
    struct cavm_sgp_imp_drivex_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_9_31         : 23;
        uint32_t pres_det              : 1;  /**< [  8:  8](R/W) "Presence detect. If set, logically OR SGPIO_SDATAIN's ID#.0 bit with any GPIO related
                                                                 present detect and send to the relevant SATA controller's mechanical presence detect." */
        uint32_t reserved_4_7          : 4;
        uint32_t ctrlr                 : 4;  /**< [  3:  0](R/W) SATA controller attached to this index's SGPIO drive. Indicates which SATA(0..15) connects
                                                                 to the corresponding indexed SGPIO drive 0..15. Resets to the index number; controller 0
                                                                 for drive 0, controller 1 for drive 1, etc.

                                                                 If SGP_TX()[D0_ACT]..[D3_ACT] = SGP_TX_ACT_E::BRIEF_START or
                                                                 SGP_TX_ACT_E::BRIEF_END, the activity input will come from SATA controller
                                                                 number [CTRLR].  Else, the activity indication is controlled by software alone.

                                                                 If [PRES_DET] is set, SATA controller number [CTRLR] will receive the indexed drive's
                                                                 presence detect. */
#else /* Word 0 - Little Endian */
        uint32_t ctrlr                 : 4;  /**< [  3:  0](R/W) SATA controller attached to this index's SGPIO drive. Indicates which SATA(0..15) connects
                                                                 to the corresponding indexed SGPIO drive 0..15. Resets to the index number; controller 0
                                                                 for drive 0, controller 1 for drive 1, etc.

                                                                 If SGP_TX()[D0_ACT]..[D3_ACT] = SGP_TX_ACT_E::BRIEF_START or
                                                                 SGP_TX_ACT_E::BRIEF_END, the activity input will come from SATA controller
                                                                 number [CTRLR].  Else, the activity indication is controlled by software alone.

                                                                 If [PRES_DET] is set, SATA controller number [CTRLR] will receive the indexed drive's
                                                                 presence detect. */
        uint32_t reserved_4_7          : 4;
        uint32_t pres_det              : 1;  /**< [  8:  8](R/W) "Presence detect. If set, logically OR SGPIO_SDATAIN's ID#.0 bit with any GPIO related
                                                                 present detect and send to the relevant SATA controller's mechanical presence detect." */
        uint32_t reserved_9_31         : 23;
#endif /* Word 0 - End */
    } cn8;
    struct cavm_sgp_imp_drivex_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_9_31         : 23;
        uint32_t pres_det              : 1;  /**< [  8:  8](R/W) "Presence detect. If set, logically OR SGPIO_SDATAIN's ID#.0 bit with any GPIO related
                                                                 present detect and send to the relevant SATA controller's mechanical presence detect." */
        uint32_t reserved_5_7          : 3;
        uint32_t ctrlr                 : 5;  /**< [  4:  0](R/W) SATA controller attached to this index's SGPIO drive. Indicates which SATA(0..19) connects
                                                                 to the corresponding indexed SGPIO drive 0..19. Resets to the index number; controller 0
                                                                 for drive 0, controller 1 for drive 1, etc.

                                                                 If SGP_TX()[D0_ACT]..[D3_ACT] = SGP_TX_ACT_E::BRIEF_START or
                                                                 SGP_TX_ACT_E::BRIEF_END, the activity input will come from SATA controller
                                                                 number [CTRLR].  Else, the activity indication is controlled by software alone.

                                                                 If [PRES_DET] is set, SATA controller number [CTRLR] will receive the indexed drive's
                                                                 presence detect. */
#else /* Word 0 - Little Endian */
        uint32_t ctrlr                 : 5;  /**< [  4:  0](R/W) SATA controller attached to this index's SGPIO drive. Indicates which SATA(0..19) connects
                                                                 to the corresponding indexed SGPIO drive 0..19. Resets to the index number; controller 0
                                                                 for drive 0, controller 1 for drive 1, etc.

                                                                 If SGP_TX()[D0_ACT]..[D3_ACT] = SGP_TX_ACT_E::BRIEF_START or
                                                                 SGP_TX_ACT_E::BRIEF_END, the activity input will come from SATA controller
                                                                 number [CTRLR].  Else, the activity indication is controlled by software alone.

                                                                 If [PRES_DET] is set, SATA controller number [CTRLR] will receive the indexed drive's
                                                                 presence detect. */
        uint32_t reserved_5_7          : 3;
        uint32_t pres_det              : 1;  /**< [  8:  8](R/W) "Presence detect. If set, logically OR SGPIO_SDATAIN's ID#.0 bit with any GPIO related
                                                                 present detect and send to the relevant SATA controller's mechanical presence detect." */
        uint32_t reserved_9_31         : 23;
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_sgp_imp_drivex cavm_sgp_imp_drivex_t;

static inline uint64_t CAVM_SGP_IMP_DRIVEX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SGP_IMP_DRIVEX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN8XXX) && (a<=15))
        return 0x87e027040000ll + 8ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=19))
        return 0x87e027040000ll + 8ll * ((a) & 0x1f);
    __cavm_csr_fatal("SGP_IMP_DRIVEX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SGP_IMP_DRIVEX(a) cavm_sgp_imp_drivex_t
#define bustype_CAVM_SGP_IMP_DRIVEX(a) CSR_TYPE_RSL32b
#define basename_CAVM_SGP_IMP_DRIVEX(a) "SGP_IMP_DRIVEX"
#define device_bar_CAVM_SGP_IMP_DRIVEX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SGP_IMP_DRIVEX(a) (a)
#define arguments_CAVM_SGP_IMP_DRIVEX(a) (a),-1,-1,-1

/**
 * Register (RSL32b) sgp_imp_sec_clk
 *
 * SGPIO Implementation Seconds Clock Register
 */
union cavm_sgp_imp_sec_clk
{
    uint32_t u;
    struct cavm_sgp_imp_sec_clk_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t div                   : 16; /**< [ 15:  0](R/W) Coprocessor-clock seconds divisor. Number of GPIO_SCLOCKs per 1/64th second. May
                                                                 only be changed when SGP_CFG0[ENA] and SGP_IMP_CTL[BUSY] are clear. Should be
                                                                 programmed to yield a frequency of 64 Hz; reset value assumes GPIO_SCLOCK of 100
                                                                 kHz. */
#else /* Word 0 - Little Endian */
        uint32_t div                   : 16; /**< [ 15:  0](R/W) Coprocessor-clock seconds divisor. Number of GPIO_SCLOCKs per 1/64th second. May
                                                                 only be changed when SGP_CFG0[ENA] and SGP_IMP_CTL[BUSY] are clear. Should be
                                                                 programmed to yield a frequency of 64 Hz; reset value assumes GPIO_SCLOCK of 100
                                                                 kHz. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sgp_imp_sec_clk_s cn8; */
    struct cavm_sgp_imp_sec_clk_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t div                   : 16; /**< [ 15:  0](R/W) 100 MHz reference-clock seconds divisor. Number of SGPIO_SCLOCK cycles per 1/64th
                                                                 second. May only be changed when SGP_CFG0[ENA] and SGP_IMP_CTL[BUSY] are
                                                                 clear. Should be programmed to yield a frequency of 64 Hz; reset value assumes
                                                                 SGPIO_SCLOCK of 100 kHz. */
#else /* Word 0 - Little Endian */
        uint32_t div                   : 16; /**< [ 15:  0](R/W) 100 MHz reference-clock seconds divisor. Number of SGPIO_SCLOCK cycles per 1/64th
                                                                 second. May only be changed when SGP_CFG0[ENA] and SGP_IMP_CTL[BUSY] are
                                                                 clear. Should be programmed to yield a frequency of 64 Hz; reset value assumes
                                                                 SGPIO_SCLOCK of 100 kHz. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_sgp_imp_sec_clk cavm_sgp_imp_sec_clk_t;

#define CAVM_SGP_IMP_SEC_CLK CAVM_SGP_IMP_SEC_CLK_FUNC()
static inline uint64_t CAVM_SGP_IMP_SEC_CLK_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SGP_IMP_SEC_CLK_FUNC(void)
{
    return 0x87e027030020ll;
}

#define typedef_CAVM_SGP_IMP_SEC_CLK cavm_sgp_imp_sec_clk_t
#define bustype_CAVM_SGP_IMP_SEC_CLK CSR_TYPE_RSL32b
#define basename_CAVM_SGP_IMP_SEC_CLK "SGP_IMP_SEC_CLK"
#define device_bar_CAVM_SGP_IMP_SEC_CLK 0x0 /* PF_BAR0 */
#define busnum_CAVM_SGP_IMP_SEC_CLK 0
#define arguments_CAVM_SGP_IMP_SEC_CLK -1,-1,-1,-1

/**
 * Register (RSL32b) sgp_rx#
 *
 * SGPIO Receive Registers
 */
union cavm_sgp_rxx
{
    uint32_t u;
    struct cavm_sgp_rxx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t rx3                   : 3;  /**< [ 26: 24](RO/H) Three bits received on SGPIO_SDATAIN corresponding to drive 3+4*index. */
        uint32_t reserved_19_23        : 5;
        uint32_t rx2                   : 3;  /**< [ 18: 16](RO/H) Three bits received on SGPIO_SDATAIN corresponding to drive 2+4*index. */
        uint32_t reserved_11_15        : 5;
        uint32_t rx1                   : 3;  /**< [ 10:  8](RO/H) Three bits received on SGPIO_SDATAIN corresponding to drive 1+4*index. */
        uint32_t reserved_3_7          : 5;
        uint32_t rx0                   : 3;  /**< [  2:  0](RO/H) Three bits received on SGPIO_SDATAIN corresponding to drive 0+4*index. */
#else /* Word 0 - Little Endian */
        uint32_t rx0                   : 3;  /**< [  2:  0](RO/H) Three bits received on SGPIO_SDATAIN corresponding to drive 0+4*index. */
        uint32_t reserved_3_7          : 5;
        uint32_t rx1                   : 3;  /**< [ 10:  8](RO/H) Three bits received on SGPIO_SDATAIN corresponding to drive 1+4*index. */
        uint32_t reserved_11_15        : 5;
        uint32_t rx2                   : 3;  /**< [ 18: 16](RO/H) Three bits received on SGPIO_SDATAIN corresponding to drive 2+4*index. */
        uint32_t reserved_19_23        : 5;
        uint32_t rx3                   : 3;  /**< [ 26: 24](RO/H) Three bits received on SGPIO_SDATAIN corresponding to drive 3+4*index. */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sgp_rxx_s cn; */
};
typedef union cavm_sgp_rxx cavm_sgp_rxx_t;

static inline uint64_t CAVM_SGP_RXX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SGP_RXX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN8XXX) && (a<=3))
        return 0x87e027000400ll + 4ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=4))
        return 0x87e027000400ll + 4ll * ((a) & 0x7);
    __cavm_csr_fatal("SGP_RXX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SGP_RXX(a) cavm_sgp_rxx_t
#define bustype_CAVM_SGP_RXX(a) CSR_TYPE_RSL32b
#define basename_CAVM_SGP_RXX(a) "SGP_RXX"
#define device_bar_CAVM_SGP_RXX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SGP_RXX(a) (a)
#define arguments_CAVM_SGP_RXX(a) (a),-1,-1,-1

/**
 * Register (RSL32b) sgp_rx_gp#
 *
 * SGPIO Receive GPIO Registers
 */
union cavm_sgp_rx_gpx
{
    uint32_t u;
    struct cavm_sgp_rx_gpx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sdatain3              : 8;  /**< [ 31: 24](RO/H) See [SDATAIN0]. */
        uint32_t sdatain2              : 8;  /**< [ 23: 16](RO/H) See [SDATAIN0]. */
        uint32_t sdatain1              : 8;  /**< [ 15:  8](RO/H) See [SDATAIN0]. */
        uint32_t sdatain0              : 8;  /**< [  7:  0](RO/H) Raw data shifted from SGPIO_SDATAIN. The bits are not in natural 32-bit form; they are
                                                                 assigned to registers as follows:
                                                                 _ Bit 0 (ID0.0): SGP_RX_GP(1)[SDATAIN3]\<0\>.
                                                                 _ Bit 8 (ID2.2): SGP_RX_GP(1)[SDATAIN2]\<0\>.
                                                                 _ Bit 16 (ID5.1): SGP_RX_GP(1)[SDATAIN1]\<0\>.
                                                                 _ Bit 24 (ID8.0): SGP_RX_GP(1)[SDATAIN0]\<0\>.
                                                                 _ Bit 32 (ID10.2): SGP_RX_GP(2)[SDATAIN3]\<0\>.
                                                                 _ Bit 40 (ID13.1): SGP_RX_GP(2)[SDATAIN2]\<0\>.
                                                                 _ Bit 47 (ID15.2): SGP_RX_GP(2)[SDATAIN2]\<7\>.

                                                                 SGP_RX_GP(2)[SDATAIN1/SDATAIN0] are always zero. */
#else /* Word 0 - Little Endian */
        uint32_t sdatain0              : 8;  /**< [  7:  0](RO/H) Raw data shifted from SGPIO_SDATAIN. The bits are not in natural 32-bit form; they are
                                                                 assigned to registers as follows:
                                                                 _ Bit 0 (ID0.0): SGP_RX_GP(1)[SDATAIN3]\<0\>.
                                                                 _ Bit 8 (ID2.2): SGP_RX_GP(1)[SDATAIN2]\<0\>.
                                                                 _ Bit 16 (ID5.1): SGP_RX_GP(1)[SDATAIN1]\<0\>.
                                                                 _ Bit 24 (ID8.0): SGP_RX_GP(1)[SDATAIN0]\<0\>.
                                                                 _ Bit 32 (ID10.2): SGP_RX_GP(2)[SDATAIN3]\<0\>.
                                                                 _ Bit 40 (ID13.1): SGP_RX_GP(2)[SDATAIN2]\<0\>.
                                                                 _ Bit 47 (ID15.2): SGP_RX_GP(2)[SDATAIN2]\<7\>.

                                                                 SGP_RX_GP(2)[SDATAIN1/SDATAIN0] are always zero. */
        uint32_t sdatain1              : 8;  /**< [ 15:  8](RO/H) See [SDATAIN0]. */
        uint32_t sdatain2              : 8;  /**< [ 23: 16](RO/H) See [SDATAIN0]. */
        uint32_t sdatain3              : 8;  /**< [ 31: 24](RO/H) See [SDATAIN0]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sgp_rx_gpx_s cn8; */
    struct cavm_sgp_rx_gpx_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sdatain3              : 8;  /**< [ 31: 24](RO/H) See [SDATAIN0]. */
        uint32_t sdatain2              : 8;  /**< [ 23: 16](RO/H) See [SDATAIN0]. */
        uint32_t sdatain1              : 8;  /**< [ 15:  8](RO/H) See [SDATAIN0]. */
        uint32_t sdatain0              : 8;  /**< [  7:  0](RO/H) Raw data shifted from SGPIO_SDATAIN. The bits are not in natural 32-bit form; they are
                                                                 assigned to registers as follows:
                                                                 _ Bit 0 (ID0.0): SGP_RX_GP(1)[SDATAIN3]\<0\>.
                                                                 _ Bit 8 (ID2.2): SGP_RX_GP(1)[SDATAIN2]\<0\>.
                                                                 _ Bit 16 (ID5.1): SGP_RX_GP(1)[SDATAIN1]\<0\>.
                                                                 _ Bit 24 (ID8.0): SGP_RX_GP(1)[SDATAIN0]\<0\>.
                                                                 _ Bit 32 (ID10.2): SGP_RX_GP(2)[SDATAIN3]\<0\>.
                                                                 _ Bit 40 (ID13.1): SGP_RX_GP(2)[SDATAIN2]\<0\>.
                                                                 _ Bit 48 (ID16.0): SGP_RX_GP(2)[SDATAIN1]\<0\>.
                                                                 _ Bit 56 (ID18.2): SGP_RX_GP(2)[SDATAIN0]\<0\>.
                                                                 _ Bit 59 (ID19.2): SGP_RX_GP(2)[SDATAIN0]\<3\>. */
#else /* Word 0 - Little Endian */
        uint32_t sdatain0              : 8;  /**< [  7:  0](RO/H) Raw data shifted from SGPIO_SDATAIN. The bits are not in natural 32-bit form; they are
                                                                 assigned to registers as follows:
                                                                 _ Bit 0 (ID0.0): SGP_RX_GP(1)[SDATAIN3]\<0\>.
                                                                 _ Bit 8 (ID2.2): SGP_RX_GP(1)[SDATAIN2]\<0\>.
                                                                 _ Bit 16 (ID5.1): SGP_RX_GP(1)[SDATAIN1]\<0\>.
                                                                 _ Bit 24 (ID8.0): SGP_RX_GP(1)[SDATAIN0]\<0\>.
                                                                 _ Bit 32 (ID10.2): SGP_RX_GP(2)[SDATAIN3]\<0\>.
                                                                 _ Bit 40 (ID13.1): SGP_RX_GP(2)[SDATAIN2]\<0\>.
                                                                 _ Bit 48 (ID16.0): SGP_RX_GP(2)[SDATAIN1]\<0\>.
                                                                 _ Bit 56 (ID18.2): SGP_RX_GP(2)[SDATAIN0]\<0\>.
                                                                 _ Bit 59 (ID19.2): SGP_RX_GP(2)[SDATAIN0]\<3\>. */
        uint32_t sdatain1              : 8;  /**< [ 15:  8](RO/H) See [SDATAIN0]. */
        uint32_t sdatain2              : 8;  /**< [ 23: 16](RO/H) See [SDATAIN0]. */
        uint32_t sdatain3              : 8;  /**< [ 31: 24](RO/H) See [SDATAIN0]. */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_sgp_rx_gpx cavm_sgp_rx_gpx_t;

static inline uint64_t CAVM_SGP_RX_GPX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SGP_RX_GPX(uint64_t a)
{
    if ((a>=1)&&(a<=2))
        return 0x87e027000800ll + 4ll * ((a) & 0x3);
    __cavm_csr_fatal("SGP_RX_GPX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SGP_RX_GPX(a) cavm_sgp_rx_gpx_t
#define bustype_CAVM_SGP_RX_GPX(a) CSR_TYPE_RSL32b
#define basename_CAVM_SGP_RX_GPX(a) "SGP_RX_GPX"
#define device_bar_CAVM_SGP_RX_GPX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SGP_RX_GPX(a) (a)
#define arguments_CAVM_SGP_RX_GPX(a) (a),-1,-1,-1

/**
 * Register (RSL32b) sgp_rx_gp_cfg
 *
 * SGPIO Receive GPIO Configuration Register
 */
union cavm_sgp_rx_gp_cfg
{
    uint32_t u;
    struct cavm_sgp_rx_gp_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t count                 : 8;  /**< [ 23: 16](RO/H) Number of repetitions remaining. A [COUNT] of 0xFF indicates infinite repetitions are remaining. */
        uint32_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_15         : 16;
        uint32_t count                 : 8;  /**< [ 23: 16](RO/H) Number of repetitions remaining. A [COUNT] of 0xFF indicates infinite repetitions are remaining. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sgp_rx_gp_cfg_s cn; */
};
typedef union cavm_sgp_rx_gp_cfg cavm_sgp_rx_gp_cfg_t;

#define CAVM_SGP_RX_GP_CFG CAVM_SGP_RX_GP_CFG_FUNC()
static inline uint64_t CAVM_SGP_RX_GP_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SGP_RX_GP_CFG_FUNC(void)
{
    return 0x87e027000800ll;
}

#define typedef_CAVM_SGP_RX_GP_CFG cavm_sgp_rx_gp_cfg_t
#define bustype_CAVM_SGP_RX_GP_CFG CSR_TYPE_RSL32b
#define basename_CAVM_SGP_RX_GP_CFG "SGP_RX_GP_CFG"
#define device_bar_CAVM_SGP_RX_GP_CFG 0x0 /* PF_BAR0 */
#define busnum_CAVM_SGP_RX_GP_CFG 0
#define arguments_CAVM_SGP_RX_GP_CFG -1,-1,-1,-1

/**
 * Register (RSL32b) sgp_tx#
 *
 * SGPIO Transmit Registers
 */
union cavm_sgp_txx
{
    uint32_t u;
    struct cavm_sgp_txx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t d3_act                : 3;  /**< [ 31: 29](R/W) Drive 3+4*index's activity state. */
        uint32_t d3_loc                : 2;  /**< [ 28: 27](R/W) Drive 3+4*index's locate state. */
        uint32_t d3_err                : 3;  /**< [ 26: 24](R/W) Drive 3+4*index's error state. */
        uint32_t d2_act                : 3;  /**< [ 23: 21](R/W) Drive 2+4*index's activity state. */
        uint32_t d2_loc                : 2;  /**< [ 20: 19](R/W) Drive 2+4*index's locate state. */
        uint32_t d2_err                : 3;  /**< [ 18: 16](R/W) Drive 2+4*index's error state. */
        uint32_t d1_act                : 3;  /**< [ 15: 13](R/W) Drive 1+4*index's activity state. */
        uint32_t d1_loc                : 2;  /**< [ 12: 11](R/W) Drive 1+4*index's locate state. */
        uint32_t d1_err                : 3;  /**< [ 10:  8](R/W) Drive 1+4*index's error state. */
        uint32_t d0_act                : 3;  /**< [  7:  5](R/W) Drive 0+4*index's activity state, enumerated by SGP_TX_ACT_E. */
        uint32_t d0_loc                : 2;  /**< [  4:  3](R/W) Drive 0+4*index's locate state, enumerated by SGP_TX_LOC_E. */
        uint32_t d0_err                : 3;  /**< [  2:  0](R/W) Drive 0+4*index's error state, enumerated by SGP_TX_ERR_E. */
#else /* Word 0 - Little Endian */
        uint32_t d0_err                : 3;  /**< [  2:  0](R/W) Drive 0+4*index's error state, enumerated by SGP_TX_ERR_E. */
        uint32_t d0_loc                : 2;  /**< [  4:  3](R/W) Drive 0+4*index's locate state, enumerated by SGP_TX_LOC_E. */
        uint32_t d0_act                : 3;  /**< [  7:  5](R/W) Drive 0+4*index's activity state, enumerated by SGP_TX_ACT_E. */
        uint32_t d1_err                : 3;  /**< [ 10:  8](R/W) Drive 1+4*index's error state. */
        uint32_t d1_loc                : 2;  /**< [ 12: 11](R/W) Drive 1+4*index's locate state. */
        uint32_t d1_act                : 3;  /**< [ 15: 13](R/W) Drive 1+4*index's activity state. */
        uint32_t d2_err                : 3;  /**< [ 18: 16](R/W) Drive 2+4*index's error state. */
        uint32_t d2_loc                : 2;  /**< [ 20: 19](R/W) Drive 2+4*index's locate state. */
        uint32_t d2_act                : 3;  /**< [ 23: 21](R/W) Drive 2+4*index's activity state. */
        uint32_t d3_err                : 3;  /**< [ 26: 24](R/W) Drive 3+4*index's error state. */
        uint32_t d3_loc                : 2;  /**< [ 28: 27](R/W) Drive 3+4*index's locate state. */
        uint32_t d3_act                : 3;  /**< [ 31: 29](R/W) Drive 3+4*index's activity state. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sgp_txx_s cn; */
};
typedef union cavm_sgp_txx cavm_sgp_txx_t;

static inline uint64_t CAVM_SGP_TXX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SGP_TXX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN8XXX) && (a<=3))
        return 0x87e027000c00ll + 4ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=4))
        return 0x87e027000c00ll + 4ll * ((a) & 0x7);
    __cavm_csr_fatal("SGP_TXX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SGP_TXX(a) cavm_sgp_txx_t
#define bustype_CAVM_SGP_TXX(a) CSR_TYPE_RSL32b
#define basename_CAVM_SGP_TXX(a) "SGP_TXX"
#define device_bar_CAVM_SGP_TXX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SGP_TXX(a) (a)
#define arguments_CAVM_SGP_TXX(a) (a),-1,-1,-1

/**
 * Register (RSL32b) sgp_tx_gp#
 *
 * SGPIO Transmit GPIO Registers
 */
union cavm_sgp_tx_gpx
{
    uint32_t u;
    struct cavm_sgp_tx_gpx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sdataout3             : 8;  /**< [ 31: 24](R/W) See [SDATAOUT0]. */
        uint32_t sdataout2             : 8;  /**< [ 23: 16](R/W) See [SDATAOUT0]. */
        uint32_t sdataout1             : 8;  /**< [ 15:  8](R/W) See [SDATAOUT0]. */
        uint32_t sdataout0             : 8;  /**< [  7:  0](R/W) Raw data to shift onto SGPIO_SDATAOUT. The bits are not in natural 32-bit form; they are
                                                                 assigned to registers as follows:
                                                                 _ Bit 0 (ID0.0): SGP_TX_GP(1)[SDATAOUT3]\<0\>.
                                                                 _ Bit 8 (ID2.2): SGP_TX_GP(1)[SDATAOUT2]\<0\>.
                                                                 _ Bit 16 (ID5.1): SGP_TX_GP(1)[SDATAOUT1]\<0\>.
                                                                 _ Bit 24 (ID8.0): SGP_TX_GP(1)[SDATAOUT0]\<0\>.
                                                                 _ Bit 32 (ID10.2): SGP_TX_GP(2)[SDATAOUT3]\<0\>.
                                                                 _ Bit 40 (ID13.1): SGP_TX_GP(2)[SDATAOUT2]\<0\>.
                                                                 _ Bit 47 (ID15.2): SGP_TX_GP(2)[SDATAOUT2]\<7\>.

                                                                 SGP_TX_GP(2)[SDATAOUT1/SDATAOUT0] are ignored. */
#else /* Word 0 - Little Endian */
        uint32_t sdataout0             : 8;  /**< [  7:  0](R/W) Raw data to shift onto SGPIO_SDATAOUT. The bits are not in natural 32-bit form; they are
                                                                 assigned to registers as follows:
                                                                 _ Bit 0 (ID0.0): SGP_TX_GP(1)[SDATAOUT3]\<0\>.
                                                                 _ Bit 8 (ID2.2): SGP_TX_GP(1)[SDATAOUT2]\<0\>.
                                                                 _ Bit 16 (ID5.1): SGP_TX_GP(1)[SDATAOUT1]\<0\>.
                                                                 _ Bit 24 (ID8.0): SGP_TX_GP(1)[SDATAOUT0]\<0\>.
                                                                 _ Bit 32 (ID10.2): SGP_TX_GP(2)[SDATAOUT3]\<0\>.
                                                                 _ Bit 40 (ID13.1): SGP_TX_GP(2)[SDATAOUT2]\<0\>.
                                                                 _ Bit 47 (ID15.2): SGP_TX_GP(2)[SDATAOUT2]\<7\>.

                                                                 SGP_TX_GP(2)[SDATAOUT1/SDATAOUT0] are ignored. */
        uint32_t sdataout1             : 8;  /**< [ 15:  8](R/W) See [SDATAOUT0]. */
        uint32_t sdataout2             : 8;  /**< [ 23: 16](R/W) See [SDATAOUT0]. */
        uint32_t sdataout3             : 8;  /**< [ 31: 24](R/W) See [SDATAOUT0]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sgp_tx_gpx_s cn8; */
    struct cavm_sgp_tx_gpx_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sdataout3             : 8;  /**< [ 31: 24](R/W) See [SDATAOUT0]. */
        uint32_t sdataout2             : 8;  /**< [ 23: 16](R/W) See [SDATAOUT0]. */
        uint32_t sdataout1             : 8;  /**< [ 15:  8](R/W) See [SDATAOUT0]. */
        uint32_t sdataout0             : 8;  /**< [  7:  0](R/W) Raw data to shift onto SGPIO_SDATAOUT. The bits are not in natural 32-bit form; they are
                                                                 assigned to registers as follows:
                                                                 _ Bit 0 (ID0.0): SGP_TX_GP(1)[SDATAOUT3]\<0\>.
                                                                 _ Bit 8 (ID2.2): SGP_TX_GP(1)[SDATAOUT2]\<0\>.
                                                                 _ Bit 16 (ID5.1): SGP_TX_GP(1)[SDATAOUT1]\<0\>.
                                                                 _ Bit 24 (ID8.0): SGP_TX_GP(1)[SDATAOUT0]\<0\>.
                                                                 _ Bit 32 (ID10.2): SGP_TX_GP(2)[SDATAOUT3]\<0\>.
                                                                 _ Bit 40 (ID13.1): SGP_TX_GP(2)[SDATAOUT2]\<0\>.
                                                                 _ Bit 47 (ID15.2): SGP_TX_GP(2)[SDATAOUT2]\<7\>.
                                                                 _ Bit 48 (ID16.0): SGP_TX_GP(2)[SDATAOUT1]\<0\>.
                                                                 _ Bit 56 (ID18.2): SGP_TX_GP(2)[SDATAOUT0]\<0\>.
                                                                 _ Bit 59 (ID19.2): SGP_TX_GP(2)[SDATAOUT0]\<3\>. */
#else /* Word 0 - Little Endian */
        uint32_t sdataout0             : 8;  /**< [  7:  0](R/W) Raw data to shift onto SGPIO_SDATAOUT. The bits are not in natural 32-bit form; they are
                                                                 assigned to registers as follows:
                                                                 _ Bit 0 (ID0.0): SGP_TX_GP(1)[SDATAOUT3]\<0\>.
                                                                 _ Bit 8 (ID2.2): SGP_TX_GP(1)[SDATAOUT2]\<0\>.
                                                                 _ Bit 16 (ID5.1): SGP_TX_GP(1)[SDATAOUT1]\<0\>.
                                                                 _ Bit 24 (ID8.0): SGP_TX_GP(1)[SDATAOUT0]\<0\>.
                                                                 _ Bit 32 (ID10.2): SGP_TX_GP(2)[SDATAOUT3]\<0\>.
                                                                 _ Bit 40 (ID13.1): SGP_TX_GP(2)[SDATAOUT2]\<0\>.
                                                                 _ Bit 47 (ID15.2): SGP_TX_GP(2)[SDATAOUT2]\<7\>.
                                                                 _ Bit 48 (ID16.0): SGP_TX_GP(2)[SDATAOUT1]\<0\>.
                                                                 _ Bit 56 (ID18.2): SGP_TX_GP(2)[SDATAOUT0]\<0\>.
                                                                 _ Bit 59 (ID19.2): SGP_TX_GP(2)[SDATAOUT0]\<3\>. */
        uint32_t sdataout1             : 8;  /**< [ 15:  8](R/W) See [SDATAOUT0]. */
        uint32_t sdataout2             : 8;  /**< [ 23: 16](R/W) See [SDATAOUT0]. */
        uint32_t sdataout3             : 8;  /**< [ 31: 24](R/W) See [SDATAOUT0]. */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_sgp_tx_gpx cavm_sgp_tx_gpx_t;

static inline uint64_t CAVM_SGP_TX_GPX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SGP_TX_GPX(uint64_t a)
{
    if ((a>=1)&&(a<=2))
        return 0x87e027001000ll + 4ll * ((a) & 0x3);
    __cavm_csr_fatal("SGP_TX_GPX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SGP_TX_GPX(a) cavm_sgp_tx_gpx_t
#define bustype_CAVM_SGP_TX_GPX(a) CSR_TYPE_RSL32b
#define basename_CAVM_SGP_TX_GPX(a) "SGP_TX_GPX"
#define device_bar_CAVM_SGP_TX_GPX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SGP_TX_GPX(a) (a)
#define arguments_CAVM_SGP_TX_GPX(a) (a),-1,-1,-1

/**
 * Register (RSL32b) sgp_tx_gp_cfg
 *
 * SGPIO Transmit GPIO Configuration Register
 */
union cavm_sgp_tx_gp_cfg
{
    uint32_t u;
    struct cavm_sgp_tx_gp_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_28_31        : 4;
        uint32_t sload                 : 4;  /**< [ 27: 24](R/W) Pattern to transmit on SGPIO_SLOAD at the start of each general purpose bit stream.
                                                                 [SLOAD]\<0\> is the first bit (L0), \<3\> is the last bit (L3). */
        uint32_t count                 : 8;  /**< [ 23: 16](R/W) Number of times to transmit the SGP_TX_GP(1..2) pattern and receive
                                                                 into SGP_RX_GP(1..2). A [COUNT] of 0xFF transmits continuously until [COUNT] is set to
                                                                 non-0xFF. */
        uint32_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_15         : 16;
        uint32_t count                 : 8;  /**< [ 23: 16](R/W) Number of times to transmit the SGP_TX_GP(1..2) pattern and receive
                                                                 into SGP_RX_GP(1..2). A [COUNT] of 0xFF transmits continuously until [COUNT] is set to
                                                                 non-0xFF. */
        uint32_t sload                 : 4;  /**< [ 27: 24](R/W) Pattern to transmit on SGPIO_SLOAD at the start of each general purpose bit stream.
                                                                 [SLOAD]\<0\> is the first bit (L0), \<3\> is the last bit (L3). */
        uint32_t reserved_28_31        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sgp_tx_gp_cfg_s cn; */
};
typedef union cavm_sgp_tx_gp_cfg cavm_sgp_tx_gp_cfg_t;

#define CAVM_SGP_TX_GP_CFG CAVM_SGP_TX_GP_CFG_FUNC()
static inline uint64_t CAVM_SGP_TX_GP_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SGP_TX_GP_CFG_FUNC(void)
{
    return 0x87e027001000ll;
}

#define typedef_CAVM_SGP_TX_GP_CFG cavm_sgp_tx_gp_cfg_t
#define bustype_CAVM_SGP_TX_GP_CFG CSR_TYPE_RSL32b
#define basename_CAVM_SGP_TX_GP_CFG "SGP_TX_GP_CFG"
#define device_bar_CAVM_SGP_TX_GP_CFG 0x0 /* PF_BAR0 */
#define busnum_CAVM_SGP_TX_GP_CFG 0
#define arguments_CAVM_SGP_TX_GP_CFG -1,-1,-1,-1

#endif /* __CAVM_CSRS_SGP_H__ */
