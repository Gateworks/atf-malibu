#ifndef __CAVM_CSRS_XSX_H__
#define __CAVM_CSRS_XSX_H__
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
 * OcteonTX XSX.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (RSL) xsx_control
 *
 * XSX Control Register
 */
union cavm_xsx_control
{
    uint64_t u;
    struct cavm_xsx_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_37_63        : 27;
        uint64_t hog_burst_mode        : 1;  /**< [ 36: 36](R/W) Controls how GHB hog counters update. Treat requests as one hog
                                                                 event per burst or each flit in the burst as a hog event.
                                                                   0 = Update hog counter on each burst regardless of how many flits.
                                                                   1 = Update hog counter on each flit. */
        uint64_t reserved_34_35        : 2;
        uint64_t hog_interval          : 2;  /**< [ 33: 32](R/W) Static configuration that must only be changed during reset or system idle periods.
                                                                 Defines interval to invert XSX_SMT()_ARBPRI[RDPRI] setting. Ignored when
                                                                 XSX_SMT()_ARBPRI[HOGEN] = 0.
                                                                   0 =  Every 8 cycles.
                                                                   1 =  Every 16 cycles.
                                                                   2 =  Every 32 cycles.
                                                                   3 =  Every 64 cycles. */
        uint64_t reserved_16_31        : 16;
        uint64_t smt_clk_disable       : 8;  /**< [ 15:  8](R/W) Disable the main SMT clock. Each bit controls the clock for one SMT. */
        uint64_t reserved_6_7          : 2;
        uint64_t smem_active_size      : 2;  /**< [  5:  4](R/W) Select size of SMEM.  smem_active_size defaults to 3 and should be programmed
                                                                 after RESET, before any SMEM memory accesses are made.
                                                                   3 = 24MB.
                                                                   2 = 16MB.
                                                                   1 = 8MB.
                                                                   0 = Illegal.  Undefined behavior.
                                                                 IMPORTANT - changing this bit redefines the memory addressing when [XOR_DISABLE] = 0.
                                                                 Same restrictions apply as [XOR_DISABLE]. */
        uint64_t reserved_1_3          : 3;
        uint64_t xor_disable           : 1;  /**< [  0:  0](R/W) XOR addressing disable. This bit should not be changed when there are
                                                                 any SMEM accesses outstanding. Changing this bit while any request is
                                                                 active can cause undefined behavior. */
#else /* Word 0 - Little Endian */
        uint64_t xor_disable           : 1;  /**< [  0:  0](R/W) XOR addressing disable. This bit should not be changed when there are
                                                                 any SMEM accesses outstanding. Changing this bit while any request is
                                                                 active can cause undefined behavior. */
        uint64_t reserved_1_3          : 3;
        uint64_t smem_active_size      : 2;  /**< [  5:  4](R/W) Select size of SMEM.  smem_active_size defaults to 3 and should be programmed
                                                                 after RESET, before any SMEM memory accesses are made.
                                                                   3 = 24MB.
                                                                   2 = 16MB.
                                                                   1 = 8MB.
                                                                   0 = Illegal.  Undefined behavior.
                                                                 IMPORTANT - changing this bit redefines the memory addressing when [XOR_DISABLE] = 0.
                                                                 Same restrictions apply as [XOR_DISABLE]. */
        uint64_t reserved_6_7          : 2;
        uint64_t smt_clk_disable       : 8;  /**< [ 15:  8](R/W) Disable the main SMT clock. Each bit controls the clock for one SMT. */
        uint64_t reserved_16_31        : 16;
        uint64_t hog_interval          : 2;  /**< [ 33: 32](R/W) Static configuration that must only be changed during reset or system idle periods.
                                                                 Defines interval to invert XSX_SMT()_ARBPRI[RDPRI] setting. Ignored when
                                                                 XSX_SMT()_ARBPRI[HOGEN] = 0.
                                                                   0 =  Every 8 cycles.
                                                                   1 =  Every 16 cycles.
                                                                   2 =  Every 32 cycles.
                                                                   3 =  Every 64 cycles. */
        uint64_t reserved_34_35        : 2;
        uint64_t hog_burst_mode        : 1;  /**< [ 36: 36](R/W) Controls how GHB hog counters update. Treat requests as one hog
                                                                 event per burst or each flit in the burst as a hog event.
                                                                   0 = Update hog counter on each burst regardless of how many flits.
                                                                   1 = Update hog counter on each flit. */
        uint64_t reserved_37_63        : 27;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xsx_control_s cn; */
};
typedef union cavm_xsx_control cavm_xsx_control_t;

#define CAVM_XSX_CONTROL CAVM_XSX_CONTROL_FUNC()
static inline uint64_t CAVM_XSX_CONTROL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XSX_CONTROL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x87e045002000ll;
    if (cavm_is_model(OCTEONTX_F95MM))
        return 0x87e045002000ll;
    if (cavm_is_model(OCTEONTX_F95O))
        return 0x87e045002000ll;
    if (cavm_is_model(OCTEONTX_LOKI))
        return 0x87e045002000ll;
    __cavm_csr_fatal("XSX_CONTROL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XSX_CONTROL cavm_xsx_control_t
#define bustype_CAVM_XSX_CONTROL CSR_TYPE_RSL
#define basename_CAVM_XSX_CONTROL "XSX_CONTROL"
#define busnum_CAVM_XSX_CONTROL 0
#define arguments_CAVM_XSX_CONTROL -1,-1,-1,-1

/**
 * Register (RSL) xsx_smt#_arbpri
 *
 * XSX SMT Arbitration Priority Register
 */
union cavm_xsx_smtx_arbpri
{
    uint64_t u;
    struct cavm_xsx_smtx_arbpri_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t rotate                : 1;  /**< [  8:  8](R/W) Rotate bank arbitration read over write and port 0 over port 1 priority every cycle.
                                                                   0 = Use static priority selected by [P0PRI] and [RDPRI].
                                                                   1 = Change priority every cycle. */
        uint64_t reserved_6_7          : 2;
        uint64_t hog_interval          : 2;  /**< [  5:  4](R/W) Static configuration that must only be changed during reset or system idle periods.
                                                                 Defines interval to invert [RDPRI] setting.  Ignored when [HOGEN] = 0.
                                                                   0 =  Every 8 cycles.
                                                                   1 =  Every 16 cycles.
                                                                   2 =  Every 32 cycles.
                                                                   3 =  Every 64 cycles. */
        uint64_t hog_mode              : 1;  /**< [  3:  3](R/W) Select hog target.
                                                                   0 = Swap P0PRI on [HOG_INTERVAL] cycles. o75 mode.
                                                                   1 = Invert HP vs. LP every [HOG_INTERVAL].  Allows LP to make forward progress */
        uint64_t hogen                 : 1;  /**< [  2:  2](R/W) Bus-hog limit enable. When set to 1 && [HOG_MODE] == 0, the [RDPRI] bit setting is inverted
                                                                 every [HOG_INTERVAL] clock cycle to prevent starvation in the presence of
                                                                 persistent conflicts. */
        uint64_t rdpri                 : 1;  /**< [  1:  1](R/W) When set to 1, reads have priority over writes in bank conflicts. When
                                                                 set to 0, writes have priority when resolving bank conflicts. */
        uint64_t p0pri                 : 1;  /**< [  0:  0](R/W) When set to 1, port 0 (MHAB) requests have priority over port 1 (MDAB)
                                                                 requests when resolving bank conflicts. */
#else /* Word 0 - Little Endian */
        uint64_t p0pri                 : 1;  /**< [  0:  0](R/W) When set to 1, port 0 (MHAB) requests have priority over port 1 (MDAB)
                                                                 requests when resolving bank conflicts. */
        uint64_t rdpri                 : 1;  /**< [  1:  1](R/W) When set to 1, reads have priority over writes in bank conflicts. When
                                                                 set to 0, writes have priority when resolving bank conflicts. */
        uint64_t hogen                 : 1;  /**< [  2:  2](R/W) Bus-hog limit enable. When set to 1 && [HOG_MODE] == 0, the [RDPRI] bit setting is inverted
                                                                 every [HOG_INTERVAL] clock cycle to prevent starvation in the presence of
                                                                 persistent conflicts. */
        uint64_t hog_mode              : 1;  /**< [  3:  3](R/W) Select hog target.
                                                                   0 = Swap P0PRI on [HOG_INTERVAL] cycles. o75 mode.
                                                                   1 = Invert HP vs. LP every [HOG_INTERVAL].  Allows LP to make forward progress */
        uint64_t hog_interval          : 2;  /**< [  5:  4](R/W) Static configuration that must only be changed during reset or system idle periods.
                                                                 Defines interval to invert [RDPRI] setting.  Ignored when [HOGEN] = 0.
                                                                   0 =  Every 8 cycles.
                                                                   1 =  Every 16 cycles.
                                                                   2 =  Every 32 cycles.
                                                                   3 =  Every 64 cycles. */
        uint64_t reserved_6_7          : 2;
        uint64_t rotate                : 1;  /**< [  8:  8](R/W) Rotate bank arbitration read over write and port 0 over port 1 priority every cycle.
                                                                   0 = Use static priority selected by [P0PRI] and [RDPRI].
                                                                   1 = Change priority every cycle. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xsx_smtx_arbpri_s cn9; */
    /* struct cavm_xsx_smtx_arbpri_s cnf95xx; */
    /* struct cavm_xsx_smtx_arbpri_s f95mm; */
    /* struct cavm_xsx_smtx_arbpri_s f95o; */
    struct cavm_xsx_smtx_arbpri_loki
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t rotate                : 1;  /**< [  8:  8](R/W) Rotate bank arbitration read over write and port 0 over port 1 priority every cycle.
                                                                   0 = Use static priority selected by [P0PRI] and [RDPRI].
                                                                   1 = Change priority every cycle. */
        uint64_t reserved_6_7          : 2;
        uint64_t hog_interval          : 2;  /**< [  5:  4](R/W) Static configuration that must only be changed during reset or system idle periods.
                                                                 Defines interval to invert [RDPRI] setting.  Ignored when [HOGEN] = 0.
                                                                   0 =  Every 8 cycles.
                                                                   1 =  Every 16 cycles.
                                                                   2 =  Every 32 cycles.
                                                                   3 =  Every 64 cycles. */
        uint64_t hog_mode              : 1;  /**< [  3:  3](R/W) Select hog target.
                                                                   0 = Swap P0PRI on [HOG_INTERVAL] cycles.
                                                                   1 = Invert HP vs. LP every [HOG_INTERVAL].  Allows LP to make forward progress */
        uint64_t hogen                 : 1;  /**< [  2:  2](R/W) Bus-hog limit enable. When set to 1 && [HOG_MODE] == 0, the [RDPRI] bit setting is inverted
                                                                 every [HOG_INTERVAL] clock cycle to prevent starvation in the presence of
                                                                 persistent conflicts. */
        uint64_t rdpri                 : 1;  /**< [  1:  1](R/W) When set to 1, reads have priority over writes in bank conflicts. When
                                                                 set to 0, writes have priority when resolving bank conflicts. */
        uint64_t p0pri                 : 1;  /**< [  0:  0](R/W) When set to 1, XBAR 0 (mostly MHABs) requests have priority
                                                                 over XBAR 1 (mostly MDABs) requests when resolving bank conflicts. */
#else /* Word 0 - Little Endian */
        uint64_t p0pri                 : 1;  /**< [  0:  0](R/W) When set to 1, XBAR 0 (mostly MHABs) requests have priority
                                                                 over XBAR 1 (mostly MDABs) requests when resolving bank conflicts. */
        uint64_t rdpri                 : 1;  /**< [  1:  1](R/W) When set to 1, reads have priority over writes in bank conflicts. When
                                                                 set to 0, writes have priority when resolving bank conflicts. */
        uint64_t hogen                 : 1;  /**< [  2:  2](R/W) Bus-hog limit enable. When set to 1 && [HOG_MODE] == 0, the [RDPRI] bit setting is inverted
                                                                 every [HOG_INTERVAL] clock cycle to prevent starvation in the presence of
                                                                 persistent conflicts. */
        uint64_t hog_mode              : 1;  /**< [  3:  3](R/W) Select hog target.
                                                                   0 = Swap P0PRI on [HOG_INTERVAL] cycles.
                                                                   1 = Invert HP vs. LP every [HOG_INTERVAL].  Allows LP to make forward progress */
        uint64_t hog_interval          : 2;  /**< [  5:  4](R/W) Static configuration that must only be changed during reset or system idle periods.
                                                                 Defines interval to invert [RDPRI] setting.  Ignored when [HOGEN] = 0.
                                                                   0 =  Every 8 cycles.
                                                                   1 =  Every 16 cycles.
                                                                   2 =  Every 32 cycles.
                                                                   3 =  Every 64 cycles. */
        uint64_t reserved_6_7          : 2;
        uint64_t rotate                : 1;  /**< [  8:  8](R/W) Rotate bank arbitration read over write and port 0 over port 1 priority every cycle.
                                                                   0 = Use static priority selected by [P0PRI] and [RDPRI].
                                                                   1 = Change priority every cycle. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } loki;
};
typedef union cavm_xsx_smtx_arbpri cavm_xsx_smtx_arbpri_t;

static inline uint64_t CAVM_XSX_SMTX_ARBPRI(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XSX_SMTX_ARBPRI(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=7))
        return 0x87e045000200ll + 0x400ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95MM) && (a<=7))
        return 0x87e045000200ll + 0x400ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=7))
        return 0x87e045000200ll + 0x400ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=7))
        return 0x87e045000200ll + 0x400ll * ((a) & 0x7);
    __cavm_csr_fatal("XSX_SMTX_ARBPRI", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XSX_SMTX_ARBPRI(a) cavm_xsx_smtx_arbpri_t
#define bustype_CAVM_XSX_SMTX_ARBPRI(a) CSR_TYPE_RSL
#define basename_CAVM_XSX_SMTX_ARBPRI(a) "XSX_SMTX_ARBPRI"
#define busnum_CAVM_XSX_SMTX_ARBPRI(a) (a)
#define arguments_CAVM_XSX_SMTX_ARBPRI(a) (a),-1,-1,-1

/**
 * Register (RSL) xsx_smt#_err
 *
 * XSX SMT Error Register
 * These registers indicate when an SMT has experienced an ECC error. Writing
 * one to a bit will clear that error.
 */
union cavm_xsx_smtx_err
{
    uint64_t u;
    struct cavm_xsx_smtx_err_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t dbe                   : 1;  /**< [  1:  1](R/W1C/H) Uncorrectable double bit errors. */
        uint64_t sbe                   : 1;  /**< [  0:  0](R/W1C/H) Correctable single bit errors. */
#else /* Word 0 - Little Endian */
        uint64_t sbe                   : 1;  /**< [  0:  0](R/W1C/H) Correctable single bit errors. */
        uint64_t dbe                   : 1;  /**< [  1:  1](R/W1C/H) Uncorrectable double bit errors. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xsx_smtx_err_s cn; */
};
typedef union cavm_xsx_smtx_err cavm_xsx_smtx_err_t;

static inline uint64_t CAVM_XSX_SMTX_ERR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XSX_SMTX_ERR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=7))
        return 0x87e045000100ll + 0x400ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95MM) && (a<=7))
        return 0x87e045000100ll + 0x400ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=7))
        return 0x87e045000100ll + 0x400ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=7))
        return 0x87e045000100ll + 0x400ll * ((a) & 0x7);
    __cavm_csr_fatal("XSX_SMTX_ERR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XSX_SMTX_ERR(a) cavm_xsx_smtx_err_t
#define bustype_CAVM_XSX_SMTX_ERR(a) CSR_TYPE_RSL
#define basename_CAVM_XSX_SMTX_ERR(a) "XSX_SMTX_ERR"
#define busnum_CAVM_XSX_SMTX_ERR(a) (a)
#define arguments_CAVM_XSX_SMTX_ERR(a) (a),-1,-1,-1

/**
 * Register (RSL) xsx_smt#_err_ecc_disable
 *
 * XSX SMT ECC Disable Register
 */
union cavm_xsx_smtx_err_ecc_disable
{
    uint64_t u;
    struct cavm_xsx_smtx_err_ecc_disable_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ram                   : 1;  /**< [  0:  0](R/W) When set, this bit disables ECC correction and checking of the SMT RAM. */
#else /* Word 0 - Little Endian */
        uint64_t ram                   : 1;  /**< [  0:  0](R/W) When set, this bit disables ECC correction and checking of the SMT RAM. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xsx_smtx_err_ecc_disable_s cn; */
};
typedef union cavm_xsx_smtx_err_ecc_disable cavm_xsx_smtx_err_ecc_disable_t;

static inline uint64_t CAVM_XSX_SMTX_ERR_ECC_DISABLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XSX_SMTX_ERR_ECC_DISABLE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=7))
        return 0x87e045000120ll + 0x400ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95MM) && (a<=7))
        return 0x87e045000120ll + 0x400ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=7))
        return 0x87e045000120ll + 0x400ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=7))
        return 0x87e045000120ll + 0x400ll * ((a) & 0x7);
    __cavm_csr_fatal("XSX_SMTX_ERR_ECC_DISABLE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XSX_SMTX_ERR_ECC_DISABLE(a) cavm_xsx_smtx_err_ecc_disable_t
#define bustype_CAVM_XSX_SMTX_ERR_ECC_DISABLE(a) CSR_TYPE_RSL
#define basename_CAVM_XSX_SMTX_ERR_ECC_DISABLE(a) "XSX_SMTX_ERR_ECC_DISABLE"
#define busnum_CAVM_XSX_SMTX_ERR_ECC_DISABLE(a) (a)
#define arguments_CAVM_XSX_SMTX_ERR_ECC_DISABLE(a) (a),-1,-1,-1

/**
 * Register (RSL) xsx_smt#_err_ecc_flip
 *
 * XSX SMT ECC Flip Register
 */
union cavm_xsx_smtx_err_ecc_flip
{
    uint64_t u;
    struct cavm_xsx_smtx_err_ecc_flip_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_34_63        : 30;
        uint64_t ramx                  : 2;  /**< [ 33: 32](R/W) This bit flips the second bit of syndrome of the write port paths to the
                                                                 respective SMT. Bit 1 controls write port 1, and bit 0 controls write
                                                                 port 0. */
        uint64_t reserved_2_31         : 30;
        uint64_t ram                   : 2;  /**< [  1:  0](R/W) This bit flips the first bit of syndrome of the write port paths to
                                                                 the respective SMT. Bit 1 controls write port 1, and bit 0 controls
                                                                 write port 0. */
#else /* Word 0 - Little Endian */
        uint64_t ram                   : 2;  /**< [  1:  0](R/W) This bit flips the first bit of syndrome of the write port paths to
                                                                 the respective SMT. Bit 1 controls write port 1, and bit 0 controls
                                                                 write port 0. */
        uint64_t reserved_2_31         : 30;
        uint64_t ramx                  : 2;  /**< [ 33: 32](R/W) This bit flips the second bit of syndrome of the write port paths to the
                                                                 respective SMT. Bit 1 controls write port 1, and bit 0 controls write
                                                                 port 0. */
        uint64_t reserved_34_63        : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xsx_smtx_err_ecc_flip_s cn; */
};
typedef union cavm_xsx_smtx_err_ecc_flip cavm_xsx_smtx_err_ecc_flip_t;

static inline uint64_t CAVM_XSX_SMTX_ERR_ECC_FLIP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XSX_SMTX_ERR_ECC_FLIP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=7))
        return 0x87e045000128ll + 0x400ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95MM) && (a<=7))
        return 0x87e045000128ll + 0x400ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=7))
        return 0x87e045000128ll + 0x400ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=7))
        return 0x87e045000128ll + 0x400ll * ((a) & 0x7);
    __cavm_csr_fatal("XSX_SMTX_ERR_ECC_FLIP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XSX_SMTX_ERR_ECC_FLIP(a) cavm_xsx_smtx_err_ecc_flip_t
#define bustype_CAVM_XSX_SMTX_ERR_ECC_FLIP(a) CSR_TYPE_RSL
#define basename_CAVM_XSX_SMTX_ERR_ECC_FLIP(a) "XSX_SMTX_ERR_ECC_FLIP"
#define busnum_CAVM_XSX_SMTX_ERR_ECC_FLIP(a) (a)
#define arguments_CAVM_XSX_SMTX_ERR_ECC_FLIP(a) (a),-1,-1,-1

/**
 * Register (RSL) xsx_smt#_p#_src#_wrr
 *
 * XSX SMT Port Source Read Weighting Register
 * These registers specify the arbitration weights used when accepting read
 * requests. Each input source is assigned an arbitration weight, and
 * weights are programmed separately for each of the eight memory tiles
 * (SMT(0..7)).
 */
union cavm_xsx_smtx_px_srcx_wrr
{
    uint64_t u;
    struct cavm_xsx_smtx_px_srcx_wrr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_14_63        : 50;
        uint64_t rd_wgt                : 6;  /**< [ 13:  8](R/W) Read port weighted round-robin arbitration weight. 0=normal round robin. */
        uint64_t reserved_6_7          : 2;
        uint64_t wr_wgt                : 6;  /**< [  5:  0](R/W) Write port weighted round-robin arbitration weight. 0=normal round robin. */
#else /* Word 0 - Little Endian */
        uint64_t wr_wgt                : 6;  /**< [  5:  0](R/W) Write port weighted round-robin arbitration weight. 0=normal round robin. */
        uint64_t reserved_6_7          : 2;
        uint64_t rd_wgt                : 6;  /**< [ 13:  8](R/W) Read port weighted round-robin arbitration weight. 0=normal round robin. */
        uint64_t reserved_14_63        : 50;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xsx_smtx_px_srcx_wrr_s cn; */
};
typedef union cavm_xsx_smtx_px_srcx_wrr cavm_xsx_smtx_px_srcx_wrr_t;

static inline uint64_t CAVM_XSX_SMTX_PX_SRCX_WRR(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XSX_SMTX_PX_SRCX_WRR(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a<=7) && (b<=1) && (c<=8)))
        return 0x87e045000000ll + 0x400ll * ((a) & 0x7) + 0x80ll * ((b) & 0x1) + 8ll * ((c) & 0xf);
    if (cavm_is_model(OCTEONTX_F95MM) && ((a<=7) && (b<=1) && (c<=8)))
        return 0x87e045000000ll + 0x400ll * ((a) & 0x7) + 0x80ll * ((b) & 0x1) + 8ll * ((c) & 0xf);
    if (cavm_is_model(OCTEONTX_F95O) && ((a<=7) && (b<=1) && (c<=8)))
        return 0x87e045000000ll + 0x400ll * ((a) & 0x7) + 0x80ll * ((b) & 0x1) + 8ll * ((c) & 0xf);
    if (cavm_is_model(OCTEONTX_LOKI) && ((a<=7) && (b<=1) && (c<=8)))
        return 0x87e045000000ll + 0x400ll * ((a) & 0x7) + 0x80ll * ((b) & 0x1) + 8ll * ((c) & 0xf);
    __cavm_csr_fatal("XSX_SMTX_PX_SRCX_WRR", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_XSX_SMTX_PX_SRCX_WRR(a,b,c) cavm_xsx_smtx_px_srcx_wrr_t
#define bustype_CAVM_XSX_SMTX_PX_SRCX_WRR(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_XSX_SMTX_PX_SRCX_WRR(a,b,c) "XSX_SMTX_PX_SRCX_WRR"
#define busnum_CAVM_XSX_SMTX_PX_SRCX_WRR(a,b,c) (a)
#define arguments_CAVM_XSX_SMTX_PX_SRCX_WRR(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) xsx_smt#_port#_rd_stat
 *
 * XSX SMT Port  Read Count Statistic Register
 * Number of read requests to this SMT.
 */
union cavm_xsx_smtx_portx_rd_stat
{
    uint64_t u;
    struct cavm_xsx_smtx_portx_rd_stat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t count                 : 48; /**< [ 47:  0](R/W/H) Counts number of read requests received. Counter can roll over to 0x0 after maximum. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 48; /**< [ 47:  0](R/W/H) Counts number of read requests received. Counter can roll over to 0x0 after maximum. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xsx_smtx_portx_rd_stat_s cn; */
};
typedef union cavm_xsx_smtx_portx_rd_stat cavm_xsx_smtx_portx_rd_stat_t;

static inline uint64_t CAVM_XSX_SMTX_PORTX_RD_STAT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XSX_SMTX_PORTX_RD_STAT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a<=7) && (b<=1)))
        return 0x87e045000300ll + 0x400ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_F95MM) && ((a<=7) && (b<=1)))
        return 0x87e045000300ll + 0x400ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_F95O) && ((a<=7) && (b<=1)))
        return 0x87e045000300ll + 0x400ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_LOKI) && ((a<=7) && (b<=1)))
        return 0x87e045000300ll + 0x400ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("XSX_SMTX_PORTX_RD_STAT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_XSX_SMTX_PORTX_RD_STAT(a,b) cavm_xsx_smtx_portx_rd_stat_t
#define bustype_CAVM_XSX_SMTX_PORTX_RD_STAT(a,b) CSR_TYPE_RSL
#define basename_CAVM_XSX_SMTX_PORTX_RD_STAT(a,b) "XSX_SMTX_PORTX_RD_STAT"
#define busnum_CAVM_XSX_SMTX_PORTX_RD_STAT(a,b) (a)
#define arguments_CAVM_XSX_SMTX_PORTX_RD_STAT(a,b) (a),(b),-1,-1

/**
 * Register (RSL) xsx_smt#_port#_wr_stat
 *
 * XSX SMT Port Write Count Statistic Register
 * Number of write requests to this SMT.
 */
union cavm_xsx_smtx_portx_wr_stat
{
    uint64_t u;
    struct cavm_xsx_smtx_portx_wr_stat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t count                 : 48; /**< [ 47:  0](R/W/H) Counts number of write requests received. Counter can roll over to 0x0 after maximum. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 48; /**< [ 47:  0](R/W/H) Counts number of write requests received. Counter can roll over to 0x0 after maximum. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xsx_smtx_portx_wr_stat_s cn; */
};
typedef union cavm_xsx_smtx_portx_wr_stat cavm_xsx_smtx_portx_wr_stat_t;

static inline uint64_t CAVM_XSX_SMTX_PORTX_WR_STAT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XSX_SMTX_PORTX_WR_STAT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a<=7) && (b<=1)))
        return 0x87e045000310ll + 0x400ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_F95MM) && ((a<=7) && (b<=1)))
        return 0x87e045000310ll + 0x400ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_F95O) && ((a<=7) && (b<=1)))
        return 0x87e045000310ll + 0x400ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_LOKI) && ((a<=7) && (b<=1)))
        return 0x87e045000310ll + 0x400ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("XSX_SMTX_PORTX_WR_STAT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_XSX_SMTX_PORTX_WR_STAT(a,b) cavm_xsx_smtx_portx_wr_stat_t
#define bustype_CAVM_XSX_SMTX_PORTX_WR_STAT(a,b) CSR_TYPE_RSL
#define basename_CAVM_XSX_SMTX_PORTX_WR_STAT(a,b) "XSX_SMTX_PORTX_WR_STAT"
#define busnum_CAVM_XSX_SMTX_PORTX_WR_STAT(a,b) (a)
#define arguments_CAVM_XSX_SMTX_PORTX_WR_STAT(a,b) (a),(b),-1,-1

/**
 * Register (RSL) xsx_smt#_xarb_ctl
 *
 * XSX SMT XARB Control Register
 * XARB control is the XBAR GHB selection to send to this SMT.
 */
union cavm_xsx_smtx_xarb_ctl
{
    uint64_t u;
    struct cavm_xsx_smtx_xarb_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t hog_interval          : 2;  /**< [  5:  4](R/W) Static configuration that must only be changed during reset or system idle periods.
                                                                 Defines interval to invert XSX_SMT()_ARBPRI[RDPRI] setting.  Ignored when
                                                                 XSX_SMT()_ARBPRI[HOGEN] = 0.
                                                                   0 =  Every 8 cycles
                                                                   1 =  Every 16 cycles
                                                                   2 =  Every 32 cycles
                                                                   3 =  Every 64 cycles */
        uint64_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_3          : 4;
        uint64_t hog_interval          : 2;  /**< [  5:  4](R/W) Static configuration that must only be changed during reset or system idle periods.
                                                                 Defines interval to invert XSX_SMT()_ARBPRI[RDPRI] setting.  Ignored when
                                                                 XSX_SMT()_ARBPRI[HOGEN] = 0.
                                                                   0 =  Every 8 cycles
                                                                   1 =  Every 16 cycles
                                                                   2 =  Every 32 cycles
                                                                   3 =  Every 64 cycles */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xsx_smtx_xarb_ctl_s cn; */
};
typedef union cavm_xsx_smtx_xarb_ctl cavm_xsx_smtx_xarb_ctl_t;

static inline uint64_t CAVM_XSX_SMTX_XARB_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XSX_SMTX_XARB_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=7))
        return 0x87e045000210ll + 0x400ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95MM) && (a<=7))
        return 0x87e045000210ll + 0x400ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=7))
        return 0x87e045000210ll + 0x400ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=7))
        return 0x87e045000210ll + 0x400ll * ((a) & 0x7);
    __cavm_csr_fatal("XSX_SMTX_XARB_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XSX_SMTX_XARB_CTL(a) cavm_xsx_smtx_xarb_ctl_t
#define bustype_CAVM_XSX_SMTX_XARB_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_XSX_SMTX_XARB_CTL(a) "XSX_SMTX_XARB_CTL"
#define busnum_CAVM_XSX_SMTX_XARB_CTL(a) (a)
#define arguments_CAVM_XSX_SMTX_XARB_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) xsx_xbar#_port#_rd_stat
 *
 * XSX XBAR Port Read Count Statistic Register
 * Number of read request. *xbar0: ports 0-7 are GHB 0-7; port 8 is PNB. *xbar1: ports 0-7 are
 * GDB 0-7; port8 is PNB.
 */
union cavm_xsx_xbarx_portx_rd_stat
{
    uint64_t u;
    struct cavm_xsx_xbarx_portx_rd_stat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t count                 : 48; /**< [ 47:  0](R/W/H) Counts number of read requests received. Counter can roll over to 0x0 after maximum.
                                                                 *SMEM: each request counts as 1.
                                                                 *PNB/DDR: each request counts as 1, even though a single request to DDR can be for multiple flits. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 48; /**< [ 47:  0](R/W/H) Counts number of read requests received. Counter can roll over to 0x0 after maximum.
                                                                 *SMEM: each request counts as 1.
                                                                 *PNB/DDR: each request counts as 1, even though a single request to DDR can be for multiple flits. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xsx_xbarx_portx_rd_stat_s cn; */
};
typedef union cavm_xsx_xbarx_portx_rd_stat cavm_xsx_xbarx_portx_rd_stat_t;

static inline uint64_t CAVM_XSX_XBARX_PORTX_RD_STAT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XSX_XBARX_PORTX_RD_STAT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a<=1) && (b<=8)))
        return 0x87e045002300ll + 0x80ll * ((a) & 0x1) + 8ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_F95MM) && ((a<=1) && (b<=8)))
        return 0x87e045002300ll + 0x80ll * ((a) & 0x1) + 8ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_F95O) && ((a<=1) && (b<=8)))
        return 0x87e045002300ll + 0x80ll * ((a) & 0x1) + 8ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_LOKI) && ((a<=1) && (b<=8)))
        return 0x87e045002300ll + 0x80ll * ((a) & 0x1) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("XSX_XBARX_PORTX_RD_STAT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_XSX_XBARX_PORTX_RD_STAT(a,b) cavm_xsx_xbarx_portx_rd_stat_t
#define bustype_CAVM_XSX_XBARX_PORTX_RD_STAT(a,b) CSR_TYPE_RSL
#define basename_CAVM_XSX_XBARX_PORTX_RD_STAT(a,b) "XSX_XBARX_PORTX_RD_STAT"
#define busnum_CAVM_XSX_XBARX_PORTX_RD_STAT(a,b) (a)
#define arguments_CAVM_XSX_XBARX_PORTX_RD_STAT(a,b) (a),(b),-1,-1

/**
 * Register (RSL) xsx_xbar#_port#_wr_stat
 *
 * XSX XBAR Port Write Count Statistic Register
 * Number of write request. *xbar0: ports 0-7 are GHB 0-7; port 8 is PNB. *xbar1: ports 0-7
 * are GDB 0-7; port8 is PNB.
 */
union cavm_xsx_xbarx_portx_wr_stat
{
    uint64_t u;
    struct cavm_xsx_xbarx_portx_wr_stat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t count                 : 48; /**< [ 47:  0](R/W/H) Counts number of write requests received. Counter can roll over to 0x0 after maximum.
                                                                 *SMEM: each request counts as 1.
                                                                 *PNB/DDR: each request counts as 1. Note that a burst can contain multiple
                                                                 flits.  Each flit in a burst increments count by 1. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 48; /**< [ 47:  0](R/W/H) Counts number of write requests received. Counter can roll over to 0x0 after maximum.
                                                                 *SMEM: each request counts as 1.
                                                                 *PNB/DDR: each request counts as 1. Note that a burst can contain multiple
                                                                 flits.  Each flit in a burst increments count by 1. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xsx_xbarx_portx_wr_stat_s cn; */
};
typedef union cavm_xsx_xbarx_portx_wr_stat cavm_xsx_xbarx_portx_wr_stat_t;

static inline uint64_t CAVM_XSX_XBARX_PORTX_WR_STAT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XSX_XBARX_PORTX_WR_STAT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a<=1) && (b<=8)))
        return 0x87e045002400ll + 0x80ll * ((a) & 0x1) + 8ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_F95MM) && ((a<=1) && (b<=8)))
        return 0x87e045002400ll + 0x80ll * ((a) & 0x1) + 8ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_F95O) && ((a<=1) && (b<=8)))
        return 0x87e045002400ll + 0x80ll * ((a) & 0x1) + 8ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_LOKI) && ((a<=1) && (b<=8)))
        return 0x87e045002400ll + 0x80ll * ((a) & 0x1) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("XSX_XBARX_PORTX_WR_STAT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_XSX_XBARX_PORTX_WR_STAT(a,b) cavm_xsx_xbarx_portx_wr_stat_t
#define bustype_CAVM_XSX_XBARX_PORTX_WR_STAT(a,b) CSR_TYPE_RSL
#define basename_CAVM_XSX_XBARX_PORTX_WR_STAT(a,b) "XSX_XBARX_PORTX_WR_STAT"
#define busnum_CAVM_XSX_XBARX_PORTX_WR_STAT(a,b) (a)
#define arguments_CAVM_XSX_XBARX_PORTX_WR_STAT(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_XSX_H__ */
