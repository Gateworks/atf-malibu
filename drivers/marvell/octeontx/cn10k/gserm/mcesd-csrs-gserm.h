/***********************license start***********************************
 * Copyright (c) 2021 Marvell.
 * SPDX-License-Identifier: BSD-3-Clause
 * https://spdx.org/licenses
 ***********************license end**************************************/


#ifndef __MCESD_CSRS_GSERM_H__
#define __MCESD_CSRS_GSERM_H__
/* This file is auto-generated. Do not edit */

/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * OcteonTX GSERM.
 *
 * This file is auto generated. Do not edit.
 *
 */
#define GSERM_PIN_BAR 0x87e0a0000000
#define GSERM_REG_BAR 0x87e0a0000000
#define GSERM_PIN_OFFSET 0x1000000
#define GSERM_REG_OFFSET 0x1000000

#define ENUM_N5XC56GP5X4_PIN_BURN_IN_TEST N5XC56GP5X4_PIN_BURN_IN_TEST
#define REG_ADDR_N5XC56GP5X4_PIN_BURN_IN_TEST 0x14658
#define REG_BYTES_N5XC56GP5X4_PIN_BURN_IN_TEST 4
#define FIELD_BITS_N5XC56GP5X4_PIN_BURN_IN_TEST 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_BURN_IN_TEST 12
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_BURN_IN_TEST 19
#endif

#define ENUM_N5XC56GP5X4_PIN_FW_READY N5XC56GP5X4_PIN_FW_READY
#define REG_ADDR_N5XC56GP5X4_PIN_FW_READY 0x800a0
#define REG_BYTES_N5XC56GP5X4_PIN_FW_READY 8
#define FIELD_BITS_N5XC56GP5X4_PIN_FW_READY 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_FW_READY 56
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_FW_READY 7
#endif

#define ENUM_N5XC56GP5X4_PIN_DIRECT_ACCESS_EN N5XC56GP5X4_PIN_DIRECT_ACCESS_EN
#define REG_ADDR_N5XC56GP5X4_PIN_DIRECT_ACCESS_EN 0x800a0
#define REG_BYTES_N5XC56GP5X4_PIN_DIRECT_ACCESS_EN 8
#define FIELD_BITS_N5XC56GP5X4_PIN_DIRECT_ACCESS_EN 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_DIRECT_ACCESS_EN 55
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_DIRECT_ACCESS_EN 8
#endif

#define ENUM_N5XC56GP5X4_PIN_REFCLK_SEL(b) N5XC56GP5X4_PIN_REFCLK_SEL##b
#define REG_ADDR_N5XC56GP5X4_PIN_REFCLK_SEL(b) 0x800a0
#define REG_BYTES_N5XC56GP5X4_PIN_REFCLK_SEL(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_REFCLK_SEL(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_REFCLK_SEL(b) 49-b
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_REFCLK_SEL(b) 14+b
#endif

#define ENUM_N5XC56GP5X4_PIN_RESET N5XC56GP5X4_PIN_RESET
#define REG_ADDR_N5XC56GP5X4_PIN_RESET 0x800a0
#define REG_BYTES_N5XC56GP5X4_PIN_RESET 8
#define FIELD_BITS_N5XC56GP5X4_PIN_RESET 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RESET 63
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RESET 0
#endif

#define ENUM_N5XC56GP5X4_PIN_PU_IVREF N5XC56GP5X4_PIN_PU_IVREF
#define REG_ADDR_N5XC56GP5X4_PIN_PU_IVREF 0x800a0
#define REG_BYTES_N5XC56GP5X4_PIN_PU_IVREF 8
#define FIELD_BITS_N5XC56GP5X4_PIN_PU_IVREF 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_PU_IVREF 57
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_PU_IVREF 6
#endif

#define ENUM_N5XC56GP5X4_PIN_SPD_CFG N5XC56GP5X4_PIN_SPD_CFG
#define REG_ADDR_N5XC56GP5X4_PIN_SPD_CFG 0x800a0
#define REG_BYTES_N5XC56GP5X4_PIN_SPD_CFG 8
#define FIELD_BITS_N5XC56GP5X4_PIN_SPD_CFG 4
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_SPD_CFG 53
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_SPD_CFG 10
#endif

#define ENUM_N5XC56GP5X4_PIN_DIG_TEST_BUS N5XC56GP5X4_PIN_DIG_TEST_BUS
#define REG_ADDR_N5XC56GP5X4_PIN_DIG_TEST_BUS 0x81020
#define REG_BYTES_N5XC56GP5X4_PIN_DIG_TEST_BUS 8
#define FIELD_BITS_N5XC56GP5X4_PIN_DIG_TEST_BUS 16
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_DIG_TEST_BUS 61
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_DIG_TEST_BUS 2
#endif

#define ENUM_N5XC56GP5X4_PIN_MEM_ECC_ERR_CMN N5XC56GP5X4_PIN_MEM_ECC_ERR_CMN
#define REG_ADDR_N5XC56GP5X4_PIN_MEM_ECC_ERR_CMN 0x81020
#define REG_BYTES_N5XC56GP5X4_PIN_MEM_ECC_ERR_CMN 8
#define FIELD_BITS_N5XC56GP5X4_PIN_MEM_ECC_ERR_CMN 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_MEM_ECC_ERR_CMN 63
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_MEM_ECC_ERR_CMN 0
#endif

#define ENUM_N5XC56GP5X4_PIN_IDDQ N5XC56GP5X4_PIN_IDDQ
#define REG_ADDR_N5XC56GP5X4_PIN_IDDQ 0x14650
#define REG_BYTES_N5XC56GP5X4_PIN_IDDQ 4
#define FIELD_BITS_N5XC56GP5X4_PIN_IDDQ 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_IDDQ 22
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_IDDQ 9
#endif

#define ENUM_N5XC56GP5X4_PIN_BG_RDY N5XC56GP5X4_PIN_BG_RDY
#define REG_ADDR_N5XC56GP5X4_PIN_BG_RDY 0x14838
#define REG_BYTES_N5XC56GP5X4_PIN_BG_RDY 4
#define FIELD_BITS_N5XC56GP5X4_PIN_BG_RDY 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_BG_RDY 7
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_BG_RDY 24
#endif

#define ENUM_N5XC56GP5X4_PIN_PHY_INT_OUT N5XC56GP5X4_PIN_PHY_INT_OUT
#define REG_ADDR_N5XC56GP5X4_PIN_PHY_INT_OUT 0x82000
#define REG_BYTES_N5XC56GP5X4_PIN_PHY_INT_OUT 8
#define FIELD_BITS_N5XC56GP5X4_PIN_PHY_INT_OUT 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_PHY_INT_OUT 58
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_PHY_INT_OUT 5
#endif

#define ENUM_N5XC56GP5X4_PIN_MCU_WDT_CMN N5XC56GP5X4_PIN_MCU_WDT_CMN
#define REG_ADDR_N5XC56GP5X4_PIN_MCU_WDT_CMN 0x82000
#define REG_BYTES_N5XC56GP5X4_PIN_MCU_WDT_CMN 8
#define FIELD_BITS_N5XC56GP5X4_PIN_MCU_WDT_CMN 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_MCU_WDT_CMN 59
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_MCU_WDT_CMN 4
#endif

#define ENUM_N5XC56GP5X4_PIN_MCU_WDT(b) N5XC56GP5X4_PIN_MCU_WDT##b
#define REG_ADDR_N5XC56GP5X4_PIN_MCU_WDT(b) 0x82000
#define REG_BYTES_N5XC56GP5X4_PIN_MCU_WDT(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_MCU_WDT(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_MCU_WDT(b) 63-b
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_MCU_WDT(b) 0+b
#endif

#define ENUM_N5XC56GP5X4_PIN_RESET_CORE_RX(b) N5XC56GP5X4_PIN_RESET_CORE_RX##b
#define REG_ADDR_N5XC56GP5X4_PIN_RESET_CORE_RX(b) 0x81030 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_RESET_CORE_RX(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_RESET_CORE_RX(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RESET_CORE_RX(b) 29
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RESET_CORE_RX(b) 34
#endif

#define ENUM_N5XC56GP5X4_PIN_RESET_CORE_TX(b) N5XC56GP5X4_PIN_RESET_CORE_TX##b
#define REG_ADDR_N5XC56GP5X4_PIN_RESET_CORE_TX(b) 0x81030 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_RESET_CORE_TX(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_RESET_CORE_TX(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RESET_CORE_TX(b) 28
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RESET_CORE_TX(b) 35
#endif

#define ENUM_N5XC56GP5X4_PIN_PU_TX(b) N5XC56GP5X4_PIN_PU_TX##b
#define REG_ADDR_N5XC56GP5X4_PIN_PU_TX(b) 0x81030 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_PU_TX(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_PU_TX(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_PU_TX(b) 60
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_PU_TX(b) 3
#endif

#define ENUM_N5XC56GP5X4_PIN_COUPLE_MODE_EN(b) N5XC56GP5X4_PIN_COUPLE_MODE_EN##b
#define REG_ADDR_N5XC56GP5X4_PIN_COUPLE_MODE_EN(b) 0x81030 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_COUPLE_MODE_EN(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_COUPLE_MODE_EN(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_COUPLE_MODE_EN(b) 0
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_COUPLE_MODE_EN(b) 63
#endif

#define ENUM_N5XC56GP5X4_PIN_PU_RX(b) N5XC56GP5X4_PIN_PU_RX##b
#define REG_ADDR_N5XC56GP5X4_PIN_PU_RX(b) 0x81030 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_PU_RX(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_PU_RX(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_PU_RX(b) 61
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_PU_RX(b) 2
#endif

#define ENUM_N5XC56GP5X4_PIN_REF_FREF_SEL(b) N5XC56GP5X4_PIN_REF_FREF_SEL##b
#define REG_ADDR_N5XC56GP5X4_PIN_REF_FREF_SEL(b) 0x81030 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_REF_FREF_SEL(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_REF_FREF_SEL(b) 5
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_REF_FREF_SEL(b) 5
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_REF_FREF_SEL(b) 58
#endif

#define ENUM_N5XC56GP5X4_PIN_TXDCLK_4X_EN(b) N5XC56GP5X4_PIN_TXDCLK_4X_EN##b
#define REG_ADDR_N5XC56GP5X4_PIN_TXDCLK_4X_EN(b) 0x81030 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_TXDCLK_4X_EN(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_TXDCLK_4X_EN(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_TXDCLK_4X_EN(b) 25
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_TXDCLK_4X_EN(b) 38
#endif

#define ENUM_N5XC56GP5X4_PIN_TXDATA_PRE_CODE_EN(b) N5XC56GP5X4_PIN_TXDATA_PRE_CODE_EN##b
#define REG_ADDR_N5XC56GP5X4_PIN_TXDATA_PRE_CODE_EN(b) 0x81030 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_TXDATA_PRE_CODE_EN(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_TXDATA_PRE_CODE_EN(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_TXDATA_PRE_CODE_EN(b) 33
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_TXDATA_PRE_CODE_EN(b) 30
#endif

#define ENUM_N5XC56GP5X4_PIN_RXDATA_PRE_CODE_EN(b) N5XC56GP5X4_PIN_RXDATA_PRE_CODE_EN##b
#define REG_ADDR_N5XC56GP5X4_PIN_RXDATA_PRE_CODE_EN(b) 0x81030 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_RXDATA_PRE_CODE_EN(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_RXDATA_PRE_CODE_EN(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RXDATA_PRE_CODE_EN(b) 34
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RXDATA_PRE_CODE_EN(b) 29
#endif

#define ENUM_N5XC56GP5X4_PIN_RXDATA_GRAY_CODE_EN(b) N5XC56GP5X4_PIN_RXDATA_GRAY_CODE_EN##b
#define REG_ADDR_N5XC56GP5X4_PIN_RXDATA_GRAY_CODE_EN(b) 0x81030 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_RXDATA_GRAY_CODE_EN(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_RXDATA_GRAY_CODE_EN(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RXDATA_GRAY_CODE_EN(b) 32
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RXDATA_GRAY_CODE_EN(b) 31
#endif

#define ENUM_N5XC56GP5X4_PIN_RXDCLK_2X_SEL(b) N5XC56GP5X4_PIN_RXDCLK_2X_SEL##b
#define REG_ADDR_N5XC56GP5X4_PIN_RXDCLK_2X_SEL(b) 0x81030 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_RXDCLK_2X_SEL(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_RXDCLK_2X_SEL(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RXDCLK_2X_SEL(b) 24
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RXDCLK_2X_SEL(b) 39
#endif

#define ENUM_N5XC56GP5X4_PIN_TXDATA_GRAY_CODE_EN(b) N5XC56GP5X4_PIN_TXDATA_GRAY_CODE_EN##b
#define REG_ADDR_N5XC56GP5X4_PIN_TXDATA_GRAY_CODE_EN(b) 0x81030 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_TXDATA_GRAY_CODE_EN(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_TXDATA_GRAY_CODE_EN(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_TXDATA_GRAY_CODE_EN(b) 31
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_TXDATA_GRAY_CODE_EN(b) 32
#endif

#define ENUM_N5XC56GP5X4_PIN_PU_PLL(b) N5XC56GP5X4_PIN_PU_PLL##b
#define REG_ADDR_N5XC56GP5X4_PIN_PU_PLL(b) 0x81030 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_PU_PLL(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_PU_PLL(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_PU_PLL(b) 62
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_PU_PLL(b) 1
#endif

#define ENUM_N5XC56GP5X4_PIN_PHY_GEN_TX(b) N5XC56GP5X4_PIN_PHY_GEN_TX##b
#define REG_ADDR_N5XC56GP5X4_PIN_PHY_GEN_TX(b) 0x81030 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_PHY_GEN_TX(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_PHY_GEN_TX(b) 6
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_PHY_GEN_TX(b) 52
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_PHY_GEN_TX(b) 11
#endif

#define ENUM_N5XC56GP5X4_PIN_PHY_GEN_RX(b) N5XC56GP5X4_PIN_PHY_GEN_RX##b
#define REG_ADDR_N5XC56GP5X4_PIN_PHY_GEN_RX(b) 0x81030 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_PHY_GEN_RX(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_PHY_GEN_RX(b) 6
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_PHY_GEN_RX(b) 58
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_PHY_GEN_RX(b) 5
#endif

#define ENUM_N5XC56GP5X4_PIN_RX_INIT(b) N5XC56GP5X4_PIN_RX_INIT##b
#define REG_ADDR_N5XC56GP5X4_PIN_RX_INIT(b) 0x81030 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_RX_INIT(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_RX_INIT(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RX_INIT(b) 19
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RX_INIT(b) 44
#endif

#define ENUM_N5XC56GP5X4_PIN_RXDCLK_4X_EN(b) N5XC56GP5X4_PIN_RXDCLK_4X_EN##b
#define REG_ADDR_N5XC56GP5X4_PIN_RXDCLK_4X_EN(b) 0x81030 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_RXDCLK_4X_EN(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_RXDCLK_4X_EN(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RXDCLK_4X_EN(b) 26
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RXDCLK_4X_EN(b) 37
#endif

#define ENUM_N5XC56GP5X4_PIN_TXDCLK_2X_SEL(b) N5XC56GP5X4_PIN_TXDCLK_2X_SEL##b
#define REG_ADDR_N5XC56GP5X4_PIN_TXDCLK_2X_SEL(b) 0x81030 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_TXDCLK_2X_SEL(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_TXDCLK_2X_SEL(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_TXDCLK_2X_SEL(b) 23
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_TXDCLK_2X_SEL(b) 40
#endif

#define ENUM_N5XC56GP5X4_PIN_TX_IDLE(b) N5XC56GP5X4_PIN_TX_IDLE##b
#define REG_ADDR_N5XC56GP5X4_PIN_TX_IDLE(b) 0x81030 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_TX_IDLE(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_TX_IDLE(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_TX_IDLE(b) 59
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_TX_IDLE(b) 4
#endif

#define ENUM_N5XC56GP5X4_PIN_MCU_REMOTE_STATUS(b) N5XC56GP5X4_PIN_MCU_REMOTE_STATUS##b
#define REG_ADDR_N5XC56GP5X4_PIN_MCU_REMOTE_STATUS(b) 0x81240 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_MCU_REMOTE_STATUS(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_MCU_REMOTE_STATUS(b) 32
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_MCU_REMOTE_STATUS(b) 63
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_MCU_REMOTE_STATUS(b) 0
#endif

#define ENUM_N5XC56GP5X4_PIN_RESET_CORE_ACK_TX(b) N5XC56GP5X4_PIN_RESET_CORE_ACK_TX##b
#define REG_ADDR_N5XC56GP5X4_PIN_RESET_CORE_ACK_TX(b) 0x81070 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_RESET_CORE_ACK_TX(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_RESET_CORE_ACK_TX(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RESET_CORE_ACK_TX(b) 57
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RESET_CORE_ACK_TX(b) 6
#endif

#define ENUM_N5XC56GP5X4_PIN_RX_INIT_DONE(b) N5XC56GP5X4_PIN_RX_INIT_DONE##b
#define REG_ADDR_N5XC56GP5X4_PIN_RX_INIT_DONE(b) 0x81070 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_RX_INIT_DONE(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_RX_INIT_DONE(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RX_INIT_DONE(b) 60
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RX_INIT_DONE(b) 3
#endif

#define ENUM_N5XC56GP5X4_PIN_PLL_READY_RX(b) N5XC56GP5X4_PIN_PLL_READY_RX##b
#define REG_ADDR_N5XC56GP5X4_PIN_PLL_READY_RX(b) 0x81070 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_PLL_READY_RX(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_PLL_READY_RX(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_PLL_READY_RX(b) 63
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_PLL_READY_RX(b) 0
#endif

#define ENUM_N5XC56GP5X4_PIN_RESET_CORE_ACK_RX(b) N5XC56GP5X4_PIN_RESET_CORE_ACK_RX##b
#define REG_ADDR_N5XC56GP5X4_PIN_RESET_CORE_ACK_RX(b) 0x81070 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_RESET_CORE_ACK_RX(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_RESET_CORE_ACK_RX(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RESET_CORE_ACK_RX(b) 58
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RESET_CORE_ACK_RX(b) 5
#endif

#define ENUM_N5XC56GP5X4_PIN_MEM_ECC_ERR(b) N5XC56GP5X4_PIN_MEM_ECC_ERR##b
#define REG_ADDR_N5XC56GP5X4_PIN_MEM_ECC_ERR(b) 0x81070 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_MEM_ECC_ERR(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_MEM_ECC_ERR(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_MEM_ECC_ERR(b) 59
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_MEM_ECC_ERR(b) 4
#endif

#define ENUM_N5XC56GP5X4_PIN_PLL_READY_TX(b) N5XC56GP5X4_PIN_PLL_READY_TX##b
#define REG_ADDR_N5XC56GP5X4_PIN_PLL_READY_TX(b) 0x81070 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_PLL_READY_TX(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_PLL_READY_TX(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_PLL_READY_TX(b) 62
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_PLL_READY_TX(b) 1
#endif

#define ENUM_N5XC56GP5X4_PIN_SQ_DETECTED_LPF(b) N5XC56GP5X4_PIN_SQ_DETECTED_LPF##b
#define REG_ADDR_N5XC56GP5X4_PIN_SQ_DETECTED_LPF(b) 0x81070 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_SQ_DETECTED_LPF(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_SQ_DETECTED_LPF(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_SQ_DETECTED_LPF(b) 56
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_SQ_DETECTED_LPF(b) 7
#endif

#define ENUM_N5XC56GP5X4_PIN_MCU_REMOTE_COMMAND(b) N5XC56GP5X4_PIN_MCU_REMOTE_COMMAND##b
#define REG_ADDR_N5XC56GP5X4_PIN_MCU_REMOTE_COMMAND(b) 0x811d0 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_MCU_REMOTE_COMMAND(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_MCU_REMOTE_COMMAND(b) 32
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_MCU_REMOTE_COMMAND(b) 63
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_MCU_REMOTE_COMMAND(b) 0
#endif

#define ENUM_N5XC56GP5X4_PIN_AVDD_SEL N5XC56GP5X4_PIN_AVDD_SEL
#define REG_ADDR_N5XC56GP5X4_PIN_AVDD_SEL 0x810e0
#define REG_BYTES_N5XC56GP5X4_PIN_AVDD_SEL 8
#define FIELD_BITS_N5XC56GP5X4_PIN_AVDD_SEL 3
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_AVDD_SEL 51
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_AVDD_SEL 12
#endif

#define ENUM_N5XC56GP5X4_PIN_TXCLK_SYNC_START_OUT N5XC56GP5X4_PIN_TXCLK_SYNC_START_OUT
#define REG_ADDR_N5XC56GP5X4_PIN_TXCLK_SYNC_START_OUT 0x810e0
#define REG_BYTES_N5XC56GP5X4_PIN_TXCLK_SYNC_START_OUT 8
#define FIELD_BITS_N5XC56GP5X4_PIN_TXCLK_SYNC_START_OUT 4
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_TXCLK_SYNC_START_OUT 55
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_TXCLK_SYNC_START_OUT 8
#endif

#define ENUM_N5XC56GP5X4_PIN_TX_TRAIN_ENABLE(b) N5XC56GP5X4_PIN_TX_TRAIN_ENABLE##b
#define REG_ADDR_N5XC56GP5X4_PIN_TX_TRAIN_ENABLE(b) 0x810f0 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_TX_TRAIN_ENABLE(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_TX_TRAIN_ENABLE(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_TX_TRAIN_ENABLE(b) 63
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_TX_TRAIN_ENABLE(b) 0
#endif

#define ENUM_N5XC56GP5X4_PIN_RX_TRAIN_ENABLE(b) N5XC56GP5X4_PIN_RX_TRAIN_ENABLE##b
#define REG_ADDR_N5XC56GP5X4_PIN_RX_TRAIN_ENABLE(b) 0x810f0 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_RX_TRAIN_ENABLE(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_RX_TRAIN_ENABLE(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RX_TRAIN_ENABLE(b) 62
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RX_TRAIN_ENABLE(b) 1
#endif

#define ENUM_N5XC56GP5X4_PIN_MMCU_LOCAL_ACK(b) N5XC56GP5X4_PIN_MMCU_LOCAL_ACK##b
#define REG_ADDR_N5XC56GP5X4_PIN_MMCU_LOCAL_ACK(b) 0x81200 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_MMCU_LOCAL_ACK(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_MMCU_LOCAL_ACK(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_MMCU_LOCAL_ACK(b) 62
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_MMCU_LOCAL_ACK(b) 1
#endif

#define ENUM_N5XC56GP5X4_PIN_MCU_REMOTE_REQ(b) N5XC56GP5X4_PIN_MCU_REMOTE_REQ##b
#define REG_ADDR_N5XC56GP5X4_PIN_MCU_REMOTE_REQ(b) 0x81200 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_MCU_REMOTE_REQ(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_MCU_REMOTE_REQ(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_MCU_REMOTE_REQ(b) 63
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_MCU_REMOTE_REQ(b) 0
#endif

#define ENUM_N5XC56GP5X4_PIN_MCU_LOCAL_STATUS(b) N5XC56GP5X4_PIN_MCU_LOCAL_STATUS##b
#define REG_ADDR_N5XC56GP5X4_PIN_MCU_LOCAL_STATUS(b) 0x81220 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_MCU_LOCAL_STATUS(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_MCU_LOCAL_STATUS(b) 32
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_MCU_LOCAL_STATUS(b) 63
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_MCU_LOCAL_STATUS(b) 0
#endif

#define ENUM_N5XC56GP5X4_PIN_RESERVED_INPUT_RX(b) N5XC56GP5X4_PIN_RESERVED_INPUT_RX##b
#define REG_ADDR_N5XC56GP5X4_PIN_RESERVED_INPUT_RX(b) 0x81168 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_RESERVED_INPUT_RX(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_RESERVED_INPUT_RX(b) 16
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RESERVED_INPUT_RX(b) 63
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RESERVED_INPUT_RX(b) 0
#endif

#define ENUM_N5XC56GP5X4_PIN_PIN_RESERVED_INPUT_TX(b) N5XC56GP5X4_PIN_PIN_RESERVED_INPUT_TX##b
#define REG_ADDR_N5XC56GP5X4_PIN_PIN_RESERVED_INPUT_TX(b) 0x81148 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_PIN_RESERVED_INPUT_TX(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_PIN_RESERVED_INPUT_TX(b) 16
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_PIN_RESERVED_INPUT_TX(b) 63
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_PIN_RESERVED_INPUT_TX(b) 0
#endif

#define ENUM_N5XC56GP5X4_PIN_RESERVED_OUTPUT N5XC56GP5X4_PIN_RESERVED_OUTPUT
#define REG_ADDR_N5XC56GP5X4_PIN_RESERVED_OUTPUT 0x81140
#define REG_BYTES_N5XC56GP5X4_PIN_RESERVED_OUTPUT 8
#define FIELD_BITS_N5XC56GP5X4_PIN_RESERVED_OUTPUT 16
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RESERVED_OUTPUT 31
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RESERVED_OUTPUT 32
#endif

#define ENUM_N5XC56GP5X4_PIN_MCU_INIT_DONE N5XC56GP5X4_PIN_MCU_INIT_DONE
#define REG_ADDR_N5XC56GP5X4_PIN_MCU_INIT_DONE 0x81140
#define REG_BYTES_N5XC56GP5X4_PIN_MCU_INIT_DONE 8
#define FIELD_BITS_N5XC56GP5X4_PIN_MCU_INIT_DONE 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_MCU_INIT_DONE 63
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_MCU_INIT_DONE 0
#endif

#define ENUM_N5XC56GP5X4_PIN_RESERVED_INPUT N5XC56GP5X4_PIN_RESERVED_INPUT
#define REG_ADDR_N5XC56GP5X4_PIN_RESERVED_INPUT 0x81140
#define REG_BYTES_N5XC56GP5X4_PIN_RESERVED_INPUT 8
#define FIELD_BITS_N5XC56GP5X4_PIN_RESERVED_INPUT 16
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RESERVED_INPUT 15
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RESERVED_INPUT 48
#endif

#define ENUM_N5XC56GP5X4_PIN_RESERVED_OUTPUT_RX(b) N5XC56GP5X4_PIN_RESERVED_OUTPUT_RX##b
#define REG_ADDR_N5XC56GP5X4_PIN_RESERVED_OUTPUT_RX(b) 0x811b0 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_RESERVED_OUTPUT_RX(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_RESERVED_OUTPUT_RX(b) 16
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RESERVED_OUTPUT_RX(b) 63
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RESERVED_OUTPUT_RX(b) 0
#endif

#define ENUM_N5XC56GP5X4_PIN_RESERVED_OUTPUT_TX(b) N5XC56GP5X4_PIN_RESERVED_OUTPUT_TX##b
#define REG_ADDR_N5XC56GP5X4_PIN_RESERVED_OUTPUT_TX(b) 0x81190 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_RESERVED_OUTPUT_TX(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_RESERVED_OUTPUT_TX(b) 16
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RESERVED_OUTPUT_TX(b) 63
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RESERVED_OUTPUT_TX(b) 0
#endif

#define ENUM_N5XC56GP5X4_PIN_RX_TRAIN_FAILED(b) N5XC56GP5X4_PIN_RX_TRAIN_FAILED##b
#define REG_ADDR_N5XC56GP5X4_PIN_RX_TRAIN_FAILED(b) 0x81120 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_RX_TRAIN_FAILED(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_RX_TRAIN_FAILED(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RX_TRAIN_FAILED(b) 58
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RX_TRAIN_FAILED(b) 5
#endif

#define ENUM_N5XC56GP5X4_PIN_RX_TRAIN_COMPLETE(b) N5XC56GP5X4_PIN_RX_TRAIN_COMP##b
#define REG_ADDR_N5XC56GP5X4_PIN_RX_TRAIN_COMPLETE(b) 0x81120 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_RX_TRAIN_COMPLETE(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_RX_TRAIN_COMPLETE(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RX_TRAIN_COMPLETE(b) 57
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_RX_TRAIN_COMPLETE(b) 6
#endif

#define ENUM_N5XC56GP5X4_PIN_TX_TRAIN_COMPLETE(b) N5XC56GP5X4_PIN_TX_TRAIN_COMP##b
#define REG_ADDR_N5XC56GP5X4_PIN_TX_TRAIN_COMPLETE(b) 0x81120 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_TX_TRAIN_COMPLETE(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_TX_TRAIN_COMPLETE(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_TX_TRAIN_COMPLETE(b) 59
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_TX_TRAIN_COMPLETE(b) 4
#endif

#define ENUM_N5XC56GP5X4_PIN_TX_TRAIN_FRAME_LOCK_DETECTED(b) N5XC56GP5X4_PIN_TX_TRAIN_FRAME_LOCK_DETECTED##b
#define REG_ADDR_N5XC56GP5X4_PIN_TX_TRAIN_FRAME_LOCK_DETECTED(b) 0x81120 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_TX_TRAIN_FRAME_LOCK_DETECTED(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_TX_TRAIN_FRAME_LOCK_DETECTED(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_TX_TRAIN_FRAME_LOCK_DETECTED(b) 63
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_TX_TRAIN_FRAME_LOCK_DETECTED(b) 0
#endif

#define ENUM_N5XC56GP5X4_PIN_TX_TRAIN_ERROR(b) N5XC56GP5X4_PIN_TX_TRAIN_ERROR##b
#define REG_ADDR_N5XC56GP5X4_PIN_TX_TRAIN_ERROR(b) 0x81120 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_TX_TRAIN_ERROR(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_TX_TRAIN_ERROR(b) 2
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_TX_TRAIN_ERROR(b) 62
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_TX_TRAIN_ERROR(b) 1
#endif

#define ENUM_N5XC56GP5X4_PIN_TX_TRAIN_FAILED(b) N5XC56GP5X4_PIN_TX_TRAIN_FAILED##b
#define REG_ADDR_N5XC56GP5X4_PIN_TX_TRAIN_FAILED(b) 0x81120 + (0x8 * b)
#define REG_BYTES_N5XC56GP5X4_PIN_TX_TRAIN_FAILED(b) 8
#define FIELD_BITS_N5XC56GP5X4_PIN_TX_TRAIN_FAILED(b) 1
#if __BYTE_ORDER == __BIG_ENDIAN
#define FIELD_OFFSET_N5XC56GP5X4_PIN_TX_TRAIN_FAILED(b) 60
#else
#define FIELD_OFFSET_N5XC56GP5X4_PIN_TX_TRAIN_FAILED(b) 3
#endif

#endif /* __MCESD_CSRS_GSERM_H__ */
