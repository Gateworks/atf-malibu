#ifndef __CAVM_CSRS_MIO_FUS_H__
#define __CAVM_CSRS_MIO_FUS_H__
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
 * OcteonTX MIO_FUS.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration mio_fus_bar_e
 *
 * MIO FUS Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_MIO_FUS_BAR_E_MIO_FUS_PF_BAR0 (0x87e003000000ll)
#define CAVM_MIO_FUS_BAR_E_MIO_FUS_PF_BAR0_SIZE 0x800000ull

/**
 * Enumeration mio_fus_fuse_num_e
 *
 * INTERNAL: MIO FUS Fuse Number Enumeration
 *
 * Enumerates the fuse numbers.
 */
#define CAVM_MIO_FUS_FUSE_NUM_E_BAR2_SZ_CONF (0x54)
#define CAVM_MIO_FUS_FUSE_NUM_E_BGX2_DIS (0xe5)
#define CAVM_MIO_FUS_FUSE_NUM_E_BGX3_DIS (0xe6)
#define CAVM_MIO_FUS_FUSE_NUM_E_BGX_DISX(a) (0x6c + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_CHIP_IDX(a) (0x40 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_CMB_RCLK_BYP_SELECT (0x266)
#define CAVM_MIO_FUS_FUSE_NUM_E_CMB_RCLK_BYP_SETTINGX(a) (0x25a + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_CORE_PLL_MULX(a) (0x7b + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_CPT0_ENG_DISX(a) (0x684 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_CPT1_ENG_DISX(a) (0x6b4 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_CPT_ENG_DISX(a) (0x680 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_DDF_DIS (0xe4)
#define CAVM_MIO_FUS_FUSE_NUM_E_DESX(a) (0x3c0 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_DORM_CRYPTO (0x67)
#define CAVM_MIO_FUS_FUSE_NUM_E_EAST_RCLK_BYP_SELECT (0x273)
#define CAVM_MIO_FUS_FUSE_NUM_E_EAST_RCLK_BYP_SETTINGX(a) (0x267 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_EFUS_IGN (0x53)
#define CAVM_MIO_FUS_FUSE_NUM_E_EFUS_LCK_DES (0x6a)
#define CAVM_MIO_FUS_FUSE_NUM_E_EFUS_LCK_MAN (0x69)
#define CAVM_MIO_FUS_FUSE_NUM_E_EFUS_LCK_PRD (0x68)
#define CAVM_MIO_FUS_FUSE_NUM_E_EMA0X(a) (0x80 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_EMA1X(a) (0x8e + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_GBL_PWR_THROTTLEX(a) (0xaf + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_GLOBAL_RCLK_BYP_SELECT (0xa0)
#define CAVM_MIO_FUS_FUSE_NUM_E_GLOBAL_RCLK_BYP_SETTINGX(a) (0x94 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_GLOBAL_SCLK_BYP_SELECT (0xe2)
#define CAVM_MIO_FUS_FUSE_NUM_E_GLOBAL_SCLK_BYP_SETTINGX(a) (0xd6 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_GSERX(a) (0x400 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_L2C_CRIPX(a) (0x57 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_LMC_DIS (0x76)
#define CAVM_MIO_FUS_FUSE_NUM_E_LMC_HALF (0x4b)
#define CAVM_MIO_FUS_FUSE_NUM_E_MFG0X(a) (0x280 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_MFG1X(a) (0x2c0 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_MFG2X(a) (0x600 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_NOCRYPTO (0x50)
#define CAVM_MIO_FUS_FUSE_NUM_E_NODFA_CP2 (0x5a)
#define CAVM_MIO_FUS_FUSE_NUM_E_NOMUL (0x51)
#define CAVM_MIO_FUS_FUSE_NUM_E_NOZIP (0x52)
#define CAVM_MIO_FUS_FUSE_NUM_E_OCX_DIS (0x6b)
#define CAVM_MIO_FUS_FUSE_NUM_E_PDFX(a) (0x340 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_PEM_DISX(a) (0x72 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_PLL_ALT_MATRIX (0x4a)
#define CAVM_MIO_FUS_FUSE_NUM_E_PLL_BWADJ_DENOMX(a) (0x48 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_PLL_HALF_DIS (0x75)
#define CAVM_MIO_FUS_FUSE_NUM_E_PNAMEX(a) (0x580 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_PNR_PLL_MULX(a) (0x77 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_POWER_LIMITX(a) (0x64 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_PP_AVAILABLEX(a) (0 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_PP_RCLK_BYP_SELECT (0x259)
#define CAVM_MIO_FUS_FUSE_NUM_E_PP_RCLK_BYP_SETTINGX(a) (0x24d + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_RAID_DIS (0x66)
#define CAVM_MIO_FUS_FUSE_NUM_E_REDUNDANTX(a) (0x780 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_REFCLK_CHECK (0xc0)
#define CAVM_MIO_FUS_FUSE_NUM_E_REPAIRX(a) (0x800 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_ROC_RCLK_BYP_SELECT (0xae)
#define CAVM_MIO_FUS_FUSE_NUM_E_ROC_RCLK_BYP_SETTINGX(a) (0xa2 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_ROC_SCLK_BYP_SELECT (0xd5)
#define CAVM_MIO_FUS_FUSE_NUM_E_ROC_SCLK_BYP_SETTINGX(a) (0xc9 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_ROM_INFOX(a) (0x276 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_RSVDX(a) (0xc6 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_RSVD134X(a) (0x86 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_RSVD1600X(a) (0x640 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_RSVD1737X(a) (0x6c9 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_RSVD1764X(a) (0x6e4 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_RSVD183X(a) (0xb7 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_RSVD193X(a) (0xc1 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_RSVD228X(a) (0xe4 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_RSVD231X(a) (0xe7 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_RSVD3056X(a) (0xbf0 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_RSVD570X(a) (0x23a + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_RSVD628X(a) (0x274 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_RSVD76X(a) (0x4c + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_RSVD91X(a) (0x5b + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_RSVD94X(a) (0x5e + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_RSVD98 (0x62)
#define CAVM_MIO_FUS_FUSE_NUM_E_RSVD99 (0x63)
#define CAVM_MIO_FUS_FUSE_NUM_E_RUN_PLATFORMX(a) (0xc3 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_SATA_DISX(a) (0x6e + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_SERIALX(a) (0x380 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_TAD_RCLK_BYP_SELECT (0x24c)
#define CAVM_MIO_FUS_FUSE_NUM_E_TAD_RCLK_BYP_SETTINGX(a) (0x240 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_TGGX(a) (0x300 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_TIM_DIS (0xe3)
#define CAVM_MIO_FUS_FUSE_NUM_E_TNS_CRIPPLE (0xa1)
#define CAVM_MIO_FUS_FUSE_NUM_E_TSENSE0X(a) (0x100 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_TZ_MODE (0x4f)
#define CAVM_MIO_FUS_FUSE_NUM_E_USE_INT_REFCLK (0x4e)
#define CAVM_MIO_FUS_FUSE_NUM_E_VRMX(a) (0x200 + (a))
#define CAVM_MIO_FUS_FUSE_NUM_E_ZIP_INFOX(a) (0x55 + (a))

/**
 * Register (RSL) mio_fus_bnk_dat#
 *
 * MIO Fuse Bank Store Register
 * The initial state of MIO_FUS_BNK_DAT(0..1) is as if bank6 were just read,
 * i.e. DAT* = fus[895:768].
 */
union cavm_mio_fus_bnk_datx
{
    uint64_t u;
    struct cavm_mio_fus_bnk_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](R/W/H) Efuse bank store. For read operations, the DAT gets the fus bank last read. For write
                                                                 operations, the DAT determines which fuses to blow. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](R/W/H) Efuse bank store. For read operations, the DAT gets the fus bank last read. For write
                                                                 operations, the DAT determines which fuses to blow. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mio_fus_bnk_datx_s cn; */
};
typedef union cavm_mio_fus_bnk_datx cavm_mio_fus_bnk_datx_t;

static inline uint64_t CAVM_MIO_FUS_BNK_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MIO_FUS_BNK_DATX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN8XXX) && (a<=1))
        return 0x87e003001520ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("MIO_FUS_BNK_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MIO_FUS_BNK_DATX(a) cavm_mio_fus_bnk_datx_t
#define bustype_CAVM_MIO_FUS_BNK_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_MIO_FUS_BNK_DATX(a) "MIO_FUS_BNK_DATX"
#define device_bar_CAVM_MIO_FUS_BNK_DATX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MIO_FUS_BNK_DATX(a) (a)
#define arguments_CAVM_MIO_FUS_BNK_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) mio_fus_dat0
 *
 * MIO Fuse Data Register 0
 */
union cavm_mio_fus_dat0
{
    uint64_t u;
    struct cavm_mio_fus_dat0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t man_info              : 32; /**< [ 31:  0](RO) Fuse information - manufacturing info [31:0]. */
#else /* Word 0 - Little Endian */
        uint64_t man_info              : 32; /**< [ 31:  0](RO) Fuse information - manufacturing info [31:0]. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mio_fus_dat0_s cn; */
};
typedef union cavm_mio_fus_dat0 cavm_mio_fus_dat0_t;

#define CAVM_MIO_FUS_DAT0 CAVM_MIO_FUS_DAT0_FUNC()
static inline uint64_t CAVM_MIO_FUS_DAT0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MIO_FUS_DAT0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x87e003001400ll;
    __cavm_csr_fatal("MIO_FUS_DAT0", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MIO_FUS_DAT0 cavm_mio_fus_dat0_t
#define bustype_CAVM_MIO_FUS_DAT0 CSR_TYPE_RSL
#define basename_CAVM_MIO_FUS_DAT0 "MIO_FUS_DAT0"
#define device_bar_CAVM_MIO_FUS_DAT0 0x0 /* PF_BAR0 */
#define busnum_CAVM_MIO_FUS_DAT0 0
#define arguments_CAVM_MIO_FUS_DAT0 -1,-1,-1,-1

/**
 * Register (RSL) mio_fus_dat1
 *
 * MIO Fuse Data Register 1
 */
union cavm_mio_fus_dat1
{
    uint64_t u;
    struct cavm_mio_fus_dat1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t man_info              : 32; /**< [ 31:  0](RO) Fuse information - manufacturing info [63:32]. */
#else /* Word 0 - Little Endian */
        uint64_t man_info              : 32; /**< [ 31:  0](RO) Fuse information - manufacturing info [63:32]. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mio_fus_dat1_s cn; */
};
typedef union cavm_mio_fus_dat1 cavm_mio_fus_dat1_t;

#define CAVM_MIO_FUS_DAT1 CAVM_MIO_FUS_DAT1_FUNC()
static inline uint64_t CAVM_MIO_FUS_DAT1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MIO_FUS_DAT1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x87e003001408ll;
    __cavm_csr_fatal("MIO_FUS_DAT1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MIO_FUS_DAT1 cavm_mio_fus_dat1_t
#define bustype_CAVM_MIO_FUS_DAT1 CSR_TYPE_RSL
#define basename_CAVM_MIO_FUS_DAT1 "MIO_FUS_DAT1"
#define device_bar_CAVM_MIO_FUS_DAT1 0x0 /* PF_BAR0 */
#define busnum_CAVM_MIO_FUS_DAT1 0
#define arguments_CAVM_MIO_FUS_DAT1 -1,-1,-1,-1

/**
 * Register (RSL) mio_fus_dat2
 *
 * MIO Fuse Data Register 2
 */
union cavm_mio_fus_dat2
{
    uint64_t u;
    struct cavm_mio_fus_dat2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_59_63        : 5;
        uint64_t run_platform          : 3;  /**< [ 58: 56](RO) Fuses to indicate the run platform. Not to be blown in actual hardware.
                                                                 Provides software a means of determining the platform at run time.
                                                                 0x0 = Hardware.
                                                                 0x1 = Emulator.
                                                                 0x2 = RTL simulator.
                                                                 0x3 = ASIM.
                                                                 0x4-0x7 = reserved. */
        uint64_t gbl_pwr_throttle      : 8;  /**< [ 55: 48](RO) Reserved. */
        uint64_t fus118                : 1;  /**< [ 47: 47](RO) Reserved. */
        uint64_t rom_info              : 10; /**< [ 46: 37](RO) Fuse information - ROM info. */
        uint64_t power_limit           : 2;  /**< [ 36: 35](RO) Reserved. */
        uint64_t dorm_crypto           : 1;  /**< [ 34: 34](RO) Fuse information - Dormant encryption enable. See NOCRYPTO. */
        uint64_t fus318                : 1;  /**< [ 33: 33](RO) Reserved. */
        uint64_t raid_en               : 1;  /**< [ 32: 32](RO) Fuse information - RAID enabled. */
        uint64_t reserved_31           : 1;
        uint64_t lmc_mode32            : 1;  /**< [ 30: 30](RO) DRAM controller is limited to 32/36 bit wide parts.  In CN80XX always set. */
        uint64_t reserved_29           : 1;
        uint64_t nodfa_cp2             : 1;  /**< [ 28: 28](RO) Fuse information - HFA disable (CP2). */
        uint64_t nomul                 : 1;  /**< [ 27: 27](RO) Fuse information - VMUL disable. */
        uint64_t nocrypto              : 1;  /**< [ 26: 26](RO) Fuse information - [DORM_CRYPTO] and [NOCRYPTO] together select the crypto mode:

                                                                 _ [DORM_CRYPTO] = 0, [NOCRYPTO] = 0: AES/SHA/PMULL enabled.

                                                                 _ [DORM_CRYPTO] = 0, [NOCRYPTO] = 1: The AES, SHA, and PMULL 1D/2D instructions will
                                                                 cause undefined exceptions, and AP_ID_AA64ISAR0_EL1[AES, SHA1, SHA2] are zero
                                                                 indicating this behavior.

                                                                 _ [DORM_CRYPTO] = 1, [NOCRYPTO] = 0: Dormant encryption enable.  AES/SHA/PMULL are
                                                                 disabled (as if [NOCRYPTO] = 1) until the appropriate key is written to
                                                                 RNM_EER_KEY, then they are enabled (as if [NOCRYPTO] = 1).

                                                                 _ [DORM_CRYPTO] = 1, [NOCRYPTO] = 1: Reserved. */
        uint64_t trustzone_en          : 1;  /**< [ 25: 25](RO) Fuse information - TrustZone enable. */
        uint64_t reserved_24           : 1;
        uint64_t chip_id               : 8;  /**< [ 23: 16](RO) Chip revision identifier.
                                                                 \<23:22\> = Alternate package.
                                                                   0x0 = CN81xx-xxxx-BG676.
                                                                   0x1 = CN80xx-xxxx-BG555.
                                                                   0x2 = CN80xx-xxxx-BG676.
                                                                   0x3 = Reserved.

                                                                 \<21:19\> = Major revision.

                                                                 \<18:16\> = Minor revision.

                                                                 For example:
                                                                 \<pre\>
                                                                  \<21:19\>  \<18:16\>  Description
                                                                  -------  -------  -----------
                                                                      0x0      0x0  Pass 1.0.
                                                                      0x0      0x1  Pass 1.1.
                                                                      0x0      0x2  Pass 1.2.
                                                                      0x1      0x0  Pass 2.0.
                                                                      0x1      0x1  Pass 2.1.
                                                                      0x1      0x2  Pass 2.2.
                                                                      ...      ...  ...
                                                                      0x7      0x7  Pass 8.8.
                                                                 \</pre\> */
        uint64_t ocx_dis               : 1;  /**< [ 15: 15](RO) Reserved. */
        uint64_t bgx_dis               : 2;  /**< [ 14: 13](RO) Fuse information - BGX disable:
                                                                   \<13\> = BGX0 disable.
                                                                   \<14\> = BGX1 disable. */
        uint64_t sata_dis              : 4;  /**< [ 12:  9](RO) Fuse information - SATA disable:
                                                                   \<9\> = SATA0 disable.
                                                                   \<10\> = SATA1 disable.
                                                                   \<11\> = Reserved.
                                                                   \<12\> = Reserved. */
        uint64_t pem_dis               : 3;  /**< [  8:  6](RO) Fuse information - PEM disable:
                                                                   \<6\> = PEM0 disable.
                                                                   \<7\> = PEM1 disable
                                                                   \<8\> = PEM2 disable. */
        uint64_t lmc_half              : 1;  /**< [  5:  5](RO) Fuse information - LMC1 disabled. LMC1 not present in CN80XX/CN81XX, so clear. */
        uint64_t tim_dis               : 1;  /**< [  4:  4](RO) Fuse information TIM disable. */
        uint64_t bgx3_dis              : 1;  /**< [  3:  3](RO) Fuse information BGX3 disable. */
        uint64_t bgx2_dis              : 1;  /**< [  2:  2](RO) Fuse information BGX2 disable. */
        uint64_t ddf_dis               : 1;  /**< [  1:  1](RO) Fuse information DDF disable. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t ddf_dis               : 1;  /**< [  1:  1](RO) Fuse information DDF disable. */
        uint64_t bgx2_dis              : 1;  /**< [  2:  2](RO) Fuse information BGX2 disable. */
        uint64_t bgx3_dis              : 1;  /**< [  3:  3](RO) Fuse information BGX3 disable. */
        uint64_t tim_dis               : 1;  /**< [  4:  4](RO) Fuse information TIM disable. */
        uint64_t lmc_half              : 1;  /**< [  5:  5](RO) Fuse information - LMC1 disabled. LMC1 not present in CN80XX/CN81XX, so clear. */
        uint64_t pem_dis               : 3;  /**< [  8:  6](RO) Fuse information - PEM disable:
                                                                   \<6\> = PEM0 disable.
                                                                   \<7\> = PEM1 disable
                                                                   \<8\> = PEM2 disable. */
        uint64_t sata_dis              : 4;  /**< [ 12:  9](RO) Fuse information - SATA disable:
                                                                   \<9\> = SATA0 disable.
                                                                   \<10\> = SATA1 disable.
                                                                   \<11\> = Reserved.
                                                                   \<12\> = Reserved. */
        uint64_t bgx_dis               : 2;  /**< [ 14: 13](RO) Fuse information - BGX disable:
                                                                   \<13\> = BGX0 disable.
                                                                   \<14\> = BGX1 disable. */
        uint64_t ocx_dis               : 1;  /**< [ 15: 15](RO) Reserved. */
        uint64_t chip_id               : 8;  /**< [ 23: 16](RO) Chip revision identifier.
                                                                 \<23:22\> = Alternate package.
                                                                   0x0 = CN81xx-xxxx-BG676.
                                                                   0x1 = CN80xx-xxxx-BG555.
                                                                   0x2 = CN80xx-xxxx-BG676.
                                                                   0x3 = Reserved.

                                                                 \<21:19\> = Major revision.

                                                                 \<18:16\> = Minor revision.

                                                                 For example:
                                                                 \<pre\>
                                                                  \<21:19\>  \<18:16\>  Description
                                                                  -------  -------  -----------
                                                                      0x0      0x0  Pass 1.0.
                                                                      0x0      0x1  Pass 1.1.
                                                                      0x0      0x2  Pass 1.2.
                                                                      0x1      0x0  Pass 2.0.
                                                                      0x1      0x1  Pass 2.1.
                                                                      0x1      0x2  Pass 2.2.
                                                                      ...      ...  ...
                                                                      0x7      0x7  Pass 8.8.
                                                                 \</pre\> */
        uint64_t reserved_24           : 1;
        uint64_t trustzone_en          : 1;  /**< [ 25: 25](RO) Fuse information - TrustZone enable. */
        uint64_t nocrypto              : 1;  /**< [ 26: 26](RO) Fuse information - [DORM_CRYPTO] and [NOCRYPTO] together select the crypto mode:

                                                                 _ [DORM_CRYPTO] = 0, [NOCRYPTO] = 0: AES/SHA/PMULL enabled.

                                                                 _ [DORM_CRYPTO] = 0, [NOCRYPTO] = 1: The AES, SHA, and PMULL 1D/2D instructions will
                                                                 cause undefined exceptions, and AP_ID_AA64ISAR0_EL1[AES, SHA1, SHA2] are zero
                                                                 indicating this behavior.

                                                                 _ [DORM_CRYPTO] = 1, [NOCRYPTO] = 0: Dormant encryption enable.  AES/SHA/PMULL are
                                                                 disabled (as if [NOCRYPTO] = 1) until the appropriate key is written to
                                                                 RNM_EER_KEY, then they are enabled (as if [NOCRYPTO] = 1).

                                                                 _ [DORM_CRYPTO] = 1, [NOCRYPTO] = 1: Reserved. */
        uint64_t nomul                 : 1;  /**< [ 27: 27](RO) Fuse information - VMUL disable. */
        uint64_t nodfa_cp2             : 1;  /**< [ 28: 28](RO) Fuse information - HFA disable (CP2). */
        uint64_t reserved_29           : 1;
        uint64_t lmc_mode32            : 1;  /**< [ 30: 30](RO) DRAM controller is limited to 32/36 bit wide parts.  In CN80XX always set. */
        uint64_t reserved_31           : 1;
        uint64_t raid_en               : 1;  /**< [ 32: 32](RO) Fuse information - RAID enabled. */
        uint64_t fus318                : 1;  /**< [ 33: 33](RO) Reserved. */
        uint64_t dorm_crypto           : 1;  /**< [ 34: 34](RO) Fuse information - Dormant encryption enable. See NOCRYPTO. */
        uint64_t power_limit           : 2;  /**< [ 36: 35](RO) Reserved. */
        uint64_t rom_info              : 10; /**< [ 46: 37](RO) Fuse information - ROM info. */
        uint64_t fus118                : 1;  /**< [ 47: 47](RO) Reserved. */
        uint64_t gbl_pwr_throttle      : 8;  /**< [ 55: 48](RO) Reserved. */
        uint64_t run_platform          : 3;  /**< [ 58: 56](RO) Fuses to indicate the run platform. Not to be blown in actual hardware.
                                                                 Provides software a means of determining the platform at run time.
                                                                 0x0 = Hardware.
                                                                 0x1 = Emulator.
                                                                 0x2 = RTL simulator.
                                                                 0x3 = ASIM.
                                                                 0x4-0x7 = reserved. */
        uint64_t reserved_59_63        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mio_fus_dat2_s cn8; */
    struct cavm_mio_fus_dat2_cn81xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_59_63        : 5;
        uint64_t run_platform          : 3;  /**< [ 58: 56](RO) Fuses to indicate the run platform. Not to be blown in actual hardware.
                                                                 Provides software a means of determining the platform at run time.
                                                                 0x0 = Hardware.
                                                                 0x1 = Emulator.
                                                                 0x2 = RTL simulator.
                                                                 0x3 = ASIM.
                                                                 0x4-0x7 = reserved. */
        uint64_t gbl_pwr_throttle      : 8;  /**< [ 55: 48](RO) Reserved. */
        uint64_t fus118                : 1;  /**< [ 47: 47](RO) Reserved. */
        uint64_t rom_info              : 10; /**< [ 46: 37](RO) Fuse information - ROM info. */
        uint64_t power_limit           : 2;  /**< [ 36: 35](RO) Reserved. */
        uint64_t dorm_crypto           : 1;  /**< [ 34: 34](RO) Fuse information - Dormant encryption enable. See NOCRYPTO. */
        uint64_t fus318                : 1;  /**< [ 33: 33](RO) Reserved. */
        uint64_t raid_en               : 1;  /**< [ 32: 32](RO) Fuse information - RAID enabled. */
        uint64_t reserved_31           : 1;
        uint64_t lmc_mode32            : 1;  /**< [ 30: 30](RO) DRAM controller is limited to 32/36 bit wide parts.  In CN80XX always set. */
        uint64_t reserved_29           : 1;
        uint64_t nodfa_cp2             : 1;  /**< [ 28: 28](RO) Fuse information - HFA disable (CP2). */
        uint64_t nomul                 : 1;  /**< [ 27: 27](RO) Fuse information - VMUL disable. */
        uint64_t nocrypto              : 1;  /**< [ 26: 26](RO) Fuse information - [DORM_CRYPTO] and [NOCRYPTO] together select the crypto mode:

                                                                 _ [DORM_CRYPTO] = 0, [NOCRYPTO] = 0: AES/SHA/PMULL enabled.

                                                                 _ [DORM_CRYPTO] = 0, [NOCRYPTO] = 1: The AES, SHA, and PMULL 1D/2D instructions will
                                                                 cause undefined exceptions, and AP_ID_AA64ISAR0_EL1[AES, SHA1, SHA2] are zero
                                                                 indicating this behavior.

                                                                 _ [DORM_CRYPTO] = 1, [NOCRYPTO] = 0: Dormant encryption enable.  AES/SHA/PMULL are
                                                                 disabled (as if [NOCRYPTO] = 1) until the appropriate key is written to
                                                                 RNM_EER_KEY, then they are enabled (as if [NOCRYPTO] = 1).

                                                                 _ [DORM_CRYPTO] = 1, [NOCRYPTO] = 1: Reserved. */
        uint64_t trustzone_en          : 1;  /**< [ 25: 25](RO) Fuse information - TrustZone enable. */
        uint64_t reserved_24           : 1;
        uint64_t chip_id               : 8;  /**< [ 23: 16](RO) Chip revision identifier.
                                                                 \<23:22\> = Alternate package.
                                                                   0x0 = CN81xx-xxxx-BG676.
                                                                   0x1 = CN80xx-xxxx-BG555.
                                                                   0x2 = CN80xx-xxxx-BG676.
                                                                   0x3 = Reserved.

                                                                 \<21:19\> = Major revision.

                                                                 \<18:16\> = Minor revision.

                                                                 For example:
                                                                 \<pre\>
                                                                  \<21:19\>  \<18:16\>  Description
                                                                  -------  -------  -----------
                                                                      0x0      0x0  Pass 1.0.
                                                                      0x0      0x1  Pass 1.1.
                                                                      0x0      0x2  Pass 1.2.
                                                                      0x1      0x0  Pass 2.0.
                                                                      0x1      0x1  Pass 2.1.
                                                                      0x1      0x2  Pass 2.2.
                                                                      ...      ...  ...
                                                                      0x7      0x7  Pass 8.8.
                                                                 \</pre\> */
        uint64_t ocx_dis               : 1;  /**< [ 15: 15](RO) Reserved. */
        uint64_t bgx_dis               : 2;  /**< [ 14: 13](RO) Fuse information - BGX disable:
                                                                   \<13\> = BGX0 disable.
                                                                   \<14\> = BGX1 disable. */
        uint64_t sata_dis              : 4;  /**< [ 12:  9](RO) Fuse information - SATA disable:
                                                                   \<9\> = SATA0 disable.
                                                                   \<10\> = SATA1 disable.
                                                                   \<11\> = Reserved.
                                                                   \<12\> = Reserved. */
        uint64_t pem_dis               : 3;  /**< [  8:  6](RO) Fuse information - PEM disable:
                                                                   \<6\> = PEM0 disable.
                                                                   \<7\> = PEM1 disable
                                                                   \<8\> = PEM2 disable. */
        uint64_t lmc_half              : 1;  /**< [  5:  5](RO) Fuse information - LMC1 disabled. LMC1 not present in CN80XX/CN81XX, so clear. */
        uint64_t reserved_0_4          : 5;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_4          : 5;
        uint64_t lmc_half              : 1;  /**< [  5:  5](RO) Fuse information - LMC1 disabled. LMC1 not present in CN80XX/CN81XX, so clear. */
        uint64_t pem_dis               : 3;  /**< [  8:  6](RO) Fuse information - PEM disable:
                                                                   \<6\> = PEM0 disable.
                                                                   \<7\> = PEM1 disable
                                                                   \<8\> = PEM2 disable. */
        uint64_t sata_dis              : 4;  /**< [ 12:  9](RO) Fuse information - SATA disable:
                                                                   \<9\> = SATA0 disable.
                                                                   \<10\> = SATA1 disable.
                                                                   \<11\> = Reserved.
                                                                   \<12\> = Reserved. */
        uint64_t bgx_dis               : 2;  /**< [ 14: 13](RO) Fuse information - BGX disable:
                                                                   \<13\> = BGX0 disable.
                                                                   \<14\> = BGX1 disable. */
        uint64_t ocx_dis               : 1;  /**< [ 15: 15](RO) Reserved. */
        uint64_t chip_id               : 8;  /**< [ 23: 16](RO) Chip revision identifier.
                                                                 \<23:22\> = Alternate package.
                                                                   0x0 = CN81xx-xxxx-BG676.
                                                                   0x1 = CN80xx-xxxx-BG555.
                                                                   0x2 = CN80xx-xxxx-BG676.
                                                                   0x3 = Reserved.

                                                                 \<21:19\> = Major revision.

                                                                 \<18:16\> = Minor revision.

                                                                 For example:
                                                                 \<pre\>
                                                                  \<21:19\>  \<18:16\>  Description
                                                                  -------  -------  -----------
                                                                      0x0      0x0  Pass 1.0.
                                                                      0x0      0x1  Pass 1.1.
                                                                      0x0      0x2  Pass 1.2.
                                                                      0x1      0x0  Pass 2.0.
                                                                      0x1      0x1  Pass 2.1.
                                                                      0x1      0x2  Pass 2.2.
                                                                      ...      ...  ...
                                                                      0x7      0x7  Pass 8.8.
                                                                 \</pre\> */
        uint64_t reserved_24           : 1;
        uint64_t trustzone_en          : 1;  /**< [ 25: 25](RO) Fuse information - TrustZone enable. */
        uint64_t nocrypto              : 1;  /**< [ 26: 26](RO) Fuse information - [DORM_CRYPTO] and [NOCRYPTO] together select the crypto mode:

                                                                 _ [DORM_CRYPTO] = 0, [NOCRYPTO] = 0: AES/SHA/PMULL enabled.

                                                                 _ [DORM_CRYPTO] = 0, [NOCRYPTO] = 1: The AES, SHA, and PMULL 1D/2D instructions will
                                                                 cause undefined exceptions, and AP_ID_AA64ISAR0_EL1[AES, SHA1, SHA2] are zero
                                                                 indicating this behavior.

                                                                 _ [DORM_CRYPTO] = 1, [NOCRYPTO] = 0: Dormant encryption enable.  AES/SHA/PMULL are
                                                                 disabled (as if [NOCRYPTO] = 1) until the appropriate key is written to
                                                                 RNM_EER_KEY, then they are enabled (as if [NOCRYPTO] = 1).

                                                                 _ [DORM_CRYPTO] = 1, [NOCRYPTO] = 1: Reserved. */
        uint64_t nomul                 : 1;  /**< [ 27: 27](RO) Fuse information - VMUL disable. */
        uint64_t nodfa_cp2             : 1;  /**< [ 28: 28](RO) Fuse information - HFA disable (CP2). */
        uint64_t reserved_29           : 1;
        uint64_t lmc_mode32            : 1;  /**< [ 30: 30](RO) DRAM controller is limited to 32/36 bit wide parts.  In CN80XX always set. */
        uint64_t reserved_31           : 1;
        uint64_t raid_en               : 1;  /**< [ 32: 32](RO) Fuse information - RAID enabled. */
        uint64_t fus318                : 1;  /**< [ 33: 33](RO) Reserved. */
        uint64_t dorm_crypto           : 1;  /**< [ 34: 34](RO) Fuse information - Dormant encryption enable. See NOCRYPTO. */
        uint64_t power_limit           : 2;  /**< [ 36: 35](RO) Reserved. */
        uint64_t rom_info              : 10; /**< [ 46: 37](RO) Fuse information - ROM info. */
        uint64_t fus118                : 1;  /**< [ 47: 47](RO) Reserved. */
        uint64_t gbl_pwr_throttle      : 8;  /**< [ 55: 48](RO) Reserved. */
        uint64_t run_platform          : 3;  /**< [ 58: 56](RO) Fuses to indicate the run platform. Not to be blown in actual hardware.
                                                                 Provides software a means of determining the platform at run time.
                                                                 0x0 = Hardware.
                                                                 0x1 = Emulator.
                                                                 0x2 = RTL simulator.
                                                                 0x3 = ASIM.
                                                                 0x4-0x7 = reserved. */
        uint64_t reserved_59_63        : 5;
#endif /* Word 0 - End */
    } cn81xx;
    struct cavm_mio_fus_dat2_cn83xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_59_63        : 5;
        uint64_t run_platform          : 3;  /**< [ 58: 56](RO) Fuses to indicate the run platform. Not to be blown in actual hardware.
                                                                 Provides software a means of determining the platform at run time.
                                                                 0x0 = Hardware.
                                                                 0x1 = Emulator.
                                                                 0x2 = RTL simulator.
                                                                 0x3 = ASIM.
                                                                 0x4-0x7 = reserved. */
        uint64_t gbl_pwr_throttle      : 8;  /**< [ 55: 48](RO) Reserved. */
        uint64_t fus118                : 1;  /**< [ 47: 47](RO) Reserved. */
        uint64_t rom_info              : 10; /**< [ 46: 37](RO) Fuse information - ROM info. */
        uint64_t power_limit           : 2;  /**< [ 36: 35](RO) Reserved. */
        uint64_t dorm_crypto           : 1;  /**< [ 34: 34](RO) Fuse information - Dormant encryption enable. See NOCRYPTO. */
        uint64_t fus318                : 1;  /**< [ 33: 33](RO) Reserved. */
        uint64_t raid_en               : 1;  /**< [ 32: 32](RO) Fuse information - RAID enabled. */
        uint64_t reserved_31           : 1;
        uint64_t lmc_mode32            : 1;  /**< [ 30: 30](RO) DRAM controller is limited to 32/36 bit wide parts. */
        uint64_t reserved_29           : 1;
        uint64_t nodfa_cp2             : 1;  /**< [ 28: 28](RO) Fuse information - HFA disable (CP2). */
        uint64_t nomul                 : 1;  /**< [ 27: 27](RO) Fuse information - VMUL disable. */
        uint64_t nocrypto              : 1;  /**< [ 26: 26](RO) Fuse information - [DORM_CRYPTO] and [NOCRYPTO] together select the crypto mode:

                                                                 _ [DORM_CRYPTO] = 0, [NOCRYPTO] = 0: AES/SHA/PMULL enabled.

                                                                 _ [DORM_CRYPTO] = 0, [NOCRYPTO] = 1: The AES, SHA, and PMULL 1D/2D instructions will
                                                                 cause undefined exceptions, and AP_ID_AA64ISAR0_EL1[AES, SHA1, SHA2] are zero
                                                                 indicating this behavior.

                                                                 _ [DORM_CRYPTO] = 1, [NOCRYPTO] = 0: Dormant encryption enable.  AES/SHA/PMULL are
                                                                 disabled (as if [NOCRYPTO] = 1) until the appropriate key is written to
                                                                 RNM_EER_KEY, then they are enabled (as if [NOCRYPTO] = 1).

                                                                 _ [DORM_CRYPTO] = 1, [NOCRYPTO] = 1: Reserved. */
        uint64_t trustzone_en          : 1;  /**< [ 25: 25](RO) Fuse information - TrustZone enable. */
        uint64_t reserved_24           : 1;
        uint64_t chip_id               : 8;  /**< [ 23: 16](RO) Chip revision identifier.
                                                                 \<23:22\> = Alternate package.
                                                                 \<21:19\> = Major revision.
                                                                 \<18:16\> = Minor revision.

                                                                 For example:
                                                                 \<pre\>
                                                                  \<21:19\>  \<18:16\>  Description
                                                                  -------  -------  -----------
                                                                      0x0      0x0  Pass 1.0.
                                                                      0x0      0x1  Pass 1.1.
                                                                      0x0      0x2  Pass 1.2.
                                                                      0x1      0x0  Pass 2.0.
                                                                      0x1      0x1  Pass 2.1.
                                                                      0x1      0x2  Pass 2.2.
                                                                      ...      ...  ...
                                                                      0x7      0x7  Pass 8.8.
                                                                 \</pre\> */
        uint64_t ocx_dis               : 1;  /**< [ 15: 15](RO) Reserved. */
        uint64_t bgx_dis               : 2;  /**< [ 14: 13](RO) Fuse information - BGX disable:
                                                                   \<13\> = BGX0 disable.
                                                                   \<14\> = BGX1 disable. */
        uint64_t sata_dis              : 4;  /**< [ 12:  9](RO) Fuse information - SATA disable:
                                                                   \<9\> = SATA0-1 disable.
                                                                   \<10\> = SATA2-3 disable.
                                                                   \<11\> = SATA4-5 disable.
                                                                   \<12\> = Reserved. */
        uint64_t pem_dis               : 3;  /**< [  8:  6](RO) Fuse information - PEM disable:
                                                                   \<6\> = PEM0-1 disable.
                                                                   \<7\> = PEM2 disable
                                                                   \<8\> = PEM3 disable. */
        uint64_t lmc_half              : 1;  /**< [  5:  5](RO) Fuse information - LMC1 disabled. */
        uint64_t tim_dis               : 1;  /**< [  4:  4](RO) Fuse information TIM disable. */
        uint64_t bgx3_dis              : 1;  /**< [  3:  3](RO) Fuse information BGX3 disable. */
        uint64_t bgx2_dis              : 1;  /**< [  2:  2](RO) Fuse information BGX2 disable. */
        uint64_t ddf_dis               : 1;  /**< [  1:  1](RO) Fuse information DDF disable. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t ddf_dis               : 1;  /**< [  1:  1](RO) Fuse information DDF disable. */
        uint64_t bgx2_dis              : 1;  /**< [  2:  2](RO) Fuse information BGX2 disable. */
        uint64_t bgx3_dis              : 1;  /**< [  3:  3](RO) Fuse information BGX3 disable. */
        uint64_t tim_dis               : 1;  /**< [  4:  4](RO) Fuse information TIM disable. */
        uint64_t lmc_half              : 1;  /**< [  5:  5](RO) Fuse information - LMC1 disabled. */
        uint64_t pem_dis               : 3;  /**< [  8:  6](RO) Fuse information - PEM disable:
                                                                   \<6\> = PEM0-1 disable.
                                                                   \<7\> = PEM2 disable
                                                                   \<8\> = PEM3 disable. */
        uint64_t sata_dis              : 4;  /**< [ 12:  9](RO) Fuse information - SATA disable:
                                                                   \<9\> = SATA0-1 disable.
                                                                   \<10\> = SATA2-3 disable.
                                                                   \<11\> = SATA4-5 disable.
                                                                   \<12\> = Reserved. */
        uint64_t bgx_dis               : 2;  /**< [ 14: 13](RO) Fuse information - BGX disable:
                                                                   \<13\> = BGX0 disable.
                                                                   \<14\> = BGX1 disable. */
        uint64_t ocx_dis               : 1;  /**< [ 15: 15](RO) Reserved. */
        uint64_t chip_id               : 8;  /**< [ 23: 16](RO) Chip revision identifier.
                                                                 \<23:22\> = Alternate package.
                                                                 \<21:19\> = Major revision.
                                                                 \<18:16\> = Minor revision.

                                                                 For example:
                                                                 \<pre\>
                                                                  \<21:19\>  \<18:16\>  Description
                                                                  -------  -------  -----------
                                                                      0x0      0x0  Pass 1.0.
                                                                      0x0      0x1  Pass 1.1.
                                                                      0x0      0x2  Pass 1.2.
                                                                      0x1      0x0  Pass 2.0.
                                                                      0x1      0x1  Pass 2.1.
                                                                      0x1      0x2  Pass 2.2.
                                                                      ...      ...  ...
                                                                      0x7      0x7  Pass 8.8.
                                                                 \</pre\> */
        uint64_t reserved_24           : 1;
        uint64_t trustzone_en          : 1;  /**< [ 25: 25](RO) Fuse information - TrustZone enable. */
        uint64_t nocrypto              : 1;  /**< [ 26: 26](RO) Fuse information - [DORM_CRYPTO] and [NOCRYPTO] together select the crypto mode:

                                                                 _ [DORM_CRYPTO] = 0, [NOCRYPTO] = 0: AES/SHA/PMULL enabled.

                                                                 _ [DORM_CRYPTO] = 0, [NOCRYPTO] = 1: The AES, SHA, and PMULL 1D/2D instructions will
                                                                 cause undefined exceptions, and AP_ID_AA64ISAR0_EL1[AES, SHA1, SHA2] are zero
                                                                 indicating this behavior.

                                                                 _ [DORM_CRYPTO] = 1, [NOCRYPTO] = 0: Dormant encryption enable.  AES/SHA/PMULL are
                                                                 disabled (as if [NOCRYPTO] = 1) until the appropriate key is written to
                                                                 RNM_EER_KEY, then they are enabled (as if [NOCRYPTO] = 1).

                                                                 _ [DORM_CRYPTO] = 1, [NOCRYPTO] = 1: Reserved. */
        uint64_t nomul                 : 1;  /**< [ 27: 27](RO) Fuse information - VMUL disable. */
        uint64_t nodfa_cp2             : 1;  /**< [ 28: 28](RO) Fuse information - HFA disable (CP2). */
        uint64_t reserved_29           : 1;
        uint64_t lmc_mode32            : 1;  /**< [ 30: 30](RO) DRAM controller is limited to 32/36 bit wide parts. */
        uint64_t reserved_31           : 1;
        uint64_t raid_en               : 1;  /**< [ 32: 32](RO) Fuse information - RAID enabled. */
        uint64_t fus318                : 1;  /**< [ 33: 33](RO) Reserved. */
        uint64_t dorm_crypto           : 1;  /**< [ 34: 34](RO) Fuse information - Dormant encryption enable. See NOCRYPTO. */
        uint64_t power_limit           : 2;  /**< [ 36: 35](RO) Reserved. */
        uint64_t rom_info              : 10; /**< [ 46: 37](RO) Fuse information - ROM info. */
        uint64_t fus118                : 1;  /**< [ 47: 47](RO) Reserved. */
        uint64_t gbl_pwr_throttle      : 8;  /**< [ 55: 48](RO) Reserved. */
        uint64_t run_platform          : 3;  /**< [ 58: 56](RO) Fuses to indicate the run platform. Not to be blown in actual hardware.
                                                                 Provides software a means of determining the platform at run time.
                                                                 0x0 = Hardware.
                                                                 0x1 = Emulator.
                                                                 0x2 = RTL simulator.
                                                                 0x3 = ASIM.
                                                                 0x4-0x7 = reserved. */
        uint64_t reserved_59_63        : 5;
#endif /* Word 0 - End */
    } cn83xx;
};
typedef union cavm_mio_fus_dat2 cavm_mio_fus_dat2_t;

#define CAVM_MIO_FUS_DAT2 CAVM_MIO_FUS_DAT2_FUNC()
static inline uint64_t CAVM_MIO_FUS_DAT2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MIO_FUS_DAT2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x87e003001410ll;
    __cavm_csr_fatal("MIO_FUS_DAT2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MIO_FUS_DAT2 cavm_mio_fus_dat2_t
#define bustype_CAVM_MIO_FUS_DAT2 CSR_TYPE_RSL
#define basename_CAVM_MIO_FUS_DAT2 "MIO_FUS_DAT2"
#define device_bar_CAVM_MIO_FUS_DAT2 0x0 /* PF_BAR0 */
#define busnum_CAVM_MIO_FUS_DAT2 0
#define arguments_CAVM_MIO_FUS_DAT2 -1,-1,-1,-1

/**
 * Register (RSL) mio_fus_dat3
 *
 * MIO Fuse Data3 Register
 */
union cavm_mio_fus_dat3
{
    uint64_t u;
    struct cavm_mio_fus_dat3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ema0                  : 6;  /**< [ 63: 58](RO) Fuse information - EMA0. */
        uint64_t pll_ctl               : 10; /**< [ 57: 48](RO) Reserved. */
        uint64_t dfa_info_dte          : 3;  /**< [ 47: 45](RO) Fuse information - HFA information (HTE). */
        uint64_t dfa_info_clm          : 4;  /**< [ 44: 41](RO) Fuse information - HFA information (cluster mask). */
        uint64_t pll_alt_matrix        : 1;  /**< [ 40: 40](RO) Fuse information - Select alternate PLL matrix. */
        uint64_t pll_bwadj_denom       : 2;  /**< [ 39: 38](RO) Select CLKF denominator for BWADJ value.
                                                                    0x0 = Selects CLKF/4.
                                                                    0x1 = Selects CLKF/2.
                                                                    0x2 = Selects CLKF/8. */
        uint64_t efus_lck_rsv          : 1;  /**< [ 37: 37](RO) Fuse information - efuse lockdown. */
        uint64_t efus_lck_man          : 1;  /**< [ 36: 36](RO) Fuse information - efuse lockdown. */
        uint64_t pll_half_dis          : 1;  /**< [ 35: 35](RO/H) Fuse information - coprocessor-clock PLL control. */
        uint64_t l2c_crip              : 3;  /**< [ 34: 32](RO) Fuse information - L2C cripple:
                                                                 0x0 = Full cache (16-way, 2 MB).
                                                                 0x1 = 3/4 ways (12-way, 1.5 MB).
                                                                 0x2 = 1/2 ways (8-way, 1 MB).
                                                                 0x3 = 1/4 ways (4-way, 512 KB).
                                                                 0x4-0x7 = Reserved. */
        uint64_t use_int_refclk        : 1;  /**< [ 31: 31](RO) If set, use the PLL output as the low-jitter reference clock to the rclk DLLs. Default is
                                                                 to use the internal input reference clock. */
        uint64_t zip_info              : 2;  /**< [ 30: 29](RO) Fuse information - ZIP information. */
        uint64_t bar2_sz_conf          : 1;  /**< [ 28: 28](RO) Fuse information - When 0, BAR2 size conforms to PCIe specification. */
        uint64_t efus_lck              : 1;  /**< [ 27: 27](RO) Fuse information - efuse lockdown. */
        uint64_t efus_ign              : 1;  /**< [ 26: 26](RO) Fuse information - efuse ignore. */
        uint64_t nozip                 : 1;  /**< [ 25: 25](RO) Fuse information - ZIP disable. */
        uint64_t nodfa_dte             : 1;  /**< [ 24: 24](RO) Fuse information - HFA disable (HTE). */
        uint64_t ema1                  : 6;  /**< [ 23: 18](RO) Fuse information - EMA1. */
        uint64_t nohna_dte             : 1;  /**< [ 17: 17](RO) Fuse information - HNA disable (DTE). */
        uint64_t hna_info_dte          : 3;  /**< [ 16: 14](RO) Fuse information - HNA information (DTE). */
        uint64_t hna_info_clm          : 4;  /**< [ 13: 10](RO) Fuse information - HNA information (cluster mask). */
        uint64_t tns_cripple           : 1;  /**< [  9:  9](RO) Reserved. */
        uint64_t core_pll_mul          : 5;  /**< [  8:  4](RO) Core-clock PLL multiplier hardware limit. Indicates maximum
                                                                 value for PLL_MUL[5:1] straps.  Any strap setting above this
                                                                 value will be ignored.  A value of 0 indicates no hardware limit. */
        uint64_t pnr_pll_mul           : 4;  /**< [  3:  0](RO) Coprocessor-clock PLL multiplier hardware limit.  Indicates maximum
                                                                 value for PNR_MUL[5:1] straps.  Any strap setting above this
                                                                 value will be ignored.  A value of 0 indicates no hardware limit. */
#else /* Word 0 - Little Endian */
        uint64_t pnr_pll_mul           : 4;  /**< [  3:  0](RO) Coprocessor-clock PLL multiplier hardware limit.  Indicates maximum
                                                                 value for PNR_MUL[5:1] straps.  Any strap setting above this
                                                                 value will be ignored.  A value of 0 indicates no hardware limit. */
        uint64_t core_pll_mul          : 5;  /**< [  8:  4](RO) Core-clock PLL multiplier hardware limit. Indicates maximum
                                                                 value for PLL_MUL[5:1] straps.  Any strap setting above this
                                                                 value will be ignored.  A value of 0 indicates no hardware limit. */
        uint64_t tns_cripple           : 1;  /**< [  9:  9](RO) Reserved. */
        uint64_t hna_info_clm          : 4;  /**< [ 13: 10](RO) Fuse information - HNA information (cluster mask). */
        uint64_t hna_info_dte          : 3;  /**< [ 16: 14](RO) Fuse information - HNA information (DTE). */
        uint64_t nohna_dte             : 1;  /**< [ 17: 17](RO) Fuse information - HNA disable (DTE). */
        uint64_t ema1                  : 6;  /**< [ 23: 18](RO) Fuse information - EMA1. */
        uint64_t nodfa_dte             : 1;  /**< [ 24: 24](RO) Fuse information - HFA disable (HTE). */
        uint64_t nozip                 : 1;  /**< [ 25: 25](RO) Fuse information - ZIP disable. */
        uint64_t efus_ign              : 1;  /**< [ 26: 26](RO) Fuse information - efuse ignore. */
        uint64_t efus_lck              : 1;  /**< [ 27: 27](RO) Fuse information - efuse lockdown. */
        uint64_t bar2_sz_conf          : 1;  /**< [ 28: 28](RO) Fuse information - When 0, BAR2 size conforms to PCIe specification. */
        uint64_t zip_info              : 2;  /**< [ 30: 29](RO) Fuse information - ZIP information. */
        uint64_t use_int_refclk        : 1;  /**< [ 31: 31](RO) If set, use the PLL output as the low-jitter reference clock to the rclk DLLs. Default is
                                                                 to use the internal input reference clock. */
        uint64_t l2c_crip              : 3;  /**< [ 34: 32](RO) Fuse information - L2C cripple:
                                                                 0x0 = Full cache (16-way, 2 MB).
                                                                 0x1 = 3/4 ways (12-way, 1.5 MB).
                                                                 0x2 = 1/2 ways (8-way, 1 MB).
                                                                 0x3 = 1/4 ways (4-way, 512 KB).
                                                                 0x4-0x7 = Reserved. */
        uint64_t pll_half_dis          : 1;  /**< [ 35: 35](RO/H) Fuse information - coprocessor-clock PLL control. */
        uint64_t efus_lck_man          : 1;  /**< [ 36: 36](RO) Fuse information - efuse lockdown. */
        uint64_t efus_lck_rsv          : 1;  /**< [ 37: 37](RO) Fuse information - efuse lockdown. */
        uint64_t pll_bwadj_denom       : 2;  /**< [ 39: 38](RO) Select CLKF denominator for BWADJ value.
                                                                    0x0 = Selects CLKF/4.
                                                                    0x1 = Selects CLKF/2.
                                                                    0x2 = Selects CLKF/8. */
        uint64_t pll_alt_matrix        : 1;  /**< [ 40: 40](RO) Fuse information - Select alternate PLL matrix. */
        uint64_t dfa_info_clm          : 4;  /**< [ 44: 41](RO) Fuse information - HFA information (cluster mask). */
        uint64_t dfa_info_dte          : 3;  /**< [ 47: 45](RO) Fuse information - HFA information (HTE). */
        uint64_t pll_ctl               : 10; /**< [ 57: 48](RO) Reserved. */
        uint64_t ema0                  : 6;  /**< [ 63: 58](RO) Fuse information - EMA0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mio_fus_dat3_s cn8; */
    /* struct cavm_mio_fus_dat3_s cn81xx; */
    struct cavm_mio_fus_dat3_cn83xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ema0                  : 6;  /**< [ 63: 58](RO) Fuse information - EMA0. */
        uint64_t pll_ctl               : 10; /**< [ 57: 48](RO) Reserved. */
        uint64_t dfa_info_dte          : 3;  /**< [ 47: 45](RO) Fuse information - HFA information (HTE). */
        uint64_t dfa_info_clm          : 4;  /**< [ 44: 41](RO) Fuse information - HFA information (cluster mask). */
        uint64_t pll_alt_matrix        : 1;  /**< [ 40: 40](RO) Fuse information - Select alternate PLL matrix. */
        uint64_t pll_bwadj_denom       : 2;  /**< [ 39: 38](RO) Select CLKF denominator for BWADJ value.
                                                                    0x0 = Selects CLKF/4.
                                                                    0x1 = Selects CLKF/2.
                                                                    0x2 = Selects CLKF/8. */
        uint64_t efus_lck_rsv          : 1;  /**< [ 37: 37](RO) Fuse information - efuse lockdown. */
        uint64_t efus_lck_man          : 1;  /**< [ 36: 36](RO) Fuse information - efuse lockdown. */
        uint64_t pll_half_dis          : 1;  /**< [ 35: 35](RO/H) Fuse information - coprocessor-clock PLL control. */
        uint64_t l2c_crip              : 3;  /**< [ 34: 32](RO) Fuse information - L2C cripple:
                                                                 0x0 = Full cache (16-way, 8 MB).
                                                                 0x1 = 3/4 ways (12-way, 6 MB).
                                                                 0x2 = 1/2 ways (8-way, 4 MB).
                                                                 0x3 = 1/4 ways (4-way, 2 MB).
                                                                 0x4-0x7 = Reserved. */
        uint64_t use_int_refclk        : 1;  /**< [ 31: 31](RO) If set, use the PLL output as the low-jitter reference clock to the rclk DLLs. Default is
                                                                 to use the internal input reference clock. */
        uint64_t zip_info              : 2;  /**< [ 30: 29](RO) Fuse information - ZIP information. */
        uint64_t bar2_sz_conf          : 1;  /**< [ 28: 28](RO) Fuse information - When 0, BAR2 size conforms to PCIe specification. */
        uint64_t efus_lck              : 1;  /**< [ 27: 27](RO) Fuse information - efuse lockdown. */
        uint64_t efus_ign              : 1;  /**< [ 26: 26](RO) Fuse information - efuse ignore. */
        uint64_t nozip                 : 1;  /**< [ 25: 25](RO) Fuse information - ZIP disable. */
        uint64_t nodfa_dte             : 1;  /**< [ 24: 24](RO) Fuse information - HFA disable (HTE). */
        uint64_t ema1                  : 6;  /**< [ 23: 18](RO) Fuse information - EMA1. */
        uint64_t nohna_dte             : 1;  /**< [ 17: 17](RO) Fuse information - HNA disable (DTE). */
        uint64_t hna_info_dte          : 3;  /**< [ 16: 14](RO) Fuse information - HNA information (DTE). */
        uint64_t hna_info_clm          : 4;  /**< [ 13: 10](RO) Fuse information - HNA information (cluster mask). */
        uint64_t tns_cripple           : 1;  /**< [  9:  9](RO) Reserved. */
        uint64_t core_pll_mul          : 5;  /**< [  8:  4](RO) Core-clock PLL multiplier hardware limit. Indicates maximum
                                                                 value for PLL_MUL[5:1] straps.  Any strap setting above this
                                                                 value will be ignored.  A value of 0 indicates no hardware limit. */
        uint64_t pnr_pll_mul           : 4;  /**< [  3:  0](RO) Coprocessor-clock PLL multiplier hardware limit.  Indicates maximum
                                                                 value for PNR_MUL[5:1] straps.  Any strap setting above this
                                                                 value will be ignored.  A value of 0 indicates no hardware limit. */
#else /* Word 0 - Little Endian */
        uint64_t pnr_pll_mul           : 4;  /**< [  3:  0](RO) Coprocessor-clock PLL multiplier hardware limit.  Indicates maximum
                                                                 value for PNR_MUL[5:1] straps.  Any strap setting above this
                                                                 value will be ignored.  A value of 0 indicates no hardware limit. */
        uint64_t core_pll_mul          : 5;  /**< [  8:  4](RO) Core-clock PLL multiplier hardware limit. Indicates maximum
                                                                 value for PLL_MUL[5:1] straps.  Any strap setting above this
                                                                 value will be ignored.  A value of 0 indicates no hardware limit. */
        uint64_t tns_cripple           : 1;  /**< [  9:  9](RO) Reserved. */
        uint64_t hna_info_clm          : 4;  /**< [ 13: 10](RO) Fuse information - HNA information (cluster mask). */
        uint64_t hna_info_dte          : 3;  /**< [ 16: 14](RO) Fuse information - HNA information (DTE). */
        uint64_t nohna_dte             : 1;  /**< [ 17: 17](RO) Fuse information - HNA disable (DTE). */
        uint64_t ema1                  : 6;  /**< [ 23: 18](RO) Fuse information - EMA1. */
        uint64_t nodfa_dte             : 1;  /**< [ 24: 24](RO) Fuse information - HFA disable (HTE). */
        uint64_t nozip                 : 1;  /**< [ 25: 25](RO) Fuse information - ZIP disable. */
        uint64_t efus_ign              : 1;  /**< [ 26: 26](RO) Fuse information - efuse ignore. */
        uint64_t efus_lck              : 1;  /**< [ 27: 27](RO) Fuse information - efuse lockdown. */
        uint64_t bar2_sz_conf          : 1;  /**< [ 28: 28](RO) Fuse information - When 0, BAR2 size conforms to PCIe specification. */
        uint64_t zip_info              : 2;  /**< [ 30: 29](RO) Fuse information - ZIP information. */
        uint64_t use_int_refclk        : 1;  /**< [ 31: 31](RO) If set, use the PLL output as the low-jitter reference clock to the rclk DLLs. Default is
                                                                 to use the internal input reference clock. */
        uint64_t l2c_crip              : 3;  /**< [ 34: 32](RO) Fuse information - L2C cripple:
                                                                 0x0 = Full cache (16-way, 8 MB).
                                                                 0x1 = 3/4 ways (12-way, 6 MB).
                                                                 0x2 = 1/2 ways (8-way, 4 MB).
                                                                 0x3 = 1/4 ways (4-way, 2 MB).
                                                                 0x4-0x7 = Reserved. */
        uint64_t pll_half_dis          : 1;  /**< [ 35: 35](RO/H) Fuse information - coprocessor-clock PLL control. */
        uint64_t efus_lck_man          : 1;  /**< [ 36: 36](RO) Fuse information - efuse lockdown. */
        uint64_t efus_lck_rsv          : 1;  /**< [ 37: 37](RO) Fuse information - efuse lockdown. */
        uint64_t pll_bwadj_denom       : 2;  /**< [ 39: 38](RO) Select CLKF denominator for BWADJ value.
                                                                    0x0 = Selects CLKF/4.
                                                                    0x1 = Selects CLKF/2.
                                                                    0x2 = Selects CLKF/8. */
        uint64_t pll_alt_matrix        : 1;  /**< [ 40: 40](RO) Fuse information - Select alternate PLL matrix. */
        uint64_t dfa_info_clm          : 4;  /**< [ 44: 41](RO) Fuse information - HFA information (cluster mask). */
        uint64_t dfa_info_dte          : 3;  /**< [ 47: 45](RO) Fuse information - HFA information (HTE). */
        uint64_t pll_ctl               : 10; /**< [ 57: 48](RO) Reserved. */
        uint64_t ema0                  : 6;  /**< [ 63: 58](RO) Fuse information - EMA0. */
#endif /* Word 0 - End */
    } cn83xx;
};
typedef union cavm_mio_fus_dat3 cavm_mio_fus_dat3_t;

#define CAVM_MIO_FUS_DAT3 CAVM_MIO_FUS_DAT3_FUNC()
static inline uint64_t CAVM_MIO_FUS_DAT3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MIO_FUS_DAT3_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x87e003001418ll;
    __cavm_csr_fatal("MIO_FUS_DAT3", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MIO_FUS_DAT3 cavm_mio_fus_dat3_t
#define bustype_CAVM_MIO_FUS_DAT3 CSR_TYPE_RSL
#define basename_CAVM_MIO_FUS_DAT3 "MIO_FUS_DAT3"
#define device_bar_CAVM_MIO_FUS_DAT3 0x0 /* PF_BAR0 */
#define busnum_CAVM_MIO_FUS_DAT3 0
#define arguments_CAVM_MIO_FUS_DAT3 -1,-1,-1,-1

/**
 * Register (RSL) mio_fus_dat4
 *
 * MIO Fuse Data4 Register
 */
union cavm_mio_fus_dat4
{
    uint64_t u;
    struct cavm_mio_fus_dat4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t global_rclk_byp_select : 1; /**< [ 63: 63](RO) Reserved. */
        uint64_t global_rclk_byp_setting : 11;/**< [ 62: 52](RO) Bits\<11:1\>. Reserved. */
        uint64_t east_rclk_byp_select  : 1;  /**< [ 51: 51](RO) Reserved. */
        uint64_t east_rclk_byp_setting : 12; /**< [ 50: 39](RO) Reserved. */
        uint64_t cmb_rclk_byp_select   : 1;  /**< [ 38: 38](RO) Reserved. */
        uint64_t cmb_rclk_byp_setting  : 12; /**< [ 37: 26](RO) Reserved. */
        uint64_t pp_rclk_byp_select    : 1;  /**< [ 25: 25](RO) Reserved. */
        uint64_t pp_rclk_byp_setting   : 12; /**< [ 24: 13](RO) Reserved. */
        uint64_t tad_rclk_byp_select   : 1;  /**< [ 12: 12](RO) Reserved. */
        uint64_t tad_rclk_byp_setting  : 12; /**< [ 11:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t tad_rclk_byp_setting  : 12; /**< [ 11:  0](RO) Reserved. */
        uint64_t tad_rclk_byp_select   : 1;  /**< [ 12: 12](RO) Reserved. */
        uint64_t pp_rclk_byp_setting   : 12; /**< [ 24: 13](RO) Reserved. */
        uint64_t pp_rclk_byp_select    : 1;  /**< [ 25: 25](RO) Reserved. */
        uint64_t cmb_rclk_byp_setting  : 12; /**< [ 37: 26](RO) Reserved. */
        uint64_t cmb_rclk_byp_select   : 1;  /**< [ 38: 38](RO) Reserved. */
        uint64_t east_rclk_byp_setting : 12; /**< [ 50: 39](RO) Reserved. */
        uint64_t east_rclk_byp_select  : 1;  /**< [ 51: 51](RO) Reserved. */
        uint64_t global_rclk_byp_setting : 11;/**< [ 62: 52](RO) Bits\<11:1\>. Reserved. */
        uint64_t global_rclk_byp_select : 1; /**< [ 63: 63](RO) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mio_fus_dat4_s cn; */
};
typedef union cavm_mio_fus_dat4 cavm_mio_fus_dat4_t;

#define CAVM_MIO_FUS_DAT4 CAVM_MIO_FUS_DAT4_FUNC()
static inline uint64_t CAVM_MIO_FUS_DAT4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MIO_FUS_DAT4_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x87e003001420ll;
    __cavm_csr_fatal("MIO_FUS_DAT4", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MIO_FUS_DAT4 cavm_mio_fus_dat4_t
#define bustype_CAVM_MIO_FUS_DAT4 CSR_TYPE_RSL
#define basename_CAVM_MIO_FUS_DAT4 "MIO_FUS_DAT4"
#define device_bar_CAVM_MIO_FUS_DAT4 0x0 /* PF_BAR0 */
#define busnum_CAVM_MIO_FUS_DAT4 0
#define arguments_CAVM_MIO_FUS_DAT4 -1,-1,-1,-1

/**
 * Register (RSL) mio_fus_pdf
 *
 * MIO Fuse Product Definition Field Register
 */
union cavm_mio_fus_pdf
{
    uint64_t u;
    struct cavm_mio_fus_pdf_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pdf                   : 64; /**< [ 63:  0](RO) Fuse information--product definition field. */
#else /* Word 0 - Little Endian */
        uint64_t pdf                   : 64; /**< [ 63:  0](RO) Fuse information--product definition field. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mio_fus_pdf_s cn; */
};
typedef union cavm_mio_fus_pdf cavm_mio_fus_pdf_t;

#define CAVM_MIO_FUS_PDF CAVM_MIO_FUS_PDF_FUNC()
static inline uint64_t CAVM_MIO_FUS_PDF_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MIO_FUS_PDF_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x87e003001428ll;
    __cavm_csr_fatal("MIO_FUS_PDF", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MIO_FUS_PDF cavm_mio_fus_pdf_t
#define bustype_CAVM_MIO_FUS_PDF CSR_TYPE_RSL
#define basename_CAVM_MIO_FUS_PDF "MIO_FUS_PDF"
#define device_bar_CAVM_MIO_FUS_PDF 0x0 /* PF_BAR0 */
#define busnum_CAVM_MIO_FUS_PDF 0
#define arguments_CAVM_MIO_FUS_PDF -1,-1,-1,-1

/**
 * Register (RSL) mio_fus_pll
 *
 * MIO Fuse PLL Register
 * This register contains PLL status and controls for the MSC_CLKOUT and
 * MSC_SYS_CLKOUT pins.  The fields are reset to zero on a cold reset.
 * the values are preserved on both a warm and soft reset.
 * MSC_CLKOUT and MSC_SYS_CLKOUT are for diagnostic use only and must
 * not be used to clock external components.
 */
union cavm_mio_fus_pll
{
    uint64_t u;
    struct cavm_mio_fus_pll_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_15_63        : 49;
        uint64_t core_status           : 3;  /**< [ 14: 12](RO) Core-clock PLL status information. */
        uint64_t reserved_11           : 1;
        uint64_t pnr_status            : 3;  /**< [ 10:  8](RO) Coprocessor-clock PLL status information. */
        uint64_t c_cout_rst            : 1;  /**< [  7:  7](R/W) Core clockout postscaler reset. The core clockout postscaler
                                                                 should be placed in reset at least 10 reference-clock cycles prior
                                                                 to changing [C_COUT_SEL]. The core clockout postscaler should remain
                                                                 under reset for at least 10 reference-clock cycles after [C_COUT_SEL]
                                                                 changes. This field is reset to zero on a cold reset, it is preserved
                                                                 on both warm and soft resets. */
        uint64_t c_cout_sel            : 2;  /**< [  6:  5](R/W) Core-clock output select:
                                                                 0x0 = Core clock.
                                                                 0x1 = PS output.
                                                                 0x2 = PLL output.
                                                                 0x3 = Undivided core clock. */
        uint64_t pnr_cout_rst          : 1;  /**< [  4:  4](R/W) SYS clockout postscaler reset. The PNR clockout postscaler
                                                                 should be placed in reset at least 10 reference-clock cycles
                                                                 prior to changing [PNR_COUT_SEL]. The SYS clockout postscaler
                                                                 should remain under reset for at least 10 reference clock cycles
                                                                 after [PNR_COUT_SEL] changes. */
        uint64_t pnr_cout_sel          : 2;  /**< [  3:  2](R/W) Coprocessor-clock output select:
                                                                 0x0 = Coprocessor clock.
                                                                 0x1 = PS output.
                                                                 0x2 = PLL output.
                                                                 0x3 = Undivided core clock. */
        uint64_t reserved_0_1          : 2;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_1          : 2;
        uint64_t pnr_cout_sel          : 2;  /**< [  3:  2](R/W) Coprocessor-clock output select:
                                                                 0x0 = Coprocessor clock.
                                                                 0x1 = PS output.
                                                                 0x2 = PLL output.
                                                                 0x3 = Undivided core clock. */
        uint64_t pnr_cout_rst          : 1;  /**< [  4:  4](R/W) SYS clockout postscaler reset. The PNR clockout postscaler
                                                                 should be placed in reset at least 10 reference-clock cycles
                                                                 prior to changing [PNR_COUT_SEL]. The SYS clockout postscaler
                                                                 should remain under reset for at least 10 reference clock cycles
                                                                 after [PNR_COUT_SEL] changes. */
        uint64_t c_cout_sel            : 2;  /**< [  6:  5](R/W) Core-clock output select:
                                                                 0x0 = Core clock.
                                                                 0x1 = PS output.
                                                                 0x2 = PLL output.
                                                                 0x3 = Undivided core clock. */
        uint64_t c_cout_rst            : 1;  /**< [  7:  7](R/W) Core clockout postscaler reset. The core clockout postscaler
                                                                 should be placed in reset at least 10 reference-clock cycles prior
                                                                 to changing [C_COUT_SEL]. The core clockout postscaler should remain
                                                                 under reset for at least 10 reference-clock cycles after [C_COUT_SEL]
                                                                 changes. This field is reset to zero on a cold reset, it is preserved
                                                                 on both warm and soft resets. */
        uint64_t pnr_status            : 3;  /**< [ 10:  8](RO) Coprocessor-clock PLL status information. */
        uint64_t reserved_11           : 1;
        uint64_t core_status           : 3;  /**< [ 14: 12](RO) Core-clock PLL status information. */
        uint64_t reserved_15_63        : 49;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mio_fus_pll_s cn; */
};
typedef union cavm_mio_fus_pll cavm_mio_fus_pll_t;

#define CAVM_MIO_FUS_PLL CAVM_MIO_FUS_PLL_FUNC()
static inline uint64_t CAVM_MIO_FUS_PLL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MIO_FUS_PLL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x87e003001580ll;
    __cavm_csr_fatal("MIO_FUS_PLL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MIO_FUS_PLL cavm_mio_fus_pll_t
#define bustype_CAVM_MIO_FUS_PLL CSR_TYPE_RSL
#define basename_CAVM_MIO_FUS_PLL "MIO_FUS_PLL"
#define device_bar_CAVM_MIO_FUS_PLL 0x0 /* PF_BAR0 */
#define busnum_CAVM_MIO_FUS_PLL 0
#define arguments_CAVM_MIO_FUS_PLL -1,-1,-1,-1

/**
 * Register (RSL) mio_fus_pname#
 *
 * MIO Fuse Product Name Register
 * ""These registers contain a 24-character string representing the part number,
 * e.g. "CN8800-2000BG2601-CPT-PR".
 *
 * The string is represented in a RAD-40-like encoding, padded with trailing spaces
 * that must be removed.  If the resulting string is empty, the product has not been
 * fused programmed and the name should be constructed from e.g. the core's device
 * number.
 *
 * Pseudocode for the decoding:
 * \<pre\>
 * datap = data_from_fuses;
 * //      where bit 0 of byte 0 array is fuse 1408;
 * //      i.e. bit 0 of MIO_FUS_PNAME(0)
 * void rad50_decode(const uint8_t* datap, char* bufferp) {
 *    // Psudocode only - assumes datap sized to at least 16 bytes,
 *    // and bufferp to at least 26 characters.
 *    const char* CHAR_MAP = " ABCDEFGHIJKLMNOPQRSTUVWXYZ#.-0123456789";
 *    char* cp = bufferp;
 *    for (int i=0; i\<FUSE_BYTES; i+=2) {
 *       // Data is stored little endian
 *       uint16_t data = ((const uint16_t*)datap)[i/2];
 *       ifndef MACHINE_LITTLE_ENDIAN
 *          data = __swab16(data);
 *       endif
 *       *cp++ = CHAR_MAP[(data/40/40) % 40];
 *       *cp++ = CHAR_MAP[(data/40) % 40];
 *       *cp++ = CHAR_MAP[(data) % 40];
 *    }
 *    *cp++ = '\0';
 *    for (cp = bufferp+strlen(bufferp)-1; cp\>=bufferp && isspace(*cp); --cp) *cp='\0';
 * }
 * \</pre\>"
 */
union cavm_mio_fus_pnamex
{
    uint64_t u;
    struct cavm_mio_fus_pnamex_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Product name information. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Product name information. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mio_fus_pnamex_s cn; */
};
typedef union cavm_mio_fus_pnamex cavm_mio_fus_pnamex_t;

static inline uint64_t CAVM_MIO_FUS_PNAMEX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MIO_FUS_PNAMEX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN8XXX) && (a<=1))
        return 0x87e003001440ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("MIO_FUS_PNAMEX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MIO_FUS_PNAMEX(a) cavm_mio_fus_pnamex_t
#define bustype_CAVM_MIO_FUS_PNAMEX(a) CSR_TYPE_RSL
#define basename_CAVM_MIO_FUS_PNAMEX(a) "MIO_FUS_PNAMEX"
#define device_bar_CAVM_MIO_FUS_PNAMEX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MIO_FUS_PNAMEX(a) (a)
#define arguments_CAVM_MIO_FUS_PNAMEX(a) (a),-1,-1,-1

/**
 * Register (RSL) mio_fus_prog
 *
 * INTERNAL: MIO Fuse Programming Register
 */
union cavm_mio_fus_prog
{
    uint64_t u;
    struct cavm_mio_fus_prog_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t sft                   : 1;  /**< [  1:  1](R/W/H)  */
        uint64_t prog                  : 1;  /**< [  0:  0](R/W/H)  */
#else /* Word 0 - Little Endian */
        uint64_t prog                  : 1;  /**< [  0:  0](R/W/H)  */
        uint64_t sft                   : 1;  /**< [  1:  1](R/W/H)  */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mio_fus_prog_s cn; */
};
typedef union cavm_mio_fus_prog cavm_mio_fus_prog_t;

#define CAVM_MIO_FUS_PROG CAVM_MIO_FUS_PROG_FUNC()
static inline uint64_t CAVM_MIO_FUS_PROG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MIO_FUS_PROG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x87e003001510ll;
    __cavm_csr_fatal("MIO_FUS_PROG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MIO_FUS_PROG cavm_mio_fus_prog_t
#define bustype_CAVM_MIO_FUS_PROG CSR_TYPE_RSL
#define basename_CAVM_MIO_FUS_PROG "MIO_FUS_PROG"
#define device_bar_CAVM_MIO_FUS_PROG 0x0 /* PF_BAR0 */
#define busnum_CAVM_MIO_FUS_PROG 0
#define arguments_CAVM_MIO_FUS_PROG -1,-1,-1,-1

/**
 * Register (RSL) mio_fus_rcmd
 *
 * MIO Fuse Read Command Register
 * To read an efuse, software writes [ADDR,PEND] with
 * the byte address of the fuse in question, then software can poll
 * [PEND]. When [PEND] = 0, then [DAT] is valid.
 * In addition, if the efuse read went to the efuse banks, software can
 * read MIO_FUS_BNK_DAT() which contains all 128 fuses in the bank
 * associated in ADDR.
 * Fuses 1023..960 are not accessible if
 * MIO_FUS_DAT2[DORM_CRYPTO] is enabled.
 */
union cavm_mio_fus_rcmd
{
    uint64_t u;
    struct cavm_mio_fus_rcmd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t dat                   : 8;  /**< [ 23: 16](RO/H) Eight bits of fuse data. */
        uint64_t reserved_13_15        : 3;
        uint64_t pend                  : 1;  /**< [ 12: 12](R/W/H) Software sets this bit to 1 on a write operation that starts
                                                                 the fuse read operation. Hardware clears this bit when the read
                                                                 operation is complete and [DAT] is valid. MIO_FUS_READ_TIMES[RDSTB_WH]
                                                                 determines the time for the operation to complete. */
        uint64_t reserved_11           : 1;
        uint64_t addr_hi               : 2;  /**< [ 10:  9](R/W) Upper fuse address bits to extend space beyond 2k fuses.
                                                                 Valid range is 0x0-0x3.  Software should not change this
                                                                 field while [PEND] is set.  It should wait for
                                                                 the hardware to clear it. */
        uint64_t efuse                 : 1;  /**< [  8:  8](R/W) Efuse storage. When set, the return data is from the efuse
                                                                 directly rather than the local storage. */
        uint64_t addr                  : 8;  /**< [  7:  0](R/W) Address. Specifies the byte address of the fuse to read.
                                                                 Software should not change this field while [PEND]
                                                                 is set. It must wait for the hardware to clear it. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 8;  /**< [  7:  0](R/W) Address. Specifies the byte address of the fuse to read.
                                                                 Software should not change this field while [PEND]
                                                                 is set. It must wait for the hardware to clear it. */
        uint64_t efuse                 : 1;  /**< [  8:  8](R/W) Efuse storage. When set, the return data is from the efuse
                                                                 directly rather than the local storage. */
        uint64_t addr_hi               : 2;  /**< [ 10:  9](R/W) Upper fuse address bits to extend space beyond 2k fuses.
                                                                 Valid range is 0x0-0x3.  Software should not change this
                                                                 field while [PEND] is set.  It should wait for
                                                                 the hardware to clear it. */
        uint64_t reserved_11           : 1;
        uint64_t pend                  : 1;  /**< [ 12: 12](R/W/H) Software sets this bit to 1 on a write operation that starts
                                                                 the fuse read operation. Hardware clears this bit when the read
                                                                 operation is complete and [DAT] is valid. MIO_FUS_READ_TIMES[RDSTB_WH]
                                                                 determines the time for the operation to complete. */
        uint64_t reserved_13_15        : 3;
        uint64_t dat                   : 8;  /**< [ 23: 16](RO/H) Eight bits of fuse data. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mio_fus_rcmd_s cn; */
};
typedef union cavm_mio_fus_rcmd cavm_mio_fus_rcmd_t;

#define CAVM_MIO_FUS_RCMD CAVM_MIO_FUS_RCMD_FUNC()
static inline uint64_t CAVM_MIO_FUS_RCMD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MIO_FUS_RCMD_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x87e003001500ll;
    __cavm_csr_fatal("MIO_FUS_RCMD", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MIO_FUS_RCMD cavm_mio_fus_rcmd_t
#define bustype_CAVM_MIO_FUS_RCMD CSR_TYPE_RSL
#define basename_CAVM_MIO_FUS_RCMD "MIO_FUS_RCMD"
#define device_bar_CAVM_MIO_FUS_RCMD 0x0 /* PF_BAR0 */
#define busnum_CAVM_MIO_FUS_RCMD 0
#define arguments_CAVM_MIO_FUS_RCMD -1,-1,-1,-1

/**
 * Register (RSL) mio_fus_read_times
 *
 * MIO Fuse Read Times Register
 * IFB fuses are 0 to 1791. The reset values are for IFB fuses for PLL_REF_CLK up to 100MHz when
 * the core PLL is engaged. If any of the formulas below result in a value less than 0x0, the
 * corresponding timing parameter should be set to 0.
 *
 * Prior to issuing a read operation to the fuse banks (via MIO_FUS_RCMD), this register should
 * be written with the timing parameters that will be read.
 * This register should not be written while MIO_FUS_RCMD[PEND] = 1.
 */
union cavm_mio_fus_read_times
{
    uint64_t u;
    struct cavm_mio_fus_read_times_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t done                  : 4;  /**< [ 31: 28](R/W) Hold time of CSB, PGENB, and LOAD with respect to falling edge of STROBE for read and
                                                                 write mode in PLL_REF_CLK + 1 cycles. Timing specs are th_CS = 6ns, th_PG = 10ns, th_LD_p
                                                                 = 7ns. Default of 0x0 yields 20ns for a PLL_REF_CLK of 50 MHz, 10ns at 100MHz. */
        uint64_t ahd                   : 4;  /**< [ 27: 24](R/W) Hold time of A with respect to falling edge of STROBE for read and write modes in
                                                                 PLL_REF_CLK + 2 cycles. Timing spec of tsu_A_r and tsu_A_p is 3ns min. Default of 0x0
                                                                 yields 40ns for a PLL_REF_CLK of 50 MHz, 20ns at 100MHz. */
        uint64_t wrstb_wh              : 12; /**< [ 23: 12](R/W) Pulse width high of STROBE in write mode in PLL_REF_CLK + 1 cycles. Timing spec of
                                                                 twh_SB_p is 9.8us max. Default of 0x1F3 yields 10 us at PLL_REF_CLK of 50 MHz. */
        uint64_t rdstb_wh              : 4;  /**< [ 11:  8](R/W) Pulse width high of STROBE in read mode in PLL_REF_CLK + 1 cycles. Timing spec of twh_SB_p
                                                                 is 20ns min. Default of 0x1 yields 40 ns at PLL_REF_CLK of 50 MHz, 20ns at 100MHz. */
        uint64_t asu                   : 4;  /**< [  7:  4](R/W) Setup time of A to rising edge of STROBE for read and write modes in PLL_REF_CLK cycles.
                                                                 Timing spec of tsu_A_r and tsu_A_p is 12 ns min. Default of 0x1 yields 40 ns at
                                                                 PLL_REF_CLK of 50 MHz, 20ns at 100MHz. */
        uint64_t setup                 : 4;  /**< [  3:  0](R/W) Setup time of CSB, PGENB, LOAD to rising edge of STROBE in read and write modes in
                                                                 PLL_REF_CLK + 1 cycles. tsu_CS = 16ns, tsu_PG = 14ns, tsu_LD_r = 10ns. Default of 0x0
                                                                 yields 20 ns plus ASU cycles at PLL_REF_CLK of 50 MHz, 10ns + ASU at 100MHz. */
#else /* Word 0 - Little Endian */
        uint64_t setup                 : 4;  /**< [  3:  0](R/W) Setup time of CSB, PGENB, LOAD to rising edge of STROBE in read and write modes in
                                                                 PLL_REF_CLK + 1 cycles. tsu_CS = 16ns, tsu_PG = 14ns, tsu_LD_r = 10ns. Default of 0x0
                                                                 yields 20 ns plus ASU cycles at PLL_REF_CLK of 50 MHz, 10ns + ASU at 100MHz. */
        uint64_t asu                   : 4;  /**< [  7:  4](R/W) Setup time of A to rising edge of STROBE for read and write modes in PLL_REF_CLK cycles.
                                                                 Timing spec of tsu_A_r and tsu_A_p is 12 ns min. Default of 0x1 yields 40 ns at
                                                                 PLL_REF_CLK of 50 MHz, 20ns at 100MHz. */
        uint64_t rdstb_wh              : 4;  /**< [ 11:  8](R/W) Pulse width high of STROBE in read mode in PLL_REF_CLK + 1 cycles. Timing spec of twh_SB_p
                                                                 is 20ns min. Default of 0x1 yields 40 ns at PLL_REF_CLK of 50 MHz, 20ns at 100MHz. */
        uint64_t wrstb_wh              : 12; /**< [ 23: 12](R/W) Pulse width high of STROBE in write mode in PLL_REF_CLK + 1 cycles. Timing spec of
                                                                 twh_SB_p is 9.8us max. Default of 0x1F3 yields 10 us at PLL_REF_CLK of 50 MHz. */
        uint64_t ahd                   : 4;  /**< [ 27: 24](R/W) Hold time of A with respect to falling edge of STROBE for read and write modes in
                                                                 PLL_REF_CLK + 2 cycles. Timing spec of tsu_A_r and tsu_A_p is 3ns min. Default of 0x0
                                                                 yields 40ns for a PLL_REF_CLK of 50 MHz, 20ns at 100MHz. */
        uint64_t done                  : 4;  /**< [ 31: 28](R/W) Hold time of CSB, PGENB, and LOAD with respect to falling edge of STROBE for read and
                                                                 write mode in PLL_REF_CLK + 1 cycles. Timing specs are th_CS = 6ns, th_PG = 10ns, th_LD_p
                                                                 = 7ns. Default of 0x0 yields 20ns for a PLL_REF_CLK of 50 MHz, 10ns at 100MHz. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mio_fus_read_times_s cn; */
};
typedef union cavm_mio_fus_read_times cavm_mio_fus_read_times_t;

#define CAVM_MIO_FUS_READ_TIMES CAVM_MIO_FUS_READ_TIMES_FUNC()
static inline uint64_t CAVM_MIO_FUS_READ_TIMES_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MIO_FUS_READ_TIMES_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x87e003001570ll;
    __cavm_csr_fatal("MIO_FUS_READ_TIMES", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MIO_FUS_READ_TIMES cavm_mio_fus_read_times_t
#define bustype_CAVM_MIO_FUS_READ_TIMES CSR_TYPE_RSL
#define basename_CAVM_MIO_FUS_READ_TIMES "MIO_FUS_READ_TIMES"
#define device_bar_CAVM_MIO_FUS_READ_TIMES 0x0 /* PF_BAR0 */
#define busnum_CAVM_MIO_FUS_READ_TIMES 0
#define arguments_CAVM_MIO_FUS_READ_TIMES -1,-1,-1,-1

/**
 * Register (RSL) mio_fus_tgg
 *
 * MIO Fuse TGG Register
 * This register exists to support Authentik. Authentik code should read this register, then
 * clear VAL to prevent other software from observing the value of the TGG fuses.
 */
union cavm_mio_fus_tgg
{
    uint64_t u;
    struct cavm_mio_fus_tgg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t val                   : 1;  /**< [ 63: 63](R/W/H) Software can write VAL to 0, but cannot write VAL to a 1. When VAL = 1, DAT reads
                                                                 the corresponding TGG fuses. When VAL = 0, DAT reads as 0s. The reset value of
                                                                 this VAL bit is normally its fuse setting (i.e. TGG\<63\>). */
        uint64_t dat                   : 63; /**< [ 62:  0](RO/H) When VAL = 0, DAT always reads as 0x0, regardless of the value of the TGG\<62:0\>
                                                                 fuses. When VAL = 1, DAT returns the value of the TGG\<62:0\> fuses. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 63; /**< [ 62:  0](RO/H) When VAL = 0, DAT always reads as 0x0, regardless of the value of the TGG\<62:0\>
                                                                 fuses. When VAL = 1, DAT returns the value of the TGG\<62:0\> fuses. */
        uint64_t val                   : 1;  /**< [ 63: 63](R/W/H) Software can write VAL to 0, but cannot write VAL to a 1. When VAL = 1, DAT reads
                                                                 the corresponding TGG fuses. When VAL = 0, DAT reads as 0s. The reset value of
                                                                 this VAL bit is normally its fuse setting (i.e. TGG\<63\>). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mio_fus_tgg_s cn; */
};
typedef union cavm_mio_fus_tgg cavm_mio_fus_tgg_t;

#define CAVM_MIO_FUS_TGG CAVM_MIO_FUS_TGG_FUNC()
static inline uint64_t CAVM_MIO_FUS_TGG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MIO_FUS_TGG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x87e003001430ll;
    __cavm_csr_fatal("MIO_FUS_TGG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MIO_FUS_TGG cavm_mio_fus_tgg_t
#define bustype_CAVM_MIO_FUS_TGG CSR_TYPE_RSL
#define basename_CAVM_MIO_FUS_TGG "MIO_FUS_TGG"
#define device_bar_CAVM_MIO_FUS_TGG 0x0 /* PF_BAR0 */
#define busnum_CAVM_MIO_FUS_TGG 0
#define arguments_CAVM_MIO_FUS_TGG -1,-1,-1,-1

/**
 * Register (RSL) mio_fus_wadr
 *
 * MIO Fuse Write Address Register
 */
union cavm_mio_fus_wadr
{
    uint64_t u;
    struct cavm_mio_fus_wadr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t addr                  : 6;  /**< [  5:  0](R/W) Indicates which of the banks of 128 fuses to blow. Software
                                                                 should not change this field while the FUSF_PROG[PROG] bit is set.
                                                                 It must wait for the hardware to clear it. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 6;  /**< [  5:  0](R/W) Indicates which of the banks of 128 fuses to blow. Software
                                                                 should not change this field while the FUSF_PROG[PROG] bit is set.
                                                                 It must wait for the hardware to clear it. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mio_fus_wadr_s cn; */
};
typedef union cavm_mio_fus_wadr cavm_mio_fus_wadr_t;

#define CAVM_MIO_FUS_WADR CAVM_MIO_FUS_WADR_FUNC()
static inline uint64_t CAVM_MIO_FUS_WADR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MIO_FUS_WADR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x87e003001508ll;
    __cavm_csr_fatal("MIO_FUS_WADR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MIO_FUS_WADR cavm_mio_fus_wadr_t
#define bustype_CAVM_MIO_FUS_WADR CSR_TYPE_RSL
#define basename_CAVM_MIO_FUS_WADR "MIO_FUS_WADR"
#define device_bar_CAVM_MIO_FUS_WADR 0x0 /* PF_BAR0 */
#define busnum_CAVM_MIO_FUS_WADR 0
#define arguments_CAVM_MIO_FUS_WADR -1,-1,-1,-1

#endif /* __CAVM_CSRS_MIO_FUS_H__ */
