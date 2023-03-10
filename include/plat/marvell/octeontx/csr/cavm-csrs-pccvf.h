#ifndef __CAVM_CSRS_PCCVF_H__
#define __CAVM_CSRS_PCCVF_H__
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
 * OcteonTX PCCVF.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (PCCVF) pccvf_xxx_aer_cap_hdr
 *
 * PCC VF AER Capability Header Register
 * This register is the header of the 44-byte PCI advanced error reporting (AER) capability
 * structure.
 */
union cavm_pccvf_xxx_aer_cap_hdr
{
    uint32_t u;
    struct cavm_pccvf_xxx_aer_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO) Next capability offset. If this device is on a nonzero bus, points to
                                                                 PCCVF_XXX_ARI_CAP_HDR, else 0x0. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO) Capability version. */
        uint32_t aerid                 : 16; /**< [ 15:  0](RO) PCIE extended capability. Indicates AER capability. */
#else /* Word 0 - Little Endian */
        uint32_t aerid                 : 16; /**< [ 15:  0](RO) PCIE extended capability. Indicates AER capability. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO) Capability version. */
        uint32_t nco                   : 12; /**< [ 31: 20](RO) Next capability offset. If this device is on a nonzero bus, points to
                                                                 PCCVF_XXX_ARI_CAP_HDR, else 0x0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccvf_xxx_aer_cap_hdr_s cn; */
};
typedef union cavm_pccvf_xxx_aer_cap_hdr cavm_pccvf_xxx_aer_cap_hdr_t;

#define CAVM_PCCVF_XXX_AER_CAP_HDR CAVM_PCCVF_XXX_AER_CAP_HDR_FUNC()
static inline uint64_t CAVM_PCCVF_XXX_AER_CAP_HDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCVF_XXX_AER_CAP_HDR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x140;
    __cavm_csr_fatal("PCCVF_XXX_AER_CAP_HDR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCVF_XXX_AER_CAP_HDR cavm_pccvf_xxx_aer_cap_hdr_t
#define bustype_CAVM_PCCVF_XXX_AER_CAP_HDR CSR_TYPE_PCCVF
#define basename_CAVM_PCCVF_XXX_AER_CAP_HDR "PCCVF_XXX_AER_CAP_HDR"
#define busnum_CAVM_PCCVF_XXX_AER_CAP_HDR 0
#define arguments_CAVM_PCCVF_XXX_AER_CAP_HDR -1,-1,-1,-1

/**
 * Register (PCCVF) pccvf_xxx_aer_cor_mask
 *
 * PCC VF AER Correctable Error Mask Register
 * This register contains a mask bit for each nonreserved bit in PCCVF_XXX_AER_COR_STATUS.
 * The mask bits are R/W for PCIe and software compatibility but are not used by hardware.
 *
 * This register is reset on a chip domain reset.
 */
union cavm_pccvf_xxx_aer_cor_mask
{
    uint32_t u;
    struct cavm_pccvf_xxx_aer_cor_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_15_31        : 17;
        uint32_t cor_intn              : 1;  /**< [ 14: 14](R/W) Corrected internal error. */
        uint32_t reserved_0_13         : 14;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_13         : 14;
        uint32_t cor_intn              : 1;  /**< [ 14: 14](R/W) Corrected internal error. */
        uint32_t reserved_15_31        : 17;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccvf_xxx_aer_cor_mask_s cn; */
};
typedef union cavm_pccvf_xxx_aer_cor_mask cavm_pccvf_xxx_aer_cor_mask_t;

#define CAVM_PCCVF_XXX_AER_COR_MASK CAVM_PCCVF_XXX_AER_COR_MASK_FUNC()
static inline uint64_t CAVM_PCCVF_XXX_AER_COR_MASK_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCVF_XXX_AER_COR_MASK_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x154;
    __cavm_csr_fatal("PCCVF_XXX_AER_COR_MASK", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCVF_XXX_AER_COR_MASK cavm_pccvf_xxx_aer_cor_mask_t
#define bustype_CAVM_PCCVF_XXX_AER_COR_MASK CSR_TYPE_PCCVF
#define basename_CAVM_PCCVF_XXX_AER_COR_MASK "PCCVF_XXX_AER_COR_MASK"
#define busnum_CAVM_PCCVF_XXX_AER_COR_MASK 0
#define arguments_CAVM_PCCVF_XXX_AER_COR_MASK -1,-1,-1,-1

/**
 * Register (PCCVF) pccvf_xxx_aer_cor_status
 *
 * PCC VF AER Correctable Error Status Register
 * This register is reset on a chip domain reset.
 */
union cavm_pccvf_xxx_aer_cor_status
{
    uint32_t u;
    struct cavm_pccvf_xxx_aer_cor_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_15_31        : 17;
        uint32_t cor_intn              : 1;  /**< [ 14: 14](R/W1C/H) Corrected internal error. Set when one is written to PCCVF_XXX_VSEC_CTL[COR_INTN]. */
        uint32_t adv_nfat              : 1;  /**< [ 13: 13](R/W1C/H) Advisory non-fatal error. Set when one is written to PCCVF_XXX_VSEC_CTL[ADV_NFAT]. */
        uint32_t reserved_0_12         : 13;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_12         : 13;
        uint32_t adv_nfat              : 1;  /**< [ 13: 13](R/W1C/H) Advisory non-fatal error. Set when one is written to PCCVF_XXX_VSEC_CTL[ADV_NFAT]. */
        uint32_t cor_intn              : 1;  /**< [ 14: 14](R/W1C/H) Corrected internal error. Set when one is written to PCCVF_XXX_VSEC_CTL[COR_INTN]. */
        uint32_t reserved_15_31        : 17;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccvf_xxx_aer_cor_status_s cn; */
};
typedef union cavm_pccvf_xxx_aer_cor_status cavm_pccvf_xxx_aer_cor_status_t;

#define CAVM_PCCVF_XXX_AER_COR_STATUS CAVM_PCCVF_XXX_AER_COR_STATUS_FUNC()
static inline uint64_t CAVM_PCCVF_XXX_AER_COR_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCVF_XXX_AER_COR_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x150;
    __cavm_csr_fatal("PCCVF_XXX_AER_COR_STATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCVF_XXX_AER_COR_STATUS cavm_pccvf_xxx_aer_cor_status_t
#define bustype_CAVM_PCCVF_XXX_AER_COR_STATUS CSR_TYPE_PCCVF
#define basename_CAVM_PCCVF_XXX_AER_COR_STATUS "PCCVF_XXX_AER_COR_STATUS"
#define busnum_CAVM_PCCVF_XXX_AER_COR_STATUS 0
#define arguments_CAVM_PCCVF_XXX_AER_COR_STATUS -1,-1,-1,-1

/**
 * Register (PCCVF) pccvf_xxx_aer_uncor_mask
 *
 * PCC VF AER Uncorrectable Error Mask Register
 * This register contains a mask bit for each nonreserved bit in PCCVF_XXX_AER_UNCOR_STATUS.
 * The mask bits are R/W for PCIe and software compatibility but are not used by hardware.
 *
 * This register is reset on a chip domain reset.
 */
union cavm_pccvf_xxx_aer_uncor_mask
{
    uint32_t u;
    struct cavm_pccvf_xxx_aer_uncor_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_23_31        : 9;
        uint32_t uncor_intn            : 1;  /**< [ 22: 22](R/W) Uncorrectable internal error. */
        uint32_t reserved_0_21         : 22;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_21         : 22;
        uint32_t uncor_intn            : 1;  /**< [ 22: 22](R/W) Uncorrectable internal error. */
        uint32_t reserved_23_31        : 9;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccvf_xxx_aer_uncor_mask_s cn; */
};
typedef union cavm_pccvf_xxx_aer_uncor_mask cavm_pccvf_xxx_aer_uncor_mask_t;

#define CAVM_PCCVF_XXX_AER_UNCOR_MASK CAVM_PCCVF_XXX_AER_UNCOR_MASK_FUNC()
static inline uint64_t CAVM_PCCVF_XXX_AER_UNCOR_MASK_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCVF_XXX_AER_UNCOR_MASK_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x148;
    __cavm_csr_fatal("PCCVF_XXX_AER_UNCOR_MASK", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCVF_XXX_AER_UNCOR_MASK cavm_pccvf_xxx_aer_uncor_mask_t
#define bustype_CAVM_PCCVF_XXX_AER_UNCOR_MASK CSR_TYPE_PCCVF
#define basename_CAVM_PCCVF_XXX_AER_UNCOR_MASK "PCCVF_XXX_AER_UNCOR_MASK"
#define busnum_CAVM_PCCVF_XXX_AER_UNCOR_MASK 0
#define arguments_CAVM_PCCVF_XXX_AER_UNCOR_MASK -1,-1,-1,-1

/**
 * Register (PCCVF) pccvf_xxx_aer_uncor_sever
 *
 * PCC VF AER Uncorrectable Error Severity Register
 * This register controls whether an individual error is reported as a nonfatal or
 * fatal error. An error is reported as fatal when the corresponding severity bit is set, and
 * nonfatal otherwise.
 */
union cavm_pccvf_xxx_aer_uncor_sever
{
    uint32_t u;
    struct cavm_pccvf_xxx_aer_uncor_sever_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_23_31        : 9;
        uint32_t uncor_intn            : 1;  /**< [ 22: 22](R/W) Uncorrectable internal error. */
        uint32_t reserved_0_21         : 22;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_21         : 22;
        uint32_t uncor_intn            : 1;  /**< [ 22: 22](R/W) Uncorrectable internal error. */
        uint32_t reserved_23_31        : 9;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccvf_xxx_aer_uncor_sever_s cn; */
};
typedef union cavm_pccvf_xxx_aer_uncor_sever cavm_pccvf_xxx_aer_uncor_sever_t;

#define CAVM_PCCVF_XXX_AER_UNCOR_SEVER CAVM_PCCVF_XXX_AER_UNCOR_SEVER_FUNC()
static inline uint64_t CAVM_PCCVF_XXX_AER_UNCOR_SEVER_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCVF_XXX_AER_UNCOR_SEVER_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x14c;
    __cavm_csr_fatal("PCCVF_XXX_AER_UNCOR_SEVER", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCVF_XXX_AER_UNCOR_SEVER cavm_pccvf_xxx_aer_uncor_sever_t
#define bustype_CAVM_PCCVF_XXX_AER_UNCOR_SEVER CSR_TYPE_PCCVF
#define basename_CAVM_PCCVF_XXX_AER_UNCOR_SEVER "PCCVF_XXX_AER_UNCOR_SEVER"
#define busnum_CAVM_PCCVF_XXX_AER_UNCOR_SEVER 0
#define arguments_CAVM_PCCVF_XXX_AER_UNCOR_SEVER -1,-1,-1,-1

/**
 * Register (PCCVF) pccvf_xxx_aer_uncor_status
 *
 * PCC VF AER Uncorrectable Error Status Register
 * This register is reset on a chip domain reset.
 */
union cavm_pccvf_xxx_aer_uncor_status
{
    uint32_t u;
    struct cavm_pccvf_xxx_aer_uncor_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_23_31        : 9;
        uint32_t uncor_intn            : 1;  /**< [ 22: 22](R/W1C/H) Uncorrectable internal error. Set when one is written to PCCVF_XXX_VSEC_CTL[UNCOR_INTN]. */
        uint32_t reserved_21           : 1;
        uint32_t unsup                 : 1;  /**< [ 20: 20](RO) Unsupported request error. Always zero. */
        uint32_t reserved_17_19        : 3;
        uint32_t unx_comp              : 1;  /**< [ 16: 16](RO) Unexpected completion. Always zero. */
        uint32_t reserved_15           : 1;
        uint32_t comp_time             : 1;  /**< [ 14: 14](RO) Completion timeout. Always zero. */
        uint32_t reserved_13           : 1;
        uint32_t poison_tlp            : 1;  /**< [ 12: 12](R/W1C/H) Poisoned TLP received. Set when one is written to PCCVF_XXX_VSEC_CTL[POISON_TLP]. */
        uint32_t reserved_0_11         : 12;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_11         : 12;
        uint32_t poison_tlp            : 1;  /**< [ 12: 12](R/W1C/H) Poisoned TLP received. Set when one is written to PCCVF_XXX_VSEC_CTL[POISON_TLP]. */
        uint32_t reserved_13           : 1;
        uint32_t comp_time             : 1;  /**< [ 14: 14](RO) Completion timeout. Always zero. */
        uint32_t reserved_15           : 1;
        uint32_t unx_comp              : 1;  /**< [ 16: 16](RO) Unexpected completion. Always zero. */
        uint32_t reserved_17_19        : 3;
        uint32_t unsup                 : 1;  /**< [ 20: 20](RO) Unsupported request error. Always zero. */
        uint32_t reserved_21           : 1;
        uint32_t uncor_intn            : 1;  /**< [ 22: 22](R/W1C/H) Uncorrectable internal error. Set when one is written to PCCVF_XXX_VSEC_CTL[UNCOR_INTN]. */
        uint32_t reserved_23_31        : 9;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccvf_xxx_aer_uncor_status_s cn; */
};
typedef union cavm_pccvf_xxx_aer_uncor_status cavm_pccvf_xxx_aer_uncor_status_t;

#define CAVM_PCCVF_XXX_AER_UNCOR_STATUS CAVM_PCCVF_XXX_AER_UNCOR_STATUS_FUNC()
static inline uint64_t CAVM_PCCVF_XXX_AER_UNCOR_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCVF_XXX_AER_UNCOR_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x144;
    __cavm_csr_fatal("PCCVF_XXX_AER_UNCOR_STATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCVF_XXX_AER_UNCOR_STATUS cavm_pccvf_xxx_aer_uncor_status_t
#define bustype_CAVM_PCCVF_XXX_AER_UNCOR_STATUS CSR_TYPE_PCCVF
#define basename_CAVM_PCCVF_XXX_AER_UNCOR_STATUS "PCCVF_XXX_AER_UNCOR_STATUS"
#define busnum_CAVM_PCCVF_XXX_AER_UNCOR_STATUS 0
#define arguments_CAVM_PCCVF_XXX_AER_UNCOR_STATUS -1,-1,-1,-1

/**
 * Register (PCCVF) pccvf_xxx_ari_cap_hdr
 *
 * PCC VF ARI Capability Header Register
 * This register is the header of the eight-byte PCI ARI capability structure.
 */
union cavm_pccvf_xxx_ari_cap_hdr
{
    uint32_t u;
    struct cavm_pccvf_xxx_ari_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO) Next capability offset. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO) Capability version. */
        uint32_t ariid                 : 16; /**< [ 15:  0](RO) PCIE extended capability. */
#else /* Word 0 - Little Endian */
        uint32_t ariid                 : 16; /**< [ 15:  0](RO) PCIE extended capability. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO) Capability version. */
        uint32_t nco                   : 12; /**< [ 31: 20](RO) Next capability offset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccvf_xxx_ari_cap_hdr_s cn; */
};
typedef union cavm_pccvf_xxx_ari_cap_hdr cavm_pccvf_xxx_ari_cap_hdr_t;

#define CAVM_PCCVF_XXX_ARI_CAP_HDR CAVM_PCCVF_XXX_ARI_CAP_HDR_FUNC()
static inline uint64_t CAVM_PCCVF_XXX_ARI_CAP_HDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCVF_XXX_ARI_CAP_HDR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x100;
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x170;
    __cavm_csr_fatal("PCCVF_XXX_ARI_CAP_HDR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCVF_XXX_ARI_CAP_HDR cavm_pccvf_xxx_ari_cap_hdr_t
#define bustype_CAVM_PCCVF_XXX_ARI_CAP_HDR CSR_TYPE_PCCVF
#define basename_CAVM_PCCVF_XXX_ARI_CAP_HDR "PCCVF_XXX_ARI_CAP_HDR"
#define busnum_CAVM_PCCVF_XXX_ARI_CAP_HDR 0
#define arguments_CAVM_PCCVF_XXX_ARI_CAP_HDR -1,-1,-1,-1

/**
 * Register (PCCVF) pccvf_xxx_cap_ptr
 *
 * PCC VF Capability Pointer Register
 */
union cavm_pccvf_xxx_cap_ptr
{
    uint32_t u;
    struct cavm_pccvf_xxx_cap_ptr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t cp                    : 8;  /**< [  7:  0](RO) First capability pointer. Points to PCCVF_XXX_E_CAP_HDR. */
#else /* Word 0 - Little Endian */
        uint32_t cp                    : 8;  /**< [  7:  0](RO) First capability pointer. Points to PCCVF_XXX_E_CAP_HDR. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccvf_xxx_cap_ptr_s cn; */
};
typedef union cavm_pccvf_xxx_cap_ptr cavm_pccvf_xxx_cap_ptr_t;

#define CAVM_PCCVF_XXX_CAP_PTR CAVM_PCCVF_XXX_CAP_PTR_FUNC()
static inline uint64_t CAVM_PCCVF_XXX_CAP_PTR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCVF_XXX_CAP_PTR_FUNC(void)
{
    return 0x34;
}

#define typedef_CAVM_PCCVF_XXX_CAP_PTR cavm_pccvf_xxx_cap_ptr_t
#define bustype_CAVM_PCCVF_XXX_CAP_PTR CSR_TYPE_PCCVF
#define basename_CAVM_PCCVF_XXX_CAP_PTR "PCCVF_XXX_CAP_PTR"
#define busnum_CAVM_PCCVF_XXX_CAP_PTR 0
#define arguments_CAVM_PCCVF_XXX_CAP_PTR -1,-1,-1,-1

/**
 * Register (PCCVF) pccvf_xxx_cmd
 *
 * PCC VF Command/Status Register
 * This register is reset on a block domain reset or VF function level reset.
 */
union cavm_pccvf_xxx_cmd
{
    uint32_t u;
    struct cavm_pccvf_xxx_cmd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_21_31        : 11;
        uint32_t cl                    : 1;  /**< [ 20: 20](RO) Capabilities list. Indicates presence of an extended capability item. */
        uint32_t reserved_3_19         : 17;
        uint32_t me                    : 1;  /**< [  2:  2](RO) Master enable. */
        uint32_t msae                  : 1;  /**< [  1:  1](RO) Memory-space access enable. For SR-IOV VFs always zero. */
        uint32_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0            : 1;
        uint32_t msae                  : 1;  /**< [  1:  1](RO) Memory-space access enable. For SR-IOV VFs always zero. */
        uint32_t me                    : 1;  /**< [  2:  2](RO) Master enable. */
        uint32_t reserved_3_19         : 17;
        uint32_t cl                    : 1;  /**< [ 20: 20](RO) Capabilities list. Indicates presence of an extended capability item. */
        uint32_t reserved_21_31        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccvf_xxx_cmd_s cn8; */
    struct cavm_pccvf_xxx_cmd_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_21_31        : 11;
        uint32_t cl                    : 1;  /**< [ 20: 20](RO) Capabilities list. Indicates presence of an extended capability item. */
        uint32_t reserved_3_19         : 17;
        uint32_t me                    : 1;  /**< [  2:  2](R/W) Bus master enable. If set, function may initiate upstream DMA or MSI-X
                                                                 transactions.

                                                                 If PCCVF_XXX_E_DEV_CAP[FLR] is read-only zero, always set and writes have no
                                                                 effect. Resets to 0 and writable otherwise. */
        uint32_t msae                  : 1;  /**< [  1:  1](RO) Memory-space access enable. For SR-IOV VFs always zero. */
        uint32_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0            : 1;
        uint32_t msae                  : 1;  /**< [  1:  1](RO) Memory-space access enable. For SR-IOV VFs always zero. */
        uint32_t me                    : 1;  /**< [  2:  2](R/W) Bus master enable. If set, function may initiate upstream DMA or MSI-X
                                                                 transactions.

                                                                 If PCCVF_XXX_E_DEV_CAP[FLR] is read-only zero, always set and writes have no
                                                                 effect. Resets to 0 and writable otherwise. */
        uint32_t reserved_3_19         : 17;
        uint32_t cl                    : 1;  /**< [ 20: 20](RO) Capabilities list. Indicates presence of an extended capability item. */
        uint32_t reserved_21_31        : 11;
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccvf_xxx_cmd cavm_pccvf_xxx_cmd_t;

#define CAVM_PCCVF_XXX_CMD CAVM_PCCVF_XXX_CMD_FUNC()
static inline uint64_t CAVM_PCCVF_XXX_CMD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCVF_XXX_CMD_FUNC(void)
{
    return 4;
}

#define typedef_CAVM_PCCVF_XXX_CMD cavm_pccvf_xxx_cmd_t
#define bustype_CAVM_PCCVF_XXX_CMD CSR_TYPE_PCCVF
#define basename_CAVM_PCCVF_XXX_CMD "PCCVF_XXX_CMD"
#define busnum_CAVM_PCCVF_XXX_CMD 0
#define arguments_CAVM_PCCVF_XXX_CMD -1,-1,-1,-1

/**
 * Register (PCCVF) pccvf_xxx_e_cap_hdr
 *
 * PCC VF PCI Express Capabilities Register
 * This register is the header of the 64-byte PCIe capability header.
 */
union cavm_pccvf_xxx_e_cap_hdr
{
    uint32_t u;
    struct cavm_pccvf_xxx_e_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_20_31        : 12;
        uint32_t pciecv                : 4;  /**< [ 19: 16](RO) PCIe capability version. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO) Next capability pointer. If VF MSI-X is supported, points to
                                                                 PCCVF_XXX_MSIX_CAP_HDR (0xB0), else 0x0. */
        uint32_t pcieid                : 8;  /**< [  7:  0](RO) PCIe capability ID. */
#else /* Word 0 - Little Endian */
        uint32_t pcieid                : 8;  /**< [  7:  0](RO) PCIe capability ID. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO) Next capability pointer. If VF MSI-X is supported, points to
                                                                 PCCVF_XXX_MSIX_CAP_HDR (0xB0), else 0x0. */
        uint32_t pciecv                : 4;  /**< [ 19: 16](RO) PCIe capability version. */
        uint32_t reserved_20_31        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccvf_xxx_e_cap_hdr_s cn; */
};
typedef union cavm_pccvf_xxx_e_cap_hdr cavm_pccvf_xxx_e_cap_hdr_t;

#define CAVM_PCCVF_XXX_E_CAP_HDR CAVM_PCCVF_XXX_E_CAP_HDR_FUNC()
static inline uint64_t CAVM_PCCVF_XXX_E_CAP_HDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCVF_XXX_E_CAP_HDR_FUNC(void)
{
    return 0x70;
}

#define typedef_CAVM_PCCVF_XXX_E_CAP_HDR cavm_pccvf_xxx_e_cap_hdr_t
#define bustype_CAVM_PCCVF_XXX_E_CAP_HDR CSR_TYPE_PCCVF
#define basename_CAVM_PCCVF_XXX_E_CAP_HDR "PCCVF_XXX_E_CAP_HDR"
#define busnum_CAVM_PCCVF_XXX_E_CAP_HDR 0
#define arguments_CAVM_PCCVF_XXX_E_CAP_HDR -1,-1,-1,-1

/**
 * Register (PCCVF) pccvf_xxx_e_dev_cap
 *
 * PCC VF PCI Express Device Capabilities Register
 */
union cavm_pccvf_xxx_e_dev_cap
{
    uint32_t u;
    struct cavm_pccvf_xxx_e_dev_cap_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_29_31        : 3;
        uint32_t flr                   : 1;  /**< [ 28: 28](RO) Function level reset capability. If set, PCCVF_XXX_E_DEV_CTL[BCR_FLR] is
                                                                 implemented.

                                                                 In CNXXXX:
                                                                   0 = PCCVF_XXX_E_DEV_CTL[BCR_FLR] is ignored, PCCVF_XXX_E_DEV_CTL[TRPEND] is
                                                                   always zero, and PCCVF_XXX_CMD[ME] is always set.

                                                                   1 = PCCVF_XXX_E_DEV_CTL[BCR_FLR], PCCVF_XXX_E_DEV_CTL[TRPEND], and
                                                                   PCCVF_XXX_CMD[ME] are functional. */
        uint32_t reserved_16_27        : 12;
        uint32_t rber                  : 1;  /**< [ 15: 15](RO) Role-based error reporting. Required to be set by PCIe 3.1. */
        uint32_t reserved_0_14         : 15;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_14         : 15;
        uint32_t rber                  : 1;  /**< [ 15: 15](RO) Role-based error reporting. Required to be set by PCIe 3.1. */
        uint32_t reserved_16_27        : 12;
        uint32_t flr                   : 1;  /**< [ 28: 28](RO) Function level reset capability. If set, PCCVF_XXX_E_DEV_CTL[BCR_FLR] is
                                                                 implemented.

                                                                 In CNXXXX:
                                                                   0 = PCCVF_XXX_E_DEV_CTL[BCR_FLR] is ignored, PCCVF_XXX_E_DEV_CTL[TRPEND] is
                                                                   always zero, and PCCVF_XXX_CMD[ME] is always set.

                                                                   1 = PCCVF_XXX_E_DEV_CTL[BCR_FLR], PCCVF_XXX_E_DEV_CTL[TRPEND], and
                                                                   PCCVF_XXX_CMD[ME] are functional. */
        uint32_t reserved_29_31        : 3;
#endif /* Word 0 - End */
    } s;
    struct cavm_pccvf_xxx_e_dev_cap_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t rber                  : 1;  /**< [ 15: 15](RO) Role-based error reporting. Required to be set by PCIe 3.1. */
        uint32_t reserved_0_14         : 15;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_14         : 15;
        uint32_t rber                  : 1;  /**< [ 15: 15](RO) Role-based error reporting. Required to be set by PCIe 3.1. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } cn8;
    /* struct cavm_pccvf_xxx_e_dev_cap_s cn9; */
};
typedef union cavm_pccvf_xxx_e_dev_cap cavm_pccvf_xxx_e_dev_cap_t;

#define CAVM_PCCVF_XXX_E_DEV_CAP CAVM_PCCVF_XXX_E_DEV_CAP_FUNC()
static inline uint64_t CAVM_PCCVF_XXX_E_DEV_CAP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCVF_XXX_E_DEV_CAP_FUNC(void)
{
    return 0x74;
}

#define typedef_CAVM_PCCVF_XXX_E_DEV_CAP cavm_pccvf_xxx_e_dev_cap_t
#define bustype_CAVM_PCCVF_XXX_E_DEV_CAP CSR_TYPE_PCCVF
#define basename_CAVM_PCCVF_XXX_E_DEV_CAP "PCCVF_XXX_E_DEV_CAP"
#define busnum_CAVM_PCCVF_XXX_E_DEV_CAP 0
#define arguments_CAVM_PCCVF_XXX_E_DEV_CAP -1,-1,-1,-1

/**
 * Register (PCCVF) pccvf_xxx_e_dev_ctl
 *
 * PCC VF PCI Express Device Control and Status Register
 * This register is reset on a block domain reset or VF function level reset.
 */
union cavm_pccvf_xxx_e_dev_ctl
{
    uint32_t u;
    struct cavm_pccvf_xxx_e_dev_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_22_31        : 10;
        uint32_t trpend                : 1;  /**< [ 21: 21](RO/H) Transactions pending. If PCCVF_XXX_E_DEV_CAP[FLR] is clear, always zero. */
        uint32_t reserved_20           : 1;
        uint32_t urd                   : 1;  /**< [ 19: 19](RO) Unsupported request detected. Always zero. */
        uint32_t fed                   : 1;  /**< [ 18: 18](R/W1C/H) Fatal error detected. Set when any bit in PCCVF_XXX_AER_UNCOR_STATUS transitions
                                                                 to one while the corresponding bit in PCCVF_XXX_AER_UNCOR_SEVER is set. */
        uint32_t nfed                  : 1;  /**< [ 17: 17](R/W1C/H) Non-fatal error detected. Set when any bit in PCCVF_XXX_AER_UNCOR_STATUS
                                                                 transitions to one while the corresponding bit in PCCVF_XXX_AER_UNCOR_SEVER is
                                                                 clear. */
        uint32_t ced                   : 1;  /**< [ 16: 16](R/W1C/H) Correctable error detected. Set when any bit in PCCVF_XXX_AER_COR_STATUS transitions to one. */
        uint32_t bcr_flr               : 1;  /**< [ 15: 15](R/W1S/H) Initiate function level reset. Writing a one to this bit initiates function level
                                                                 reset if PCCVF_XXX_E_DEV_CAP[FLR] is set, else writes have no effect. This is a
                                                                 self-clearing bit and always reads as zero. */
        uint32_t reserved_0_14         : 15;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_14         : 15;
        uint32_t bcr_flr               : 1;  /**< [ 15: 15](R/W1S/H) Initiate function level reset. Writing a one to this bit initiates function level
                                                                 reset if PCCVF_XXX_E_DEV_CAP[FLR] is set, else writes have no effect. This is a
                                                                 self-clearing bit and always reads as zero. */
        uint32_t ced                   : 1;  /**< [ 16: 16](R/W1C/H) Correctable error detected. Set when any bit in PCCVF_XXX_AER_COR_STATUS transitions to one. */
        uint32_t nfed                  : 1;  /**< [ 17: 17](R/W1C/H) Non-fatal error detected. Set when any bit in PCCVF_XXX_AER_UNCOR_STATUS
                                                                 transitions to one while the corresponding bit in PCCVF_XXX_AER_UNCOR_SEVER is
                                                                 clear. */
        uint32_t fed                   : 1;  /**< [ 18: 18](R/W1C/H) Fatal error detected. Set when any bit in PCCVF_XXX_AER_UNCOR_STATUS transitions
                                                                 to one while the corresponding bit in PCCVF_XXX_AER_UNCOR_SEVER is set. */
        uint32_t urd                   : 1;  /**< [ 19: 19](RO) Unsupported request detected. Always zero. */
        uint32_t reserved_20           : 1;
        uint32_t trpend                : 1;  /**< [ 21: 21](RO/H) Transactions pending. If PCCVF_XXX_E_DEV_CAP[FLR] is clear, always zero. */
        uint32_t reserved_22_31        : 10;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccvf_xxx_e_dev_ctl_s cn; */
};
typedef union cavm_pccvf_xxx_e_dev_ctl cavm_pccvf_xxx_e_dev_ctl_t;

#define CAVM_PCCVF_XXX_E_DEV_CTL CAVM_PCCVF_XXX_E_DEV_CTL_FUNC()
static inline uint64_t CAVM_PCCVF_XXX_E_DEV_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCVF_XXX_E_DEV_CTL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x78;
    __cavm_csr_fatal("PCCVF_XXX_E_DEV_CTL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCVF_XXX_E_DEV_CTL cavm_pccvf_xxx_e_dev_ctl_t
#define bustype_CAVM_PCCVF_XXX_E_DEV_CTL CSR_TYPE_PCCVF
#define basename_CAVM_PCCVF_XXX_E_DEV_CTL "PCCVF_XXX_E_DEV_CTL"
#define busnum_CAVM_PCCVF_XXX_E_DEV_CTL 0
#define arguments_CAVM_PCCVF_XXX_E_DEV_CTL -1,-1,-1,-1

/**
 * Register (PCCVF) pccvf_xxx_id
 *
 * PCC VF Vendor and Device Register
 * This register is the header of the 64-byte PCI type 0 configuration structure.
 */
union cavm_pccvf_xxx_id
{
    uint32_t u;
    struct cavm_pccvf_xxx_id_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t devid                 : 16; /**< [ 31: 16](RO) Device ID. For SR-IOV VFs always 0xFFFF. */
        uint32_t vendid                : 16; /**< [ 15:  0](RO) Vendor ID. For SR-IOV VFs always 0xFFFF. */
#else /* Word 0 - Little Endian */
        uint32_t vendid                : 16; /**< [ 15:  0](RO) Vendor ID. For SR-IOV VFs always 0xFFFF. */
        uint32_t devid                 : 16; /**< [ 31: 16](RO) Device ID. For SR-IOV VFs always 0xFFFF. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccvf_xxx_id_s cn; */
};
typedef union cavm_pccvf_xxx_id cavm_pccvf_xxx_id_t;

#define CAVM_PCCVF_XXX_ID CAVM_PCCVF_XXX_ID_FUNC()
static inline uint64_t CAVM_PCCVF_XXX_ID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCVF_XXX_ID_FUNC(void)
{
    return 0;
}

#define typedef_CAVM_PCCVF_XXX_ID cavm_pccvf_xxx_id_t
#define bustype_CAVM_PCCVF_XXX_ID CSR_TYPE_PCCVF
#define basename_CAVM_PCCVF_XXX_ID "PCCVF_XXX_ID"
#define busnum_CAVM_PCCVF_XXX_ID 0
#define arguments_CAVM_PCCVF_XXX_ID -1,-1,-1,-1

/**
 * Register (PCCVF) pccvf_xxx_msix_cap_hdr
 *
 * PCC VF MSI-X Capability Register
 * This register is the header of the 24-byte PCI MSI-X capability structure.
 *
 * This register is reset on a block domain reset or VF function level reset.
 */
union cavm_pccvf_xxx_msix_cap_hdr
{
    uint32_t u;
    struct cavm_pccvf_xxx_msix_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msixen                : 1;  /**< [ 31: 31](R/W) MSI-X enable. If MSI-X is enabled, MSI and INTx must be disabled. */
        uint32_t funm                  : 1;  /**< [ 30: 30](R/W) Function mask.
                                                                 0 = Each vectors mask bit determines whether the vector is masked or not.
                                                                 1 = All vectors associated with the function are masked, regardless of their respective
                                                                 per-vector mask bits. */
        uint32_t reserved_27_29        : 3;
        uint32_t msixts                : 11; /**< [ 26: 16](RO) MSI-X table size encoded as (table size - 1). */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO) Next capability pointer. */
        uint32_t msixcid               : 8;  /**< [  7:  0](RO) MSI-X capability ID. */
#else /* Word 0 - Little Endian */
        uint32_t msixcid               : 8;  /**< [  7:  0](RO) MSI-X capability ID. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO) Next capability pointer. */
        uint32_t msixts                : 11; /**< [ 26: 16](RO) MSI-X table size encoded as (table size - 1). */
        uint32_t reserved_27_29        : 3;
        uint32_t funm                  : 1;  /**< [ 30: 30](R/W) Function mask.
                                                                 0 = Each vectors mask bit determines whether the vector is masked or not.
                                                                 1 = All vectors associated with the function are masked, regardless of their respective
                                                                 per-vector mask bits. */
        uint32_t msixen                : 1;  /**< [ 31: 31](R/W) MSI-X enable. If MSI-X is enabled, MSI and INTx must be disabled. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccvf_xxx_msix_cap_hdr_s cn8; */
    struct cavm_pccvf_xxx_msix_cap_hdr_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msixen                : 1;  /**< [ 31: 31](R/W) MSI-X enable.
                                                                 0 = The MSI-X PBAs corresponding to this function are cleared. Interrupt messages
                                                                 will not be issued.
                                                                 1 = Normal PBA and MSI-X delivery. See also PCCVF_XXX_CMD[ME]. */
        uint32_t funm                  : 1;  /**< [ 30: 30](R/W) Function mask.
                                                                 0 = Each vectors mask bit determines whether the vector is masked or not.
                                                                 1 = All vectors associated with the function are masked, regardless of their respective
                                                                 per-vector mask bits.

                                                                 Setting or clearing [FUNM] has no effect on the state of the per-vector mask bits. */
        uint32_t reserved_27_29        : 3;
        uint32_t msixts                : 11; /**< [ 26: 16](RO/H) MSI-X table size encoded as (table size - 1). */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO) Next capability pointer. */
        uint32_t msixcid               : 8;  /**< [  7:  0](RO) MSI-X capability ID. */
#else /* Word 0 - Little Endian */
        uint32_t msixcid               : 8;  /**< [  7:  0](RO) MSI-X capability ID. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO) Next capability pointer. */
        uint32_t msixts                : 11; /**< [ 26: 16](RO/H) MSI-X table size encoded as (table size - 1). */
        uint32_t reserved_27_29        : 3;
        uint32_t funm                  : 1;  /**< [ 30: 30](R/W) Function mask.
                                                                 0 = Each vectors mask bit determines whether the vector is masked or not.
                                                                 1 = All vectors associated with the function are masked, regardless of their respective
                                                                 per-vector mask bits.

                                                                 Setting or clearing [FUNM] has no effect on the state of the per-vector mask bits. */
        uint32_t msixen                : 1;  /**< [ 31: 31](R/W) MSI-X enable.
                                                                 0 = The MSI-X PBAs corresponding to this function are cleared. Interrupt messages
                                                                 will not be issued.
                                                                 1 = Normal PBA and MSI-X delivery. See also PCCVF_XXX_CMD[ME]. */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccvf_xxx_msix_cap_hdr cavm_pccvf_xxx_msix_cap_hdr_t;

#define CAVM_PCCVF_XXX_MSIX_CAP_HDR CAVM_PCCVF_XXX_MSIX_CAP_HDR_FUNC()
static inline uint64_t CAVM_PCCVF_XXX_MSIX_CAP_HDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCVF_XXX_MSIX_CAP_HDR_FUNC(void)
{
    return 0xb0;
}

#define typedef_CAVM_PCCVF_XXX_MSIX_CAP_HDR cavm_pccvf_xxx_msix_cap_hdr_t
#define bustype_CAVM_PCCVF_XXX_MSIX_CAP_HDR CSR_TYPE_PCCVF
#define basename_CAVM_PCCVF_XXX_MSIX_CAP_HDR "PCCVF_XXX_MSIX_CAP_HDR"
#define busnum_CAVM_PCCVF_XXX_MSIX_CAP_HDR 0
#define arguments_CAVM_PCCVF_XXX_MSIX_CAP_HDR -1,-1,-1,-1

/**
 * Register (PCCVF) pccvf_xxx_msix_pba
 *
 * PCC VF MSI-X PBA Offset and BIR Register
 */
union cavm_pccvf_xxx_msix_pba
{
    uint32_t u;
    struct cavm_pccvf_xxx_msix_pba_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msixpoffs             : 29; /**< [ 31:  3](RO) MSI-X PBA offset register. Offset of the MSI-X PBA, as a number of eight-byte words from
                                                                 the base address of the BAR; e.g. 0x1E000 corresponds to a byte offset of 0xF0000. */
        uint32_t msixpbir              : 3;  /**< [  2:  0](RO) MSI-X PBA BAR indicator register (BIR). Indicates which BAR is used to map the MSI-X
                                                                 pending bit array into memory space. As BARs are 64-bits, 0x4 indicates BAR4H/L. */
#else /* Word 0 - Little Endian */
        uint32_t msixpbir              : 3;  /**< [  2:  0](RO) MSI-X PBA BAR indicator register (BIR). Indicates which BAR is used to map the MSI-X
                                                                 pending bit array into memory space. As BARs are 64-bits, 0x4 indicates BAR4H/L. */
        uint32_t msixpoffs             : 29; /**< [ 31:  3](RO) MSI-X PBA offset register. Offset of the MSI-X PBA, as a number of eight-byte words from
                                                                 the base address of the BAR; e.g. 0x1E000 corresponds to a byte offset of 0xF0000. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccvf_xxx_msix_pba_s cn; */
};
typedef union cavm_pccvf_xxx_msix_pba cavm_pccvf_xxx_msix_pba_t;

#define CAVM_PCCVF_XXX_MSIX_PBA CAVM_PCCVF_XXX_MSIX_PBA_FUNC()
static inline uint64_t CAVM_PCCVF_XXX_MSIX_PBA_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCVF_XXX_MSIX_PBA_FUNC(void)
{
    return 0xb8;
}

#define typedef_CAVM_PCCVF_XXX_MSIX_PBA cavm_pccvf_xxx_msix_pba_t
#define bustype_CAVM_PCCVF_XXX_MSIX_PBA CSR_TYPE_PCCVF
#define basename_CAVM_PCCVF_XXX_MSIX_PBA "PCCVF_XXX_MSIX_PBA"
#define busnum_CAVM_PCCVF_XXX_MSIX_PBA 0
#define arguments_CAVM_PCCVF_XXX_MSIX_PBA -1,-1,-1,-1

/**
 * Register (PCCVF) pccvf_xxx_msix_table
 *
 * PCC VF MSI-X Table Offset and BIR Register
 */
union cavm_pccvf_xxx_msix_table
{
    uint32_t u;
    struct cavm_pccvf_xxx_msix_table_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msixtoffs             : 29; /**< [ 31:  3](RO) MSI-X table offset register. Offset of the MSI-X table, as a number of eight-byte
                                                                 words from the base address of the BAR. */
        uint32_t msixtbir              : 3;  /**< [  2:  0](RO) MSI-X table BAR indicator register (BIR). Indicates which BAR is used to map the MSI-X
                                                                 table into memory space. As BARs are 64-bits, 0x4 indicates BAR4H/L. */
#else /* Word 0 - Little Endian */
        uint32_t msixtbir              : 3;  /**< [  2:  0](RO) MSI-X table BAR indicator register (BIR). Indicates which BAR is used to map the MSI-X
                                                                 table into memory space. As BARs are 64-bits, 0x4 indicates BAR4H/L. */
        uint32_t msixtoffs             : 29; /**< [ 31:  3](RO) MSI-X table offset register. Offset of the MSI-X table, as a number of eight-byte
                                                                 words from the base address of the BAR. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccvf_xxx_msix_table_s cn8; */
    struct cavm_pccvf_xxx_msix_table_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msixtoffs             : 29; /**< [ 31:  3](RO) MSI-X table offset register. Offset of the MSI-X table, as a number of eight-byte
                                                                 words from the base address of the BAR. For most blocks, zero. */
        uint32_t msixtbir              : 3;  /**< [  2:  0](RO) MSI-X table BAR indicator register (BIR). Indicates which BAR is used to map the MSI-X
                                                                 table into memory space. For most blocks, 0x4, indicating BAR4H/L. */
#else /* Word 0 - Little Endian */
        uint32_t msixtbir              : 3;  /**< [  2:  0](RO) MSI-X table BAR indicator register (BIR). Indicates which BAR is used to map the MSI-X
                                                                 table into memory space. For most blocks, 0x4, indicating BAR4H/L. */
        uint32_t msixtoffs             : 29; /**< [ 31:  3](RO) MSI-X table offset register. Offset of the MSI-X table, as a number of eight-byte
                                                                 words from the base address of the BAR. For most blocks, zero. */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccvf_xxx_msix_table cavm_pccvf_xxx_msix_table_t;

#define CAVM_PCCVF_XXX_MSIX_TABLE CAVM_PCCVF_XXX_MSIX_TABLE_FUNC()
static inline uint64_t CAVM_PCCVF_XXX_MSIX_TABLE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCVF_XXX_MSIX_TABLE_FUNC(void)
{
    return 0xb4;
}

#define typedef_CAVM_PCCVF_XXX_MSIX_TABLE cavm_pccvf_xxx_msix_table_t
#define bustype_CAVM_PCCVF_XXX_MSIX_TABLE CSR_TYPE_PCCVF
#define basename_CAVM_PCCVF_XXX_MSIX_TABLE "PCCVF_XXX_MSIX_TABLE"
#define busnum_CAVM_PCCVF_XXX_MSIX_TABLE 0
#define arguments_CAVM_PCCVF_XXX_MSIX_TABLE -1,-1,-1,-1

/**
 * Register (PCCVF) pccvf_xxx_rev
 *
 * PCC VF Class Code/Revision ID Register
 */
union cavm_pccvf_xxx_rev
{
    uint32_t u;
    struct cavm_pccvf_xxx_rev_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bcc                   : 8;  /**< [ 31: 24](RO) Base-class code. See PCC_DEV_IDL_E. */
        uint32_t sc                    : 8;  /**< [ 23: 16](RO) Subclass code. See PCC_DEV_IDL_E. */
        uint32_t pi                    : 8;  /**< [ 15:  8](RO) Programming interface. See PCC_DEV_IDL_E. */
        uint32_t rid                   : 8;  /**< [  7:  0](RO/H) Revision ID. Read only version of PCCPF_XXX_VSEC_SCTL[RID]. */
#else /* Word 0 - Little Endian */
        uint32_t rid                   : 8;  /**< [  7:  0](RO/H) Revision ID. Read only version of PCCPF_XXX_VSEC_SCTL[RID]. */
        uint32_t pi                    : 8;  /**< [ 15:  8](RO) Programming interface. See PCC_DEV_IDL_E. */
        uint32_t sc                    : 8;  /**< [ 23: 16](RO) Subclass code. See PCC_DEV_IDL_E. */
        uint32_t bcc                   : 8;  /**< [ 31: 24](RO) Base-class code. See PCC_DEV_IDL_E. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccvf_xxx_rev_s cn8; */
    struct cavm_pccvf_xxx_rev_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bcc                   : 8;  /**< [ 31: 24](RO/H) Base-class code. See PCC_DEV_IDL_E. */
        uint32_t sc                    : 8;  /**< [ 23: 16](RO/H) Subclass code. See PCC_DEV_IDL_E. */
        uint32_t pi                    : 8;  /**< [ 15:  8](RO/H) Programming interface. See PCC_DEV_IDL_E. */
        uint32_t rid                   : 8;  /**< [  7:  0](RO/H) Revision ID. Read only version of PCCPF_XXX_VSEC_SCTL[RID]. */
#else /* Word 0 - Little Endian */
        uint32_t rid                   : 8;  /**< [  7:  0](RO/H) Revision ID. Read only version of PCCPF_XXX_VSEC_SCTL[RID]. */
        uint32_t pi                    : 8;  /**< [ 15:  8](RO/H) Programming interface. See PCC_DEV_IDL_E. */
        uint32_t sc                    : 8;  /**< [ 23: 16](RO/H) Subclass code. See PCC_DEV_IDL_E. */
        uint32_t bcc                   : 8;  /**< [ 31: 24](RO/H) Base-class code. See PCC_DEV_IDL_E. */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccvf_xxx_rev cavm_pccvf_xxx_rev_t;

#define CAVM_PCCVF_XXX_REV CAVM_PCCVF_XXX_REV_FUNC()
static inline uint64_t CAVM_PCCVF_XXX_REV_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCVF_XXX_REV_FUNC(void)
{
    return 8;
}

#define typedef_CAVM_PCCVF_XXX_REV cavm_pccvf_xxx_rev_t
#define bustype_CAVM_PCCVF_XXX_REV CSR_TYPE_PCCVF
#define basename_CAVM_PCCVF_XXX_REV "PCCVF_XXX_REV"
#define busnum_CAVM_PCCVF_XXX_REV 0
#define arguments_CAVM_PCCVF_XXX_REV -1,-1,-1,-1

/**
 * Register (PCCVF) pccvf_xxx_subid
 *
 * PCC VF Subsystem ID/Subsystem Vendor ID Register
 */
union cavm_pccvf_xxx_subid
{
    uint32_t u;
    struct cavm_pccvf_xxx_subid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ssid                  : 16; /**< [ 31: 16](RO) Device ID. \<15:8\> enumerated by PCC_PROD_E. \<7:0\> enumerated by PCC_DEV_IDL_E.
                                                                 e.g. 0xA033 for RNM_VF. */
        uint32_t ssvid                 : 16; /**< [ 15:  0](RO) Subsystem vendor ID. Cavium = 0x177D. */
#else /* Word 0 - Little Endian */
        uint32_t ssvid                 : 16; /**< [ 15:  0](RO) Subsystem vendor ID. Cavium = 0x177D. */
        uint32_t ssid                  : 16; /**< [ 31: 16](RO) Device ID. \<15:8\> enumerated by PCC_PROD_E. \<7:0\> enumerated by PCC_DEV_IDL_E.
                                                                 e.g. 0xA033 for RNM_VF. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccvf_xxx_subid_s cn8; */
    struct cavm_pccvf_xxx_subid_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ssid                  : 16; /**< [ 31: 16](RO) Subsystem ID. \<15:8\> enumerated by PCC_PROD_E. \<7:0\> = 0x0. */
        uint32_t ssvid                 : 16; /**< [ 15:  0](RO) Subsystem vendor ID. Cavium = 0x177D. */
#else /* Word 0 - Little Endian */
        uint32_t ssvid                 : 16; /**< [ 15:  0](RO) Subsystem vendor ID. Cavium = 0x177D. */
        uint32_t ssid                  : 16; /**< [ 31: 16](RO) Subsystem ID. \<15:8\> enumerated by PCC_PROD_E. \<7:0\> = 0x0. */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccvf_xxx_subid cavm_pccvf_xxx_subid_t;

#define CAVM_PCCVF_XXX_SUBID CAVM_PCCVF_XXX_SUBID_FUNC()
static inline uint64_t CAVM_PCCVF_XXX_SUBID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCVF_XXX_SUBID_FUNC(void)
{
    return 0x2c;
}

#define typedef_CAVM_PCCVF_XXX_SUBID cavm_pccvf_xxx_subid_t
#define bustype_CAVM_PCCVF_XXX_SUBID CSR_TYPE_PCCVF
#define basename_CAVM_PCCVF_XXX_SUBID "PCCVF_XXX_SUBID"
#define busnum_CAVM_PCCVF_XXX_SUBID 0
#define arguments_CAVM_PCCVF_XXX_SUBID -1,-1,-1,-1

/**
 * Register (PCCVF) pccvf_xxx_vsec_cap_hdr
 *
 * PCC VF Vendor-Specific Capability Header Register
 * This register is the header of the 64-byte {ProductLine} family VF capability
 * structure.
 */
union cavm_pccvf_xxx_vsec_cap_hdr
{
    uint32_t u;
    struct cavm_pccvf_xxx_vsec_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO) Next capability offset. Points to PCCVF_XXX_AER_CAP_HDR. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO) Capability version. */
        uint32_t vsecid                : 16; /**< [ 15:  0](RO) PCIE extended capability. Indicates vendor-specific capability. */
#else /* Word 0 - Little Endian */
        uint32_t vsecid                : 16; /**< [ 15:  0](RO) PCIE extended capability. Indicates vendor-specific capability. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO) Capability version. */
        uint32_t nco                   : 12; /**< [ 31: 20](RO) Next capability offset. Points to PCCVF_XXX_AER_CAP_HDR. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccvf_xxx_vsec_cap_hdr_s cn; */
};
typedef union cavm_pccvf_xxx_vsec_cap_hdr cavm_pccvf_xxx_vsec_cap_hdr_t;

#define CAVM_PCCVF_XXX_VSEC_CAP_HDR CAVM_PCCVF_XXX_VSEC_CAP_HDR_FUNC()
static inline uint64_t CAVM_PCCVF_XXX_VSEC_CAP_HDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCVF_XXX_VSEC_CAP_HDR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x100;
    __cavm_csr_fatal("PCCVF_XXX_VSEC_CAP_HDR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCVF_XXX_VSEC_CAP_HDR cavm_pccvf_xxx_vsec_cap_hdr_t
#define bustype_CAVM_PCCVF_XXX_VSEC_CAP_HDR CSR_TYPE_PCCVF
#define basename_CAVM_PCCVF_XXX_VSEC_CAP_HDR "PCCVF_XXX_VSEC_CAP_HDR"
#define busnum_CAVM_PCCVF_XXX_VSEC_CAP_HDR 0
#define arguments_CAVM_PCCVF_XXX_VSEC_CAP_HDR -1,-1,-1,-1

/**
 * Register (PCCVF) pccvf_xxx_vsec_ctl
 *
 * PCC VF Vendor-Specific Control Register
 * This register is reset on a chip domain reset.
 */
union cavm_pccvf_xxx_vsec_ctl
{
    uint32_t u;
    struct cavm_pccvf_xxx_vsec_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_12_31        : 20;
        uint32_t cor_intn              : 1;  /**< [ 11: 11](R/W1S/H) Corrected internal error. Writing a one to this bit sets
                                                                 PCCVF_XXX_AER_COR_STATUS[COR_INTN].
                                                                 This is a self-clearing bit and always reads as zero. */
        uint32_t adv_nfat              : 1;  /**< [ 10: 10](R/W1S/H) Advisory non-fatal error. Writing a one to this bit sets
                                                                 PCCVF_XXX_AER_COR_STATUS[ADV_NFAT].
                                                                 This is a self-clearing bit and always reads as zero. */
        uint32_t uncor_intn            : 1;  /**< [  9:  9](R/W1S/H) Poisoned TLP received. Writing a one to this bit sets
                                                                 PCCVF_XXX_AER_UNCOR_STATUS[UNCOR_INTN]. This is a self-clearing bit and always
                                                                 reads as zero. */
        uint32_t poison_tlp            : 1;  /**< [  8:  8](R/W1S/H) Poisoned TLP received. Writing a one to this bit sets
                                                                 PCCVF_XXX_AER_UNCOR_STATUS[POISON_TLP]. This is a self-clearing bit. */
        uint32_t reserved_0_7          : 8;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_7          : 8;
        uint32_t poison_tlp            : 1;  /**< [  8:  8](R/W1S/H) Poisoned TLP received. Writing a one to this bit sets
                                                                 PCCVF_XXX_AER_UNCOR_STATUS[POISON_TLP]. This is a self-clearing bit. */
        uint32_t uncor_intn            : 1;  /**< [  9:  9](R/W1S/H) Poisoned TLP received. Writing a one to this bit sets
                                                                 PCCVF_XXX_AER_UNCOR_STATUS[UNCOR_INTN]. This is a self-clearing bit and always
                                                                 reads as zero. */
        uint32_t adv_nfat              : 1;  /**< [ 10: 10](R/W1S/H) Advisory non-fatal error. Writing a one to this bit sets
                                                                 PCCVF_XXX_AER_COR_STATUS[ADV_NFAT].
                                                                 This is a self-clearing bit and always reads as zero. */
        uint32_t cor_intn              : 1;  /**< [ 11: 11](R/W1S/H) Corrected internal error. Writing a one to this bit sets
                                                                 PCCVF_XXX_AER_COR_STATUS[COR_INTN].
                                                                 This is a self-clearing bit and always reads as zero. */
        uint32_t reserved_12_31        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccvf_xxx_vsec_ctl_s cn; */
};
typedef union cavm_pccvf_xxx_vsec_ctl cavm_pccvf_xxx_vsec_ctl_t;

#define CAVM_PCCVF_XXX_VSEC_CTL CAVM_PCCVF_XXX_VSEC_CTL_FUNC()
static inline uint64_t CAVM_PCCVF_XXX_VSEC_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCVF_XXX_VSEC_CTL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x108;
    __cavm_csr_fatal("PCCVF_XXX_VSEC_CTL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCVF_XXX_VSEC_CTL cavm_pccvf_xxx_vsec_ctl_t
#define bustype_CAVM_PCCVF_XXX_VSEC_CTL CSR_TYPE_PCCVF
#define basename_CAVM_PCCVF_XXX_VSEC_CTL "PCCVF_XXX_VSEC_CTL"
#define busnum_CAVM_PCCVF_XXX_VSEC_CTL 0
#define arguments_CAVM_PCCVF_XXX_VSEC_CTL -1,-1,-1,-1

/**
 * Register (PCCVF) pccvf_xxx_vsec_id
 *
 * PCC VF Vendor-Specific Identification Register
 */
union cavm_pccvf_xxx_vsec_id
{
    uint32_t u;
    struct cavm_pccvf_xxx_vsec_id_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t len                   : 12; /**< [ 31: 20](RO) Number of bytes in the entire VSEC structure including PCCVF_XXX_VSEC_CAP_HDR. */
        uint32_t rev                   : 4;  /**< [ 19: 16](RO) Vendor-specific revision. */
        uint32_t id                    : 16; /**< [ 15:  0](RO) Vendor-specific ID. Indicates the {ProductLine} family VF VSEC ID.
                                                                 Enumerated by PCC_VSECID_E. */
#else /* Word 0 - Little Endian */
        uint32_t id                    : 16; /**< [ 15:  0](RO) Vendor-specific ID. Indicates the {ProductLine} family VF VSEC ID.
                                                                 Enumerated by PCC_VSECID_E. */
        uint32_t rev                   : 4;  /**< [ 19: 16](RO) Vendor-specific revision. */
        uint32_t len                   : 12; /**< [ 31: 20](RO) Number of bytes in the entire VSEC structure including PCCVF_XXX_VSEC_CAP_HDR. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccvf_xxx_vsec_id_s cn; */
};
typedef union cavm_pccvf_xxx_vsec_id cavm_pccvf_xxx_vsec_id_t;

#define CAVM_PCCVF_XXX_VSEC_ID CAVM_PCCVF_XXX_VSEC_ID_FUNC()
static inline uint64_t CAVM_PCCVF_XXX_VSEC_ID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCVF_XXX_VSEC_ID_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x104;
    __cavm_csr_fatal("PCCVF_XXX_VSEC_ID", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCVF_XXX_VSEC_ID cavm_pccvf_xxx_vsec_id_t
#define bustype_CAVM_PCCVF_XXX_VSEC_ID CSR_TYPE_PCCVF
#define basename_CAVM_PCCVF_XXX_VSEC_ID "PCCVF_XXX_VSEC_ID"
#define busnum_CAVM_PCCVF_XXX_VSEC_ID 0
#define arguments_CAVM_PCCVF_XXX_VSEC_ID -1,-1,-1,-1

#endif /* __CAVM_CSRS_PCCVF_H__ */
