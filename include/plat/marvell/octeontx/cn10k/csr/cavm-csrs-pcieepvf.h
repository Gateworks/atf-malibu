#ifndef __CAVM_CSRS_PCIEEPVF_H__
#define __CAVM_CSRS_PCIEEPVF_H__
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
 * OcteonTX PCIEEPVF.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (PCICONFIGEPVF) pcieepvf#_acs_cap_ctl
 *
 * PCIe VF ACS Capability and Control Register
 */
union cavm_pcieepvfx_acs_cap_ctl
{
    uint32_t u;
    struct cavm_pcieepvfx_acs_cap_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_23_31        : 9;
        uint32_t dte                   : 1;  /**< [ 22: 22](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[DTE]. */
        uint32_t ece                   : 1;  /**< [ 21: 21](R/W) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[ECE]. */
        uint32_t ufe                   : 1;  /**< [ 20: 20](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[UFE]. */
        uint32_t cre                   : 1;  /**< [ 19: 19](R/W) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[CRE]. */
        uint32_t rre                   : 1;  /**< [ 18: 18](R/W) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[RRE]. */
        uint32_t tbe                   : 1;  /**< [ 17: 17](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[TBE]. */
        uint32_t sve                   : 1;  /**< [ 16: 16](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[SVE]. */
        uint32_t ecvs                  : 8;  /**< [ 15:  8](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[ECVS]. */
        uint32_t reserved_7            : 1;
        uint32_t dt                    : 1;  /**< [  6:  6](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[DT]. */
        uint32_t ec                    : 1;  /**< [  5:  5](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[EC]. */
        uint32_t uf                    : 1;  /**< [  4:  4](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[UF]. */
        uint32_t cr                    : 1;  /**< [  3:  3](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[CR]. */
        uint32_t rr                    : 1;  /**< [  2:  2](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[RR]. */
        uint32_t tb                    : 1;  /**< [  1:  1](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[TB]. */
        uint32_t sv                    : 1;  /**< [  0:  0](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[SV]. */
#else /* Word 0 - Little Endian */
        uint32_t sv                    : 1;  /**< [  0:  0](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[SV]. */
        uint32_t tb                    : 1;  /**< [  1:  1](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[TB]. */
        uint32_t rr                    : 1;  /**< [  2:  2](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[RR]. */
        uint32_t cr                    : 1;  /**< [  3:  3](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[CR]. */
        uint32_t uf                    : 1;  /**< [  4:  4](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[UF]. */
        uint32_t ec                    : 1;  /**< [  5:  5](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[EC]. */
        uint32_t dt                    : 1;  /**< [  6:  6](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[DT]. */
        uint32_t reserved_7            : 1;
        uint32_t ecvs                  : 8;  /**< [ 15:  8](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[ECVS]. */
        uint32_t sve                   : 1;  /**< [ 16: 16](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[SVE]. */
        uint32_t tbe                   : 1;  /**< [ 17: 17](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[TBE]. */
        uint32_t rre                   : 1;  /**< [ 18: 18](R/W) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[RRE]. */
        uint32_t cre                   : 1;  /**< [ 19: 19](R/W) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[CRE]. */
        uint32_t ufe                   : 1;  /**< [ 20: 20](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[UFE]. */
        uint32_t ece                   : 1;  /**< [ 21: 21](R/W) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[ECE]. */
        uint32_t dte                   : 1;  /**< [ 22: 22](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[DTE]. */
        uint32_t reserved_23_31        : 9;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_acs_cap_ctl_s cn; */
};
typedef union cavm_pcieepvfx_acs_cap_ctl cavm_pcieepvfx_acs_cap_ctl_t;

static inline uint64_t CAVM_PCIEEPVFX_ACS_CAP_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_ACS_CAP_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x114 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x114 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x114 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x114 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_ACS_CAP_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_ACS_CAP_CTL(a) cavm_pcieepvfx_acs_cap_ctl_t
#define bustype_CAVM_PCIEEPVFX_ACS_CAP_CTL(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_ACS_CAP_CTL(a) "PCIEEPVFX_ACS_CAP_CTL"
#define busnum_CAVM_PCIEEPVFX_ACS_CAP_CTL(a) (a)
#define arguments_CAVM_PCIEEPVFX_ACS_CAP_CTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_acs_cap_hdr
 *
 * PCIe VF PCI Express ACS Extended Capability Header Register
 */
union cavm_pcieepvfx_acs_cap_hdr
{
    uint32_t u;
    struct cavm_pcieepvfx_acs_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL(). */
#else /* Word 0 - Little Endian */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL(). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_acs_cap_hdr_s cn; */
};
typedef union cavm_pcieepvfx_acs_cap_hdr cavm_pcieepvfx_acs_cap_hdr_t;

static inline uint64_t CAVM_PCIEEPVFX_ACS_CAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_ACS_CAP_HDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x110 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x110 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x110 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x110 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_ACS_CAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_ACS_CAP_HDR(a) cavm_pcieepvfx_acs_cap_hdr_t
#define bustype_CAVM_PCIEEPVFX_ACS_CAP_HDR(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_ACS_CAP_HDR(a) "PCIEEPVFX_ACS_CAP_HDR"
#define busnum_CAVM_PCIEEPVFX_ACS_CAP_HDR(a) (a)
#define arguments_CAVM_PCIEEPVFX_ACS_CAP_HDR(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_acs_egr_ctl_vec
 *
 * PCIe VF Egress Control Vector Register
 */
union cavm_pcieepvfx_acs_egr_ctl_vec
{
    uint32_t u;
    struct cavm_pcieepvfx_acs_egr_ctl_vec_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t ecv                   : 8;  /**< [  7:  0](R/W) Egress control vector. */
#else /* Word 0 - Little Endian */
        uint32_t ecv                   : 8;  /**< [  7:  0](R/W) Egress control vector. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_acs_egr_ctl_vec_s cn; */
};
typedef union cavm_pcieepvfx_acs_egr_ctl_vec cavm_pcieepvfx_acs_egr_ctl_vec_t;

static inline uint64_t CAVM_PCIEEPVFX_ACS_EGR_CTL_VEC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_ACS_EGR_CTL_VEC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x118 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x118 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x118 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x118 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_ACS_EGR_CTL_VEC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_ACS_EGR_CTL_VEC(a) cavm_pcieepvfx_acs_egr_ctl_vec_t
#define bustype_CAVM_PCIEEPVFX_ACS_EGR_CTL_VEC(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_ACS_EGR_CTL_VEC(a) "PCIEEPVFX_ACS_EGR_CTL_VEC"
#define busnum_CAVM_PCIEEPVFX_ACS_EGR_CTL_VEC(a) (a)
#define arguments_CAVM_PCIEEPVFX_ACS_EGR_CTL_VEC(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_ari_cap_ctl
 *
 * PCIe VF PCI Express ARI Capability Register/PCI Express ARI Control Register
 */
union cavm_pcieepvfx_ari_cap_ctl
{
    uint32_t u;
    struct cavm_pcieepvfx_ari_cap_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_23_31        : 9;
        uint32_t fg                    : 3;  /**< [ 22: 20](RO) Function group. */
        uint32_t reserved_18_19        : 2;
        uint32_t acsfge                : 1;  /**< [ 17: 17](RO) ACS function groups enable (A). */
        uint32_t mfvcfge               : 1;  /**< [ 16: 16](RO) MFVC function groups enable (M). */
        uint32_t nfn                   : 8;  /**< [ 15:  8](RO) Next function number. */
        uint32_t reserved_2_7          : 6;
        uint32_t acsfgc                : 1;  /**< [  1:  1](RO) ACS function groups capability. */
        uint32_t mfvcfgc               : 1;  /**< [  0:  0](RO) MFVC function groups capability. */
#else /* Word 0 - Little Endian */
        uint32_t mfvcfgc               : 1;  /**< [  0:  0](RO) MFVC function groups capability. */
        uint32_t acsfgc                : 1;  /**< [  1:  1](RO) ACS function groups capability. */
        uint32_t reserved_2_7          : 6;
        uint32_t nfn                   : 8;  /**< [ 15:  8](RO) Next function number. */
        uint32_t mfvcfge               : 1;  /**< [ 16: 16](RO) MFVC function groups enable (M). */
        uint32_t acsfge                : 1;  /**< [ 17: 17](RO) ACS function groups enable (A). */
        uint32_t reserved_18_19        : 2;
        uint32_t fg                    : 3;  /**< [ 22: 20](RO) Function group. */
        uint32_t reserved_23_31        : 9;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_ari_cap_ctl_s cn; */
};
typedef union cavm_pcieepvfx_ari_cap_ctl cavm_pcieepvfx_ari_cap_ctl_t;

static inline uint64_t CAVM_PCIEEPVFX_ARI_CAP_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_ARI_CAP_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x104 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x104 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x104 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x104 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_ARI_CAP_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_ARI_CAP_CTL(a) cavm_pcieepvfx_ari_cap_ctl_t
#define bustype_CAVM_PCIEEPVFX_ARI_CAP_CTL(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_ARI_CAP_CTL(a) "PCIEEPVFX_ARI_CAP_CTL"
#define busnum_CAVM_PCIEEPVFX_ARI_CAP_CTL(a) (a)
#define arguments_CAVM_PCIEEPVFX_ARI_CAP_CTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_bar0l
 *
 * PCIe VF Base Address 0 Low Register
 */
union cavm_pcieepvfx_bar0l
{
    uint32_t u;
    struct cavm_pcieepvfx_bar0l_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_bar0l_s cn; */
};
typedef union cavm_pcieepvfx_bar0l cavm_pcieepvfx_bar0l_t;

static inline uint64_t CAVM_PCIEEPVFX_BAR0L(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_BAR0L(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x10 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x10 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x10 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x10 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_BAR0L", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_BAR0L(a) cavm_pcieepvfx_bar0l_t
#define bustype_CAVM_PCIEEPVFX_BAR0L(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_BAR0L(a) "PCIEEPVFX_BAR0L"
#define busnum_CAVM_PCIEEPVFX_BAR0L(a) (a)
#define arguments_CAVM_PCIEEPVFX_BAR0L(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_bar0u
 *
 * PCIe VF Base Address 0 High Register
 */
union cavm_pcieepvfx_bar0u
{
    uint32_t u;
    struct cavm_pcieepvfx_bar0u_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_bar0u_s cn; */
};
typedef union cavm_pcieepvfx_bar0u cavm_pcieepvfx_bar0u_t;

static inline uint64_t CAVM_PCIEEPVFX_BAR0U(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_BAR0U(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x14 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x14 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x14 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x14 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_BAR0U", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_BAR0U(a) cavm_pcieepvfx_bar0u_t
#define bustype_CAVM_PCIEEPVFX_BAR0U(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_BAR0U(a) "PCIEEPVFX_BAR0U"
#define busnum_CAVM_PCIEEPVFX_BAR0U(a) (a)
#define arguments_CAVM_PCIEEPVFX_BAR0U(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_bar2l
 *
 * PCIe VF Base Address 1 Low Register
 */
union cavm_pcieepvfx_bar2l
{
    uint32_t u;
    struct cavm_pcieepvfx_bar2l_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_bar2l_s cn; */
};
typedef union cavm_pcieepvfx_bar2l cavm_pcieepvfx_bar2l_t;

static inline uint64_t CAVM_PCIEEPVFX_BAR2L(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_BAR2L(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x18 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x18 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x18 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x18 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_BAR2L", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_BAR2L(a) cavm_pcieepvfx_bar2l_t
#define bustype_CAVM_PCIEEPVFX_BAR2L(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_BAR2L(a) "PCIEEPVFX_BAR2L"
#define busnum_CAVM_PCIEEPVFX_BAR2L(a) (a)
#define arguments_CAVM_PCIEEPVFX_BAR2L(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_bar2u
 *
 * PCIe VF Base Address 1 High Register
 */
union cavm_pcieepvfx_bar2u
{
    uint32_t u;
    struct cavm_pcieepvfx_bar2u_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_bar2u_s cn; */
};
typedef union cavm_pcieepvfx_bar2u cavm_pcieepvfx_bar2u_t;

static inline uint64_t CAVM_PCIEEPVFX_BAR2U(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_BAR2U(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x1c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x1c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x1c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x1c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_BAR2U", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_BAR2U(a) cavm_pcieepvfx_bar2u_t
#define bustype_CAVM_PCIEEPVFX_BAR2U(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_BAR2U(a) "PCIEEPVFX_BAR2U"
#define busnum_CAVM_PCIEEPVFX_BAR2U(a) (a)
#define arguments_CAVM_PCIEEPVFX_BAR2U(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_bar4l
 *
 * PCIe VF Base Address 2 Low Register
 */
union cavm_pcieepvfx_bar4l
{
    uint32_t u;
    struct cavm_pcieepvfx_bar4l_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_bar4l_s cn; */
};
typedef union cavm_pcieepvfx_bar4l cavm_pcieepvfx_bar4l_t;

static inline uint64_t CAVM_PCIEEPVFX_BAR4L(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_BAR4L(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x20 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x20 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x20 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x20 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_BAR4L", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_BAR4L(a) cavm_pcieepvfx_bar4l_t
#define bustype_CAVM_PCIEEPVFX_BAR4L(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_BAR4L(a) "PCIEEPVFX_BAR4L"
#define busnum_CAVM_PCIEEPVFX_BAR4L(a) (a)
#define arguments_CAVM_PCIEEPVFX_BAR4L(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_bar4u
 *
 * PCIe VF Base Address Register 2 - High Register
 */
union cavm_pcieepvfx_bar4u
{
    uint32_t u;
    struct cavm_pcieepvfx_bar4u_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_bar4u_s cn; */
};
typedef union cavm_pcieepvfx_bar4u cavm_pcieepvfx_bar4u_t;

static inline uint64_t CAVM_PCIEEPVFX_BAR4U(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_BAR4U(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x24 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x24 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x24 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x24 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_BAR4U", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_BAR4U(a) cavm_pcieepvfx_bar4u_t
#define bustype_CAVM_PCIEEPVFX_BAR4U(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_BAR4U(a) "PCIEEPVFX_BAR4U"
#define busnum_CAVM_PCIEEPVFX_BAR4U(a) (a)
#define arguments_CAVM_PCIEEPVFX_BAR4U(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_cap_ptr
 *
 * PCIe VF Capability Pointer Register
 */
union cavm_pcieepvfx_cap_ptr
{
    uint32_t u;
    struct cavm_pcieepvfx_cap_ptr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t cp                    : 8;  /**< [  7:  0](RO) First capability pointer. Points to the PCI Express capability pointer structure (VF's). */
#else /* Word 0 - Little Endian */
        uint32_t cp                    : 8;  /**< [  7:  0](RO) First capability pointer. Points to the PCI Express capability pointer structure (VF's). */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_cap_ptr_s cn; */
};
typedef union cavm_pcieepvfx_cap_ptr cavm_pcieepvfx_cap_ptr_t;

static inline uint64_t CAVM_PCIEEPVFX_CAP_PTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_CAP_PTR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x34 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x34 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x34 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x34 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_CAP_PTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_CAP_PTR(a) cavm_pcieepvfx_cap_ptr_t
#define bustype_CAVM_PCIEEPVFX_CAP_PTR(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_CAP_PTR(a) "PCIEEPVFX_CAP_PTR"
#define busnum_CAVM_PCIEEPVFX_CAP_PTR(a) (a)
#define arguments_CAVM_PCIEEPVFX_CAP_PTR(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_cardbus
 *
 * PCIe VF Card Bus CIS Pointer Register
 */
union cavm_pcieepvfx_cardbus
{
    uint32_t u;
    struct cavm_pcieepvfx_cardbus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t cisp                  : 32; /**< [ 31:  0](RO) Read-only copy of the associated PF's PCIEEP_CARDBUS[CISP]. */
#else /* Word 0 - Little Endian */
        uint32_t cisp                  : 32; /**< [ 31:  0](RO) Read-only copy of the associated PF's PCIEEP_CARDBUS[CISP]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_cardbus_s cn; */
};
typedef union cavm_pcieepvfx_cardbus cavm_pcieepvfx_cardbus_t;

static inline uint64_t CAVM_PCIEEPVFX_CARDBUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_CARDBUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x28 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x28 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x28 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x28 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_CARDBUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_CARDBUS(a) cavm_pcieepvfx_cardbus_t
#define bustype_CAVM_PCIEEPVFX_CARDBUS(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_CARDBUS(a) "PCIEEPVFX_CARDBUS"
#define busnum_CAVM_PCIEEPVFX_CARDBUS(a) (a)
#define arguments_CAVM_PCIEEPVFX_CARDBUS(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_clsize
 *
 * PCIe VF BIST, Header Type, Master Latency Timer, Cache Line Size Register
 */
union cavm_pcieepvfx_clsize
{
    uint32_t u;
    struct cavm_pcieepvfx_clsize_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bist                  : 8;  /**< [ 31: 24](RO) The BIST register functions are not supported. All 8 bits of the BIST register are
                                                                 hardwired to 0x0. */
        uint32_t mfd                   : 1;  /**< [ 23: 23](RO) Read-only copy of the associated PF's PCIEEP_CLSIZE[MFD]. */
        uint32_t chf                   : 7;  /**< [ 22: 16](RO) Configuration header format. Hardwired to 0x0 for type 0. */
        uint32_t lt                    : 8;  /**< [ 15:  8](RO) Master latency timer. Not applicable for PCI Express, hardwired to 0x0. */
        uint32_t cls                   : 8;  /**< [  7:  0](RO) Read-only copy of the associated PF's PCIEEP_CLSIZE[CLS].
                                                                 The cache line size register is R/W for legacy compatibility purposes and
                                                                 is not applicable to PCI Express device functionality. Writing to the cache line size
                                                                 register does not impact functionality of the PCI Express bus. */
#else /* Word 0 - Little Endian */
        uint32_t cls                   : 8;  /**< [  7:  0](RO) Read-only copy of the associated PF's PCIEEP_CLSIZE[CLS].
                                                                 The cache line size register is R/W for legacy compatibility purposes and
                                                                 is not applicable to PCI Express device functionality. Writing to the cache line size
                                                                 register does not impact functionality of the PCI Express bus. */
        uint32_t lt                    : 8;  /**< [ 15:  8](RO) Master latency timer. Not applicable for PCI Express, hardwired to 0x0. */
        uint32_t chf                   : 7;  /**< [ 22: 16](RO) Configuration header format. Hardwired to 0x0 for type 0. */
        uint32_t mfd                   : 1;  /**< [ 23: 23](RO) Read-only copy of the associated PF's PCIEEP_CLSIZE[MFD]. */
        uint32_t bist                  : 8;  /**< [ 31: 24](RO) The BIST register functions are not supported. All 8 bits of the BIST register are
                                                                 hardwired to 0x0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_clsize_s cn; */
};
typedef union cavm_pcieepvfx_clsize cavm_pcieepvfx_clsize_t;

static inline uint64_t CAVM_PCIEEPVFX_CLSIZE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_CLSIZE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0xc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0xc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0xc + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0xc + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_CLSIZE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_CLSIZE(a) cavm_pcieepvfx_clsize_t
#define bustype_CAVM_PCIEEPVFX_CLSIZE(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_CLSIZE(a) "PCIEEPVFX_CLSIZE"
#define busnum_CAVM_PCIEEPVFX_CLSIZE(a) (a)
#define arguments_CAVM_PCIEEPVFX_CLSIZE(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_cmd
 *
 * PCIe VF Command/Status Register
 */
union cavm_pcieepvfx_cmd
{
    uint32_t u;
    struct cavm_pcieepvfx_cmd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dpe                   : 1;  /**< [ 31: 31](R/W1C/H) Detected parity error. */
        uint32_t sse                   : 1;  /**< [ 30: 30](R/W1C/H) Signaled system error. */
        uint32_t rma                   : 1;  /**< [ 29: 29](R/W1C/H) Received master abort. */
        uint32_t rta                   : 1;  /**< [ 28: 28](R/W1C/H) Received target abort. */
        uint32_t sta                   : 1;  /**< [ 27: 27](R/W1C/H) Signaled target abort. */
        uint32_t devt                  : 2;  /**< [ 26: 25](RO) DEVSEL timing. Not applicable for PCI Express. Hardwired to 0x0. */
        uint32_t mdpe                  : 1;  /**< [ 24: 24](R/W1C/H) Master data parity error. */
        uint32_t fbb                   : 1;  /**< [ 23: 23](RO) Fast back-to-back capable. Not applicable for PCI Express. Hardwired to 0. */
        uint32_t reserved_22           : 1;
        uint32_t m66                   : 1;  /**< [ 21: 21](RO) 66 MHz capable. Not applicable for PCI Express. Hardwired to 0. */
        uint32_t cl                    : 1;  /**< [ 20: 20](RO) Capabilities list. Indicates presence of an extended capability item. Hardwired to 1. */
        uint32_t i_stat                : 1;  /**< [ 19: 19](RO/H) INTx status. Not applicable for SR-IOV.  Hardwired to 0. */
        uint32_t reserved_17_18        : 2;
        uint32_t imm_readiness         : 1;  /**< [ 16: 16](RO/H) Immediate readiness. */
        uint32_t pci_type_reserv       : 5;  /**< [ 15: 11](RO) Reserved. */
        uint32_t i_dis                 : 1;  /**< [ 10: 10](RO) VF read-only zero. */
        uint32_t fbbe                  : 1;  /**< [  9:  9](RO) Fast back-to-back transaction enable. Not applicable for PCI Express. Must be hardwired to 0. */
        uint32_t see                   : 1;  /**< [  8:  8](RAZ) VF RsvdP. */
        uint32_t ids_wcc               : 1;  /**< [  7:  7](RO) IDSEL stepping/wait cycle control. Not applicable for PCI Express. Must be hardwired to 0. */
        uint32_t per                   : 1;  /**< [  6:  6](RAZ) VF RsvdP. */
        uint32_t vps                   : 1;  /**< [  5:  5](RO) VGA palette snoop. Not applicable for PCI Express. Must be hardwired to 0. */
        uint32_t mwice                 : 1;  /**< [  4:  4](RO) Memory write and invalidate. Not applicable for PCI Express. Must be hardwired to 0. */
        uint32_t scse                  : 1;  /**< [  3:  3](RO) Special cycle enable. Not applicable for PCI Express. Must be hardwired to 0. */
        uint32_t me                    : 1;  /**< [  2:  2](R/W) Bus master enable. If the VF tries to master the bus when this bit is not set,
                                                                 the request is discarded. A interrupt will be generated setting
                                                                 PEM()_DBG_INFO[BMD_E].
                                                                 Transactions are dropped in the client.  Non-posted transactions returns a
                                                                 response error to NCB/DPI soon thereafter.
                                                                 Bus master enable mimics the behavior of PEM()_FLR_PF()_STOPREQ. */
        uint32_t msae                  : 1;  /**< [  1:  1](RO) VF read-only zero. */
        uint32_t isae                  : 1;  /**< [  0:  0](RO) VF read-only zero. */
#else /* Word 0 - Little Endian */
        uint32_t isae                  : 1;  /**< [  0:  0](RO) VF read-only zero. */
        uint32_t msae                  : 1;  /**< [  1:  1](RO) VF read-only zero. */
        uint32_t me                    : 1;  /**< [  2:  2](R/W) Bus master enable. If the VF tries to master the bus when this bit is not set,
                                                                 the request is discarded. A interrupt will be generated setting
                                                                 PEM()_DBG_INFO[BMD_E].
                                                                 Transactions are dropped in the client.  Non-posted transactions returns a
                                                                 response error to NCB/DPI soon thereafter.
                                                                 Bus master enable mimics the behavior of PEM()_FLR_PF()_STOPREQ. */
        uint32_t scse                  : 1;  /**< [  3:  3](RO) Special cycle enable. Not applicable for PCI Express. Must be hardwired to 0. */
        uint32_t mwice                 : 1;  /**< [  4:  4](RO) Memory write and invalidate. Not applicable for PCI Express. Must be hardwired to 0. */
        uint32_t vps                   : 1;  /**< [  5:  5](RO) VGA palette snoop. Not applicable for PCI Express. Must be hardwired to 0. */
        uint32_t per                   : 1;  /**< [  6:  6](RAZ) VF RsvdP. */
        uint32_t ids_wcc               : 1;  /**< [  7:  7](RO) IDSEL stepping/wait cycle control. Not applicable for PCI Express. Must be hardwired to 0. */
        uint32_t see                   : 1;  /**< [  8:  8](RAZ) VF RsvdP. */
        uint32_t fbbe                  : 1;  /**< [  9:  9](RO) Fast back-to-back transaction enable. Not applicable for PCI Express. Must be hardwired to 0. */
        uint32_t i_dis                 : 1;  /**< [ 10: 10](RO) VF read-only zero. */
        uint32_t pci_type_reserv       : 5;  /**< [ 15: 11](RO) Reserved. */
        uint32_t imm_readiness         : 1;  /**< [ 16: 16](RO/H) Immediate readiness. */
        uint32_t reserved_17_18        : 2;
        uint32_t i_stat                : 1;  /**< [ 19: 19](RO/H) INTx status. Not applicable for SR-IOV.  Hardwired to 0. */
        uint32_t cl                    : 1;  /**< [ 20: 20](RO) Capabilities list. Indicates presence of an extended capability item. Hardwired to 1. */
        uint32_t m66                   : 1;  /**< [ 21: 21](RO) 66 MHz capable. Not applicable for PCI Express. Hardwired to 0. */
        uint32_t reserved_22           : 1;
        uint32_t fbb                   : 1;  /**< [ 23: 23](RO) Fast back-to-back capable. Not applicable for PCI Express. Hardwired to 0. */
        uint32_t mdpe                  : 1;  /**< [ 24: 24](R/W1C/H) Master data parity error. */
        uint32_t devt                  : 2;  /**< [ 26: 25](RO) DEVSEL timing. Not applicable for PCI Express. Hardwired to 0x0. */
        uint32_t sta                   : 1;  /**< [ 27: 27](R/W1C/H) Signaled target abort. */
        uint32_t rta                   : 1;  /**< [ 28: 28](R/W1C/H) Received target abort. */
        uint32_t rma                   : 1;  /**< [ 29: 29](R/W1C/H) Received master abort. */
        uint32_t sse                   : 1;  /**< [ 30: 30](R/W1C/H) Signaled system error. */
        uint32_t dpe                   : 1;  /**< [ 31: 31](R/W1C/H) Detected parity error. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_cmd_s cn; */
};
typedef union cavm_pcieepvfx_cmd cavm_pcieepvfx_cmd_t;

static inline uint64_t CAVM_PCIEEPVFX_CMD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_CMD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 4 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 4 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_CMD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_CMD(a) cavm_pcieepvfx_cmd_t
#define bustype_CAVM_PCIEEPVFX_CMD(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_CMD(a) "PCIEEPVFX_CMD"
#define busnum_CAVM_PCIEEPVFX_CMD(a) (a)
#define arguments_CAVM_PCIEEPVFX_CMD(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_dev_cap
 *
 * PCIe VF Device Capabilities Register
 */
union cavm_pcieepvfx_dev_cap
{
    uint32_t u;
    struct cavm_pcieepvfx_dev_cap_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_29_31        : 3;
        uint32_t flr_cap               : 1;  /**< [ 28: 28](RO) Function level reset capability. Set to 1 for SR-IOV core. */
        uint32_t cspls                 : 2;  /**< [ 27: 26](RO/H) VF undefined. */
        uint32_t csplv                 : 8;  /**< [ 25: 18](RO/H) VF undefined. */
        uint32_t reserved_16_17        : 2;
        uint32_t rber                  : 1;  /**< [ 15: 15](RO) Read-only copy of the associated PF's PCIEEP_DEV_CAP[RBER]. */
        uint32_t reserved_12_14        : 3;
        uint32_t el1al                 : 3;  /**< [ 11:  9](RO) Read-only copy of the associated PF's PCIEEP_DEV_CAP[EL1AL]. */
        uint32_t el0al                 : 3;  /**< [  8:  6](RO) Read-only copy of the associated PF's PCIEEP_DEV_CAP[EL0AL]. */
        uint32_t etfs                  : 1;  /**< [  5:  5](RO) Read-only copy of the associated PF's PCIEEP_DEV_CAP[ETFS]. */
        uint32_t pfs                   : 2;  /**< [  4:  3](RO) Read-only copy of the associated PF's PCIEEP_DEV_CAP[PFS]. */
        uint32_t mpss                  : 3;  /**< [  2:  0](RO) Read-only copy of the associated PF's PCIEEP_DEV_CAP[MPSS]. */
#else /* Word 0 - Little Endian */
        uint32_t mpss                  : 3;  /**< [  2:  0](RO) Read-only copy of the associated PF's PCIEEP_DEV_CAP[MPSS]. */
        uint32_t pfs                   : 2;  /**< [  4:  3](RO) Read-only copy of the associated PF's PCIEEP_DEV_CAP[PFS]. */
        uint32_t etfs                  : 1;  /**< [  5:  5](RO) Read-only copy of the associated PF's PCIEEP_DEV_CAP[ETFS]. */
        uint32_t el0al                 : 3;  /**< [  8:  6](RO) Read-only copy of the associated PF's PCIEEP_DEV_CAP[EL0AL]. */
        uint32_t el1al                 : 3;  /**< [ 11:  9](RO) Read-only copy of the associated PF's PCIEEP_DEV_CAP[EL1AL]. */
        uint32_t reserved_12_14        : 3;
        uint32_t rber                  : 1;  /**< [ 15: 15](RO) Read-only copy of the associated PF's PCIEEP_DEV_CAP[RBER]. */
        uint32_t reserved_16_17        : 2;
        uint32_t csplv                 : 8;  /**< [ 25: 18](RO/H) VF undefined. */
        uint32_t cspls                 : 2;  /**< [ 27: 26](RO/H) VF undefined. */
        uint32_t flr_cap               : 1;  /**< [ 28: 28](RO) Function level reset capability. Set to 1 for SR-IOV core. */
        uint32_t reserved_29_31        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_dev_cap_s cn; */
};
typedef union cavm_pcieepvfx_dev_cap cavm_pcieepvfx_dev_cap_t;

static inline uint64_t CAVM_PCIEEPVFX_DEV_CAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_DEV_CAP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x74 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x74 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x74 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x74 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_DEV_CAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_DEV_CAP(a) cavm_pcieepvfx_dev_cap_t
#define bustype_CAVM_PCIEEPVFX_DEV_CAP(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_DEV_CAP(a) "PCIEEPVFX_DEV_CAP"
#define busnum_CAVM_PCIEEPVFX_DEV_CAP(a) (a)
#define arguments_CAVM_PCIEEPVFX_DEV_CAP(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_dev_cap2
 *
 * PCIe VF Device Capabilities 2 Register
 */
union cavm_pcieepvfx_dev_cap2
{
    uint32_t u;
    struct cavm_pcieepvfx_dev_cap2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t meetp                 : 2;  /**< [ 23: 22](RO) Read-only copy of the associated PF's PCIEEP_DEV_CAP2[MEETP]. */
        uint32_t eetps                 : 1;  /**< [ 21: 21](RO) End-end TLP prefix supported (not supported). */
        uint32_t effs                  : 1;  /**< [ 20: 20](RO) Extended fmt field supported. */
        uint32_t obffs                 : 2;  /**< [ 19: 18](RO) Optimized buffer flush fill (OBFF) supported (both message and wake). */
        uint32_t tag10b_req_supp       : 1;  /**< [ 17: 17](RO) 10-bit tag requestor supported. */
        uint32_t tag10b_cpl_supp       : 1;  /**< [ 16: 16](RO) 10-bit tag completer supported. */
        uint32_t ln_sys_cls            : 2;  /**< [ 15: 14](RO) LN system CLS (not applicable for EP). */
        uint32_t tphs                  : 2;  /**< [ 13: 12](RO) TPH completer supported. */
        uint32_t ltrs                  : 1;  /**< [ 11: 11](RO) Latency tolerance reporting (LTR) mechanism supported. */
        uint32_t noroprpr              : 1;  /**< [ 10: 10](RO/H) No RO-enabled PR-PR passing. (This bit applies to RCs.) */
        uint32_t atom128s              : 1;  /**< [  9:  9](RO/H) 128-bit AtomicOp supported.
                                                                 Note that inbound AtomicOps targeting BAR0 are not supported and are dropped as an
                                                                 unsupported request.
                                                                 Since VF's are tied to BAR0, all AtomicOp's will be dropped as unsupported requests.
                                                                 ATOM128S is set as an inherited attribute from the PF. */
        uint32_t atom64s               : 1;  /**< [  8:  8](RO/H) 64-bit AtomicOp supported.
                                                                 Note that inbound AtomicOps targeting BAR0 are not supported and are dropped as an
                                                                 unsupported request.
                                                                 Since VF's are tied to BAR0, all AtomicOp's will be dropped as unsupported requests.
                                                                 ATOM64S is set as an inherited attribute from the PF. */
        uint32_t atom32s               : 1;  /**< [  7:  7](RO) 32-bit AtomicOp supported.
                                                                 Note that inbound AtomicOps targeting BAR0 are not supported and are dropped as an
                                                                 unsupported request.
                                                                 Since VF's are tied to BAR0, all AtomicOp's will be dropped as unsupported requests.
                                                                 ATOM64S is set as an inherited attribute from the PF. */
        uint32_t atom_ops              : 1;  /**< [  6:  6](RAZ) VF RsvdP. */
        uint32_t ari                   : 1;  /**< [  5:  5](RO) Alternate routing ID forwarding supported (not applicable for EP). */
        uint32_t ctds                  : 1;  /**< [  4:  4](RO) Completion timeout disable supported. */
        uint32_t ctrs                  : 4;  /**< [  3:  0](RO/H) Completion timeout ranges supported. */
#else /* Word 0 - Little Endian */
        uint32_t ctrs                  : 4;  /**< [  3:  0](RO/H) Completion timeout ranges supported. */
        uint32_t ctds                  : 1;  /**< [  4:  4](RO) Completion timeout disable supported. */
        uint32_t ari                   : 1;  /**< [  5:  5](RO) Alternate routing ID forwarding supported (not applicable for EP). */
        uint32_t atom_ops              : 1;  /**< [  6:  6](RAZ) VF RsvdP. */
        uint32_t atom32s               : 1;  /**< [  7:  7](RO) 32-bit AtomicOp supported.
                                                                 Note that inbound AtomicOps targeting BAR0 are not supported and are dropped as an
                                                                 unsupported request.
                                                                 Since VF's are tied to BAR0, all AtomicOp's will be dropped as unsupported requests.
                                                                 ATOM64S is set as an inherited attribute from the PF. */
        uint32_t atom64s               : 1;  /**< [  8:  8](RO/H) 64-bit AtomicOp supported.
                                                                 Note that inbound AtomicOps targeting BAR0 are not supported and are dropped as an
                                                                 unsupported request.
                                                                 Since VF's are tied to BAR0, all AtomicOp's will be dropped as unsupported requests.
                                                                 ATOM64S is set as an inherited attribute from the PF. */
        uint32_t atom128s              : 1;  /**< [  9:  9](RO/H) 128-bit AtomicOp supported.
                                                                 Note that inbound AtomicOps targeting BAR0 are not supported and are dropped as an
                                                                 unsupported request.
                                                                 Since VF's are tied to BAR0, all AtomicOp's will be dropped as unsupported requests.
                                                                 ATOM128S is set as an inherited attribute from the PF. */
        uint32_t noroprpr              : 1;  /**< [ 10: 10](RO/H) No RO-enabled PR-PR passing. (This bit applies to RCs.) */
        uint32_t ltrs                  : 1;  /**< [ 11: 11](RO) Latency tolerance reporting (LTR) mechanism supported. */
        uint32_t tphs                  : 2;  /**< [ 13: 12](RO) TPH completer supported. */
        uint32_t ln_sys_cls            : 2;  /**< [ 15: 14](RO) LN system CLS (not applicable for EP). */
        uint32_t tag10b_cpl_supp       : 1;  /**< [ 16: 16](RO) 10-bit tag completer supported. */
        uint32_t tag10b_req_supp       : 1;  /**< [ 17: 17](RO) 10-bit tag requestor supported. */
        uint32_t obffs                 : 2;  /**< [ 19: 18](RO) Optimized buffer flush fill (OBFF) supported (both message and wake). */
        uint32_t effs                  : 1;  /**< [ 20: 20](RO) Extended fmt field supported. */
        uint32_t eetps                 : 1;  /**< [ 21: 21](RO) End-end TLP prefix supported (not supported). */
        uint32_t meetp                 : 2;  /**< [ 23: 22](RO) Read-only copy of the associated PF's PCIEEP_DEV_CAP2[MEETP]. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_dev_cap2_s cn; */
};
typedef union cavm_pcieepvfx_dev_cap2 cavm_pcieepvfx_dev_cap2_t;

static inline uint64_t CAVM_PCIEEPVFX_DEV_CAP2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_DEV_CAP2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x94 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x94 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x94 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x94 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_DEV_CAP2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_DEV_CAP2(a) cavm_pcieepvfx_dev_cap2_t
#define bustype_CAVM_PCIEEPVFX_DEV_CAP2(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_DEV_CAP2(a) "PCIEEPVFX_DEV_CAP2"
#define busnum_CAVM_PCIEEPVFX_DEV_CAP2(a) (a)
#define arguments_CAVM_PCIEEPVFX_DEV_CAP2(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_dev_ctl
 *
 * PCIe VF Device Control/Device Status Register
 */
union cavm_pcieepvfx_dev_ctl
{
    uint32_t u;
    struct cavm_pcieepvfx_dev_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_22_31        : 10;
        uint32_t tp                    : 1;  /**< [ 21: 21](RO/H) Transaction pending. Set to 1 when nonposted requests are not yet completed and set to 0
                                                                 when they are completed. */
        uint32_t ap_d                  : 1;  /**< [ 20: 20](RO) VF's read-only zeros. */
        uint32_t ur_d                  : 1;  /**< [ 19: 19](RO/H) Unsupported request detected. Errors are logged in this register regardless of whether or
                                                                 not error reporting is enabled in the device control register. [UR_D] occurs when we
                                                                 receive
                                                                 something unsupported. Unsupported requests are nonfatal errors, so [UR_D] should cause
                                                                 [NFE_D]. Receiving a vendor-defined message should cause an unsupported request. */
        uint32_t fe_d                  : 1;  /**< [ 18: 18](RO/H) Fatal error detected. Errors are logged in this register regardless of whether or not
                                                                 error reporting is enabled in the device control register. This field is set if we receive
                                                                 any of the errors in PCIEEP_UCOR_ERR_MSK that has a severity set to fatal. Malformed
                                                                 TLPs
                                                                 generally fit into this category. */
        uint32_t nfe_d                 : 1;  /**< [ 17: 17](RO/H) Nonfatal error detected. Errors are logged in this register regardless of whether or not
                                                                 error reporting is enabled in the device control register. This field is set if we receive
                                                                 any of the errors in PCIEEP_UCOR_ERR_MSK that has a severity set to nonfatal and does
                                                                 not
                                                                 meet advisory nonfatal criteria, which most poisoned TLPs should. */
        uint32_t ce_d                  : 1;  /**< [ 16: 16](RO/H) Correctable error detected. Errors are logged in this register regardless of whether or
                                                                 not error reporting is enabled in the device control register. This field is set if we
                                                                 receive any of the errors in PCIEEPVF_COR_ERR_STAT, for example a replay-timer timeout.
                                                                 Also, it can be set if we get any of the errors in PCIEEP_UCOR_ERR_MSK that has a
                                                                 severity
                                                                 set to Nonfatal and meets the Advisory Nonfatal criteria, which most ECRC errors should. */
        uint32_t i_flr                 : 1;  /**< [ 15: 15](WO) Initiate function level reset when written to one.

                                                                 [I_FLR] must not be written to one via the indirect PEM()_CFG_TBL(). It should only ever
                                                                 be written to one via a direct PCIe access. */
        uint32_t mrrs                  : 3;  /**< [ 14: 12](RAZ) VF RsvdP. */
        uint32_t ns_en                 : 1;  /**< [ 11: 11](RAZ) VF RsvdP. */
        uint32_t ap_en                 : 1;  /**< [ 10: 10](RAZ) VF RsvdP. */
        uint32_t pf_en                 : 1;  /**< [  9:  9](RAZ) VF RsvdP. */
        uint32_t etf_en                : 1;  /**< [  8:  8](RAZ) VF RsvdP. */
        uint32_t mps                   : 3;  /**< [  7:  5](RAZ) VF RsvdP. */
        uint32_t ro_en                 : 1;  /**< [  4:  4](RAZ) VF RsvdP. */
        uint32_t ur_en                 : 1;  /**< [  3:  3](RAZ) VF RsvdP. */
        uint32_t fe_en                 : 1;  /**< [  2:  2](RAZ) VF RsvdP. */
        uint32_t nfe_en                : 1;  /**< [  1:  1](RAZ) VF RsvdP. */
        uint32_t ce_en                 : 1;  /**< [  0:  0](RAZ) VF RsvdP. */
#else /* Word 0 - Little Endian */
        uint32_t ce_en                 : 1;  /**< [  0:  0](RAZ) VF RsvdP. */
        uint32_t nfe_en                : 1;  /**< [  1:  1](RAZ) VF RsvdP. */
        uint32_t fe_en                 : 1;  /**< [  2:  2](RAZ) VF RsvdP. */
        uint32_t ur_en                 : 1;  /**< [  3:  3](RAZ) VF RsvdP. */
        uint32_t ro_en                 : 1;  /**< [  4:  4](RAZ) VF RsvdP. */
        uint32_t mps                   : 3;  /**< [  7:  5](RAZ) VF RsvdP. */
        uint32_t etf_en                : 1;  /**< [  8:  8](RAZ) VF RsvdP. */
        uint32_t pf_en                 : 1;  /**< [  9:  9](RAZ) VF RsvdP. */
        uint32_t ap_en                 : 1;  /**< [ 10: 10](RAZ) VF RsvdP. */
        uint32_t ns_en                 : 1;  /**< [ 11: 11](RAZ) VF RsvdP. */
        uint32_t mrrs                  : 3;  /**< [ 14: 12](RAZ) VF RsvdP. */
        uint32_t i_flr                 : 1;  /**< [ 15: 15](WO) Initiate function level reset when written to one.

                                                                 [I_FLR] must not be written to one via the indirect PEM()_CFG_TBL(). It should only ever
                                                                 be written to one via a direct PCIe access. */
        uint32_t ce_d                  : 1;  /**< [ 16: 16](RO/H) Correctable error detected. Errors are logged in this register regardless of whether or
                                                                 not error reporting is enabled in the device control register. This field is set if we
                                                                 receive any of the errors in PCIEEPVF_COR_ERR_STAT, for example a replay-timer timeout.
                                                                 Also, it can be set if we get any of the errors in PCIEEP_UCOR_ERR_MSK that has a
                                                                 severity
                                                                 set to Nonfatal and meets the Advisory Nonfatal criteria, which most ECRC errors should. */
        uint32_t nfe_d                 : 1;  /**< [ 17: 17](RO/H) Nonfatal error detected. Errors are logged in this register regardless of whether or not
                                                                 error reporting is enabled in the device control register. This field is set if we receive
                                                                 any of the errors in PCIEEP_UCOR_ERR_MSK that has a severity set to nonfatal and does
                                                                 not
                                                                 meet advisory nonfatal criteria, which most poisoned TLPs should. */
        uint32_t fe_d                  : 1;  /**< [ 18: 18](RO/H) Fatal error detected. Errors are logged in this register regardless of whether or not
                                                                 error reporting is enabled in the device control register. This field is set if we receive
                                                                 any of the errors in PCIEEP_UCOR_ERR_MSK that has a severity set to fatal. Malformed
                                                                 TLPs
                                                                 generally fit into this category. */
        uint32_t ur_d                  : 1;  /**< [ 19: 19](RO/H) Unsupported request detected. Errors are logged in this register regardless of whether or
                                                                 not error reporting is enabled in the device control register. [UR_D] occurs when we
                                                                 receive
                                                                 something unsupported. Unsupported requests are nonfatal errors, so [UR_D] should cause
                                                                 [NFE_D]. Receiving a vendor-defined message should cause an unsupported request. */
        uint32_t ap_d                  : 1;  /**< [ 20: 20](RO) VF's read-only zeros. */
        uint32_t tp                    : 1;  /**< [ 21: 21](RO/H) Transaction pending. Set to 1 when nonposted requests are not yet completed and set to 0
                                                                 when they are completed. */
        uint32_t reserved_22_31        : 10;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_dev_ctl_s cn; */
};
typedef union cavm_pcieepvfx_dev_ctl cavm_pcieepvfx_dev_ctl_t;

static inline uint64_t CAVM_PCIEEPVFX_DEV_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_DEV_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x78 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x78 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x78 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x78 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_DEV_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_DEV_CTL(a) cavm_pcieepvfx_dev_ctl_t
#define bustype_CAVM_PCIEEPVFX_DEV_CTL(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_DEV_CTL(a) "PCIEEPVFX_DEV_CTL"
#define busnum_CAVM_PCIEEPVFX_DEV_CTL(a) (a)
#define arguments_CAVM_PCIEEPVFX_DEV_CTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_dev_ctl2
 *
 * PCIe VF Device Control 2 Register/Device Status 2 Register
 */
union cavm_pcieepvfx_dev_ctl2
{
    uint32_t u;
    struct cavm_pcieepvfx_dev_ctl2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t eetpb                 : 1;  /**< [ 15: 15](RO) Unsupported end-end TLP prefix blocking. */
        uint32_t obffe                 : 2;  /**< [ 14: 13](RO) Optimized buffer flush fill (OBFF) enable. */
        uint32_t tag10b_req_en         : 1;  /**< [ 12: 12](RO) 10-bit tag requestor enable. */
        uint32_t reserved_11           : 1;
        uint32_t ltre                  : 1;  /**< [ 10: 10](RAZ) Latency tolerance reporting (LTR) mechanism enable. */
        uint32_t id0_cp                : 1;  /**< [  9:  9](RAZ) VF RsvdP. */
        uint32_t id0_rq                : 1;  /**< [  8:  8](RAZ) VF RsvdP. */
        uint32_t reserved_7            : 1;
        uint32_t atom_op               : 1;  /**< [  6:  6](RAZ) VF RsvdP. */
        uint32_t ari                   : 1;  /**< [  5:  5](RO) Alternate routing ID forwarding supported (not supported). */
        uint32_t ctd                   : 1;  /**< [  4:  4](RAZ) VF RsvdP. */
        uint32_t ctv                   : 4;  /**< [  3:  0](RAZ) VF RsvdP. */
#else /* Word 0 - Little Endian */
        uint32_t ctv                   : 4;  /**< [  3:  0](RAZ) VF RsvdP. */
        uint32_t ctd                   : 1;  /**< [  4:  4](RAZ) VF RsvdP. */
        uint32_t ari                   : 1;  /**< [  5:  5](RO) Alternate routing ID forwarding supported (not supported). */
        uint32_t atom_op               : 1;  /**< [  6:  6](RAZ) VF RsvdP. */
        uint32_t reserved_7            : 1;
        uint32_t id0_rq                : 1;  /**< [  8:  8](RAZ) VF RsvdP. */
        uint32_t id0_cp                : 1;  /**< [  9:  9](RAZ) VF RsvdP. */
        uint32_t ltre                  : 1;  /**< [ 10: 10](RAZ) Latency tolerance reporting (LTR) mechanism enable. */
        uint32_t reserved_11           : 1;
        uint32_t tag10b_req_en         : 1;  /**< [ 12: 12](RO) 10-bit tag requestor enable. */
        uint32_t obffe                 : 2;  /**< [ 14: 13](RO) Optimized buffer flush fill (OBFF) enable. */
        uint32_t eetpb                 : 1;  /**< [ 15: 15](RO) Unsupported end-end TLP prefix blocking. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_dev_ctl2_s cn; */
};
typedef union cavm_pcieepvfx_dev_ctl2 cavm_pcieepvfx_dev_ctl2_t;

static inline uint64_t CAVM_PCIEEPVFX_DEV_CTL2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_DEV_CTL2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x98 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x98 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x98 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x98 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_DEV_CTL2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_DEV_CTL2(a) cavm_pcieepvfx_dev_ctl2_t
#define bustype_CAVM_PCIEEPVFX_DEV_CTL2(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_DEV_CTL2(a) "PCIEEPVFX_DEV_CTL2"
#define busnum_CAVM_PCIEEPVFX_DEV_CTL2(a) (a)
#define arguments_CAVM_PCIEEPVFX_DEV_CTL2(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_e_cap_list
 *
 * PCIe VF PCIe Capabilities/PCIe Capabilities List Register
 */
union cavm_pcieepvfx_e_cap_list
{
    uint32_t u;
    struct cavm_pcieepvfx_e_cap_list_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_30_31        : 2;
        uint32_t imn                   : 5;  /**< [ 29: 25](RO) Read-only copy of the associated PF's PCIEEP_E_CAP_LIST[IMN]. */
        uint32_t si                    : 1;  /**< [ 24: 24](RO) Read-only copy of the associated PF's PCIEEP_E_CAP_LIST[SI]. */
        uint32_t dpt                   : 4;  /**< [ 23: 20](RO) Read-only copy of the associated PF's PCIEEP_E_CAP_LIST[DPT]. */
        uint32_t pciecv                : 4;  /**< [ 19: 16](RO) Read-only copy of the associated PF's PCIEEP_E_CAP_LIST[PCIECV]. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO) Next capability pointer. Points to the MSI-X capabilities by default. */
        uint32_t pcieid                : 8;  /**< [  7:  0](RO) PCI Express capability ID. */
#else /* Word 0 - Little Endian */
        uint32_t pcieid                : 8;  /**< [  7:  0](RO) PCI Express capability ID. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO) Next capability pointer. Points to the MSI-X capabilities by default. */
        uint32_t pciecv                : 4;  /**< [ 19: 16](RO) Read-only copy of the associated PF's PCIEEP_E_CAP_LIST[PCIECV]. */
        uint32_t dpt                   : 4;  /**< [ 23: 20](RO) Read-only copy of the associated PF's PCIEEP_E_CAP_LIST[DPT]. */
        uint32_t si                    : 1;  /**< [ 24: 24](RO) Read-only copy of the associated PF's PCIEEP_E_CAP_LIST[SI]. */
        uint32_t imn                   : 5;  /**< [ 29: 25](RO) Read-only copy of the associated PF's PCIEEP_E_CAP_LIST[IMN]. */
        uint32_t reserved_30_31        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_e_cap_list_s cn; */
};
typedef union cavm_pcieepvfx_e_cap_list cavm_pcieepvfx_e_cap_list_t;

static inline uint64_t CAVM_PCIEEPVFX_E_CAP_LIST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_E_CAP_LIST(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x70 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x70 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x70 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x70 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_E_CAP_LIST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_E_CAP_LIST(a) cavm_pcieepvfx_e_cap_list_t
#define bustype_CAVM_PCIEEPVFX_E_CAP_LIST(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_E_CAP_LIST(a) "PCIEEPVFX_E_CAP_LIST"
#define busnum_CAVM_PCIEEPVFX_E_CAP_LIST(a) (a)
#define arguments_CAVM_PCIEEPVFX_E_CAP_LIST(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_ebar
 *
 * PCIe VF Expansion ROM Base Address Register
 */
union cavm_pcieepvfx_ebar
{
    uint32_t u;
    struct cavm_pcieepvfx_ebar_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t eraddr                : 13; /**< [ 31: 19](RO) Read-only copy of the associated PF's PCIEEP_EBAR[ERADDR]. */
        uint32_t reserved_1_18         : 18;
        uint32_t er_en                 : 1;  /**< [  0:  0](RO) Read-only copy of the associated PF's PCIEEP_EBAR[ER_EN]. */
#else /* Word 0 - Little Endian */
        uint32_t er_en                 : 1;  /**< [  0:  0](RO) Read-only copy of the associated PF's PCIEEP_EBAR[ER_EN]. */
        uint32_t reserved_1_18         : 18;
        uint32_t eraddr                : 13; /**< [ 31: 19](RO) Read-only copy of the associated PF's PCIEEP_EBAR[ERADDR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_ebar_s cn; */
};
typedef union cavm_pcieepvfx_ebar cavm_pcieepvfx_ebar_t;

static inline uint64_t CAVM_PCIEEPVFX_EBAR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_EBAR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x30 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x30 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x30 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x30 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_EBAR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_EBAR(a) cavm_pcieepvfx_ebar_t
#define bustype_CAVM_PCIEEPVFX_EBAR(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_EBAR(a) "PCIEEPVFX_EBAR"
#define busnum_CAVM_PCIEEPVFX_EBAR(a) (a)
#define arguments_CAVM_PCIEEPVFX_EBAR(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_ext_cap
 *
 * PCIe VF PCI Express ARI Extended Capability Register
 */
union cavm_pcieepvfx_ext_cap
{
    uint32_t u;
    struct cavm_pcieepvfx_ext_cap_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t ariid                 : 16; /**< [ 15:  0](RO/WRSL) PCIE Express extended capability. */
#else /* Word 0 - Little Endian */
        uint32_t ariid                 : 16; /**< [ 15:  0](RO/WRSL) PCIE Express extended capability. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL(). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_ext_cap_s cn; */
};
typedef union cavm_pcieepvfx_ext_cap cavm_pcieepvfx_ext_cap_t;

static inline uint64_t CAVM_PCIEEPVFX_EXT_CAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_EXT_CAP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x100 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x100 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x100 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x100 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_EXT_CAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_EXT_CAP(a) cavm_pcieepvfx_ext_cap_t
#define bustype_CAVM_PCIEEPVFX_EXT_CAP(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_EXT_CAP(a) "PCIEEPVFX_EXT_CAP"
#define busnum_CAVM_PCIEEPVFX_EXT_CAP(a) (a)
#define arguments_CAVM_PCIEEPVFX_EXT_CAP(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_id
 *
 * PCIe VF Vendor and Device Register
 */
union cavm_pcieepvfx_id
{
    uint32_t u;
    struct cavm_pcieepvfx_id_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t devid                 : 16; /**< [ 31: 16](RO) Device ID. For SR-IOV VFs always 0xFFFF. */
        uint32_t vendid                : 16; /**< [ 15:  0](RO) Vendor ID. For SR-IOV VFs always 0xFFFF. */
#else /* Word 0 - Little Endian */
        uint32_t vendid                : 16; /**< [ 15:  0](RO) Vendor ID. For SR-IOV VFs always 0xFFFF. */
        uint32_t devid                 : 16; /**< [ 31: 16](RO) Device ID. For SR-IOV VFs always 0xFFFF. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_id_s cn; */
};
typedef union cavm_pcieepvfx_id cavm_pcieepvfx_id_t;

static inline uint64_t CAVM_PCIEEPVFX_ID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_ID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_ID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_ID(a) cavm_pcieepvfx_id_t
#define bustype_CAVM_PCIEEPVFX_ID(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_ID(a) "PCIEEPVFX_ID"
#define busnum_CAVM_PCIEEPVFX_ID(a) (a)
#define arguments_CAVM_PCIEEPVFX_ID(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_int
 *
 * PCIe VF Interrupt Line/Interrupt Pin/Bridge Control Register
 */
union cavm_pcieepvfx_int
{
    uint32_t u;
    struct cavm_pcieepvfx_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ml                    : 8;  /**< [ 31: 24](RO/H) VF's read-only zeros. */
        uint32_t mg                    : 8;  /**< [ 23: 16](RO/H) VF's read-only zeros. */
        uint32_t inta                  : 8;  /**< [ 15:  8](RO) VF's read-only zeros. */
        uint32_t il                    : 8;  /**< [  7:  0](RO) VF's read-only zeros. */
#else /* Word 0 - Little Endian */
        uint32_t il                    : 8;  /**< [  7:  0](RO) VF's read-only zeros. */
        uint32_t inta                  : 8;  /**< [ 15:  8](RO) VF's read-only zeros. */
        uint32_t mg                    : 8;  /**< [ 23: 16](RO/H) VF's read-only zeros. */
        uint32_t ml                    : 8;  /**< [ 31: 24](RO/H) VF's read-only zeros. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_int_s cn; */
};
typedef union cavm_pcieepvfx_int cavm_pcieepvfx_int_t;

static inline uint64_t CAVM_PCIEEPVFX_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_INT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x3c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x3c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x3c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x3c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_INT(a) cavm_pcieepvfx_int_t
#define bustype_CAVM_PCIEEPVFX_INT(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_INT(a) "PCIEEPVFX_INT"
#define busnum_CAVM_PCIEEPVFX_INT(a) (a)
#define arguments_CAVM_PCIEEPVFX_INT(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_link_cap
 *
 * PCIe VF Link Capabilities Register
 */
union cavm_pcieepvfx_link_cap
{
    uint32_t u;
    struct cavm_pcieepvfx_link_cap_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t pnum                  : 8;  /**< [ 31: 24](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[PNUM]. */
        uint32_t reserved_23           : 1;
        uint32_t aspm                  : 1;  /**< [ 22: 22](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[ASPM]. */
        uint32_t lbnc                  : 1;  /**< [ 21: 21](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[LBNC]. */
        uint32_t dllarc                : 1;  /**< [ 20: 20](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[DLLARC]. */
        uint32_t sderc                 : 1;  /**< [ 19: 19](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[SDERC]. */
        uint32_t cpm                   : 1;  /**< [ 18: 18](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[CPM]. */
        uint32_t l1el                  : 3;  /**< [ 17: 15](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[L1EL]. */
        uint32_t l0el                  : 3;  /**< [ 14: 12](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[L0EL]. */
        uint32_t aslpms                : 2;  /**< [ 11: 10](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[ASLPMS]. */
        uint32_t mlw                   : 6;  /**< [  9:  4](RO/H) Read-only copy of the associated PF's PCIEEP_LINK_CAP[MLW]. */
        uint32_t mls                   : 4;  /**< [  3:  0](RO/H) Read-only copy of the associated PF's PCIEEP_LINK_CAP[MLS]. */
#else /* Word 0 - Little Endian */
        uint32_t mls                   : 4;  /**< [  3:  0](RO/H) Read-only copy of the associated PF's PCIEEP_LINK_CAP[MLS]. */
        uint32_t mlw                   : 6;  /**< [  9:  4](RO/H) Read-only copy of the associated PF's PCIEEP_LINK_CAP[MLW]. */
        uint32_t aslpms                : 2;  /**< [ 11: 10](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[ASLPMS]. */
        uint32_t l0el                  : 3;  /**< [ 14: 12](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[L0EL]. */
        uint32_t l1el                  : 3;  /**< [ 17: 15](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[L1EL]. */
        uint32_t cpm                   : 1;  /**< [ 18: 18](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[CPM]. */
        uint32_t sderc                 : 1;  /**< [ 19: 19](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[SDERC]. */
        uint32_t dllarc                : 1;  /**< [ 20: 20](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[DLLARC]. */
        uint32_t lbnc                  : 1;  /**< [ 21: 21](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[LBNC]. */
        uint32_t aspm                  : 1;  /**< [ 22: 22](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[ASPM]. */
        uint32_t reserved_23           : 1;
        uint32_t pnum                  : 8;  /**< [ 31: 24](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[PNUM]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_link_cap_s cn; */
};
typedef union cavm_pcieepvfx_link_cap cavm_pcieepvfx_link_cap_t;

static inline uint64_t CAVM_PCIEEPVFX_LINK_CAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_LINK_CAP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x7c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x7c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x7c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x7c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_LINK_CAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_LINK_CAP(a) cavm_pcieepvfx_link_cap_t
#define bustype_CAVM_PCIEEPVFX_LINK_CAP(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_LINK_CAP(a) "PCIEEPVFX_LINK_CAP"
#define busnum_CAVM_PCIEEPVFX_LINK_CAP(a) (a)
#define arguments_CAVM_PCIEEPVFX_LINK_CAP(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_link_cap2
 *
 * PCIe VF Link Capabilities 2 Register
 */
union cavm_pcieepvfx_link_cap2
{
    uint32_t u;
    struct cavm_pcieepvfx_link_cap2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_25_31        : 7;
        uint32_t trtds                 : 1;  /**< [ 24: 24](RO) Two retimers presence detect supported. */
        uint32_t rtds                  : 1;  /**< [ 23: 23](RO) Retimer presence detect supported. */
        uint32_t reserved_9_22         : 14;
        uint32_t cls                   : 1;  /**< [  8:  8](RO) Crosslink supported. */
        uint32_t slsv                  : 7;  /**< [  7:  1](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP2[SLSV]. */
        uint32_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0            : 1;
        uint32_t slsv                  : 7;  /**< [  7:  1](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP2[SLSV]. */
        uint32_t cls                   : 1;  /**< [  8:  8](RO) Crosslink supported. */
        uint32_t reserved_9_22         : 14;
        uint32_t rtds                  : 1;  /**< [ 23: 23](RO) Retimer presence detect supported. */
        uint32_t trtds                 : 1;  /**< [ 24: 24](RO) Two retimers presence detect supported. */
        uint32_t reserved_25_31        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_link_cap2_s cn; */
};
typedef union cavm_pcieepvfx_link_cap2 cavm_pcieepvfx_link_cap2_t;

static inline uint64_t CAVM_PCIEEPVFX_LINK_CAP2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_LINK_CAP2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x9c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x9c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x9c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x9c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_LINK_CAP2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_LINK_CAP2(a) cavm_pcieepvfx_link_cap2_t
#define bustype_CAVM_PCIEEPVFX_LINK_CAP2(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_LINK_CAP2(a) "PCIEEPVFX_LINK_CAP2"
#define busnum_CAVM_PCIEEPVFX_LINK_CAP2(a) (a)
#define arguments_CAVM_PCIEEPVFX_LINK_CAP2(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_link_ctl
 *
 * PCIe VF Link Control/Link Status Register
 */
union cavm_pcieepvfx_link_ctl
{
    uint32_t u;
    struct cavm_pcieepvfx_link_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lab                   : 1;  /**< [ 31: 31](RO/H) Link autonomous bandwdith status. */
        uint32_t lbm                   : 1;  /**< [ 30: 30](RO/H) Link bandwidth management status. */
        uint32_t dlla                  : 1;  /**< [ 29: 29](RO) Data link layer active. Not applicable for an upstream port or endpoint device, hardwired to 0. */
        uint32_t scc                   : 1;  /**< [ 28: 28](RO) Slot clock configuration. Indicates that the component uses the same physical reference
                                                                 clock that the platform provides on the connector. Writable through PEM()_CFG_TBL(). */
        uint32_t lt                    : 1;  /**< [ 27: 27](RO) Link training. Not applicable for an upstream port or endpoint device, hardwired to 0. */
        uint32_t reserved_26           : 1;
        uint32_t nlw                   : 6;  /**< [ 25: 20](RO/H) Negotiated link width. Set automatically by hardware after link initialization. Value is
                                                                 undefined when link is not up. */
        uint32_t ls                    : 4;  /**< [ 19: 16](RO/H) Current link speed. The encoded value specifies a bit location in the supported link
                                                                 speeds vector (in the link capabilities 2 register) that corresponds to the current link
                                                                 speed.
                                                                 0x1 = Supported link speeds vector field bit 0.
                                                                 0x2 = Supported link speeds vector field bit 1.
                                                                 0x3 = Supported link speeds vector field bit 2. */
        uint32_t drs_sc                : 2;  /**< [ 15: 14](RO) DRS signaling control. */
        uint32_t reserved_12_13        : 2;
        uint32_t lab_int_enb           : 1;  /**< [ 11: 11](RO) Link autonomous bandwidth interrupt enable. This bit is not applicable and is reserved for
                                                                 endpoints. */
        uint32_t lbm_int_enb           : 1;  /**< [ 10: 10](RO) Link bandwidth management interrupt enable. This bit is not applicable and is reserved for
                                                                 endpoints. */
        uint32_t hawd                  : 1;  /**< [  9:  9](RAZ) VF RsvdP. */
        uint32_t ecpm                  : 1;  /**< [  8:  8](RAZ) VF RsvdP. */
        uint32_t es                    : 1;  /**< [  7:  7](RAZ) VF RsvdP. */
        uint32_t ccc                   : 1;  /**< [  6:  6](RAZ) VF RsvdP. */
        uint32_t rl                    : 1;  /**< [  5:  5](RO) Retrain link. Not applicable for an upstream port or endpoint device. Hardwired to 0. */
        uint32_t ld                    : 1;  /**< [  4:  4](RO) Link disable. Not applicable for an upstream port or endpoint device. Hardwired to 0. */
        uint32_t rcb                   : 1;  /**< [  3:  3](RAZ) VF RsvdP. */
        uint32_t reserved_2            : 1;
        uint32_t aslpc                 : 2;  /**< [  1:  0](RAZ) VF RsvdP. */
#else /* Word 0 - Little Endian */
        uint32_t aslpc                 : 2;  /**< [  1:  0](RAZ) VF RsvdP. */
        uint32_t reserved_2            : 1;
        uint32_t rcb                   : 1;  /**< [  3:  3](RAZ) VF RsvdP. */
        uint32_t ld                    : 1;  /**< [  4:  4](RO) Link disable. Not applicable for an upstream port or endpoint device. Hardwired to 0. */
        uint32_t rl                    : 1;  /**< [  5:  5](RO) Retrain link. Not applicable for an upstream port or endpoint device. Hardwired to 0. */
        uint32_t ccc                   : 1;  /**< [  6:  6](RAZ) VF RsvdP. */
        uint32_t es                    : 1;  /**< [  7:  7](RAZ) VF RsvdP. */
        uint32_t ecpm                  : 1;  /**< [  8:  8](RAZ) VF RsvdP. */
        uint32_t hawd                  : 1;  /**< [  9:  9](RAZ) VF RsvdP. */
        uint32_t lbm_int_enb           : 1;  /**< [ 10: 10](RO) Link bandwidth management interrupt enable. This bit is not applicable and is reserved for
                                                                 endpoints. */
        uint32_t lab_int_enb           : 1;  /**< [ 11: 11](RO) Link autonomous bandwidth interrupt enable. This bit is not applicable and is reserved for
                                                                 endpoints. */
        uint32_t reserved_12_13        : 2;
        uint32_t drs_sc                : 2;  /**< [ 15: 14](RO) DRS signaling control. */
        uint32_t ls                    : 4;  /**< [ 19: 16](RO/H) Current link speed. The encoded value specifies a bit location in the supported link
                                                                 speeds vector (in the link capabilities 2 register) that corresponds to the current link
                                                                 speed.
                                                                 0x1 = Supported link speeds vector field bit 0.
                                                                 0x2 = Supported link speeds vector field bit 1.
                                                                 0x3 = Supported link speeds vector field bit 2. */
        uint32_t nlw                   : 6;  /**< [ 25: 20](RO/H) Negotiated link width. Set automatically by hardware after link initialization. Value is
                                                                 undefined when link is not up. */
        uint32_t reserved_26           : 1;
        uint32_t lt                    : 1;  /**< [ 27: 27](RO) Link training. Not applicable for an upstream port or endpoint device, hardwired to 0. */
        uint32_t scc                   : 1;  /**< [ 28: 28](RO) Slot clock configuration. Indicates that the component uses the same physical reference
                                                                 clock that the platform provides on the connector. Writable through PEM()_CFG_TBL(). */
        uint32_t dlla                  : 1;  /**< [ 29: 29](RO) Data link layer active. Not applicable for an upstream port or endpoint device, hardwired to 0. */
        uint32_t lbm                   : 1;  /**< [ 30: 30](RO/H) Link bandwidth management status. */
        uint32_t lab                   : 1;  /**< [ 31: 31](RO/H) Link autonomous bandwdith status. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_link_ctl_s cn; */
};
typedef union cavm_pcieepvfx_link_ctl cavm_pcieepvfx_link_ctl_t;

static inline uint64_t CAVM_PCIEEPVFX_LINK_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_LINK_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x80 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x80 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x80 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x80 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_LINK_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_LINK_CTL(a) cavm_pcieepvfx_link_ctl_t
#define bustype_CAVM_PCIEEPVFX_LINK_CTL(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_LINK_CTL(a) "PCIEEPVFX_LINK_CTL"
#define busnum_CAVM_PCIEEPVFX_LINK_CTL(a) (a)
#define arguments_CAVM_PCIEEPVFX_LINK_CTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_link_ctl2
 *
 * PCIe VF Link Control 2 Register/Link Status 2 Register
 */
union cavm_pcieepvfx_link_ctl2
{
    uint32_t u;
    struct cavm_pcieepvfx_link_ctl2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t drs_mr                : 1;  /**< [ 31: 31](RO) DRS message received. */
        uint32_t dcp                   : 3;  /**< [ 30: 28](RO) Downstream component presence. */
        uint32_t reserved_26_27        : 2;
        uint32_t clr                   : 2;  /**< [ 25: 24](RO) Crosslink resolution (not supported). */
        uint32_t trtd                  : 1;  /**< [ 23: 23](RO) Two retimers presence detected. */
        uint32_t rtd                   : 1;  /**< [ 22: 22](RO) Retimer presence detected. */
        uint32_t ler                   : 1;  /**< [ 21: 21](RO) 8.0 GT/s Link Equalization Request. */
        uint32_t ep3s                  : 1;  /**< [ 20: 20](RO/H) Equalization 8.0 GT/s phase 3 successful. */
        uint32_t ep2s                  : 1;  /**< [ 19: 19](RO/H) Equalization 8.0 GT/s phase 2 successful. */
        uint32_t ep1s                  : 1;  /**< [ 18: 18](RO/H) Equalization 8.0 GT/s phase 2 successful. */
        uint32_t eqc                   : 1;  /**< [ 17: 17](RO/H) Equalization 8.0 GT/s complete. */
        uint32_t cdl                   : 1;  /**< [ 16: 16](RO/H) Read-only copy of the associated PF's PCIEEP_LINK_CTL2[CDL]. */
        uint32_t cde                   : 4;  /**< [ 15: 12](RO) VF's read-only zeros. */
        uint32_t csos                  : 1;  /**< [ 11: 11](RO) VF's read-only zeros. */
        uint32_t emc                   : 1;  /**< [ 10: 10](RO) VF's read-only zeros. */
        uint32_t tm                    : 3;  /**< [  9:  7](RO/H) VF's read-only zeros. */
        uint32_t sde                   : 1;  /**< [  6:  6](RO) VF's read-only zeros. */
        uint32_t hasd                  : 1;  /**< [  5:  5](RO/H) VF's read-only zeros. */
        uint32_t ec                    : 1;  /**< [  4:  4](RO) VF's read-only zeros. */
        uint32_t tls                   : 4;  /**< [  3:  0](RO/H) VF's read-only zeros. */
#else /* Word 0 - Little Endian */
        uint32_t tls                   : 4;  /**< [  3:  0](RO/H) VF's read-only zeros. */
        uint32_t ec                    : 1;  /**< [  4:  4](RO) VF's read-only zeros. */
        uint32_t hasd                  : 1;  /**< [  5:  5](RO/H) VF's read-only zeros. */
        uint32_t sde                   : 1;  /**< [  6:  6](RO) VF's read-only zeros. */
        uint32_t tm                    : 3;  /**< [  9:  7](RO/H) VF's read-only zeros. */
        uint32_t emc                   : 1;  /**< [ 10: 10](RO) VF's read-only zeros. */
        uint32_t csos                  : 1;  /**< [ 11: 11](RO) VF's read-only zeros. */
        uint32_t cde                   : 4;  /**< [ 15: 12](RO) VF's read-only zeros. */
        uint32_t cdl                   : 1;  /**< [ 16: 16](RO/H) Read-only copy of the associated PF's PCIEEP_LINK_CTL2[CDL]. */
        uint32_t eqc                   : 1;  /**< [ 17: 17](RO/H) Equalization 8.0 GT/s complete. */
        uint32_t ep1s                  : 1;  /**< [ 18: 18](RO/H) Equalization 8.0 GT/s phase 2 successful. */
        uint32_t ep2s                  : 1;  /**< [ 19: 19](RO/H) Equalization 8.0 GT/s phase 2 successful. */
        uint32_t ep3s                  : 1;  /**< [ 20: 20](RO/H) Equalization 8.0 GT/s phase 3 successful. */
        uint32_t ler                   : 1;  /**< [ 21: 21](RO) 8.0 GT/s Link Equalization Request. */
        uint32_t rtd                   : 1;  /**< [ 22: 22](RO) Retimer presence detected. */
        uint32_t trtd                  : 1;  /**< [ 23: 23](RO) Two retimers presence detected. */
        uint32_t clr                   : 2;  /**< [ 25: 24](RO) Crosslink resolution (not supported). */
        uint32_t reserved_26_27        : 2;
        uint32_t dcp                   : 3;  /**< [ 30: 28](RO) Downstream component presence. */
        uint32_t drs_mr                : 1;  /**< [ 31: 31](RO) DRS message received. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_link_ctl2_s cn; */
};
typedef union cavm_pcieepvfx_link_ctl2 cavm_pcieepvfx_link_ctl2_t;

static inline uint64_t CAVM_PCIEEPVFX_LINK_CTL2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_LINK_CTL2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0xa0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0xa0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0xa0 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0xa0 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_LINK_CTL2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_LINK_CTL2(a) cavm_pcieepvfx_link_ctl2_t
#define bustype_CAVM_PCIEEPVFX_LINK_CTL2(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_LINK_CTL2(a) "PCIEEPVFX_LINK_CTL2"
#define busnum_CAVM_PCIEEPVFX_LINK_CTL2(a) (a)
#define arguments_CAVM_PCIEEPVFX_LINK_CTL2(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_msix_cap_cntrl
 *
 * PCIe VF PCI Express MSI-X Capability ID/MSI-X Next Item Pointer/MSI-X Control Register
 */
union cavm_pcieepvfx_msix_cap_cntrl
{
    uint32_t u;
    struct cavm_pcieepvfx_msix_cap_cntrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msixen                : 1;  /**< [ 31: 31](R/W) MSI-X enable. */
        uint32_t funm                  : 1;  /**< [ 30: 30](R/W) Function mask.
                                                                 0 = Each vectors mask bit determines whether the vector is masked or not.
                                                                 1 = All vectors associated with the function are masked, regardless of their respective
                                                                 per-vector mask bits. */
        uint32_t reserved_27_29        : 3;
        uint32_t msixts                : 11; /**< [ 26: 16](RO) MSI-X table size encoded as (table size - 1).

                                                                 This field is writable through PEM()_CFG_WR to PCIEEPVF_MSIX_CAP_CNTRL_SHADOW.
                                                                 All VFs in a single PF have the same value for MSI-X Table Size. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO) Next capability pointer. */
        uint32_t msixcid               : 8;  /**< [  7:  0](RO) MSI-X capability ID. */
#else /* Word 0 - Little Endian */
        uint32_t msixcid               : 8;  /**< [  7:  0](RO) MSI-X capability ID. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO) Next capability pointer. */
        uint32_t msixts                : 11; /**< [ 26: 16](RO) MSI-X table size encoded as (table size - 1).

                                                                 This field is writable through PEM()_CFG_WR to PCIEEPVF_MSIX_CAP_CNTRL_SHADOW.
                                                                 All VFs in a single PF have the same value for MSI-X Table Size. */
        uint32_t reserved_27_29        : 3;
        uint32_t funm                  : 1;  /**< [ 30: 30](R/W) Function mask.
                                                                 0 = Each vectors mask bit determines whether the vector is masked or not.
                                                                 1 = All vectors associated with the function are masked, regardless of their respective
                                                                 per-vector mask bits. */
        uint32_t msixen                : 1;  /**< [ 31: 31](R/W) MSI-X enable. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_msix_cap_cntrl_s cn; */
};
typedef union cavm_pcieepvfx_msix_cap_cntrl cavm_pcieepvfx_msix_cap_cntrl_t;

static inline uint64_t CAVM_PCIEEPVFX_MSIX_CAP_CNTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_MSIX_CAP_CNTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0xb0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0xb0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0xb0 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0xb0 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_MSIX_CAP_CNTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_MSIX_CAP_CNTRL(a) cavm_pcieepvfx_msix_cap_cntrl_t
#define bustype_CAVM_PCIEEPVFX_MSIX_CAP_CNTRL(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_MSIX_CAP_CNTRL(a) "PCIEEPVFX_MSIX_CAP_CNTRL"
#define busnum_CAVM_PCIEEPVFX_MSIX_CAP_CNTRL(a) (a)
#define arguments_CAVM_PCIEEPVFX_MSIX_CAP_CNTRL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_msix_pba
 *
 * PCIe VF PCI Express MSI-X PBA Offset and BIR Register
 */
union cavm_pcieepvfx_msix_pba
{
    uint32_t u;
    struct cavm_pcieepvfx_msix_pba_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msixpoffs             : 29; /**< [ 31:  3](RO) MSI-X table offset register. Base address of the MSI-X PBA, as an offset from the base
                                                                 address of the BAR indicated by the table PBA bits. */
        uint32_t msixpbir              : 3;  /**< [  2:  0](RO) Read-only copy of the associated PF's PCIEEP_MSIX_PBA[MSIXPBIR]. */
#else /* Word 0 - Little Endian */
        uint32_t msixpbir              : 3;  /**< [  2:  0](RO) Read-only copy of the associated PF's PCIEEP_MSIX_PBA[MSIXPBIR]. */
        uint32_t msixpoffs             : 29; /**< [ 31:  3](RO) MSI-X table offset register. Base address of the MSI-X PBA, as an offset from the base
                                                                 address of the BAR indicated by the table PBA bits. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_msix_pba_s cn; */
};
typedef union cavm_pcieepvfx_msix_pba cavm_pcieepvfx_msix_pba_t;

static inline uint64_t CAVM_PCIEEPVFX_MSIX_PBA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_MSIX_PBA(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0xb8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0xb8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0xb8 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0xb8 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_MSIX_PBA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_MSIX_PBA(a) cavm_pcieepvfx_msix_pba_t
#define bustype_CAVM_PCIEEPVFX_MSIX_PBA(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_MSIX_PBA(a) "PCIEEPVFX_MSIX_PBA"
#define busnum_CAVM_PCIEEPVFX_MSIX_PBA(a) (a)
#define arguments_CAVM_PCIEEPVFX_MSIX_PBA(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_msix_table
 *
 * PCIe VF PCI Express MSI-X Table Offset and BIR Register
 */
union cavm_pcieepvfx_msix_table
{
    uint32_t u;
    struct cavm_pcieepvfx_msix_table_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msixtoffs             : 29; /**< [ 31:  3](RO) Read-only copy of the associated PF's PCIEEP_MSIX_TABLE[MSIXTOFFS]. */
        uint32_t msixtbir              : 3;  /**< [  2:  0](RO) Read-only copy of the associated PF's PCIEEP_MSIX_TABLE[MSIXTBIR]. */
#else /* Word 0 - Little Endian */
        uint32_t msixtbir              : 3;  /**< [  2:  0](RO) Read-only copy of the associated PF's PCIEEP_MSIX_TABLE[MSIXTBIR]. */
        uint32_t msixtoffs             : 29; /**< [ 31:  3](RO) Read-only copy of the associated PF's PCIEEP_MSIX_TABLE[MSIXTOFFS]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_msix_table_s cn; */
};
typedef union cavm_pcieepvfx_msix_table cavm_pcieepvfx_msix_table_t;

static inline uint64_t CAVM_PCIEEPVFX_MSIX_TABLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_MSIX_TABLE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0xb4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0xb4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0xb4 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0xb4 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_MSIX_TABLE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_MSIX_TABLE(a) cavm_pcieepvfx_msix_table_t
#define bustype_CAVM_PCIEEPVFX_MSIX_TABLE(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_MSIX_TABLE(a) "PCIEEPVFX_MSIX_TABLE"
#define busnum_CAVM_PCIEEPVFX_MSIX_TABLE(a) (a)
#define arguments_CAVM_PCIEEPVFX_MSIX_TABLE(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_rev
 *
 * PCIe VF Class Code/Revision ID Register
 */
union cavm_pcieepvfx_rev
{
    uint32_t u;
    struct cavm_pcieepvfx_rev_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bcc                   : 8;  /**< [ 31: 24](RO) Read-only copy of the associated PF's PCIEEP_REV[BCC]. */
        uint32_t sc                    : 8;  /**< [ 23: 16](RO) Read-only copy of the associated PF's PCIEEP_REV[SC]. */
        uint32_t pi                    : 8;  /**< [ 15:  8](RO) Read-only copy of the associated PF's PCIEEP_REV[PI]. */
        uint32_t rid                   : 8;  /**< [  7:  0](RO) Read-only copy of the associated PF's PCIEEP_REV[RID]. */
#else /* Word 0 - Little Endian */
        uint32_t rid                   : 8;  /**< [  7:  0](RO) Read-only copy of the associated PF's PCIEEP_REV[RID]. */
        uint32_t pi                    : 8;  /**< [ 15:  8](RO) Read-only copy of the associated PF's PCIEEP_REV[PI]. */
        uint32_t sc                    : 8;  /**< [ 23: 16](RO) Read-only copy of the associated PF's PCIEEP_REV[SC]. */
        uint32_t bcc                   : 8;  /**< [ 31: 24](RO) Read-only copy of the associated PF's PCIEEP_REV[BCC]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_rev_s cn; */
};
typedef union cavm_pcieepvfx_rev cavm_pcieepvfx_rev_t;

static inline uint64_t CAVM_PCIEEPVFX_REV(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_REV(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 8 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 8 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_REV", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_REV(a) cavm_pcieepvfx_rev_t
#define bustype_CAVM_PCIEEPVFX_REV(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_REV(a) "PCIEEPVFX_REV"
#define busnum_CAVM_PCIEEPVFX_REV(a) (a)
#define arguments_CAVM_PCIEEPVFX_REV(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf#_subsys
 *
 * PCIe VF SubSystem ID/Subsystem Vendor ID Register
 */
union cavm_pcieepvfx_subsys
{
    uint32_t u;
    struct cavm_pcieepvfx_subsys_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ssid                  : 16; /**< [ 31: 16](RO) Read-only copy of the associated PF's PCIEEP_SUBSYS[SSID]. */
        uint32_t ssvid                 : 16; /**< [ 15:  0](RO) Read-only copy of the associated PF's PCIEEP_SUBSYS[SSVID]. */
#else /* Word 0 - Little Endian */
        uint32_t ssvid                 : 16; /**< [ 15:  0](RO) Read-only copy of the associated PF's PCIEEP_SUBSYS[SSVID]. */
        uint32_t ssid                  : 16; /**< [ 31: 16](RO) Read-only copy of the associated PF's PCIEEP_SUBSYS[SSID]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_subsys_s cn; */
};
typedef union cavm_pcieepvfx_subsys cavm_pcieepvfx_subsys_t;

static inline uint64_t CAVM_PCIEEPVFX_SUBSYS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_SUBSYS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x2c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x2c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x2c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x2c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_SUBSYS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_SUBSYS(a) cavm_pcieepvfx_subsys_t
#define bustype_CAVM_PCIEEPVFX_SUBSYS(a) CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVFX_SUBSYS(a) "PCIEEPVFX_SUBSYS"
#define busnum_CAVM_PCIEEPVFX_SUBSYS(a) (a)
#define arguments_CAVM_PCIEEPVFX_SUBSYS(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_PCIEEPVF_H__ */
