#ifndef __CAVM_CSRS_BPHY_H__
#define __CAVM_CSRS_BPHY_H__
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
 * OcteonTX BPHY.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration bphy_bar_e
 *
 * BPHY Base Address Register Enumeration
 * Enumerates the base address registers which describe the memory
 * regions used by all BPHY blocks.
 */
#define CAVM_BPHY_BAR_E_BPHY_PF_BAR0 (0x860000000000ll)
#define CAVM_BPHY_BAR_E_BPHY_PF_BAR0_SIZE 0x8000000000ull
#define CAVM_BPHY_BAR_E_BPHY_PF_BAR2 (0x87e040000000ll)
#define CAVM_BPHY_BAR_E_BPHY_PF_BAR2_SIZE 0x8000000ull

/**
 * Enumeration psm_int_vec_e
 *
 * PSM MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_PSM_INT_VEC_E_AERRX(a) (0x21 + (a))
#define CAVM_PSM_INT_VEC_E_AERRX_HI(a) (0x23 + (a))
#define CAVM_PSM_INT_VEC_E_BCN_ERR (0x29)
#define CAVM_PSM_INT_VEC_E_DERRX(a) (0x1d + (a))
#define CAVM_PSM_INT_VEC_E_DERRX_HI(a) (0x1f + (a))
#define CAVM_PSM_INT_VEC_E_ERRINT (8)
#define CAVM_PSM_INT_VEC_E_GPINTX(a) (0 + (a))
#define CAVM_PSM_INT_VEC_E_JERRX(a) (0x11 + (a))
#define CAVM_PSM_INT_VEC_E_JERRX_HI(a) (0x13 + (a))
#define CAVM_PSM_INT_VEC_E_JNFATX(a) (0x15 + (a))
#define CAVM_PSM_INT_VEC_E_JNFATX_HI(a) (0x17 + (a))
#define CAVM_PSM_INT_VEC_E_JTOX(a) (0x19 + (a))
#define CAVM_PSM_INT_VEC_E_JTOX_HI(a) (0x1b + (a))
#define CAVM_PSM_INT_VEC_E_MTOX(a) (0x25 + (a))
#define CAVM_PSM_INT_VEC_E_MTOX_HI(a) (0x27 + (a))
#define CAVM_PSM_INT_VEC_E_QOVFX(a) (9 + (a))
#define CAVM_PSM_INT_VEC_E_QTOX(a) (0xd + (a))
#define CAVM_PSM_INT_VEC_E_TIMER (0x29)

/**
 * Register (NCB) psm_int_bcn_err_ena_w1c
 *
 * PHY Scheduler BCN Error Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_psm_int_bcn_err_ena_w1c
{
    uint64_t u;
    struct cavm_psm_int_bcn_err_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t bcn_crc_err           : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for PSM_INT_BCN_ERR_SUM_W1C[BCN_CRC_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t bcn_crc_err           : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for PSM_INT_BCN_ERR_SUM_W1C[BCN_CRC_ERR]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_bcn_err_ena_w1c_s cn; */
};
typedef union cavm_psm_int_bcn_err_ena_w1c cavm_psm_int_bcn_err_ena_w1c_t;

#define CAVM_PSM_INT_BCN_ERR_ENA_W1C CAVM_PSM_INT_BCN_ERR_ENA_W1C_FUNC()
static inline uint64_t CAVM_PSM_INT_BCN_ERR_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_BCN_ERR_ENA_W1C_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x8600010e0f80ll;
    __cavm_csr_fatal("PSM_INT_BCN_ERR_ENA_W1C", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_BCN_ERR_ENA_W1C cavm_psm_int_bcn_err_ena_w1c_t
#define bustype_CAVM_PSM_INT_BCN_ERR_ENA_W1C CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_BCN_ERR_ENA_W1C "PSM_INT_BCN_ERR_ENA_W1C"
#define device_bar_CAVM_PSM_INT_BCN_ERR_ENA_W1C 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_BCN_ERR_ENA_W1C 0
#define arguments_CAVM_PSM_INT_BCN_ERR_ENA_W1C -1,-1,-1,-1

/**
 * Register (NCB) psm_int_bcn_err_ena_w1s
 *
 * PHY Scheduler BCN Error Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_psm_int_bcn_err_ena_w1s
{
    uint64_t u;
    struct cavm_psm_int_bcn_err_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t bcn_crc_err           : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for PSM_INT_BCN_ERR_SUM_W1C[BCN_CRC_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t bcn_crc_err           : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for PSM_INT_BCN_ERR_SUM_W1C[BCN_CRC_ERR]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_bcn_err_ena_w1s_s cn; */
};
typedef union cavm_psm_int_bcn_err_ena_w1s cavm_psm_int_bcn_err_ena_w1s_t;

#define CAVM_PSM_INT_BCN_ERR_ENA_W1S CAVM_PSM_INT_BCN_ERR_ENA_W1S_FUNC()
static inline uint64_t CAVM_PSM_INT_BCN_ERR_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_BCN_ERR_ENA_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x8600010e0fc0ll;
    __cavm_csr_fatal("PSM_INT_BCN_ERR_ENA_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_BCN_ERR_ENA_W1S cavm_psm_int_bcn_err_ena_w1s_t
#define bustype_CAVM_PSM_INT_BCN_ERR_ENA_W1S CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_BCN_ERR_ENA_W1S "PSM_INT_BCN_ERR_ENA_W1S"
#define device_bar_CAVM_PSM_INT_BCN_ERR_ENA_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_BCN_ERR_ENA_W1S 0
#define arguments_CAVM_PSM_INT_BCN_ERR_ENA_W1S -1,-1,-1,-1

/**
 * Register (NCB) psm_int_bcn_err_sum_w1c
 *
 * PHY Scheduler BCN Error Interrupt Register
 * This register reports the status of the BCN error interrupt.
 * Writing a 1 will clear the selected interrupt.  Writes of 0 are ignored.
 */
union cavm_psm_int_bcn_err_sum_w1c
{
    uint64_t u;
    struct cavm_psm_int_bcn_err_sum_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t bcn_crc_err           : 1;  /**< [  0:  0](R/W1C/H) The BCN received an RP1 burst with a CRC error. */
#else /* Word 0 - Little Endian */
        uint64_t bcn_crc_err           : 1;  /**< [  0:  0](R/W1C/H) The BCN received an RP1 burst with a CRC error. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_bcn_err_sum_w1c_s cn; */
};
typedef union cavm_psm_int_bcn_err_sum_w1c cavm_psm_int_bcn_err_sum_w1c_t;

#define CAVM_PSM_INT_BCN_ERR_SUM_W1C CAVM_PSM_INT_BCN_ERR_SUM_W1C_FUNC()
static inline uint64_t CAVM_PSM_INT_BCN_ERR_SUM_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_BCN_ERR_SUM_W1C_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x8600010e0f00ll;
    __cavm_csr_fatal("PSM_INT_BCN_ERR_SUM_W1C", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_BCN_ERR_SUM_W1C cavm_psm_int_bcn_err_sum_w1c_t
#define bustype_CAVM_PSM_INT_BCN_ERR_SUM_W1C CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_BCN_ERR_SUM_W1C "PSM_INT_BCN_ERR_SUM_W1C"
#define device_bar_CAVM_PSM_INT_BCN_ERR_SUM_W1C 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_BCN_ERR_SUM_W1C 0
#define arguments_CAVM_PSM_INT_BCN_ERR_SUM_W1C -1,-1,-1,-1

/**
 * Register (NCB) psm_int_bcn_err_sum_w1s
 *
 * PHY Scheduler BCN Error Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_psm_int_bcn_err_sum_w1s
{
    uint64_t u;
    struct cavm_psm_int_bcn_err_sum_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t bcn_crc_err           : 1;  /**< [  0:  0](R/W1S/H) Reads or sets PSM_INT_BCN_ERR_SUM_W1C[BCN_CRC_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t bcn_crc_err           : 1;  /**< [  0:  0](R/W1S/H) Reads or sets PSM_INT_BCN_ERR_SUM_W1C[BCN_CRC_ERR]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_bcn_err_sum_w1s_s cn; */
};
typedef union cavm_psm_int_bcn_err_sum_w1s cavm_psm_int_bcn_err_sum_w1s_t;

#define CAVM_PSM_INT_BCN_ERR_SUM_W1S CAVM_PSM_INT_BCN_ERR_SUM_W1S_FUNC()
static inline uint64_t CAVM_PSM_INT_BCN_ERR_SUM_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_BCN_ERR_SUM_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x8600010e0f40ll;
    __cavm_csr_fatal("PSM_INT_BCN_ERR_SUM_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_BCN_ERR_SUM_W1S cavm_psm_int_bcn_err_sum_w1s_t
#define bustype_CAVM_PSM_INT_BCN_ERR_SUM_W1S CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_BCN_ERR_SUM_W1S "PSM_INT_BCN_ERR_SUM_W1S"
#define device_bar_CAVM_PSM_INT_BCN_ERR_SUM_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_BCN_ERR_SUM_W1S 0
#define arguments_CAVM_PSM_INT_BCN_ERR_SUM_W1S -1,-1,-1,-1

/**
 * Register (NCB) psm_int_errint_ena_w1c
 *
 * PHY Scheduler Error Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_psm_int_errint_ena_w1c
{
    uint64_t u;
    struct cavm_psm_int_errint_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_19_63        : 45;
        uint64_t sof                   : 1;  /**< [ 18: 18](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[SOF]. */
        uint64_t sosf                  : 1;  /**< [ 17: 17](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[SOSF]. */
        uint64_t sw_enq_err            : 1;  /**< [ 16: 16](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[SW_ENQ_ERR]. */
        uint64_t sw_enq_to             : 1;  /**< [ 15: 15](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[SW_ENQ_TO]. */
        uint64_t cmd_dma_swerr         : 1;  /**< [ 14: 14](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[CMD_DMA_SWERR]. */
        uint64_t cmd_dma_to            : 1;  /**< [ 13: 13](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[CMD_DMA_TO]. */
        uint64_t cmd_dma_rderr         : 1;  /**< [ 12: 12](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[CMD_DMA_RDERR]. */
        uint64_t notif_err             : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[NOTIF_ERR]. */
        uint64_t notif_nxm             : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[NOTIF_NXM]. */
        uint64_t wrsts_nxm             : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[WRSTS_NXM]. */
        uint64_t log_nxm               : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[LOG_NXM]. */
        uint64_t reserved_5_7          : 3;
        uint64_t bcmd                  : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[BCMD]. */
        uint64_t lroll                 : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[LROLL]. */
        uint64_t lovf                  : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[LOVF]. */
        uint64_t bkpt                  : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[BKPT]. */
        uint64_t nerr                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[NERR]. */
#else /* Word 0 - Little Endian */
        uint64_t nerr                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[NERR]. */
        uint64_t bkpt                  : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[BKPT]. */
        uint64_t lovf                  : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[LOVF]. */
        uint64_t lroll                 : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[LROLL]. */
        uint64_t bcmd                  : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[BCMD]. */
        uint64_t reserved_5_7          : 3;
        uint64_t log_nxm               : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[LOG_NXM]. */
        uint64_t wrsts_nxm             : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[WRSTS_NXM]. */
        uint64_t notif_nxm             : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[NOTIF_NXM]. */
        uint64_t notif_err             : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[NOTIF_ERR]. */
        uint64_t cmd_dma_rderr         : 1;  /**< [ 12: 12](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[CMD_DMA_RDERR]. */
        uint64_t cmd_dma_to            : 1;  /**< [ 13: 13](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[CMD_DMA_TO]. */
        uint64_t cmd_dma_swerr         : 1;  /**< [ 14: 14](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[CMD_DMA_SWERR]. */
        uint64_t sw_enq_to             : 1;  /**< [ 15: 15](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[SW_ENQ_TO]. */
        uint64_t sw_enq_err            : 1;  /**< [ 16: 16](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[SW_ENQ_ERR]. */
        uint64_t sosf                  : 1;  /**< [ 17: 17](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[SOSF]. */
        uint64_t sof                   : 1;  /**< [ 18: 18](R/W1C/H) Reads or clears enable for PSM_INT_ERRINT_SUM_W1C[SOF]. */
        uint64_t reserved_19_63        : 45;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_errint_ena_w1c_s cn; */
};
typedef union cavm_psm_int_errint_ena_w1c cavm_psm_int_errint_ena_w1c_t;

#define CAVM_PSM_INT_ERRINT_ENA_W1C CAVM_PSM_INT_ERRINT_ENA_W1C_FUNC()
static inline uint64_t CAVM_PSM_INT_ERRINT_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_ERRINT_ENA_W1C_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x8600010e0e80ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x8600010e0e80ll;
    __cavm_csr_fatal("PSM_INT_ERRINT_ENA_W1C", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_ERRINT_ENA_W1C cavm_psm_int_errint_ena_w1c_t
#define bustype_CAVM_PSM_INT_ERRINT_ENA_W1C CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_ERRINT_ENA_W1C "PSM_INT_ERRINT_ENA_W1C"
#define device_bar_CAVM_PSM_INT_ERRINT_ENA_W1C 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_ERRINT_ENA_W1C 0
#define arguments_CAVM_PSM_INT_ERRINT_ENA_W1C -1,-1,-1,-1

/**
 * Register (NCB) psm_int_errint_ena_w1s
 *
 * PHY Scheduler Error Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_psm_int_errint_ena_w1s
{
    uint64_t u;
    struct cavm_psm_int_errint_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_19_63        : 45;
        uint64_t sof                   : 1;  /**< [ 18: 18](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[SOF]. */
        uint64_t sosf                  : 1;  /**< [ 17: 17](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[SOSF]. */
        uint64_t sw_enq_err            : 1;  /**< [ 16: 16](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[SW_ENQ_ERR]. */
        uint64_t sw_enq_to             : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[SW_ENQ_TO]. */
        uint64_t cmd_dma_swerr         : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[CMD_DMA_SWERR]. */
        uint64_t cmd_dma_to            : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[CMD_DMA_TO]. */
        uint64_t cmd_dma_rderr         : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[CMD_DMA_RDERR]. */
        uint64_t notif_err             : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[NOTIF_ERR]. */
        uint64_t notif_nxm             : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[NOTIF_NXM]. */
        uint64_t wrsts_nxm             : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[WRSTS_NXM]. */
        uint64_t log_nxm               : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[LOG_NXM]. */
        uint64_t reserved_5_7          : 3;
        uint64_t bcmd                  : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[BCMD]. */
        uint64_t lroll                 : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[LROLL]. */
        uint64_t lovf                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[LOVF]. */
        uint64_t bkpt                  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[BKPT]. */
        uint64_t nerr                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[NERR]. */
#else /* Word 0 - Little Endian */
        uint64_t nerr                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[NERR]. */
        uint64_t bkpt                  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[BKPT]. */
        uint64_t lovf                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[LOVF]. */
        uint64_t lroll                 : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[LROLL]. */
        uint64_t bcmd                  : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[BCMD]. */
        uint64_t reserved_5_7          : 3;
        uint64_t log_nxm               : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[LOG_NXM]. */
        uint64_t wrsts_nxm             : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[WRSTS_NXM]. */
        uint64_t notif_nxm             : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[NOTIF_NXM]. */
        uint64_t notif_err             : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[NOTIF_ERR]. */
        uint64_t cmd_dma_rderr         : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[CMD_DMA_RDERR]. */
        uint64_t cmd_dma_to            : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[CMD_DMA_TO]. */
        uint64_t cmd_dma_swerr         : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[CMD_DMA_SWERR]. */
        uint64_t sw_enq_to             : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[SW_ENQ_TO]. */
        uint64_t sw_enq_err            : 1;  /**< [ 16: 16](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[SW_ENQ_ERR]. */
        uint64_t sosf                  : 1;  /**< [ 17: 17](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[SOSF]. */
        uint64_t sof                   : 1;  /**< [ 18: 18](R/W1S/H) Reads or sets enable for PSM_INT_ERRINT_SUM_W1C[SOF]. */
        uint64_t reserved_19_63        : 45;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_errint_ena_w1s_s cn; */
};
typedef union cavm_psm_int_errint_ena_w1s cavm_psm_int_errint_ena_w1s_t;

#define CAVM_PSM_INT_ERRINT_ENA_W1S CAVM_PSM_INT_ERRINT_ENA_W1S_FUNC()
static inline uint64_t CAVM_PSM_INT_ERRINT_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_ERRINT_ENA_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x8600010e0ec0ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x8600010e0ec0ll;
    __cavm_csr_fatal("PSM_INT_ERRINT_ENA_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_ERRINT_ENA_W1S cavm_psm_int_errint_ena_w1s_t
#define bustype_CAVM_PSM_INT_ERRINT_ENA_W1S CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_ERRINT_ENA_W1S "PSM_INT_ERRINT_ENA_W1S"
#define device_bar_CAVM_PSM_INT_ERRINT_ENA_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_ERRINT_ENA_W1S 0
#define arguments_CAVM_PSM_INT_ERRINT_ENA_W1S -1,-1,-1,-1

/**
 * Register (NCB) psm_int_errint_sum_w1c
 *
 * PHY Scheduler Error Interrupt Status Register
 */
union cavm_psm_int_errint_sum_w1c
{
    uint64_t u;
    struct cavm_psm_int_errint_sum_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_19_63        : 45;
        uint64_t sof                   : 1;  /**< [ 18: 18](R/W1C/H) A start-of-frame was detected. */
        uint64_t sosf                  : 1;  /**< [ 17: 17](R/W1C/H) A start-of-subframe was detected. */
        uint64_t sw_enq_err            : 1;  /**< [ 16: 16](R/W1C/H) A Software Enqueue register was written while it was in the
                                                                 process of enqueuing a command. */
        uint64_t sw_enq_to             : 1;  /**< [ 15: 15](R/W1C/H) The Software Enqueue logic detected a timeout. */
        uint64_t cmd_dma_swerr         : 1;  /**< [ 14: 14](R/W1C/H) A command-list DMA channel configuration register was
                                                                 written while the channel was active. */
        uint64_t cmd_dma_to            : 1;  /**< [ 13: 13](R/W1C/H) The command-list DMA logic detected a timeout. */
        uint64_t cmd_dma_rderr         : 1;  /**< [ 12: 12](R/W1C/H) The PSM received a read response error for a command-list read
                                                                 read operation.  This could be a NXM (non-existent memory)
                                                                 error or a DBE error. */
        uint64_t notif_err             : 1;  /**< [ 11: 11](R/W1C/H) An ADDNOTIF command was processed that was addressed
                                                                 to an inactive notification ring. */
        uint64_t notif_nxm             : 1;  /**< [ 10: 10](R/W1C/H) The PSM received a NXM (non-existent memory) response for a
                                                                 notification-ring write operation. */
        uint64_t wrsts_nxm             : 1;  /**< [  9:  9](R/W1C/H) The PSM received a NXM (non-existent memory) response for a
                                                                 write-status write operation. */
        uint64_t log_nxm               : 1;  /**< [  8:  8](R/W1C/H) The PSM received a NXM (non-existent memory) response for a
                                                                 log write operation. */
        uint64_t reserved_5_7          : 3;
        uint64_t bcmd                  : 1;  /**< [  4:  4](R/W1C/H) An undefined or illegal queue command was encountered.  This can
                                                                 result from an undefined command opcode, a job (ADDJOB/CONTJOB) with
                                                                 an immediate-execution QID, a MAB response command in a queue, or a
                                                                 command from a MAB with an invalid QID.

                                                                 PSM_ERRCAP_QUEUE_BADCMD() and PSM_SET()_ERRCAP_MAB_BADCMD report which
                                                                 queue or MAB had a bad command. Details on the QID and op-code for the
                                                                 bad command can be found in either PSM_QUEUE()_INFO or
                                                                 PSM_MABFIFO_CTRL registers. */
        uint64_t lroll                 : 1;  /**< [  3:  3](R/W1C/H) The job log pointer rolled over within the circular buffer. */
        uint64_t lovf                  : 1;  /**< [  2:  2](R/W1C/H) The job log write buffer overflowed before the log data could be
                                                                 written to system memory. */
        uint64_t bkpt                  : 1;  /**< [  1:  1](R/W1C/H) Trace interrupt from either a job completion or a job dispatch according
                                                                 to the debug breakpoint settings. */
        uint64_t nerr                  : 1;  /**< [  0:  0](R/W1C/H) An error occurred during an NCB operation.  This can include an
                                                                 unsupported operation such as a byte-write. */
#else /* Word 0 - Little Endian */
        uint64_t nerr                  : 1;  /**< [  0:  0](R/W1C/H) An error occurred during an NCB operation.  This can include an
                                                                 unsupported operation such as a byte-write. */
        uint64_t bkpt                  : 1;  /**< [  1:  1](R/W1C/H) Trace interrupt from either a job completion or a job dispatch according
                                                                 to the debug breakpoint settings. */
        uint64_t lovf                  : 1;  /**< [  2:  2](R/W1C/H) The job log write buffer overflowed before the log data could be
                                                                 written to system memory. */
        uint64_t lroll                 : 1;  /**< [  3:  3](R/W1C/H) The job log pointer rolled over within the circular buffer. */
        uint64_t bcmd                  : 1;  /**< [  4:  4](R/W1C/H) An undefined or illegal queue command was encountered.  This can
                                                                 result from an undefined command opcode, a job (ADDJOB/CONTJOB) with
                                                                 an immediate-execution QID, a MAB response command in a queue, or a
                                                                 command from a MAB with an invalid QID.

                                                                 PSM_ERRCAP_QUEUE_BADCMD() and PSM_SET()_ERRCAP_MAB_BADCMD report which
                                                                 queue or MAB had a bad command. Details on the QID and op-code for the
                                                                 bad command can be found in either PSM_QUEUE()_INFO or
                                                                 PSM_MABFIFO_CTRL registers. */
        uint64_t reserved_5_7          : 3;
        uint64_t log_nxm               : 1;  /**< [  8:  8](R/W1C/H) The PSM received a NXM (non-existent memory) response for a
                                                                 log write operation. */
        uint64_t wrsts_nxm             : 1;  /**< [  9:  9](R/W1C/H) The PSM received a NXM (non-existent memory) response for a
                                                                 write-status write operation. */
        uint64_t notif_nxm             : 1;  /**< [ 10: 10](R/W1C/H) The PSM received a NXM (non-existent memory) response for a
                                                                 notification-ring write operation. */
        uint64_t notif_err             : 1;  /**< [ 11: 11](R/W1C/H) An ADDNOTIF command was processed that was addressed
                                                                 to an inactive notification ring. */
        uint64_t cmd_dma_rderr         : 1;  /**< [ 12: 12](R/W1C/H) The PSM received a read response error for a command-list read
                                                                 read operation.  This could be a NXM (non-existent memory)
                                                                 error or a DBE error. */
        uint64_t cmd_dma_to            : 1;  /**< [ 13: 13](R/W1C/H) The command-list DMA logic detected a timeout. */
        uint64_t cmd_dma_swerr         : 1;  /**< [ 14: 14](R/W1C/H) A command-list DMA channel configuration register was
                                                                 written while the channel was active. */
        uint64_t sw_enq_to             : 1;  /**< [ 15: 15](R/W1C/H) The Software Enqueue logic detected a timeout. */
        uint64_t sw_enq_err            : 1;  /**< [ 16: 16](R/W1C/H) A Software Enqueue register was written while it was in the
                                                                 process of enqueuing a command. */
        uint64_t sosf                  : 1;  /**< [ 17: 17](R/W1C/H) A start-of-subframe was detected. */
        uint64_t sof                   : 1;  /**< [ 18: 18](R/W1C/H) A start-of-frame was detected. */
        uint64_t reserved_19_63        : 45;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_errint_sum_w1c_s cn; */
};
typedef union cavm_psm_int_errint_sum_w1c cavm_psm_int_errint_sum_w1c_t;

#define CAVM_PSM_INT_ERRINT_SUM_W1C CAVM_PSM_INT_ERRINT_SUM_W1C_FUNC()
static inline uint64_t CAVM_PSM_INT_ERRINT_SUM_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_ERRINT_SUM_W1C_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x8600010e0e00ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x8600010e0e00ll;
    __cavm_csr_fatal("PSM_INT_ERRINT_SUM_W1C", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_ERRINT_SUM_W1C cavm_psm_int_errint_sum_w1c_t
#define bustype_CAVM_PSM_INT_ERRINT_SUM_W1C CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_ERRINT_SUM_W1C "PSM_INT_ERRINT_SUM_W1C"
#define device_bar_CAVM_PSM_INT_ERRINT_SUM_W1C 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_ERRINT_SUM_W1C 0
#define arguments_CAVM_PSM_INT_ERRINT_SUM_W1C -1,-1,-1,-1

/**
 * Register (NCB) psm_int_errint_sum_w1s
 *
 * PHY Scheduler Error Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_psm_int_errint_sum_w1s
{
    uint64_t u;
    struct cavm_psm_int_errint_sum_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_19_63        : 45;
        uint64_t sof                   : 1;  /**< [ 18: 18](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[SOF]. */
        uint64_t sosf                  : 1;  /**< [ 17: 17](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[SOSF]. */
        uint64_t sw_enq_err            : 1;  /**< [ 16: 16](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[SW_ENQ_ERR]. */
        uint64_t sw_enq_to             : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[SW_ENQ_TO]. */
        uint64_t cmd_dma_swerr         : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[CMD_DMA_SWERR]. */
        uint64_t cmd_dma_to            : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[CMD_DMA_TO]. */
        uint64_t cmd_dma_rderr         : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[CMD_DMA_RDERR]. */
        uint64_t notif_err             : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[NOTIF_ERR]. */
        uint64_t notif_nxm             : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[NOTIF_NXM]. */
        uint64_t wrsts_nxm             : 1;  /**< [  9:  9](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[WRSTS_NXM]. */
        uint64_t log_nxm               : 1;  /**< [  8:  8](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[LOG_NXM]. */
        uint64_t reserved_5_7          : 3;
        uint64_t bcmd                  : 1;  /**< [  4:  4](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[BCMD]. */
        uint64_t lroll                 : 1;  /**< [  3:  3](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[LROLL]. */
        uint64_t lovf                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[LOVF]. */
        uint64_t bkpt                  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[BKPT]. */
        uint64_t nerr                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[NERR]. */
#else /* Word 0 - Little Endian */
        uint64_t nerr                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[NERR]. */
        uint64_t bkpt                  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[BKPT]. */
        uint64_t lovf                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[LOVF]. */
        uint64_t lroll                 : 1;  /**< [  3:  3](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[LROLL]. */
        uint64_t bcmd                  : 1;  /**< [  4:  4](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[BCMD]. */
        uint64_t reserved_5_7          : 3;
        uint64_t log_nxm               : 1;  /**< [  8:  8](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[LOG_NXM]. */
        uint64_t wrsts_nxm             : 1;  /**< [  9:  9](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[WRSTS_NXM]. */
        uint64_t notif_nxm             : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[NOTIF_NXM]. */
        uint64_t notif_err             : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[NOTIF_ERR]. */
        uint64_t cmd_dma_rderr         : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[CMD_DMA_RDERR]. */
        uint64_t cmd_dma_to            : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[CMD_DMA_TO]. */
        uint64_t cmd_dma_swerr         : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[CMD_DMA_SWERR]. */
        uint64_t sw_enq_to             : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[SW_ENQ_TO]. */
        uint64_t sw_enq_err            : 1;  /**< [ 16: 16](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[SW_ENQ_ERR]. */
        uint64_t sosf                  : 1;  /**< [ 17: 17](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[SOSF]. */
        uint64_t sof                   : 1;  /**< [ 18: 18](R/W1S/H) Reads or sets PSM_INT_ERRINT_SUM_W1C[SOF]. */
        uint64_t reserved_19_63        : 45;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_errint_sum_w1s_s cn; */
};
typedef union cavm_psm_int_errint_sum_w1s cavm_psm_int_errint_sum_w1s_t;

#define CAVM_PSM_INT_ERRINT_SUM_W1S CAVM_PSM_INT_ERRINT_SUM_W1S_FUNC()
static inline uint64_t CAVM_PSM_INT_ERRINT_SUM_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_ERRINT_SUM_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x8600010e0e40ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x8600010e0e40ll;
    __cavm_csr_fatal("PSM_INT_ERRINT_SUM_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_ERRINT_SUM_W1S cavm_psm_int_errint_sum_w1s_t
#define bustype_CAVM_PSM_INT_ERRINT_SUM_W1S CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_ERRINT_SUM_W1S "PSM_INT_ERRINT_SUM_W1S"
#define device_bar_CAVM_PSM_INT_ERRINT_SUM_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_ERRINT_SUM_W1S 0
#define arguments_CAVM_PSM_INT_ERRINT_SUM_W1S -1,-1,-1,-1

/**
 * Register (NCB) psm_int_gp_ena_w1c#
 *
 * PHY Scheduler General Purpose Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_psm_int_gp_ena_w1cx
{
    uint64_t u;
    struct cavm_psm_int_gp_ena_w1cx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t gpint                 : 32; /**< [ 31:  0](R/W1C/H) Reads or clears enable for PSM_INT_GP_SUM_W1C(0..7)[GPINT]. */
#else /* Word 0 - Little Endian */
        uint64_t gpint                 : 32; /**< [ 31:  0](R/W1C/H) Reads or clears enable for PSM_INT_GP_SUM_W1C(0..7)[GPINT]. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_gp_ena_w1cx_s cn; */
};
typedef union cavm_psm_int_gp_ena_w1cx cavm_psm_int_gp_ena_w1cx_t;

static inline uint64_t CAVM_PSM_INT_GP_ENA_W1CX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_GP_ENA_W1CX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=7))
        return 0x8600010e0080ll + 0x100ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=7))
        return 0x8600010e0080ll + 0x100ll * ((a) & 0x7);
    __cavm_csr_fatal("PSM_INT_GP_ENA_W1CX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_GP_ENA_W1CX(a) cavm_psm_int_gp_ena_w1cx_t
#define bustype_CAVM_PSM_INT_GP_ENA_W1CX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_GP_ENA_W1CX(a) "PSM_INT_GP_ENA_W1CX"
#define device_bar_CAVM_PSM_INT_GP_ENA_W1CX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_GP_ENA_W1CX(a) (a)
#define arguments_CAVM_PSM_INT_GP_ENA_W1CX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_gp_ena_w1s#
 *
 * PHY Scheduler General Purpose Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_psm_int_gp_ena_w1sx
{
    uint64_t u;
    struct cavm_psm_int_gp_ena_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t gpint                 : 32; /**< [ 31:  0](R/W1S/H) Reads or sets enable for PSM_INT_GP_SUM_W1C(0..7)[GPINT]. */
#else /* Word 0 - Little Endian */
        uint64_t gpint                 : 32; /**< [ 31:  0](R/W1S/H) Reads or sets enable for PSM_INT_GP_SUM_W1C(0..7)[GPINT]. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_gp_ena_w1sx_s cn; */
};
typedef union cavm_psm_int_gp_ena_w1sx cavm_psm_int_gp_ena_w1sx_t;

static inline uint64_t CAVM_PSM_INT_GP_ENA_W1SX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_GP_ENA_W1SX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=7))
        return 0x8600010e00c0ll + 0x100ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=7))
        return 0x8600010e00c0ll + 0x100ll * ((a) & 0x7);
    __cavm_csr_fatal("PSM_INT_GP_ENA_W1SX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_GP_ENA_W1SX(a) cavm_psm_int_gp_ena_w1sx_t
#define bustype_CAVM_PSM_INT_GP_ENA_W1SX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_GP_ENA_W1SX(a) "PSM_INT_GP_ENA_W1SX"
#define device_bar_CAVM_PSM_INT_GP_ENA_W1SX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_GP_ENA_W1SX(a) (a)
#define arguments_CAVM_PSM_INT_GP_ENA_W1SX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_gp_sum_w1c#
 *
 * PHY Scheduler General Purpose Interrupt Registers
 */
union cavm_psm_int_gp_sum_w1cx
{
    uint64_t u;
    struct cavm_psm_int_gp_sum_w1cx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t gpint                 : 32; /**< [ 31:  0](R/W1C/H) One interrupt bit per general purpose interrupt. */
#else /* Word 0 - Little Endian */
        uint64_t gpint                 : 32; /**< [ 31:  0](R/W1C/H) One interrupt bit per general purpose interrupt. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_gp_sum_w1cx_s cn; */
};
typedef union cavm_psm_int_gp_sum_w1cx cavm_psm_int_gp_sum_w1cx_t;

static inline uint64_t CAVM_PSM_INT_GP_SUM_W1CX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_GP_SUM_W1CX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=7))
        return 0x8600010e0000ll + 0x100ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=7))
        return 0x8600010e0000ll + 0x100ll * ((a) & 0x7);
    __cavm_csr_fatal("PSM_INT_GP_SUM_W1CX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_GP_SUM_W1CX(a) cavm_psm_int_gp_sum_w1cx_t
#define bustype_CAVM_PSM_INT_GP_SUM_W1CX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_GP_SUM_W1CX(a) "PSM_INT_GP_SUM_W1CX"
#define device_bar_CAVM_PSM_INT_GP_SUM_W1CX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_GP_SUM_W1CX(a) (a)
#define arguments_CAVM_PSM_INT_GP_SUM_W1CX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_gp_sum_w1s#
 *
 * PHY Scheduler General Purpose Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_psm_int_gp_sum_w1sx
{
    uint64_t u;
    struct cavm_psm_int_gp_sum_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t gpint                 : 32; /**< [ 31:  0](R/W1S/H) Reads or sets PSM_INT_GP_SUM_W1C(0..7)[GPINT]. */
#else /* Word 0 - Little Endian */
        uint64_t gpint                 : 32; /**< [ 31:  0](R/W1S/H) Reads or sets PSM_INT_GP_SUM_W1C(0..7)[GPINT]. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_gp_sum_w1sx_s cn; */
};
typedef union cavm_psm_int_gp_sum_w1sx cavm_psm_int_gp_sum_w1sx_t;

static inline uint64_t CAVM_PSM_INT_GP_SUM_W1SX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_GP_SUM_W1SX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=7))
        return 0x8600010e0040ll + 0x100ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=7))
        return 0x8600010e0040ll + 0x100ll * ((a) & 0x7);
    __cavm_csr_fatal("PSM_INT_GP_SUM_W1SX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_GP_SUM_W1SX(a) cavm_psm_int_gp_sum_w1sx_t
#define bustype_CAVM_PSM_INT_GP_SUM_W1SX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_GP_SUM_W1SX(a) "PSM_INT_GP_SUM_W1SX"
#define device_bar_CAVM_PSM_INT_GP_SUM_W1SX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_GP_SUM_W1SX(a) (a)
#define arguments_CAVM_PSM_INT_GP_SUM_W1SX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_qovf_ena_w1c#
 *
 * PHY Scheduler Queue Overflow Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_psm_int_qovf_ena_w1cx
{
    uint64_t u;
    struct cavm_psm_int_qovf_ena_w1cx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t qovf                  : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for PSM_INT_QOVF_SUM_W1C(0..3)[QOVF]. */
#else /* Word 0 - Little Endian */
        uint64_t qovf                  : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for PSM_INT_QOVF_SUM_W1C(0..3)[QOVF]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_qovf_ena_w1cx_s cn; */
};
typedef union cavm_psm_int_qovf_ena_w1cx cavm_psm_int_qovf_ena_w1cx_t;

static inline uint64_t CAVM_PSM_INT_QOVF_ENA_W1CX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_QOVF_ENA_W1CX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x8600010e1080ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x8600010e1080ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_QOVF_ENA_W1CX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_QOVF_ENA_W1CX(a) cavm_psm_int_qovf_ena_w1cx_t
#define bustype_CAVM_PSM_INT_QOVF_ENA_W1CX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_QOVF_ENA_W1CX(a) "PSM_INT_QOVF_ENA_W1CX"
#define device_bar_CAVM_PSM_INT_QOVF_ENA_W1CX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_QOVF_ENA_W1CX(a) (a)
#define arguments_CAVM_PSM_INT_QOVF_ENA_W1CX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_qovf_ena_w1s#
 *
 * PHY Scheduler Queue Overflow Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_psm_int_qovf_ena_w1sx
{
    uint64_t u;
    struct cavm_psm_int_qovf_ena_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t qovf                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for PSM_INT_QOVF_SUM_W1C(0..3)[QOVF]. */
#else /* Word 0 - Little Endian */
        uint64_t qovf                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for PSM_INT_QOVF_SUM_W1C(0..3)[QOVF]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_qovf_ena_w1sx_s cn; */
};
typedef union cavm_psm_int_qovf_ena_w1sx cavm_psm_int_qovf_ena_w1sx_t;

static inline uint64_t CAVM_PSM_INT_QOVF_ENA_W1SX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_QOVF_ENA_W1SX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x8600010e10c0ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x8600010e10c0ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_QOVF_ENA_W1SX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_QOVF_ENA_W1SX(a) cavm_psm_int_qovf_ena_w1sx_t
#define bustype_CAVM_PSM_INT_QOVF_ENA_W1SX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_QOVF_ENA_W1SX(a) "PSM_INT_QOVF_ENA_W1SX"
#define device_bar_CAVM_PSM_INT_QOVF_ENA_W1SX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_QOVF_ENA_W1SX(a) (a)
#define arguments_CAVM_PSM_INT_QOVF_ENA_W1SX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_qovf_sum_w1c#
 *
 * PHY Scheduler Queue Overflow Interrupt Registers
 * These registers report the status of the queue overflow interrupts,
 * where a command was added to an already full queue. Each bit corresponds
 * to one of the PSM queues.  Writing a 1 will clear the selected
 * interrupt.  Writes of 0 are ignored.
 */
union cavm_psm_int_qovf_sum_w1cx
{
    uint64_t u;
    struct cavm_psm_int_qovf_sum_w1cx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t qovf                  : 64; /**< [ 63:  0](R/W1C/H) Status bit for each queue overflow interrupt. */
#else /* Word 0 - Little Endian */
        uint64_t qovf                  : 64; /**< [ 63:  0](R/W1C/H) Status bit for each queue overflow interrupt. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_qovf_sum_w1cx_s cn; */
};
typedef union cavm_psm_int_qovf_sum_w1cx cavm_psm_int_qovf_sum_w1cx_t;

static inline uint64_t CAVM_PSM_INT_QOVF_SUM_W1CX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_QOVF_SUM_W1CX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x8600010e1000ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x8600010e1000ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_QOVF_SUM_W1CX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_QOVF_SUM_W1CX(a) cavm_psm_int_qovf_sum_w1cx_t
#define bustype_CAVM_PSM_INT_QOVF_SUM_W1CX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_QOVF_SUM_W1CX(a) "PSM_INT_QOVF_SUM_W1CX"
#define device_bar_CAVM_PSM_INT_QOVF_SUM_W1CX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_QOVF_SUM_W1CX(a) (a)
#define arguments_CAVM_PSM_INT_QOVF_SUM_W1CX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_qovf_sum_w1s#
 *
 * PHY Scheduler Queue Overflow Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_psm_int_qovf_sum_w1sx
{
    uint64_t u;
    struct cavm_psm_int_qovf_sum_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t qovf                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets PSM_INT_QOVF_SUM_W1C(0..3)[QOVF]. */
#else /* Word 0 - Little Endian */
        uint64_t qovf                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets PSM_INT_QOVF_SUM_W1C(0..3)[QOVF]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_qovf_sum_w1sx_s cn; */
};
typedef union cavm_psm_int_qovf_sum_w1sx cavm_psm_int_qovf_sum_w1sx_t;

static inline uint64_t CAVM_PSM_INT_QOVF_SUM_W1SX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_QOVF_SUM_W1SX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x8600010e1040ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x8600010e1040ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_QOVF_SUM_W1SX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_QOVF_SUM_W1SX(a) cavm_psm_int_qovf_sum_w1sx_t
#define bustype_CAVM_PSM_INT_QOVF_SUM_W1SX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_QOVF_SUM_W1SX(a) "PSM_INT_QOVF_SUM_W1SX"
#define device_bar_CAVM_PSM_INT_QOVF_SUM_W1SX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_QOVF_SUM_W1SX(a) (a)
#define arguments_CAVM_PSM_INT_QOVF_SUM_W1SX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_qto_ena_w1c#
 *
 * PHY Scheduler Queue Timeout Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_psm_int_qto_ena_w1cx
{
    uint64_t u;
    struct cavm_psm_int_qto_ena_w1cx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t qto                   : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for PSM_INT_QTO_SUM_W1C(0..3)[QTO]. */
#else /* Word 0 - Little Endian */
        uint64_t qto                   : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for PSM_INT_QTO_SUM_W1C(0..3)[QTO]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_qto_ena_w1cx_s cn; */
};
typedef union cavm_psm_int_qto_ena_w1cx cavm_psm_int_qto_ena_w1cx_t;

static inline uint64_t CAVM_PSM_INT_QTO_ENA_W1CX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_QTO_ENA_W1CX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x8600010e1180ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x8600010e1180ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_QTO_ENA_W1CX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_QTO_ENA_W1CX(a) cavm_psm_int_qto_ena_w1cx_t
#define bustype_CAVM_PSM_INT_QTO_ENA_W1CX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_QTO_ENA_W1CX(a) "PSM_INT_QTO_ENA_W1CX"
#define device_bar_CAVM_PSM_INT_QTO_ENA_W1CX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_QTO_ENA_W1CX(a) (a)
#define arguments_CAVM_PSM_INT_QTO_ENA_W1CX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_qto_ena_w1s#
 *
 * PHY Scheduler Queue Timeout Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_psm_int_qto_ena_w1sx
{
    uint64_t u;
    struct cavm_psm_int_qto_ena_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t qto                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for PSM_INT_QTO_SUM_W1C(0..3)[QTO]. */
#else /* Word 0 - Little Endian */
        uint64_t qto                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for PSM_INT_QTO_SUM_W1C(0..3)[QTO]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_qto_ena_w1sx_s cn; */
};
typedef union cavm_psm_int_qto_ena_w1sx cavm_psm_int_qto_ena_w1sx_t;

static inline uint64_t CAVM_PSM_INT_QTO_ENA_W1SX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_QTO_ENA_W1SX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x8600010e11c0ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x8600010e11c0ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_QTO_ENA_W1SX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_QTO_ENA_W1SX(a) cavm_psm_int_qto_ena_w1sx_t
#define bustype_CAVM_PSM_INT_QTO_ENA_W1SX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_QTO_ENA_W1SX(a) "PSM_INT_QTO_ENA_W1SX"
#define device_bar_CAVM_PSM_INT_QTO_ENA_W1SX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_QTO_ENA_W1SX(a) (a)
#define arguments_CAVM_PSM_INT_QTO_ENA_W1SX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_qto_sum_w1c#
 *
 * PHY Scheduler Queue Timeout Interrupt Registers
 * These registers report the status of the queue timeout interrupts.
 * Writing a 1 will clear the selected interrupt.  Writes of 0 are ignored.
 */
union cavm_psm_int_qto_sum_w1cx
{
    uint64_t u;
    struct cavm_psm_int_qto_sum_w1cx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t qto                   : 64; /**< [ 63:  0](R/W1C/H) Status bit for each queue timeout interrupt. */
#else /* Word 0 - Little Endian */
        uint64_t qto                   : 64; /**< [ 63:  0](R/W1C/H) Status bit for each queue timeout interrupt. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_qto_sum_w1cx_s cn; */
};
typedef union cavm_psm_int_qto_sum_w1cx cavm_psm_int_qto_sum_w1cx_t;

static inline uint64_t CAVM_PSM_INT_QTO_SUM_W1CX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_QTO_SUM_W1CX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x8600010e1100ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x8600010e1100ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_QTO_SUM_W1CX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_QTO_SUM_W1CX(a) cavm_psm_int_qto_sum_w1cx_t
#define bustype_CAVM_PSM_INT_QTO_SUM_W1CX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_QTO_SUM_W1CX(a) "PSM_INT_QTO_SUM_W1CX"
#define device_bar_CAVM_PSM_INT_QTO_SUM_W1CX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_QTO_SUM_W1CX(a) (a)
#define arguments_CAVM_PSM_INT_QTO_SUM_W1CX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_qto_sum_w1s#
 *
 * PHY Scheduler Queue Timeout Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_psm_int_qto_sum_w1sx
{
    uint64_t u;
    struct cavm_psm_int_qto_sum_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t qto                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets PSM_INT_QTO_SUM_W1C(0..3)[QTO]. */
#else /* Word 0 - Little Endian */
        uint64_t qto                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets PSM_INT_QTO_SUM_W1C(0..3)[QTO]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_qto_sum_w1sx_s cn; */
};
typedef union cavm_psm_int_qto_sum_w1sx cavm_psm_int_qto_sum_w1sx_t;

static inline uint64_t CAVM_PSM_INT_QTO_SUM_W1SX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_QTO_SUM_W1SX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x8600010e1140ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x8600010e1140ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_QTO_SUM_W1SX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_QTO_SUM_W1SX(a) cavm_psm_int_qto_sum_w1sx_t
#define bustype_CAVM_PSM_INT_QTO_SUM_W1SX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_QTO_SUM_W1SX(a) "PSM_INT_QTO_SUM_W1SX"
#define device_bar_CAVM_PSM_INT_QTO_SUM_W1SX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_QTO_SUM_W1SX(a) (a)
#define arguments_CAVM_PSM_INT_QTO_SUM_W1SX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_aerr_ena_w1c
 *
 * PHY Scheduler Address Error Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_psm_int_setx_aerr_ena_w1c
{
    uint64_t u;
    struct cavm_psm_int_setx_aerr_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t aerr                  : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for PSM_INT_SET(0..2)_AERR_SUM_W1C[AERR]. */
#else /* Word 0 - Little Endian */
        uint64_t aerr                  : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for PSM_INT_SET(0..2)_AERR_SUM_W1C[AERR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_aerr_ena_w1c_s cn; */
};
typedef union cavm_psm_int_setx_aerr_ena_w1c cavm_psm_int_setx_aerr_ena_w1c_t;

static inline uint64_t CAVM_PSM_INT_SETX_AERR_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_AERR_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=2))
        return 0x8600010e4480ll + 0x1000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x8600010e4480ll + 0x1000ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_SETX_AERR_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_AERR_ENA_W1C(a) cavm_psm_int_setx_aerr_ena_w1c_t
#define bustype_CAVM_PSM_INT_SETX_AERR_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_AERR_ENA_W1C(a) "PSM_INT_SETX_AERR_ENA_W1C"
#define device_bar_CAVM_PSM_INT_SETX_AERR_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_AERR_ENA_W1C(a) (a)
#define arguments_CAVM_PSM_INT_SETX_AERR_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_aerr_ena_w1s
 *
 * PHY Scheduler Address Error Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_psm_int_setx_aerr_ena_w1s
{
    uint64_t u;
    struct cavm_psm_int_setx_aerr_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t aerr                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for PSM_INT_SET(0..2)_AERR_SUM_W1C[AERR]. */
#else /* Word 0 - Little Endian */
        uint64_t aerr                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for PSM_INT_SET(0..2)_AERR_SUM_W1C[AERR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_aerr_ena_w1s_s cn; */
};
typedef union cavm_psm_int_setx_aerr_ena_w1s cavm_psm_int_setx_aerr_ena_w1s_t;

static inline uint64_t CAVM_PSM_INT_SETX_AERR_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_AERR_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=2))
        return 0x8600010e44c0ll + 0x1000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x8600010e44c0ll + 0x1000ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_SETX_AERR_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_AERR_ENA_W1S(a) cavm_psm_int_setx_aerr_ena_w1s_t
#define bustype_CAVM_PSM_INT_SETX_AERR_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_AERR_ENA_W1S(a) "PSM_INT_SETX_AERR_ENA_W1S"
#define device_bar_CAVM_PSM_INT_SETX_AERR_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_AERR_ENA_W1S(a) (a)
#define arguments_CAVM_PSM_INT_SETX_AERR_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_aerr_hi_ena_w1c
 *
 * PHY Scheduler Address Error Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_psm_int_setx_aerr_hi_ena_w1c
{
    uint64_t u;
    struct cavm_psm_int_setx_aerr_hi_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t aerr                  : 4;  /**< [  3:  0](R/W1C/H) Reads or clears enable for PSM_INT_SET(1)_AERR_HI_SUM_W1C[AERR]. */
#else /* Word 0 - Little Endian */
        uint64_t aerr                  : 4;  /**< [  3:  0](R/W1C/H) Reads or clears enable for PSM_INT_SET(1)_AERR_HI_SUM_W1C[AERR]. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_aerr_hi_ena_w1c_s cn; */
};
typedef union cavm_psm_int_setx_aerr_hi_ena_w1c cavm_psm_int_setx_aerr_hi_ena_w1c_t;

static inline uint64_t CAVM_PSM_INT_SETX_AERR_HI_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_AERR_HI_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==1))
        return 0x8600010e4488ll + 0x1000ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_INT_SETX_AERR_HI_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_AERR_HI_ENA_W1C(a) cavm_psm_int_setx_aerr_hi_ena_w1c_t
#define bustype_CAVM_PSM_INT_SETX_AERR_HI_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_AERR_HI_ENA_W1C(a) "PSM_INT_SETX_AERR_HI_ENA_W1C"
#define device_bar_CAVM_PSM_INT_SETX_AERR_HI_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_AERR_HI_ENA_W1C(a) (a)
#define arguments_CAVM_PSM_INT_SETX_AERR_HI_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_aerr_hi_ena_w1s
 *
 * PHY Scheduler Address Error Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_psm_int_setx_aerr_hi_ena_w1s
{
    uint64_t u;
    struct cavm_psm_int_setx_aerr_hi_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t aerr                  : 4;  /**< [  3:  0](R/W1S/H) Reads or sets enable for PSM_INT_SET(1)_AERR_HI_SUM_W1C[AERR]. */
#else /* Word 0 - Little Endian */
        uint64_t aerr                  : 4;  /**< [  3:  0](R/W1S/H) Reads or sets enable for PSM_INT_SET(1)_AERR_HI_SUM_W1C[AERR]. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_aerr_hi_ena_w1s_s cn; */
};
typedef union cavm_psm_int_setx_aerr_hi_ena_w1s cavm_psm_int_setx_aerr_hi_ena_w1s_t;

static inline uint64_t CAVM_PSM_INT_SETX_AERR_HI_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_AERR_HI_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==1))
        return 0x8600010e44c8ll + 0x1000ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_INT_SETX_AERR_HI_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_AERR_HI_ENA_W1S(a) cavm_psm_int_setx_aerr_hi_ena_w1s_t
#define bustype_CAVM_PSM_INT_SETX_AERR_HI_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_AERR_HI_ENA_W1S(a) "PSM_INT_SETX_AERR_HI_ENA_W1S"
#define device_bar_CAVM_PSM_INT_SETX_AERR_HI_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_AERR_HI_ENA_W1S(a) (a)
#define arguments_CAVM_PSM_INT_SETX_AERR_HI_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_aerr_hi_sum_w1c
 *
 * PHY Scheduler Address Error Interrupt Registers
 * This register reports the status of the address error interrupts,
 * where a MHAB/MDAB has reported an address error. Writing a 1 will clear
 * the selected interrupt.  Writes of 0 are ignored.
 */
union cavm_psm_int_setx_aerr_hi_sum_w1c
{
    uint64_t u;
    struct cavm_psm_int_setx_aerr_hi_sum_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t aerr                  : 4;  /**< [  3:  0](R/W1C/H) Status bit for each address error interrupt.  The bits are indexed by
                                                                 the MHAB/MDAB number, as defined by the PSM_SET(0..2)_MABDID_E enum. */
#else /* Word 0 - Little Endian */
        uint64_t aerr                  : 4;  /**< [  3:  0](R/W1C/H) Status bit for each address error interrupt.  The bits are indexed by
                                                                 the MHAB/MDAB number, as defined by the PSM_SET(0..2)_MABDID_E enum. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_aerr_hi_sum_w1c_s cn; */
};
typedef union cavm_psm_int_setx_aerr_hi_sum_w1c cavm_psm_int_setx_aerr_hi_sum_w1c_t;

static inline uint64_t CAVM_PSM_INT_SETX_AERR_HI_SUM_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_AERR_HI_SUM_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==1))
        return 0x8600010e4408ll + 0x1000ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_INT_SETX_AERR_HI_SUM_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_AERR_HI_SUM_W1C(a) cavm_psm_int_setx_aerr_hi_sum_w1c_t
#define bustype_CAVM_PSM_INT_SETX_AERR_HI_SUM_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_AERR_HI_SUM_W1C(a) "PSM_INT_SETX_AERR_HI_SUM_W1C"
#define device_bar_CAVM_PSM_INT_SETX_AERR_HI_SUM_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_AERR_HI_SUM_W1C(a) (a)
#define arguments_CAVM_PSM_INT_SETX_AERR_HI_SUM_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_aerr_hi_sum_w1s
 *
 * PHY Scheduler Address Error Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_psm_int_setx_aerr_hi_sum_w1s
{
    uint64_t u;
    struct cavm_psm_int_setx_aerr_hi_sum_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t aerr                  : 4;  /**< [  3:  0](R/W1S/H) Reads or sets PSM_INT_SET(1)_AERR_HI_SUM_W1C[AERR]. */
#else /* Word 0 - Little Endian */
        uint64_t aerr                  : 4;  /**< [  3:  0](R/W1S/H) Reads or sets PSM_INT_SET(1)_AERR_HI_SUM_W1C[AERR]. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_aerr_hi_sum_w1s_s cn; */
};
typedef union cavm_psm_int_setx_aerr_hi_sum_w1s cavm_psm_int_setx_aerr_hi_sum_w1s_t;

static inline uint64_t CAVM_PSM_INT_SETX_AERR_HI_SUM_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_AERR_HI_SUM_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==1))
        return 0x8600010e4448ll + 0x1000ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_INT_SETX_AERR_HI_SUM_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_AERR_HI_SUM_W1S(a) cavm_psm_int_setx_aerr_hi_sum_w1s_t
#define bustype_CAVM_PSM_INT_SETX_AERR_HI_SUM_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_AERR_HI_SUM_W1S(a) "PSM_INT_SETX_AERR_HI_SUM_W1S"
#define device_bar_CAVM_PSM_INT_SETX_AERR_HI_SUM_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_AERR_HI_SUM_W1S(a) (a)
#define arguments_CAVM_PSM_INT_SETX_AERR_HI_SUM_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_aerr_sum_w1c
 *
 * PHY Scheduler Address Error Interrupt Registers
 * This register reports the status of the address error interrupts,
 * where a MHAB/MDAB has reported an address error. Writing a 1 will clear
 * the selected interrupt.  Writes of 0 are ignored.
 */
union cavm_psm_int_setx_aerr_sum_w1c
{
    uint64_t u;
    struct cavm_psm_int_setx_aerr_sum_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t aerr                  : 64; /**< [ 63:  0](R/W1C/H) Status bit for each address error interrupt.  The bits are indexed by
                                                                 the MHAB/MDAB number, as defined by the PSM_SET(0..2)_MABDID_E enum. */
#else /* Word 0 - Little Endian */
        uint64_t aerr                  : 64; /**< [ 63:  0](R/W1C/H) Status bit for each address error interrupt.  The bits are indexed by
                                                                 the MHAB/MDAB number, as defined by the PSM_SET(0..2)_MABDID_E enum. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_aerr_sum_w1c_s cn; */
};
typedef union cavm_psm_int_setx_aerr_sum_w1c cavm_psm_int_setx_aerr_sum_w1c_t;

static inline uint64_t CAVM_PSM_INT_SETX_AERR_SUM_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_AERR_SUM_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=2))
        return 0x8600010e4400ll + 0x1000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x8600010e4400ll + 0x1000ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_SETX_AERR_SUM_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_AERR_SUM_W1C(a) cavm_psm_int_setx_aerr_sum_w1c_t
#define bustype_CAVM_PSM_INT_SETX_AERR_SUM_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_AERR_SUM_W1C(a) "PSM_INT_SETX_AERR_SUM_W1C"
#define device_bar_CAVM_PSM_INT_SETX_AERR_SUM_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_AERR_SUM_W1C(a) (a)
#define arguments_CAVM_PSM_INT_SETX_AERR_SUM_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_aerr_sum_w1s
 *
 * PHY Scheduler Address Error Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_psm_int_setx_aerr_sum_w1s
{
    uint64_t u;
    struct cavm_psm_int_setx_aerr_sum_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t aerr                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets PSM_INT_SET(0..2)_AERR_SUM_W1C[AERR]. */
#else /* Word 0 - Little Endian */
        uint64_t aerr                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets PSM_INT_SET(0..2)_AERR_SUM_W1C[AERR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_aerr_sum_w1s_s cn; */
};
typedef union cavm_psm_int_setx_aerr_sum_w1s cavm_psm_int_setx_aerr_sum_w1s_t;

static inline uint64_t CAVM_PSM_INT_SETX_AERR_SUM_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_AERR_SUM_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=2))
        return 0x8600010e4440ll + 0x1000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x8600010e4440ll + 0x1000ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_SETX_AERR_SUM_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_AERR_SUM_W1S(a) cavm_psm_int_setx_aerr_sum_w1s_t
#define bustype_CAVM_PSM_INT_SETX_AERR_SUM_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_AERR_SUM_W1S(a) "PSM_INT_SETX_AERR_SUM_W1S"
#define device_bar_CAVM_PSM_INT_SETX_AERR_SUM_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_AERR_SUM_W1S(a) (a)
#define arguments_CAVM_PSM_INT_SETX_AERR_SUM_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_derr_ena_w1c
 *
 * PHY Scheduler DMA Error Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_psm_int_setx_derr_ena_w1c
{
    uint64_t u;
    struct cavm_psm_int_setx_derr_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t derr                  : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for PSM_INT_SET(0..2)_DERR_SUM_W1C[DERR]. */
#else /* Word 0 - Little Endian */
        uint64_t derr                  : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for PSM_INT_SET(0..2)_DERR_SUM_W1C[DERR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_derr_ena_w1c_s cn; */
};
typedef union cavm_psm_int_setx_derr_ena_w1c cavm_psm_int_setx_derr_ena_w1c_t;

static inline uint64_t CAVM_PSM_INT_SETX_DERR_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_DERR_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=2))
        return 0x8600010e4380ll + 0x1000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x8600010e4380ll + 0x1000ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_SETX_DERR_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_DERR_ENA_W1C(a) cavm_psm_int_setx_derr_ena_w1c_t
#define bustype_CAVM_PSM_INT_SETX_DERR_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_DERR_ENA_W1C(a) "PSM_INT_SETX_DERR_ENA_W1C"
#define device_bar_CAVM_PSM_INT_SETX_DERR_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_DERR_ENA_W1C(a) (a)
#define arguments_CAVM_PSM_INT_SETX_DERR_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_derr_ena_w1s
 *
 * PHY Scheduler DMA Error Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_psm_int_setx_derr_ena_w1s
{
    uint64_t u;
    struct cavm_psm_int_setx_derr_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t derr                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for PSM_INT_SET(0..2)_DERR_SUM_W1C[DERR]. */
#else /* Word 0 - Little Endian */
        uint64_t derr                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for PSM_INT_SET(0..2)_DERR_SUM_W1C[DERR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_derr_ena_w1s_s cn; */
};
typedef union cavm_psm_int_setx_derr_ena_w1s cavm_psm_int_setx_derr_ena_w1s_t;

static inline uint64_t CAVM_PSM_INT_SETX_DERR_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_DERR_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=2))
        return 0x8600010e43c0ll + 0x1000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x8600010e43c0ll + 0x1000ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_SETX_DERR_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_DERR_ENA_W1S(a) cavm_psm_int_setx_derr_ena_w1s_t
#define bustype_CAVM_PSM_INT_SETX_DERR_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_DERR_ENA_W1S(a) "PSM_INT_SETX_DERR_ENA_W1S"
#define device_bar_CAVM_PSM_INT_SETX_DERR_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_DERR_ENA_W1S(a) (a)
#define arguments_CAVM_PSM_INT_SETX_DERR_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_derr_hi_ena_w1c
 *
 * PHY Scheduler DMA Error Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_psm_int_setx_derr_hi_ena_w1c
{
    uint64_t u;
    struct cavm_psm_int_setx_derr_hi_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t derr                  : 4;  /**< [  3:  0](R/W1C/H) Reads or clears enable for PSM_INT_SET(1)_DERR_HI_SUM_W1C[DERR]. */
#else /* Word 0 - Little Endian */
        uint64_t derr                  : 4;  /**< [  3:  0](R/W1C/H) Reads or clears enable for PSM_INT_SET(1)_DERR_HI_SUM_W1C[DERR]. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_derr_hi_ena_w1c_s cn; */
};
typedef union cavm_psm_int_setx_derr_hi_ena_w1c cavm_psm_int_setx_derr_hi_ena_w1c_t;

static inline uint64_t CAVM_PSM_INT_SETX_DERR_HI_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_DERR_HI_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==1))
        return 0x8600010e4388ll + 0x1000ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_INT_SETX_DERR_HI_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_DERR_HI_ENA_W1C(a) cavm_psm_int_setx_derr_hi_ena_w1c_t
#define bustype_CAVM_PSM_INT_SETX_DERR_HI_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_DERR_HI_ENA_W1C(a) "PSM_INT_SETX_DERR_HI_ENA_W1C"
#define device_bar_CAVM_PSM_INT_SETX_DERR_HI_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_DERR_HI_ENA_W1C(a) (a)
#define arguments_CAVM_PSM_INT_SETX_DERR_HI_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_derr_hi_ena_w1s
 *
 * PHY Scheduler DMA Error Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_psm_int_setx_derr_hi_ena_w1s
{
    uint64_t u;
    struct cavm_psm_int_setx_derr_hi_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t derr                  : 4;  /**< [  3:  0](R/W1S/H) Reads or sets enable for PSM_INT_SET(1)_DERR_HI_SUM_W1C[DERR]. */
#else /* Word 0 - Little Endian */
        uint64_t derr                  : 4;  /**< [  3:  0](R/W1S/H) Reads or sets enable for PSM_INT_SET(1)_DERR_HI_SUM_W1C[DERR]. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_derr_hi_ena_w1s_s cn; */
};
typedef union cavm_psm_int_setx_derr_hi_ena_w1s cavm_psm_int_setx_derr_hi_ena_w1s_t;

static inline uint64_t CAVM_PSM_INT_SETX_DERR_HI_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_DERR_HI_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==1))
        return 0x8600010e43c8ll + 0x1000ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_INT_SETX_DERR_HI_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_DERR_HI_ENA_W1S(a) cavm_psm_int_setx_derr_hi_ena_w1s_t
#define bustype_CAVM_PSM_INT_SETX_DERR_HI_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_DERR_HI_ENA_W1S(a) "PSM_INT_SETX_DERR_HI_ENA_W1S"
#define device_bar_CAVM_PSM_INT_SETX_DERR_HI_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_DERR_HI_ENA_W1S(a) (a)
#define arguments_CAVM_PSM_INT_SETX_DERR_HI_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_derr_hi_sum_w1c
 *
 * PHY Scheduler DMA Error Interrupt Registers
 * This register reports the status of the DMA error interrupts,
 * where a MHAB/MDAB has reported a DMA error. Writing a 1 will clear
 * the selected interrupt.  Writes of 0 are ignored.
 */
union cavm_psm_int_setx_derr_hi_sum_w1c
{
    uint64_t u;
    struct cavm_psm_int_setx_derr_hi_sum_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t derr                  : 4;  /**< [  3:  0](R/W1C/H) Status bit for each DMA error interrupt.  The bits are indexed by
                                                                 the MHAB/MDAB number, as defined by the PSM_SET(0..2)_MABDID_E enum. */
#else /* Word 0 - Little Endian */
        uint64_t derr                  : 4;  /**< [  3:  0](R/W1C/H) Status bit for each DMA error interrupt.  The bits are indexed by
                                                                 the MHAB/MDAB number, as defined by the PSM_SET(0..2)_MABDID_E enum. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_derr_hi_sum_w1c_s cn; */
};
typedef union cavm_psm_int_setx_derr_hi_sum_w1c cavm_psm_int_setx_derr_hi_sum_w1c_t;

static inline uint64_t CAVM_PSM_INT_SETX_DERR_HI_SUM_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_DERR_HI_SUM_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==1))
        return 0x8600010e4308ll + 0x1000ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_INT_SETX_DERR_HI_SUM_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_DERR_HI_SUM_W1C(a) cavm_psm_int_setx_derr_hi_sum_w1c_t
#define bustype_CAVM_PSM_INT_SETX_DERR_HI_SUM_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_DERR_HI_SUM_W1C(a) "PSM_INT_SETX_DERR_HI_SUM_W1C"
#define device_bar_CAVM_PSM_INT_SETX_DERR_HI_SUM_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_DERR_HI_SUM_W1C(a) (a)
#define arguments_CAVM_PSM_INT_SETX_DERR_HI_SUM_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_derr_hi_sum_w1s
 *
 * PHY Scheduler DMA Error Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_psm_int_setx_derr_hi_sum_w1s
{
    uint64_t u;
    struct cavm_psm_int_setx_derr_hi_sum_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t derr                  : 4;  /**< [  3:  0](R/W1S/H) Reads or sets PSM_INT_SET(1)_DERR_HI_SUM_W1C[DERR]. */
#else /* Word 0 - Little Endian */
        uint64_t derr                  : 4;  /**< [  3:  0](R/W1S/H) Reads or sets PSM_INT_SET(1)_DERR_HI_SUM_W1C[DERR]. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_derr_hi_sum_w1s_s cn; */
};
typedef union cavm_psm_int_setx_derr_hi_sum_w1s cavm_psm_int_setx_derr_hi_sum_w1s_t;

static inline uint64_t CAVM_PSM_INT_SETX_DERR_HI_SUM_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_DERR_HI_SUM_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==1))
        return 0x8600010e4348ll + 0x1000ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_INT_SETX_DERR_HI_SUM_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_DERR_HI_SUM_W1S(a) cavm_psm_int_setx_derr_hi_sum_w1s_t
#define bustype_CAVM_PSM_INT_SETX_DERR_HI_SUM_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_DERR_HI_SUM_W1S(a) "PSM_INT_SETX_DERR_HI_SUM_W1S"
#define device_bar_CAVM_PSM_INT_SETX_DERR_HI_SUM_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_DERR_HI_SUM_W1S(a) (a)
#define arguments_CAVM_PSM_INT_SETX_DERR_HI_SUM_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_derr_sum_w1c
 *
 * PHY Scheduler DMA Error Interrupt Registers
 * This register reports the status of the DMA error interrupts,
 * where a MHAB/MDAB has reported a DMA error. Writing a 1 will clear
 * the selected interrupt.  Writes of 0 are ignored.
 */
union cavm_psm_int_setx_derr_sum_w1c
{
    uint64_t u;
    struct cavm_psm_int_setx_derr_sum_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t derr                  : 64; /**< [ 63:  0](R/W1C/H) Status bit for each DMA error interrupt.  The bits are indexed by
                                                                 the MHAB/MDAB number, as defined by the PSM_SET(0..2)_MABDID_E enum. */
#else /* Word 0 - Little Endian */
        uint64_t derr                  : 64; /**< [ 63:  0](R/W1C/H) Status bit for each DMA error interrupt.  The bits are indexed by
                                                                 the MHAB/MDAB number, as defined by the PSM_SET(0..2)_MABDID_E enum. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_derr_sum_w1c_s cn; */
};
typedef union cavm_psm_int_setx_derr_sum_w1c cavm_psm_int_setx_derr_sum_w1c_t;

static inline uint64_t CAVM_PSM_INT_SETX_DERR_SUM_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_DERR_SUM_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=2))
        return 0x8600010e4300ll + 0x1000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x8600010e4300ll + 0x1000ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_SETX_DERR_SUM_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_DERR_SUM_W1C(a) cavm_psm_int_setx_derr_sum_w1c_t
#define bustype_CAVM_PSM_INT_SETX_DERR_SUM_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_DERR_SUM_W1C(a) "PSM_INT_SETX_DERR_SUM_W1C"
#define device_bar_CAVM_PSM_INT_SETX_DERR_SUM_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_DERR_SUM_W1C(a) (a)
#define arguments_CAVM_PSM_INT_SETX_DERR_SUM_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_derr_sum_w1s
 *
 * PHY Scheduler DMA Error Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_psm_int_setx_derr_sum_w1s
{
    uint64_t u;
    struct cavm_psm_int_setx_derr_sum_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t derr                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets PSM_INT_SET(0..2)_DERR_SUM_W1C[DERR]. */
#else /* Word 0 - Little Endian */
        uint64_t derr                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets PSM_INT_SET(0..2)_DERR_SUM_W1C[DERR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_derr_sum_w1s_s cn; */
};
typedef union cavm_psm_int_setx_derr_sum_w1s cavm_psm_int_setx_derr_sum_w1s_t;

static inline uint64_t CAVM_PSM_INT_SETX_DERR_SUM_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_DERR_SUM_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=2))
        return 0x8600010e4340ll + 0x1000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x8600010e4340ll + 0x1000ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_SETX_DERR_SUM_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_DERR_SUM_W1S(a) cavm_psm_int_setx_derr_sum_w1s_t
#define bustype_CAVM_PSM_INT_SETX_DERR_SUM_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_DERR_SUM_W1S(a) "PSM_INT_SETX_DERR_SUM_W1S"
#define device_bar_CAVM_PSM_INT_SETX_DERR_SUM_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_DERR_SUM_W1S(a) (a)
#define arguments_CAVM_PSM_INT_SETX_DERR_SUM_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_jerr_ena_w1c
 *
 * PHY Scheduler Job Error Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_psm_int_setx_jerr_ena_w1c
{
    uint64_t u;
    struct cavm_psm_int_setx_jerr_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jerr                  : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for PSM_INT_SET(0..2)_JERR_SUM_W1C[JERR]. */
#else /* Word 0 - Little Endian */
        uint64_t jerr                  : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for PSM_INT_SET(0..2)_JERR_SUM_W1C[JERR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_jerr_ena_w1c_s cn; */
};
typedef union cavm_psm_int_setx_jerr_ena_w1c cavm_psm_int_setx_jerr_ena_w1c_t;

static inline uint64_t CAVM_PSM_INT_SETX_JERR_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_JERR_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=2))
        return 0x8600010e4080ll + 0x1000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x8600010e4080ll + 0x1000ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_SETX_JERR_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_JERR_ENA_W1C(a) cavm_psm_int_setx_jerr_ena_w1c_t
#define bustype_CAVM_PSM_INT_SETX_JERR_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_JERR_ENA_W1C(a) "PSM_INT_SETX_JERR_ENA_W1C"
#define device_bar_CAVM_PSM_INT_SETX_JERR_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_JERR_ENA_W1C(a) (a)
#define arguments_CAVM_PSM_INT_SETX_JERR_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_jerr_ena_w1s
 *
 * PHY Scheduler Job Error Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_psm_int_setx_jerr_ena_w1s
{
    uint64_t u;
    struct cavm_psm_int_setx_jerr_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jerr                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for PSM_INT_SET(0..2)_JERR_SUM_W1C[JERR]. */
#else /* Word 0 - Little Endian */
        uint64_t jerr                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for PSM_INT_SET(0..2)_JERR_SUM_W1C[JERR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_jerr_ena_w1s_s cn; */
};
typedef union cavm_psm_int_setx_jerr_ena_w1s cavm_psm_int_setx_jerr_ena_w1s_t;

static inline uint64_t CAVM_PSM_INT_SETX_JERR_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_JERR_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=2))
        return 0x8600010e40c0ll + 0x1000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x8600010e40c0ll + 0x1000ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_SETX_JERR_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_JERR_ENA_W1S(a) cavm_psm_int_setx_jerr_ena_w1s_t
#define bustype_CAVM_PSM_INT_SETX_JERR_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_JERR_ENA_W1S(a) "PSM_INT_SETX_JERR_ENA_W1S"
#define device_bar_CAVM_PSM_INT_SETX_JERR_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_JERR_ENA_W1S(a) (a)
#define arguments_CAVM_PSM_INT_SETX_JERR_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_jerr_hi_ena_w1c
 *
 * PHY Scheduler Job Error Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_psm_int_setx_jerr_hi_ena_w1c
{
    uint64_t u;
    struct cavm_psm_int_setx_jerr_hi_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t jerr                  : 4;  /**< [  3:  0](R/W1C/H) Reads or clears enable for PSM_INT_SET(1)_JERR_HI_SUM_W1C[JERR]. */
#else /* Word 0 - Little Endian */
        uint64_t jerr                  : 4;  /**< [  3:  0](R/W1C/H) Reads or clears enable for PSM_INT_SET(1)_JERR_HI_SUM_W1C[JERR]. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_jerr_hi_ena_w1c_s cn; */
};
typedef union cavm_psm_int_setx_jerr_hi_ena_w1c cavm_psm_int_setx_jerr_hi_ena_w1c_t;

static inline uint64_t CAVM_PSM_INT_SETX_JERR_HI_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_JERR_HI_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==1))
        return 0x8600010e4088ll + 0x1000ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_INT_SETX_JERR_HI_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_JERR_HI_ENA_W1C(a) cavm_psm_int_setx_jerr_hi_ena_w1c_t
#define bustype_CAVM_PSM_INT_SETX_JERR_HI_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_JERR_HI_ENA_W1C(a) "PSM_INT_SETX_JERR_HI_ENA_W1C"
#define device_bar_CAVM_PSM_INT_SETX_JERR_HI_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_JERR_HI_ENA_W1C(a) (a)
#define arguments_CAVM_PSM_INT_SETX_JERR_HI_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_jerr_hi_ena_w1s
 *
 * PHY Scheduler Job Error Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_psm_int_setx_jerr_hi_ena_w1s
{
    uint64_t u;
    struct cavm_psm_int_setx_jerr_hi_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t jerr                  : 4;  /**< [  3:  0](R/W1S/H) Reads or sets enable for PSM_INT_SET(1)_JERR_HI_SUM_W1C[JERR]. */
#else /* Word 0 - Little Endian */
        uint64_t jerr                  : 4;  /**< [  3:  0](R/W1S/H) Reads or sets enable for PSM_INT_SET(1)_JERR_HI_SUM_W1C[JERR]. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_jerr_hi_ena_w1s_s cn; */
};
typedef union cavm_psm_int_setx_jerr_hi_ena_w1s cavm_psm_int_setx_jerr_hi_ena_w1s_t;

static inline uint64_t CAVM_PSM_INT_SETX_JERR_HI_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_JERR_HI_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==1))
        return 0x8600010e40c8ll + 0x1000ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_INT_SETX_JERR_HI_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_JERR_HI_ENA_W1S(a) cavm_psm_int_setx_jerr_hi_ena_w1s_t
#define bustype_CAVM_PSM_INT_SETX_JERR_HI_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_JERR_HI_ENA_W1S(a) "PSM_INT_SETX_JERR_HI_ENA_W1S"
#define device_bar_CAVM_PSM_INT_SETX_JERR_HI_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_JERR_HI_ENA_W1S(a) (a)
#define arguments_CAVM_PSM_INT_SETX_JERR_HI_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_jerr_hi_sum_w1c
 *
 * PHY Scheduler Job Error Interrupt Registers
 * These registers report the status of the job error interrupts for each
 * MHAB/MDAB. Writing a 1 will clear the selected interrupt. Writes of 0 are
 * ignored.
 */
union cavm_psm_int_setx_jerr_hi_sum_w1c
{
    uint64_t u;
    struct cavm_psm_int_setx_jerr_hi_sum_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t jerr                  : 4;  /**< [  3:  0](R/W1C/H) Status bit for each job error interrupt.  The bits are indexed by
                                                                 the MHAB/MDAB number, as defined by the PSM_SET(0..2)_MABDID_E enum. */
#else /* Word 0 - Little Endian */
        uint64_t jerr                  : 4;  /**< [  3:  0](R/W1C/H) Status bit for each job error interrupt.  The bits are indexed by
                                                                 the MHAB/MDAB number, as defined by the PSM_SET(0..2)_MABDID_E enum. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_jerr_hi_sum_w1c_s cn; */
};
typedef union cavm_psm_int_setx_jerr_hi_sum_w1c cavm_psm_int_setx_jerr_hi_sum_w1c_t;

static inline uint64_t CAVM_PSM_INT_SETX_JERR_HI_SUM_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_JERR_HI_SUM_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==1))
        return 0x8600010e4008ll + 0x1000ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_INT_SETX_JERR_HI_SUM_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_JERR_HI_SUM_W1C(a) cavm_psm_int_setx_jerr_hi_sum_w1c_t
#define bustype_CAVM_PSM_INT_SETX_JERR_HI_SUM_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_JERR_HI_SUM_W1C(a) "PSM_INT_SETX_JERR_HI_SUM_W1C"
#define device_bar_CAVM_PSM_INT_SETX_JERR_HI_SUM_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_JERR_HI_SUM_W1C(a) (a)
#define arguments_CAVM_PSM_INT_SETX_JERR_HI_SUM_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_jerr_hi_sum_w1s
 *
 * PHY Scheduler Job Error Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_psm_int_setx_jerr_hi_sum_w1s
{
    uint64_t u;
    struct cavm_psm_int_setx_jerr_hi_sum_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t jerr                  : 4;  /**< [  3:  0](R/W1S/H) Reads or sets PSM_INT_SET(1)_JERR_HI_SUM_W1C[JERR]. */
#else /* Word 0 - Little Endian */
        uint64_t jerr                  : 4;  /**< [  3:  0](R/W1S/H) Reads or sets PSM_INT_SET(1)_JERR_HI_SUM_W1C[JERR]. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_jerr_hi_sum_w1s_s cn; */
};
typedef union cavm_psm_int_setx_jerr_hi_sum_w1s cavm_psm_int_setx_jerr_hi_sum_w1s_t;

static inline uint64_t CAVM_PSM_INT_SETX_JERR_HI_SUM_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_JERR_HI_SUM_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==1))
        return 0x8600010e4048ll + 0x1000ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_INT_SETX_JERR_HI_SUM_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_JERR_HI_SUM_W1S(a) cavm_psm_int_setx_jerr_hi_sum_w1s_t
#define bustype_CAVM_PSM_INT_SETX_JERR_HI_SUM_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_JERR_HI_SUM_W1S(a) "PSM_INT_SETX_JERR_HI_SUM_W1S"
#define device_bar_CAVM_PSM_INT_SETX_JERR_HI_SUM_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_JERR_HI_SUM_W1S(a) (a)
#define arguments_CAVM_PSM_INT_SETX_JERR_HI_SUM_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_jerr_sum_w1c
 *
 * PHY Scheduler Job Error Interrupt Registers
 * These registers report the status of the job error interrupts for each
 * MHAB/MDAB. Writing a 1 will clear the selected interrupt. Writes of 0 are
 * ignored.
 */
union cavm_psm_int_setx_jerr_sum_w1c
{
    uint64_t u;
    struct cavm_psm_int_setx_jerr_sum_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jerr                  : 64; /**< [ 63:  0](R/W1C/H) Status bit for each job error interrupt.  The bits are indexed by
                                                                 the MHAB/MDAB number, as defined by the PSM_SET(0..2)_MABDID_E enum. */
#else /* Word 0 - Little Endian */
        uint64_t jerr                  : 64; /**< [ 63:  0](R/W1C/H) Status bit for each job error interrupt.  The bits are indexed by
                                                                 the MHAB/MDAB number, as defined by the PSM_SET(0..2)_MABDID_E enum. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_jerr_sum_w1c_s cn; */
};
typedef union cavm_psm_int_setx_jerr_sum_w1c cavm_psm_int_setx_jerr_sum_w1c_t;

static inline uint64_t CAVM_PSM_INT_SETX_JERR_SUM_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_JERR_SUM_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=2))
        return 0x8600010e4000ll + 0x1000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x8600010e4000ll + 0x1000ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_SETX_JERR_SUM_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_JERR_SUM_W1C(a) cavm_psm_int_setx_jerr_sum_w1c_t
#define bustype_CAVM_PSM_INT_SETX_JERR_SUM_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_JERR_SUM_W1C(a) "PSM_INT_SETX_JERR_SUM_W1C"
#define device_bar_CAVM_PSM_INT_SETX_JERR_SUM_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_JERR_SUM_W1C(a) (a)
#define arguments_CAVM_PSM_INT_SETX_JERR_SUM_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_jerr_sum_w1s
 *
 * PHY Scheduler Job Error Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_psm_int_setx_jerr_sum_w1s
{
    uint64_t u;
    struct cavm_psm_int_setx_jerr_sum_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jerr                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets PSM_INT_SET(0..2)_JERR_SUM_W1C[JERR]. */
#else /* Word 0 - Little Endian */
        uint64_t jerr                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets PSM_INT_SET(0..2)_JERR_SUM_W1C[JERR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_jerr_sum_w1s_s cn; */
};
typedef union cavm_psm_int_setx_jerr_sum_w1s cavm_psm_int_setx_jerr_sum_w1s_t;

static inline uint64_t CAVM_PSM_INT_SETX_JERR_SUM_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_JERR_SUM_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=2))
        return 0x8600010e4040ll + 0x1000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x8600010e4040ll + 0x1000ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_SETX_JERR_SUM_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_JERR_SUM_W1S(a) cavm_psm_int_setx_jerr_sum_w1s_t
#define bustype_CAVM_PSM_INT_SETX_JERR_SUM_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_JERR_SUM_W1S(a) "PSM_INT_SETX_JERR_SUM_W1S"
#define device_bar_CAVM_PSM_INT_SETX_JERR_SUM_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_JERR_SUM_W1S(a) (a)
#define arguments_CAVM_PSM_INT_SETX_JERR_SUM_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_jnfat_ena_w1c
 *
 * PHY Scheduler Non-Fatal Job Error Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_psm_int_setx_jnfat_ena_w1c
{
    uint64_t u;
    struct cavm_psm_int_setx_jnfat_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jnfat                 : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for PSM_INT_SET(0..2)_JNFAT_SUM_W1C[JNFAT]. */
#else /* Word 0 - Little Endian */
        uint64_t jnfat                 : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for PSM_INT_SET(0..2)_JNFAT_SUM_W1C[JNFAT]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_jnfat_ena_w1c_s cn; */
};
typedef union cavm_psm_int_setx_jnfat_ena_w1c cavm_psm_int_setx_jnfat_ena_w1c_t;

static inline uint64_t CAVM_PSM_INT_SETX_JNFAT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_JNFAT_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=2))
        return 0x8600010e4180ll + 0x1000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x8600010e4180ll + 0x1000ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_SETX_JNFAT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_JNFAT_ENA_W1C(a) cavm_psm_int_setx_jnfat_ena_w1c_t
#define bustype_CAVM_PSM_INT_SETX_JNFAT_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_JNFAT_ENA_W1C(a) "PSM_INT_SETX_JNFAT_ENA_W1C"
#define device_bar_CAVM_PSM_INT_SETX_JNFAT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_JNFAT_ENA_W1C(a) (a)
#define arguments_CAVM_PSM_INT_SETX_JNFAT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_jnfat_ena_w1s
 *
 * PHY Scheduler Non-Fatal Job Error Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_psm_int_setx_jnfat_ena_w1s
{
    uint64_t u;
    struct cavm_psm_int_setx_jnfat_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jnfat                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for PSM_INT_SET(0..2)_JNFAT_SUM_W1C[JNFAT]. */
#else /* Word 0 - Little Endian */
        uint64_t jnfat                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for PSM_INT_SET(0..2)_JNFAT_SUM_W1C[JNFAT]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_jnfat_ena_w1s_s cn; */
};
typedef union cavm_psm_int_setx_jnfat_ena_w1s cavm_psm_int_setx_jnfat_ena_w1s_t;

static inline uint64_t CAVM_PSM_INT_SETX_JNFAT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_JNFAT_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=2))
        return 0x8600010e41c0ll + 0x1000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x8600010e41c0ll + 0x1000ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_SETX_JNFAT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_JNFAT_ENA_W1S(a) cavm_psm_int_setx_jnfat_ena_w1s_t
#define bustype_CAVM_PSM_INT_SETX_JNFAT_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_JNFAT_ENA_W1S(a) "PSM_INT_SETX_JNFAT_ENA_W1S"
#define device_bar_CAVM_PSM_INT_SETX_JNFAT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_JNFAT_ENA_W1S(a) (a)
#define arguments_CAVM_PSM_INT_SETX_JNFAT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_jnfat_hi_ena_w1c
 *
 * PHY Scheduler Non-Fatal Job Error Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_psm_int_setx_jnfat_hi_ena_w1c
{
    uint64_t u;
    struct cavm_psm_int_setx_jnfat_hi_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t jnfat                 : 4;  /**< [  3:  0](R/W1C/H) Reads or clears enable for PSM_INT_SET(1)_JNFAT_HI_SUM_W1C[JNFAT]. */
#else /* Word 0 - Little Endian */
        uint64_t jnfat                 : 4;  /**< [  3:  0](R/W1C/H) Reads or clears enable for PSM_INT_SET(1)_JNFAT_HI_SUM_W1C[JNFAT]. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_jnfat_hi_ena_w1c_s cn; */
};
typedef union cavm_psm_int_setx_jnfat_hi_ena_w1c cavm_psm_int_setx_jnfat_hi_ena_w1c_t;

static inline uint64_t CAVM_PSM_INT_SETX_JNFAT_HI_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_JNFAT_HI_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==1))
        return 0x8600010e4188ll + 0x1000ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_INT_SETX_JNFAT_HI_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_JNFAT_HI_ENA_W1C(a) cavm_psm_int_setx_jnfat_hi_ena_w1c_t
#define bustype_CAVM_PSM_INT_SETX_JNFAT_HI_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_JNFAT_HI_ENA_W1C(a) "PSM_INT_SETX_JNFAT_HI_ENA_W1C"
#define device_bar_CAVM_PSM_INT_SETX_JNFAT_HI_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_JNFAT_HI_ENA_W1C(a) (a)
#define arguments_CAVM_PSM_INT_SETX_JNFAT_HI_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_jnfat_hi_ena_w1s
 *
 * PHY Scheduler Non-Fatal Job Error Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_psm_int_setx_jnfat_hi_ena_w1s
{
    uint64_t u;
    struct cavm_psm_int_setx_jnfat_hi_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t jnfat                 : 4;  /**< [  3:  0](R/W1S/H) Reads or sets enable for PSM_INT_SET(1)_JNFAT_HI_SUM_W1C[JNFAT]. */
#else /* Word 0 - Little Endian */
        uint64_t jnfat                 : 4;  /**< [  3:  0](R/W1S/H) Reads or sets enable for PSM_INT_SET(1)_JNFAT_HI_SUM_W1C[JNFAT]. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_jnfat_hi_ena_w1s_s cn; */
};
typedef union cavm_psm_int_setx_jnfat_hi_ena_w1s cavm_psm_int_setx_jnfat_hi_ena_w1s_t;

static inline uint64_t CAVM_PSM_INT_SETX_JNFAT_HI_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_JNFAT_HI_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==1))
        return 0x8600010e41c8ll + 0x1000ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_INT_SETX_JNFAT_HI_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_JNFAT_HI_ENA_W1S(a) cavm_psm_int_setx_jnfat_hi_ena_w1s_t
#define bustype_CAVM_PSM_INT_SETX_JNFAT_HI_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_JNFAT_HI_ENA_W1S(a) "PSM_INT_SETX_JNFAT_HI_ENA_W1S"
#define device_bar_CAVM_PSM_INT_SETX_JNFAT_HI_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_JNFAT_HI_ENA_W1S(a) (a)
#define arguments_CAVM_PSM_INT_SETX_JNFAT_HI_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_jnfat_hi_sum_w1c
 *
 * PHY Scheduler Non-Fatal Job Error Interrupt Registers
 * This register reports the status of the non-fatal job error interrupts
 * for each MHAB/MDAB. Writing a 1 will clear the selected interrupt.
 * Writes of 0 are ignored.
 */
union cavm_psm_int_setx_jnfat_hi_sum_w1c
{
    uint64_t u;
    struct cavm_psm_int_setx_jnfat_hi_sum_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t jnfat                 : 4;  /**< [  3:  0](R/W1C/H) Status bit for each non-fatal job error interrupt.  The bits are
                                                                 indexed by the MHAB/MDAB number, as defined by the
                                                                 PSM_SET(0..2)_MABDID_E enum. */
#else /* Word 0 - Little Endian */
        uint64_t jnfat                 : 4;  /**< [  3:  0](R/W1C/H) Status bit for each non-fatal job error interrupt.  The bits are
                                                                 indexed by the MHAB/MDAB number, as defined by the
                                                                 PSM_SET(0..2)_MABDID_E enum. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_jnfat_hi_sum_w1c_s cn; */
};
typedef union cavm_psm_int_setx_jnfat_hi_sum_w1c cavm_psm_int_setx_jnfat_hi_sum_w1c_t;

static inline uint64_t CAVM_PSM_INT_SETX_JNFAT_HI_SUM_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_JNFAT_HI_SUM_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==1))
        return 0x8600010e4108ll + 0x1000ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_INT_SETX_JNFAT_HI_SUM_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_JNFAT_HI_SUM_W1C(a) cavm_psm_int_setx_jnfat_hi_sum_w1c_t
#define bustype_CAVM_PSM_INT_SETX_JNFAT_HI_SUM_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_JNFAT_HI_SUM_W1C(a) "PSM_INT_SETX_JNFAT_HI_SUM_W1C"
#define device_bar_CAVM_PSM_INT_SETX_JNFAT_HI_SUM_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_JNFAT_HI_SUM_W1C(a) (a)
#define arguments_CAVM_PSM_INT_SETX_JNFAT_HI_SUM_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_jnfat_hi_sum_w1s
 *
 * PHY Scheduler Non-Fatal Job Error Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_psm_int_setx_jnfat_hi_sum_w1s
{
    uint64_t u;
    struct cavm_psm_int_setx_jnfat_hi_sum_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t jnfat                 : 4;  /**< [  3:  0](R/W1S/H) Reads or sets PSM_INT_SET(1)_JNFAT_HI_SUM_W1C[JNFAT]. */
#else /* Word 0 - Little Endian */
        uint64_t jnfat                 : 4;  /**< [  3:  0](R/W1S/H) Reads or sets PSM_INT_SET(1)_JNFAT_HI_SUM_W1C[JNFAT]. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_jnfat_hi_sum_w1s_s cn; */
};
typedef union cavm_psm_int_setx_jnfat_hi_sum_w1s cavm_psm_int_setx_jnfat_hi_sum_w1s_t;

static inline uint64_t CAVM_PSM_INT_SETX_JNFAT_HI_SUM_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_JNFAT_HI_SUM_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==1))
        return 0x8600010e4148ll + 0x1000ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_INT_SETX_JNFAT_HI_SUM_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_JNFAT_HI_SUM_W1S(a) cavm_psm_int_setx_jnfat_hi_sum_w1s_t
#define bustype_CAVM_PSM_INT_SETX_JNFAT_HI_SUM_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_JNFAT_HI_SUM_W1S(a) "PSM_INT_SETX_JNFAT_HI_SUM_W1S"
#define device_bar_CAVM_PSM_INT_SETX_JNFAT_HI_SUM_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_JNFAT_HI_SUM_W1S(a) (a)
#define arguments_CAVM_PSM_INT_SETX_JNFAT_HI_SUM_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_jnfat_sum_w1c
 *
 * PHY Scheduler Non-Fatal Job Error Interrupt Registers
 * This register reports the status of the non-fatal job error interrupts
 * for each MHAB/MDAB. Writing a 1 will clear the selected interrupt.
 * Writes of 0 are ignored.
 */
union cavm_psm_int_setx_jnfat_sum_w1c
{
    uint64_t u;
    struct cavm_psm_int_setx_jnfat_sum_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jnfat                 : 64; /**< [ 63:  0](R/W1C/H) Status bit for each non-fatal job error interrupt.  The bits are
                                                                 indexed by the MHAB/MDAB number, as defined by the
                                                                 PSM_SET(0..2)_MABDID_E enum. */
#else /* Word 0 - Little Endian */
        uint64_t jnfat                 : 64; /**< [ 63:  0](R/W1C/H) Status bit for each non-fatal job error interrupt.  The bits are
                                                                 indexed by the MHAB/MDAB number, as defined by the
                                                                 PSM_SET(0..2)_MABDID_E enum. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_jnfat_sum_w1c_s cn; */
};
typedef union cavm_psm_int_setx_jnfat_sum_w1c cavm_psm_int_setx_jnfat_sum_w1c_t;

static inline uint64_t CAVM_PSM_INT_SETX_JNFAT_SUM_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_JNFAT_SUM_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=2))
        return 0x8600010e4100ll + 0x1000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x8600010e4100ll + 0x1000ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_SETX_JNFAT_SUM_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_JNFAT_SUM_W1C(a) cavm_psm_int_setx_jnfat_sum_w1c_t
#define bustype_CAVM_PSM_INT_SETX_JNFAT_SUM_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_JNFAT_SUM_W1C(a) "PSM_INT_SETX_JNFAT_SUM_W1C"
#define device_bar_CAVM_PSM_INT_SETX_JNFAT_SUM_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_JNFAT_SUM_W1C(a) (a)
#define arguments_CAVM_PSM_INT_SETX_JNFAT_SUM_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_jnfat_sum_w1s
 *
 * PHY Scheduler Non-Fatal Job Error Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_psm_int_setx_jnfat_sum_w1s
{
    uint64_t u;
    struct cavm_psm_int_setx_jnfat_sum_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jnfat                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets PSM_INT_SET(0..2)_JNFAT_SUM_W1C[JNFAT]. */
#else /* Word 0 - Little Endian */
        uint64_t jnfat                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets PSM_INT_SET(0..2)_JNFAT_SUM_W1C[JNFAT]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_jnfat_sum_w1s_s cn; */
};
typedef union cavm_psm_int_setx_jnfat_sum_w1s cavm_psm_int_setx_jnfat_sum_w1s_t;

static inline uint64_t CAVM_PSM_INT_SETX_JNFAT_SUM_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_JNFAT_SUM_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=2))
        return 0x8600010e4140ll + 0x1000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x8600010e4140ll + 0x1000ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_SETX_JNFAT_SUM_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_JNFAT_SUM_W1S(a) cavm_psm_int_setx_jnfat_sum_w1s_t
#define bustype_CAVM_PSM_INT_SETX_JNFAT_SUM_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_JNFAT_SUM_W1S(a) "PSM_INT_SETX_JNFAT_SUM_W1S"
#define device_bar_CAVM_PSM_INT_SETX_JNFAT_SUM_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_JNFAT_SUM_W1S(a) (a)
#define arguments_CAVM_PSM_INT_SETX_JNFAT_SUM_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_jto_ena_w1c
 *
 * PHY Scheduler Job Timeout Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_psm_int_setx_jto_ena_w1c
{
    uint64_t u;
    struct cavm_psm_int_setx_jto_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jto                   : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for PSM_INT_SET(0..2)_JTO_SUM_W1C[JTO]. */
#else /* Word 0 - Little Endian */
        uint64_t jto                   : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for PSM_INT_SET(0..2)_JTO_SUM_W1C[JTO]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_jto_ena_w1c_s cn; */
};
typedef union cavm_psm_int_setx_jto_ena_w1c cavm_psm_int_setx_jto_ena_w1c_t;

static inline uint64_t CAVM_PSM_INT_SETX_JTO_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_JTO_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=2))
        return 0x8600010e4280ll + 0x1000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x8600010e4280ll + 0x1000ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_SETX_JTO_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_JTO_ENA_W1C(a) cavm_psm_int_setx_jto_ena_w1c_t
#define bustype_CAVM_PSM_INT_SETX_JTO_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_JTO_ENA_W1C(a) "PSM_INT_SETX_JTO_ENA_W1C"
#define device_bar_CAVM_PSM_INT_SETX_JTO_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_JTO_ENA_W1C(a) (a)
#define arguments_CAVM_PSM_INT_SETX_JTO_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_jto_ena_w1s
 *
 * PHY Scheduler Job Timeout Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_psm_int_setx_jto_ena_w1s
{
    uint64_t u;
    struct cavm_psm_int_setx_jto_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jto                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for PSM_INT_SET(0..2)_JTO_SUM_W1C[JTO]. */
#else /* Word 0 - Little Endian */
        uint64_t jto                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for PSM_INT_SET(0..2)_JTO_SUM_W1C[JTO]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_jto_ena_w1s_s cn; */
};
typedef union cavm_psm_int_setx_jto_ena_w1s cavm_psm_int_setx_jto_ena_w1s_t;

static inline uint64_t CAVM_PSM_INT_SETX_JTO_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_JTO_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=2))
        return 0x8600010e42c0ll + 0x1000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x8600010e42c0ll + 0x1000ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_SETX_JTO_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_JTO_ENA_W1S(a) cavm_psm_int_setx_jto_ena_w1s_t
#define bustype_CAVM_PSM_INT_SETX_JTO_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_JTO_ENA_W1S(a) "PSM_INT_SETX_JTO_ENA_W1S"
#define device_bar_CAVM_PSM_INT_SETX_JTO_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_JTO_ENA_W1S(a) (a)
#define arguments_CAVM_PSM_INT_SETX_JTO_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_jto_hi_ena_w1c
 *
 * PHY Scheduler Job Timeout Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_psm_int_setx_jto_hi_ena_w1c
{
    uint64_t u;
    struct cavm_psm_int_setx_jto_hi_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t jto                   : 4;  /**< [  3:  0](R/W1C/H) Reads or clears enable for PSM_INT_SET(1)_JTO_HI_SUM_W1C[JTO]. */
#else /* Word 0 - Little Endian */
        uint64_t jto                   : 4;  /**< [  3:  0](R/W1C/H) Reads or clears enable for PSM_INT_SET(1)_JTO_HI_SUM_W1C[JTO]. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_jto_hi_ena_w1c_s cn; */
};
typedef union cavm_psm_int_setx_jto_hi_ena_w1c cavm_psm_int_setx_jto_hi_ena_w1c_t;

static inline uint64_t CAVM_PSM_INT_SETX_JTO_HI_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_JTO_HI_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==1))
        return 0x8600010e4288ll + 0x1000ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_INT_SETX_JTO_HI_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_JTO_HI_ENA_W1C(a) cavm_psm_int_setx_jto_hi_ena_w1c_t
#define bustype_CAVM_PSM_INT_SETX_JTO_HI_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_JTO_HI_ENA_W1C(a) "PSM_INT_SETX_JTO_HI_ENA_W1C"
#define device_bar_CAVM_PSM_INT_SETX_JTO_HI_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_JTO_HI_ENA_W1C(a) (a)
#define arguments_CAVM_PSM_INT_SETX_JTO_HI_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_jto_hi_ena_w1s
 *
 * PHY Scheduler Job Timeout Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_psm_int_setx_jto_hi_ena_w1s
{
    uint64_t u;
    struct cavm_psm_int_setx_jto_hi_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t jto                   : 4;  /**< [  3:  0](R/W1S/H) Reads or sets enable for PSM_INT_SET(1)_JTO_HI_SUM_W1C[JTO]. */
#else /* Word 0 - Little Endian */
        uint64_t jto                   : 4;  /**< [  3:  0](R/W1S/H) Reads or sets enable for PSM_INT_SET(1)_JTO_HI_SUM_W1C[JTO]. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_jto_hi_ena_w1s_s cn; */
};
typedef union cavm_psm_int_setx_jto_hi_ena_w1s cavm_psm_int_setx_jto_hi_ena_w1s_t;

static inline uint64_t CAVM_PSM_INT_SETX_JTO_HI_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_JTO_HI_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==1))
        return 0x8600010e42c8ll + 0x1000ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_INT_SETX_JTO_HI_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_JTO_HI_ENA_W1S(a) cavm_psm_int_setx_jto_hi_ena_w1s_t
#define bustype_CAVM_PSM_INT_SETX_JTO_HI_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_JTO_HI_ENA_W1S(a) "PSM_INT_SETX_JTO_HI_ENA_W1S"
#define device_bar_CAVM_PSM_INT_SETX_JTO_HI_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_JTO_HI_ENA_W1S(a) (a)
#define arguments_CAVM_PSM_INT_SETX_JTO_HI_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_jto_hi_sum_w1c
 *
 * PHY Scheduler Job Timeout Interrupt Registers
 * This register reports the status of the job timeout interrupts for all MHABs/MDABs.
 * Writing a 1 will clear the selected interrupt.  Writes of 0 are ignored.
 */
union cavm_psm_int_setx_jto_hi_sum_w1c
{
    uint64_t u;
    struct cavm_psm_int_setx_jto_hi_sum_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t jto                   : 4;  /**< [  3:  0](R/W1C/H) Status bit for each job timeout interrupt.  The bits are indexed by
                                                                 the MHAB/MDAB number, as defined by the PSM_SET(0..2)_MABDID_E enum. */
#else /* Word 0 - Little Endian */
        uint64_t jto                   : 4;  /**< [  3:  0](R/W1C/H) Status bit for each job timeout interrupt.  The bits are indexed by
                                                                 the MHAB/MDAB number, as defined by the PSM_SET(0..2)_MABDID_E enum. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_jto_hi_sum_w1c_s cn; */
};
typedef union cavm_psm_int_setx_jto_hi_sum_w1c cavm_psm_int_setx_jto_hi_sum_w1c_t;

static inline uint64_t CAVM_PSM_INT_SETX_JTO_HI_SUM_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_JTO_HI_SUM_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==1))
        return 0x8600010e4208ll + 0x1000ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_INT_SETX_JTO_HI_SUM_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_JTO_HI_SUM_W1C(a) cavm_psm_int_setx_jto_hi_sum_w1c_t
#define bustype_CAVM_PSM_INT_SETX_JTO_HI_SUM_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_JTO_HI_SUM_W1C(a) "PSM_INT_SETX_JTO_HI_SUM_W1C"
#define device_bar_CAVM_PSM_INT_SETX_JTO_HI_SUM_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_JTO_HI_SUM_W1C(a) (a)
#define arguments_CAVM_PSM_INT_SETX_JTO_HI_SUM_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_jto_hi_sum_w1s
 *
 * PHY Scheduler Job Timeout Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_psm_int_setx_jto_hi_sum_w1s
{
    uint64_t u;
    struct cavm_psm_int_setx_jto_hi_sum_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t jto                   : 4;  /**< [  3:  0](R/W1S/H) Reads or sets PSM_INT_SET(1)_JTO_HI_SUM_W1C[JTO]. */
#else /* Word 0 - Little Endian */
        uint64_t jto                   : 4;  /**< [  3:  0](R/W1S/H) Reads or sets PSM_INT_SET(1)_JTO_HI_SUM_W1C[JTO]. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_jto_hi_sum_w1s_s cn; */
};
typedef union cavm_psm_int_setx_jto_hi_sum_w1s cavm_psm_int_setx_jto_hi_sum_w1s_t;

static inline uint64_t CAVM_PSM_INT_SETX_JTO_HI_SUM_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_JTO_HI_SUM_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==1))
        return 0x8600010e4248ll + 0x1000ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_INT_SETX_JTO_HI_SUM_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_JTO_HI_SUM_W1S(a) cavm_psm_int_setx_jto_hi_sum_w1s_t
#define bustype_CAVM_PSM_INT_SETX_JTO_HI_SUM_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_JTO_HI_SUM_W1S(a) "PSM_INT_SETX_JTO_HI_SUM_W1S"
#define device_bar_CAVM_PSM_INT_SETX_JTO_HI_SUM_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_JTO_HI_SUM_W1S(a) (a)
#define arguments_CAVM_PSM_INT_SETX_JTO_HI_SUM_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_jto_sum_w1c
 *
 * PHY Scheduler Job Timeout Interrupt Registers
 * This register reports the status of the job timeout interrupts for all MHABs/MDABs.
 * Writing a 1 will clear the selected interrupt.  Writes of 0 are ignored.
 */
union cavm_psm_int_setx_jto_sum_w1c
{
    uint64_t u;
    struct cavm_psm_int_setx_jto_sum_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jto                   : 64; /**< [ 63:  0](R/W1C/H) Status bit for each job timeout interrupt.  The bits are indexed by
                                                                 the MHAB/MDAB number, as defined by the PSM_SET(0..2)_MABDID_E enum. */
#else /* Word 0 - Little Endian */
        uint64_t jto                   : 64; /**< [ 63:  0](R/W1C/H) Status bit for each job timeout interrupt.  The bits are indexed by
                                                                 the MHAB/MDAB number, as defined by the PSM_SET(0..2)_MABDID_E enum. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_jto_sum_w1c_s cn; */
};
typedef union cavm_psm_int_setx_jto_sum_w1c cavm_psm_int_setx_jto_sum_w1c_t;

static inline uint64_t CAVM_PSM_INT_SETX_JTO_SUM_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_JTO_SUM_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=2))
        return 0x8600010e4200ll + 0x1000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x8600010e4200ll + 0x1000ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_SETX_JTO_SUM_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_JTO_SUM_W1C(a) cavm_psm_int_setx_jto_sum_w1c_t
#define bustype_CAVM_PSM_INT_SETX_JTO_SUM_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_JTO_SUM_W1C(a) "PSM_INT_SETX_JTO_SUM_W1C"
#define device_bar_CAVM_PSM_INT_SETX_JTO_SUM_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_JTO_SUM_W1C(a) (a)
#define arguments_CAVM_PSM_INT_SETX_JTO_SUM_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_jto_sum_w1s
 *
 * PHY Scheduler Job Timeout Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_psm_int_setx_jto_sum_w1s
{
    uint64_t u;
    struct cavm_psm_int_setx_jto_sum_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jto                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets PSM_INT_SET(0..2)_JTO_SUM_W1C[JTO]. */
#else /* Word 0 - Little Endian */
        uint64_t jto                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets PSM_INT_SET(0..2)_JTO_SUM_W1C[JTO]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_jto_sum_w1s_s cn; */
};
typedef union cavm_psm_int_setx_jto_sum_w1s cavm_psm_int_setx_jto_sum_w1s_t;

static inline uint64_t CAVM_PSM_INT_SETX_JTO_SUM_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_JTO_SUM_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=2))
        return 0x8600010e4240ll + 0x1000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x8600010e4240ll + 0x1000ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_SETX_JTO_SUM_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_JTO_SUM_W1S(a) cavm_psm_int_setx_jto_sum_w1s_t
#define bustype_CAVM_PSM_INT_SETX_JTO_SUM_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_JTO_SUM_W1S(a) "PSM_INT_SETX_JTO_SUM_W1S"
#define device_bar_CAVM_PSM_INT_SETX_JTO_SUM_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_JTO_SUM_W1S(a) (a)
#define arguments_CAVM_PSM_INT_SETX_JTO_SUM_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_mto_ena_w1c
 *
 * PHY Scheduler MAB FIFO Timeout Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_psm_int_setx_mto_ena_w1c
{
    uint64_t u;
    struct cavm_psm_int_setx_mto_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mto                   : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for PSM_INT_SET(0..2)_MTO_SUM_W1C[MTO]. */
#else /* Word 0 - Little Endian */
        uint64_t mto                   : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for PSM_INT_SET(0..2)_MTO_SUM_W1C[MTO]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_mto_ena_w1c_s cn; */
};
typedef union cavm_psm_int_setx_mto_ena_w1c cavm_psm_int_setx_mto_ena_w1c_t;

static inline uint64_t CAVM_PSM_INT_SETX_MTO_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_MTO_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=2))
        return 0x8600010e4580ll + 0x1000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x8600010e4580ll + 0x1000ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_SETX_MTO_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_MTO_ENA_W1C(a) cavm_psm_int_setx_mto_ena_w1c_t
#define bustype_CAVM_PSM_INT_SETX_MTO_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_MTO_ENA_W1C(a) "PSM_INT_SETX_MTO_ENA_W1C"
#define device_bar_CAVM_PSM_INT_SETX_MTO_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_MTO_ENA_W1C(a) (a)
#define arguments_CAVM_PSM_INT_SETX_MTO_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_mto_ena_w1s
 *
 * PHY Scheduler MAB FIFO Timeout Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_psm_int_setx_mto_ena_w1s
{
    uint64_t u;
    struct cavm_psm_int_setx_mto_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mto                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for PSM_INT_SET(0..2)_MTO_SUM_W1C[MTO]. */
#else /* Word 0 - Little Endian */
        uint64_t mto                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for PSM_INT_SET(0..2)_MTO_SUM_W1C[MTO]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_mto_ena_w1s_s cn; */
};
typedef union cavm_psm_int_setx_mto_ena_w1s cavm_psm_int_setx_mto_ena_w1s_t;

static inline uint64_t CAVM_PSM_INT_SETX_MTO_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_MTO_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=2))
        return 0x8600010e45c0ll + 0x1000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x8600010e45c0ll + 0x1000ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_SETX_MTO_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_MTO_ENA_W1S(a) cavm_psm_int_setx_mto_ena_w1s_t
#define bustype_CAVM_PSM_INT_SETX_MTO_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_MTO_ENA_W1S(a) "PSM_INT_SETX_MTO_ENA_W1S"
#define device_bar_CAVM_PSM_INT_SETX_MTO_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_MTO_ENA_W1S(a) (a)
#define arguments_CAVM_PSM_INT_SETX_MTO_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_mto_hi_ena_w1c
 *
 * PHY Scheduler MAB FIFO Timeout Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_psm_int_setx_mto_hi_ena_w1c
{
    uint64_t u;
    struct cavm_psm_int_setx_mto_hi_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t mto                   : 4;  /**< [  3:  0](R/W1C/H) Reads or clears enable for PSM_INT_SET(1)_MTO_HI_SUM_W1C[MTO]. */
#else /* Word 0 - Little Endian */
        uint64_t mto                   : 4;  /**< [  3:  0](R/W1C/H) Reads or clears enable for PSM_INT_SET(1)_MTO_HI_SUM_W1C[MTO]. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_mto_hi_ena_w1c_s cn; */
};
typedef union cavm_psm_int_setx_mto_hi_ena_w1c cavm_psm_int_setx_mto_hi_ena_w1c_t;

static inline uint64_t CAVM_PSM_INT_SETX_MTO_HI_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_MTO_HI_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==1))
        return 0x8600010e4588ll + 0x1000ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_INT_SETX_MTO_HI_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_MTO_HI_ENA_W1C(a) cavm_psm_int_setx_mto_hi_ena_w1c_t
#define bustype_CAVM_PSM_INT_SETX_MTO_HI_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_MTO_HI_ENA_W1C(a) "PSM_INT_SETX_MTO_HI_ENA_W1C"
#define device_bar_CAVM_PSM_INT_SETX_MTO_HI_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_MTO_HI_ENA_W1C(a) (a)
#define arguments_CAVM_PSM_INT_SETX_MTO_HI_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_mto_hi_ena_w1s
 *
 * PHY Scheduler MAB FIFO Timeout Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_psm_int_setx_mto_hi_ena_w1s
{
    uint64_t u;
    struct cavm_psm_int_setx_mto_hi_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t mto                   : 4;  /**< [  3:  0](R/W1S/H) Reads or sets enable for PSM_INT_SET(1)_MTO_HI_SUM_W1C[MTO]. */
#else /* Word 0 - Little Endian */
        uint64_t mto                   : 4;  /**< [  3:  0](R/W1S/H) Reads or sets enable for PSM_INT_SET(1)_MTO_HI_SUM_W1C[MTO]. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_mto_hi_ena_w1s_s cn; */
};
typedef union cavm_psm_int_setx_mto_hi_ena_w1s cavm_psm_int_setx_mto_hi_ena_w1s_t;

static inline uint64_t CAVM_PSM_INT_SETX_MTO_HI_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_MTO_HI_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==1))
        return 0x8600010e45c8ll + 0x1000ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_INT_SETX_MTO_HI_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_MTO_HI_ENA_W1S(a) cavm_psm_int_setx_mto_hi_ena_w1s_t
#define bustype_CAVM_PSM_INT_SETX_MTO_HI_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_MTO_HI_ENA_W1S(a) "PSM_INT_SETX_MTO_HI_ENA_W1S"
#define device_bar_CAVM_PSM_INT_SETX_MTO_HI_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_MTO_HI_ENA_W1S(a) (a)
#define arguments_CAVM_PSM_INT_SETX_MTO_HI_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_mto_hi_sum_w1c
 *
 * PHY Scheduler MAB FIFO Timeout Interrupt Registers
 * This register reports the status of the MAB FIFO timeout interrupts.
 * Writing a 1 will clear the selected interrupt.  Writes of 0 are ignored.
 */
union cavm_psm_int_setx_mto_hi_sum_w1c
{
    uint64_t u;
    struct cavm_psm_int_setx_mto_hi_sum_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t mto                   : 4;  /**< [  3:  0](R/W1C/H) Status bit for each MAB FIFO timeout interrupt.  The bits are
                                                                 indexed by the MHAB/MDAB number, as defined by the
                                                                 PSM_SET(0..2)_MABDID_E enum. */
#else /* Word 0 - Little Endian */
        uint64_t mto                   : 4;  /**< [  3:  0](R/W1C/H) Status bit for each MAB FIFO timeout interrupt.  The bits are
                                                                 indexed by the MHAB/MDAB number, as defined by the
                                                                 PSM_SET(0..2)_MABDID_E enum. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_mto_hi_sum_w1c_s cn; */
};
typedef union cavm_psm_int_setx_mto_hi_sum_w1c cavm_psm_int_setx_mto_hi_sum_w1c_t;

static inline uint64_t CAVM_PSM_INT_SETX_MTO_HI_SUM_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_MTO_HI_SUM_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==1))
        return 0x8600010e4508ll + 0x1000ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_INT_SETX_MTO_HI_SUM_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_MTO_HI_SUM_W1C(a) cavm_psm_int_setx_mto_hi_sum_w1c_t
#define bustype_CAVM_PSM_INT_SETX_MTO_HI_SUM_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_MTO_HI_SUM_W1C(a) "PSM_INT_SETX_MTO_HI_SUM_W1C"
#define device_bar_CAVM_PSM_INT_SETX_MTO_HI_SUM_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_MTO_HI_SUM_W1C(a) (a)
#define arguments_CAVM_PSM_INT_SETX_MTO_HI_SUM_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_mto_hi_sum_w1s
 *
 * PHY Scheduler MAB FIFO Timeout Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_psm_int_setx_mto_hi_sum_w1s
{
    uint64_t u;
    struct cavm_psm_int_setx_mto_hi_sum_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t mto                   : 4;  /**< [  3:  0](R/W1S/H) Reads or sets PSM_INT_SET(1)_MTO_HI_SUM_W1C[MTO]. */
#else /* Word 0 - Little Endian */
        uint64_t mto                   : 4;  /**< [  3:  0](R/W1S/H) Reads or sets PSM_INT_SET(1)_MTO_HI_SUM_W1C[MTO]. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_mto_hi_sum_w1s_s cn; */
};
typedef union cavm_psm_int_setx_mto_hi_sum_w1s cavm_psm_int_setx_mto_hi_sum_w1s_t;

static inline uint64_t CAVM_PSM_INT_SETX_MTO_HI_SUM_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_MTO_HI_SUM_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==1))
        return 0x8600010e4548ll + 0x1000ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_INT_SETX_MTO_HI_SUM_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_MTO_HI_SUM_W1S(a) cavm_psm_int_setx_mto_hi_sum_w1s_t
#define bustype_CAVM_PSM_INT_SETX_MTO_HI_SUM_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_MTO_HI_SUM_W1S(a) "PSM_INT_SETX_MTO_HI_SUM_W1S"
#define device_bar_CAVM_PSM_INT_SETX_MTO_HI_SUM_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_MTO_HI_SUM_W1S(a) (a)
#define arguments_CAVM_PSM_INT_SETX_MTO_HI_SUM_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_mto_sum_w1c
 *
 * PHY Scheduler MAB FIFO Timeout Interrupt Registers
 * This register reports the status of the MAB FIFO timeout interrupts.
 * Writing a 1 will clear the selected interrupt.  Writes of 0 are ignored.
 */
union cavm_psm_int_setx_mto_sum_w1c
{
    uint64_t u;
    struct cavm_psm_int_setx_mto_sum_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mto                   : 64; /**< [ 63:  0](R/W1C/H) Status bit for each MAB FIFO timeout interrupt.  The bits are
                                                                 indexed by the MHAB/MDAB number, as defined by the
                                                                 PSM_SET(0..2)_MABDID_E enum. */
#else /* Word 0 - Little Endian */
        uint64_t mto                   : 64; /**< [ 63:  0](R/W1C/H) Status bit for each MAB FIFO timeout interrupt.  The bits are
                                                                 indexed by the MHAB/MDAB number, as defined by the
                                                                 PSM_SET(0..2)_MABDID_E enum. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_mto_sum_w1c_s cn; */
};
typedef union cavm_psm_int_setx_mto_sum_w1c cavm_psm_int_setx_mto_sum_w1c_t;

static inline uint64_t CAVM_PSM_INT_SETX_MTO_SUM_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_MTO_SUM_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=2))
        return 0x8600010e4500ll + 0x1000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x8600010e4500ll + 0x1000ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_SETX_MTO_SUM_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_MTO_SUM_W1C(a) cavm_psm_int_setx_mto_sum_w1c_t
#define bustype_CAVM_PSM_INT_SETX_MTO_SUM_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_MTO_SUM_W1C(a) "PSM_INT_SETX_MTO_SUM_W1C"
#define device_bar_CAVM_PSM_INT_SETX_MTO_SUM_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_MTO_SUM_W1C(a) (a)
#define arguments_CAVM_PSM_INT_SETX_MTO_SUM_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_set#_mto_sum_w1s
 *
 * PHY Scheduler MAB FIFO Timeout Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_psm_int_setx_mto_sum_w1s
{
    uint64_t u;
    struct cavm_psm_int_setx_mto_sum_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mto                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets PSM_INT_SET(0..2)_MTO_SUM_W1C[MTO]. */
#else /* Word 0 - Little Endian */
        uint64_t mto                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets PSM_INT_SET(0..2)_MTO_SUM_W1C[MTO]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_setx_mto_sum_w1s_s cn; */
};
typedef union cavm_psm_int_setx_mto_sum_w1s cavm_psm_int_setx_mto_sum_w1s_t;

static inline uint64_t CAVM_PSM_INT_SETX_MTO_SUM_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_SETX_MTO_SUM_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=2))
        return 0x8600010e4540ll + 0x1000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x8600010e4540ll + 0x1000ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_INT_SETX_MTO_SUM_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_SETX_MTO_SUM_W1S(a) cavm_psm_int_setx_mto_sum_w1s_t
#define bustype_CAVM_PSM_INT_SETX_MTO_SUM_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_SETX_MTO_SUM_W1S(a) "PSM_INT_SETX_MTO_SUM_W1S"
#define device_bar_CAVM_PSM_INT_SETX_MTO_SUM_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_SETX_MTO_SUM_W1S(a) (a)
#define arguments_CAVM_PSM_INT_SETX_MTO_SUM_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_int_timer_ena_w1c
 *
 * PHY Scheduler Timer Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_psm_int_timer_ena_w1c
{
    uint64_t u;
    struct cavm_psm_int_timer_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t sof                   : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for PSM_INT_TIMER_SUM_W1C[SOF]. */
        uint64_t sosf                  : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for PSM_INT_TIMER_SUM_W1C[SOSF]. */
        uint64_t reserved_5_7          : 3;
        uint64_t rfp_detect            : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for PSM_INT_TIMER_SUM_W1C[RFP_DETECT]. */
        uint64_t rfp_missing           : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for PSM_INT_TIMER_SUM_W1C[RFP_MISSING]. */
        uint64_t bfnerr                : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for PSM_INT_TIMER_SUM_W1C[BFNERR]. */
        uint64_t rfp_late              : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for PSM_INT_TIMER_SUM_W1C[RFP_LATE]. */
        uint64_t rfp_early             : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for PSM_INT_TIMER_SUM_W1C[RFP_EARLY]. */
#else /* Word 0 - Little Endian */
        uint64_t rfp_early             : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for PSM_INT_TIMER_SUM_W1C[RFP_EARLY]. */
        uint64_t rfp_late              : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for PSM_INT_TIMER_SUM_W1C[RFP_LATE]. */
        uint64_t bfnerr                : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for PSM_INT_TIMER_SUM_W1C[BFNERR]. */
        uint64_t rfp_missing           : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for PSM_INT_TIMER_SUM_W1C[RFP_MISSING]. */
        uint64_t rfp_detect            : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for PSM_INT_TIMER_SUM_W1C[RFP_DETECT]. */
        uint64_t reserved_5_7          : 3;
        uint64_t sosf                  : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for PSM_INT_TIMER_SUM_W1C[SOSF]. */
        uint64_t sof                   : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for PSM_INT_TIMER_SUM_W1C[SOF]. */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_timer_ena_w1c_s cn; */
};
typedef union cavm_psm_int_timer_ena_w1c cavm_psm_int_timer_ena_w1c_t;

#define CAVM_PSM_INT_TIMER_ENA_W1C CAVM_PSM_INT_TIMER_ENA_W1C_FUNC()
static inline uint64_t CAVM_PSM_INT_TIMER_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_TIMER_ENA_W1C_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x8600010e0f80ll;
    __cavm_csr_fatal("PSM_INT_TIMER_ENA_W1C", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_TIMER_ENA_W1C cavm_psm_int_timer_ena_w1c_t
#define bustype_CAVM_PSM_INT_TIMER_ENA_W1C CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_TIMER_ENA_W1C "PSM_INT_TIMER_ENA_W1C"
#define device_bar_CAVM_PSM_INT_TIMER_ENA_W1C 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_TIMER_ENA_W1C 0
#define arguments_CAVM_PSM_INT_TIMER_ENA_W1C -1,-1,-1,-1

/**
 * Register (NCB) psm_int_timer_ena_w1s
 *
 * PHY Scheduler Timer Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_psm_int_timer_ena_w1s
{
    uint64_t u;
    struct cavm_psm_int_timer_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t sof                   : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for PSM_INT_TIMER_SUM_W1C[SOF]. */
        uint64_t sosf                  : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for PSM_INT_TIMER_SUM_W1C[SOSF]. */
        uint64_t reserved_5_7          : 3;
        uint64_t rfp_detect            : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for PSM_INT_TIMER_SUM_W1C[RFP_DETECT]. */
        uint64_t rfp_missing           : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for PSM_INT_TIMER_SUM_W1C[RFP_MISSING]. */
        uint64_t bfnerr                : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for PSM_INT_TIMER_SUM_W1C[BFNERR]. */
        uint64_t rfp_late              : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for PSM_INT_TIMER_SUM_W1C[RFP_LATE]. */
        uint64_t rfp_early             : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for PSM_INT_TIMER_SUM_W1C[RFP_EARLY]. */
#else /* Word 0 - Little Endian */
        uint64_t rfp_early             : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for PSM_INT_TIMER_SUM_W1C[RFP_EARLY]. */
        uint64_t rfp_late              : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for PSM_INT_TIMER_SUM_W1C[RFP_LATE]. */
        uint64_t bfnerr                : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for PSM_INT_TIMER_SUM_W1C[BFNERR]. */
        uint64_t rfp_missing           : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for PSM_INT_TIMER_SUM_W1C[RFP_MISSING]. */
        uint64_t rfp_detect            : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for PSM_INT_TIMER_SUM_W1C[RFP_DETECT]. */
        uint64_t reserved_5_7          : 3;
        uint64_t sosf                  : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for PSM_INT_TIMER_SUM_W1C[SOSF]. */
        uint64_t sof                   : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for PSM_INT_TIMER_SUM_W1C[SOF]. */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_timer_ena_w1s_s cn; */
};
typedef union cavm_psm_int_timer_ena_w1s cavm_psm_int_timer_ena_w1s_t;

#define CAVM_PSM_INT_TIMER_ENA_W1S CAVM_PSM_INT_TIMER_ENA_W1S_FUNC()
static inline uint64_t CAVM_PSM_INT_TIMER_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_TIMER_ENA_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x8600010e0fc0ll;
    __cavm_csr_fatal("PSM_INT_TIMER_ENA_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_TIMER_ENA_W1S cavm_psm_int_timer_ena_w1s_t
#define bustype_CAVM_PSM_INT_TIMER_ENA_W1S CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_TIMER_ENA_W1S "PSM_INT_TIMER_ENA_W1S"
#define device_bar_CAVM_PSM_INT_TIMER_ENA_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_TIMER_ENA_W1S 0
#define arguments_CAVM_PSM_INT_TIMER_ENA_W1S -1,-1,-1,-1

/**
 * Register (NCB) psm_int_timer_sum_w1c
 *
 * PHY Scheduler Timer Interrupt Register
 * This register reports the status of the timer error interrupt.
 * Writing a 1 will clear the selected interrupt.  Writes of 0 are ignored.
 */
union cavm_psm_int_timer_sum_w1c
{
    uint64_t u;
    struct cavm_psm_int_timer_sum_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t sof                   : 1;  /**< [  9:  9](R/W1C/H) A start-of-frame was detected. */
        uint64_t sosf                  : 1;  /**< [  8:  8](R/W1C/H) A start-of-subframe was detected. */
        uint64_t reserved_5_7          : 3;
        uint64_t rfp_detect            : 1;  /**< [  4:  4](R/W1C/H) Reserved. */
        uint64_t rfp_missing           : 1;  /**< [  3:  3](R/W1C/H) Reserved. */
        uint64_t bfnerr                : 1;  /**< [  2:  2](R/W1C/H) The timer received a bad BFN number. */
        uint64_t rfp_late              : 1;  /**< [  1:  1](R/W1C/H) The timer received a late RFP. */
        uint64_t rfp_early             : 1;  /**< [  0:  0](R/W1C/H) The timer received an early RFP. */
#else /* Word 0 - Little Endian */
        uint64_t rfp_early             : 1;  /**< [  0:  0](R/W1C/H) The timer received an early RFP. */
        uint64_t rfp_late              : 1;  /**< [  1:  1](R/W1C/H) The timer received a late RFP. */
        uint64_t bfnerr                : 1;  /**< [  2:  2](R/W1C/H) The timer received a bad BFN number. */
        uint64_t rfp_missing           : 1;  /**< [  3:  3](R/W1C/H) Reserved. */
        uint64_t rfp_detect            : 1;  /**< [  4:  4](R/W1C/H) Reserved. */
        uint64_t reserved_5_7          : 3;
        uint64_t sosf                  : 1;  /**< [  8:  8](R/W1C/H) A start-of-subframe was detected. */
        uint64_t sof                   : 1;  /**< [  9:  9](R/W1C/H) A start-of-frame was detected. */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_timer_sum_w1c_s cn; */
};
typedef union cavm_psm_int_timer_sum_w1c cavm_psm_int_timer_sum_w1c_t;

#define CAVM_PSM_INT_TIMER_SUM_W1C CAVM_PSM_INT_TIMER_SUM_W1C_FUNC()
static inline uint64_t CAVM_PSM_INT_TIMER_SUM_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_TIMER_SUM_W1C_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x8600010e0f00ll;
    __cavm_csr_fatal("PSM_INT_TIMER_SUM_W1C", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_TIMER_SUM_W1C cavm_psm_int_timer_sum_w1c_t
#define bustype_CAVM_PSM_INT_TIMER_SUM_W1C CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_TIMER_SUM_W1C "PSM_INT_TIMER_SUM_W1C"
#define device_bar_CAVM_PSM_INT_TIMER_SUM_W1C 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_TIMER_SUM_W1C 0
#define arguments_CAVM_PSM_INT_TIMER_SUM_W1C -1,-1,-1,-1

/**
 * Register (NCB) psm_int_timer_sum_w1s
 *
 * PHY Scheduler Timer Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_psm_int_timer_sum_w1s
{
    uint64_t u;
    struct cavm_psm_int_timer_sum_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t sof                   : 1;  /**< [  9:  9](R/W1S/H) Reads or sets PSM_INT_TIMER_SUM_W1C[SOF]. */
        uint64_t sosf                  : 1;  /**< [  8:  8](R/W1S/H) Reads or sets PSM_INT_TIMER_SUM_W1C[SOSF]. */
        uint64_t reserved_5_7          : 3;
        uint64_t rfp_detect            : 1;  /**< [  4:  4](R/W1S/H) Reads or sets PSM_INT_TIMER_SUM_W1C[RFP_DETECT]. */
        uint64_t rfp_missing           : 1;  /**< [  3:  3](R/W1S/H) Reads or sets PSM_INT_TIMER_SUM_W1C[RFP_MISSING]. */
        uint64_t bfnerr                : 1;  /**< [  2:  2](R/W1S/H) Reads or sets PSM_INT_TIMER_SUM_W1C[BFNERR]. */
        uint64_t rfp_late              : 1;  /**< [  1:  1](R/W1S/H) Reads or sets PSM_INT_TIMER_SUM_W1C[RFP_LATE]. */
        uint64_t rfp_early             : 1;  /**< [  0:  0](R/W1S/H) Reads or sets PSM_INT_TIMER_SUM_W1C[RFP_EARLY]. */
#else /* Word 0 - Little Endian */
        uint64_t rfp_early             : 1;  /**< [  0:  0](R/W1S/H) Reads or sets PSM_INT_TIMER_SUM_W1C[RFP_EARLY]. */
        uint64_t rfp_late              : 1;  /**< [  1:  1](R/W1S/H) Reads or sets PSM_INT_TIMER_SUM_W1C[RFP_LATE]. */
        uint64_t bfnerr                : 1;  /**< [  2:  2](R/W1S/H) Reads or sets PSM_INT_TIMER_SUM_W1C[BFNERR]. */
        uint64_t rfp_missing           : 1;  /**< [  3:  3](R/W1S/H) Reads or sets PSM_INT_TIMER_SUM_W1C[RFP_MISSING]. */
        uint64_t rfp_detect            : 1;  /**< [  4:  4](R/W1S/H) Reads or sets PSM_INT_TIMER_SUM_W1C[RFP_DETECT]. */
        uint64_t reserved_5_7          : 3;
        uint64_t sosf                  : 1;  /**< [  8:  8](R/W1S/H) Reads or sets PSM_INT_TIMER_SUM_W1C[SOSF]. */
        uint64_t sof                   : 1;  /**< [  9:  9](R/W1S/H) Reads or sets PSM_INT_TIMER_SUM_W1C[SOF]. */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_int_timer_sum_w1s_s cn; */
};
typedef union cavm_psm_int_timer_sum_w1s cavm_psm_int_timer_sum_w1s_t;

#define CAVM_PSM_INT_TIMER_SUM_W1S CAVM_PSM_INT_TIMER_SUM_W1S_FUNC()
static inline uint64_t CAVM_PSM_INT_TIMER_SUM_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_INT_TIMER_SUM_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x8600010e0f40ll;
    __cavm_csr_fatal("PSM_INT_TIMER_SUM_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_INT_TIMER_SUM_W1S cavm_psm_int_timer_sum_w1s_t
#define bustype_CAVM_PSM_INT_TIMER_SUM_W1S CSR_TYPE_NCB
#define basename_CAVM_PSM_INT_TIMER_SUM_W1S "PSM_INT_TIMER_SUM_W1S"
#define device_bar_CAVM_PSM_INT_TIMER_SUM_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_INT_TIMER_SUM_W1S 0
#define arguments_CAVM_PSM_INT_TIMER_SUM_W1S -1,-1,-1,-1

/**
 * Register (NCB) psm_msix_pba#
 *
 * PSM MSI-X Pending Bit Array Register
 * This register is the MSI-X PBA table; the bit number is indexed by the
 * PSM_INT_VEC_E enumeration.
 */
union cavm_psm_msix_pbax
{
    uint64_t u;
    struct cavm_psm_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated PSM_MSIX_VEC()_CTL, enumerated PSM_INT_VEC_E.
                                                                 Bits that have no associated PSM_INT_VEC_E are 0. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated PSM_MSIX_VEC()_CTL, enumerated PSM_INT_VEC_E.
                                                                 Bits that have no associated PSM_INT_VEC_E are 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_msix_pbax_s cn; */
};
typedef union cavm_psm_msix_pbax cavm_psm_msix_pbax_t;

static inline uint64_t CAVM_PSM_MSIX_PBAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_MSIX_PBAX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==0))
        return 0x8600000f0000ll + 8ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a==0))
        return 0x8600000f0000ll + 8ll * ((a) & 0x0);
    __cavm_csr_fatal("PSM_MSIX_PBAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_MSIX_PBAX(a) cavm_psm_msix_pbax_t
#define bustype_CAVM_PSM_MSIX_PBAX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_MSIX_PBAX(a) "PSM_MSIX_PBAX"
#define device_bar_CAVM_PSM_MSIX_PBAX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_MSIX_PBAX(a) (a)
#define arguments_CAVM_PSM_MSIX_PBAX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_msix_vec#_addr
 *
 * PSM MSI-X Vector-Table Address Register
 * This register is the MSI-X vector table, indexed by the PSM_INT_VEC_E enumeration.
 */
union cavm_psm_msix_vecx_addr
{
    uint64_t u;
    struct cavm_psm_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's PSM_MSIX_VEC()_ADDR, PSM_MSIX_VEC()_CTL, and corresponding
                                                                 bit of PSM_MSIX_PBA() are RAZ/WI and do not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_BPHY_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's PSM_MSIX_VEC()_ADDR, PSM_MSIX_VEC()_CTL, and corresponding
                                                                 bit of PSM_MSIX_PBA() are RAZ/WI and do not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_BPHY_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_msix_vecx_addr_s cn; */
};
typedef union cavm_psm_msix_vecx_addr cavm_psm_msix_vecx_addr_t;

static inline uint64_t CAVM_PSM_MSIX_VECX_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_MSIX_VECX_ADDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=41))
        return 0x860000000000ll + 0x10ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=41))
        return 0x860000000000ll + 0x10ll * ((a) & 0x3f);
    __cavm_csr_fatal("PSM_MSIX_VECX_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_MSIX_VECX_ADDR(a) cavm_psm_msix_vecx_addr_t
#define bustype_CAVM_PSM_MSIX_VECX_ADDR(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_MSIX_VECX_ADDR(a) "PSM_MSIX_VECX_ADDR"
#define device_bar_CAVM_PSM_MSIX_VECX_ADDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_MSIX_VECX_ADDR(a) (a)
#define arguments_CAVM_PSM_MSIX_VECX_ADDR(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_msix_vec#_ctl
 *
 * PSM MSI-X Vector-Table Control and Data Register
 * This register is the MSI-X vector table, indexed by the PSM_INT_VEC_E enumeration.
 */
union cavm_psm_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_psm_msix_vecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts are sent to this vector. */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts are sent to this vector. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_msix_vecx_ctl_s cn; */
};
typedef union cavm_psm_msix_vecx_ctl cavm_psm_msix_vecx_ctl_t;

static inline uint64_t CAVM_PSM_MSIX_VECX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_MSIX_VECX_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=41))
        return 0x860000000008ll + 0x10ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=41))
        return 0x860000000008ll + 0x10ll * ((a) & 0x3f);
    __cavm_csr_fatal("PSM_MSIX_VECX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_MSIX_VECX_CTL(a) cavm_psm_msix_vecx_ctl_t
#define bustype_CAVM_PSM_MSIX_VECX_CTL(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_MSIX_VECX_CTL(a) "PSM_MSIX_VECX_CTL"
#define device_bar_CAVM_PSM_MSIX_VECX_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PSM_MSIX_VECX_CTL(a) (a)
#define arguments_CAVM_PSM_MSIX_VECX_CTL(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_BPHY_H__ */
