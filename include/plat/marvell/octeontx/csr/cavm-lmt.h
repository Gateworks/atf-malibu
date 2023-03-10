/***********************license start***********************************
* Copyright (c) 2018 Marvell.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/

/**
 * @file
 *
 * Defiens and functions for performing LMT operations, such as
 * LMTST and LMTCANCEL
 *
 * @defgroup lmt Local Memory Transaction (LMT) support
 * @{
 */
#include "cavm-csrs-lmt.h"

/**
 * Address of the LMT store area in physical memory
 */
#define __CAVM_LMTLINE_CN83XX 0x87F100000000ull
#define __CAVM_LMTLINE_CN9XXX 0x840200100000ull // LMT_LF_LMTLINEX

/**
 * Flush the LMTLINE area of all previous writes and clear the valid flag
 */
static inline void cavm_lmt_cancel(void)
{
    if (cavm_is_model(OCTEONTX_CN83XX))
        *(volatile uint64_t *)(__CAVM_LMTLINE_CN83XX | (1 << 10)) = 0;
    else
        *(volatile uint64_t *)(__CAVM_LMTLINE_CN9XXX | (1 << 10)) = 0;
}

/**
 * Return a volatile pointer to the LMTLINE area in 64bit words. Good programming
 * practice would to always store sequentially, incrementing the pointer for each
 * word written.
 *
 * @return Voltaile uint64_t pointer to LMTLINE
 */
static inline volatile uint64_t *cavm_lmt_store_ptr(void)
{
    if (cavm_is_model(OCTEONTX_CN83XX))
        return (volatile uint64_t *)__CAVM_LMTLINE_CN83XX;
    else
        return (volatile uint64_t *)__CAVM_LMTLINE_CN9XXX;
}

/**
 * Send the data stored to LMTLINE to an IO block. This call may
 * fail if the hardware has invalidated the LMTLINE area. If it
 * fails, you must issue all LMT stores again and redo this
 * call. Note the return status of this function is backwards
 * to most CAVM functions. It matches the LMTST hardware result.
 *
 * @param io_address 48 bit IO address where the LMTLINE data will be sent
 *
 * @return Zero on failure, non-zero on success
 */
static inline int cavm_lmt_submit(uint64_t io_address)
{
    int64_t result = 0;
    asm volatile ("LDEOR xzr,%x[rf],[%[rs]]" : [rf] "=r"(result): [rs] "r"(io_address));
    return cavm_le64_to_cpu(result);
}

/** @} */
