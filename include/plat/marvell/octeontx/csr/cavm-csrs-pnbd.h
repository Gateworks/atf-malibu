#ifndef __CAVM_CSRS_PNBD_H__
#define __CAVM_CSRS_PNBD_H__
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
 * OcteonTX PNBD.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (RSL) pnb#_dma#_control
 *
 * PNB DMA AB Control Register
 * AB control register for PNB DMA operation.
 */
union cavm_pnbx_dmax_control
{
    uint64_t u;
    struct cavm_pnbx_dmax_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t jobid0                : 16; /**< [ 31: 16](R/W/H) Job ID0 */
        uint64_t reserved_1_15         : 15;
        uint64_t start                 : 1;  /**< [  0:  0](R/W/H) "'1' = Start the HAB per config in CONFIGURATION. This bit auto-clears. This start bit is
                                                                 ignored if the HAB status is busy (RDEC_STATUS bit 0 = '1')." */
#else /* Word 0 - Little Endian */
        uint64_t start                 : 1;  /**< [  0:  0](R/W/H) "'1' = Start the HAB per config in CONFIGURATION. This bit auto-clears. This start bit is
                                                                 ignored if the HAB status is busy (RDEC_STATUS bit 0 = '1')." */
        uint64_t reserved_1_15         : 15;
        uint64_t jobid0                : 16; /**< [ 31: 16](R/W/H) Job ID0 */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pnbx_dmax_control_s cn; */
};
typedef union cavm_pnbx_dmax_control cavm_pnbx_dmax_control_t;

static inline uint64_t CAVM_PNBX_DMAX_CONTROL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PNBX_DMAX_CONTROL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a<=1) && (b<=1)))
        return 0x87e043900000ll + 0x80000ll * ((a) & 0x1) + 0x8000ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_F95MM) && ((a<=1) && (b<=1)))
        return 0x87e043900000ll + 0x80000ll * ((a) & 0x1) + 0x8000ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_F95O) && ((a<=1) && (b<=1)))
        return 0x87e043900000ll + 0x80000ll * ((a) & 0x1) + 0x8000ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_LOKI) && ((a<=1) && (b<=1)))
        return 0x87e043900000ll + 0x80000ll * ((a) & 0x1) + 0x8000ll * ((b) & 0x1);
    __cavm_csr_fatal("PNBX_DMAX_CONTROL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PNBX_DMAX_CONTROL(a,b) cavm_pnbx_dmax_control_t
#define bustype_CAVM_PNBX_DMAX_CONTROL(a,b) CSR_TYPE_RSL
#define basename_CAVM_PNBX_DMAX_CONTROL(a,b) "PNBX_DMAX_CONTROL"
#define busnum_CAVM_PNBX_DMAX_CONTROL(a,b) (a)
#define arguments_CAVM_PNBX_DMAX_CONTROL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) pnb#_dma#_err_enable0
 *
 * PNB DMA AB Error Enable Register 0
 * This register enables error reporting for ERROR_SOURCE0 register.
 */
union cavm_pnbx_dmax_err_enable0
{
    uint64_t u;
    struct cavm_pnbx_dmax_err_enable0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t err_en                : 1;  /**< [  0:  0](R/W) ERR_ENABLE. */
#else /* Word 0 - Little Endian */
        uint64_t err_en                : 1;  /**< [  0:  0](R/W) ERR_ENABLE. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pnbx_dmax_err_enable0_s cn; */
};
typedef union cavm_pnbx_dmax_err_enable0 cavm_pnbx_dmax_err_enable0_t;

static inline uint64_t CAVM_PNBX_DMAX_ERR_ENABLE0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PNBX_DMAX_ERR_ENABLE0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a<=1) && (b<=1)))
        return 0x87e043900040ll + 0x80000ll * ((a) & 0x1) + 0x8000ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_F95MM) && ((a<=1) && (b<=1)))
        return 0x87e043900040ll + 0x80000ll * ((a) & 0x1) + 0x8000ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_F95O) && ((a<=1) && (b<=1)))
        return 0x87e043900040ll + 0x80000ll * ((a) & 0x1) + 0x8000ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_LOKI) && ((a<=1) && (b<=1)))
        return 0x87e043900040ll + 0x80000ll * ((a) & 0x1) + 0x8000ll * ((b) & 0x1);
    __cavm_csr_fatal("PNBX_DMAX_ERR_ENABLE0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PNBX_DMAX_ERR_ENABLE0(a,b) cavm_pnbx_dmax_err_enable0_t
#define bustype_CAVM_PNBX_DMAX_ERR_ENABLE0(a,b) CSR_TYPE_RSL
#define basename_CAVM_PNBX_DMAX_ERR_ENABLE0(a,b) "PNBX_DMAX_ERR_ENABLE0"
#define busnum_CAVM_PNBX_DMAX_ERR_ENABLE0(a,b) (a)
#define arguments_CAVM_PNBX_DMAX_ERR_ENABLE0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) pnb#_dma#_err_source0
 *
 * PNB DMA AB Error Source Register 0
 * This register contains error source information.
 */
union cavm_pnbx_dmax_err_source0
{
    uint64_t u;
    struct cavm_pnbx_dmax_err_source0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t rp0_jobid_ufof        : 16; /**< [ 31: 16](RO/H) Job ID for Read Port 0 Overflow/Underflow */
        uint64_t reserved_5_15         : 11;
        uint64_t rp0_of                : 1;  /**< [  4:  4](R/W1C) Read Port0 overflow */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_uf                : 1;  /**< [  0:  0](R/W1C) Read Port0 underflow */
#else /* Word 0 - Little Endian */
        uint64_t rp0_uf                : 1;  /**< [  0:  0](R/W1C) Read Port0 underflow */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_of                : 1;  /**< [  4:  4](R/W1C) Read Port0 overflow */
        uint64_t reserved_5_15         : 11;
        uint64_t rp0_jobid_ufof        : 16; /**< [ 31: 16](RO/H) Job ID for Read Port 0 Overflow/Underflow */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pnbx_dmax_err_source0_s cn; */
};
typedef union cavm_pnbx_dmax_err_source0 cavm_pnbx_dmax_err_source0_t;

static inline uint64_t CAVM_PNBX_DMAX_ERR_SOURCE0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PNBX_DMAX_ERR_SOURCE0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a<=1) && (b<=1)))
        return 0x87e043900030ll + 0x80000ll * ((a) & 0x1) + 0x8000ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_F95MM) && ((a<=1) && (b<=1)))
        return 0x87e043900030ll + 0x80000ll * ((a) & 0x1) + 0x8000ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_F95O) && ((a<=1) && (b<=1)))
        return 0x87e043900030ll + 0x80000ll * ((a) & 0x1) + 0x8000ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_LOKI) && ((a<=1) && (b<=1)))
        return 0x87e043900030ll + 0x80000ll * ((a) & 0x1) + 0x8000ll * ((b) & 0x1);
    __cavm_csr_fatal("PNBX_DMAX_ERR_SOURCE0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PNBX_DMAX_ERR_SOURCE0(a,b) cavm_pnbx_dmax_err_source0_t
#define bustype_CAVM_PNBX_DMAX_ERR_SOURCE0(a,b) CSR_TYPE_RSL
#define basename_CAVM_PNBX_DMAX_ERR_SOURCE0(a,b) "PNBX_DMAX_ERR_SOURCE0"
#define busnum_CAVM_PNBX_DMAX_ERR_SOURCE0(a,b) (a)
#define arguments_CAVM_PNBX_DMAX_ERR_SOURCE0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) pnb#_dma#_status
 *
 * PNB DMA AB Status Register
 * AB status register for PNB DMA operation.
 */
union cavm_pnbx_dmax_status
{
    uint64_t u;
    struct cavm_pnbx_dmax_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) Ready to receive the next job when set */
        uint64_t reserved_1_3          : 3;
        uint64_t busy                  : 1;  /**< [  0:  0](RO/H) Busy on processing a job when set */
#else /* Word 0 - Little Endian */
        uint64_t busy                  : 1;  /**< [  0:  0](RO/H) Busy on processing a job when set */
        uint64_t reserved_1_3          : 3;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) Ready to receive the next job when set */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pnbx_dmax_status_s cn; */
};
typedef union cavm_pnbx_dmax_status cavm_pnbx_dmax_status_t;

static inline uint64_t CAVM_PNBX_DMAX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PNBX_DMAX_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a<=1) && (b<=1)))
        return 0x87e043900018ll + 0x80000ll * ((a) & 0x1) + 0x8000ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_F95MM) && ((a<=1) && (b<=1)))
        return 0x87e043900018ll + 0x80000ll * ((a) & 0x1) + 0x8000ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_F95O) && ((a<=1) && (b<=1)))
        return 0x87e043900018ll + 0x80000ll * ((a) & 0x1) + 0x8000ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_LOKI) && ((a<=1) && (b<=1)))
        return 0x87e043900018ll + 0x80000ll * ((a) & 0x1) + 0x8000ll * ((b) & 0x1);
    __cavm_csr_fatal("PNBX_DMAX_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PNBX_DMAX_STATUS(a,b) cavm_pnbx_dmax_status_t
#define bustype_CAVM_PNBX_DMAX_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_PNBX_DMAX_STATUS(a,b) "PNBX_DMAX_STATUS"
#define busnum_CAVM_PNBX_DMAX_STATUS(a,b) (a)
#define arguments_CAVM_PNBX_DMAX_STATUS(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_PNBD_H__ */
