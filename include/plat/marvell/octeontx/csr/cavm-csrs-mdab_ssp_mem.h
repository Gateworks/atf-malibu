#ifndef __CAVM_CSRS_MDAB_SSP_MEM_H__
#define __CAVM_CSRS_MDAB_SSP_MEM_H__
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
 * OcteonTX MDAB_SSP_MEM.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (RSL) mdab_sbp#_dmem_array#
 *
 * MDAB SBP Data Memory Array Registers
 * This address range provides OCTEON TX2 cores access to any MDAB data memory array. Intended for
 * debug purposes only because RSL accesses are slow.
 */
union cavm_mdab_sbpx_dmem_arrayx
{
    uint64_t u;
    struct cavm_mdab_sbpx_dmem_arrayx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t qword                 : 64; /**< [ 63:  0](R/W) Quad-word (8-byte) data from DSP data memory. */
#else /* Word 0 - Little Endian */
        uint64_t qword                 : 64; /**< [ 63:  0](R/W) Quad-word (8-byte) data from DSP data memory. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdab_sbpx_dmem_arrayx_s cn; */
};
typedef union cavm_mdab_sbpx_dmem_arrayx cavm_mdab_sbpx_dmem_arrayx_t;

static inline uint64_t CAVM_MDAB_SBPX_DMEM_ARRAYX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDAB_SBPX_DMEM_ARRAYX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a<=1) && (b<=32767)))
        return 0x87e044240000ll + 0x80000ll * ((a) & 0x1) + 8ll * ((b) & 0x7fff);
    __cavm_csr_fatal("MDAB_SBPX_DMEM_ARRAYX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MDAB_SBPX_DMEM_ARRAYX(a,b) cavm_mdab_sbpx_dmem_arrayx_t
#define bustype_CAVM_MDAB_SBPX_DMEM_ARRAYX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MDAB_SBPX_DMEM_ARRAYX(a,b) "MDAB_SBPX_DMEM_ARRAYX"
#define busnum_CAVM_MDAB_SBPX_DMEM_ARRAYX(a,b) (a)
#define arguments_CAVM_MDAB_SBPX_DMEM_ARRAYX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mdab_sbp#_imem_array#
 *
 * MDAB SBP Instruction Memory Array Registers
 * This address range provides OCTEON TX2 cores access to any MDAB instruction memory array. Intended
 * for debug purposes only because RSL accesses are slow.
 */
union cavm_mdab_sbpx_imem_arrayx
{
    uint64_t u;
    struct cavm_mdab_sbpx_imem_arrayx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t qword                 : 64; /**< [ 63:  0](R/W) Quad-word (8-byte) data from DSP data memory. */
#else /* Word 0 - Little Endian */
        uint64_t qword                 : 64; /**< [ 63:  0](R/W) Quad-word (8-byte) data from DSP data memory. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdab_sbpx_imem_arrayx_s cn; */
};
typedef union cavm_mdab_sbpx_imem_arrayx cavm_mdab_sbpx_imem_arrayx_t;

static inline uint64_t CAVM_MDAB_SBPX_IMEM_ARRAYX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDAB_SBPX_IMEM_ARRAYX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a<=1) && (b<=8191)))
        return 0x87e044200000ll + 0x80000ll * ((a) & 0x1) + 8ll * ((b) & 0x1fff);
    __cavm_csr_fatal("MDAB_SBPX_IMEM_ARRAYX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MDAB_SBPX_IMEM_ARRAYX(a,b) cavm_mdab_sbpx_imem_arrayx_t
#define bustype_CAVM_MDAB_SBPX_IMEM_ARRAYX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MDAB_SBPX_IMEM_ARRAYX(a,b) "MDAB_SBPX_IMEM_ARRAYX"
#define busnum_CAVM_MDAB_SBPX_IMEM_ARRAYX(a,b) (a)
#define arguments_CAVM_MDAB_SBPX_IMEM_ARRAYX(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_MDAB_SSP_MEM_H__ */
