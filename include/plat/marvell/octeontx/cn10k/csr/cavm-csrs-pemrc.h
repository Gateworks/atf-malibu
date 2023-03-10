#ifndef __CAVM_CSRS_PEMRC_H__
#define __CAVM_CSRS_PEMRC_H__
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
 * OcteonTX PEMRC.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration pemrc_bar_e
 *
 * PEM Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_PEMRC_BAR_E_PEMRCX_PF_BAR0(a) (0x8e0e00000000ll + 0x1000000000ll * (a))
#define CAVM_PEMRC_BAR_E_PEMRCX_PF_BAR0_SIZE 0x100000ull

/**
 * Enumeration pemrc_int_vec_e
 *
 * PEM RC MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_PEMRC_INT_VEC_E_ERROR_AERI (0)
#define CAVM_PEMRC_INT_VEC_E_HP_PMEI (1)

/**
 * Register (NCB) pemrc#_msix_pba#
 *
 * PEM RC MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the PEMRC_INT_VEC_E enumeration.
 */
union cavm_pemrcx_msix_pbax
{
    uint64_t u;
    struct cavm_pemrcx_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated PEMRC()_MSIX_VEC()_CTL, enumerated by
                                                                 PEMRC_INT_VEC_E. Bits that have no associated PEMRC_INT_VEC_E are zero. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated PEMRC()_MSIX_VEC()_CTL, enumerated by
                                                                 PEMRC_INT_VEC_E. Bits that have no associated PEMRC_INT_VEC_E are zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemrcx_msix_pbax_s cn; */
};
typedef union cavm_pemrcx_msix_pbax cavm_pemrcx_msix_pbax_t;

static inline uint64_t CAVM_PEMRCX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMRCX_MSIX_PBAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=5) && (b==0)))
        return 0x8e0e000f0000ll + 0x1000000000ll * ((a) & 0x7) + 8ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=5) && (b==0)))
        return 0x8e0e000f0000ll + 0x1000000000ll * ((a) & 0x7) + 8ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b==0)))
        return 0x8e0e000f0000ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b==0)))
        return 0x8e0e000f0000ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("PEMRCX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMRCX_MSIX_PBAX(a,b) cavm_pemrcx_msix_pbax_t
#define bustype_CAVM_PEMRCX_MSIX_PBAX(a,b) CSR_TYPE_NCB
#define basename_CAVM_PEMRCX_MSIX_PBAX(a,b) "PEMRCX_MSIX_PBAX"
#define device_bar_CAVM_PEMRCX_MSIX_PBAX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMRCX_MSIX_PBAX(a,b) (a)
#define arguments_CAVM_PEMRCX_MSIX_PBAX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) pemrc#_msix_vec#_addr
 *
 * PEM RC MSI-X Vector Table Address Registers
 * This register is the MSI-X vector table, indexed by the PEMRC_INT_VEC_E enumeration.
 */
union cavm_pemrcx_msix_vecx_addr
{
    uint64_t u;
    struct cavm_pemrcx_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's PEM()_MSIX_VEC()_ADDR, PEM()_MSIX_VEC()_CTL, and
                                                                 corresponding bit of PEM()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_PEM()_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
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

                                                                 1 = This vector's PEM()_MSIX_VEC()_ADDR, PEM()_MSIX_VEC()_CTL, and
                                                                 corresponding bit of PEM()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_PEM()_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
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
    } s;
    /* struct cavm_pemrcx_msix_vecx_addr_s cn; */
};
typedef union cavm_pemrcx_msix_vecx_addr cavm_pemrcx_msix_vecx_addr_t;

static inline uint64_t CAVM_PEMRCX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMRCX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=5) && (b<=1)))
        return 0x8e0e00000000ll + 0x1000000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=5) && (b<=1)))
        return 0x8e0e00000000ll + 0x1000000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x8e0e00000000ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=1)))
        return 0x8e0e00000000ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x1);
    __cavm_csr_fatal("PEMRCX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMRCX_MSIX_VECX_ADDR(a,b) cavm_pemrcx_msix_vecx_addr_t
#define bustype_CAVM_PEMRCX_MSIX_VECX_ADDR(a,b) CSR_TYPE_NCB
#define basename_CAVM_PEMRCX_MSIX_VECX_ADDR(a,b) "PEMRCX_MSIX_VECX_ADDR"
#define device_bar_CAVM_PEMRCX_MSIX_VECX_ADDR(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMRCX_MSIX_VECX_ADDR(a,b) (a)
#define arguments_CAVM_PEMRCX_MSIX_VECX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (NCB) pemrc#_msix_vec#_ctl
 *
 * PEM RC MSI-X Vector Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the PEMRC_INT_VEC_E enumeration.
 */
union cavm_pemrcx_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_pemrcx_msix_vecx_ctl_s
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
    /* struct cavm_pemrcx_msix_vecx_ctl_s cn; */
};
typedef union cavm_pemrcx_msix_vecx_ctl cavm_pemrcx_msix_vecx_ctl_t;

static inline uint64_t CAVM_PEMRCX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMRCX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=5) && (b<=1)))
        return 0x8e0e00000008ll + 0x1000000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=5) && (b<=1)))
        return 0x8e0e00000008ll + 0x1000000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x8e0e00000008ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=1)))
        return 0x8e0e00000008ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x1);
    __cavm_csr_fatal("PEMRCX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMRCX_MSIX_VECX_CTL(a,b) cavm_pemrcx_msix_vecx_ctl_t
#define bustype_CAVM_PEMRCX_MSIX_VECX_CTL(a,b) CSR_TYPE_NCB
#define basename_CAVM_PEMRCX_MSIX_VECX_CTL(a,b) "PEMRCX_MSIX_VECX_CTL"
#define device_bar_CAVM_PEMRCX_MSIX_VECX_CTL(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMRCX_MSIX_VECX_CTL(a,b) (a)
#define arguments_CAVM_PEMRCX_MSIX_VECX_CTL(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_PEMRC_H__ */
