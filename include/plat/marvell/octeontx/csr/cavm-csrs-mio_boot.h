#ifndef __CAVM_CSRS_MIO_BOOT_H__
#define __CAVM_CSRS_MIO_BOOT_H__
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
 * OcteonTX MIO_BOOT.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration mio_boot_bar_e
 *
 * MIO Boot Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_MIO_BOOT_BAR_E_MIO_BOOT_PF_BAR0 (0x87e000000000ll)
#define CAVM_MIO_BOOT_BAR_E_MIO_BOOT_PF_BAR0_SIZE 0x800000ull

/**
 * Register (RSL) mio_boot_ap_jump
 *
 * MIO Boot AP Jump Address Register
 */
union cavm_mio_boot_ap_jump
{
    uint64_t u;
    struct cavm_mio_boot_ap_jump_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t addr                  : 64; /**< [ 63:  0](SR/W) Boot address.  This register contains the address the internal boot loader
                                                                 will jump to after reset. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 64; /**< [ 63:  0](SR/W) Boot address.  This register contains the address the internal boot loader
                                                                 will jump to after reset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mio_boot_ap_jump_s cn; */
};
typedef union cavm_mio_boot_ap_jump cavm_mio_boot_ap_jump_t;

#define CAVM_MIO_BOOT_AP_JUMP CAVM_MIO_BOOT_AP_JUMP_FUNC()
static inline uint64_t CAVM_MIO_BOOT_AP_JUMP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MIO_BOOT_AP_JUMP_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x87e0000000d0ll;
    __cavm_csr_fatal("MIO_BOOT_AP_JUMP", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MIO_BOOT_AP_JUMP cavm_mio_boot_ap_jump_t
#define bustype_CAVM_MIO_BOOT_AP_JUMP CSR_TYPE_RSL
#define basename_CAVM_MIO_BOOT_AP_JUMP "MIO_BOOT_AP_JUMP"
#define device_bar_CAVM_MIO_BOOT_AP_JUMP 0x0 /* PF_BAR0 */
#define busnum_CAVM_MIO_BOOT_AP_JUMP 0
#define arguments_CAVM_MIO_BOOT_AP_JUMP -1,-1,-1,-1

/**
 * Register (RSL) mio_boot_bist_stat
 *
 * MIO Boot BIST Status Register
 * The boot BIST status register contains the BIST status for the MIO boot memories: 0 = pass, 1
 * = fail.
 */
union cavm_mio_boot_bist_stat
{
    uint64_t u;
    struct cavm_mio_boot_bist_stat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t stat                  : 16; /**< [ 15:  0](RO/H) BIST status. */
#else /* Word 0 - Little Endian */
        uint64_t stat                  : 16; /**< [ 15:  0](RO/H) BIST status. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mio_boot_bist_stat_s cn8; */
    /* struct cavm_mio_boot_bist_stat_s cn81xx; */
    struct cavm_mio_boot_bist_stat_cn83xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t stat                  : 13; /**< [ 12:  0](RO/H) BIST status. */
#else /* Word 0 - Little Endian */
        uint64_t stat                  : 13; /**< [ 12:  0](RO/H) BIST status. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } cn83xx;
};
typedef union cavm_mio_boot_bist_stat cavm_mio_boot_bist_stat_t;

#define CAVM_MIO_BOOT_BIST_STAT CAVM_MIO_BOOT_BIST_STAT_FUNC()
static inline uint64_t CAVM_MIO_BOOT_BIST_STAT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MIO_BOOT_BIST_STAT_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x87e0000000f8ll;
    __cavm_csr_fatal("MIO_BOOT_BIST_STAT", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MIO_BOOT_BIST_STAT cavm_mio_boot_bist_stat_t
#define bustype_CAVM_MIO_BOOT_BIST_STAT CSR_TYPE_RSL
#define basename_CAVM_MIO_BOOT_BIST_STAT "MIO_BOOT_BIST_STAT"
#define device_bar_CAVM_MIO_BOOT_BIST_STAT 0x0 /* PF_BAR0 */
#define busnum_CAVM_MIO_BOOT_BIST_STAT 0
#define arguments_CAVM_MIO_BOOT_BIST_STAT -1,-1,-1,-1

/**
 * Register (RSL) mio_boot_pin_defs
 *
 * MIO Boot Pin Defaults Register
 * This register reflects the value of some of the pins sampled
 * at the rising edge of PLL_DCOK.  The GPIO pins sampled at
 * the same time are available in the GPIO_STRAP csr.
 */
union cavm_mio_boot_pin_defs
{
    uint64_t u;
    struct cavm_mio_boot_pin_defs_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_18_63        : 46;
        uint64_t uart1_rts             : 1;  /**< [ 17: 17](RO) State of UART1_RTS_N pin strap sampled when DCOK asserts. */
        uint64_t uart0_rts             : 1;  /**< [ 16: 16](RO) Reference clock select. State of UART0_RTS_N pin sampled when DCOK asserts.
                                                                 0 = Board supplies 100 MHz to DLM_REF_CLK\<1\> (divided by 2 internally).
                                                                 1 = Board supplies  50 MHz to PLL_REFCLK. */
        uint64_t reserved_11_15        : 5;
        uint64_t rgm_supply            : 2;  /**< [ 10:  9](RO) RGMII power supply setting based on VDD_RGM_SUPPLY_SELECT pin:
                                                                 0x2 = 2.5V.
                                                                 _ All other values reserved. */
        uint64_t emm_supply            : 3;  /**< [  8:  6](RO) EMMC power supply settings.
                                                                 0x4 = 3.3V.
                                                                 _ All other values reserved. */
        uint64_t smi_supply            : 3;  /**< [  5:  3](RO) SMI power supply setting based on VDD_SMI_SUPPLY_SELECT pin:
                                                                 0x2 = 2.5V.
                                                                 0x4 = 3.3V.
                                                                 _ All other values reserved. */
        uint64_t io_supply             : 3;  /**< [  2:  0](RO) I/O power supply setting based on VDD_IO_SUPPLY_SELECT pin:
                                                                 0x2 = 2.5V.
                                                                 0x4 = 3.3V.
                                                                 _ All other values reserved. */
#else /* Word 0 - Little Endian */
        uint64_t io_supply             : 3;  /**< [  2:  0](RO) I/O power supply setting based on VDD_IO_SUPPLY_SELECT pin:
                                                                 0x2 = 2.5V.
                                                                 0x4 = 3.3V.
                                                                 _ All other values reserved. */
        uint64_t smi_supply            : 3;  /**< [  5:  3](RO) SMI power supply setting based on VDD_SMI_SUPPLY_SELECT pin:
                                                                 0x2 = 2.5V.
                                                                 0x4 = 3.3V.
                                                                 _ All other values reserved. */
        uint64_t emm_supply            : 3;  /**< [  8:  6](RO) EMMC power supply settings.
                                                                 0x4 = 3.3V.
                                                                 _ All other values reserved. */
        uint64_t rgm_supply            : 2;  /**< [ 10:  9](RO) RGMII power supply setting based on VDD_RGM_SUPPLY_SELECT pin:
                                                                 0x2 = 2.5V.
                                                                 _ All other values reserved. */
        uint64_t reserved_11_15        : 5;
        uint64_t uart0_rts             : 1;  /**< [ 16: 16](RO) Reference clock select. State of UART0_RTS_N pin sampled when DCOK asserts.
                                                                 0 = Board supplies 100 MHz to DLM_REF_CLK\<1\> (divided by 2 internally).
                                                                 1 = Board supplies  50 MHz to PLL_REFCLK. */
        uint64_t uart1_rts             : 1;  /**< [ 17: 17](RO) State of UART1_RTS_N pin strap sampled when DCOK asserts. */
        uint64_t reserved_18_63        : 46;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mio_boot_pin_defs_s cn8; */
    /* struct cavm_mio_boot_pin_defs_s cn81xx; */
    struct cavm_mio_boot_pin_defs_cn83xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_18_63        : 46;
        uint64_t uart1_rts             : 1;  /**< [ 17: 17](RO) State of UART1_RTS_N pin strap sampled when DCOK asserts. */
        uint64_t uart0_rts             : 1;  /**< [ 16: 16](RO) State of UART0_RTS_N pin strap sampled when DCOK asserts. */
        uint64_t reserved_9_15         : 7;
        uint64_t emm_supply            : 3;  /**< [  8:  6](RO) EMMC power supply settings.
                                                                 0x4 = 3.3V.
                                                                 _ All other values reserved. */
        uint64_t smi_supply            : 3;  /**< [  5:  3](RO) SMI power supply setting based on VDD_SMI_SUPPLY_SELECT pin:
                                                                 0x2 = 2.5V.
                                                                 0x4 = 3.3V.
                                                                 _ All other values reserved. */
        uint64_t io_supply             : 3;  /**< [  2:  0](RO) I/O power supply setting based on VDD_IO_SUPPLY_SELECT pin:
                                                                 0x2 = 2.5V.
                                                                 0x4 = 3.3V.
                                                                 _ All other values reserved. */
#else /* Word 0 - Little Endian */
        uint64_t io_supply             : 3;  /**< [  2:  0](RO) I/O power supply setting based on VDD_IO_SUPPLY_SELECT pin:
                                                                 0x2 = 2.5V.
                                                                 0x4 = 3.3V.
                                                                 _ All other values reserved. */
        uint64_t smi_supply            : 3;  /**< [  5:  3](RO) SMI power supply setting based on VDD_SMI_SUPPLY_SELECT pin:
                                                                 0x2 = 2.5V.
                                                                 0x4 = 3.3V.
                                                                 _ All other values reserved. */
        uint64_t emm_supply            : 3;  /**< [  8:  6](RO) EMMC power supply settings.
                                                                 0x4 = 3.3V.
                                                                 _ All other values reserved. */
        uint64_t reserved_9_15         : 7;
        uint64_t uart0_rts             : 1;  /**< [ 16: 16](RO) State of UART0_RTS_N pin strap sampled when DCOK asserts. */
        uint64_t uart1_rts             : 1;  /**< [ 17: 17](RO) State of UART1_RTS_N pin strap sampled when DCOK asserts. */
        uint64_t reserved_18_63        : 46;
#endif /* Word 0 - End */
    } cn83xx;
};
typedef union cavm_mio_boot_pin_defs cavm_mio_boot_pin_defs_t;

#define CAVM_MIO_BOOT_PIN_DEFS CAVM_MIO_BOOT_PIN_DEFS_FUNC()
static inline uint64_t CAVM_MIO_BOOT_PIN_DEFS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MIO_BOOT_PIN_DEFS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x87e0000000c0ll;
    __cavm_csr_fatal("MIO_BOOT_PIN_DEFS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MIO_BOOT_PIN_DEFS cavm_mio_boot_pin_defs_t
#define bustype_CAVM_MIO_BOOT_PIN_DEFS CSR_TYPE_RSL
#define basename_CAVM_MIO_BOOT_PIN_DEFS "MIO_BOOT_PIN_DEFS"
#define device_bar_CAVM_MIO_BOOT_PIN_DEFS 0x0 /* PF_BAR0 */
#define busnum_CAVM_MIO_BOOT_PIN_DEFS 0
#define arguments_CAVM_MIO_BOOT_PIN_DEFS -1,-1,-1,-1

/**
 * Register (RSL) mio_boot_rom_limit
 *
 * MIO Boot ROM Limit Register
 * This register contains the largest valid address in the internal bootrom.
 */
union cavm_mio_boot_rom_limit
{
    uint64_t u;
    struct cavm_mio_boot_rom_limit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t addr                  : 17; /**< [ 16:  0](SR/W/H) End of ROM address.  This field specifies the first invalid address in ROM_MEM();
                                                                 access to a ROM_MEM() address at or above this address will return a fault and zeros.
                                                                 Writes to this register which attempt to set an [ADDR] greater than the previous [ADDR]
                                                                 setting are ignored. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 17; /**< [ 16:  0](SR/W/H) End of ROM address.  This field specifies the first invalid address in ROM_MEM();
                                                                 access to a ROM_MEM() address at or above this address will return a fault and zeros.
                                                                 Writes to this register which attempt to set an [ADDR] greater than the previous [ADDR]
                                                                 setting are ignored. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mio_boot_rom_limit_s cn; */
};
typedef union cavm_mio_boot_rom_limit cavm_mio_boot_rom_limit_t;

#define CAVM_MIO_BOOT_ROM_LIMIT CAVM_MIO_BOOT_ROM_LIMIT_FUNC()
static inline uint64_t CAVM_MIO_BOOT_ROM_LIMIT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MIO_BOOT_ROM_LIMIT_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x87e0000000d8ll;
    __cavm_csr_fatal("MIO_BOOT_ROM_LIMIT", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MIO_BOOT_ROM_LIMIT cavm_mio_boot_rom_limit_t
#define bustype_CAVM_MIO_BOOT_ROM_LIMIT CSR_TYPE_RSL
#define basename_CAVM_MIO_BOOT_ROM_LIMIT "MIO_BOOT_ROM_LIMIT"
#define device_bar_CAVM_MIO_BOOT_ROM_LIMIT 0x0 /* PF_BAR0 */
#define busnum_CAVM_MIO_BOOT_ROM_LIMIT 0
#define arguments_CAVM_MIO_BOOT_ROM_LIMIT -1,-1,-1,-1

/**
 * Register (RSL) mio_boot_thr
 *
 * MIO Boot Threshold Register
 * The threshold register contains read and write requests to the
 * MIO boot registers and internal bootrom.
 */
union cavm_mio_boot_thr
{
    uint64_t u;
    struct cavm_mio_boot_thr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_14_63        : 50;
        uint64_t fif_cnt               : 6;  /**< [ 13:  8](RO/H) Current FIFO count. */
        uint64_t reserved_6_7          : 2;
        uint64_t fif_thr               : 6;  /**< [  5:  0](R/W) NCB busy threshold. Should always read 0x19 (the only legal value). */
#else /* Word 0 - Little Endian */
        uint64_t fif_thr               : 6;  /**< [  5:  0](R/W) NCB busy threshold. Should always read 0x19 (the only legal value). */
        uint64_t reserved_6_7          : 2;
        uint64_t fif_cnt               : 6;  /**< [ 13:  8](RO/H) Current FIFO count. */
        uint64_t reserved_14_63        : 50;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mio_boot_thr_s cn; */
};
typedef union cavm_mio_boot_thr cavm_mio_boot_thr_t;

#define CAVM_MIO_BOOT_THR CAVM_MIO_BOOT_THR_FUNC()
static inline uint64_t CAVM_MIO_BOOT_THR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MIO_BOOT_THR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x87e0000000b0ll;
    __cavm_csr_fatal("MIO_BOOT_THR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MIO_BOOT_THR cavm_mio_boot_thr_t
#define bustype_CAVM_MIO_BOOT_THR CSR_TYPE_RSL
#define basename_CAVM_MIO_BOOT_THR "MIO_BOOT_THR"
#define device_bar_CAVM_MIO_BOOT_THR 0x0 /* PF_BAR0 */
#define busnum_CAVM_MIO_BOOT_THR 0
#define arguments_CAVM_MIO_BOOT_THR -1,-1,-1,-1

#endif /* __CAVM_CSRS_MIO_BOOT_H__ */
