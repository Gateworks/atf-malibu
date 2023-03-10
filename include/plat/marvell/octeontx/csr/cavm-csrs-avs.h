#ifndef __CAVM_CSRS_AVS_H__
#define __CAVM_CSRS_AVS_H__
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
 * OcteonTX AVS.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration avs_bar_e
 *
 * AVS Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_AVS_BAR_E_AVS_PF_BAR0 (0x80a000000000ll)
#define CAVM_AVS_BAR_E_AVS_PF_BAR0_SIZE 0x10000ull
#define CAVM_AVS_BAR_E_AVS_PF_BAR4 (0x80a000f00000ll)
#define CAVM_AVS_BAR_E_AVS_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration avs_bus_status_e
 *
 * AVS AVSBus Status Enumeration
 * Bit positions of the data fields used in a read or write of the \<AVSBus_Status\>.
 * Note this is different than the format used by the \<StatusResp\>.
 */
#define CAVM_AVS_BUS_STATUS_E_IOUT_OC_WARNING (0xe)
#define CAVM_AVS_BUS_STATUS_E_IOUT_OT_WARNING (0xc)
#define CAVM_AVS_BUS_STATUS_E_POUT_OP_WARNING (0xb)
#define CAVM_AVS_BUS_STATUS_E_VDONE (0xf)
#define CAVM_AVS_BUS_STATUS_E_VOUT_UV_WARNING (0xd)

/**
 * Enumeration avs_cmd_e
 *
 * AVS Command Enumeration
 * Enumerates the master frame Cmd field to send on next AVS_STS[START].
 */
#define CAVM_AVS_CMD_E_READ (3)
#define CAVM_AVS_CMD_E_WRITE_AND_COMMIT (0)
#define CAVM_AVS_CMD_E_WRITE_AND_HOLD (1)

/**
 * Enumeration avs_cmddatatype_e
 *
 * AVS Command Group Enumeration
 * Enumerates the type of data to which the Cmd applies for CmdGroup=STD.
 */
#define CAVM_AVS_CMDDATATYPE_E_AVSBUS_STATUS (0xe)
#define CAVM_AVS_CMDDATATYPE_E_AVSBUS_VERSION (0xf)
#define CAVM_AVS_CMDDATATYPE_E_RAIL_CURRENT (2)
#define CAVM_AVS_CMDDATATYPE_E_RAIL_POWER_MODE (5)
#define CAVM_AVS_CMDDATATYPE_E_RAIL_TEMPERATURE (3)
#define CAVM_AVS_CMDDATATYPE_E_RESET_RAIL_VOLTAGE_TO_DEFAULT (4)
#define CAVM_AVS_CMDDATATYPE_E_TARGET_RAIL_VOLTAGE (0)
#define CAVM_AVS_CMDDATATYPE_E_TARGET_RAIL_VOUT_TRANSITION_RATE (1)

/**
 * Enumeration avs_cmdgroup_e
 *
 * AVS Command Group Enumeration
 * Enumerates the master frame CmdGroup to send on next AVS_STS[START].
 */
#define CAVM_AVS_CMDGROUP_E_MFG_SPECIFIC (1)
#define CAVM_AVS_CMDGROUP_E_STD (0)

/**
 * Enumeration avs_int_vec_e
 *
 * AVS MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_AVS_INT_VEC_E_INTS (0)

/**
 * Enumeration avs_slaveack_e
 *
 * AVS SlaveAck Enumeration
 * Received response frame's SlaveACK field.
 */
#define CAVM_AVS_SLAVEACK_E_ACTION_TAKEN (0)
#define CAVM_AVS_SLAVEACK_E_BAD_CRC (2)
#define CAVM_AVS_SLAVEACK_E_GOOD_CMD_NO_ACTION (1)
#define CAVM_AVS_SLAVEACK_E_GOOD_CRC_BAD_CMD (3)

/**
 * Enumeration avs_statusresp_e
 *
 * AVS Status Response Bit Number Enumeration
 * Enumerates the bit positions of the bits in AVS_SDATA[STATUSRESP] received after
 * every transaction.
 * Note this is different than the data returned by an AVSBus_Status read.
 */
#define CAVM_AVS_STATUSRESP_E_AVSBUS_CONTROL (2)
#define CAVM_AVS_STATUSRESP_E_STATUS_ALERT (3)
#define CAVM_AVS_STATUSRESP_E_VDONE (4)

/**
 * Register (NCB) avs_cfg
 *
 * AVS Configuration Register
 * This register provides configuration for the AVS interface.
 */
union cavm_avs_cfg
{
    uint64_t u;
    struct cavm_avs_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_29_63        : 35;
        uint64_t clkdiv                : 13; /**< [ 28: 16](R/W) Clock divisor. Value 0x0 disables the AVS_CLK pin.
                                                                 AVS_CLK = 100 MHz reference clock / (2 * [CLKDIV]).

                                                                 Or, restated,
                                                                 [CLKDIV]  = 100 MHz reference clock / (2 * AVS_CLK). */
        uint64_t reserved_1_15         : 15;
        uint64_t enable                : 1;  /**< [  0:  0](R/W) AVS enable.
                                                                 0 = Pins are tristated.
                                                                 1 = Pins are driven. */
#else /* Word 0 - Little Endian */
        uint64_t enable                : 1;  /**< [  0:  0](R/W) AVS enable.
                                                                 0 = Pins are tristated.
                                                                 1 = Pins are driven. */
        uint64_t reserved_1_15         : 15;
        uint64_t clkdiv                : 13; /**< [ 28: 16](R/W) Clock divisor. Value 0x0 disables the AVS_CLK pin.
                                                                 AVS_CLK = 100 MHz reference clock / (2 * [CLKDIV]).

                                                                 Or, restated,
                                                                 [CLKDIV]  = 100 MHz reference clock / (2 * AVS_CLK). */
        uint64_t reserved_29_63        : 35;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_cfg_s cn; */
};
typedef union cavm_avs_cfg cavm_avs_cfg_t;

#define CAVM_AVS_CFG CAVM_AVS_CFG_FUNC()
static inline uint64_t CAVM_AVS_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_CFG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x80a000000100ll;
    __cavm_csr_fatal("AVS_CFG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_AVS_CFG cavm_avs_cfg_t
#define bustype_CAVM_AVS_CFG CSR_TYPE_NCB
#define basename_CAVM_AVS_CFG "AVS_CFG"
#define device_bar_CAVM_AVS_CFG 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_CFG 0
#define arguments_CAVM_AVS_CFG -1,-1,-1,-1

/**
 * Register (NCB) avs_clken
 *
 * AVS Clock Enable Register
 * This register is to force conditional clock enable.
 */
union cavm_avs_clken
{
    uint64_t u;
    struct cavm_avs_clken_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t clken                 : 1;  /**< [  0:  0](R/W) Force the conditional clocking within AVS to be always on. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t clken                 : 1;  /**< [  0:  0](R/W) Force the conditional clocking within AVS to be always on. For diagnostic use only. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_clken_s cn; */
};
typedef union cavm_avs_clken cavm_avs_clken_t;

#define CAVM_AVS_CLKEN CAVM_AVS_CLKEN_FUNC()
static inline uint64_t CAVM_AVS_CLKEN_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_CLKEN_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x80a000002080ll;
    __cavm_csr_fatal("AVS_CLKEN", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_AVS_CLKEN cavm_avs_clken_t
#define bustype_CAVM_AVS_CLKEN CSR_TYPE_NCB
#define basename_CAVM_AVS_CLKEN "AVS_CLKEN"
#define device_bar_CAVM_AVS_CLKEN 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_CLKEN 0
#define arguments_CAVM_AVS_CLKEN -1,-1,-1,-1

/**
 * Register (NCB) avs_const
 *
 * AVS Constants Register
 * This register contains constants for software discovery.
 */
union cavm_avs_const
{
    uint64_t u;
    struct cavm_avs_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t ver                   : 4;  /**< [  3:  0](RO) AVS version compatible with PMBus 1.3.1. */
#else /* Word 0 - Little Endian */
        uint64_t ver                   : 4;  /**< [  3:  0](RO) AVS version compatible with PMBus 1.3.1. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_const_s cn; */
};
typedef union cavm_avs_const cavm_avs_const_t;

#define CAVM_AVS_CONST CAVM_AVS_CONST_FUNC()
static inline uint64_t CAVM_AVS_CONST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_CONST_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x80a000000000ll;
    __cavm_csr_fatal("AVS_CONST", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_AVS_CONST cavm_avs_const_t
#define bustype_CAVM_AVS_CONST CSR_TYPE_NCB
#define basename_CAVM_AVS_CONST "AVS_CONST"
#define device_bar_CAVM_AVS_CONST 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_CONST 0
#define arguments_CAVM_AVS_CONST -1,-1,-1,-1

/**
 * Register (NCB) avs_int_ena_w1c
 *
 * AVS Interrupt Enable Clear Register
 * This register clears interrupt enables.
 */
union cavm_avs_int_ena_w1c
{
    uint64_t u;
    struct cavm_avs_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t crc_err               : 1;  /**< [  1:  1](R/W1C) Reads or clears AVS_INT_ENA_W1S[CRC_ERR]. */
        uint64_t done                  : 1;  /**< [  0:  0](R/W1C) Reads or clears AVS_INT_ENA_W1S[DONE]. */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 1;  /**< [  0:  0](R/W1C) Reads or clears AVS_INT_ENA_W1S[DONE]. */
        uint64_t crc_err               : 1;  /**< [  1:  1](R/W1C) Reads or clears AVS_INT_ENA_W1S[CRC_ERR]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_int_ena_w1c_s cn; */
};
typedef union cavm_avs_int_ena_w1c cavm_avs_int_ena_w1c_t;

#define CAVM_AVS_INT_ENA_W1C CAVM_AVS_INT_ENA_W1C_FUNC()
static inline uint64_t CAVM_AVS_INT_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_INT_ENA_W1C_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x80a000000210ll;
    __cavm_csr_fatal("AVS_INT_ENA_W1C", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_AVS_INT_ENA_W1C cavm_avs_int_ena_w1c_t
#define bustype_CAVM_AVS_INT_ENA_W1C CSR_TYPE_NCB
#define basename_CAVM_AVS_INT_ENA_W1C "AVS_INT_ENA_W1C"
#define device_bar_CAVM_AVS_INT_ENA_W1C 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_INT_ENA_W1C 0
#define arguments_CAVM_AVS_INT_ENA_W1C -1,-1,-1,-1

/**
 * Register (NCB) avs_int_ena_w1s
 *
 * AVS Interrupt Enable Set Register
 * This register sets interrupt enables.
 */
union cavm_avs_int_ena_w1s
{
    uint64_t u;
    struct cavm_avs_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t crc_err               : 1;  /**< [  1:  1](R/W1S) Enables reporting of AVS_STS[CRC_ERR]. */
        uint64_t done                  : 1;  /**< [  0:  0](R/W1S) Enables reporting of AVS_STS[DONE]. */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 1;  /**< [  0:  0](R/W1S) Enables reporting of AVS_STS[DONE]. */
        uint64_t crc_err               : 1;  /**< [  1:  1](R/W1S) Enables reporting of AVS_STS[CRC_ERR]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_int_ena_w1s_s cn; */
};
typedef union cavm_avs_int_ena_w1s cavm_avs_int_ena_w1s_t;

#define CAVM_AVS_INT_ENA_W1S CAVM_AVS_INT_ENA_W1S_FUNC()
static inline uint64_t CAVM_AVS_INT_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_INT_ENA_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x80a000000218ll;
    __cavm_csr_fatal("AVS_INT_ENA_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_AVS_INT_ENA_W1S cavm_avs_int_ena_w1s_t
#define bustype_CAVM_AVS_INT_ENA_W1S CSR_TYPE_NCB
#define basename_CAVM_AVS_INT_ENA_W1S "AVS_INT_ENA_W1S"
#define device_bar_CAVM_AVS_INT_ENA_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_INT_ENA_W1S 0
#define arguments_CAVM_AVS_INT_ENA_W1S -1,-1,-1,-1

/**
 * Register (NCB) avs_io_ctl
 *
 * AVS I/O Control Register
 */
union cavm_avs_io_ctl
{
    uint64_t u;
    struct cavm_avs_io_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t drive                 : 2;  /**< [  3:  2](R/W) AVS bus pin output drive strength.
                                                                 0x0 = 2 mA.
                                                                 0x1 = 4 mA.
                                                                 0x2 = 8 mA.
                                                                 0x3 = 16 mA. */
        uint64_t reserved_1            : 1;
        uint64_t slew                  : 1;  /**< [  0:  0](R/W) AVS bus pins output slew rate control.
                                                                 0 = Low slew rate.
                                                                 1 = High slew rate. */
#else /* Word 0 - Little Endian */
        uint64_t slew                  : 1;  /**< [  0:  0](R/W) AVS bus pins output slew rate control.
                                                                 0 = Low slew rate.
                                                                 1 = High slew rate. */
        uint64_t reserved_1            : 1;
        uint64_t drive                 : 2;  /**< [  3:  2](R/W) AVS bus pin output drive strength.
                                                                 0x0 = 2 mA.
                                                                 0x1 = 4 mA.
                                                                 0x2 = 8 mA.
                                                                 0x3 = 16 mA. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_io_ctl_s cn9; */
    /* struct cavm_avs_io_ctl_s cn96xxp1; */
    struct cavm_avs_io_ctl_cn96xxp3
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t drive                 : 2;  /**< [  3:  2](R/W) AVS bus pin output drive strength.
                                                                 0x0 = 2 mA.
                                                                 0x1 = 4 mA.
                                                                 0x2 = 8 mA.
                                                                 0x3 = 16 mA. */
        uint64_t reserved_1            : 1;
        uint64_t slew                  : 1;  /**< [  0:  0](R/W) AVS bus pin output slew rate control.
                                                                 0 = High slew rate.
                                                                 1 = Low slew rate. */
#else /* Word 0 - Little Endian */
        uint64_t slew                  : 1;  /**< [  0:  0](R/W) AVS bus pin output slew rate control.
                                                                 0 = High slew rate.
                                                                 1 = Low slew rate. */
        uint64_t reserved_1            : 1;
        uint64_t drive                 : 2;  /**< [  3:  2](R/W) AVS bus pin output drive strength.
                                                                 0x0 = 2 mA.
                                                                 0x1 = 4 mA.
                                                                 0x2 = 8 mA.
                                                                 0x3 = 16 mA. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } cn96xxp3;
    struct cavm_avs_io_ctl_cn96xxp4
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t drive                 : 2;  /**< [  3:  2](R/W) AVS bus pin output drive strength.
                                                                 0x0 = 3 mA.
                                                                 0x1 = 3 mA.
                                                                 0x2 = 6 mA.
                                                                 0x3 = 12 mA. */
        uint64_t reserved_1            : 1;
        uint64_t slew                  : 1;  /**< [  0:  0](R/W) AVS bus pin output slew rate control.
                                                                 0 = High slew rate.
                                                                 1 = Low slew rate. */
#else /* Word 0 - Little Endian */
        uint64_t slew                  : 1;  /**< [  0:  0](R/W) AVS bus pin output slew rate control.
                                                                 0 = High slew rate.
                                                                 1 = Low slew rate. */
        uint64_t reserved_1            : 1;
        uint64_t drive                 : 2;  /**< [  3:  2](R/W) AVS bus pin output drive strength.
                                                                 0x0 = 3 mA.
                                                                 0x1 = 3 mA.
                                                                 0x2 = 6 mA.
                                                                 0x3 = 12 mA. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } cn96xxp4;
    /* struct cavm_avs_io_ctl_cn96xxp3 cn98xx; */
    /* struct cavm_avs_io_ctl_s cnf95xxp1; */
    /* struct cavm_avs_io_ctl_cn96xxp3 cnf95xxp2; */
    /* struct cavm_avs_io_ctl_cn96xxp4 cnf95xxp3; */
    /* struct cavm_avs_io_ctl_cn96xxp3 f95mm; */
    /* struct cavm_avs_io_ctl_cn96xxp3 f95o_p1; */
    /* struct cavm_avs_io_ctl_cn96xxp4 f95o_p2; */
    /* struct cavm_avs_io_ctl_cn96xxp3 loki_p1; */
    /* struct cavm_avs_io_ctl_cn96xxp4 loki_p2; */
};
typedef union cavm_avs_io_ctl cavm_avs_io_ctl_t;

#define CAVM_AVS_IO_CTL CAVM_AVS_IO_CTL_FUNC()
static inline uint64_t CAVM_AVS_IO_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_IO_CTL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x80a000000128ll;
    __cavm_csr_fatal("AVS_IO_CTL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_AVS_IO_CTL cavm_avs_io_ctl_t
#define bustype_CAVM_AVS_IO_CTL CSR_TYPE_NCB
#define basename_CAVM_AVS_IO_CTL "AVS_IO_CTL"
#define device_bar_CAVM_AVS_IO_CTL 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_IO_CTL 0
#define arguments_CAVM_AVS_IO_CTL -1,-1,-1,-1

/**
 * Register (NCB) avs_mdata
 *
 * AVS Master Data Transmitting Register
 * This register contains the data to transmit on the AVS_MDATA signal.
 */
union cavm_avs_mdata
{
    uint64_t u;
    struct cavm_avs_mdata_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t startcode             : 2;  /**< [ 31: 30](R/W) Master frame StartCode field to send on next AVS_STS[START]. For compliance must be 0x1. */
        uint64_t cmd                   : 2;  /**< [ 29: 28](R/W) Master frame Cmd field to send on next AVS_STS[START].
                                                                 Determines the action that the master requires.
                                                                 Values enumerated by AVS_CMD_E. */
        uint64_t cmdgroup              : 1;  /**< [ 27: 27](R/W) Master frame CmdGroup field to send on next AVS_STS[START].
                                                                 Values enumerated by AVS_CMDGROUP_E. */
        uint64_t cmddatatype           : 4;  /**< [ 26: 23](R/W) Master frame CmdDataType field to send on next AVS_STS[START].
                                                                 Values enumerated by AVS_CMDDATATYPE_E. */
        uint64_t select                : 4;  /**< [ 22: 19](R/W) Master frame Select field to send on next AVS_STS[START]. */
        uint64_t cmddata               : 16; /**< [ 18:  3](R/W) Master frame CmdData field to send on next AVS_STS[START]. Must be all-ones for reads. */
        uint64_t reserved_0_2          : 3;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_2          : 3;
        uint64_t cmddata               : 16; /**< [ 18:  3](R/W) Master frame CmdData field to send on next AVS_STS[START]. Must be all-ones for reads. */
        uint64_t select                : 4;  /**< [ 22: 19](R/W) Master frame Select field to send on next AVS_STS[START]. */
        uint64_t cmddatatype           : 4;  /**< [ 26: 23](R/W) Master frame CmdDataType field to send on next AVS_STS[START].
                                                                 Values enumerated by AVS_CMDDATATYPE_E. */
        uint64_t cmdgroup              : 1;  /**< [ 27: 27](R/W) Master frame CmdGroup field to send on next AVS_STS[START].
                                                                 Values enumerated by AVS_CMDGROUP_E. */
        uint64_t cmd                   : 2;  /**< [ 29: 28](R/W) Master frame Cmd field to send on next AVS_STS[START].
                                                                 Determines the action that the master requires.
                                                                 Values enumerated by AVS_CMD_E. */
        uint64_t startcode             : 2;  /**< [ 31: 30](R/W) Master frame StartCode field to send on next AVS_STS[START]. For compliance must be 0x1. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_mdata_s cn; */
};
typedef union cavm_avs_mdata cavm_avs_mdata_t;

#define CAVM_AVS_MDATA CAVM_AVS_MDATA_FUNC()
static inline uint64_t CAVM_AVS_MDATA_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_MDATA_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x80a000001010ll;
    __cavm_csr_fatal("AVS_MDATA", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_AVS_MDATA cavm_avs_mdata_t
#define bustype_CAVM_AVS_MDATA CSR_TYPE_NCB
#define basename_CAVM_AVS_MDATA "AVS_MDATA"
#define device_bar_CAVM_AVS_MDATA 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_MDATA 0
#define arguments_CAVM_AVS_MDATA -1,-1,-1,-1

/**
 * Register (NCB) avs_msix_pba#
 *
 * AVS MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the AVS_INT_VEC_E enumeration.
 */
union cavm_avs_msix_pbax
{
    uint64_t u;
    struct cavm_avs_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated AVS_MSIX_VEC()_CTL, enumerated by AVS_INT_VEC_E. Bits
                                                                 that have no associated AVS_INT_VEC_E are zero. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated AVS_MSIX_VEC()_CTL, enumerated by AVS_INT_VEC_E. Bits
                                                                 that have no associated AVS_INT_VEC_E are zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_msix_pbax_s cn; */
};
typedef union cavm_avs_msix_pbax cavm_avs_msix_pbax_t;

static inline uint64_t CAVM_AVS_MSIX_PBAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_MSIX_PBAX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a==0))
        return 0x80a000ff0000ll + 8ll * ((a) & 0x0);
    __cavm_csr_fatal("AVS_MSIX_PBAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_AVS_MSIX_PBAX(a) cavm_avs_msix_pbax_t
#define bustype_CAVM_AVS_MSIX_PBAX(a) CSR_TYPE_NCB
#define basename_CAVM_AVS_MSIX_PBAX(a) "AVS_MSIX_PBAX"
#define device_bar_CAVM_AVS_MSIX_PBAX(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_AVS_MSIX_PBAX(a) (a)
#define arguments_CAVM_AVS_MSIX_PBAX(a) (a),-1,-1,-1

/**
 * Register (NCB) avs_msix_vec#_addr
 *
 * AVS MSI-X Vector Table Address Registers
 * This register is the MSI-X vector table, indexed by the AVS_INT_VEC_E enumeration.
 */
union cavm_avs_msix_vecx_addr
{
    uint64_t u;
    struct cavm_avs_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's AVS_MSIX_VEC()_ADDR, AVS_MSIX_VEC()_CTL, and corresponding
                                                                 bit of AVS_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_AVS_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's AVS_MSIX_VEC()_ADDR, AVS_MSIX_VEC()_CTL, and corresponding
                                                                 bit of AVS_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_AVS_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_msix_vecx_addr_s cn9; */
    /* struct cavm_avs_msix_vecx_addr_s cn96xxp1; */
    struct cavm_avs_msix_vecx_addr_cn96xxp3
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's AVS_MSIX_VEC()_ADDR, AVS_MSIX_VEC()_CTL, and corresponding
                                                                 bit of AVS_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_AVS_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set.

                                                                 Also note the following:
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_EN]=1, all secure vectors (including secure
                                                                 VF vectors) will act as if PCCPF/PCCVF_XXX_MSIX_CAP_HDR[MSIXEN]=1,
                                                                 PCCPF/PCCVF_XXX_MSIX_CAP_HDR[FUNM]=0 and PCCPF/PCCVF_XXX_CMD[ME]=1.
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1, all secure vectors (including
                                                                 secure VF vectors) are considered physical, regardless of
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's AVS_MSIX_VEC()_ADDR, AVS_MSIX_VEC()_CTL, and corresponding
                                                                 bit of AVS_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_AVS_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set.

                                                                 Also note the following:
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_EN]=1, all secure vectors (including secure
                                                                 VF vectors) will act as if PCCPF/PCCVF_XXX_MSIX_CAP_HDR[MSIXEN]=1,
                                                                 PCCPF/PCCVF_XXX_MSIX_CAP_HDR[FUNM]=0 and PCCPF/PCCVF_XXX_CMD[ME]=1.
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1, all secure vectors (including
                                                                 secure VF vectors) are considered physical, regardless of
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } cn96xxp3;
    /* struct cavm_avs_msix_vecx_addr_cn96xxp3 cn96xxp4; */
    /* struct cavm_avs_msix_vecx_addr_cn96xxp3 cn98xx; */
    /* struct cavm_avs_msix_vecx_addr_cn96xxp3 cnf95xx; */
    /* struct cavm_avs_msix_vecx_addr_cn96xxp3 f95mm; */
    /* struct cavm_avs_msix_vecx_addr_cn96xxp3 f95o; */
    /* struct cavm_avs_msix_vecx_addr_cn96xxp3 loki; */
};
typedef union cavm_avs_msix_vecx_addr cavm_avs_msix_vecx_addr_t;

static inline uint64_t CAVM_AVS_MSIX_VECX_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_MSIX_VECX_ADDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a==0))
        return 0x80a000f00000ll + 0x10ll * ((a) & 0x0);
    __cavm_csr_fatal("AVS_MSIX_VECX_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_AVS_MSIX_VECX_ADDR(a) cavm_avs_msix_vecx_addr_t
#define bustype_CAVM_AVS_MSIX_VECX_ADDR(a) CSR_TYPE_NCB
#define basename_CAVM_AVS_MSIX_VECX_ADDR(a) "AVS_MSIX_VECX_ADDR"
#define device_bar_CAVM_AVS_MSIX_VECX_ADDR(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_AVS_MSIX_VECX_ADDR(a) (a)
#define arguments_CAVM_AVS_MSIX_VECX_ADDR(a) (a),-1,-1,-1

/**
 * Register (NCB) avs_msix_vec#_ctl
 *
 * AVS MSI-X Vector Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the AVS_INT_VEC_E enumeration.
 */
union cavm_avs_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_avs_msix_vecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts will be sent to this vector. */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts will be sent to this vector. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_msix_vecx_ctl_s cn; */
};
typedef union cavm_avs_msix_vecx_ctl cavm_avs_msix_vecx_ctl_t;

static inline uint64_t CAVM_AVS_MSIX_VECX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_MSIX_VECX_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a==0))
        return 0x80a000f00008ll + 0x10ll * ((a) & 0x0);
    __cavm_csr_fatal("AVS_MSIX_VECX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_AVS_MSIX_VECX_CTL(a) cavm_avs_msix_vecx_ctl_t
#define bustype_CAVM_AVS_MSIX_VECX_CTL(a) CSR_TYPE_NCB
#define basename_CAVM_AVS_MSIX_VECX_CTL(a) "AVS_MSIX_VECX_CTL"
#define device_bar_CAVM_AVS_MSIX_VECX_CTL(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_AVS_MSIX_VECX_CTL(a) (a)
#define arguments_CAVM_AVS_MSIX_VECX_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) avs_sdata
 *
 * AVS Slave Data Received Response Register
 * This register contains the data received on the AVS_SDATA signal in response to a
 * master transaction.
 */
union cavm_avs_sdata
{
    uint64_t u;
    struct cavm_avs_sdata_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t slaveack              : 2;  /**< [ 31: 30](RO/H) Received response frame's SlaveACK field. Enumerated by AVS_SLAVEACK_E. */
        uint64_t reserved_29           : 1;
        uint64_t statusresp            : 5;  /**< [ 28: 24](RO/H) Received response frame's Status_Resp field. Bit numbers enumerated by
                                                                 AVS_STATUSRESP_E. */
        uint64_t cmddata               : 16; /**< [ 23:  8](RO/H) Received response frame's CmdData field. */
        uint64_t reserved_3_7          : 5;
        uint64_t crc                   : 3;  /**< [  2:  0](RAZ) Received response frame's CRC field. Software typically ignores this field and uses
                                                                 AVS_STS[CRC_ERR] instead. */
#else /* Word 0 - Little Endian */
        uint64_t crc                   : 3;  /**< [  2:  0](RAZ) Received response frame's CRC field. Software typically ignores this field and uses
                                                                 AVS_STS[CRC_ERR] instead. */
        uint64_t reserved_3_7          : 5;
        uint64_t cmddata               : 16; /**< [ 23:  8](RO/H) Received response frame's CmdData field. */
        uint64_t statusresp            : 5;  /**< [ 28: 24](RO/H) Received response frame's Status_Resp field. Bit numbers enumerated by
                                                                 AVS_STATUSRESP_E. */
        uint64_t reserved_29           : 1;
        uint64_t slaveack              : 2;  /**< [ 31: 30](RO/H) Received response frame's SlaveACK field. Enumerated by AVS_SLAVEACK_E. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_sdata_s cn; */
};
typedef union cavm_avs_sdata cavm_avs_sdata_t;

#define CAVM_AVS_SDATA CAVM_AVS_SDATA_FUNC()
static inline uint64_t CAVM_AVS_SDATA_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_SDATA_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x80a000001020ll;
    __cavm_csr_fatal("AVS_SDATA", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_AVS_SDATA cavm_avs_sdata_t
#define bustype_CAVM_AVS_SDATA CSR_TYPE_NCB
#define basename_CAVM_AVS_SDATA "AVS_SDATA"
#define device_bar_CAVM_AVS_SDATA 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_SDATA 0
#define arguments_CAVM_AVS_SDATA -1,-1,-1,-1

/**
 * Register (NCB) avs_sstatus
 *
 * AVS Slave Data Received Status Register
 * This register contains the data received on the AVS_SDATA signal in a status
 * response.
 */
union cavm_avs_sstatus
{
    uint64_t u;
    struct cavm_avs_sstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t prefix                : 2;  /**< [ 31: 30](RO/H) Received status frame's SlaveACK field. */
        uint64_t reserved_29           : 1;
        uint64_t statusresp            : 5;  /**< [ 28: 24](RO/H) Received status frame's Status_Resp field. */
        uint64_t reserved_3_23         : 21;
        uint64_t crc                   : 3;  /**< [  2:  0](RAZ) Received status frame's CRC field. Software typically ignores this field and uses
                                                                 AVS_STS[CRC_ERR] instead. */
#else /* Word 0 - Little Endian */
        uint64_t crc                   : 3;  /**< [  2:  0](RAZ) Received status frame's CRC field. Software typically ignores this field and uses
                                                                 AVS_STS[CRC_ERR] instead. */
        uint64_t reserved_3_23         : 21;
        uint64_t statusresp            : 5;  /**< [ 28: 24](RO/H) Received status frame's Status_Resp field. */
        uint64_t reserved_29           : 1;
        uint64_t prefix                : 2;  /**< [ 31: 30](RO/H) Received status frame's SlaveACK field. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_sstatus_s cn; */
};
typedef union cavm_avs_sstatus cavm_avs_sstatus_t;

#define CAVM_AVS_SSTATUS CAVM_AVS_SSTATUS_FUNC()
static inline uint64_t CAVM_AVS_SSTATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_SSTATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x80a000001030ll;
    __cavm_csr_fatal("AVS_SSTATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_AVS_SSTATUS cavm_avs_sstatus_t
#define bustype_CAVM_AVS_SSTATUS CSR_TYPE_NCB
#define basename_CAVM_AVS_SSTATUS "AVS_SSTATUS"
#define device_bar_CAVM_AVS_SSTATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_SSTATUS 0
#define arguments_CAVM_AVS_SSTATUS -1,-1,-1,-1

/**
 * Register (NCB) avs_sts
 *
 * AVS STS Register
 * This register provides status and interrupt for the AVS interface.
 */
union cavm_avs_sts
{
    uint64_t u;
    struct cavm_avs_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t busy                  : 1;  /**< [  8:  8](RO/H) Busy.
                                                                 0 = No AVS transaction in progress.
                                                                 1 = AVS engine is processing a transaction. */
        uint64_t reserved_5_7          : 3;
        uint64_t start                 : 1;  /**< [  4:  4](R/W1/H) Write 1 to start transaction defined by AVS_MDATA[CMD].
                                                                 Read back value always zero. */
        uint64_t reserved_2_3          : 2;
        uint64_t crc_err               : 1;  /**< [  1:  1](R/W1C/H) AVS interrupt on CRC error in receiving data.
                                                                 If there is CRC error in the read frame, [CRC_ERR] interrupt is generated
                                                                 at the same time with [DONE] interrupt. */
        uint64_t done                  : 1;  /**< [  0:  0](R/W1C/H) AVS interrupt on transaction done. */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 1;  /**< [  0:  0](R/W1C/H) AVS interrupt on transaction done. */
        uint64_t crc_err               : 1;  /**< [  1:  1](R/W1C/H) AVS interrupt on CRC error in receiving data.
                                                                 If there is CRC error in the read frame, [CRC_ERR] interrupt is generated
                                                                 at the same time with [DONE] interrupt. */
        uint64_t reserved_2_3          : 2;
        uint64_t start                 : 1;  /**< [  4:  4](R/W1/H) Write 1 to start transaction defined by AVS_MDATA[CMD].
                                                                 Read back value always zero. */
        uint64_t reserved_5_7          : 3;
        uint64_t busy                  : 1;  /**< [  8:  8](RO/H) Busy.
                                                                 0 = No AVS transaction in progress.
                                                                 1 = AVS engine is processing a transaction. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_sts_s cn; */
};
typedef union cavm_avs_sts cavm_avs_sts_t;

#define CAVM_AVS_STS CAVM_AVS_STS_FUNC()
static inline uint64_t CAVM_AVS_STS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_STS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x80a000000200ll;
    __cavm_csr_fatal("AVS_STS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_AVS_STS cavm_avs_sts_t
#define bustype_CAVM_AVS_STS CSR_TYPE_NCB
#define basename_CAVM_AVS_STS "AVS_STS"
#define device_bar_CAVM_AVS_STS 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_STS 0
#define arguments_CAVM_AVS_STS -1,-1,-1,-1

/**
 * Register (NCB) avs_sts_w1s
 *
 * AVS Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_avs_sts_w1s
{
    uint64_t u;
    struct cavm_avs_sts_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t crc_err               : 1;  /**< [  1:  1](R/W1S/H) Reads or sets AVS_STS[CRC_ERR]. */
        uint64_t done                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets AVS_STS[DONE]. */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets AVS_STS[DONE]. */
        uint64_t crc_err               : 1;  /**< [  1:  1](R/W1S/H) Reads or sets AVS_STS[CRC_ERR]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_sts_w1s_s cn; */
};
typedef union cavm_avs_sts_w1s cavm_avs_sts_w1s_t;

#define CAVM_AVS_STS_W1S CAVM_AVS_STS_W1S_FUNC()
static inline uint64_t CAVM_AVS_STS_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_STS_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x80a000000208ll;
    __cavm_csr_fatal("AVS_STS_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_AVS_STS_W1S cavm_avs_sts_w1s_t
#define bustype_CAVM_AVS_STS_W1S CSR_TYPE_NCB
#define basename_CAVM_AVS_STS_W1S "AVS_STS_W1S"
#define device_bar_CAVM_AVS_STS_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_STS_W1S 0
#define arguments_CAVM_AVS_STS_W1S -1,-1,-1,-1

#endif /* __CAVM_CSRS_AVS_H__ */
