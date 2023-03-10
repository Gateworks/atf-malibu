#ifndef __CAVM_CSRS_RNM_H__
#define __CAVM_CSRS_RNM_H__
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
 * OcteonTX RNM.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration rnm_bar_e
 *
 * RNM Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_RNM_BAR_E_RNM_PF_BAR0_CN8 (0x87e040000000ll)
#define CAVM_RNM_BAR_E_RNM_PF_BAR0_CN8_SIZE 0x100000ull
#define CAVM_RNM_BAR_E_RNM_PF_BAR0_CN9 (0x87e00f000000ll)
#define CAVM_RNM_BAR_E_RNM_PF_BAR0_CN9_SIZE 0x100000ull
#define CAVM_RNM_BAR_E_RNM_VF_BAR0_CN8 (0x840000800000ll)
#define CAVM_RNM_BAR_E_RNM_VF_BAR0_CN8_SIZE 0x100000ull
#define CAVM_RNM_BAR_E_RNM_VF_BAR0_CN9 (0x80f000800000ll)
#define CAVM_RNM_BAR_E_RNM_VF_BAR0_CN9_SIZE 0x100000ull

/**
 * Register (RSL) rnm_bist_status
 *
 * RNM BIST Status Register
 * This register is the RNM memory BIST status register, indicating status of built-in self-
 * tests.  0 = passed BIST, 1 = failed BIST.
 */
union cavm_rnm_bist_status
{
    uint64_t u;
    struct cavm_rnm_bist_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t nz                    : 1;  /**< [  1:  1](RO/H) Status of the no-zeros memory BIST. 0 = passed BIST, 1 = failed BIST. */
        uint64_t nml                   : 1;  /**< [  0:  0](RO/H) Status of the normal memory BIST. 0 = passed BIST, 1 = failed BIST. */
#else /* Word 0 - Little Endian */
        uint64_t nml                   : 1;  /**< [  0:  0](RO/H) Status of the normal memory BIST. 0 = passed BIST, 1 = failed BIST. */
        uint64_t nz                    : 1;  /**< [  1:  1](RO/H) Status of the no-zeros memory BIST. 0 = passed BIST, 1 = failed BIST. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_bist_status_s cn; */
};
typedef union cavm_rnm_bist_status cavm_rnm_bist_status_t;

#define CAVM_RNM_BIST_STATUS CAVM_RNM_BIST_STATUS_FUNC()
static inline uint64_t CAVM_RNM_BIST_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_BIST_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x87e040000008ll;
    __cavm_csr_fatal("RNM_BIST_STATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RNM_BIST_STATUS cavm_rnm_bist_status_t
#define bustype_CAVM_RNM_BIST_STATUS CSR_TYPE_RSL
#define basename_CAVM_RNM_BIST_STATUS "RNM_BIST_STATUS"
#define device_bar_CAVM_RNM_BIST_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_BIST_STATUS 0
#define arguments_CAVM_RNM_BIST_STATUS -1,-1,-1,-1

/**
 * Register (RSL) rnm_const
 *
 * RNM PF Constants Register
 * This register is used for software discovery.
 */
union cavm_rnm_const
{
    uint64_t u;
    struct cavm_rnm_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t zucs                  : 4;  /**< [  3:  0](RO) Number of ZUC engines minus one, and corresponding RNM_ZUC()_INIT_LFSR() and
                                                                 RNM_ZUC()_INIT_NLF() registers.

                                                                 If 0xF, no ZUC engines.

                                                                 For CNXXXX, 0x0, for one set of ZUC engines. */
#else /* Word 0 - Little Endian */
        uint64_t zucs                  : 4;  /**< [  3:  0](RO) Number of ZUC engines minus one, and corresponding RNM_ZUC()_INIT_LFSR() and
                                                                 RNM_ZUC()_INIT_NLF() registers.

                                                                 If 0xF, no ZUC engines.

                                                                 For CNXXXX, 0x0, for one set of ZUC engines. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_const_s cn; */
};
typedef union cavm_rnm_const cavm_rnm_const_t;

#define CAVM_RNM_CONST CAVM_RNM_CONST_FUNC()
static inline uint64_t CAVM_RNM_CONST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_CONST_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x87e00f000030ll;
    __cavm_csr_fatal("RNM_CONST", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RNM_CONST cavm_rnm_const_t
#define bustype_CAVM_RNM_CONST CSR_TYPE_RSL
#define basename_CAVM_RNM_CONST "RNM_CONST"
#define device_bar_CAVM_RNM_CONST 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_CONST 0
#define arguments_CAVM_RNM_CONST -1,-1,-1,-1

/**
 * Register (RSL) rnm_ctl_status
 *
 * RNM Control and Status Register
 * This register is the RNM control register.
 * This register is secure only to prevent the nonsecure world from affecting
 * secure-world clients using true random numbers.
 */
union cavm_rnm_ctl_status
{
    uint64_t u;
    struct cavm_rnm_ctl_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_15_63        : 49;
        uint64_t lower_bandwidth_higher_entropy : 1;/**< [ 14: 14](SR/W) When clear, a new 64-bit random word is produced every 81 cycles. When set a new
                                                                 64-bit random word is produced every 8*81=648 cycles. The slower operation
                                                                 allows 8 times the entropy to be accumulated in each output. */
        uint64_t xor_entropy_25x       : 1;  /**< [ 13: 13](SR/W) When set, entropy is increased 25 times. This puts the RNG unit in a mode
                                                                 compatible with prior chip generations. However, because this XOR's the output
                                                                 of multiple ring oscillators, this may not be compatible with FIPS 800-90B. */
        uint64_t force_clk             : 1;  /**< [ 12: 12](SR/W) When set, conditional clock is always on. For diagnostic use only. */
        uint64_t reserved_11           : 1;
        uint64_t eer_lck               : 1;  /**< [ 10: 10](SRO/H) Encryption enable register locked. */
        uint64_t eer_val               : 1;  /**< [  9:  9](SRO/H) Dormant encryption key match. */
        uint64_t ent_sel               : 4;  /**< [  8:  5](SR/W) Select input to RNM FIFO.
                                                                 0x0 = 0-7.
                                                                 0x1 = 8-15.
                                                                 0x2 = 16-23.
                                                                 0x3 = 24-31.
                                                                 0x4 = 32-39.
                                                                 0x5 = 40-47.
                                                                 0x6 = 48-55.
                                                                 0x7 = 56-63.
                                                                 0x8 = 64-71.
                                                                 0x9 = 72-79.
                                                                 0xA = 80-87.
                                                                 0xB = 88-95.
                                                                 0xC = 96-103.
                                                                 0xD = 104-111.
                                                                 0xE = 112-119.
                                                                 0xF = 120-127. */
        uint64_t exp_ent               : 1;  /**< [  4:  4](SR/W) Exported entropy enable for random number generator. The next random number is
                                                                 available 80 coprocessor-clock cycles after switching this bit from zero to one. The
                                                                 next random number is available 730 coprocessor-clock cycles after switching this
                                                                 bit from one to zero. */
        uint64_t rng_rst               : 1;  /**< [  3:  3](SR/W) Reset the RNG. Setting this bit to one cancels the generation of the current random
                                                                 number. The next random number is available 730 coprocessor-clock cycles after this
                                                                 bit is cleared if [EXP_ENT] is set to zero. The next random number is available 80
                                                                 coprocessor-clock cycles after this bit is cleared if [EXP_ENT] is set to one. This bit is
                                                                 not automatically cleared. */
        uint64_t rnm_rst               : 1;  /**< [  2:  2](SR/W) Reset the RNM. Setting this bit to 1 drops all RNM transactions in flight and clears
                                                                 all stored numbers in the random number memory. Any outstanding NCBO credits will
                                                                 not be returned. RNM will not respond to any pending NCBI grants. RNM can accept
                                                                 new requests immediately after reset is cleared. This bit is not automatically
                                                                 cleared and will not reset any CSR fields. */
        uint64_t rng_en                : 1;  /**< [  1:  1](SR/W) Enables the output of the RNG. */
        uint64_t ent_en                : 1;  /**< [  0:  0](SR/W) Entropy enable for random number generator. */
#else /* Word 0 - Little Endian */
        uint64_t ent_en                : 1;  /**< [  0:  0](SR/W) Entropy enable for random number generator. */
        uint64_t rng_en                : 1;  /**< [  1:  1](SR/W) Enables the output of the RNG. */
        uint64_t rnm_rst               : 1;  /**< [  2:  2](SR/W) Reset the RNM. Setting this bit to 1 drops all RNM transactions in flight and clears
                                                                 all stored numbers in the random number memory. Any outstanding NCBO credits will
                                                                 not be returned. RNM will not respond to any pending NCBI grants. RNM can accept
                                                                 new requests immediately after reset is cleared. This bit is not automatically
                                                                 cleared and will not reset any CSR fields. */
        uint64_t rng_rst               : 1;  /**< [  3:  3](SR/W) Reset the RNG. Setting this bit to one cancels the generation of the current random
                                                                 number. The next random number is available 730 coprocessor-clock cycles after this
                                                                 bit is cleared if [EXP_ENT] is set to zero. The next random number is available 80
                                                                 coprocessor-clock cycles after this bit is cleared if [EXP_ENT] is set to one. This bit is
                                                                 not automatically cleared. */
        uint64_t exp_ent               : 1;  /**< [  4:  4](SR/W) Exported entropy enable for random number generator. The next random number is
                                                                 available 80 coprocessor-clock cycles after switching this bit from zero to one. The
                                                                 next random number is available 730 coprocessor-clock cycles after switching this
                                                                 bit from one to zero. */
        uint64_t ent_sel               : 4;  /**< [  8:  5](SR/W) Select input to RNM FIFO.
                                                                 0x0 = 0-7.
                                                                 0x1 = 8-15.
                                                                 0x2 = 16-23.
                                                                 0x3 = 24-31.
                                                                 0x4 = 32-39.
                                                                 0x5 = 40-47.
                                                                 0x6 = 48-55.
                                                                 0x7 = 56-63.
                                                                 0x8 = 64-71.
                                                                 0x9 = 72-79.
                                                                 0xA = 80-87.
                                                                 0xB = 88-95.
                                                                 0xC = 96-103.
                                                                 0xD = 104-111.
                                                                 0xE = 112-119.
                                                                 0xF = 120-127. */
        uint64_t eer_val               : 1;  /**< [  9:  9](SRO/H) Dormant encryption key match. */
        uint64_t eer_lck               : 1;  /**< [ 10: 10](SRO/H) Encryption enable register locked. */
        uint64_t reserved_11           : 1;
        uint64_t force_clk             : 1;  /**< [ 12: 12](SR/W) When set, conditional clock is always on. For diagnostic use only. */
        uint64_t xor_entropy_25x       : 1;  /**< [ 13: 13](SR/W) When set, entropy is increased 25 times. This puts the RNG unit in a mode
                                                                 compatible with prior chip generations. However, because this XOR's the output
                                                                 of multiple ring oscillators, this may not be compatible with FIPS 800-90B. */
        uint64_t lower_bandwidth_higher_entropy : 1;/**< [ 14: 14](SR/W) When clear, a new 64-bit random word is produced every 81 cycles. When set a new
                                                                 64-bit random word is produced every 8*81=648 cycles. The slower operation
                                                                 allows 8 times the entropy to be accumulated in each output. */
        uint64_t reserved_15_63        : 49;
#endif /* Word 0 - End */
    } s;
    struct cavm_rnm_ctl_status_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t dis_mak               : 1;  /**< [ 11: 11](SR/W1S/H) Disable use of master AES KEY. */
        uint64_t eer_lck               : 1;  /**< [ 10: 10](SRO/H) Encryption enable register locked. */
        uint64_t eer_val               : 1;  /**< [  9:  9](SRO/H) Dormant encryption key match. */
        uint64_t ent_sel               : 4;  /**< [  8:  5](SR/W) Select input to RNM FIFO.
                                                                 0x0 = 0-7.
                                                                 0x1 = 8-15.
                                                                 0x2 = 16-23.
                                                                 0x3 = 24-31.
                                                                 0x4 = 32-39.
                                                                 0x5 = 40-47.
                                                                 0x6 = 48-55.
                                                                 0x7 = 56-63.
                                                                 0x8 = 64-71.
                                                                 0x9 = 72-79.
                                                                 0xA = 80-87.
                                                                 0xB = 88-95.
                                                                 0xC = 96-103.
                                                                 0xD = 104-111.
                                                                 0xE = 112-119.
                                                                 0xF = 120-127. */
        uint64_t exp_ent               : 1;  /**< [  4:  4](SR/W) Exported entropy enable for random number generator. The next random number is
                                                                 available 80 coprocessor-clock cycles after switching this bit from zero to one. The
                                                                 next random number is available 730 coprocessor-clock cycles after switching this
                                                                 bit from one to zero. */
        uint64_t rng_rst               : 1;  /**< [  3:  3](SR/W) Reset the RNG. Setting this bit to one cancels the generation of the current random
                                                                 number. The next random number is available 730 coprocessor-clock cycles after this
                                                                 bit is cleared if [EXP_ENT] is set to zero. The next random number is available 80
                                                                 coprocessor-clock cycles after this bit is cleared if [EXP_ENT] is set to one. This bit is
                                                                 not automatically cleared. */
        uint64_t rnm_rst               : 1;  /**< [  2:  2](SR/W) Reset the RNM. Setting this bit to 1 drops all RNM transactions in flight and clears
                                                                 all stored numbers in the random number memory. Any outstanding NCBO credits will
                                                                 not be returned. RNM will not respond to any pending NCBI grants. RNM can accept
                                                                 new requests immediately after reset is cleared. This bit is not automatically
                                                                 cleared and will not reset any CSR fields. */
        uint64_t rng_en                : 1;  /**< [  1:  1](SR/W) Enables the output of the RNG. */
        uint64_t ent_en                : 1;  /**< [  0:  0](SR/W) Entropy enable for random number generator. */
#else /* Word 0 - Little Endian */
        uint64_t ent_en                : 1;  /**< [  0:  0](SR/W) Entropy enable for random number generator. */
        uint64_t rng_en                : 1;  /**< [  1:  1](SR/W) Enables the output of the RNG. */
        uint64_t rnm_rst               : 1;  /**< [  2:  2](SR/W) Reset the RNM. Setting this bit to 1 drops all RNM transactions in flight and clears
                                                                 all stored numbers in the random number memory. Any outstanding NCBO credits will
                                                                 not be returned. RNM will not respond to any pending NCBI grants. RNM can accept
                                                                 new requests immediately after reset is cleared. This bit is not automatically
                                                                 cleared and will not reset any CSR fields. */
        uint64_t rng_rst               : 1;  /**< [  3:  3](SR/W) Reset the RNG. Setting this bit to one cancels the generation of the current random
                                                                 number. The next random number is available 730 coprocessor-clock cycles after this
                                                                 bit is cleared if [EXP_ENT] is set to zero. The next random number is available 80
                                                                 coprocessor-clock cycles after this bit is cleared if [EXP_ENT] is set to one. This bit is
                                                                 not automatically cleared. */
        uint64_t exp_ent               : 1;  /**< [  4:  4](SR/W) Exported entropy enable for random number generator. The next random number is
                                                                 available 80 coprocessor-clock cycles after switching this bit from zero to one. The
                                                                 next random number is available 730 coprocessor-clock cycles after switching this
                                                                 bit from one to zero. */
        uint64_t ent_sel               : 4;  /**< [  8:  5](SR/W) Select input to RNM FIFO.
                                                                 0x0 = 0-7.
                                                                 0x1 = 8-15.
                                                                 0x2 = 16-23.
                                                                 0x3 = 24-31.
                                                                 0x4 = 32-39.
                                                                 0x5 = 40-47.
                                                                 0x6 = 48-55.
                                                                 0x7 = 56-63.
                                                                 0x8 = 64-71.
                                                                 0x9 = 72-79.
                                                                 0xA = 80-87.
                                                                 0xB = 88-95.
                                                                 0xC = 96-103.
                                                                 0xD = 104-111.
                                                                 0xE = 112-119.
                                                                 0xF = 120-127. */
        uint64_t eer_val               : 1;  /**< [  9:  9](SRO/H) Dormant encryption key match. */
        uint64_t eer_lck               : 1;  /**< [ 10: 10](SRO/H) Encryption enable register locked. */
        uint64_t dis_mak               : 1;  /**< [ 11: 11](SR/W1S/H) Disable use of master AES KEY. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } cn8;
    struct cavm_rnm_ctl_status_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_15_63        : 49;
        uint64_t lower_bandwidth_higher_entropy : 1;/**< [ 14: 14](SR/W) When clear, a new 64-bit random word is produced every 81 cycles. When set a new
                                                                 64-bit random word is produced every 8*81=648 cycles. The slower operation
                                                                 allows 8 times the entropy to be accumulated in each output. */
        uint64_t xor_entropy_25x       : 1;  /**< [ 13: 13](SR/W) When set, entropy is increased 25 times. This puts the RNG unit in a mode
                                                                 compatible with prior chip generations. However, because this XOR's the output
                                                                 of multiple ring oscillators, this may not be compatible with FIPS 800-90B. */
        uint64_t force_clk             : 1;  /**< [ 12: 12](SR/W) When set, conditional clock is always on. For diagnostic use only. */
        uint64_t zuc_en                : 1;  /**< [ 11: 11](SR/W) Enable output of all ZUC engines. Before setting this bit software must write to
                                                                 all RNM_ZUC()_INIT_LFSR() and all RNM_ZUC()_INIT_NLF() registers. */
        uint64_t eer_lck               : 1;  /**< [ 10: 10](SRO/H) Encryption enable register locked. */
        uint64_t eer_val               : 1;  /**< [  9:  9](SRO/H) Dormant encryption key match. */
        uint64_t ent_sel               : 4;  /**< [  8:  5](SR/W) Select input to RNM FIFO.
                                                                 0x0 = 0-7.
                                                                 0x1 = 8-15.
                                                                 0x2 = 16-23.
                                                                 0x3 = 24-31.
                                                                 0x4 = 32-39.
                                                                 0x5 = 40-47.
                                                                 0x6 = 48-55.
                                                                 0x7 = 56-63.
                                                                 0x8 = 64-71.
                                                                 0x9 = 72-79.
                                                                 0xA = 80-87.
                                                                 0xB = 88-95.
                                                                 0xC = 96-103.
                                                                 0xD = 104-111.
                                                                 0xE = 112-119.
                                                                 0xF = 120-127. */
        uint64_t exp_ent               : 1;  /**< [  4:  4](SR/W) Exported entropy enable for random number generator. The next random number is
                                                                 available 80 coprocessor-clock cycles after switching this bit from zero to one. The
                                                                 next random number is available 730 coprocessor-clock cycles after switching this
                                                                 bit from one to zero. When [EXP_ENT] = 1, [ENT_EN] must be set to 1. For diagnostic use only. */
        uint64_t rng_rst               : 1;  /**< [  3:  3](SR/W) Reset the RNG. Setting this bit to one cancels the generation of the current random
                                                                 number. The next random number is available 730 coprocessor-clock cycles after this
                                                                 bit is cleared if [EXP_ENT] is set to zero. The next random number is available 80
                                                                 coprocessor-clock cycles after this bit is cleared if [EXP_ENT] is set to one. This bit is
                                                                 not automatically cleared. When [RNG_RST] = 1, reading RNM_RANDOM is unpredictable. */
        uint64_t rnm_rst               : 1;  /**< [  2:  2](SRO) Reserved. Writes are ignored for backward compatibility. */
        uint64_t rng_en                : 1;  /**< [  1:  1](SR/W) Enables the output of the RNG. When [RNG_RST] = 1, reading RNM_RANDOM is unpredictable. */
        uint64_t ent_en                : 1;  /**< [  0:  0](SR/W) Entropy enable for random number generator. When [EXP_ENT] = 1, [ENT_EN] must be set to 1. */
#else /* Word 0 - Little Endian */
        uint64_t ent_en                : 1;  /**< [  0:  0](SR/W) Entropy enable for random number generator. When [EXP_ENT] = 1, [ENT_EN] must be set to 1. */
        uint64_t rng_en                : 1;  /**< [  1:  1](SR/W) Enables the output of the RNG. When [RNG_RST] = 1, reading RNM_RANDOM is unpredictable. */
        uint64_t rnm_rst               : 1;  /**< [  2:  2](SRO) Reserved. Writes are ignored for backward compatibility. */
        uint64_t rng_rst               : 1;  /**< [  3:  3](SR/W) Reset the RNG. Setting this bit to one cancels the generation of the current random
                                                                 number. The next random number is available 730 coprocessor-clock cycles after this
                                                                 bit is cleared if [EXP_ENT] is set to zero. The next random number is available 80
                                                                 coprocessor-clock cycles after this bit is cleared if [EXP_ENT] is set to one. This bit is
                                                                 not automatically cleared. When [RNG_RST] = 1, reading RNM_RANDOM is unpredictable. */
        uint64_t exp_ent               : 1;  /**< [  4:  4](SR/W) Exported entropy enable for random number generator. The next random number is
                                                                 available 80 coprocessor-clock cycles after switching this bit from zero to one. The
                                                                 next random number is available 730 coprocessor-clock cycles after switching this
                                                                 bit from one to zero. When [EXP_ENT] = 1, [ENT_EN] must be set to 1. For diagnostic use only. */
        uint64_t ent_sel               : 4;  /**< [  8:  5](SR/W) Select input to RNM FIFO.
                                                                 0x0 = 0-7.
                                                                 0x1 = 8-15.
                                                                 0x2 = 16-23.
                                                                 0x3 = 24-31.
                                                                 0x4 = 32-39.
                                                                 0x5 = 40-47.
                                                                 0x6 = 48-55.
                                                                 0x7 = 56-63.
                                                                 0x8 = 64-71.
                                                                 0x9 = 72-79.
                                                                 0xA = 80-87.
                                                                 0xB = 88-95.
                                                                 0xC = 96-103.
                                                                 0xD = 104-111.
                                                                 0xE = 112-119.
                                                                 0xF = 120-127. */
        uint64_t eer_val               : 1;  /**< [  9:  9](SRO/H) Dormant encryption key match. */
        uint64_t eer_lck               : 1;  /**< [ 10: 10](SRO/H) Encryption enable register locked. */
        uint64_t zuc_en                : 1;  /**< [ 11: 11](SR/W) Enable output of all ZUC engines. Before setting this bit software must write to
                                                                 all RNM_ZUC()_INIT_LFSR() and all RNM_ZUC()_INIT_NLF() registers. */
        uint64_t force_clk             : 1;  /**< [ 12: 12](SR/W) When set, conditional clock is always on. For diagnostic use only. */
        uint64_t xor_entropy_25x       : 1;  /**< [ 13: 13](SR/W) When set, entropy is increased 25 times. This puts the RNG unit in a mode
                                                                 compatible with prior chip generations. However, because this XOR's the output
                                                                 of multiple ring oscillators, this may not be compatible with FIPS 800-90B. */
        uint64_t lower_bandwidth_higher_entropy : 1;/**< [ 14: 14](SR/W) When clear, a new 64-bit random word is produced every 81 cycles. When set a new
                                                                 64-bit random word is produced every 8*81=648 cycles. The slower operation
                                                                 allows 8 times the entropy to be accumulated in each output. */
        uint64_t reserved_15_63        : 49;
#endif /* Word 0 - End */
    } cn9;
    struct cavm_rnm_ctl_status_cn96xxp1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t force_clk             : 1;  /**< [ 12: 12](SR/W) When set, conditional clock is always on. For diagnostic use only. */
        uint64_t zuc_en                : 1;  /**< [ 11: 11](SR/W) Enable output of all ZUC engines. Before setting this bit software must write to
                                                                 all RNM_ZUC()_INIT_LFSR() and all RNM_ZUC()_INIT_NLF() registers. */
        uint64_t eer_lck               : 1;  /**< [ 10: 10](SRO/H) Encryption enable register locked. */
        uint64_t eer_val               : 1;  /**< [  9:  9](SRO/H) Dormant encryption key match. */
        uint64_t ent_sel               : 4;  /**< [  8:  5](SR/W) Select input to RNM FIFO.
                                                                 0x0 = 0-7.
                                                                 0x1 = 8-15.
                                                                 0x2 = 16-23.
                                                                 0x3 = 24-31.
                                                                 0x4 = 32-39.
                                                                 0x5 = 40-47.
                                                                 0x6 = 48-55.
                                                                 0x7 = 56-63.
                                                                 0x8 = 64-71.
                                                                 0x9 = 72-79.
                                                                 0xA = 80-87.
                                                                 0xB = 88-95.
                                                                 0xC = 96-103.
                                                                 0xD = 104-111.
                                                                 0xE = 112-119.
                                                                 0xF = 120-127. */
        uint64_t exp_ent               : 1;  /**< [  4:  4](SR/W) Exported entropy enable for random number generator. The next random number is
                                                                 available 80 coprocessor-clock cycles after switching this bit from zero to one. The
                                                                 next random number is available 730 coprocessor-clock cycles after switching this
                                                                 bit from one to zero. When [EXP_ENT] = 1, [ENT_EN] must be set to 1. For diagnostic use only. */
        uint64_t rng_rst               : 1;  /**< [  3:  3](SR/W) Reset the RNG. Setting this bit to one cancels the generation of the current random
                                                                 number. The next random number is available 730 coprocessor-clock cycles after this
                                                                 bit is cleared if [EXP_ENT] is set to zero. The next random number is available 80
                                                                 coprocessor-clock cycles after this bit is cleared if [EXP_ENT] is set to one. This bit is
                                                                 not automatically cleared. When [RNG_RST] = 1, reading RNM_RANDOM is unpredictable. */
        uint64_t rnm_rst               : 1;  /**< [  2:  2](SRO) Reserved. Writes are ignored for backward compatibility. */
        uint64_t rng_en                : 1;  /**< [  1:  1](SR/W) Enables the output of the RNG. When [RNG_RST] = 1, reading RNM_RANDOM is unpredictable. */
        uint64_t ent_en                : 1;  /**< [  0:  0](SR/W) Entropy enable for random number generator. When [EXP_ENT] = 1, [ENT_EN] must be set to 1. */
#else /* Word 0 - Little Endian */
        uint64_t ent_en                : 1;  /**< [  0:  0](SR/W) Entropy enable for random number generator. When [EXP_ENT] = 1, [ENT_EN] must be set to 1. */
        uint64_t rng_en                : 1;  /**< [  1:  1](SR/W) Enables the output of the RNG. When [RNG_RST] = 1, reading RNM_RANDOM is unpredictable. */
        uint64_t rnm_rst               : 1;  /**< [  2:  2](SRO) Reserved. Writes are ignored for backward compatibility. */
        uint64_t rng_rst               : 1;  /**< [  3:  3](SR/W) Reset the RNG. Setting this bit to one cancels the generation of the current random
                                                                 number. The next random number is available 730 coprocessor-clock cycles after this
                                                                 bit is cleared if [EXP_ENT] is set to zero. The next random number is available 80
                                                                 coprocessor-clock cycles after this bit is cleared if [EXP_ENT] is set to one. This bit is
                                                                 not automatically cleared. When [RNG_RST] = 1, reading RNM_RANDOM is unpredictable. */
        uint64_t exp_ent               : 1;  /**< [  4:  4](SR/W) Exported entropy enable for random number generator. The next random number is
                                                                 available 80 coprocessor-clock cycles after switching this bit from zero to one. The
                                                                 next random number is available 730 coprocessor-clock cycles after switching this
                                                                 bit from one to zero. When [EXP_ENT] = 1, [ENT_EN] must be set to 1. For diagnostic use only. */
        uint64_t ent_sel               : 4;  /**< [  8:  5](SR/W) Select input to RNM FIFO.
                                                                 0x0 = 0-7.
                                                                 0x1 = 8-15.
                                                                 0x2 = 16-23.
                                                                 0x3 = 24-31.
                                                                 0x4 = 32-39.
                                                                 0x5 = 40-47.
                                                                 0x6 = 48-55.
                                                                 0x7 = 56-63.
                                                                 0x8 = 64-71.
                                                                 0x9 = 72-79.
                                                                 0xA = 80-87.
                                                                 0xB = 88-95.
                                                                 0xC = 96-103.
                                                                 0xD = 104-111.
                                                                 0xE = 112-119.
                                                                 0xF = 120-127. */
        uint64_t eer_val               : 1;  /**< [  9:  9](SRO/H) Dormant encryption key match. */
        uint64_t eer_lck               : 1;  /**< [ 10: 10](SRO/H) Encryption enable register locked. */
        uint64_t zuc_en                : 1;  /**< [ 11: 11](SR/W) Enable output of all ZUC engines. Before setting this bit software must write to
                                                                 all RNM_ZUC()_INIT_LFSR() and all RNM_ZUC()_INIT_NLF() registers. */
        uint64_t force_clk             : 1;  /**< [ 12: 12](SR/W) When set, conditional clock is always on. For diagnostic use only. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } cn96xxp1;
    struct cavm_rnm_ctl_status_cn96xxp3
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_15_63        : 49;
        uint64_t lower_bandwidth_higher_entropy : 1;/**< [ 14: 14](SR/W) When clear, a new 64-bit random word is produced every 81 cycles. When set a new
                                                                 64-bit random word is produced every 8*81=648 cycles. The slower operation
                                                                 allows 8 times the entropy to be accumulated in each output. */
        uint64_t xor_entropy_25x       : 1;  /**< [ 13: 13](SR/W) When set, entropy is increased 25 times. This puts the RNG unit in a mode
                                                                 compatible with prior chip generations. However, because this XOR's the output
                                                                 of multiple ring oscillators, this may not be compatible with FIPS 800-90B. */
        uint64_t force_clk             : 1;  /**< [ 12: 12](SR/W) When set, conditional clock is always on. For diagnostic use only. */
        uint64_t zuc_en                : 1;  /**< [ 11: 11](SR/W) Enable output of all ZUC engines. Before setting this bit software must write to
                                                                 all RNM_ZUC()_INIT_LFSR(), and all RNM_ZUC()_INIT_NLF() registers. */
        uint64_t eer_lck               : 1;  /**< [ 10: 10](SRO/H) Encryption enable register locked. */
        uint64_t eer_val               : 1;  /**< [  9:  9](SRO/H) Dormant encryption key match. */
        uint64_t ent_sel               : 4;  /**< [  8:  5](SR/W) Select input to RNM FIFO.
                                                                 0x0 = 0-7.
                                                                 0x1 = 8-15.
                                                                 0x2 = 16-23.
                                                                 0x3 = 24-31.
                                                                 0x4 = 32-39.
                                                                 0x5 = 40-47.
                                                                 0x6 = 48-55.
                                                                 0x7 = 56-63.
                                                                 0x8 = 64-71.
                                                                 0x9 = 72-79.
                                                                 0xA = 80-87.
                                                                 0xB = 88-95.
                                                                 0xC = 96-103.
                                                                 0xD = 104-111.
                                                                 0xE = 112-119.
                                                                 0xF = 120-127. */
        uint64_t exp_ent               : 1;  /**< [  4:  4](SR/W) Exported entropy enable for random number generator. The next random number is
                                                                 available 80 coprocessor-clock cycles after switching this bit from zero to one. The
                                                                 next random number is available 730 coprocessor-clock cycles after switching this
                                                                 bit from one to zero. When [EXP_ENT] = 1, [ENT_EN] must be set to 1. For diagnostic use only. */
        uint64_t rng_rst               : 1;  /**< [  3:  3](SR/W) Reset the RNG. Setting this bit to one cancels the generation of the current
                                                                 random number. Clearing this bit takes the RNG out of reset after which a
                                                                 startup health test is performed followed by rng output. The startup health test
                                                                 takes approximately 11000 coprocessor-cycles. This bit is not automatically
                                                                 cleared. When [RNG_RST] = 1, reading RNM_RANDOM is unpredictable. */
        uint64_t rnm_rst               : 1;  /**< [  2:  2](SRO) Reserved. Writes are ignored for backward compatibility. */
        uint64_t rng_en                : 1;  /**< [  1:  1](SR/W) Enables the output of the RNG. When [RNG_RST] = 1, reading RNM_RANDOM is unpredictable. */
        uint64_t ent_en                : 1;  /**< [  0:  0](SR/W) Ignored, deprecated feature. */
#else /* Word 0 - Little Endian */
        uint64_t ent_en                : 1;  /**< [  0:  0](SR/W) Ignored, deprecated feature. */
        uint64_t rng_en                : 1;  /**< [  1:  1](SR/W) Enables the output of the RNG. When [RNG_RST] = 1, reading RNM_RANDOM is unpredictable. */
        uint64_t rnm_rst               : 1;  /**< [  2:  2](SRO) Reserved. Writes are ignored for backward compatibility. */
        uint64_t rng_rst               : 1;  /**< [  3:  3](SR/W) Reset the RNG. Setting this bit to one cancels the generation of the current
                                                                 random number. Clearing this bit takes the RNG out of reset after which a
                                                                 startup health test is performed followed by rng output. The startup health test
                                                                 takes approximately 11000 coprocessor-cycles. This bit is not automatically
                                                                 cleared. When [RNG_RST] = 1, reading RNM_RANDOM is unpredictable. */
        uint64_t exp_ent               : 1;  /**< [  4:  4](SR/W) Exported entropy enable for random number generator. The next random number is
                                                                 available 80 coprocessor-clock cycles after switching this bit from zero to one. The
                                                                 next random number is available 730 coprocessor-clock cycles after switching this
                                                                 bit from one to zero. When [EXP_ENT] = 1, [ENT_EN] must be set to 1. For diagnostic use only. */
        uint64_t ent_sel               : 4;  /**< [  8:  5](SR/W) Select input to RNM FIFO.
                                                                 0x0 = 0-7.
                                                                 0x1 = 8-15.
                                                                 0x2 = 16-23.
                                                                 0x3 = 24-31.
                                                                 0x4 = 32-39.
                                                                 0x5 = 40-47.
                                                                 0x6 = 48-55.
                                                                 0x7 = 56-63.
                                                                 0x8 = 64-71.
                                                                 0x9 = 72-79.
                                                                 0xA = 80-87.
                                                                 0xB = 88-95.
                                                                 0xC = 96-103.
                                                                 0xD = 104-111.
                                                                 0xE = 112-119.
                                                                 0xF = 120-127. */
        uint64_t eer_val               : 1;  /**< [  9:  9](SRO/H) Dormant encryption key match. */
        uint64_t eer_lck               : 1;  /**< [ 10: 10](SRO/H) Encryption enable register locked. */
        uint64_t zuc_en                : 1;  /**< [ 11: 11](SR/W) Enable output of all ZUC engines. Before setting this bit software must write to
                                                                 all RNM_ZUC()_INIT_LFSR(), and all RNM_ZUC()_INIT_NLF() registers. */
        uint64_t force_clk             : 1;  /**< [ 12: 12](SR/W) When set, conditional clock is always on. For diagnostic use only. */
        uint64_t xor_entropy_25x       : 1;  /**< [ 13: 13](SR/W) When set, entropy is increased 25 times. This puts the RNG unit in a mode
                                                                 compatible with prior chip generations. However, because this XOR's the output
                                                                 of multiple ring oscillators, this may not be compatible with FIPS 800-90B. */
        uint64_t lower_bandwidth_higher_entropy : 1;/**< [ 14: 14](SR/W) When clear, a new 64-bit random word is produced every 81 cycles. When set a new
                                                                 64-bit random word is produced every 8*81=648 cycles. The slower operation
                                                                 allows 8 times the entropy to be accumulated in each output. */
        uint64_t reserved_15_63        : 49;
#endif /* Word 0 - End */
    } cn96xxp3;
    /* struct cavm_rnm_ctl_status_cn96xxp3 cn96xxp4; */
    /* struct cavm_rnm_ctl_status_cn96xxp3 cn98xx; */
    /* struct cavm_rnm_ctl_status_cn96xxp1 cnf95xx; */
    /* struct cavm_rnm_ctl_status_cn96xxp1 f95mm; */
    /* struct cavm_rnm_ctl_status_cn96xxp1 f95o; */
    /* struct cavm_rnm_ctl_status_cn96xxp1 loki; */
};
typedef union cavm_rnm_ctl_status cavm_rnm_ctl_status_t;

#define CAVM_RNM_CTL_STATUS CAVM_RNM_CTL_STATUS_FUNC()
static inline uint64_t CAVM_RNM_CTL_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_CTL_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x87e040000000ll;
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x87e00f000000ll;
    __cavm_csr_fatal("RNM_CTL_STATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RNM_CTL_STATUS cavm_rnm_ctl_status_t
#define bustype_CAVM_RNM_CTL_STATUS CSR_TYPE_RSL
#define basename_CAVM_RNM_CTL_STATUS "RNM_CTL_STATUS"
#define device_bar_CAVM_RNM_CTL_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_CTL_STATUS 0
#define arguments_CAVM_RNM_CTL_STATUS -1,-1,-1,-1

/**
 * Register (RSL) rnm_eer_key
 *
 * RNM Encryption Enable Register
 * This register is the encryption enable register.
 */
union cavm_rnm_eer_key
{
    uint64_t u;
    struct cavm_rnm_eer_key_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t key                   : 64; /**< [ 63:  0](SWO) Dormant encryption key. If dormant crypto is fuse-enabled, crypto can be enabled by
                                                                 writing this register with the correct key. */
#else /* Word 0 - Little Endian */
        uint64_t key                   : 64; /**< [ 63:  0](SWO) Dormant encryption key. If dormant crypto is fuse-enabled, crypto can be enabled by
                                                                 writing this register with the correct key. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_eer_key_s cn; */
};
typedef union cavm_rnm_eer_key cavm_rnm_eer_key_t;

#define CAVM_RNM_EER_KEY CAVM_RNM_EER_KEY_FUNC()
static inline uint64_t CAVM_RNM_EER_KEY_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_EER_KEY_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x87e040000010ll;
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x87e00f000010ll;
    __cavm_csr_fatal("RNM_EER_KEY", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RNM_EER_KEY cavm_rnm_eer_key_t
#define bustype_CAVM_RNM_EER_KEY CSR_TYPE_RSL
#define basename_CAVM_RNM_EER_KEY "RNM_EER_KEY"
#define device_bar_CAVM_RNM_EER_KEY 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_EER_KEY 0
#define arguments_CAVM_RNM_EER_KEY -1,-1,-1,-1

/**
 * Register (RSL) rnm_health_status
 *
 * RNM Entropy health status Register
 * This register indicates the startup and continuous entropy health status.
 */
union cavm_rnm_health_status
{
    uint64_t u;
    struct cavm_rnm_health_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cycles_since_health_failure : 63;/**< [ 63:  1](RO/H) When zero, no continuous health failure has occured. When nonzero, number of
                                                                 coprocessor cycles times 2 since the last failure. Note that expected false
                                                                 positive rate of 2^-20 will result in a failure every millisecond with correctly
                                                                 functioning hardware. */
        uint64_t startup_health_failure : 1; /**< [  0:  0](RO/H) Latched result of the entropy source health test that occurred after the most
                                                                 recent chip reset. */
#else /* Word 0 - Little Endian */
        uint64_t startup_health_failure : 1; /**< [  0:  0](RO/H) Latched result of the entropy source health test that occurred after the most
                                                                 recent chip reset. */
        uint64_t cycles_since_health_failure : 63;/**< [ 63:  1](RO/H) When zero, no continuous health failure has occured. When nonzero, number of
                                                                 coprocessor cycles times 2 since the last failure. Note that expected false
                                                                 positive rate of 2^-20 will result in a failure every millisecond with correctly
                                                                 functioning hardware. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_health_status_s cn; */
};
typedef union cavm_rnm_health_status cavm_rnm_health_status_t;

#define CAVM_RNM_HEALTH_STATUS CAVM_RNM_HEALTH_STATUS_FUNC()
static inline uint64_t CAVM_RNM_HEALTH_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_HEALTH_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN96XX_PASS3_X))
        return 0x87e00f000038ll;
    if (cavm_is_model(OCTEONTX_CN96XX_PASS4_X))
        return 0x87e00f000038ll;
    if (cavm_is_model(OCTEONTX_CN98XX))
        return 0x87e00f000038ll;
    __cavm_csr_fatal("RNM_HEALTH_STATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RNM_HEALTH_STATUS cavm_rnm_health_status_t
#define bustype_CAVM_RNM_HEALTH_STATUS CSR_TYPE_RSL
#define basename_CAVM_RNM_HEALTH_STATUS "RNM_HEALTH_STATUS"
#define device_bar_CAVM_RNM_HEALTH_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_HEALTH_STATUS 0
#define arguments_CAVM_RNM_HEALTH_STATUS -1,-1,-1,-1

/**
 * Register (NCB) rnm_random
 *
 * RNM Random Register
 */
union cavm_rnm_random
{
    uint64_t u;
    struct cavm_rnm_random_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Generated random number. This register may be accessed with a 8, 16, 32 or 64-bit
                                                                 operation. This register is on a independent page, and may be mapped into guest operating
                                                                 systems. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Generated random number. This register may be accessed with a 8, 16, 32 or 64-bit
                                                                 operation. This register is on a independent page, and may be mapped into guest operating
                                                                 systems. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_random_s cn8; */
    struct cavm_rnm_random_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Generated random number. This register may be accessed with a 8, 16, 32 or 64-bit
                                                                 operation. This register is on a independent page, and may be mapped into guest operating
                                                                 systems. Accesses to RNM_RANDOM larger than 64 bits will return 0x0 and fault. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Generated random number. This register may be accessed with a 8, 16, 32 or 64-bit
                                                                 operation. This register is on a independent page, and may be mapped into guest operating
                                                                 systems. Accesses to RNM_RANDOM larger than 64 bits will return 0x0 and fault. */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_rnm_random cavm_rnm_random_t;

#define CAVM_RNM_RANDOM CAVM_RNM_RANDOM_FUNC()
static inline uint64_t CAVM_RNM_RANDOM_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_RANDOM_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x840000800000ll;
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x80f000800000ll;
    __cavm_csr_fatal("RNM_RANDOM", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RNM_RANDOM cavm_rnm_random_t
#define bustype_CAVM_RNM_RANDOM CSR_TYPE_NCB
#define basename_CAVM_RNM_RANDOM "RNM_RANDOM"
#define device_bar_CAVM_RNM_RANDOM 0x0 /* VF_BAR0 */
#define busnum_CAVM_RNM_RANDOM 0
#define arguments_CAVM_RNM_RANDOM -1,-1,-1,-1

/**
 * Register (RSL) rnm_serial_num
 *
 * RNM Fuse Serial Number Register
 */
union cavm_rnm_serial_num
{
    uint64_t u;
    struct cavm_rnm_serial_num_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Dormant encryption serial number. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Dormant encryption serial number. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_serial_num_s cn; */
};
typedef union cavm_rnm_serial_num cavm_rnm_serial_num_t;

#define CAVM_RNM_SERIAL_NUM CAVM_RNM_SERIAL_NUM_FUNC()
static inline uint64_t CAVM_RNM_SERIAL_NUM_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_SERIAL_NUM_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x87e040000020ll;
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x87e00f000020ll;
    __cavm_csr_fatal("RNM_SERIAL_NUM", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RNM_SERIAL_NUM cavm_rnm_serial_num_t
#define bustype_CAVM_RNM_SERIAL_NUM CSR_TYPE_RSL
#define basename_CAVM_RNM_SERIAL_NUM "RNM_SERIAL_NUM"
#define device_bar_CAVM_RNM_SERIAL_NUM 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_SERIAL_NUM 0
#define arguments_CAVM_RNM_SERIAL_NUM -1,-1,-1,-1

/**
 * Register (RSL) rnm_zuc#_init_lfsr#
 *
 * RNM ZUC LFSR Initialization Register
 * This register is used to initialize the state of the 16 state elements in RNM's ZUC
 * LFSR. See RNM_CTL_STATUS[ZUC_EN].
 *
 * Before writing to this register, RNM_CTL_STATUS[ZUC_EN] must be zero to turn off the
 * ZUC engine.
 */
union cavm_rnm_zucx_init_lfsrx
{
    uint64_t u;
    struct cavm_rnm_zucx_init_lfsrx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_31_63        : 33;
        uint64_t lfsr                  : 31; /**< [ 30:  0](SWO) Write the state of one ZUC LFSR element. Writes are ignored if RNM_CONST[ZUCS] is 0xF. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr                  : 31; /**< [ 30:  0](SWO) Write the state of one ZUC LFSR element. Writes are ignored if RNM_CONST[ZUCS] is 0xF. */
        uint64_t reserved_31_63        : 33;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_zucx_init_lfsrx_s cn; */
};
typedef union cavm_rnm_zucx_init_lfsrx cavm_rnm_zucx_init_lfsrx_t;

static inline uint64_t CAVM_RNM_ZUCX_INIT_LFSRX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_ZUCX_INIT_LFSRX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN96XX) && ((a==0) && (b<=15)))
        return 0x87e00f000100ll + 0x400ll * ((a) & 0x0) + 8ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b<=15)))
        return 0x87e00f000100ll + 0x400ll * ((a) & 0x1) + 8ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a==0) && (b<=15)))
        return 0x87e00f000100ll + 0x400ll * ((a) & 0x0) + 8ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_F95MM) && ((a==0) && (b<=15)))
        return 0x87e00f000100ll + 0x400ll * ((a) & 0x0) + 8ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_F95O) && ((a==0) && (b<=15)))
        return 0x87e00f000100ll + 0x400ll * ((a) & 0x0) + 8ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_LOKI) && ((a==0) && (b<=15)))
        return 0x87e00f000100ll + 0x400ll * ((a) & 0x0) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("RNM_ZUCX_INIT_LFSRX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RNM_ZUCX_INIT_LFSRX(a,b) cavm_rnm_zucx_init_lfsrx_t
#define bustype_CAVM_RNM_ZUCX_INIT_LFSRX(a,b) CSR_TYPE_RSL
#define basename_CAVM_RNM_ZUCX_INIT_LFSRX(a,b) "RNM_ZUCX_INIT_LFSRX"
#define device_bar_CAVM_RNM_ZUCX_INIT_LFSRX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_ZUCX_INIT_LFSRX(a,b) (a)
#define arguments_CAVM_RNM_ZUCX_INIT_LFSRX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rnm_zuc#_init_nlf#
 *
 * RNM ZUC LFSR Initialization Register
 * This register is used to initialize the state of the two 32-bit memory cells in
 * ZUC's nonlinear function. See RNM_CTL_STATUS[ZUC_EN].
 *
 * Before writing to this register, RNM_CTL_STATUS[ZUC_EN] must be zero to turn off the
 * ZUC engine.
 */
union cavm_rnm_zucx_init_nlfx
{
    uint64_t u;
    struct cavm_rnm_zucx_init_nlfx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t r_state               : 32; /**< [ 31:  0](SWO) Write the state of one ZUC nonlinear function element. Writes are ignored if
                                                                 RNM_CONST[ZUCS] is 0xF. */
#else /* Word 0 - Little Endian */
        uint64_t r_state               : 32; /**< [ 31:  0](SWO) Write the state of one ZUC nonlinear function element. Writes are ignored if
                                                                 RNM_CONST[ZUCS] is 0xF. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_zucx_init_nlfx_s cn; */
};
typedef union cavm_rnm_zucx_init_nlfx cavm_rnm_zucx_init_nlfx_t;

static inline uint64_t CAVM_RNM_ZUCX_INIT_NLFX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_ZUCX_INIT_NLFX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN96XX) && ((a==0) && (b<=1)))
        return 0x87e00f000200ll + 0x400ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b<=1)))
        return 0x87e00f000200ll + 0x400ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a==0) && (b<=1)))
        return 0x87e00f000200ll + 0x400ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_F95MM) && ((a==0) && (b<=1)))
        return 0x87e00f000200ll + 0x400ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_F95O) && ((a==0) && (b<=1)))
        return 0x87e00f000200ll + 0x400ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_LOKI) && ((a==0) && (b<=1)))
        return 0x87e00f000200ll + 0x400ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("RNM_ZUCX_INIT_NLFX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RNM_ZUCX_INIT_NLFX(a,b) cavm_rnm_zucx_init_nlfx_t
#define bustype_CAVM_RNM_ZUCX_INIT_NLFX(a,b) CSR_TYPE_RSL
#define basename_CAVM_RNM_ZUCX_INIT_NLFX(a,b) "RNM_ZUCX_INIT_NLFX"
#define device_bar_CAVM_RNM_ZUCX_INIT_NLFX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_ZUCX_INIT_NLFX(a,b) (a)
#define arguments_CAVM_RNM_ZUCX_INIT_NLFX(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_RNM_H__ */
