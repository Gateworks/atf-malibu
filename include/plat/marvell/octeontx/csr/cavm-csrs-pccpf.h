#ifndef __CAVM_CSRS_PCCPF_H__
#define __CAVM_CSRS_PCCPF_H__
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
 * OcteonTX PCCPF.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration pcc_dev_con_e
 *
 * PCC Device Connection Enumeration
 * Enumerates where the device is connected in the topology. Software must rely on discovery and
 * not use this enumeration as the values will vary by product, and the mnemonics are a super-set
 * of the devices available. The value of the enumeration is formatted as defined by
 * PCC_DEV_CON_S.
 */
#define CAVM_PCC_DEV_CON_E_APX(a) (0x200 + (a))
#define CAVM_PCC_DEV_CON_E_AVS (0xf0)
#define CAVM_PCC_DEV_CON_E_BCH_CN8 (0x300)
#define CAVM_PCC_DEV_CON_E_BCH_CN9 (0x400)
#define CAVM_PCC_DEV_CON_E_BGXX(a) (0x180 + (a))
#define CAVM_PCC_DEV_CON_E_BPHY (0x600)
#define CAVM_PCC_DEV_CON_E_BTS (0x141)
#define CAVM_PCC_DEV_CON_E_CCS (0x109)
#define CAVM_PCC_DEV_CON_E_CCUX(a) (0x120 + (a))
#define CAVM_PCC_DEV_CON_E_CGXX(a) (0x180 + (a))
#define CAVM_PCC_DEV_CON_E_CPC (0xd0)
#define CAVM_PCC_DEV_CON_E_CPT0 (0x400)
#define CAVM_PCC_DEV_CON_E_CPT1 (0x500)
#define CAVM_PCC_DEV_CON_E_DAP (0x102)
#define CAVM_PCC_DEV_CON_E_DDF0 (0x10500)
#define CAVM_PCC_DEV_CON_E_DPI0_CN8 (0xb00)
#define CAVM_PCC_DEV_CON_E_DPI0_CN9 (0x500)
#define CAVM_PCC_DEV_CON_E_DPI1 (0x600)
#define CAVM_PCC_DEV_CON_E_FPA (0x900)
#define CAVM_PCC_DEV_CON_E_FUS (0x103)
#define CAVM_PCC_DEV_CON_E_FUSF (0x104)
#define CAVM_PCC_DEV_CON_E_GIC_CN8 (0x18)
#define CAVM_PCC_DEV_CON_E_GIC_CN9 (0x20)
#define CAVM_PCC_DEV_CON_E_GPIO_CN8 (0x30)
#define CAVM_PCC_DEV_CON_E_GPIO_CN9 (0x78)
#define CAVM_PCC_DEV_CON_E_GSERX(a) (0x1e0 + (a))
#define CAVM_PCC_DEV_CON_E_GSERCX(a) (0x1c0 + (a))
#define CAVM_PCC_DEV_CON_E_GSERJX(a) (0x1c0 + (a))
#define CAVM_PCC_DEV_CON_E_GSERNX(a) (0x1f0 + (a))
#define CAVM_PCC_DEV_CON_E_GSERPX(a) (0x1e0 + (a))
#define CAVM_PCC_DEV_CON_E_GSERRX(a) (0x1f6 + (a))
#define CAVM_PCC_DEV_CON_E_GTI_CN8 (0x20)
#define CAVM_PCC_DEV_CON_E_GTI_CN9 (0x28)
#define CAVM_PCC_DEV_CON_E_IOBNX(a) (0x158 + (a))
#define CAVM_PCC_DEV_CON_E_KEY (0x10d)
#define CAVM_PCC_DEV_CON_E_L2C (0x109)
#define CAVM_PCC_DEV_CON_E_L2C_CBCX(a) (0x138 + (a))
#define CAVM_PCC_DEV_CON_E_L2C_MCIX(a) (0x13c + (a))
#define CAVM_PCC_DEV_CON_E_L2C_TADX(a) (0x130 + (a))
#define CAVM_PCC_DEV_CON_E_LBKX(a) (0x168 + (a))
#define CAVM_PCC_DEV_CON_E_LMCX(a) (0x150 + (a))
#define CAVM_PCC_DEV_CON_E_MCCX(a) (0x130 + (a))
#define CAVM_PCC_DEV_CON_E_MDC (0x140)
#define CAVM_PCC_DEV_CON_E_MIO_BOOT (0x10e)
#define CAVM_PCC_DEV_CON_E_MIO_EMM (0x10c)
#define CAVM_PCC_DEV_CON_E_MIO_FUS (0x103)
#define CAVM_PCC_DEV_CON_E_MIO_PTP (0x40)
#define CAVM_PCC_DEV_CON_E_MIO_TWSX(a) (0x148 + (a))
#define CAVM_PCC_DEV_CON_E_MPI (0x38)
#define CAVM_PCC_DEV_CON_E_MPIX(a) (0x30 + 8 * (a))
#define CAVM_PCC_DEV_CON_E_MRML (0x100)
#define CAVM_PCC_DEV_CON_E_NCSI (0x108)
#define CAVM_PCC_DEV_CON_E_NDF (0x58)
#define CAVM_PCC_DEV_CON_E_NIC_CN81XX (0x500)
#define CAVM_PCC_DEV_CON_E_NIC_CN83XX (0x10100)
#define CAVM_PCC_DEV_CON_E_OCLAX_CN8(a) (0x160 + (a))
#define CAVM_PCC_DEV_CON_E_OCLAX_CN9(a) (0x190 + (a))
#define CAVM_PCC_DEV_CON_E_OCX (0x105)
#define CAVM_PCC_DEV_CON_E_PBUS (0x10f)
#define CAVM_PCC_DEV_CON_E_PCCBR_AP (0x10)
#define CAVM_PCC_DEV_CON_E_PCCBR_BCH (0x50)
#define CAVM_PCC_DEV_CON_E_PCCBR_BPHY (0xa8)
#define CAVM_PCC_DEV_CON_E_PCCBR_CPT0 (0x60)
#define CAVM_PCC_DEV_CON_E_PCCBR_CPT1 (0x68)
#define CAVM_PCC_DEV_CON_E_PCCBR_DDF0 (0x100a0)
#define CAVM_PCC_DEV_CON_E_PCCBR_DPI0 (0xa0)
#define CAVM_PCC_DEV_CON_E_PCCBR_DPI1 (0xa8)
#define CAVM_PCC_DEV_CON_E_PCCBR_FPA (0x90)
#define CAVM_PCC_DEV_CON_E_PCCBR_MRML (8)
#define CAVM_PCC_DEV_CON_E_PCCBR_NIC_CN81XX (0x78)
#define CAVM_PCC_DEV_CON_E_PCCBR_NIC_CN83XX (0x10080)
#define CAVM_PCC_DEV_CON_E_PCCBR_PKI (0x10088)
#define CAVM_PCC_DEV_CON_E_PCCBR_PKO (0x10090)
#define CAVM_PCC_DEV_CON_E_PCCBR_RAD (0x70)
#define CAVM_PCC_DEV_CON_E_PCCBR_RNM (0x48)
#define CAVM_PCC_DEV_CON_E_PCCBR_RVUX(a) (0x20000 + 8 * (a))
#define CAVM_PCC_DEV_CON_E_PCCBR_SSO (0x80)
#define CAVM_PCC_DEV_CON_E_PCCBR_SSOW (0x88)
#define CAVM_PCC_DEV_CON_E_PCCBR_TIM (0x98)
#define CAVM_PCC_DEV_CON_E_PCCBR_ZIP_CN8 (0x10098)
#define CAVM_PCC_DEV_CON_E_PCCBR_ZIP_CN9 (0x10058)
#define CAVM_PCC_DEV_CON_E_PCCBR_ZIP0 (0x10048)
#define CAVM_PCC_DEV_CON_E_PCIERC0_CN81XX (0xc0)
#define CAVM_PCC_DEV_CON_E_PCIERC0_CN83XX (0xc8)
#define CAVM_PCC_DEV_CON_E_PCIERC0_CN9 (0x30000)
#define CAVM_PCC_DEV_CON_E_PCIERC1_CN81XX (0xc8)
#define CAVM_PCC_DEV_CON_E_PCIERC1_CN83XX (0xd0)
#define CAVM_PCC_DEV_CON_E_PCIERC1_CN9 (0x40000)
#define CAVM_PCC_DEV_CON_E_PCIERC2_CN81XX (0xd0)
#define CAVM_PCC_DEV_CON_E_PCIERC2_CN83XX (0xd8)
#define CAVM_PCC_DEV_CON_E_PCIERC2_CN9 (0x50000)
#define CAVM_PCC_DEV_CON_E_PCIERC3_CN8 (0xe0)
#define CAVM_PCC_DEV_CON_E_PCIERC3_CN9 (0x60000)
#define CAVM_PCC_DEV_CON_E_PCIERC4 (0x70000)
#define CAVM_PCC_DEV_CON_E_PCM (0x68)
#define CAVM_PCC_DEV_CON_E_PEMX(a) (0x170 + (a))
#define CAVM_PCC_DEV_CON_E_PEM0 (0x10080)
#define CAVM_PCC_DEV_CON_E_PEM1 (0x10088)
#define CAVM_PCC_DEV_CON_E_PEM2 (0x10090)
#define CAVM_PCC_DEV_CON_E_PEM3 (0x10098)
#define CAVM_PCC_DEV_CON_E_PEM4 (0x100a0)
#define CAVM_PCC_DEV_CON_E_PKI (0x10200)
#define CAVM_PCC_DEV_CON_E_PKO (0x10300)
#define CAVM_PCC_DEV_CON_E_PSBM (0x107)
#define CAVM_PCC_DEV_CON_E_RAD (0x600)
#define CAVM_PCC_DEV_CON_E_RGXX(a) (0x190 + (a))
#define CAVM_PCC_DEV_CON_E_RNM_CN8 (0x200)
#define CAVM_PCC_DEV_CON_E_RNM_CN9 (0x300)
#define CAVM_PCC_DEV_CON_E_RST (0x101)
#define CAVM_PCC_DEV_CON_E_RTT (0x2ff)
#define CAVM_PCC_DEV_CON_E_RVUX(a) (0x20100 + 0x100 * (a))
#define CAVM_PCC_DEV_CON_E_SATA0_CN81XX (0xb0)
#define CAVM_PCC_DEV_CON_E_SATA0_CN83XX (0x10020)
#define CAVM_PCC_DEV_CON_E_SATA0_CN9 (0x10020)
#define CAVM_PCC_DEV_CON_E_SATA1_CN81XX (0xb8)
#define CAVM_PCC_DEV_CON_E_SATA1_CN83XX (0x10028)
#define CAVM_PCC_DEV_CON_E_SATA1_CN9 (0x10028)
#define CAVM_PCC_DEV_CON_E_SATA2 (0x10030)
#define CAVM_PCC_DEV_CON_E_SATA3 (0x10038)
#define CAVM_PCC_DEV_CON_E_SATA4 (0x10040)
#define CAVM_PCC_DEV_CON_E_SATA5 (0x10048)
#define CAVM_PCC_DEV_CON_E_SGP (0x10a)
#define CAVM_PCC_DEV_CON_E_SLI0 (0x70)
#define CAVM_PCC_DEV_CON_E_SLIRE0 (0xc0)
#define CAVM_PCC_DEV_CON_E_SMI (0x10b)
#define CAVM_PCC_DEV_CON_E_SMMU0_CN8 (0x10)
#define CAVM_PCC_DEV_CON_E_SMMU0_CN9 (0x18)
#define CAVM_PCC_DEV_CON_E_SMMU1 (0x10008)
#define CAVM_PCC_DEV_CON_E_SSO (0x700)
#define CAVM_PCC_DEV_CON_E_SSOW (0x800)
#define CAVM_PCC_DEV_CON_E_TIM (0xa00)
#define CAVM_PCC_DEV_CON_E_TSNX(a) (0x170 + (a))
#define CAVM_PCC_DEV_CON_E_UAAX_CN8(a) (0x140 + (a))
#define CAVM_PCC_DEV_CON_E_UAAX_CN9(a) (0x160 + (a))
#define CAVM_PCC_DEV_CON_E_USBDRDX_CN81XX(a) (0x80 + 8 * (a))
#define CAVM_PCC_DEV_CON_E_USBDRDX_CN83XX(a) (0x10060 + 8 * (a))
#define CAVM_PCC_DEV_CON_E_USBDRDX_CN9(a) (0x10060 + 8 * (a))
#define CAVM_PCC_DEV_CON_E_VRMX(a) (0x144 + (a))
#define CAVM_PCC_DEV_CON_E_XCPX(a) (0xe0 + 8 * (a))
#define CAVM_PCC_DEV_CON_E_XCVX(a) (0x110 + (a))
#define CAVM_PCC_DEV_CON_E_ZIP (0x10400)
#define CAVM_PCC_DEV_CON_E_ZIP0 (0x10400)

/**
 * Enumeration pcc_dev_idl_e
 *
 * PCC Device ID Low Enumeration
 * Enumerates the values of the PCI configuration header Device ID bits
 * \<7:0\>.
 */
#define CAVM_PCC_DEV_IDL_E_AP5 (0x76)
#define CAVM_PCC_DEV_IDL_E_AP6 (0x86)
#define CAVM_PCC_DEV_IDL_E_AVS (0x6a)
#define CAVM_PCC_DEV_IDL_E_BCH (0x43)
#define CAVM_PCC_DEV_IDL_E_BCH_VF (0x44)
#define CAVM_PCC_DEV_IDL_E_BGX (0x26)
#define CAVM_PCC_DEV_IDL_E_BPHY (0x89)
#define CAVM_PCC_DEV_IDL_E_BTS (0x88)
#define CAVM_PCC_DEV_IDL_E_CCS (0x6e)
#define CAVM_PCC_DEV_IDL_E_CCU (0x6f)
#define CAVM_PCC_DEV_IDL_E_CGX (0x59)
#define CAVM_PCC_DEV_IDL_E_CHIP (0)
#define CAVM_PCC_DEV_IDL_E_CHIP_VF (3)
#define CAVM_PCC_DEV_IDL_E_CPC (0x68)
#define CAVM_PCC_DEV_IDL_E_CPT (0x40)
#define CAVM_PCC_DEV_IDL_E_CPT_VF (0x41)
#define CAVM_PCC_DEV_IDL_E_DAP (0x2c)
#define CAVM_PCC_DEV_IDL_E_DDF (0x45)
#define CAVM_PCC_DEV_IDL_E_DDF_VF (0x46)
#define CAVM_PCC_DEV_IDL_E_DFA (0x19)
#define CAVM_PCC_DEV_IDL_E_DPI (0x57)
#define CAVM_PCC_DEV_IDL_E_DPI5 (0x80)
#define CAVM_PCC_DEV_IDL_E_DPI5_VF (0x81)
#define CAVM_PCC_DEV_IDL_E_DPI_VF (0x58)
#define CAVM_PCC_DEV_IDL_E_FPA (0x52)
#define CAVM_PCC_DEV_IDL_E_FPA_VF (0x53)
#define CAVM_PCC_DEV_IDL_E_FUS5 (0x74)
#define CAVM_PCC_DEV_IDL_E_FUSF (0x32)
#define CAVM_PCC_DEV_IDL_E_GIC (9)
#define CAVM_PCC_DEV_IDL_E_GIC5 (0x71)
#define CAVM_PCC_DEV_IDL_E_GPIO (0xa)
#define CAVM_PCC_DEV_IDL_E_GSER (0x25)
#define CAVM_PCC_DEV_IDL_E_GSERC (0x3b)
#define CAVM_PCC_DEV_IDL_E_GSERJ (0x3c)
#define CAVM_PCC_DEV_IDL_E_GSERN (0x28)
#define CAVM_PCC_DEV_IDL_E_GSERP (0x3a)
#define CAVM_PCC_DEV_IDL_E_GSERR (0x39)
#define CAVM_PCC_DEV_IDL_E_GTI (0x17)
#define CAVM_PCC_DEV_IDL_E_IOBN (0x27)
#define CAVM_PCC_DEV_IDL_E_IOBN5 (0x6b)
#define CAVM_PCC_DEV_IDL_E_KEY (0x16)
#define CAVM_PCC_DEV_IDL_E_L2C (0x21)
#define CAVM_PCC_DEV_IDL_E_L2C_CBC (0x2f)
#define CAVM_PCC_DEV_IDL_E_L2C_MCI (0x30)
#define CAVM_PCC_DEV_IDL_E_L2C_TAD (0x2e)
#define CAVM_PCC_DEV_IDL_E_LBK (0x42)
#define CAVM_PCC_DEV_IDL_E_LBK5 (0x61)
#define CAVM_PCC_DEV_IDL_E_LMC (0x22)
#define CAVM_PCC_DEV_IDL_E_MCC (0x70)
#define CAVM_PCC_DEV_IDL_E_MDC (0x73)
#define CAVM_PCC_DEV_IDL_E_MIO_BOOT (0x11)
#define CAVM_PCC_DEV_IDL_E_MIO_EMM (0x10)
#define CAVM_PCC_DEV_IDL_E_MIO_FUS (0x31)
#define CAVM_PCC_DEV_IDL_E_MIO_PTP (0xc)
#define CAVM_PCC_DEV_IDL_E_MIO_TWS (0x12)
#define CAVM_PCC_DEV_IDL_E_MIX (0xd)
#define CAVM_PCC_DEV_IDL_E_MPI (0xb)
#define CAVM_PCC_DEV_IDL_E_MRML (1)
#define CAVM_PCC_DEV_IDL_E_MRML5 (0x75)
#define CAVM_PCC_DEV_IDL_E_NCSI (0x29)
#define CAVM_PCC_DEV_IDL_E_NDF (0x4f)
#define CAVM_PCC_DEV_IDL_E_NIC (0x1e)
#define CAVM_PCC_DEV_IDL_E_NIC_VF (0x34)
#define CAVM_PCC_DEV_IDL_E_OCLA (0x23)
#define CAVM_PCC_DEV_IDL_E_OCX (0x13)
#define CAVM_PCC_DEV_IDL_E_OCX5 (0x79)
#define CAVM_PCC_DEV_IDL_E_OSM (0x24)
#define CAVM_PCC_DEV_IDL_E_PBUS (0x35)
#define CAVM_PCC_DEV_IDL_E_PCCBR (2)
#define CAVM_PCC_DEV_IDL_E_PCIERC (0x2d)
#define CAVM_PCC_DEV_IDL_E_PCM (0x4e)
#define CAVM_PCC_DEV_IDL_E_PEM (0x20)
#define CAVM_PCC_DEV_IDL_E_PEM5 (0x6c)
#define CAVM_PCC_DEV_IDL_E_PKI (0x47)
#define CAVM_PCC_DEV_IDL_E_PKO (0x48)
#define CAVM_PCC_DEV_IDL_E_PKO_VF (0x49)
#define CAVM_PCC_DEV_IDL_E_PSBM (0x69)
#define CAVM_PCC_DEV_IDL_E_RAD (0x1d)
#define CAVM_PCC_DEV_IDL_E_RAD_VF (0x36)
#define CAVM_PCC_DEV_IDL_E_RGX (0x54)
#define CAVM_PCC_DEV_IDL_E_RNM (0x18)
#define CAVM_PCC_DEV_IDL_E_RNM_VF (0x33)
#define CAVM_PCC_DEV_IDL_E_RST (0xe)
#define CAVM_PCC_DEV_IDL_E_RST5 (0x85)
#define CAVM_PCC_DEV_IDL_E_RVU (0x63)
#define CAVM_PCC_DEV_IDL_E_RVU_AF (0x65)
#define CAVM_PCC_DEV_IDL_E_RVU_VF (0x64)
#define CAVM_PCC_DEV_IDL_E_SATA (0x1c)
#define CAVM_PCC_DEV_IDL_E_SATA5 (0x84)
#define CAVM_PCC_DEV_IDL_E_SGP (0x2a)
#define CAVM_PCC_DEV_IDL_E_SLI (0x15)
#define CAVM_PCC_DEV_IDL_E_SLIRE (0x38)
#define CAVM_PCC_DEV_IDL_E_SMI (0x2b)
#define CAVM_PCC_DEV_IDL_E_SMMU (8)
#define CAVM_PCC_DEV_IDL_E_SMMU3 (0x62)
#define CAVM_PCC_DEV_IDL_E_SSO (0x4a)
#define CAVM_PCC_DEV_IDL_E_SSOW (0x4c)
#define CAVM_PCC_DEV_IDL_E_SSOW_VF (0x4d)
#define CAVM_PCC_DEV_IDL_E_SSO_VF (0x4b)
#define CAVM_PCC_DEV_IDL_E_SW_RSVDX_CN96XX_P1(a) (0xf0 + (a))
#define CAVM_PCC_DEV_IDL_E_SW_RSVDX_CN96XX_P3(a) (0xe0 + (a))
#define CAVM_PCC_DEV_IDL_E_SW_RSVDX_CN96XX_P4(a) (0xe0 + (a))
#define CAVM_PCC_DEV_IDL_E_SW_RSVDX_CN98XX(a) (0xe0 + (a))
#define CAVM_PCC_DEV_IDL_E_SW_RSVDX_CNF95XX_P1(a) (0xf0 + (a))
#define CAVM_PCC_DEV_IDL_E_SW_RSVDX_CNF95XX_P2(a) (0xe0 + (a))
#define CAVM_PCC_DEV_IDL_E_SW_RSVDX_CNF95XX_P3(a) (0xe0 + (a))
#define CAVM_PCC_DEV_IDL_E_SW_RSVDX_F95MM(a) (0xe0 + (a))
#define CAVM_PCC_DEV_IDL_E_SW_RSVDX_F95O(a) (0xe0 + (a))
#define CAVM_PCC_DEV_IDL_E_SW_RSVDX_LOKI(a) (0xe0 + (a))
#define CAVM_PCC_DEV_IDL_E_SW_RVU_AF_VF (0xf8)
#define CAVM_PCC_DEV_IDL_E_SW_RVU_CPT_PF (0xfd)
#define CAVM_PCC_DEV_IDL_E_SW_RVU_CPT_VF (0xfe)
#define CAVM_PCC_DEV_IDL_E_SW_RVU_NPA_PF (0xfb)
#define CAVM_PCC_DEV_IDL_E_SW_RVU_NPA_VF (0xfc)
#define CAVM_PCC_DEV_IDL_E_SW_RVU_REE_PF (0xf4)
#define CAVM_PCC_DEV_IDL_E_SW_RVU_REE_VF (0xf5)
#define CAVM_PCC_DEV_IDL_E_SW_RVU_SDP_PF (0xf6)
#define CAVM_PCC_DEV_IDL_E_SW_RVU_SDP_VF (0xf7)
#define CAVM_PCC_DEV_IDL_E_SW_RVU_SSO_TIM_PF (0xf9)
#define CAVM_PCC_DEV_IDL_E_SW_RVU_SSO_TIM_VF (0xfa)
#define CAVM_PCC_DEV_IDL_E_TIM (0x50)
#define CAVM_PCC_DEV_IDL_E_TIM_VF (0x51)
#define CAVM_PCC_DEV_IDL_E_TNS (0x1f)
#define CAVM_PCC_DEV_IDL_E_TSN (0x6d)
#define CAVM_PCC_DEV_IDL_E_UAA (0xf)
#define CAVM_PCC_DEV_IDL_E_USBDRD (0x55)
#define CAVM_PCC_DEV_IDL_E_USBH (0x1b)
#define CAVM_PCC_DEV_IDL_E_VRM (0x14)
#define CAVM_PCC_DEV_IDL_E_XCP (0x67)
#define CAVM_PCC_DEV_IDL_E_XCV (0x56)
#define CAVM_PCC_DEV_IDL_E_ZIP (0x1a)
#define CAVM_PCC_DEV_IDL_E_ZIP5 (0x82)
#define CAVM_PCC_DEV_IDL_E_ZIP5_VF (0x83)
#define CAVM_PCC_DEV_IDL_E_ZIP_VF (0x37)

/**
 * Enumeration pcc_jtag_dev_e
 *
 * PCC JTAG Device Enumeration
 * Enumerates the device number sub-field of Marvell (Cavium)-assigned JTAG ID_Codes. Device number is
 * mapped to Part_Number[7:4]. Where Part_Number [15:0] is mapped to ID_Code[27:12].
 */
#define CAVM_PCC_JTAG_DEV_E_DAP (1)
#define CAVM_PCC_JTAG_DEV_E_MAIN (0)
#define CAVM_PCC_JTAG_DEV_E_MCP (3)
#define CAVM_PCC_JTAG_DEV_E_SCP (2)

/**
 * Enumeration pcc_pidr_partnum0_e
 *
 * PCC PIDR Part Number 0 Enumeration
 * When *_PIDR1[PARTNUM1] = PCC_PIDR_PARTNUM1_E::COMP, enumerates the values of Marvell (Cavium)-
 * assigned CoreSight PIDR part number 0 fields.
 * For example SMMU()_PIDR0[PARTNUM0].
 */
#define CAVM_PCC_PIDR_PARTNUM0_E_CTI (0xd)
#define CAVM_PCC_PIDR_PARTNUM0_E_DBG (0xe)
#define CAVM_PCC_PIDR_PARTNUM0_E_ETR (0x13)
#define CAVM_PCC_PIDR_PARTNUM0_E_GICD (2)
#define CAVM_PCC_PIDR_PARTNUM0_E_GICR (1)
#define CAVM_PCC_PIDR_PARTNUM0_E_GITS (3)
#define CAVM_PCC_PIDR_PARTNUM0_E_GTI_BZ (4)
#define CAVM_PCC_PIDR_PARTNUM0_E_GTI_CC (5)
#define CAVM_PCC_PIDR_PARTNUM0_E_GTI_CTL (6)
#define CAVM_PCC_PIDR_PARTNUM0_E_GTI_RD (7)
#define CAVM_PCC_PIDR_PARTNUM0_E_GTI_WC (8)
#define CAVM_PCC_PIDR_PARTNUM0_E_GTI_WR (9)
#define CAVM_PCC_PIDR_PARTNUM0_E_NONE (0)
#define CAVM_PCC_PIDR_PARTNUM0_E_PMU (0xa)
#define CAVM_PCC_PIDR_PARTNUM0_E_RAS (0x12)
#define CAVM_PCC_PIDR_PARTNUM0_E_RAS_MCC (0x14)
#define CAVM_PCC_PIDR_PARTNUM0_E_SMMU (0xb)
#define CAVM_PCC_PIDR_PARTNUM0_E_SMMU3 (0x11)
#define CAVM_PCC_PIDR_PARTNUM0_E_SYSCTI (0xf)
#define CAVM_PCC_PIDR_PARTNUM0_E_TRC (0x10)
#define CAVM_PCC_PIDR_PARTNUM0_E_UAA (0xc)

/**
 * Enumeration pcc_pidr_partnum1_e
 *
 * PCC PIDR Part Number 1 Enumeration
 * Enumerates the values of Marvell (Cavium)-assigned CoreSight PIDR PARTNUM1 fields, for example
 * SMMU()_PIDR1[PARTNUM1].
 */
#define CAVM_PCC_PIDR_PARTNUM1_E_COMP (2)
#define CAVM_PCC_PIDR_PARTNUM1_E_PROD (1)

/**
 * Enumeration pcc_prod_e
 *
 * PCC Device ID Product Enumeration
 * Enumerates the die's chip identifier, used in PCCPF_XXX_ID[DEVID]\<15:8\> and other
 * chip identification registers.
 *
 * See also GPIO_PKG_VER to differentiate between package variants.
 */
#define CAVM_PCC_PROD_E_CN109XX (0xb8)
#define CAVM_PCC_PROD_E_CN81XX (0xa2)
#define CAVM_PCC_PROD_E_CN83XX (0xa3)
#define CAVM_PCC_PROD_E_CN88XX (0xa1)
#define CAVM_PCC_PROD_E_CN93XX (0xb2)
#define CAVM_PCC_PROD_E_CN95XX (0xb3)
#define CAVM_PCC_PROD_E_CN98XX (0xb1)
#define CAVM_PCC_PROD_E_CN99XX (0xaf)
#define CAVM_PCC_PROD_E_CNF95XX (0xb3)
#define CAVM_PCC_PROD_E_CNF95XXMM (0xb5)
#define CAVM_PCC_PROD_E_CNF95XXO (0xb6)
#define CAVM_PCC_PROD_E_GEN (0xa0)
#define CAVM_PCC_PROD_E_LOKI (0xb4)

/**
 * Enumeration pcc_vendor_e
 *
 * PCC Vendor ID Enumeration
 * Enumerates the values of the PCI configuration header vendor ID.
 */
#define CAVM_PCC_VENDOR_E_CAVIUM (0x177d)

/**
 * Enumeration pcc_vsecid_e
 *
 * PCC Vendor-Specific Capability ID Enumeration
 * Enumerates the values of Marvell (Cavium)'s vendor-specific PCI capability IDs.
 */
#define CAVM_PCC_VSECID_E_NONE (0)
#define CAVM_PCC_VSECID_E_SY_RAS_DES (2)
#define CAVM_PCC_VSECID_E_SY_RAS_DP (1)
#define CAVM_PCC_VSECID_E_SY_RSVDX(a) (0 + (a))
#define CAVM_PCC_VSECID_E_TX_BR (0xa1)
#define CAVM_PCC_VSECID_E_TX_PF (0xa0)
#define CAVM_PCC_VSECID_E_TX_VF (0xa2)

/**
 * Structure pcc_class_code_s
 *
 * PCC Class Code Structure
 * Defines the components of the PCC class code.
 */
union cavm_pcc_class_code_s
{
    uint32_t u;
    struct cavm_pcc_class_code_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t bcc                   : 8;  /**< [ 23: 16] Base class code. */
        uint32_t sc                    : 8;  /**< [ 15:  8] Subclass code. */
        uint32_t pi                    : 8;  /**< [  7:  0] Programming interface. */
#else /* Word 0 - Little Endian */
        uint32_t pi                    : 8;  /**< [  7:  0] Programming interface. */
        uint32_t sc                    : 8;  /**< [ 15:  8] Subclass code. */
        uint32_t bcc                   : 8;  /**< [ 23: 16] Base class code. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcc_class_code_s_s cn; */
};

/**
 * Structure pcc_dev_con_s
 *
 * PCC Device Connection Structure
 * Defines the components of the PCC device connection values enumerated by PCC_DEV_CON_E,
 * using ARI format.
 */
union cavm_pcc_dev_con_s
{
    uint32_t u;
    struct cavm_pcc_dev_con_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t bus                   : 8;  /**< [ 15:  8] PCI requestor bus number. */
        uint32_t func                  : 8;  /**< [  7:  0] For ARI devices (when bus is nonzero), an eight-bit RSL function number.

                                                                 For non-ARI devices (when bus is zero), \<7:3\> is the device number, \<2:0\> the function
                                                                 number. */
#else /* Word 0 - Little Endian */
        uint32_t func                  : 8;  /**< [  7:  0] For ARI devices (when bus is nonzero), an eight-bit RSL function number.

                                                                 For non-ARI devices (when bus is zero), \<7:3\> is the device number, \<2:0\> the function
                                                                 number. */
        uint32_t bus                   : 8;  /**< [ 15:  8] PCI requestor bus number. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    struct cavm_pcc_dev_con_s_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t ecam                  : 2;  /**< [ 17: 16] ECAM number. */
        uint32_t bus                   : 8;  /**< [ 15:  8] PCI requestor bus number. */
        uint32_t func                  : 8;  /**< [  7:  0] For ARI devices (when bus is nonzero), an eight-bit RSL function number.

                                                                 For non-ARI devices (when bus is zero), \<7:3\> is the device number, \<2:0\> the function
                                                                 number. */
#else /* Word 0 - Little Endian */
        uint32_t func                  : 8;  /**< [  7:  0] For ARI devices (when bus is nonzero), an eight-bit RSL function number.

                                                                 For non-ARI devices (when bus is zero), \<7:3\> is the device number, \<2:0\> the function
                                                                 number. */
        uint32_t bus                   : 8;  /**< [ 15:  8] PCI requestor bus number. */
        uint32_t ecam                  : 2;  /**< [ 17: 16] ECAM number. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } cn8;
    struct cavm_pcc_dev_con_s_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_22_31        : 10;
        uint32_t dmn                   : 6;  /**< [ 21: 16] Domain number. */
        uint32_t bus                   : 8;  /**< [ 15:  8] PCI requestor bus number. */
        uint32_t func                  : 8;  /**< [  7:  0] For ARI devices (when bus is nonzero), an eight-bit RSL function number.

                                                                 For non-ARI devices (when bus is zero), \<7:3\> is the device number, \<2:0\> the function
                                                                 number. */
#else /* Word 0 - Little Endian */
        uint32_t func                  : 8;  /**< [  7:  0] For ARI devices (when bus is nonzero), an eight-bit RSL function number.

                                                                 For non-ARI devices (when bus is zero), \<7:3\> is the device number, \<2:0\> the function
                                                                 number. */
        uint32_t bus                   : 8;  /**< [ 15:  8] PCI requestor bus number. */
        uint32_t dmn                   : 6;  /**< [ 21: 16] Domain number. */
        uint32_t reserved_22_31        : 10;
#endif /* Word 0 - End */
    } cn9;
};

/**
 * Structure pcc_ea_entry_s
 *
 * PCC PCI Enhanced Allocation Entry Structure
 * This structure describes the format of an enhanced allocation entry stored in
 * PCCPF_XXX_EA_ENTRY(). This describes what PCC hardware generates only; software must
 * implement a full EA parser including testing the [ENTRY_SIZE], [BASE64] and
 * [OFFSET64] fields.
 *
 * PCI configuration registers are 32-bits, however due to tool limitations this
 * structure is described as a little-endian 64-bit wide structure.
 */
union cavm_pcc_ea_entry_s
{
    uint64_t u[3];
    struct cavm_pcc_ea_entry_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t basel                 : 30; /**< [ 63: 34] Lower bits of the entry 0 base address. */
        uint64_t base64                : 1;  /**< [ 33: 33] 64-bit base, indicates [BASEH] is present. For CNXXXX always set. */
        uint64_t reserved_32           : 1;
        uint64_t enable                : 1;  /**< [ 31: 31] Enable. Always set. */
        uint64_t w                     : 1;  /**< [ 30: 30] Writable. Always clear. */
        uint64_t reserved_24_29        : 6;
        uint64_t sec_prop              : 8;  /**< [ 23: 16] Secondary properties. For CNXXXX always 0xFF, indicating that the primary properties must
                                                                 be used. */
        uint64_t pri_prop              : 8;  /**< [ 15:  8] Primary properties.
                                                                 0x0 = Memory space, non-prefetchable.
                                                                 0x4 = Physical function indicating virtual function memory space, non-prefetchable. */
        uint64_t bei                   : 4;  /**< [  7:  4] BAR equivalent indicator.
                                                                 0x0 = Entry is equivalent to BAR 0.
                                                                 0x2 = Entry is equivalent to BAR 2.
                                                                 0x4 = Entry is equivalent to BAR 4.
                                                                 0x7 = Equivalent not indicated.
                                                                 0x9 = Entry is equivalent to SR-IOV BAR 0.
                                                                 0xB = Entry is equivalent to SR-IOV BAR 2.
                                                                 0xD = Entry is equivalent to SR-IOV BAR 4. */
        uint64_t reserved_3            : 1;
        uint64_t entry_size            : 3;  /**< [  2:  0] Number of 32-bit words following this entry format header, excluding the header
                                                                 itself.
                                                                 0x4 = Four 32-bit words; header followed by base low, offset low, base high,
                                                                 offset high. */
#else /* Word 0 - Little Endian */
        uint64_t entry_size            : 3;  /**< [  2:  0] Number of 32-bit words following this entry format header, excluding the header
                                                                 itself.
                                                                 0x4 = Four 32-bit words; header followed by base low, offset low, base high,
                                                                 offset high. */
        uint64_t reserved_3            : 1;
        uint64_t bei                   : 4;  /**< [  7:  4] BAR equivalent indicator.
                                                                 0x0 = Entry is equivalent to BAR 0.
                                                                 0x2 = Entry is equivalent to BAR 2.
                                                                 0x4 = Entry is equivalent to BAR 4.
                                                                 0x7 = Equivalent not indicated.
                                                                 0x9 = Entry is equivalent to SR-IOV BAR 0.
                                                                 0xB = Entry is equivalent to SR-IOV BAR 2.
                                                                 0xD = Entry is equivalent to SR-IOV BAR 4. */
        uint64_t pri_prop              : 8;  /**< [ 15:  8] Primary properties.
                                                                 0x0 = Memory space, non-prefetchable.
                                                                 0x4 = Physical function indicating virtual function memory space, non-prefetchable. */
        uint64_t sec_prop              : 8;  /**< [ 23: 16] Secondary properties. For CNXXXX always 0xFF, indicating that the primary properties must
                                                                 be used. */
        uint64_t reserved_24_29        : 6;
        uint64_t w                     : 1;  /**< [ 30: 30] Writable. Always clear. */
        uint64_t enable                : 1;  /**< [ 31: 31] Enable. Always set. */
        uint64_t reserved_32           : 1;
        uint64_t base64                : 1;  /**< [ 33: 33] 64-bit base, indicates [BASEH] is present. For CNXXXX always set. */
        uint64_t basel                 : 30; /**< [ 63: 34] Lower bits of the entry 0 base address. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t baseh                 : 32; /**< [127: 96] Upper bits of the entry 0 base address. */
        uint64_t offsetl               : 30; /**< [ 95: 66] Lower bits of the entry 0 offset. Bits \<1:0\> of the offset are not present and
                                                                 must be interpreted as all-ones. */
        uint64_t offset64              : 1;  /**< [ 65: 65] 64-bit offset, indicates [OFFSETH] is present. For CNXXXX always set. */
        uint64_t reserved_64           : 1;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64           : 1;
        uint64_t offset64              : 1;  /**< [ 65: 65] 64-bit offset, indicates [OFFSETH] is present. For CNXXXX always set. */
        uint64_t offsetl               : 30; /**< [ 95: 66] Lower bits of the entry 0 offset. Bits \<1:0\> of the offset are not present and
                                                                 must be interpreted as all-ones. */
        uint64_t baseh                 : 32; /**< [127: 96] Upper bits of the entry 0 base address. */
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t reserved_160_191      : 32;
        uint64_t offseth               : 32; /**< [159:128] Upper bits of the entry 0 offset. */
#else /* Word 2 - Little Endian */
        uint64_t offseth               : 32; /**< [159:128] Upper bits of the entry 0 offset. */
        uint64_t reserved_160_191      : 32;
#endif /* Word 2 - End */
    } s;
    /* struct cavm_pcc_ea_entry_s_s cn8; */
    struct cavm_pcc_ea_entry_s_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t basel                 : 30; /**< [ 63: 34] Lower bits of the entry 0 base address. */
        uint64_t base64                : 1;  /**< [ 33: 33] 64-bit base, indicates [BASEH] is present. For CNXXXX always set. */
        uint64_t reserved_32           : 1;
        uint64_t enable                : 1;  /**< [ 31: 31] Enable. Always set. */
        uint64_t w                     : 1;  /**< [ 30: 30] Writable. Always clear. */
        uint64_t reserved_24_29        : 6;
        uint64_t sec_prop              : 8;  /**< [ 23: 16] Secondary properties. For CNXXXX always 0xFF, indicating that the primary properties must
                                                                 be used. */
        uint64_t pri_prop              : 8;  /**< [ 15:  8] Primary properties.
                                                                 0x0 = Memory space, non-prefetchable.
                                                                 0x4 = Physical function indicating virtual function memory space, non-prefetchable. */
        uint64_t bei                   : 4;  /**< [  7:  4] BAR equivelent indicator.
                                                                 0x0 = Entry is equivalent to BAR 0.
                                                                 0x2 = Entry is equivalent to BAR 2.
                                                                 0x4 = Entry is equivalent to BAR 4.
                                                                 0x7 = Equivalent not indicated.
                                                                 0x9 = Entry is equivalent to SR-IOV BAR 0.
                                                                 0xB = Entry is equivalent to SR-IOV BAR 2.
                                                                 0xD = Entry is equivalent to SR-IOV BAR 4. */
        uint64_t reserved_3            : 1;
        uint64_t entry_size            : 3;  /**< [  2:  0] Number of 32-bit words following this entry format header, excluding the header
                                                                 itself.
                                                                 0x4 = Four 32-bit words; header followed by base low, offset low, base high,
                                                                 offset high. */
#else /* Word 0 - Little Endian */
        uint64_t entry_size            : 3;  /**< [  2:  0] Number of 32-bit words following this entry format header, excluding the header
                                                                 itself.
                                                                 0x4 = Four 32-bit words; header followed by base low, offset low, base high,
                                                                 offset high. */
        uint64_t reserved_3            : 1;
        uint64_t bei                   : 4;  /**< [  7:  4] BAR equivelent indicator.
                                                                 0x0 = Entry is equivalent to BAR 0.
                                                                 0x2 = Entry is equivalent to BAR 2.
                                                                 0x4 = Entry is equivalent to BAR 4.
                                                                 0x7 = Equivalent not indicated.
                                                                 0x9 = Entry is equivalent to SR-IOV BAR 0.
                                                                 0xB = Entry is equivalent to SR-IOV BAR 2.
                                                                 0xD = Entry is equivalent to SR-IOV BAR 4. */
        uint64_t pri_prop              : 8;  /**< [ 15:  8] Primary properties.
                                                                 0x0 = Memory space, non-prefetchable.
                                                                 0x4 = Physical function indicating virtual function memory space, non-prefetchable. */
        uint64_t sec_prop              : 8;  /**< [ 23: 16] Secondary properties. For CNXXXX always 0xFF, indicating that the primary properties must
                                                                 be used. */
        uint64_t reserved_24_29        : 6;
        uint64_t w                     : 1;  /**< [ 30: 30] Writable. Always clear. */
        uint64_t enable                : 1;  /**< [ 31: 31] Enable. Always set. */
        uint64_t reserved_32           : 1;
        uint64_t base64                : 1;  /**< [ 33: 33] 64-bit base, indicates [BASEH] is present. For CNXXXX always set. */
        uint64_t basel                 : 30; /**< [ 63: 34] Lower bits of the entry 0 base address. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t baseh                 : 32; /**< [127: 96] Upper bits of the entry 0 base address. */
        uint64_t offsetl               : 30; /**< [ 95: 66] Lower bits of the entry 0 offset. Bits \<1:0\> of the offset are not present and
                                                                 must be interpreted as all-ones. */
        uint64_t offset64              : 1;  /**< [ 65: 65] 64-bit offset, indicates [OFFSETH] is present. For CNXXXX always set. */
        uint64_t reserved_64           : 1;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64           : 1;
        uint64_t offset64              : 1;  /**< [ 65: 65] 64-bit offset, indicates [OFFSETH] is present. For CNXXXX always set. */
        uint64_t offsetl               : 30; /**< [ 95: 66] Lower bits of the entry 0 offset. Bits \<1:0\> of the offset are not present and
                                                                 must be interpreted as all-ones. */
        uint64_t baseh                 : 32; /**< [127: 96] Upper bits of the entry 0 base address. */
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t reserved_160_191      : 32;
        uint64_t offseth               : 32; /**< [159:128] Upper bits of the entry 0 offset. */
#else /* Word 2 - Little Endian */
        uint64_t offseth               : 32; /**< [159:128] Upper bits of the entry 0 offset. */
        uint64_t reserved_160_191      : 32;
#endif /* Word 2 - End */
    } cn9;
    /* struct cavm_pcc_ea_entry_s_cn9 cn96xxp1; */
    /* struct cavm_pcc_ea_entry_s_s cn96xxp3; */
    /* struct cavm_pcc_ea_entry_s_s cn96xxp4; */
    /* struct cavm_pcc_ea_entry_s_s cn98xx; */
    /* struct cavm_pcc_ea_entry_s_cn9 cnf95xxp1; */
    /* struct cavm_pcc_ea_entry_s_s cnf95xxp2; */
    /* struct cavm_pcc_ea_entry_s_s cnf95xxp3; */
    /* struct cavm_pcc_ea_entry_s_s f95mm; */
    /* struct cavm_pcc_ea_entry_s_cn9 f95o; */
    /* struct cavm_pcc_ea_entry_s_s loki; */
};

/**
 * Register (PCCPF) pccpf_xxx_aer_cap_hdr
 *
 * PCC PF AER Capability Header Register
 * This register is the header of the 44-byte PCI advanced error reporting (AER) capability
 * structure.
 */
union cavm_pccpf_xxx_aer_cap_hdr
{
    uint32_t u;
    struct cavm_pccpf_xxx_aer_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO) Next capability offset. If this device is on a nonzero bus, points to
                                                                 PCCPF_XXX_ARI_CAP_HDR, else 0x0. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO) Capability version. */
        uint32_t aerid                 : 16; /**< [ 15:  0](RO) PCIE extended capability. Indicates AER capability. */
#else /* Word 0 - Little Endian */
        uint32_t aerid                 : 16; /**< [ 15:  0](RO) PCIE extended capability. Indicates AER capability. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO) Capability version. */
        uint32_t nco                   : 12; /**< [ 31: 20](RO) Next capability offset. If this device is on a nonzero bus, points to
                                                                 PCCPF_XXX_ARI_CAP_HDR, else 0x0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_aer_cap_hdr_s cn; */
};
typedef union cavm_pccpf_xxx_aer_cap_hdr cavm_pccpf_xxx_aer_cap_hdr_t;

#define CAVM_PCCPF_XXX_AER_CAP_HDR CAVM_PCCPF_XXX_AER_CAP_HDR_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_AER_CAP_HDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_AER_CAP_HDR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x140;
    __cavm_csr_fatal("PCCPF_XXX_AER_CAP_HDR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCPF_XXX_AER_CAP_HDR cavm_pccpf_xxx_aer_cap_hdr_t
#define bustype_CAVM_PCCPF_XXX_AER_CAP_HDR CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_AER_CAP_HDR "PCCPF_XXX_AER_CAP_HDR"
#define busnum_CAVM_PCCPF_XXX_AER_CAP_HDR 0
#define arguments_CAVM_PCCPF_XXX_AER_CAP_HDR -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_aer_cor_mask
 *
 * PCC PF AER Correctable Error Mask Register
 * This register contains a mask bit for each nonreserved bit in PCCPF_XXX_AER_COR_STATUS.
 * The mask bits are R/W for PCIe and software compatibility but are not used by hardware.
 *
 * This register is reset on a chip domain reset.
 */
union cavm_pccpf_xxx_aer_cor_mask
{
    uint32_t u;
    struct cavm_pccpf_xxx_aer_cor_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_15_31        : 17;
        uint32_t cor_intn              : 1;  /**< [ 14: 14](R/W) Corrected internal error. */
        uint32_t adv_nfat              : 1;  /**< [ 13: 13](R/W) Advisory nonfatal error. */
        uint32_t rep_timer             : 1;  /**< [ 12: 12](R/W) Replay timer timeout. */
        uint32_t reserved_9_11         : 3;
        uint32_t rep_roll              : 1;  /**< [  8:  8](R/W) Replay number rollover. */
        uint32_t bad_dllp              : 1;  /**< [  7:  7](R/W) Bad DLLP. */
        uint32_t bad_tlp               : 1;  /**< [  6:  6](R/W) Bad TLP. */
        uint32_t reserved_1_5          : 5;
        uint32_t rcvr                  : 1;  /**< [  0:  0](R/W) Receiver error. */
#else /* Word 0 - Little Endian */
        uint32_t rcvr                  : 1;  /**< [  0:  0](R/W) Receiver error. */
        uint32_t reserved_1_5          : 5;
        uint32_t bad_tlp               : 1;  /**< [  6:  6](R/W) Bad TLP. */
        uint32_t bad_dllp              : 1;  /**< [  7:  7](R/W) Bad DLLP. */
        uint32_t rep_roll              : 1;  /**< [  8:  8](R/W) Replay number rollover. */
        uint32_t reserved_9_11         : 3;
        uint32_t rep_timer             : 1;  /**< [ 12: 12](R/W) Replay timer timeout. */
        uint32_t adv_nfat              : 1;  /**< [ 13: 13](R/W) Advisory nonfatal error. */
        uint32_t cor_intn              : 1;  /**< [ 14: 14](R/W) Corrected internal error. */
        uint32_t reserved_15_31        : 17;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_aer_cor_mask_s cn; */
};
typedef union cavm_pccpf_xxx_aer_cor_mask cavm_pccpf_xxx_aer_cor_mask_t;

#define CAVM_PCCPF_XXX_AER_COR_MASK CAVM_PCCPF_XXX_AER_COR_MASK_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_AER_COR_MASK_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_AER_COR_MASK_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x154;
    __cavm_csr_fatal("PCCPF_XXX_AER_COR_MASK", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCPF_XXX_AER_COR_MASK cavm_pccpf_xxx_aer_cor_mask_t
#define bustype_CAVM_PCCPF_XXX_AER_COR_MASK CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_AER_COR_MASK "PCCPF_XXX_AER_COR_MASK"
#define busnum_CAVM_PCCPF_XXX_AER_COR_MASK 0
#define arguments_CAVM_PCCPF_XXX_AER_COR_MASK -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_aer_cor_status
 *
 * PCC PF AER Correctable Error Status Register
 * This register is reset on a chip domain reset.
 */
union cavm_pccpf_xxx_aer_cor_status
{
    uint32_t u;
    struct cavm_pccpf_xxx_aer_cor_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_15_31        : 17;
        uint32_t cor_intn              : 1;  /**< [ 14: 14](R/W1C/H) Corrected internal error. Set when one is written to PCCPF_XXX_VSEC_CTL[COR_INTN]. */
        uint32_t adv_nfat              : 1;  /**< [ 13: 13](R/W1C/H) Advisory non-fatal error. Set when one is written to PCCPF_XXX_VSEC_CTL[ADV_NFAT]. */
        uint32_t rep_timer             : 1;  /**< [ 12: 12](RO) Replay timer timeout. Always zero. */
        uint32_t reserved_9_11         : 3;
        uint32_t rep_roll              : 1;  /**< [  8:  8](RO) Replay number rollover. Always zero. */
        uint32_t bad_dllp              : 1;  /**< [  7:  7](RO) Bad DLLP. Always zero. */
        uint32_t bad_tlp               : 1;  /**< [  6:  6](RO) Bad TLP. Always zero. */
        uint32_t reserved_1_5          : 5;
        uint32_t rcvr                  : 1;  /**< [  0:  0](RO) Receiver error. Always zero. */
#else /* Word 0 - Little Endian */
        uint32_t rcvr                  : 1;  /**< [  0:  0](RO) Receiver error. Always zero. */
        uint32_t reserved_1_5          : 5;
        uint32_t bad_tlp               : 1;  /**< [  6:  6](RO) Bad TLP. Always zero. */
        uint32_t bad_dllp              : 1;  /**< [  7:  7](RO) Bad DLLP. Always zero. */
        uint32_t rep_roll              : 1;  /**< [  8:  8](RO) Replay number rollover. Always zero. */
        uint32_t reserved_9_11         : 3;
        uint32_t rep_timer             : 1;  /**< [ 12: 12](RO) Replay timer timeout. Always zero. */
        uint32_t adv_nfat              : 1;  /**< [ 13: 13](R/W1C/H) Advisory non-fatal error. Set when one is written to PCCPF_XXX_VSEC_CTL[ADV_NFAT]. */
        uint32_t cor_intn              : 1;  /**< [ 14: 14](R/W1C/H) Corrected internal error. Set when one is written to PCCPF_XXX_VSEC_CTL[COR_INTN]. */
        uint32_t reserved_15_31        : 17;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_aer_cor_status_s cn; */
};
typedef union cavm_pccpf_xxx_aer_cor_status cavm_pccpf_xxx_aer_cor_status_t;

#define CAVM_PCCPF_XXX_AER_COR_STATUS CAVM_PCCPF_XXX_AER_COR_STATUS_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_AER_COR_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_AER_COR_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x150;
    __cavm_csr_fatal("PCCPF_XXX_AER_COR_STATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCPF_XXX_AER_COR_STATUS cavm_pccpf_xxx_aer_cor_status_t
#define bustype_CAVM_PCCPF_XXX_AER_COR_STATUS CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_AER_COR_STATUS "PCCPF_XXX_AER_COR_STATUS"
#define busnum_CAVM_PCCPF_XXX_AER_COR_STATUS 0
#define arguments_CAVM_PCCPF_XXX_AER_COR_STATUS -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_aer_uncor_mask
 *
 * PCC PF AER Uncorrectable Error Mask Register
 * This register contains a mask bit for each nonreserved bit in PCCPF_XXX_AER_UNCOR_STATUS.
 * The mask bits are R/W for PCIe and software compatibility but are not used by hardware.
 *
 * This register is reset on a chip domain reset.
 */
union cavm_pccpf_xxx_aer_uncor_mask
{
    uint32_t u;
    struct cavm_pccpf_xxx_aer_uncor_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_23_31        : 9;
        uint32_t uncor_intn            : 1;  /**< [ 22: 22](R/W) Uncorrectable internal error. */
        uint32_t reserved_21           : 1;
        uint32_t unsup                 : 1;  /**< [ 20: 20](R/W) Unsupported request error. */
        uint32_t reserved_19           : 1;
        uint32_t malf_tlp              : 1;  /**< [ 18: 18](R/W) Malformed TLP. */
        uint32_t reserved_17           : 1;
        uint32_t unx_comp              : 1;  /**< [ 16: 16](R/W) Unexpected completion. */
        uint32_t reserved_15           : 1;
        uint32_t comp_time             : 1;  /**< [ 14: 14](R/W) Completion timeout. */
        uint32_t reserved_13           : 1;
        uint32_t poison_tlp            : 1;  /**< [ 12: 12](R/W) Poisoned TLP received. */
        uint32_t reserved_5_11         : 7;
        uint32_t dlp                   : 1;  /**< [  4:  4](R/W) Data link protocol error. */
        uint32_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_3          : 4;
        uint32_t dlp                   : 1;  /**< [  4:  4](R/W) Data link protocol error. */
        uint32_t reserved_5_11         : 7;
        uint32_t poison_tlp            : 1;  /**< [ 12: 12](R/W) Poisoned TLP received. */
        uint32_t reserved_13           : 1;
        uint32_t comp_time             : 1;  /**< [ 14: 14](R/W) Completion timeout. */
        uint32_t reserved_15           : 1;
        uint32_t unx_comp              : 1;  /**< [ 16: 16](R/W) Unexpected completion. */
        uint32_t reserved_17           : 1;
        uint32_t malf_tlp              : 1;  /**< [ 18: 18](R/W) Malformed TLP. */
        uint32_t reserved_19           : 1;
        uint32_t unsup                 : 1;  /**< [ 20: 20](R/W) Unsupported request error. */
        uint32_t reserved_21           : 1;
        uint32_t uncor_intn            : 1;  /**< [ 22: 22](R/W) Uncorrectable internal error. */
        uint32_t reserved_23_31        : 9;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_aer_uncor_mask_s cn; */
};
typedef union cavm_pccpf_xxx_aer_uncor_mask cavm_pccpf_xxx_aer_uncor_mask_t;

#define CAVM_PCCPF_XXX_AER_UNCOR_MASK CAVM_PCCPF_XXX_AER_UNCOR_MASK_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_AER_UNCOR_MASK_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_AER_UNCOR_MASK_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x148;
    __cavm_csr_fatal("PCCPF_XXX_AER_UNCOR_MASK", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCPF_XXX_AER_UNCOR_MASK cavm_pccpf_xxx_aer_uncor_mask_t
#define bustype_CAVM_PCCPF_XXX_AER_UNCOR_MASK CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_AER_UNCOR_MASK "PCCPF_XXX_AER_UNCOR_MASK"
#define busnum_CAVM_PCCPF_XXX_AER_UNCOR_MASK 0
#define arguments_CAVM_PCCPF_XXX_AER_UNCOR_MASK -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_aer_uncor_sever
 *
 * PCC PF AER Uncorrectable Error Severity Register
 * This register controls whether an individual error is reported as a nonfatal or
 * fatal error. An error is reported as fatal when the corresponding severity bit is set, and
 * nonfatal otherwise.
 *
 * This register is reset on a chip domain reset.
 */
union cavm_pccpf_xxx_aer_uncor_sever
{
    uint32_t u;
    struct cavm_pccpf_xxx_aer_uncor_sever_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_23_31        : 9;
        uint32_t uncor_intn            : 1;  /**< [ 22: 22](R/W) Uncorrectable internal error. */
        uint32_t reserved_21           : 1;
        uint32_t unsup                 : 1;  /**< [ 20: 20](R/W) Unsupported request error. */
        uint32_t reserved_19           : 1;
        uint32_t malf_tlp              : 1;  /**< [ 18: 18](R/W) Malformed TLP. */
        uint32_t reserved_17           : 1;
        uint32_t unx_comp              : 1;  /**< [ 16: 16](R/W) Unexpected completion. */
        uint32_t reserved_15           : 1;
        uint32_t comp_time             : 1;  /**< [ 14: 14](R/W) Completion timeout. */
        uint32_t reserved_13           : 1;
        uint32_t poison_tlp            : 1;  /**< [ 12: 12](R/W) Poisoned TLP received. */
        uint32_t reserved_5_11         : 7;
        uint32_t dlp                   : 1;  /**< [  4:  4](R/W) Data link protocol error. */
        uint32_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_3          : 4;
        uint32_t dlp                   : 1;  /**< [  4:  4](R/W) Data link protocol error. */
        uint32_t reserved_5_11         : 7;
        uint32_t poison_tlp            : 1;  /**< [ 12: 12](R/W) Poisoned TLP received. */
        uint32_t reserved_13           : 1;
        uint32_t comp_time             : 1;  /**< [ 14: 14](R/W) Completion timeout. */
        uint32_t reserved_15           : 1;
        uint32_t unx_comp              : 1;  /**< [ 16: 16](R/W) Unexpected completion. */
        uint32_t reserved_17           : 1;
        uint32_t malf_tlp              : 1;  /**< [ 18: 18](R/W) Malformed TLP. */
        uint32_t reserved_19           : 1;
        uint32_t unsup                 : 1;  /**< [ 20: 20](R/W) Unsupported request error. */
        uint32_t reserved_21           : 1;
        uint32_t uncor_intn            : 1;  /**< [ 22: 22](R/W) Uncorrectable internal error. */
        uint32_t reserved_23_31        : 9;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_aer_uncor_sever_s cn; */
};
typedef union cavm_pccpf_xxx_aer_uncor_sever cavm_pccpf_xxx_aer_uncor_sever_t;

#define CAVM_PCCPF_XXX_AER_UNCOR_SEVER CAVM_PCCPF_XXX_AER_UNCOR_SEVER_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_AER_UNCOR_SEVER_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_AER_UNCOR_SEVER_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x14c;
    __cavm_csr_fatal("PCCPF_XXX_AER_UNCOR_SEVER", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCPF_XXX_AER_UNCOR_SEVER cavm_pccpf_xxx_aer_uncor_sever_t
#define bustype_CAVM_PCCPF_XXX_AER_UNCOR_SEVER CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_AER_UNCOR_SEVER "PCCPF_XXX_AER_UNCOR_SEVER"
#define busnum_CAVM_PCCPF_XXX_AER_UNCOR_SEVER 0
#define arguments_CAVM_PCCPF_XXX_AER_UNCOR_SEVER -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_aer_uncor_status
 *
 * PCC PF AER Uncorrectable Error Status Register
 * This register is reset on a chip domain reset.
 */
union cavm_pccpf_xxx_aer_uncor_status
{
    uint32_t u;
    struct cavm_pccpf_xxx_aer_uncor_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_23_31        : 9;
        uint32_t uncor_intn            : 1;  /**< [ 22: 22](R/W1C/H) Uncorrectable internal error. Set when one is written to PCCPF_XXX_VSEC_CTL[UNCOR_INTN]. */
        uint32_t reserved_21           : 1;
        uint32_t unsup                 : 1;  /**< [ 20: 20](RO) Unsupported request error. Always zero. */
        uint32_t reserved_19           : 1;
        uint32_t malf_tlp              : 1;  /**< [ 18: 18](RO) Malformed TLP. Always zero. */
        uint32_t reserved_17           : 1;
        uint32_t unx_comp              : 1;  /**< [ 16: 16](RO) Unexpected completion. Always zero. */
        uint32_t reserved_15           : 1;
        uint32_t comp_time             : 1;  /**< [ 14: 14](RO) Completion timeout. Always zero. */
        uint32_t reserved_13           : 1;
        uint32_t poison_tlp            : 1;  /**< [ 12: 12](R/W1C/H) Poisoned TLP received. Set when one is written to PCCPF_XXX_VSEC_CTL[POISON_TLP]. */
        uint32_t reserved_5_11         : 7;
        uint32_t dlp                   : 1;  /**< [  4:  4](RO) Data link protocol error. Always zero. */
        uint32_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_3          : 4;
        uint32_t dlp                   : 1;  /**< [  4:  4](RO) Data link protocol error. Always zero. */
        uint32_t reserved_5_11         : 7;
        uint32_t poison_tlp            : 1;  /**< [ 12: 12](R/W1C/H) Poisoned TLP received. Set when one is written to PCCPF_XXX_VSEC_CTL[POISON_TLP]. */
        uint32_t reserved_13           : 1;
        uint32_t comp_time             : 1;  /**< [ 14: 14](RO) Completion timeout. Always zero. */
        uint32_t reserved_15           : 1;
        uint32_t unx_comp              : 1;  /**< [ 16: 16](RO) Unexpected completion. Always zero. */
        uint32_t reserved_17           : 1;
        uint32_t malf_tlp              : 1;  /**< [ 18: 18](RO) Malformed TLP. Always zero. */
        uint32_t reserved_19           : 1;
        uint32_t unsup                 : 1;  /**< [ 20: 20](RO) Unsupported request error. Always zero. */
        uint32_t reserved_21           : 1;
        uint32_t uncor_intn            : 1;  /**< [ 22: 22](R/W1C/H) Uncorrectable internal error. Set when one is written to PCCPF_XXX_VSEC_CTL[UNCOR_INTN]. */
        uint32_t reserved_23_31        : 9;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_aer_uncor_status_s cn; */
};
typedef union cavm_pccpf_xxx_aer_uncor_status cavm_pccpf_xxx_aer_uncor_status_t;

#define CAVM_PCCPF_XXX_AER_UNCOR_STATUS CAVM_PCCPF_XXX_AER_UNCOR_STATUS_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_AER_UNCOR_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_AER_UNCOR_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x144;
    __cavm_csr_fatal("PCCPF_XXX_AER_UNCOR_STATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCPF_XXX_AER_UNCOR_STATUS cavm_pccpf_xxx_aer_uncor_status_t
#define bustype_CAVM_PCCPF_XXX_AER_UNCOR_STATUS CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_AER_UNCOR_STATUS "PCCPF_XXX_AER_UNCOR_STATUS"
#define busnum_CAVM_PCCPF_XXX_AER_UNCOR_STATUS 0
#define arguments_CAVM_PCCPF_XXX_AER_UNCOR_STATUS -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_ari_cap_hdr
 *
 * PCC PF ARI Capability Header Register
 * This register is the header of the eight-byte PCI ARI capability structure.
 * If this device is on bus 0x0, this ARI header is not present and reads as 0x0.
 */
union cavm_pccpf_xxx_ari_cap_hdr
{
    uint32_t u;
    struct cavm_pccpf_xxx_ari_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO) Next capability offset. If SR-IOV is supported as per PCC_DEV_IDL_E, points to
                                                                 PCCPF_XXX_SRIOV_CAP_HDR, else 0x0. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO) Capability version (0x1). */
        uint32_t ariid                 : 16; /**< [ 15:  0](RO) PCIE extended capability (0xe). */
#else /* Word 0 - Little Endian */
        uint32_t ariid                 : 16; /**< [ 15:  0](RO) PCIE extended capability (0xe). */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO) Capability version (0x1). */
        uint32_t nco                   : 12; /**< [ 31: 20](RO) Next capability offset. If SR-IOV is supported as per PCC_DEV_IDL_E, points to
                                                                 PCCPF_XXX_SRIOV_CAP_HDR, else 0x0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_ari_cap_hdr_s cn; */
};
typedef union cavm_pccpf_xxx_ari_cap_hdr cavm_pccpf_xxx_ari_cap_hdr_t;

#define CAVM_PCCPF_XXX_ARI_CAP_HDR CAVM_PCCPF_XXX_ARI_CAP_HDR_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_ARI_CAP_HDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_ARI_CAP_HDR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x140;
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x170;
    __cavm_csr_fatal("PCCPF_XXX_ARI_CAP_HDR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCPF_XXX_ARI_CAP_HDR cavm_pccpf_xxx_ari_cap_hdr_t
#define bustype_CAVM_PCCPF_XXX_ARI_CAP_HDR CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_ARI_CAP_HDR "PCCPF_XXX_ARI_CAP_HDR"
#define busnum_CAVM_PCCPF_XXX_ARI_CAP_HDR 0
#define arguments_CAVM_PCCPF_XXX_ARI_CAP_HDR -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_bar0l
 *
 * PCC PF Base Address 0 Lower Register
 */
union cavm_pccpf_xxx_bar0l
{
    uint32_t u;
    struct cavm_pccpf_xxx_bar0l_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    struct cavm_pccpf_xxx_bar0l_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lbab                  : 16; /**< [ 31: 16](R/W/H) Lower bits of the BAR 0 base address. See additional BAR related notes in
                                                                 PCCPF_XXX_BAR0U[UBAB]. */
        uint32_t reserved_4_15         : 12;
        uint32_t pf                    : 1;  /**< [  3:  3](RO) Prefetchable. */
        uint32_t typ                   : 2;  /**< [  2:  1](RO/H) BAR type. 0x0 if not implemented or PCCPF_XXX_VSEC_SCTL[EA] is set, else 0x2:
                                                                 0x0 = 32-bit BAR, or BAR not present.
                                                                 0x2 = 64-bit BAR. */
        uint32_t mspc                  : 1;  /**< [  0:  0](RO) Memory space indicator.
                                                                 0 = BAR is a memory BAR.
                                                                 1 = BAR is an I/O BAR. */
#else /* Word 0 - Little Endian */
        uint32_t mspc                  : 1;  /**< [  0:  0](RO) Memory space indicator.
                                                                 0 = BAR is a memory BAR.
                                                                 1 = BAR is an I/O BAR. */
        uint32_t typ                   : 2;  /**< [  2:  1](RO/H) BAR type. 0x0 if not implemented or PCCPF_XXX_VSEC_SCTL[EA] is set, else 0x2:
                                                                 0x0 = 32-bit BAR, or BAR not present.
                                                                 0x2 = 64-bit BAR. */
        uint32_t pf                    : 1;  /**< [  3:  3](RO) Prefetchable. */
        uint32_t reserved_4_15         : 12;
        uint32_t lbab                  : 16; /**< [ 31: 16](R/W/H) Lower bits of the BAR 0 base address. See additional BAR related notes in
                                                                 PCCPF_XXX_BAR0U[UBAB]. */
#endif /* Word 0 - End */
    } cn8;
    struct cavm_pccpf_xxx_bar0l_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bar                   : 32; /**< [ 31:  0](RO) Always zero. Enhanced allocation used instead of BARs. */
#else /* Word 0 - Little Endian */
        uint32_t bar                   : 32; /**< [ 31:  0](RO) Always zero. Enhanced allocation used instead of BARs. */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccpf_xxx_bar0l cavm_pccpf_xxx_bar0l_t;

#define CAVM_PCCPF_XXX_BAR0L CAVM_PCCPF_XXX_BAR0L_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_BAR0L_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_BAR0L_FUNC(void)
{
    return 0x10;
}

#define typedef_CAVM_PCCPF_XXX_BAR0L cavm_pccpf_xxx_bar0l_t
#define bustype_CAVM_PCCPF_XXX_BAR0L CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_BAR0L "PCCPF_XXX_BAR0L"
#define busnum_CAVM_PCCPF_XXX_BAR0L 0
#define arguments_CAVM_PCCPF_XXX_BAR0L -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_bar0u
 *
 * PCC PF Base Address 0 Upper Register
 */
union cavm_pccpf_xxx_bar0u
{
    uint32_t u;
    struct cavm_pccpf_xxx_bar0u_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    struct cavm_pccpf_xxx_bar0u_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](R/W/H) Contains the upper 32 bits of the BAR 0 base address. Bits corresponding to address bits
                                                                 less than the size of the BAR are read-as-zero, other bits are read-write only to allow
                                                                 determining the size of the BAR. Hardware has fixed address decoding and does not use this
                                                                 BAR for address decoding. After sizing, for proper software behavior, software must
                                                                 restore the register value, where the proper value may be read from PCCPF_XXX_VSEC_BAR0U,
                                                                 with software writing the node number into the field bits corresponding to address bits
                                                                 \<45:44\>. */
#else /* Word 0 - Little Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](R/W/H) Contains the upper 32 bits of the BAR 0 base address. Bits corresponding to address bits
                                                                 less than the size of the BAR are read-as-zero, other bits are read-write only to allow
                                                                 determining the size of the BAR. Hardware has fixed address decoding and does not use this
                                                                 BAR for address decoding. After sizing, for proper software behavior, software must
                                                                 restore the register value, where the proper value may be read from PCCPF_XXX_VSEC_BAR0U,
                                                                 with software writing the node number into the field bits corresponding to address bits
                                                                 \<45:44\>. */
#endif /* Word 0 - End */
    } cn8;
    struct cavm_pccpf_xxx_bar0u_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bar                   : 32; /**< [ 31:  0](RO) Always zero. Enhanced allocation used instead of BARs. */
#else /* Word 0 - Little Endian */
        uint32_t bar                   : 32; /**< [ 31:  0](RO) Always zero. Enhanced allocation used instead of BARs. */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccpf_xxx_bar0u cavm_pccpf_xxx_bar0u_t;

#define CAVM_PCCPF_XXX_BAR0U CAVM_PCCPF_XXX_BAR0U_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_BAR0U_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_BAR0U_FUNC(void)
{
    return 0x14;
}

#define typedef_CAVM_PCCPF_XXX_BAR0U cavm_pccpf_xxx_bar0u_t
#define bustype_CAVM_PCCPF_XXX_BAR0U CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_BAR0U "PCCPF_XXX_BAR0U"
#define busnum_CAVM_PCCPF_XXX_BAR0U 0
#define arguments_CAVM_PCCPF_XXX_BAR0U -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_bar2l
 *
 * PCC PF Base Address 2 Lower Register
 */
union cavm_pccpf_xxx_bar2l
{
    uint32_t u;
    struct cavm_pccpf_xxx_bar2l_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    struct cavm_pccpf_xxx_bar2l_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lbab                  : 16; /**< [ 31: 16](R/W/H) Lower bits of the BAR 2 base address. See additional BAR related notes in
                                                                 PCCPF_XXX_BAR0U[UBAB]. */
        uint32_t reserved_4_15         : 12;
        uint32_t pf                    : 1;  /**< [  3:  3](RO) Prefetchable. */
        uint32_t typ                   : 2;  /**< [  2:  1](RO/H) BAR type. 0x0 if not implemented or PCCPF_XXX_VSEC_SCTL[EA] is set, else 0x2:
                                                                 0x0 = 32-bit BAR, or BAR not present.
                                                                 0x2 = 64-bit BAR. */
        uint32_t mspc                  : 1;  /**< [  0:  0](RO) Memory space indicator.
                                                                 0 = BAR is a memory BAR.
                                                                 1 = BAR is an I/O BAR. */
#else /* Word 0 - Little Endian */
        uint32_t mspc                  : 1;  /**< [  0:  0](RO) Memory space indicator.
                                                                 0 = BAR is a memory BAR.
                                                                 1 = BAR is an I/O BAR. */
        uint32_t typ                   : 2;  /**< [  2:  1](RO/H) BAR type. 0x0 if not implemented or PCCPF_XXX_VSEC_SCTL[EA] is set, else 0x2:
                                                                 0x0 = 32-bit BAR, or BAR not present.
                                                                 0x2 = 64-bit BAR. */
        uint32_t pf                    : 1;  /**< [  3:  3](RO) Prefetchable. */
        uint32_t reserved_4_15         : 12;
        uint32_t lbab                  : 16; /**< [ 31: 16](R/W/H) Lower bits of the BAR 2 base address. See additional BAR related notes in
                                                                 PCCPF_XXX_BAR0U[UBAB]. */
#endif /* Word 0 - End */
    } cn8;
    struct cavm_pccpf_xxx_bar2l_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bar                   : 32; /**< [ 31:  0](RO) Always zero. Enhanced allocation used instead of BARs. */
#else /* Word 0 - Little Endian */
        uint32_t bar                   : 32; /**< [ 31:  0](RO) Always zero. Enhanced allocation used instead of BARs. */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccpf_xxx_bar2l cavm_pccpf_xxx_bar2l_t;

#define CAVM_PCCPF_XXX_BAR2L CAVM_PCCPF_XXX_BAR2L_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_BAR2L_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_BAR2L_FUNC(void)
{
    return 0x18;
}

#define typedef_CAVM_PCCPF_XXX_BAR2L cavm_pccpf_xxx_bar2l_t
#define bustype_CAVM_PCCPF_XXX_BAR2L CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_BAR2L "PCCPF_XXX_BAR2L"
#define busnum_CAVM_PCCPF_XXX_BAR2L 0
#define arguments_CAVM_PCCPF_XXX_BAR2L -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_bar2u
 *
 * PCC PF Base Address 2 Upper Register
 */
union cavm_pccpf_xxx_bar2u
{
    uint32_t u;
    struct cavm_pccpf_xxx_bar2u_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    struct cavm_pccpf_xxx_bar2u_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](R/W/H) Contains the upper 32 bits of the BAR 2 base address. See additional BAR related notes in
                                                                 PCCPF_XXX_BAR0U[UBAB]. */
#else /* Word 0 - Little Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](R/W/H) Contains the upper 32 bits of the BAR 2 base address. See additional BAR related notes in
                                                                 PCCPF_XXX_BAR0U[UBAB]. */
#endif /* Word 0 - End */
    } cn8;
    struct cavm_pccpf_xxx_bar2u_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bar                   : 32; /**< [ 31:  0](RO) Always zero. Enhanced allocation used instead of BARs. */
#else /* Word 0 - Little Endian */
        uint32_t bar                   : 32; /**< [ 31:  0](RO) Always zero. Enhanced allocation used instead of BARs. */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccpf_xxx_bar2u cavm_pccpf_xxx_bar2u_t;

#define CAVM_PCCPF_XXX_BAR2U CAVM_PCCPF_XXX_BAR2U_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_BAR2U_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_BAR2U_FUNC(void)
{
    return 0x1c;
}

#define typedef_CAVM_PCCPF_XXX_BAR2U cavm_pccpf_xxx_bar2u_t
#define bustype_CAVM_PCCPF_XXX_BAR2U CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_BAR2U "PCCPF_XXX_BAR2U"
#define busnum_CAVM_PCCPF_XXX_BAR2U 0
#define arguments_CAVM_PCCPF_XXX_BAR2U -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_bar4l
 *
 * PCC PF Base Address 4 Lower Register
 */
union cavm_pccpf_xxx_bar4l
{
    uint32_t u;
    struct cavm_pccpf_xxx_bar4l_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    struct cavm_pccpf_xxx_bar4l_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lbab                  : 16; /**< [ 31: 16](R/W/H) Lower bits of the BAR 4 base address. See additional BAR related notes in
                                                                 PCCPF_XXX_BAR0U[UBAB]. */
        uint32_t reserved_4_15         : 12;
        uint32_t pf                    : 1;  /**< [  3:  3](RO) Prefetchable. */
        uint32_t typ                   : 2;  /**< [  2:  1](RO/H) BAR type. 0x0 if not implemented or PCCPF_XXX_VSEC_SCTL[EA] is set, else 0x2:
                                                                 0x0 = 32-bit BAR, or BAR not present.
                                                                 0x2 = 64-bit BAR. */
        uint32_t mspc                  : 1;  /**< [  0:  0](RO) Memory space indicator.
                                                                 0 = BAR is a memory BAR.
                                                                 1 = BAR is an I/O BAR. */
#else /* Word 0 - Little Endian */
        uint32_t mspc                  : 1;  /**< [  0:  0](RO) Memory space indicator.
                                                                 0 = BAR is a memory BAR.
                                                                 1 = BAR is an I/O BAR. */
        uint32_t typ                   : 2;  /**< [  2:  1](RO/H) BAR type. 0x0 if not implemented or PCCPF_XXX_VSEC_SCTL[EA] is set, else 0x2:
                                                                 0x0 = 32-bit BAR, or BAR not present.
                                                                 0x2 = 64-bit BAR. */
        uint32_t pf                    : 1;  /**< [  3:  3](RO) Prefetchable. */
        uint32_t reserved_4_15         : 12;
        uint32_t lbab                  : 16; /**< [ 31: 16](R/W/H) Lower bits of the BAR 4 base address. See additional BAR related notes in
                                                                 PCCPF_XXX_BAR0U[UBAB]. */
#endif /* Word 0 - End */
    } cn8;
    struct cavm_pccpf_xxx_bar4l_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bar                   : 32; /**< [ 31:  0](RO) Always zero. Enhanced allocation used instead of BARs. */
#else /* Word 0 - Little Endian */
        uint32_t bar                   : 32; /**< [ 31:  0](RO) Always zero. Enhanced allocation used instead of BARs. */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccpf_xxx_bar4l cavm_pccpf_xxx_bar4l_t;

#define CAVM_PCCPF_XXX_BAR4L CAVM_PCCPF_XXX_BAR4L_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_BAR4L_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_BAR4L_FUNC(void)
{
    return 0x20;
}

#define typedef_CAVM_PCCPF_XXX_BAR4L cavm_pccpf_xxx_bar4l_t
#define bustype_CAVM_PCCPF_XXX_BAR4L CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_BAR4L "PCCPF_XXX_BAR4L"
#define busnum_CAVM_PCCPF_XXX_BAR4L 0
#define arguments_CAVM_PCCPF_XXX_BAR4L -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_bar4u
 *
 * PCC PF Base Address 4 Upper Register
 */
union cavm_pccpf_xxx_bar4u
{
    uint32_t u;
    struct cavm_pccpf_xxx_bar4u_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    struct cavm_pccpf_xxx_bar4u_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](R/W/H) Contains the upper 32 bits of the BAR 4 base address. See additional BAR related notes in
                                                                 PCCPF_XXX_BAR0U[UBAB]. */
#else /* Word 0 - Little Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](R/W/H) Contains the upper 32 bits of the BAR 4 base address. See additional BAR related notes in
                                                                 PCCPF_XXX_BAR0U[UBAB]. */
#endif /* Word 0 - End */
    } cn8;
    struct cavm_pccpf_xxx_bar4u_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bar                   : 32; /**< [ 31:  0](RO) Always zero. Enhanced allocation used instead of BARs. */
#else /* Word 0 - Little Endian */
        uint32_t bar                   : 32; /**< [ 31:  0](RO) Always zero. Enhanced allocation used instead of BARs. */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccpf_xxx_bar4u cavm_pccpf_xxx_bar4u_t;

#define CAVM_PCCPF_XXX_BAR4U CAVM_PCCPF_XXX_BAR4U_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_BAR4U_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_BAR4U_FUNC(void)
{
    return 0x24;
}

#define typedef_CAVM_PCCPF_XXX_BAR4U cavm_pccpf_xxx_bar4u_t
#define bustype_CAVM_PCCPF_XXX_BAR4U CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_BAR4U "PCCPF_XXX_BAR4U"
#define busnum_CAVM_PCCPF_XXX_BAR4U 0
#define arguments_CAVM_PCCPF_XXX_BAR4U -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_cap_ptr
 *
 * PCC PF Capability Pointer Register
 */
union cavm_pccpf_xxx_cap_ptr
{
    uint32_t u;
    struct cavm_pccpf_xxx_cap_ptr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t cp                    : 8;  /**< [  7:  0](RO) First capability pointer. Points to PCCPF_XXX_E_CAP_HDR. */
#else /* Word 0 - Little Endian */
        uint32_t cp                    : 8;  /**< [  7:  0](RO) First capability pointer. Points to PCCPF_XXX_E_CAP_HDR. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_cap_ptr_s cn; */
};
typedef union cavm_pccpf_xxx_cap_ptr cavm_pccpf_xxx_cap_ptr_t;

#define CAVM_PCCPF_XXX_CAP_PTR CAVM_PCCPF_XXX_CAP_PTR_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_CAP_PTR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_CAP_PTR_FUNC(void)
{
    return 0x34;
}

#define typedef_CAVM_PCCPF_XXX_CAP_PTR cavm_pccpf_xxx_cap_ptr_t
#define bustype_CAVM_PCCPF_XXX_CAP_PTR CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_CAP_PTR "PCCPF_XXX_CAP_PTR"
#define busnum_CAVM_PCCPF_XXX_CAP_PTR 0
#define arguments_CAVM_PCCPF_XXX_CAP_PTR -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_clsize
 *
 * PCC PF Cache Line Size Register
 */
union cavm_pccpf_xxx_clsize
{
    uint32_t u;
    struct cavm_pccpf_xxx_clsize_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bist                  : 8;  /**< [ 31: 24](RO) BIST. */
        uint32_t hdrtype               : 8;  /**< [ 23: 16](RO) Header type. For RSL, 0x80 to indicate a multifunction device, else 0x0. Per the SR-IOV
                                                                 specification, VFs are not indicated as multifunction devices. */
        uint32_t lattim                : 8;  /**< [ 15:  8](RO) Latency timer. */
        uint32_t clsize                : 8;  /**< [  7:  0](RO) Cacheline size. */
#else /* Word 0 - Little Endian */
        uint32_t clsize                : 8;  /**< [  7:  0](RO) Cacheline size. */
        uint32_t lattim                : 8;  /**< [ 15:  8](RO) Latency timer. */
        uint32_t hdrtype               : 8;  /**< [ 23: 16](RO) Header type. For RSL, 0x80 to indicate a multifunction device, else 0x0. Per the SR-IOV
                                                                 specification, VFs are not indicated as multifunction devices. */
        uint32_t bist                  : 8;  /**< [ 31: 24](RO) BIST. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_clsize_s cn; */
};
typedef union cavm_pccpf_xxx_clsize cavm_pccpf_xxx_clsize_t;

#define CAVM_PCCPF_XXX_CLSIZE CAVM_PCCPF_XXX_CLSIZE_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_CLSIZE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_CLSIZE_FUNC(void)
{
    return 0xc;
}

#define typedef_CAVM_PCCPF_XXX_CLSIZE cavm_pccpf_xxx_clsize_t
#define bustype_CAVM_PCCPF_XXX_CLSIZE CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_CLSIZE "PCCPF_XXX_CLSIZE"
#define busnum_CAVM_PCCPF_XXX_CLSIZE 0
#define arguments_CAVM_PCCPF_XXX_CLSIZE -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_cmd
 *
 * PCC PF Command/Status Register
 * This register is reset on a block domain reset or PF function level reset.
 */
union cavm_pccpf_xxx_cmd
{
    uint32_t u;
    struct cavm_pccpf_xxx_cmd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_21_31        : 11;
        uint32_t cl                    : 1;  /**< [ 20: 20](RO) Capabilities list. Indicates presence of an extended capability item. */
        uint32_t reserved_3_19         : 17;
        uint32_t me                    : 1;  /**< [  2:  2](RO) Master enable. */
        uint32_t msae                  : 1;  /**< [  1:  1](RO) Memory space access enable. */
        uint32_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0            : 1;
        uint32_t msae                  : 1;  /**< [  1:  1](RO) Memory space access enable. */
        uint32_t me                    : 1;  /**< [  2:  2](RO) Master enable. */
        uint32_t reserved_3_19         : 17;
        uint32_t cl                    : 1;  /**< [ 20: 20](RO) Capabilities list. Indicates presence of an extended capability item. */
        uint32_t reserved_21_31        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_cmd_s cn8; */
    struct cavm_pccpf_xxx_cmd_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_21_31        : 11;
        uint32_t cl                    : 1;  /**< [ 20: 20](RO) Capabilities list. Indicates presence of an extended capability item. */
        uint32_t reserved_3_19         : 17;
        uint32_t me                    : 1;  /**< [  2:  2](R/W) Bus master enable. If set, function may initiate upstream DMA or MSI-X
                                                                 transactions.

                                                                 If PCCPF_XXX_E_DEV_CAP[FLR] is read-only zero, always set and writes have no
                                                                 effect. Resets to zero and writable otherwise. */
        uint32_t msae                  : 1;  /**< [  1:  1](RO) Memory space access enable. */
        uint32_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0            : 1;
        uint32_t msae                  : 1;  /**< [  1:  1](RO) Memory space access enable. */
        uint32_t me                    : 1;  /**< [  2:  2](R/W) Bus master enable. If set, function may initiate upstream DMA or MSI-X
                                                                 transactions.

                                                                 If PCCPF_XXX_E_DEV_CAP[FLR] is read-only zero, always set and writes have no
                                                                 effect. Resets to zero and writable otherwise. */
        uint32_t reserved_3_19         : 17;
        uint32_t cl                    : 1;  /**< [ 20: 20](RO) Capabilities list. Indicates presence of an extended capability item. */
        uint32_t reserved_21_31        : 11;
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccpf_xxx_cmd cavm_pccpf_xxx_cmd_t;

#define CAVM_PCCPF_XXX_CMD CAVM_PCCPF_XXX_CMD_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_CMD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_CMD_FUNC(void)
{
    return 4;
}

#define typedef_CAVM_PCCPF_XXX_CMD cavm_pccpf_xxx_cmd_t
#define bustype_CAVM_PCCPF_XXX_CMD CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_CMD "PCCPF_XXX_CMD"
#define busnum_CAVM_PCCPF_XXX_CMD 0
#define arguments_CAVM_PCCPF_XXX_CMD -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_e_cap_hdr
 *
 * PCC PF PCI Express Capabilities Register
 * This register is the header of the 64-byte PCIe capability header.
 */
union cavm_pccpf_xxx_e_cap_hdr
{
    uint32_t u;
    struct cavm_pccpf_xxx_e_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t dpt                   : 4;  /**< [ 23: 20](RO) Device/port type. Indicates PCIe endpoint (0x0) for ARI devices (when bus is nonzero) and
                                                                 integrated endpoint (0x9) otherwise. */
        uint32_t pciecv                : 4;  /**< [ 19: 16](RO) PCIe capability version. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO/H) Next capability pointer. If MSI-X is supported, points to
                                                                 PCCPF_XXX_MSIX_CAP_HDR, else if PCCPF_XXX_VSEC_SCTL[EA] is set points to
                                                                 PCCPF_XXX_EA_CAP_HDR, else 0x0. */
        uint32_t pcieid                : 8;  /**< [  7:  0](RO) PCIe capability ID. */
#else /* Word 0 - Little Endian */
        uint32_t pcieid                : 8;  /**< [  7:  0](RO) PCIe capability ID. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO/H) Next capability pointer. If MSI-X is supported, points to
                                                                 PCCPF_XXX_MSIX_CAP_HDR, else if PCCPF_XXX_VSEC_SCTL[EA] is set points to
                                                                 PCCPF_XXX_EA_CAP_HDR, else 0x0. */
        uint32_t pciecv                : 4;  /**< [ 19: 16](RO) PCIe capability version. */
        uint32_t dpt                   : 4;  /**< [ 23: 20](RO) Device/port type. Indicates PCIe endpoint (0x0) for ARI devices (when bus is nonzero) and
                                                                 integrated endpoint (0x9) otherwise. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_e_cap_hdr_s cn8; */
    struct cavm_pccpf_xxx_e_cap_hdr_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t dpt                   : 4;  /**< [ 23: 20](RO) Device/port type. Indicates PCIe endpoint (0x0) for ARI devices (when bus is nonzero) and
                                                                 integrated endpoint (0x9) otherwise. */
        uint32_t pciecv                : 4;  /**< [ 19: 16](RO) PCIe capability version. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO/H) Next capability pointer. If MSI-X is supported, points to
                                                                 PCCPF_XXX_MSIX_CAP_HDR, else points to PCCPF_XXX_EA_CAP_HDR. */
        uint32_t pcieid                : 8;  /**< [  7:  0](RO) PCIe capability ID. */
#else /* Word 0 - Little Endian */
        uint32_t pcieid                : 8;  /**< [  7:  0](RO) PCIe capability ID. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO/H) Next capability pointer. If MSI-X is supported, points to
                                                                 PCCPF_XXX_MSIX_CAP_HDR, else points to PCCPF_XXX_EA_CAP_HDR. */
        uint32_t pciecv                : 4;  /**< [ 19: 16](RO) PCIe capability version. */
        uint32_t dpt                   : 4;  /**< [ 23: 20](RO) Device/port type. Indicates PCIe endpoint (0x0) for ARI devices (when bus is nonzero) and
                                                                 integrated endpoint (0x9) otherwise. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccpf_xxx_e_cap_hdr cavm_pccpf_xxx_e_cap_hdr_t;

#define CAVM_PCCPF_XXX_E_CAP_HDR CAVM_PCCPF_XXX_E_CAP_HDR_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_E_CAP_HDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_E_CAP_HDR_FUNC(void)
{
    return 0x40;
}

#define typedef_CAVM_PCCPF_XXX_E_CAP_HDR cavm_pccpf_xxx_e_cap_hdr_t
#define bustype_CAVM_PCCPF_XXX_E_CAP_HDR CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_E_CAP_HDR "PCCPF_XXX_E_CAP_HDR"
#define busnum_CAVM_PCCPF_XXX_E_CAP_HDR 0
#define arguments_CAVM_PCCPF_XXX_E_CAP_HDR -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_e_dev_cap
 *
 * PCC PF PCI Express Device Capabilities Register
 */
union cavm_pccpf_xxx_e_dev_cap
{
    uint32_t u;
    struct cavm_pccpf_xxx_e_dev_cap_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_29_31        : 3;
        uint32_t flr                   : 1;  /**< [ 28: 28](RO) Function level reset capability. If set, PCCPF_XXX_E_DEV_CTL[BCR_FLR] is
                                                                 implemented.

                                                                 In CNXXXX:
                                                                   0 = PCCPF_XXX_E_DEV_CTL[BCR_FLR] is ignored, PCCPF_XXX_E_DEV_CTL[TRPEND] is
                                                                   always zero, PCCPF_XXX_CMD[ME] is always set, and PCCPF_XXX_SRIOV_CTL[VFE] is
                                                                   always set (for SR-IOV functions).

                                                                   1 = PCCPF_XXX_E_DEV_CTL[BCR_FLR], PCCPF_XXX_E_DEV_CTL[TRPEND],
                                                                   PCCPF_XXX_CMD[ME], and PCCPF_XXX_SRIOV_CTL[VFE] (if applicable) are
                                                                   functional. */
        uint32_t reserved_16_27        : 12;
        uint32_t rber                  : 1;  /**< [ 15: 15](RO) Role-based error reporting. Required to be set by PCIe3.1. */
        uint32_t reserved_0_14         : 15;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_14         : 15;
        uint32_t rber                  : 1;  /**< [ 15: 15](RO) Role-based error reporting. Required to be set by PCIe3.1. */
        uint32_t reserved_16_27        : 12;
        uint32_t flr                   : 1;  /**< [ 28: 28](RO) Function level reset capability. If set, PCCPF_XXX_E_DEV_CTL[BCR_FLR] is
                                                                 implemented.

                                                                 In CNXXXX:
                                                                   0 = PCCPF_XXX_E_DEV_CTL[BCR_FLR] is ignored, PCCPF_XXX_E_DEV_CTL[TRPEND] is
                                                                   always zero, PCCPF_XXX_CMD[ME] is always set, and PCCPF_XXX_SRIOV_CTL[VFE] is
                                                                   always set (for SR-IOV functions).

                                                                   1 = PCCPF_XXX_E_DEV_CTL[BCR_FLR], PCCPF_XXX_E_DEV_CTL[TRPEND],
                                                                   PCCPF_XXX_CMD[ME], and PCCPF_XXX_SRIOV_CTL[VFE] (if applicable) are
                                                                   functional. */
        uint32_t reserved_29_31        : 3;
#endif /* Word 0 - End */
    } s;
    struct cavm_pccpf_xxx_e_dev_cap_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t rber                  : 1;  /**< [ 15: 15](RO) Role-based error reporting. Required to be set by PCIe3.1. */
        uint32_t reserved_0_14         : 15;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_14         : 15;
        uint32_t rber                  : 1;  /**< [ 15: 15](RO) Role-based error reporting. Required to be set by PCIe3.1. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } cn8;
    /* struct cavm_pccpf_xxx_e_dev_cap_s cn9; */
};
typedef union cavm_pccpf_xxx_e_dev_cap cavm_pccpf_xxx_e_dev_cap_t;

#define CAVM_PCCPF_XXX_E_DEV_CAP CAVM_PCCPF_XXX_E_DEV_CAP_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_E_DEV_CAP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_E_DEV_CAP_FUNC(void)
{
    return 0x44;
}

#define typedef_CAVM_PCCPF_XXX_E_DEV_CAP cavm_pccpf_xxx_e_dev_cap_t
#define bustype_CAVM_PCCPF_XXX_E_DEV_CAP CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_E_DEV_CAP "PCCPF_XXX_E_DEV_CAP"
#define busnum_CAVM_PCCPF_XXX_E_DEV_CAP 0
#define arguments_CAVM_PCCPF_XXX_E_DEV_CAP -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_e_dev_ctl
 *
 * PCC PF PCI Express Device Control and Status Register
 * This register is reset on a block domain reset or PF function level reset.
 */
union cavm_pccpf_xxx_e_dev_ctl
{
    uint32_t u;
    struct cavm_pccpf_xxx_e_dev_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_22_31        : 10;
        uint32_t trpend                : 1;  /**< [ 21: 21](RO/H) Transactions pending. If PCCPF_XXX_E_DEV_CAP[FLR] is clear, always 0. */
        uint32_t reserved_20           : 1;
        uint32_t urd                   : 1;  /**< [ 19: 19](RO) Unsupported request detected. Always zero. */
        uint32_t fed                   : 1;  /**< [ 18: 18](R/W1C/H) Fatal error detected. Set when any bit in PCCPF_XXX_AER_UNCOR_STATUS transitions
                                                                 to one while the corresponding bit in PCCPF_XXX_AER_UNCOR_SEVER is set. */
        uint32_t nfed                  : 1;  /**< [ 17: 17](R/W1C/H) Non-fatal error detected. Set when any bit in PCCPF_XXX_AER_UNCOR_STATUS
                                                                 transitions to one while the corresponding bit in PCCPF_XXX_AER_UNCOR_SEVER is
                                                                 clear. */
        uint32_t ced                   : 1;  /**< [ 16: 16](R/W1C/H) Correctable error detected. Set when any bit in PCCPF_XXX_AER_COR_STATUS transitions to one. */
        uint32_t bcr_flr               : 1;  /**< [ 15: 15](R/W1S/H) Initiate function level reset. Writing a one to this bit initiates function level
                                                                 reset if PCCPF_XXX_E_DEV_CAP[FLR] is set, else writes have no effect. This is a
                                                                 self-clearing bit and always reads as zero. */
        uint32_t reserved_4_14         : 11;
        uint32_t urre                  : 1;  /**< [  3:  3](R/W) Unsupported request reporting enable. R/W for PCIe and software compatibility, not
                                                                 used by hardware. */
        uint32_t fere                  : 1;  /**< [  2:  2](R/W) Fatal error reporting enable. R/W for PCIe and software compatibility, not
                                                                 used by hardware. */
        uint32_t nfere                 : 1;  /**< [  1:  1](R/W) Nonfatal error reporting enable. R/W for PCIe and software compatibility, not
                                                                 used by hardware. */
        uint32_t cere                  : 1;  /**< [  0:  0](R/W) Correctable error reporting enable. R/W for PCIe and software compatibility, not
                                                                 used by hardware. */
#else /* Word 0 - Little Endian */
        uint32_t cere                  : 1;  /**< [  0:  0](R/W) Correctable error reporting enable. R/W for PCIe and software compatibility, not
                                                                 used by hardware. */
        uint32_t nfere                 : 1;  /**< [  1:  1](R/W) Nonfatal error reporting enable. R/W for PCIe and software compatibility, not
                                                                 used by hardware. */
        uint32_t fere                  : 1;  /**< [  2:  2](R/W) Fatal error reporting enable. R/W for PCIe and software compatibility, not
                                                                 used by hardware. */
        uint32_t urre                  : 1;  /**< [  3:  3](R/W) Unsupported request reporting enable. R/W for PCIe and software compatibility, not
                                                                 used by hardware. */
        uint32_t reserved_4_14         : 11;
        uint32_t bcr_flr               : 1;  /**< [ 15: 15](R/W1S/H) Initiate function level reset. Writing a one to this bit initiates function level
                                                                 reset if PCCPF_XXX_E_DEV_CAP[FLR] is set, else writes have no effect. This is a
                                                                 self-clearing bit and always reads as zero. */
        uint32_t ced                   : 1;  /**< [ 16: 16](R/W1C/H) Correctable error detected. Set when any bit in PCCPF_XXX_AER_COR_STATUS transitions to one. */
        uint32_t nfed                  : 1;  /**< [ 17: 17](R/W1C/H) Non-fatal error detected. Set when any bit in PCCPF_XXX_AER_UNCOR_STATUS
                                                                 transitions to one while the corresponding bit in PCCPF_XXX_AER_UNCOR_SEVER is
                                                                 clear. */
        uint32_t fed                   : 1;  /**< [ 18: 18](R/W1C/H) Fatal error detected. Set when any bit in PCCPF_XXX_AER_UNCOR_STATUS transitions
                                                                 to one while the corresponding bit in PCCPF_XXX_AER_UNCOR_SEVER is set. */
        uint32_t urd                   : 1;  /**< [ 19: 19](RO) Unsupported request detected. Always zero. */
        uint32_t reserved_20           : 1;
        uint32_t trpend                : 1;  /**< [ 21: 21](RO/H) Transactions pending. If PCCPF_XXX_E_DEV_CAP[FLR] is clear, always 0. */
        uint32_t reserved_22_31        : 10;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_e_dev_ctl_s cn; */
};
typedef union cavm_pccpf_xxx_e_dev_ctl cavm_pccpf_xxx_e_dev_ctl_t;

#define CAVM_PCCPF_XXX_E_DEV_CTL CAVM_PCCPF_XXX_E_DEV_CTL_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_E_DEV_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_E_DEV_CTL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x48;
    __cavm_csr_fatal("PCCPF_XXX_E_DEV_CTL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCPF_XXX_E_DEV_CTL cavm_pccpf_xxx_e_dev_ctl_t
#define bustype_CAVM_PCCPF_XXX_E_DEV_CTL CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_E_DEV_CTL "PCCPF_XXX_E_DEV_CTL"
#define busnum_CAVM_PCCPF_XXX_E_DEV_CTL 0
#define arguments_CAVM_PCCPF_XXX_E_DEV_CTL -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_ea_cap_hdr
 *
 * PCC PF PCI Enhanced Allocation Capabilities Register
 * This register is the header of the variable-sized PCI enhanced allocation capability
 * structure for type 0 devices.
 */
union cavm_pccpf_xxx_ea_cap_hdr
{
    uint32_t u;
    struct cavm_pccpf_xxx_ea_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_22_31        : 10;
        uint32_t num_entries           : 6;  /**< [ 21: 16](RO/H) Number of enhanced entries:
                                                                   0x0 = No nonzero BARs.
                                                                   0x1 = 1 nonzero normal or SR-IOV BARs.
                                                                   0x2 = 2 nonzero normal or SR-IOV BARs.
                                                                   0x3 = 3 nonzero normal or SR-IOV BARs.
                                                                   0x4 = 4 nonzero normal or SR-IOV BARs.

                                                                 CNXXXX never has more than four normal or SR-IOV BARs. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO) Next capability pointer.  No next capability. */
        uint32_t pcieid                : 8;  /**< [  7:  0](RO/H) Enhanced allocation capability ID. */
#else /* Word 0 - Little Endian */
        uint32_t pcieid                : 8;  /**< [  7:  0](RO/H) Enhanced allocation capability ID. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO) Next capability pointer.  No next capability. */
        uint32_t num_entries           : 6;  /**< [ 21: 16](RO/H) Number of enhanced entries:
                                                                   0x0 = No nonzero BARs.
                                                                   0x1 = 1 nonzero normal or SR-IOV BARs.
                                                                   0x2 = 2 nonzero normal or SR-IOV BARs.
                                                                   0x3 = 3 nonzero normal or SR-IOV BARs.
                                                                   0x4 = 4 nonzero normal or SR-IOV BARs.

                                                                 CNXXXX never has more than four normal or SR-IOV BARs. */
        uint32_t reserved_22_31        : 10;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_ea_cap_hdr_s cn8; */
    struct cavm_pccpf_xxx_ea_cap_hdr_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_22_31        : 10;
        uint32_t num_entries           : 6;  /**< [ 21: 16](RO/H) Number of enhanced entries:
                                                                   0x0 = No nonzero BARs.
                                                                   0x1 = 1 nonzero normal or SR-IOV BARs.
                                                                   0x2 = 2 nonzero normal or SR-IOV BARs.
                                                                   0x3 = 3 nonzero normal or SR-IOV BARs.
                                                                   0x4 = 4 nonzero normal or SR-IOV BARs.

                                                                 CNXXXX never has more than four normal or SR-IOV BARs. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO) Next capability pointer.  No next capability. */
        uint32_t pcieid                : 8;  /**< [  7:  0](RO) Enhanced allocation capability ID. */
#else /* Word 0 - Little Endian */
        uint32_t pcieid                : 8;  /**< [  7:  0](RO) Enhanced allocation capability ID. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO) Next capability pointer.  No next capability. */
        uint32_t num_entries           : 6;  /**< [ 21: 16](RO/H) Number of enhanced entries:
                                                                   0x0 = No nonzero BARs.
                                                                   0x1 = 1 nonzero normal or SR-IOV BARs.
                                                                   0x2 = 2 nonzero normal or SR-IOV BARs.
                                                                   0x3 = 3 nonzero normal or SR-IOV BARs.
                                                                   0x4 = 4 nonzero normal or SR-IOV BARs.

                                                                 CNXXXX never has more than four normal or SR-IOV BARs. */
        uint32_t reserved_22_31        : 10;
#endif /* Word 0 - End */
    } cn9;
    /* struct cavm_pccpf_xxx_ea_cap_hdr_cn9 cn96xxp1; */
    struct cavm_pccpf_xxx_ea_cap_hdr_cn96xxp3
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_22_31        : 10;
        uint32_t num_entries           : 6;  /**< [ 21: 16](RO/H) Number of enhanced entries:
                                                                   0x0 = No nonzero BARs.
                                                                   0x1 = 1 nonzero normal or SR-IOV BARs.
                                                                   0x2 = 2 nonzero normal or SR-IOV BARs.
                                                                   0x3 = 3 nonzero normal or SR-IOV BARs.
                                                                   0x4 = 4 nonzero normal or SR-IOV BARs.
                                                                   0x5 = 5 nonzero normal or SR-IOV BARs. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO) Next capability pointer.  No next capability. */
        uint32_t pcieid                : 8;  /**< [  7:  0](RO) Enhanced allocation capability ID. */
#else /* Word 0 - Little Endian */
        uint32_t pcieid                : 8;  /**< [  7:  0](RO) Enhanced allocation capability ID. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO) Next capability pointer.  No next capability. */
        uint32_t num_entries           : 6;  /**< [ 21: 16](RO/H) Number of enhanced entries:
                                                                   0x0 = No nonzero BARs.
                                                                   0x1 = 1 nonzero normal or SR-IOV BARs.
                                                                   0x2 = 2 nonzero normal or SR-IOV BARs.
                                                                   0x3 = 3 nonzero normal or SR-IOV BARs.
                                                                   0x4 = 4 nonzero normal or SR-IOV BARs.
                                                                   0x5 = 5 nonzero normal or SR-IOV BARs. */
        uint32_t reserved_22_31        : 10;
#endif /* Word 0 - End */
    } cn96xxp3;
    /* struct cavm_pccpf_xxx_ea_cap_hdr_cn96xxp3 cn96xxp4; */
    /* struct cavm_pccpf_xxx_ea_cap_hdr_cn96xxp3 cn98xx; */
    /* struct cavm_pccpf_xxx_ea_cap_hdr_cn96xxp3 cnf95xx; */
    /* struct cavm_pccpf_xxx_ea_cap_hdr_cn96xxp3 f95mm; */
    /* struct cavm_pccpf_xxx_ea_cap_hdr_cn96xxp3 f95o; */
    /* struct cavm_pccpf_xxx_ea_cap_hdr_cn96xxp3 loki; */
};
typedef union cavm_pccpf_xxx_ea_cap_hdr cavm_pccpf_xxx_ea_cap_hdr_t;

#define CAVM_PCCPF_XXX_EA_CAP_HDR CAVM_PCCPF_XXX_EA_CAP_HDR_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_EA_CAP_HDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_EA_CAP_HDR_FUNC(void)
{
    return 0x98;
}

#define typedef_CAVM_PCCPF_XXX_EA_CAP_HDR cavm_pccpf_xxx_ea_cap_hdr_t
#define bustype_CAVM_PCCPF_XXX_EA_CAP_HDR CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_EA_CAP_HDR "PCCPF_XXX_EA_CAP_HDR"
#define busnum_CAVM_PCCPF_XXX_EA_CAP_HDR 0
#define arguments_CAVM_PCCPF_XXX_EA_CAP_HDR -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_ea_entry#
 *
 * PCC PF PCI Enhanced Allocation Entry Registers
 * These registers contain up to four sequential enhanced allocation entries. Each
 * entry consists of five sequential 32-bit words described by PCC_EA_ENTRY_S.
 */
union cavm_pccpf_xxx_ea_entryx
{
    uint32_t u;
    struct cavm_pccpf_xxx_ea_entryx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO/H) Entry data.  See PCC_EA_ENTRY_S. */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO/H) Entry data.  See PCC_EA_ENTRY_S. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_ea_entryx_s cn; */
};
typedef union cavm_pccpf_xxx_ea_entryx cavm_pccpf_xxx_ea_entryx_t;

static inline uint64_t CAVM_PCCPF_XXX_EA_ENTRYX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_EA_ENTRYX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN81XX) && (a<=19))
        return 0x9c + 4 * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN83XX) && (a<=24))
        return 0x9c + 4 * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=24))
        return 0x9c + 4 * ((a) & 0x1f);
    __cavm_csr_fatal("PCCPF_XXX_EA_ENTRYX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCPF_XXX_EA_ENTRYX(a) cavm_pccpf_xxx_ea_entryx_t
#define bustype_CAVM_PCCPF_XXX_EA_ENTRYX(a) CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_EA_ENTRYX(a) "PCCPF_XXX_EA_ENTRYX"
#define busnum_CAVM_PCCPF_XXX_EA_ENTRYX(a) (a)
#define arguments_CAVM_PCCPF_XXX_EA_ENTRYX(a) (a),-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_id
 *
 * PCC PF Vendor and Device ID Register
 * This register is the header of the 64-byte PCI type 0 configuration structure.
 */
union cavm_pccpf_xxx_id
{
    uint32_t u;
    struct cavm_pccpf_xxx_id_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t devid                 : 16; /**< [ 31: 16](RO) Device ID. \<15:8\> is PCC_PROD_E::GEN. \<7:0\> enumerated by PCC_DEV_IDL_E. */
        uint32_t vendid                : 16; /**< [ 15:  0](RO) Cavium's vendor ID. Enumerated by PCC_VENDOR_E::CAVIUM. */
#else /* Word 0 - Little Endian */
        uint32_t vendid                : 16; /**< [ 15:  0](RO) Cavium's vendor ID. Enumerated by PCC_VENDOR_E::CAVIUM. */
        uint32_t devid                 : 16; /**< [ 31: 16](RO) Device ID. \<15:8\> is PCC_PROD_E::GEN. \<7:0\> enumerated by PCC_DEV_IDL_E. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_id_s cn8; */
    struct cavm_pccpf_xxx_id_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t devid                 : 16; /**< [ 31: 16](RO/H) Device ID. \<15:8\> is PCC_PROD_E::GEN. \<7:0\> enumerated by PCC_DEV_IDL_E. */
        uint32_t vendid                : 16; /**< [ 15:  0](RO) Cavium's vendor ID. Enumerated by PCC_VENDOR_E::CAVIUM. */
#else /* Word 0 - Little Endian */
        uint32_t vendid                : 16; /**< [ 15:  0](RO) Cavium's vendor ID. Enumerated by PCC_VENDOR_E::CAVIUM. */
        uint32_t devid                 : 16; /**< [ 31: 16](RO/H) Device ID. \<15:8\> is PCC_PROD_E::GEN. \<7:0\> enumerated by PCC_DEV_IDL_E. */
#endif /* Word 0 - End */
    } cn9;
    /* struct cavm_pccpf_xxx_id_cn9 cn96xxp1; */
    struct cavm_pccpf_xxx_id_cn96xxp3
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t devid                 : 16; /**< [ 31: 16](RO/H) Device ID. \<15:8\> is PCC_PROD_E::GEN. \<7:0\> enumerated by PCC_DEV_IDL_E. */
        uint32_t vendid                : 16; /**< [ 15:  0](RO) Marvell (Cavium)'s vendor ID. Enumerated by PCC_VENDOR_E::CAVIUM. */
#else /* Word 0 - Little Endian */
        uint32_t vendid                : 16; /**< [ 15:  0](RO) Marvell (Cavium)'s vendor ID. Enumerated by PCC_VENDOR_E::CAVIUM. */
        uint32_t devid                 : 16; /**< [ 31: 16](RO/H) Device ID. \<15:8\> is PCC_PROD_E::GEN. \<7:0\> enumerated by PCC_DEV_IDL_E. */
#endif /* Word 0 - End */
    } cn96xxp3;
    /* struct cavm_pccpf_xxx_id_cn96xxp3 cn96xxp4; */
    /* struct cavm_pccpf_xxx_id_cn96xxp3 cn98xx; */
    /* struct cavm_pccpf_xxx_id_cn96xxp3 cnf95xx; */
    /* struct cavm_pccpf_xxx_id_cn96xxp3 f95mm; */
    /* struct cavm_pccpf_xxx_id_cn96xxp3 f95o; */
    /* struct cavm_pccpf_xxx_id_cn96xxp3 loki; */
};
typedef union cavm_pccpf_xxx_id cavm_pccpf_xxx_id_t;

#define CAVM_PCCPF_XXX_ID CAVM_PCCPF_XXX_ID_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_ID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_ID_FUNC(void)
{
    return 0;
}

#define typedef_CAVM_PCCPF_XXX_ID cavm_pccpf_xxx_id_t
#define bustype_CAVM_PCCPF_XXX_ID CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_ID "PCCPF_XXX_ID"
#define busnum_CAVM_PCCPF_XXX_ID 0
#define arguments_CAVM_PCCPF_XXX_ID -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_msix_cap_hdr
 *
 * PCC PF MSI-X Capability Header Register
 * This register is the header of the 36-byte PCI MSI-X capability structure.
 *
 * This register is reset on a block domain reset or PF function level reset.
 */
union cavm_pccpf_xxx_msix_cap_hdr
{
    uint32_t u;
    struct cavm_pccpf_xxx_msix_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msixen                : 1;  /**< [ 31: 31](R/W) MSI-X enable.
                                                                 0 = The MSI-X PBAs corresponding to this function are cleared.  Interrupt messages
                                                                 will not be issued.
                                                                 1 = Normal PBA and MSI-X delivery. */
        uint32_t funm                  : 1;  /**< [ 30: 30](R/W) Function mask.
                                                                 0 = Each vectors' mask bit determines whether the vector is masked or not.
                                                                 1 = All vectors associated with the function are masked, regardless of their respective
                                                                 per-vector mask bits.

                                                                 Setting or clearing FUNM has no effect on the state of the per-vector mask bits. */
        uint32_t reserved_27_29        : 3;
        uint32_t msixts                : 11; /**< [ 26: 16](RO) MSI-X table size encoded as (table size - 1). */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO/H) Next capability pointer. If PCCPF_XXX_VSEC_SCTL[EA] is set points to
                                                                 PCCPF_XXX_EA_CAP_HDR, else 0x0. */
        uint32_t msixcid               : 8;  /**< [  7:  0](RO) MSI-X Capability ID. */
#else /* Word 0 - Little Endian */
        uint32_t msixcid               : 8;  /**< [  7:  0](RO) MSI-X Capability ID. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO/H) Next capability pointer. If PCCPF_XXX_VSEC_SCTL[EA] is set points to
                                                                 PCCPF_XXX_EA_CAP_HDR, else 0x0. */
        uint32_t msixts                : 11; /**< [ 26: 16](RO) MSI-X table size encoded as (table size - 1). */
        uint32_t reserved_27_29        : 3;
        uint32_t funm                  : 1;  /**< [ 30: 30](R/W) Function mask.
                                                                 0 = Each vectors' mask bit determines whether the vector is masked or not.
                                                                 1 = All vectors associated with the function are masked, regardless of their respective
                                                                 per-vector mask bits.

                                                                 Setting or clearing FUNM has no effect on the state of the per-vector mask bits. */
        uint32_t msixen                : 1;  /**< [ 31: 31](R/W) MSI-X enable.
                                                                 0 = The MSI-X PBAs corresponding to this function are cleared.  Interrupt messages
                                                                 will not be issued.
                                                                 1 = Normal PBA and MSI-X delivery. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_msix_cap_hdr_s cn8; */
    struct cavm_pccpf_xxx_msix_cap_hdr_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msixen                : 1;  /**< [ 31: 31](R/W) MSI-X enable.
                                                                 0 = The MSI-X PBAs corresponding to this function are cleared. Interrupt messages
                                                                 will not be issued.
                                                                 1 = Normal PBA and MSI-X delivery. See also PCCPF_XXX_CMD[ME]. */
        uint32_t funm                  : 1;  /**< [ 30: 30](R/W) Function mask.
                                                                 0 = Each vectors' mask bit determines whether the vector is masked or not.
                                                                 1 = All vectors associated with the function are masked, regardless of their respective
                                                                 per-vector mask bits.

                                                                 Setting or clearing [FUNM] has no effect on the state of the per-vector mask bits. */
        uint32_t reserved_27_29        : 3;
        uint32_t msixts                : 11; /**< [ 26: 16](RO/H) MSI-X table size encoded as (table size - 1). */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO) Next capability pointer. Points to PCCPF_XXX_EA_CAP_HDR. */
        uint32_t msixcid               : 8;  /**< [  7:  0](RO) MSI-X Capability ID. */
#else /* Word 0 - Little Endian */
        uint32_t msixcid               : 8;  /**< [  7:  0](RO) MSI-X Capability ID. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO) Next capability pointer. Points to PCCPF_XXX_EA_CAP_HDR. */
        uint32_t msixts                : 11; /**< [ 26: 16](RO/H) MSI-X table size encoded as (table size - 1). */
        uint32_t reserved_27_29        : 3;
        uint32_t funm                  : 1;  /**< [ 30: 30](R/W) Function mask.
                                                                 0 = Each vectors' mask bit determines whether the vector is masked or not.
                                                                 1 = All vectors associated with the function are masked, regardless of their respective
                                                                 per-vector mask bits.

                                                                 Setting or clearing [FUNM] has no effect on the state of the per-vector mask bits. */
        uint32_t msixen                : 1;  /**< [ 31: 31](R/W) MSI-X enable.
                                                                 0 = The MSI-X PBAs corresponding to this function are cleared. Interrupt messages
                                                                 will not be issued.
                                                                 1 = Normal PBA and MSI-X delivery. See also PCCPF_XXX_CMD[ME]. */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccpf_xxx_msix_cap_hdr cavm_pccpf_xxx_msix_cap_hdr_t;

#define CAVM_PCCPF_XXX_MSIX_CAP_HDR CAVM_PCCPF_XXX_MSIX_CAP_HDR_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_MSIX_CAP_HDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_MSIX_CAP_HDR_FUNC(void)
{
    return 0x80;
}

#define typedef_CAVM_PCCPF_XXX_MSIX_CAP_HDR cavm_pccpf_xxx_msix_cap_hdr_t
#define bustype_CAVM_PCCPF_XXX_MSIX_CAP_HDR CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_MSIX_CAP_HDR "PCCPF_XXX_MSIX_CAP_HDR"
#define busnum_CAVM_PCCPF_XXX_MSIX_CAP_HDR 0
#define arguments_CAVM_PCCPF_XXX_MSIX_CAP_HDR -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_msix_pba
 *
 * PCC PF MSI-X PBA Offset and BIR Register
 */
union cavm_pccpf_xxx_msix_pba
{
    uint32_t u;
    struct cavm_pccpf_xxx_msix_pba_s
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
    /* struct cavm_pccpf_xxx_msix_pba_s cn8; */
    struct cavm_pccpf_xxx_msix_pba_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msixpoffs             : 29; /**< [ 31:  3](RO) MSI-X PBA offset register. Offset of the MSI-X PBA, as a number of eight-byte words from
                                                                 the base address of the BAR; e.g. 0x1E000 corresponds to a byte offset of 0xF0000. */
        uint32_t msixpbir              : 3;  /**< [  2:  0](RO) MSI-X PBA BAR indicator register (BIR). Indicates which BAR is used to map the MSI-X
                                                                 pending bit array into memory space. Typically 0x4, indicating BAR4H/L. */
#else /* Word 0 - Little Endian */
        uint32_t msixpbir              : 3;  /**< [  2:  0](RO) MSI-X PBA BAR indicator register (BIR). Indicates which BAR is used to map the MSI-X
                                                                 pending bit array into memory space. Typically 0x4, indicating BAR4H/L. */
        uint32_t msixpoffs             : 29; /**< [ 31:  3](RO) MSI-X PBA offset register. Offset of the MSI-X PBA, as a number of eight-byte words from
                                                                 the base address of the BAR; e.g. 0x1E000 corresponds to a byte offset of 0xF0000. */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccpf_xxx_msix_pba cavm_pccpf_xxx_msix_pba_t;

#define CAVM_PCCPF_XXX_MSIX_PBA CAVM_PCCPF_XXX_MSIX_PBA_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_MSIX_PBA_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_MSIX_PBA_FUNC(void)
{
    return 0x88;
}

#define typedef_CAVM_PCCPF_XXX_MSIX_PBA cavm_pccpf_xxx_msix_pba_t
#define bustype_CAVM_PCCPF_XXX_MSIX_PBA CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_MSIX_PBA "PCCPF_XXX_MSIX_PBA"
#define busnum_CAVM_PCCPF_XXX_MSIX_PBA 0
#define arguments_CAVM_PCCPF_XXX_MSIX_PBA -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_msix_table
 *
 * PCC PF MSI-X Table Offset and BIR Register
 */
union cavm_pccpf_xxx_msix_table
{
    uint32_t u;
    struct cavm_pccpf_xxx_msix_table_s
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
    /* struct cavm_pccpf_xxx_msix_table_s cn8; */
    struct cavm_pccpf_xxx_msix_table_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msixtoffs             : 29; /**< [ 31:  3](RO) MSI-X table offset register. Offset of the MSI-X table, as a number of eight-byte
                                                                 words from the base address of the BAR. For most blocks, zero. */
        uint32_t msixtbir              : 3;  /**< [  2:  0](RO) MSI-X table BAR indicator register (BIR). Indicates which BAR is used to map the MSI-X
                                                                 table into memory space. Typically 0x4, indicating BAR4H/L. */
#else /* Word 0 - Little Endian */
        uint32_t msixtbir              : 3;  /**< [  2:  0](RO) MSI-X table BAR indicator register (BIR). Indicates which BAR is used to map the MSI-X
                                                                 table into memory space. Typically 0x4, indicating BAR4H/L. */
        uint32_t msixtoffs             : 29; /**< [ 31:  3](RO) MSI-X table offset register. Offset of the MSI-X table, as a number of eight-byte
                                                                 words from the base address of the BAR. For most blocks, zero. */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccpf_xxx_msix_table cavm_pccpf_xxx_msix_table_t;

#define CAVM_PCCPF_XXX_MSIX_TABLE CAVM_PCCPF_XXX_MSIX_TABLE_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_MSIX_TABLE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_MSIX_TABLE_FUNC(void)
{
    return 0x84;
}

#define typedef_CAVM_PCCPF_XXX_MSIX_TABLE cavm_pccpf_xxx_msix_table_t
#define bustype_CAVM_PCCPF_XXX_MSIX_TABLE CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_MSIX_TABLE "PCCPF_XXX_MSIX_TABLE"
#define busnum_CAVM_PCCPF_XXX_MSIX_TABLE 0
#define arguments_CAVM_PCCPF_XXX_MSIX_TABLE -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_rev
 *
 * PCC PF Class Code/Revision ID Register
 */
union cavm_pccpf_xxx_rev
{
    uint32_t u;
    struct cavm_pccpf_xxx_rev_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bcc                   : 8;  /**< [ 31: 24](RO) Base class code. See PCC_DEV_IDL_E. */
        uint32_t sc                    : 8;  /**< [ 23: 16](RO) Subclass code. See PCC_DEV_IDL_E. */
        uint32_t pi                    : 8;  /**< [ 15:  8](RO) Programming interface. See PCC_DEV_IDL_E. */
        uint32_t rid                   : 8;  /**< [  7:  0](RO/H) Revision ID. Read only version of PCCPF_XXX_VSEC_SCTL[RID]. */
#else /* Word 0 - Little Endian */
        uint32_t rid                   : 8;  /**< [  7:  0](RO/H) Revision ID. Read only version of PCCPF_XXX_VSEC_SCTL[RID]. */
        uint32_t pi                    : 8;  /**< [ 15:  8](RO) Programming interface. See PCC_DEV_IDL_E. */
        uint32_t sc                    : 8;  /**< [ 23: 16](RO) Subclass code. See PCC_DEV_IDL_E. */
        uint32_t bcc                   : 8;  /**< [ 31: 24](RO) Base class code. See PCC_DEV_IDL_E. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_rev_s cn8; */
    struct cavm_pccpf_xxx_rev_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bcc                   : 8;  /**< [ 31: 24](RO/H) Base class code. See PCC_DEV_IDL_E. */
        uint32_t sc                    : 8;  /**< [ 23: 16](RO/H) Subclass code. See PCC_DEV_IDL_E. */
        uint32_t pi                    : 8;  /**< [ 15:  8](RO/H) Programming interface. See PCC_DEV_IDL_E. */
        uint32_t rid                   : 8;  /**< [  7:  0](RO/H) Revision ID. Read only version of PCCPF_XXX_VSEC_SCTL[RID]. */
#else /* Word 0 - Little Endian */
        uint32_t rid                   : 8;  /**< [  7:  0](RO/H) Revision ID. Read only version of PCCPF_XXX_VSEC_SCTL[RID]. */
        uint32_t pi                    : 8;  /**< [ 15:  8](RO/H) Programming interface. See PCC_DEV_IDL_E. */
        uint32_t sc                    : 8;  /**< [ 23: 16](RO/H) Subclass code. See PCC_DEV_IDL_E. */
        uint32_t bcc                   : 8;  /**< [ 31: 24](RO/H) Base class code. See PCC_DEV_IDL_E. */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccpf_xxx_rev cavm_pccpf_xxx_rev_t;

#define CAVM_PCCPF_XXX_REV CAVM_PCCPF_XXX_REV_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_REV_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_REV_FUNC(void)
{
    return 8;
}

#define typedef_CAVM_PCCPF_XXX_REV cavm_pccpf_xxx_rev_t
#define bustype_CAVM_PCCPF_XXX_REV CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_REV "PCCPF_XXX_REV"
#define busnum_CAVM_PCCPF_XXX_REV 0
#define arguments_CAVM_PCCPF_XXX_REV -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_sari_nxt
 *
 * PCC PF ARI Capability Register
 * If this device is on bus 0x0, this ARI header is not present and reads as 0x0.
 */
union cavm_pccpf_xxx_sari_nxt
{
    uint32_t u;
    struct cavm_pccpf_xxx_sari_nxt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t nxtfn                 : 8;  /**< [ 15:  8](RO/H) Next function number. 0x0 except for PCC_DEV_IDL_E::MRML, when it points to the next MFD
                                                                 in the linked list of MFDs underneath the RSL and the value comes from
                                                                 PCCPF_XXX_VSEC_CTL[NXTFN_NS] or PCCPF_XXX_VSEC_SCTL[NXTFN_S] for nonsecure or secure
                                                                 accesses respectively. */
        uint32_t reserved_0_7          : 8;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_7          : 8;
        uint32_t nxtfn                 : 8;  /**< [ 15:  8](RO/H) Next function number. 0x0 except for PCC_DEV_IDL_E::MRML, when it points to the next MFD
                                                                 in the linked list of MFDs underneath the RSL and the value comes from
                                                                 PCCPF_XXX_VSEC_CTL[NXTFN_NS] or PCCPF_XXX_VSEC_SCTL[NXTFN_S] for nonsecure or secure
                                                                 accesses respectively. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_sari_nxt_s cn8; */
    struct cavm_pccpf_xxx_sari_nxt_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t nxtfn                 : 8;  /**< [ 15:  8](RO/H) Next function number. 0x0 except for PCC_DEV_IDL_E::MRML5, when it points to the next MFD
                                                                 in the linked list of MFDs underneath the RSL and the value comes from
                                                                 PCCPF_XXX_VSEC_CTL[NXTFN_NS] or PCCPF_XXX_VSEC_SCTL[NXTFN_S] for nonsecure or secure
                                                                 accesses respectively. */
        uint32_t reserved_0_7          : 8;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_7          : 8;
        uint32_t nxtfn                 : 8;  /**< [ 15:  8](RO/H) Next function number. 0x0 except for PCC_DEV_IDL_E::MRML5, when it points to the next MFD
                                                                 in the linked list of MFDs underneath the RSL and the value comes from
                                                                 PCCPF_XXX_VSEC_CTL[NXTFN_NS] or PCCPF_XXX_VSEC_SCTL[NXTFN_S] for nonsecure or secure
                                                                 accesses respectively. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccpf_xxx_sari_nxt cavm_pccpf_xxx_sari_nxt_t;

#define CAVM_PCCPF_XXX_SARI_NXT CAVM_PCCPF_XXX_SARI_NXT_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_SARI_NXT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_SARI_NXT_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x144;
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x174;
    __cavm_csr_fatal("PCCPF_XXX_SARI_NXT", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCPF_XXX_SARI_NXT cavm_pccpf_xxx_sari_nxt_t
#define bustype_CAVM_PCCPF_XXX_SARI_NXT CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_SARI_NXT "PCCPF_XXX_SARI_NXT"
#define busnum_CAVM_PCCPF_XXX_SARI_NXT 0
#define arguments_CAVM_PCCPF_XXX_SARI_NXT -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_sriov_bar0l
 *
 * PCC PF SR-IOV BAR 0 Lower Register
 */
union cavm_pccpf_xxx_sriov_bar0l
{
    uint32_t u;
    struct cavm_pccpf_xxx_sriov_bar0l_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    struct cavm_pccpf_xxx_sriov_bar0l_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lbab                  : 16; /**< [ 31: 16](R/W/H) Lower bits of the VF BAR 0 base address. See additional BAR related notes in
                                                                 PCCPF_XXX_BAR0U[UBAB]. */
        uint32_t reserved_4_15         : 12;
        uint32_t pf                    : 1;  /**< [  3:  3](RO) Prefetchable. */
        uint32_t typ                   : 2;  /**< [  2:  1](RO/H) BAR type. 0x0 if not implemented or PCCPF_XXX_VSEC_SCTL[EA] is set, else 0x2:
                                                                 0x0 = 32-bit BAR, or BAR not present.
                                                                 0x2 = 64-bit BAR. */
        uint32_t mspc                  : 1;  /**< [  0:  0](RO) Memory Space Indicator.
                                                                 0 = BAR is a memory BAR.
                                                                 1 = BAR is an I/O BAR. */
#else /* Word 0 - Little Endian */
        uint32_t mspc                  : 1;  /**< [  0:  0](RO) Memory Space Indicator.
                                                                 0 = BAR is a memory BAR.
                                                                 1 = BAR is an I/O BAR. */
        uint32_t typ                   : 2;  /**< [  2:  1](RO/H) BAR type. 0x0 if not implemented or PCCPF_XXX_VSEC_SCTL[EA] is set, else 0x2:
                                                                 0x0 = 32-bit BAR, or BAR not present.
                                                                 0x2 = 64-bit BAR. */
        uint32_t pf                    : 1;  /**< [  3:  3](RO) Prefetchable. */
        uint32_t reserved_4_15         : 12;
        uint32_t lbab                  : 16; /**< [ 31: 16](R/W/H) Lower bits of the VF BAR 0 base address. See additional BAR related notes in
                                                                 PCCPF_XXX_BAR0U[UBAB]. */
#endif /* Word 0 - End */
    } cn8;
    /* struct cavm_pccpf_xxx_sriov_bar0l_cn8 cn81xx; */
    struct cavm_pccpf_xxx_sriov_bar0l_cn83xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lbab                  : 16; /**< [ 31: 16](R/W/H) Lower bits of the VF BAR 0 base address. See additional BAR related notes in
                                                                 PCCPF_XXX_BAR0U[UBAB]. */
        uint32_t reserved_4_15         : 12;
        uint32_t pf                    : 1;  /**< [  3:  3](RO) Prefetchable. */
        uint32_t typ                   : 2;  /**< [  2:  1](RO/H) BAR type. 0x0 if not implemented or PCCPF_XXX_VSEC_SCTL[EA] is set, else 0x2:
                                                                 0x0 = 32-bit BAR, or BAR not present.
                                                                 0x2 = 64-bit BAR. */
        uint32_t mspc                  : 1;  /**< [  0:  0](RO) Memory space indicator.
                                                                 0 = BAR is a memory BAR.
                                                                 1 = BAR is an I/O BAR. */
#else /* Word 0 - Little Endian */
        uint32_t mspc                  : 1;  /**< [  0:  0](RO) Memory space indicator.
                                                                 0 = BAR is a memory BAR.
                                                                 1 = BAR is an I/O BAR. */
        uint32_t typ                   : 2;  /**< [  2:  1](RO/H) BAR type. 0x0 if not implemented or PCCPF_XXX_VSEC_SCTL[EA] is set, else 0x2:
                                                                 0x0 = 32-bit BAR, or BAR not present.
                                                                 0x2 = 64-bit BAR. */
        uint32_t pf                    : 1;  /**< [  3:  3](RO) Prefetchable. */
        uint32_t reserved_4_15         : 12;
        uint32_t lbab                  : 16; /**< [ 31: 16](R/W/H) Lower bits of the VF BAR 0 base address. See additional BAR related notes in
                                                                 PCCPF_XXX_BAR0U[UBAB]. */
#endif /* Word 0 - End */
    } cn83xx;
    struct cavm_pccpf_xxx_sriov_bar0l_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bar                   : 32; /**< [ 31:  0](RO) Always zero. Enhanced allocation used instead of BARs. */
#else /* Word 0 - Little Endian */
        uint32_t bar                   : 32; /**< [ 31:  0](RO) Always zero. Enhanced allocation used instead of BARs. */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccpf_xxx_sriov_bar0l cavm_pccpf_xxx_sriov_bar0l_t;

#define CAVM_PCCPF_XXX_SRIOV_BAR0L CAVM_PCCPF_XXX_SRIOV_BAR0L_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_BAR0L_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_BAR0L_FUNC(void)
{
    return 0x1a4;
}

#define typedef_CAVM_PCCPF_XXX_SRIOV_BAR0L cavm_pccpf_xxx_sriov_bar0l_t
#define bustype_CAVM_PCCPF_XXX_SRIOV_BAR0L CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_SRIOV_BAR0L "PCCPF_XXX_SRIOV_BAR0L"
#define busnum_CAVM_PCCPF_XXX_SRIOV_BAR0L 0
#define arguments_CAVM_PCCPF_XXX_SRIOV_BAR0L -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_sriov_bar0u
 *
 * PCC PF SR-IOV BAR 0 Upper Register
 */
union cavm_pccpf_xxx_sriov_bar0u
{
    uint32_t u;
    struct cavm_pccpf_xxx_sriov_bar0u_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    struct cavm_pccpf_xxx_sriov_bar0u_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](R/W/H) Upper bits of the VF BAR 0 base address. See additional BAR related notes in
                                                                 PCCPF_XXX_BAR0U[UBAB]. */
#else /* Word 0 - Little Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](R/W/H) Upper bits of the VF BAR 0 base address. See additional BAR related notes in
                                                                 PCCPF_XXX_BAR0U[UBAB]. */
#endif /* Word 0 - End */
    } cn8;
    struct cavm_pccpf_xxx_sriov_bar0u_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bar                   : 32; /**< [ 31:  0](RO) Always zero. Enhanced allocation used instead of BARs. */
#else /* Word 0 - Little Endian */
        uint32_t bar                   : 32; /**< [ 31:  0](RO) Always zero. Enhanced allocation used instead of BARs. */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccpf_xxx_sriov_bar0u cavm_pccpf_xxx_sriov_bar0u_t;

#define CAVM_PCCPF_XXX_SRIOV_BAR0U CAVM_PCCPF_XXX_SRIOV_BAR0U_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_BAR0U_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_BAR0U_FUNC(void)
{
    return 0x1a8;
}

#define typedef_CAVM_PCCPF_XXX_SRIOV_BAR0U cavm_pccpf_xxx_sriov_bar0u_t
#define bustype_CAVM_PCCPF_XXX_SRIOV_BAR0U CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_SRIOV_BAR0U "PCCPF_XXX_SRIOV_BAR0U"
#define busnum_CAVM_PCCPF_XXX_SRIOV_BAR0U 0
#define arguments_CAVM_PCCPF_XXX_SRIOV_BAR0U -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_sriov_bar2l
 *
 * PCC PF SR-IOV BAR 2 Lower Register
 */
union cavm_pccpf_xxx_sriov_bar2l
{
    uint32_t u;
    struct cavm_pccpf_xxx_sriov_bar2l_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    struct cavm_pccpf_xxx_sriov_bar2l_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lbab                  : 16; /**< [ 31: 16](R/W/H) Lower bits of the VF BAR 2 base address. See additional BAR related notes in
                                                                 PCCPF_XXX_BAR0U[UBAB]. */
        uint32_t reserved_4_15         : 12;
        uint32_t pf                    : 1;  /**< [  3:  3](RO) Prefetchable. */
        uint32_t typ                   : 2;  /**< [  2:  1](RO/H) BAR type. 0x0 if not implemented or PCCPF_XXX_VSEC_SCTL[EA] is set, else 0x2:
                                                                 0x0 = 32-bit BAR, or BAR not present.
                                                                 0x2 = 64-bit BAR. */
        uint32_t mspc                  : 1;  /**< [  0:  0](RO) Memory space indicator.
                                                                 0 = BAR is a memory BAR.
                                                                 1 = BAR is an I/O BAR. */
#else /* Word 0 - Little Endian */
        uint32_t mspc                  : 1;  /**< [  0:  0](RO) Memory space indicator.
                                                                 0 = BAR is a memory BAR.
                                                                 1 = BAR is an I/O BAR. */
        uint32_t typ                   : 2;  /**< [  2:  1](RO/H) BAR type. 0x0 if not implemented or PCCPF_XXX_VSEC_SCTL[EA] is set, else 0x2:
                                                                 0x0 = 32-bit BAR, or BAR not present.
                                                                 0x2 = 64-bit BAR. */
        uint32_t pf                    : 1;  /**< [  3:  3](RO) Prefetchable. */
        uint32_t reserved_4_15         : 12;
        uint32_t lbab                  : 16; /**< [ 31: 16](R/W/H) Lower bits of the VF BAR 2 base address. See additional BAR related notes in
                                                                 PCCPF_XXX_BAR0U[UBAB]. */
#endif /* Word 0 - End */
    } cn8;
    struct cavm_pccpf_xxx_sriov_bar2l_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bar                   : 32; /**< [ 31:  0](RO) Always zero. Enhanced allocation used instead of BARs. */
#else /* Word 0 - Little Endian */
        uint32_t bar                   : 32; /**< [ 31:  0](RO) Always zero. Enhanced allocation used instead of BARs. */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccpf_xxx_sriov_bar2l cavm_pccpf_xxx_sriov_bar2l_t;

#define CAVM_PCCPF_XXX_SRIOV_BAR2L CAVM_PCCPF_XXX_SRIOV_BAR2L_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_BAR2L_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_BAR2L_FUNC(void)
{
    return 0x1ac;
}

#define typedef_CAVM_PCCPF_XXX_SRIOV_BAR2L cavm_pccpf_xxx_sriov_bar2l_t
#define bustype_CAVM_PCCPF_XXX_SRIOV_BAR2L CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_SRIOV_BAR2L "PCCPF_XXX_SRIOV_BAR2L"
#define busnum_CAVM_PCCPF_XXX_SRIOV_BAR2L 0
#define arguments_CAVM_PCCPF_XXX_SRIOV_BAR2L -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_sriov_bar2u
 *
 * PCC PF SR-IOV BAR 2 Upper Register
 */
union cavm_pccpf_xxx_sriov_bar2u
{
    uint32_t u;
    struct cavm_pccpf_xxx_sriov_bar2u_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    struct cavm_pccpf_xxx_sriov_bar2u_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](R/W/H) Upper bits of the VF BAR 2 base address. See additional BAR related notes in
                                                                 PCCPF_XXX_BAR0U[UBAB]. */
#else /* Word 0 - Little Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](R/W/H) Upper bits of the VF BAR 2 base address. See additional BAR related notes in
                                                                 PCCPF_XXX_BAR0U[UBAB]. */
#endif /* Word 0 - End */
    } cn8;
    struct cavm_pccpf_xxx_sriov_bar2u_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bar                   : 32; /**< [ 31:  0](RO) Always zero. Enhanced allocation used instead of BARs. */
#else /* Word 0 - Little Endian */
        uint32_t bar                   : 32; /**< [ 31:  0](RO) Always zero. Enhanced allocation used instead of BARs. */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccpf_xxx_sriov_bar2u cavm_pccpf_xxx_sriov_bar2u_t;

#define CAVM_PCCPF_XXX_SRIOV_BAR2U CAVM_PCCPF_XXX_SRIOV_BAR2U_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_BAR2U_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_BAR2U_FUNC(void)
{
    return 0x1b0;
}

#define typedef_CAVM_PCCPF_XXX_SRIOV_BAR2U cavm_pccpf_xxx_sriov_bar2u_t
#define bustype_CAVM_PCCPF_XXX_SRIOV_BAR2U CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_SRIOV_BAR2U "PCCPF_XXX_SRIOV_BAR2U"
#define busnum_CAVM_PCCPF_XXX_SRIOV_BAR2U 0
#define arguments_CAVM_PCCPF_XXX_SRIOV_BAR2U -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_sriov_bar4l
 *
 * PCC PF SR-IOV BAR 4 Lower Register
 */
union cavm_pccpf_xxx_sriov_bar4l
{
    uint32_t u;
    struct cavm_pccpf_xxx_sriov_bar4l_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    struct cavm_pccpf_xxx_sriov_bar4l_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lbab                  : 16; /**< [ 31: 16](R/W/H) Lower bits of the VF BAR 4 base address. See additional BAR related notes in
                                                                 PCCPF_XXX_BAR0U[UBAB]. */
        uint32_t reserved_4_15         : 12;
        uint32_t pf                    : 1;  /**< [  3:  3](RO) Prefetchable. */
        uint32_t typ                   : 2;  /**< [  2:  1](RO/H) BAR type. 0x0 if not implemented or PCCPF_XXX_VSEC_SCTL[EA] is set, else 0x2:
                                                                 0x0 = 32-bit BAR, or BAR not present.
                                                                 0x2 = 64-bit BAR. */
        uint32_t mspc                  : 1;  /**< [  0:  0](RO) Memory space indicator.
                                                                 0 = BAR is a memory BAR.
                                                                 1 = BAR is an I/O BAR. */
#else /* Word 0 - Little Endian */
        uint32_t mspc                  : 1;  /**< [  0:  0](RO) Memory space indicator.
                                                                 0 = BAR is a memory BAR.
                                                                 1 = BAR is an I/O BAR. */
        uint32_t typ                   : 2;  /**< [  2:  1](RO/H) BAR type. 0x0 if not implemented or PCCPF_XXX_VSEC_SCTL[EA] is set, else 0x2:
                                                                 0x0 = 32-bit BAR, or BAR not present.
                                                                 0x2 = 64-bit BAR. */
        uint32_t pf                    : 1;  /**< [  3:  3](RO) Prefetchable. */
        uint32_t reserved_4_15         : 12;
        uint32_t lbab                  : 16; /**< [ 31: 16](R/W/H) Lower bits of the VF BAR 4 base address. See additional BAR related notes in
                                                                 PCCPF_XXX_BAR0U[UBAB]. */
#endif /* Word 0 - End */
    } cn8;
    struct cavm_pccpf_xxx_sriov_bar4l_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bar                   : 32; /**< [ 31:  0](RO) Always zero. Enhanced allocation used instead of BARs. */
#else /* Word 0 - Little Endian */
        uint32_t bar                   : 32; /**< [ 31:  0](RO) Always zero. Enhanced allocation used instead of BARs. */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccpf_xxx_sriov_bar4l cavm_pccpf_xxx_sriov_bar4l_t;

#define CAVM_PCCPF_XXX_SRIOV_BAR4L CAVM_PCCPF_XXX_SRIOV_BAR4L_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_BAR4L_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_BAR4L_FUNC(void)
{
    return 0x1b4;
}

#define typedef_CAVM_PCCPF_XXX_SRIOV_BAR4L cavm_pccpf_xxx_sriov_bar4l_t
#define bustype_CAVM_PCCPF_XXX_SRIOV_BAR4L CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_SRIOV_BAR4L "PCCPF_XXX_SRIOV_BAR4L"
#define busnum_CAVM_PCCPF_XXX_SRIOV_BAR4L 0
#define arguments_CAVM_PCCPF_XXX_SRIOV_BAR4L -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_sriov_bar4u
 *
 * PCC PF SR-IOV BAR 4 Upper Register
 */
union cavm_pccpf_xxx_sriov_bar4u
{
    uint32_t u;
    struct cavm_pccpf_xxx_sriov_bar4u_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    struct cavm_pccpf_xxx_sriov_bar4u_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](R/W/H) Upper bits of the VF BAR 4 base address. See additional BAR related notes in
                                                                 PCCPF_XXX_BAR0U[UBAB]. */
#else /* Word 0 - Little Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](R/W/H) Upper bits of the VF BAR 4 base address. See additional BAR related notes in
                                                                 PCCPF_XXX_BAR0U[UBAB]. */
#endif /* Word 0 - End */
    } cn8;
    struct cavm_pccpf_xxx_sriov_bar4u_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bar                   : 32; /**< [ 31:  0](RO) Always zero. Enhanced allocation used instead of BARs. */
#else /* Word 0 - Little Endian */
        uint32_t bar                   : 32; /**< [ 31:  0](RO) Always zero. Enhanced allocation used instead of BARs. */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccpf_xxx_sriov_bar4u cavm_pccpf_xxx_sriov_bar4u_t;

#define CAVM_PCCPF_XXX_SRIOV_BAR4U CAVM_PCCPF_XXX_SRIOV_BAR4U_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_BAR4U_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_BAR4U_FUNC(void)
{
    return 0x1b8;
}

#define typedef_CAVM_PCCPF_XXX_SRIOV_BAR4U cavm_pccpf_xxx_sriov_bar4u_t
#define bustype_CAVM_PCCPF_XXX_SRIOV_BAR4U CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_SRIOV_BAR4U "PCCPF_XXX_SRIOV_BAR4U"
#define busnum_CAVM_PCCPF_XXX_SRIOV_BAR4U 0
#define arguments_CAVM_PCCPF_XXX_SRIOV_BAR4U -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_sriov_cap
 *
 * PCC PF SR-IOV Capability Register
 */
union cavm_pccpf_xxx_sriov_cap
{
    uint32_t u;
    struct cavm_pccpf_xxx_sriov_cap_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t vfmimn                : 11; /**< [ 31: 21](RO) VF migration interrupt message number. */
        uint32_t reserved_2_20         : 19;
        uint32_t arichp                : 1;  /**< [  1:  1](RO) ARI capable hierarchy preserved. */
        uint32_t vfmc                  : 1;  /**< [  0:  0](RO) VF migration capable. */
#else /* Word 0 - Little Endian */
        uint32_t vfmc                  : 1;  /**< [  0:  0](RO) VF migration capable. */
        uint32_t arichp                : 1;  /**< [  1:  1](RO) ARI capable hierarchy preserved. */
        uint32_t reserved_2_20         : 19;
        uint32_t vfmimn                : 11; /**< [ 31: 21](RO) VF migration interrupt message number. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_sriov_cap_s cn; */
};
typedef union cavm_pccpf_xxx_sriov_cap cavm_pccpf_xxx_sriov_cap_t;

#define CAVM_PCCPF_XXX_SRIOV_CAP CAVM_PCCPF_XXX_SRIOV_CAP_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_CAP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_CAP_FUNC(void)
{
    return 0x184;
}

#define typedef_CAVM_PCCPF_XXX_SRIOV_CAP cavm_pccpf_xxx_sriov_cap_t
#define bustype_CAVM_PCCPF_XXX_SRIOV_CAP CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_SRIOV_CAP "PCCPF_XXX_SRIOV_CAP"
#define busnum_CAVM_PCCPF_XXX_SRIOV_CAP 0
#define arguments_CAVM_PCCPF_XXX_SRIOV_CAP -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_sriov_cap_hdr
 *
 * PCC PF SR-IOV Capability Header Register
 * This register is the header of the 64-byte PCI SR-IOV capability structure.
 */
union cavm_pccpf_xxx_sriov_cap_hdr
{
    uint32_t u;
    struct cavm_pccpf_xxx_sriov_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO) Next capability offset. None. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO) Capability version. */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO) PCIE extended capability. */
#else /* Word 0 - Little Endian */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO) PCIE extended capability. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO) Capability version. */
        uint32_t nco                   : 12; /**< [ 31: 20](RO) Next capability offset. None. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_sriov_cap_hdr_s cn; */
};
typedef union cavm_pccpf_xxx_sriov_cap_hdr cavm_pccpf_xxx_sriov_cap_hdr_t;

#define CAVM_PCCPF_XXX_SRIOV_CAP_HDR CAVM_PCCPF_XXX_SRIOV_CAP_HDR_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_CAP_HDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_CAP_HDR_FUNC(void)
{
    return 0x180;
}

#define typedef_CAVM_PCCPF_XXX_SRIOV_CAP_HDR cavm_pccpf_xxx_sriov_cap_hdr_t
#define bustype_CAVM_PCCPF_XXX_SRIOV_CAP_HDR CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_SRIOV_CAP_HDR "PCCPF_XXX_SRIOV_CAP_HDR"
#define busnum_CAVM_PCCPF_XXX_SRIOV_CAP_HDR 0
#define arguments_CAVM_PCCPF_XXX_SRIOV_CAP_HDR -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_sriov_ctl
 *
 * PCC PF SR-IOV Control/Status Register
 * This register is reset on a chip domain reset.
 */
union cavm_pccpf_xxx_sriov_ctl
{
    uint32_t u;
    struct cavm_pccpf_xxx_sriov_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t ms                    : 1;  /**< [ 16: 16](RO) VF migration status. */
        uint32_t reserved_5_15         : 11;
        uint32_t ach                   : 1;  /**< [  4:  4](RO) ARI capable hierarchy. */
        uint32_t mse                   : 1;  /**< [  3:  3](RO) VF MSE. Master space enable always on. */
        uint32_t mie                   : 1;  /**< [  2:  2](RO) VF migration interrupt enable. */
        uint32_t me                    : 1;  /**< [  1:  1](RO) VF migration enable. */
        uint32_t vfe                   : 1;  /**< [  0:  0](RO) VF enable. */
#else /* Word 0 - Little Endian */
        uint32_t vfe                   : 1;  /**< [  0:  0](RO) VF enable. */
        uint32_t me                    : 1;  /**< [  1:  1](RO) VF migration enable. */
        uint32_t mie                   : 1;  /**< [  2:  2](RO) VF migration interrupt enable. */
        uint32_t mse                   : 1;  /**< [  3:  3](RO) VF MSE. Master space enable always on. */
        uint32_t ach                   : 1;  /**< [  4:  4](RO) ARI capable hierarchy. */
        uint32_t reserved_5_15         : 11;
        uint32_t ms                    : 1;  /**< [ 16: 16](RO) VF migration status. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_sriov_ctl_s cn8; */
    struct cavm_pccpf_xxx_sriov_ctl_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t ms                    : 1;  /**< [ 16: 16](RO) VF migration status. */
        uint32_t reserved_5_15         : 11;
        uint32_t ach                   : 1;  /**< [  4:  4](RO) ARI capable hierarchy. */
        uint32_t mse                   : 1;  /**< [  3:  3](RO) VF MSE. Master space enable always on. */
        uint32_t mie                   : 1;  /**< [  2:  2](RO) VF migration interrupt enable. */
        uint32_t me                    : 1;  /**< [  1:  1](RO) VF migration enable. */
        uint32_t vfe                   : 1;  /**< [  0:  0](R/W) VF enable. If PCCPF_XXX_E_DEV_CAP[FLR] is clear, always set and writes have no
                                                                 effect. Resets to zero and writable otherwise.

                                                                 When clear, PCCVF_XXX_* CSRs are reset, reads and writes to them are RAO/WI. */
#else /* Word 0 - Little Endian */
        uint32_t vfe                   : 1;  /**< [  0:  0](R/W) VF enable. If PCCPF_XXX_E_DEV_CAP[FLR] is clear, always set and writes have no
                                                                 effect. Resets to zero and writable otherwise.

                                                                 When clear, PCCVF_XXX_* CSRs are reset, reads and writes to them are RAO/WI. */
        uint32_t me                    : 1;  /**< [  1:  1](RO) VF migration enable. */
        uint32_t mie                   : 1;  /**< [  2:  2](RO) VF migration interrupt enable. */
        uint32_t mse                   : 1;  /**< [  3:  3](RO) VF MSE. Master space enable always on. */
        uint32_t ach                   : 1;  /**< [  4:  4](RO) ARI capable hierarchy. */
        uint32_t reserved_5_15         : 11;
        uint32_t ms                    : 1;  /**< [ 16: 16](RO) VF migration status. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccpf_xxx_sriov_ctl cavm_pccpf_xxx_sriov_ctl_t;

#define CAVM_PCCPF_XXX_SRIOV_CTL CAVM_PCCPF_XXX_SRIOV_CTL_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_CTL_FUNC(void)
{
    return 0x188;
}

#define typedef_CAVM_PCCPF_XXX_SRIOV_CTL cavm_pccpf_xxx_sriov_ctl_t
#define bustype_CAVM_PCCPF_XXX_SRIOV_CTL CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_SRIOV_CTL "PCCPF_XXX_SRIOV_CTL"
#define busnum_CAVM_PCCPF_XXX_SRIOV_CTL 0
#define arguments_CAVM_PCCPF_XXX_SRIOV_CTL -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_sriov_dev
 *
 * PCC PF SR-IOV VF Device ID Register
 */
union cavm_pccpf_xxx_sriov_dev
{
    uint32_t u;
    struct cavm_pccpf_xxx_sriov_dev_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t vfdev                 : 16; /**< [ 31: 16](RO) VF device ID. \<15:8\> is PCC_PROD_E::GEN. \<7:0\> enumerated by PCC_DEV_IDL_E.
                                                                 e.g. 0xA033 for RNM_VF. */
        uint32_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_15         : 16;
        uint32_t vfdev                 : 16; /**< [ 31: 16](RO) VF device ID. \<15:8\> is PCC_PROD_E::GEN. \<7:0\> enumerated by PCC_DEV_IDL_E.
                                                                 e.g. 0xA033 for RNM_VF. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_sriov_dev_s cn8; */
    struct cavm_pccpf_xxx_sriov_dev_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t vfdev                 : 16; /**< [ 31: 16](RO/H) VF device ID. \<15:8\> is PCC_PROD_E::GEN. \<7:0\> enumerated by PCC_DEV_IDL_E.
                                                                 e.g. 0xA033 for RNM's VF (PCC_DEV_IDL_E::RNM_VF). */
        uint32_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_15         : 16;
        uint32_t vfdev                 : 16; /**< [ 31: 16](RO/H) VF device ID. \<15:8\> is PCC_PROD_E::GEN. \<7:0\> enumerated by PCC_DEV_IDL_E.
                                                                 e.g. 0xA033 for RNM's VF (PCC_DEV_IDL_E::RNM_VF). */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccpf_xxx_sriov_dev cavm_pccpf_xxx_sriov_dev_t;

#define CAVM_PCCPF_XXX_SRIOV_DEV CAVM_PCCPF_XXX_SRIOV_DEV_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_DEV_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_DEV_FUNC(void)
{
    return 0x198;
}

#define typedef_CAVM_PCCPF_XXX_SRIOV_DEV cavm_pccpf_xxx_sriov_dev_t
#define bustype_CAVM_PCCPF_XXX_SRIOV_DEV CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_SRIOV_DEV "PCCPF_XXX_SRIOV_DEV"
#define busnum_CAVM_PCCPF_XXX_SRIOV_DEV 0
#define arguments_CAVM_PCCPF_XXX_SRIOV_DEV -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_sriov_fo
 *
 * PCC PF SR-IOV First VF Offset/VF Stride Register
 */
union cavm_pccpf_xxx_sriov_fo
{
    uint32_t u;
    struct cavm_pccpf_xxx_sriov_fo_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t vfs                   : 16; /**< [ 31: 16](RO) VF stride. */
        uint32_t fo                    : 16; /**< [ 15:  0](RO) First VF offset. */
#else /* Word 0 - Little Endian */
        uint32_t fo                    : 16; /**< [ 15:  0](RO) First VF offset. */
        uint32_t vfs                   : 16; /**< [ 31: 16](RO) VF stride. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_sriov_fo_s cn; */
};
typedef union cavm_pccpf_xxx_sriov_fo cavm_pccpf_xxx_sriov_fo_t;

#define CAVM_PCCPF_XXX_SRIOV_FO CAVM_PCCPF_XXX_SRIOV_FO_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_FO_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_FO_FUNC(void)
{
    return 0x194;
}

#define typedef_CAVM_PCCPF_XXX_SRIOV_FO cavm_pccpf_xxx_sriov_fo_t
#define bustype_CAVM_PCCPF_XXX_SRIOV_FO CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_SRIOV_FO "PCCPF_XXX_SRIOV_FO"
#define busnum_CAVM_PCCPF_XXX_SRIOV_FO 0
#define arguments_CAVM_PCCPF_XXX_SRIOV_FO -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_sriov_nvf
 *
 * PCC PF SR-IOV Number of VFs/Function Dependency Link Register
 */
union cavm_pccpf_xxx_sriov_nvf
{
    uint32_t u;
    struct cavm_pccpf_xxx_sriov_nvf_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t fdl                   : 8;  /**< [ 23: 16](RO) Function dependency link. Only a single PF 0 exists. */
        uint32_t nvf                   : 16; /**< [ 15:  0](RO) Number of VFs that are visible. */
#else /* Word 0 - Little Endian */
        uint32_t nvf                   : 16; /**< [ 15:  0](RO) Number of VFs that are visible. */
        uint32_t fdl                   : 8;  /**< [ 23: 16](RO) Function dependency link. Only a single PF 0 exists. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_sriov_nvf_s cn8; */
    struct cavm_pccpf_xxx_sriov_nvf_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t fdl                   : 8;  /**< [ 23: 16](RO) Function dependency link. Only a single PF 0 exists. */
        uint32_t nvf                   : 16; /**< [ 15:  0](RO/H) Number of VFs that are visible. */
#else /* Word 0 - Little Endian */
        uint32_t nvf                   : 16; /**< [ 15:  0](RO/H) Number of VFs that are visible. */
        uint32_t fdl                   : 8;  /**< [ 23: 16](RO) Function dependency link. Only a single PF 0 exists. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccpf_xxx_sriov_nvf cavm_pccpf_xxx_sriov_nvf_t;

#define CAVM_PCCPF_XXX_SRIOV_NVF CAVM_PCCPF_XXX_SRIOV_NVF_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_NVF_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_NVF_FUNC(void)
{
    return 0x190;
}

#define typedef_CAVM_PCCPF_XXX_SRIOV_NVF cavm_pccpf_xxx_sriov_nvf_t
#define bustype_CAVM_PCCPF_XXX_SRIOV_NVF CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_SRIOV_NVF "PCCPF_XXX_SRIOV_NVF"
#define busnum_CAVM_PCCPF_XXX_SRIOV_NVF 0
#define arguments_CAVM_PCCPF_XXX_SRIOV_NVF -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_sriov_ps
 *
 * PCC PF SR-IOV System Page Sizes Register
 */
union cavm_pccpf_xxx_sriov_ps
{
    uint32_t u;
    struct cavm_pccpf_xxx_sriov_ps_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ps                    : 32; /**< [ 31:  0](RO) System page size. 1MB, as that is minimum stride between VFs. */
#else /* Word 0 - Little Endian */
        uint32_t ps                    : 32; /**< [ 31:  0](RO) System page size. 1MB, as that is minimum stride between VFs. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_sriov_ps_s cn; */
};
typedef union cavm_pccpf_xxx_sriov_ps cavm_pccpf_xxx_sriov_ps_t;

#define CAVM_PCCPF_XXX_SRIOV_PS CAVM_PCCPF_XXX_SRIOV_PS_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_PS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_PS_FUNC(void)
{
    return 0x1a0;
}

#define typedef_CAVM_PCCPF_XXX_SRIOV_PS cavm_pccpf_xxx_sriov_ps_t
#define bustype_CAVM_PCCPF_XXX_SRIOV_PS CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_SRIOV_PS "PCCPF_XXX_SRIOV_PS"
#define busnum_CAVM_PCCPF_XXX_SRIOV_PS 0
#define arguments_CAVM_PCCPF_XXX_SRIOV_PS -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_sriov_supps
 *
 * PCC PF SR-IOV Supported Page Sizes Register
 */
union cavm_pccpf_xxx_sriov_supps
{
    uint32_t u;
    struct cavm_pccpf_xxx_sriov_supps_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t supps                 : 32; /**< [ 31:  0](RO) Supported page sizes. Indicates required 4K, 8K, 64K, 256K, 1M, 4M. The BAR fixed
                                                                 assignment makes this not useful. */
#else /* Word 0 - Little Endian */
        uint32_t supps                 : 32; /**< [ 31:  0](RO) Supported page sizes. Indicates required 4K, 8K, 64K, 256K, 1M, 4M. The BAR fixed
                                                                 assignment makes this not useful. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_sriov_supps_s cn; */
};
typedef union cavm_pccpf_xxx_sriov_supps cavm_pccpf_xxx_sriov_supps_t;

#define CAVM_PCCPF_XXX_SRIOV_SUPPS CAVM_PCCPF_XXX_SRIOV_SUPPS_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_SUPPS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_SUPPS_FUNC(void)
{
    return 0x19c;
}

#define typedef_CAVM_PCCPF_XXX_SRIOV_SUPPS cavm_pccpf_xxx_sriov_supps_t
#define bustype_CAVM_PCCPF_XXX_SRIOV_SUPPS CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_SRIOV_SUPPS "PCCPF_XXX_SRIOV_SUPPS"
#define busnum_CAVM_PCCPF_XXX_SRIOV_SUPPS 0
#define arguments_CAVM_PCCPF_XXX_SRIOV_SUPPS -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_sriov_vfs
 *
 * PCC PF SR-IOV Initial VFs/Total VFs Register
 */
union cavm_pccpf_xxx_sriov_vfs
{
    uint32_t u;
    struct cavm_pccpf_xxx_sriov_vfs_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t tvf                   : 16; /**< [ 31: 16](RO) Total VFs. */
        uint32_t ivf                   : 16; /**< [ 15:  0](RO) Initial VFs. */
#else /* Word 0 - Little Endian */
        uint32_t ivf                   : 16; /**< [ 15:  0](RO) Initial VFs. */
        uint32_t tvf                   : 16; /**< [ 31: 16](RO) Total VFs. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_sriov_vfs_s cn8; */
    struct cavm_pccpf_xxx_sriov_vfs_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t tvf                   : 16; /**< [ 31: 16](RO/H) Total VFs. */
        uint32_t ivf                   : 16; /**< [ 15:  0](RO/H) Initial VFs. */
#else /* Word 0 - Little Endian */
        uint32_t ivf                   : 16; /**< [ 15:  0](RO/H) Initial VFs. */
        uint32_t tvf                   : 16; /**< [ 31: 16](RO/H) Total VFs. */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccpf_xxx_sriov_vfs cavm_pccpf_xxx_sriov_vfs_t;

#define CAVM_PCCPF_XXX_SRIOV_VFS CAVM_PCCPF_XXX_SRIOV_VFS_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_VFS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_SRIOV_VFS_FUNC(void)
{
    return 0x18c;
}

#define typedef_CAVM_PCCPF_XXX_SRIOV_VFS cavm_pccpf_xxx_sriov_vfs_t
#define bustype_CAVM_PCCPF_XXX_SRIOV_VFS CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_SRIOV_VFS "PCCPF_XXX_SRIOV_VFS"
#define busnum_CAVM_PCCPF_XXX_SRIOV_VFS 0
#define arguments_CAVM_PCCPF_XXX_SRIOV_VFS -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_subid
 *
 * PCC PF Subsystem ID/Subsystem Vendor ID Register
 */
union cavm_pccpf_xxx_subid
{
    uint32_t u;
    struct cavm_pccpf_xxx_subid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ssid                  : 16; /**< [ 31: 16](RO) Device ID. \<15:8\> enumerated by PCC_PROD_E. \<7:0\> enumerated by PCC_DEV_IDL_E. */
        uint32_t ssvid                 : 16; /**< [ 15:  0](RO) Subsystem vendor ID. Cavium = 0x177D. */
#else /* Word 0 - Little Endian */
        uint32_t ssvid                 : 16; /**< [ 15:  0](RO) Subsystem vendor ID. Cavium = 0x177D. */
        uint32_t ssid                  : 16; /**< [ 31: 16](RO) Device ID. \<15:8\> enumerated by PCC_PROD_E. \<7:0\> enumerated by PCC_DEV_IDL_E. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_subid_s cn8; */
    struct cavm_pccpf_xxx_subid_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ssid                  : 16; /**< [ 31: 16](RO) Subsystem ID. \<15:8\> enumerated by PCC_PROD_E. \<7:0\> = 0x0. */
        uint32_t ssvid                 : 16; /**< [ 15:  0](RO) Subsystem vendor ID. Cavium = 0x177D. */
#else /* Word 0 - Little Endian */
        uint32_t ssvid                 : 16; /**< [ 15:  0](RO) Subsystem vendor ID. Cavium = 0x177D. */
        uint32_t ssid                  : 16; /**< [ 31: 16](RO) Subsystem ID. \<15:8\> enumerated by PCC_PROD_E. \<7:0\> = 0x0. */
#endif /* Word 0 - End */
    } cn9;
    /* struct cavm_pccpf_xxx_subid_cn9 cn96xxp1; */
    struct cavm_pccpf_xxx_subid_cn96xxp3
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ssid                  : 16; /**< [ 31: 16](RO) Subsystem ID. \<15:8\> enumerated by PCC_PROD_E. \<7:0\> = 0x0. */
        uint32_t ssvid                 : 16; /**< [ 15:  0](RO) Subsystem vendor ID. Marvell (Cavium) = 0x177D. */
#else /* Word 0 - Little Endian */
        uint32_t ssvid                 : 16; /**< [ 15:  0](RO) Subsystem vendor ID. Marvell (Cavium) = 0x177D. */
        uint32_t ssid                  : 16; /**< [ 31: 16](RO) Subsystem ID. \<15:8\> enumerated by PCC_PROD_E. \<7:0\> = 0x0. */
#endif /* Word 0 - End */
    } cn96xxp3;
    /* struct cavm_pccpf_xxx_subid_cn96xxp3 cn96xxp4; */
    /* struct cavm_pccpf_xxx_subid_cn96xxp3 cn98xx; */
    /* struct cavm_pccpf_xxx_subid_cn96xxp3 cnf95xx; */
    /* struct cavm_pccpf_xxx_subid_cn96xxp3 f95mm; */
    /* struct cavm_pccpf_xxx_subid_cn96xxp3 f95o; */
    /* struct cavm_pccpf_xxx_subid_cn96xxp3 loki; */
};
typedef union cavm_pccpf_xxx_subid cavm_pccpf_xxx_subid_t;

#define CAVM_PCCPF_XXX_SUBID CAVM_PCCPF_XXX_SUBID_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_SUBID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_SUBID_FUNC(void)
{
    return 0x2c;
}

#define typedef_CAVM_PCCPF_XXX_SUBID cavm_pccpf_xxx_subid_t
#define bustype_CAVM_PCCPF_XXX_SUBID CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_SUBID "PCCPF_XXX_SUBID"
#define busnum_CAVM_PCCPF_XXX_SUBID 0
#define arguments_CAVM_PCCPF_XXX_SUBID -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_vsec_bar0l
 *
 * PCC PF Vendor-Specific Address 0 Lower Register
 */
union cavm_pccpf_xxx_vsec_bar0l
{
    uint32_t u;
    struct cavm_pccpf_xxx_vsec_bar0l_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lbab                  : 16; /**< [ 31: 16](RO) Lower bits of the hard-coded BAR 0 base address; the reset value for
                                                                 PCCPF_XXX_BAR0L[LBAB]. */
        uint32_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_15         : 16;
        uint32_t lbab                  : 16; /**< [ 31: 16](RO) Lower bits of the hard-coded BAR 0 base address; the reset value for
                                                                 PCCPF_XXX_BAR0L[LBAB]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_vsec_bar0l_s cn; */
};
typedef union cavm_pccpf_xxx_vsec_bar0l cavm_pccpf_xxx_vsec_bar0l_t;

#define CAVM_PCCPF_XXX_VSEC_BAR0L CAVM_PCCPF_XXX_VSEC_BAR0L_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_VSEC_BAR0L_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_VSEC_BAR0L_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x110;
    __cavm_csr_fatal("PCCPF_XXX_VSEC_BAR0L", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCPF_XXX_VSEC_BAR0L cavm_pccpf_xxx_vsec_bar0l_t
#define bustype_CAVM_PCCPF_XXX_VSEC_BAR0L CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_VSEC_BAR0L "PCCPF_XXX_VSEC_BAR0L"
#define busnum_CAVM_PCCPF_XXX_VSEC_BAR0L 0
#define arguments_CAVM_PCCPF_XXX_VSEC_BAR0L -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_vsec_bar0u
 *
 * PCC PF Vendor-Specific Address 0 Upper Register
 */
union cavm_pccpf_xxx_vsec_bar0u
{
    uint32_t u;
    struct cavm_pccpf_xxx_vsec_bar0u_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](RO) Upper bits of the hard-coded BAR 0 base address; the reset value for
                                                                 PCCPF_XXX_BAR0U[UBAB]. */
#else /* Word 0 - Little Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](RO) Upper bits of the hard-coded BAR 0 base address; the reset value for
                                                                 PCCPF_XXX_BAR0U[UBAB]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_vsec_bar0u_s cn; */
};
typedef union cavm_pccpf_xxx_vsec_bar0u cavm_pccpf_xxx_vsec_bar0u_t;

#define CAVM_PCCPF_XXX_VSEC_BAR0U CAVM_PCCPF_XXX_VSEC_BAR0U_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_VSEC_BAR0U_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_VSEC_BAR0U_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x114;
    __cavm_csr_fatal("PCCPF_XXX_VSEC_BAR0U", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCPF_XXX_VSEC_BAR0U cavm_pccpf_xxx_vsec_bar0u_t
#define bustype_CAVM_PCCPF_XXX_VSEC_BAR0U CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_VSEC_BAR0U "PCCPF_XXX_VSEC_BAR0U"
#define busnum_CAVM_PCCPF_XXX_VSEC_BAR0U 0
#define arguments_CAVM_PCCPF_XXX_VSEC_BAR0U -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_vsec_bar2l
 *
 * PCC PF Vendor-Specific Address 2 Lower Register
 */
union cavm_pccpf_xxx_vsec_bar2l
{
    uint32_t u;
    struct cavm_pccpf_xxx_vsec_bar2l_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lbab                  : 16; /**< [ 31: 16](RO) Lower bits of the hard-coded BAR 2 base address; the reset value for
                                                                 PCCPF_XXX_BAR2L[LBAB]. */
        uint32_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_15         : 16;
        uint32_t lbab                  : 16; /**< [ 31: 16](RO) Lower bits of the hard-coded BAR 2 base address; the reset value for
                                                                 PCCPF_XXX_BAR2L[LBAB]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_vsec_bar2l_s cn; */
};
typedef union cavm_pccpf_xxx_vsec_bar2l cavm_pccpf_xxx_vsec_bar2l_t;

#define CAVM_PCCPF_XXX_VSEC_BAR2L CAVM_PCCPF_XXX_VSEC_BAR2L_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_VSEC_BAR2L_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_VSEC_BAR2L_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x118;
    __cavm_csr_fatal("PCCPF_XXX_VSEC_BAR2L", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCPF_XXX_VSEC_BAR2L cavm_pccpf_xxx_vsec_bar2l_t
#define bustype_CAVM_PCCPF_XXX_VSEC_BAR2L CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_VSEC_BAR2L "PCCPF_XXX_VSEC_BAR2L"
#define busnum_CAVM_PCCPF_XXX_VSEC_BAR2L 0
#define arguments_CAVM_PCCPF_XXX_VSEC_BAR2L -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_vsec_bar2u
 *
 * PCC PF Vendor-Specific Address 2 Upper Register
 */
union cavm_pccpf_xxx_vsec_bar2u
{
    uint32_t u;
    struct cavm_pccpf_xxx_vsec_bar2u_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](RO) Upper bits of the hard-coded BAR 2 base address; the reset value for
                                                                 PCCPF_XXX_BAR2U[UBAB]. */
#else /* Word 0 - Little Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](RO) Upper bits of the hard-coded BAR 2 base address; the reset value for
                                                                 PCCPF_XXX_BAR2U[UBAB]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_vsec_bar2u_s cn; */
};
typedef union cavm_pccpf_xxx_vsec_bar2u cavm_pccpf_xxx_vsec_bar2u_t;

#define CAVM_PCCPF_XXX_VSEC_BAR2U CAVM_PCCPF_XXX_VSEC_BAR2U_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_VSEC_BAR2U_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_VSEC_BAR2U_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x11c;
    __cavm_csr_fatal("PCCPF_XXX_VSEC_BAR2U", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCPF_XXX_VSEC_BAR2U cavm_pccpf_xxx_vsec_bar2u_t
#define bustype_CAVM_PCCPF_XXX_VSEC_BAR2U CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_VSEC_BAR2U "PCCPF_XXX_VSEC_BAR2U"
#define busnum_CAVM_PCCPF_XXX_VSEC_BAR2U 0
#define arguments_CAVM_PCCPF_XXX_VSEC_BAR2U -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_vsec_bar4l
 *
 * PCC PF Vendor-Specific Address 4 Lower Register
 */
union cavm_pccpf_xxx_vsec_bar4l
{
    uint32_t u;
    struct cavm_pccpf_xxx_vsec_bar4l_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lbab                  : 16; /**< [ 31: 16](RO) Lower bits of the hard-coded BAR 4 base address; the reset value for
                                                                 PCCPF_XXX_BAR4L[LBAB]. */
        uint32_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_15         : 16;
        uint32_t lbab                  : 16; /**< [ 31: 16](RO) Lower bits of the hard-coded BAR 4 base address; the reset value for
                                                                 PCCPF_XXX_BAR4L[LBAB]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_vsec_bar4l_s cn; */
};
typedef union cavm_pccpf_xxx_vsec_bar4l cavm_pccpf_xxx_vsec_bar4l_t;

#define CAVM_PCCPF_XXX_VSEC_BAR4L CAVM_PCCPF_XXX_VSEC_BAR4L_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_VSEC_BAR4L_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_VSEC_BAR4L_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x120;
    __cavm_csr_fatal("PCCPF_XXX_VSEC_BAR4L", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCPF_XXX_VSEC_BAR4L cavm_pccpf_xxx_vsec_bar4l_t
#define bustype_CAVM_PCCPF_XXX_VSEC_BAR4L CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_VSEC_BAR4L "PCCPF_XXX_VSEC_BAR4L"
#define busnum_CAVM_PCCPF_XXX_VSEC_BAR4L 0
#define arguments_CAVM_PCCPF_XXX_VSEC_BAR4L -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_vsec_bar4u
 *
 * PCC PF Vendor-Specific Address 4 Upper Register
 */
union cavm_pccpf_xxx_vsec_bar4u
{
    uint32_t u;
    struct cavm_pccpf_xxx_vsec_bar4u_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](RO) Upper bits of the hard-coded BAR 4 base address; the reset value for
                                                                 PCCPF_XXX_BAR4U[UBAB]. */
#else /* Word 0 - Little Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](RO) Upper bits of the hard-coded BAR 4 base address; the reset value for
                                                                 PCCPF_XXX_BAR4U[UBAB]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_vsec_bar4u_s cn; */
};
typedef union cavm_pccpf_xxx_vsec_bar4u cavm_pccpf_xxx_vsec_bar4u_t;

#define CAVM_PCCPF_XXX_VSEC_BAR4U CAVM_PCCPF_XXX_VSEC_BAR4U_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_VSEC_BAR4U_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_VSEC_BAR4U_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x124;
    __cavm_csr_fatal("PCCPF_XXX_VSEC_BAR4U", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCPF_XXX_VSEC_BAR4U cavm_pccpf_xxx_vsec_bar4u_t
#define bustype_CAVM_PCCPF_XXX_VSEC_BAR4U CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_VSEC_BAR4U "PCCPF_XXX_VSEC_BAR4U"
#define busnum_CAVM_PCCPF_XXX_VSEC_BAR4U 0
#define arguments_CAVM_PCCPF_XXX_VSEC_BAR4U -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_vsec_cap_hdr
 *
 * PCC PF Vendor-Specific Capability Header Register
 * This register is the header of the 64-byte {ProductLine} family PF capability
 * structure.
 */
union cavm_pccpf_xxx_vsec_cap_hdr
{
    uint32_t u;
    struct cavm_pccpf_xxx_vsec_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO) Next capability offset. If this device is on a nonzero bus, points to
                                                                 PCCPF_XXX_ARI_CAP_HDR, else 0x0. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO) Capability version. */
        uint32_t vsecid                : 16; /**< [ 15:  0](RO) PCIE extended capability. Indicates vendor-specific capability. */
#else /* Word 0 - Little Endian */
        uint32_t vsecid                : 16; /**< [ 15:  0](RO) PCIE extended capability. Indicates vendor-specific capability. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO) Capability version. */
        uint32_t nco                   : 12; /**< [ 31: 20](RO) Next capability offset. If this device is on a nonzero bus, points to
                                                                 PCCPF_XXX_ARI_CAP_HDR, else 0x0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_vsec_cap_hdr_s cn8; */
    struct cavm_pccpf_xxx_vsec_cap_hdr_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO) Next capability offset. Points to PCCPF_XXX_AER_CAP_HDR. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO) Capability version. */
        uint32_t vsecid                : 16; /**< [ 15:  0](RO) PCIE extended capability. Indicates vendor-specific capability. */
#else /* Word 0 - Little Endian */
        uint32_t vsecid                : 16; /**< [ 15:  0](RO) PCIE extended capability. Indicates vendor-specific capability. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO) Capability version. */
        uint32_t nco                   : 12; /**< [ 31: 20](RO) Next capability offset. Points to PCCPF_XXX_AER_CAP_HDR. */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccpf_xxx_vsec_cap_hdr cavm_pccpf_xxx_vsec_cap_hdr_t;

#define CAVM_PCCPF_XXX_VSEC_CAP_HDR CAVM_PCCPF_XXX_VSEC_CAP_HDR_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_VSEC_CAP_HDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_VSEC_CAP_HDR_FUNC(void)
{
    return 0x100;
}

#define typedef_CAVM_PCCPF_XXX_VSEC_CAP_HDR cavm_pccpf_xxx_vsec_cap_hdr_t
#define bustype_CAVM_PCCPF_XXX_VSEC_CAP_HDR CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_VSEC_CAP_HDR "PCCPF_XXX_VSEC_CAP_HDR"
#define busnum_CAVM_PCCPF_XXX_VSEC_CAP_HDR 0
#define arguments_CAVM_PCCPF_XXX_VSEC_CAP_HDR -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_vsec_ctl
 *
 * PCC PF Vendor-Specific Control Register
 * This register is reset on a chip domain reset.
 */
union cavm_pccpf_xxx_vsec_ctl
{
    uint32_t u;
    struct cavm_pccpf_xxx_vsec_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nxtfn_ns              : 8;  /**< [ 31: 24](R/W) For nonsecure accesses, the value to be presented in PCCPF_XXX_(S)ARI_NXT[NXTFN]
                                                                 indicating the next valid function number for this device.
                                                                 Must be kept as 0x0 for non-MRML PCC devices. */
        uint32_t reserved_12_23        : 12;
        uint32_t cor_intn              : 1;  /**< [ 11: 11](R/W1S/H) Corrected internal error. Writing a one to this bit sets
                                                                 PCCPF_XXX_AER_COR_STATUS[COR_INTN].
                                                                 This is a self-clearing bit and always reads as zero. */
        uint32_t adv_nfat              : 1;  /**< [ 10: 10](R/W1S/H) Advisory non-fatal error. Writing a one to this bit sets
                                                                 PCCPF_XXX_AER_COR_STATUS[ADV_NFAT].
                                                                 This is a self-clearing bit and always reads as zero. */
        uint32_t uncor_intn            : 1;  /**< [  9:  9](R/W1S/H) Poisoned TLP received. Writing a one to this bit sets
                                                                 PCCPF_XXX_AER_UNCOR_STATUS[UNCOR_INTN]. This is a self-clearing bit and always
                                                                 reads as zero. */
        uint32_t poison_tlp            : 1;  /**< [  8:  8](R/W1S/H) Poisoned TLP received. Writing a one to this bit sets
                                                                 PCCPF_XXX_AER_UNCOR_STATUS[POISON_TLP]. This is a self-clearing bit and always
                                                                 reads as zero. */
        uint32_t inst_num              : 8;  /**< [  7:  0](RO) Instance number. For blocks with multiple instances, indicates which instance number,
                                                                 otherwise 0x0; may be used to form Linux device numbers. For example for UART(1) is 0x1. */
#else /* Word 0 - Little Endian */
        uint32_t inst_num              : 8;  /**< [  7:  0](RO) Instance number. For blocks with multiple instances, indicates which instance number,
                                                                 otherwise 0x0; may be used to form Linux device numbers. For example for UART(1) is 0x1. */
        uint32_t poison_tlp            : 1;  /**< [  8:  8](R/W1S/H) Poisoned TLP received. Writing a one to this bit sets
                                                                 PCCPF_XXX_AER_UNCOR_STATUS[POISON_TLP]. This is a self-clearing bit and always
                                                                 reads as zero. */
        uint32_t uncor_intn            : 1;  /**< [  9:  9](R/W1S/H) Poisoned TLP received. Writing a one to this bit sets
                                                                 PCCPF_XXX_AER_UNCOR_STATUS[UNCOR_INTN]. This is a self-clearing bit and always
                                                                 reads as zero. */
        uint32_t adv_nfat              : 1;  /**< [ 10: 10](R/W1S/H) Advisory non-fatal error. Writing a one to this bit sets
                                                                 PCCPF_XXX_AER_COR_STATUS[ADV_NFAT].
                                                                 This is a self-clearing bit and always reads as zero. */
        uint32_t cor_intn              : 1;  /**< [ 11: 11](R/W1S/H) Corrected internal error. Writing a one to this bit sets
                                                                 PCCPF_XXX_AER_COR_STATUS[COR_INTN].
                                                                 This is a self-clearing bit and always reads as zero. */
        uint32_t reserved_12_23        : 12;
        uint32_t nxtfn_ns              : 8;  /**< [ 31: 24](R/W) For nonsecure accesses, the value to be presented in PCCPF_XXX_(S)ARI_NXT[NXTFN]
                                                                 indicating the next valid function number for this device.
                                                                 Must be kept as 0x0 for non-MRML PCC devices. */
#endif /* Word 0 - End */
    } s;
    struct cavm_pccpf_xxx_vsec_ctl_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nxtfn_ns              : 8;  /**< [ 31: 24](R/W) For nonsecure accesses, the value to be presented in PCCPF_XXX_(S)ARI_NXT[NXTFN]
                                                                 indicating the next valid function number for this device.
                                                                 Must be kept as 0x0 for non-MRML PCC devices. */
        uint32_t reserved_8_23         : 16;
        uint32_t inst_num              : 8;  /**< [  7:  0](RO) Instance number. For blocks with multiple instances, indicates which instance number,
                                                                 otherwise 0x0; may be used to form Linux device numbers. For example for UART(1) is 0x1. */
#else /* Word 0 - Little Endian */
        uint32_t inst_num              : 8;  /**< [  7:  0](RO) Instance number. For blocks with multiple instances, indicates which instance number,
                                                                 otherwise 0x0; may be used to form Linux device numbers. For example for UART(1) is 0x1. */
        uint32_t reserved_8_23         : 16;
        uint32_t nxtfn_ns              : 8;  /**< [ 31: 24](R/W) For nonsecure accesses, the value to be presented in PCCPF_XXX_(S)ARI_NXT[NXTFN]
                                                                 indicating the next valid function number for this device.
                                                                 Must be kept as 0x0 for non-MRML PCC devices. */
#endif /* Word 0 - End */
    } cn8;
    /* struct cavm_pccpf_xxx_vsec_ctl_s cn9; */
};
typedef union cavm_pccpf_xxx_vsec_ctl cavm_pccpf_xxx_vsec_ctl_t;

#define CAVM_PCCPF_XXX_VSEC_CTL CAVM_PCCPF_XXX_VSEC_CTL_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_VSEC_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_VSEC_CTL_FUNC(void)
{
    return 0x108;
}

#define typedef_CAVM_PCCPF_XXX_VSEC_CTL cavm_pccpf_xxx_vsec_ctl_t
#define bustype_CAVM_PCCPF_XXX_VSEC_CTL CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_VSEC_CTL "PCCPF_XXX_VSEC_CTL"
#define busnum_CAVM_PCCPF_XXX_VSEC_CTL 0
#define arguments_CAVM_PCCPF_XXX_VSEC_CTL -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_vsec_id
 *
 * PCC PF Vendor-Specific Identification Register
 */
union cavm_pccpf_xxx_vsec_id
{
    uint32_t u;
    struct cavm_pccpf_xxx_vsec_id_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t len                   : 12; /**< [ 31: 20](RO) Number of bytes in the entire VSEC structure including PCCPF_XXX_VSEC_CAP_HDR. */
        uint32_t rev                   : 4;  /**< [ 19: 16](RO) Vendor-specific revision. */
        uint32_t id                    : 16; /**< [ 15:  0](RO) Vendor-specific ID. Indicates the {ProductLine} family VSEC ID. */
#else /* Word 0 - Little Endian */
        uint32_t id                    : 16; /**< [ 15:  0](RO) Vendor-specific ID. Indicates the {ProductLine} family VSEC ID. */
        uint32_t rev                   : 4;  /**< [ 19: 16](RO) Vendor-specific revision. */
        uint32_t len                   : 12; /**< [ 31: 20](RO) Number of bytes in the entire VSEC structure including PCCPF_XXX_VSEC_CAP_HDR. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_vsec_id_s cn8; */
    struct cavm_pccpf_xxx_vsec_id_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t len                   : 12; /**< [ 31: 20](RO) Number of bytes in the entire VSEC structure including PCCPF_XXX_VSEC_CAP_HDR. */
        uint32_t rev                   : 4;  /**< [ 19: 16](RO) Vendor-specific revision. */
        uint32_t id                    : 16; /**< [ 15:  0](RO) Vendor-specific ID. Indicates the {ProductLine} family PF VSEC ID.
                                                                 Enumerated by PCC_VSECID_E. */
#else /* Word 0 - Little Endian */
        uint32_t id                    : 16; /**< [ 15:  0](RO) Vendor-specific ID. Indicates the {ProductLine} family PF VSEC ID.
                                                                 Enumerated by PCC_VSECID_E. */
        uint32_t rev                   : 4;  /**< [ 19: 16](RO) Vendor-specific revision. */
        uint32_t len                   : 12; /**< [ 31: 20](RO) Number of bytes in the entire VSEC structure including PCCPF_XXX_VSEC_CAP_HDR. */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_pccpf_xxx_vsec_id cavm_pccpf_xxx_vsec_id_t;

#define CAVM_PCCPF_XXX_VSEC_ID CAVM_PCCPF_XXX_VSEC_ID_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_VSEC_ID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_VSEC_ID_FUNC(void)
{
    return 0x104;
}

#define typedef_CAVM_PCCPF_XXX_VSEC_ID cavm_pccpf_xxx_vsec_id_t
#define bustype_CAVM_PCCPF_XXX_VSEC_ID CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_VSEC_ID "PCCPF_XXX_VSEC_ID"
#define busnum_CAVM_PCCPF_XXX_VSEC_ID 0
#define arguments_CAVM_PCCPF_XXX_VSEC_ID -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_vsec_sctl
 *
 * PCC PF Vendor-Specific Secure Control Register
 * This register is reset on a chip domain reset.
 */
union cavm_pccpf_xxx_vsec_sctl
{
    uint32_t u;
    struct cavm_pccpf_xxx_vsec_sctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nxtfn_s               : 8;  /**< [ 31: 24](SR/W) For secure accesses, the value to be presented in PCCPF_XXX_(S)ARI_NXT[NXTFN] indicating
                                                                 the next valid function number for this device. Must be 0x0 for non-MRML PCC
                                                                 devices. */
        uint32_t rid                   : 8;  /**< [ 23: 16](SR/W) Revision ID. R/W version of the value to be presented in PCCPF_XXX_REV[RID]. */
        uint32_t msix_sec_phys         : 1;  /**< [ 15: 15](SR/W) MSI-X secure physical:
                                                                 _ 0 = Any MSI-X vectors with SECVEC = 1 use the same physical setting as
                                                                 nonsecure vectors, i.e. [MSIX_PHYS].
                                                                 _ 1 = Any MSI-X vectors with SECVEC = 1 are considered physical, regardless
                                                                 of [MSIX_PHYS]. */
        uint32_t reserved_12_14        : 3;
        uint32_t gia_timeout           : 6;  /**< [ 11:  6](SR/W) GIA timeout (2^[GIA_TIMEOUT] clock cycles). Timeout for MSI-X commits. When zero, wait
                                                                 for commits is disabled.
                                                                 For RVU, hardware uses RVU PF0's [GIA_TIMEOUT]. */
        uint32_t node                  : 2;  /**< [  5:  4](SR/W/H) Node number. */
        uint32_t ea                    : 1;  /**< [  3:  3](SR/W) Enable PCI enhanced allocation.

                                                                 0 = Addresses are discovered using standard BARs, however while the BARs are
                                                                 writable the value is ignored.  PCCPF_XXX_EA_ENTRY() still indicates the BARs
                                                                 but software will not read them as PCCPF_XXX_EA_CAP_HDR is not linked into the
                                                                 capabilities list (see PCCPF_XXX_E_CAP_HDR[NCP], PCCPF_XXX_MSIX_CAP_HDR[NCP]).

                                                                 1 = Addresses are discovered using enhanced allocation and PCCPF_XXX_EA_ENTRY().
                                                                 Standard BARs are read-only zero (PCCPF_XXX_BAR0L, PCCPF_XXX_BAR0U,
                                                                 PCCPF_XXX_BAR2L, PCCPF_XXX_BAR2U, PCCPF_XXX_BAR4L, PCCPF_XXX_BAR4U,
                                                                 PCCPF_XXX_SRIOV_BAR0L, PCCPF_XXX_SRIOV_BAR0U, PCCPF_XXX_SRIOV_BAR2L,
                                                                 PCCPF_XXX_SRIOV_BAR2U, PCCPF_XXX_SRIOV_BAR4L, PCCPF_XXX_SRIOV_BAR4U). */
        uint32_t reserved_2            : 1;
        uint32_t msix_sec              : 1;  /**< [  1:  1](SR/W) All MSI-X interrupts are secure. This is equivalent to setting the per-vector secure bit
                                                                 (e.g. GTI_MSIX_VEC()_ADDR[SECVEC]) for all vectors in the block. */
        uint32_t msix_phys             : 1;  /**< [  0:  0](SR/W) MSI-X interrupts are physical.
                                                                 0 = MSI-X interrupt vector addresses are standard virtual addresses and subject to SMMU
                                                                 address translation.
                                                                 1 = MSI-X interrupt vector addresses are considered physical addresses and PCC MSI-X
                                                                 interrupt delivery will bypass the SMMU. */
#else /* Word 0 - Little Endian */
        uint32_t msix_phys             : 1;  /**< [  0:  0](SR/W) MSI-X interrupts are physical.
                                                                 0 = MSI-X interrupt vector addresses are standard virtual addresses and subject to SMMU
                                                                 address translation.
                                                                 1 = MSI-X interrupt vector addresses are considered physical addresses and PCC MSI-X
                                                                 interrupt delivery will bypass the SMMU. */
        uint32_t msix_sec              : 1;  /**< [  1:  1](SR/W) All MSI-X interrupts are secure. This is equivalent to setting the per-vector secure bit
                                                                 (e.g. GTI_MSIX_VEC()_ADDR[SECVEC]) for all vectors in the block. */
        uint32_t reserved_2            : 1;
        uint32_t ea                    : 1;  /**< [  3:  3](SR/W) Enable PCI enhanced allocation.

                                                                 0 = Addresses are discovered using standard BARs, however while the BARs are
                                                                 writable the value is ignored.  PCCPF_XXX_EA_ENTRY() still indicates the BARs
                                                                 but software will not read them as PCCPF_XXX_EA_CAP_HDR is not linked into the
                                                                 capabilities list (see PCCPF_XXX_E_CAP_HDR[NCP], PCCPF_XXX_MSIX_CAP_HDR[NCP]).

                                                                 1 = Addresses are discovered using enhanced allocation and PCCPF_XXX_EA_ENTRY().
                                                                 Standard BARs are read-only zero (PCCPF_XXX_BAR0L, PCCPF_XXX_BAR0U,
                                                                 PCCPF_XXX_BAR2L, PCCPF_XXX_BAR2U, PCCPF_XXX_BAR4L, PCCPF_XXX_BAR4U,
                                                                 PCCPF_XXX_SRIOV_BAR0L, PCCPF_XXX_SRIOV_BAR0U, PCCPF_XXX_SRIOV_BAR2L,
                                                                 PCCPF_XXX_SRIOV_BAR2U, PCCPF_XXX_SRIOV_BAR4L, PCCPF_XXX_SRIOV_BAR4U). */
        uint32_t node                  : 2;  /**< [  5:  4](SR/W/H) Node number. */
        uint32_t gia_timeout           : 6;  /**< [ 11:  6](SR/W) GIA timeout (2^[GIA_TIMEOUT] clock cycles). Timeout for MSI-X commits. When zero, wait
                                                                 for commits is disabled.
                                                                 For RVU, hardware uses RVU PF0's [GIA_TIMEOUT]. */
        uint32_t reserved_12_14        : 3;
        uint32_t msix_sec_phys         : 1;  /**< [ 15: 15](SR/W) MSI-X secure physical:
                                                                 _ 0 = Any MSI-X vectors with SECVEC = 1 use the same physical setting as
                                                                 nonsecure vectors, i.e. [MSIX_PHYS].
                                                                 _ 1 = Any MSI-X vectors with SECVEC = 1 are considered physical, regardless
                                                                 of [MSIX_PHYS]. */
        uint32_t rid                   : 8;  /**< [ 23: 16](SR/W) Revision ID. R/W version of the value to be presented in PCCPF_XXX_REV[RID]. */
        uint32_t nxtfn_s               : 8;  /**< [ 31: 24](SR/W) For secure accesses, the value to be presented in PCCPF_XXX_(S)ARI_NXT[NXTFN] indicating
                                                                 the next valid function number for this device. Must be 0x0 for non-MRML PCC
                                                                 devices. */
#endif /* Word 0 - End */
    } s;
    struct cavm_pccpf_xxx_vsec_sctl_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nxtfn_s               : 8;  /**< [ 31: 24](SR/W) For secure accesses, the value to be presented in PCCPF_XXX_(S)ARI_NXT[NXTFN] indicating
                                                                 the next valid function number for this device. Must be 0x0 for non-MRML PCC
                                                                 devices. */
        uint32_t rid                   : 8;  /**< [ 23: 16](SR/W) Revision ID. R/W version of the value to be presented in PCCPF_XXX_REV[RID]. */
        uint32_t reserved_6_15         : 10;
        uint32_t node                  : 2;  /**< [  5:  4](SR/W/H) Node number. */
        uint32_t ea                    : 1;  /**< [  3:  3](SR/W) Enable PCI enhanced allocation.

                                                                 0 = Addresses are discovered using standard BARs, however while the BARs are
                                                                 writable the value is ignored.  PCCPF_XXX_EA_ENTRY() still indicates the BARs
                                                                 but software will not read them as PCCPF_XXX_EA_CAP_HDR is not linked into the
                                                                 capabilities list (see PCCPF_XXX_E_CAP_HDR[NCP], PCCPF_XXX_MSIX_CAP_HDR[NCP]).

                                                                 1 = Addresses are discovered using enhanced allocation and PCCPF_XXX_EA_ENTRY().
                                                                 Standard BARs are read-only zero (PCCPF_XXX_BAR0L, PCCPF_XXX_BAR0U,
                                                                 PCCPF_XXX_BAR2L, PCCPF_XXX_BAR2U, PCCPF_XXX_BAR4L, PCCPF_XXX_BAR4U,
                                                                 PCCPF_XXX_SRIOV_BAR0L, PCCPF_XXX_SRIOV_BAR0U, PCCPF_XXX_SRIOV_BAR2L,
                                                                 PCCPF_XXX_SRIOV_BAR2U, PCCPF_XXX_SRIOV_BAR4L, PCCPF_XXX_SRIOV_BAR4U). */
        uint32_t bcst_rsp              : 1;  /**< [  2:  2](SR/W) Reserved, must be 0. */
        uint32_t msix_sec              : 1;  /**< [  1:  1](SR/W) All MSI-X interrupts are secure. This is equivalent to setting the per-vector secure bit
                                                                 (e.g. GTI_MSIX_VEC()_ADDR[SECVEC]) for all vectors in the block. */
        uint32_t msix_phys             : 1;  /**< [  0:  0](SR/W) MSI-X interrupts are physical.
                                                                 0 = MSI-X interrupt vector addresses are standard virtual addresses and subject to SMMU
                                                                 address translation.
                                                                 1 = MSI-X interrupt vector addresses are considered physical addresses and PCC MSI-X
                                                                 interrupt delivery will bypass the SMMU. */
#else /* Word 0 - Little Endian */
        uint32_t msix_phys             : 1;  /**< [  0:  0](SR/W) MSI-X interrupts are physical.
                                                                 0 = MSI-X interrupt vector addresses are standard virtual addresses and subject to SMMU
                                                                 address translation.
                                                                 1 = MSI-X interrupt vector addresses are considered physical addresses and PCC MSI-X
                                                                 interrupt delivery will bypass the SMMU. */
        uint32_t msix_sec              : 1;  /**< [  1:  1](SR/W) All MSI-X interrupts are secure. This is equivalent to setting the per-vector secure bit
                                                                 (e.g. GTI_MSIX_VEC()_ADDR[SECVEC]) for all vectors in the block. */
        uint32_t bcst_rsp              : 1;  /**< [  2:  2](SR/W) Reserved, must be 0. */
        uint32_t ea                    : 1;  /**< [  3:  3](SR/W) Enable PCI enhanced allocation.

                                                                 0 = Addresses are discovered using standard BARs, however while the BARs are
                                                                 writable the value is ignored.  PCCPF_XXX_EA_ENTRY() still indicates the BARs
                                                                 but software will not read them as PCCPF_XXX_EA_CAP_HDR is not linked into the
                                                                 capabilities list (see PCCPF_XXX_E_CAP_HDR[NCP], PCCPF_XXX_MSIX_CAP_HDR[NCP]).

                                                                 1 = Addresses are discovered using enhanced allocation and PCCPF_XXX_EA_ENTRY().
                                                                 Standard BARs are read-only zero (PCCPF_XXX_BAR0L, PCCPF_XXX_BAR0U,
                                                                 PCCPF_XXX_BAR2L, PCCPF_XXX_BAR2U, PCCPF_XXX_BAR4L, PCCPF_XXX_BAR4U,
                                                                 PCCPF_XXX_SRIOV_BAR0L, PCCPF_XXX_SRIOV_BAR0U, PCCPF_XXX_SRIOV_BAR2L,
                                                                 PCCPF_XXX_SRIOV_BAR2U, PCCPF_XXX_SRIOV_BAR4L, PCCPF_XXX_SRIOV_BAR4U). */
        uint32_t node                  : 2;  /**< [  5:  4](SR/W/H) Node number. */
        uint32_t reserved_6_15         : 10;
        uint32_t rid                   : 8;  /**< [ 23: 16](SR/W) Revision ID. R/W version of the value to be presented in PCCPF_XXX_REV[RID]. */
        uint32_t nxtfn_s               : 8;  /**< [ 31: 24](SR/W) For secure accesses, the value to be presented in PCCPF_XXX_(S)ARI_NXT[NXTFN] indicating
                                                                 the next valid function number for this device. Must be 0x0 for non-MRML PCC
                                                                 devices. */
#endif /* Word 0 - End */
    } cn8;
    struct cavm_pccpf_xxx_vsec_sctl_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nxtfn_s               : 8;  /**< [ 31: 24](SR/W) For secure accesses, the value to be presented in PCCPF_XXX_(S)ARI_NXT[NXTFN] indicating
                                                                 the next valid function number for this device. Must be 0x0 for non-MRML PCC
                                                                 devices. */
        uint32_t rid                   : 8;  /**< [ 23: 16](SR/W) Revision ID. R/W version of the value to be presented in PCCPF_XXX_REV[RID]. */
        uint32_t msix_sec_phys         : 1;  /**< [ 15: 15](SR/W) MSI-X secure physical:
                                                                 _ 0 = Any MSI-X vectors with SECVEC = 1 use the same physical setting as
                                                                 nonsecure vectors, i.e. [MSIX_PHYS].
                                                                 _ 1 = Any MSI-X vectors with SECVEC = 1 are considered physical, regardless
                                                                 of [MSIX_PHYS]. */
        uint32_t reserved_12_14        : 3;
        uint32_t gia_timeout           : 6;  /**< [ 11:  6](SR/W) GIA timeout (2^[GIA_TIMEOUT] clock cycles). Timeout for MSI-X commits. When zero, wait
                                                                 for commits is disabled.
                                                                 For RVU, hardware uses RVU PF0's [GIA_TIMEOUT]. */
        uint32_t node                  : 2;  /**< [  5:  4](SR/W) Node number. */
        uint32_t ea                    : 1;  /**< [  3:  3](SRO) Enable PCI enhanced allocation. Always set.

                                                                 Addresses are discovered using enhanced allocation and PCCPF_XXX_EA_ENTRY().
                                                                 Standard BARs are read-only zero (PCCPF_XXX_BAR0L, PCCPF_XXX_BAR0U,
                                                                 PCCPF_XXX_BAR2L, PCCPF_XXX_BAR2U, PCCPF_XXX_BAR4L, PCCPF_XXX_BAR4U,
                                                                 PCCPF_XXX_SRIOV_BAR0L, PCCPF_XXX_SRIOV_BAR0U, PCCPF_XXX_SRIOV_BAR2L,
                                                                 PCCPF_XXX_SRIOV_BAR2U, PCCPF_XXX_SRIOV_BAR4L, PCCPF_XXX_SRIOV_BAR4U). */
        uint32_t msix_sec_en           : 1;  /**< [  2:  2](SR/W) MSI-X secure enable:
                                                                 _ 0 = Any MSI-X vectors with SECVEC = 1, or all vectors if [MSIX_SEC], use
                                                                 the same enable settings as nonsecure vectors based on normal PCIe
                                                                 rules, i.e. are enabled when PCCPF_XXX_MSIX_CAP_HDR[MSIXEN]=1 and
                                                                 unmasked when PCCPF_XXX_MSIX_CAP_HDR[FUNM]=0 and PCCPF_XXX_CMD[ME]=1.
                                                                 _ 1 = Any MSI-X vectors with SECVEC = 1, or all vectors if [MSIX_SEC], will
                                                                 act as if PCCPF_XXX_MSIX_CAP_HDR[MSIXEN]=1, PCCPF_XXX_MSIX_CAP_HDR[FUNM]=0
                                                                 and PCCPF_XXX_CMD[ME]=1,
                                                                 regardless of the true setting of those bits. Nonsecure vectors are
                                                                 unaffected. Blocks that have both secure and nonsecure vectors in use
                                                                 simultaneously may want to use this setting to prevent the nonsecure world
                                                                 from globally disabling secure interrupts. */
        uint32_t msix_sec              : 1;  /**< [  1:  1](SR/W) All MSI-X interrupts are secure. This is equivelent to setting the per-vector secure bit
                                                                 (e.g. GTI_MSIX_VEC()_ADDR[SECVEC]) for all vectors in the block. */
        uint32_t msix_phys             : 1;  /**< [  0:  0](SR/W) MSI-X interrupts are physical.
                                                                 0 = MSI-X interrupt vector addresses are standard virtual addresses and subject to SMMU
                                                                 address translation.
                                                                 1 = MSI-X interrupt vector addresses are considered physical addresses and PCC MSI-X
                                                                 interrupt delivery will bypass the SMMU. */
#else /* Word 0 - Little Endian */
        uint32_t msix_phys             : 1;  /**< [  0:  0](SR/W) MSI-X interrupts are physical.
                                                                 0 = MSI-X interrupt vector addresses are standard virtual addresses and subject to SMMU
                                                                 address translation.
                                                                 1 = MSI-X interrupt vector addresses are considered physical addresses and PCC MSI-X
                                                                 interrupt delivery will bypass the SMMU. */
        uint32_t msix_sec              : 1;  /**< [  1:  1](SR/W) All MSI-X interrupts are secure. This is equivelent to setting the per-vector secure bit
                                                                 (e.g. GTI_MSIX_VEC()_ADDR[SECVEC]) for all vectors in the block. */
        uint32_t msix_sec_en           : 1;  /**< [  2:  2](SR/W) MSI-X secure enable:
                                                                 _ 0 = Any MSI-X vectors with SECVEC = 1, or all vectors if [MSIX_SEC], use
                                                                 the same enable settings as nonsecure vectors based on normal PCIe
                                                                 rules, i.e. are enabled when PCCPF_XXX_MSIX_CAP_HDR[MSIXEN]=1 and
                                                                 unmasked when PCCPF_XXX_MSIX_CAP_HDR[FUNM]=0 and PCCPF_XXX_CMD[ME]=1.
                                                                 _ 1 = Any MSI-X vectors with SECVEC = 1, or all vectors if [MSIX_SEC], will
                                                                 act as if PCCPF_XXX_MSIX_CAP_HDR[MSIXEN]=1, PCCPF_XXX_MSIX_CAP_HDR[FUNM]=0
                                                                 and PCCPF_XXX_CMD[ME]=1,
                                                                 regardless of the true setting of those bits. Nonsecure vectors are
                                                                 unaffected. Blocks that have both secure and nonsecure vectors in use
                                                                 simultaneously may want to use this setting to prevent the nonsecure world
                                                                 from globally disabling secure interrupts. */
        uint32_t ea                    : 1;  /**< [  3:  3](SRO) Enable PCI enhanced allocation. Always set.

                                                                 Addresses are discovered using enhanced allocation and PCCPF_XXX_EA_ENTRY().
                                                                 Standard BARs are read-only zero (PCCPF_XXX_BAR0L, PCCPF_XXX_BAR0U,
                                                                 PCCPF_XXX_BAR2L, PCCPF_XXX_BAR2U, PCCPF_XXX_BAR4L, PCCPF_XXX_BAR4U,
                                                                 PCCPF_XXX_SRIOV_BAR0L, PCCPF_XXX_SRIOV_BAR0U, PCCPF_XXX_SRIOV_BAR2L,
                                                                 PCCPF_XXX_SRIOV_BAR2U, PCCPF_XXX_SRIOV_BAR4L, PCCPF_XXX_SRIOV_BAR4U). */
        uint32_t node                  : 2;  /**< [  5:  4](SR/W) Node number. */
        uint32_t gia_timeout           : 6;  /**< [ 11:  6](SR/W) GIA timeout (2^[GIA_TIMEOUT] clock cycles). Timeout for MSI-X commits. When zero, wait
                                                                 for commits is disabled.
                                                                 For RVU, hardware uses RVU PF0's [GIA_TIMEOUT]. */
        uint32_t reserved_12_14        : 3;
        uint32_t msix_sec_phys         : 1;  /**< [ 15: 15](SR/W) MSI-X secure physical:
                                                                 _ 0 = Any MSI-X vectors with SECVEC = 1 use the same physical setting as
                                                                 nonsecure vectors, i.e. [MSIX_PHYS].
                                                                 _ 1 = Any MSI-X vectors with SECVEC = 1 are considered physical, regardless
                                                                 of [MSIX_PHYS]. */
        uint32_t rid                   : 8;  /**< [ 23: 16](SR/W) Revision ID. R/W version of the value to be presented in PCCPF_XXX_REV[RID]. */
        uint32_t nxtfn_s               : 8;  /**< [ 31: 24](SR/W) For secure accesses, the value to be presented in PCCPF_XXX_(S)ARI_NXT[NXTFN] indicating
                                                                 the next valid function number for this device. Must be 0x0 for non-MRML PCC
                                                                 devices. */
#endif /* Word 0 - End */
    } cn9;
    /* struct cavm_pccpf_xxx_vsec_sctl_cn9 cn96xxp1; */
    struct cavm_pccpf_xxx_vsec_sctl_cn96xxp3
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nxtfn_s               : 8;  /**< [ 31: 24](SR/W) For secure accesses, the value to be presented in PCCPF_XXX_(S)ARI_NXT[NXTFN] indicating
                                                                 the next valid function number for this device. Must be 0x0 for non-MRML PCC
                                                                 devices. */
        uint32_t rid                   : 8;  /**< [ 23: 16](SR/W) Revision ID. R/W version of the value to be presented in PCCPF_XXX_REV[RID]. */
        uint32_t msix_sec_phys         : 1;  /**< [ 15: 15](SR/W) MSI-X secure physical:
                                                                 _ 0 = Any MSI-X vectors with SECVEC = 1 use the same physical setting as
                                                                 nonsecure vectors, i.e. [MSIX_PHYS].
                                                                 _ 1 = Any MSI-X vectors with SECVEC = 1 are considered physical, regardless
                                                                 of [MSIX_PHYS]. */
        uint32_t reserved_12_14        : 3;
        uint32_t gia_timeout           : 6;  /**< [ 11:  6](SR/W) GIA timeout (2^[GIA_TIMEOUT] clock cycles). Timeout for MSI-X commits. When zero, wait
                                                                 for commits is disabled.
                                                                 For RVU, hardware uses RVU PF0's [GIA_TIMEOUT]. */
        uint32_t node                  : 2;  /**< [  5:  4](SR/W) Node number. */
        uint32_t ea                    : 1;  /**< [  3:  3](SRO) Enable PCI enhanced allocation. Always set.

                                                                 Addresses are discovered using enhanced allocation and PCCPF_XXX_EA_ENTRY().
                                                                 Standard BARs are read-only zero (PCCPF_XXX_BAR0L, PCCPF_XXX_BAR0U,
                                                                 PCCPF_XXX_BAR2L, PCCPF_XXX_BAR2U, PCCPF_XXX_BAR4L, PCCPF_XXX_BAR4U,
                                                                 PCCPF_XXX_SRIOV_BAR0L, PCCPF_XXX_SRIOV_BAR0U, PCCPF_XXX_SRIOV_BAR2L,
                                                                 PCCPF_XXX_SRIOV_BAR2U, PCCPF_XXX_SRIOV_BAR4L, PCCPF_XXX_SRIOV_BAR4U). */
        uint32_t msix_sec_en           : 1;  /**< [  2:  2](SR/W) MSI-X secure enable:
                                                                 _ 0 = Any MSI-X vectors with SECVEC = 1, or all vectors if [MSIX_SEC], use
                                                                 the same enable settings as nonsecure vectors based on normal PCIe
                                                                 rules, i.e. are enabled when PCCPF_XXX_MSIX_CAP_HDR[MSIXEN]=1 and
                                                                 unmasked when PCCPF_XXX_MSIX_CAP_HDR[FUNM]=0 and PCCPF_XXX_CMD[ME]=1.
                                                                 _ 1 = Any MSI-X vectors with SECVEC = 1, or all vectors if [MSIX_SEC], will
                                                                 act as if PCCPF_XXX_MSIX_CAP_HDR[MSIXEN]=1, PCCPF_XXX_MSIX_CAP_HDR[FUNM]=0
                                                                 and PCCPF_XXX_CMD[ME]=1,
                                                                 regardless of the true setting of those bits. Nonsecure vectors are
                                                                 unaffected. Blocks that have both secure and nonsecure vectors in use
                                                                 simultaneously may want to use this setting to prevent the nonsecure world
                                                                 from globally disabling secure interrupts. */
        uint32_t msix_sec              : 1;  /**< [  1:  1](SR/W) All MSI-X interrupts are secure. This is equivalent to setting the per-vector secure bit
                                                                 (e.g. GTI_MSIX_VEC()_ADDR[SECVEC]) for all vectors in the block. */
        uint32_t msix_phys             : 1;  /**< [  0:  0](SR/W) MSI-X interrupts are physical.
                                                                 0 = MSI-X interrupt vector addresses are standard virtual addresses and subject to SMMU
                                                                 address translation.
                                                                 1 = MSI-X interrupt vector addresses are considered physical addresses and PCC MSI-X
                                                                 interrupt delivery will bypass the SMMU. */
#else /* Word 0 - Little Endian */
        uint32_t msix_phys             : 1;  /**< [  0:  0](SR/W) MSI-X interrupts are physical.
                                                                 0 = MSI-X interrupt vector addresses are standard virtual addresses and subject to SMMU
                                                                 address translation.
                                                                 1 = MSI-X interrupt vector addresses are considered physical addresses and PCC MSI-X
                                                                 interrupt delivery will bypass the SMMU. */
        uint32_t msix_sec              : 1;  /**< [  1:  1](SR/W) All MSI-X interrupts are secure. This is equivalent to setting the per-vector secure bit
                                                                 (e.g. GTI_MSIX_VEC()_ADDR[SECVEC]) for all vectors in the block. */
        uint32_t msix_sec_en           : 1;  /**< [  2:  2](SR/W) MSI-X secure enable:
                                                                 _ 0 = Any MSI-X vectors with SECVEC = 1, or all vectors if [MSIX_SEC], use
                                                                 the same enable settings as nonsecure vectors based on normal PCIe
                                                                 rules, i.e. are enabled when PCCPF_XXX_MSIX_CAP_HDR[MSIXEN]=1 and
                                                                 unmasked when PCCPF_XXX_MSIX_CAP_HDR[FUNM]=0 and PCCPF_XXX_CMD[ME]=1.
                                                                 _ 1 = Any MSI-X vectors with SECVEC = 1, or all vectors if [MSIX_SEC], will
                                                                 act as if PCCPF_XXX_MSIX_CAP_HDR[MSIXEN]=1, PCCPF_XXX_MSIX_CAP_HDR[FUNM]=0
                                                                 and PCCPF_XXX_CMD[ME]=1,
                                                                 regardless of the true setting of those bits. Nonsecure vectors are
                                                                 unaffected. Blocks that have both secure and nonsecure vectors in use
                                                                 simultaneously may want to use this setting to prevent the nonsecure world
                                                                 from globally disabling secure interrupts. */
        uint32_t ea                    : 1;  /**< [  3:  3](SRO) Enable PCI enhanced allocation. Always set.

                                                                 Addresses are discovered using enhanced allocation and PCCPF_XXX_EA_ENTRY().
                                                                 Standard BARs are read-only zero (PCCPF_XXX_BAR0L, PCCPF_XXX_BAR0U,
                                                                 PCCPF_XXX_BAR2L, PCCPF_XXX_BAR2U, PCCPF_XXX_BAR4L, PCCPF_XXX_BAR4U,
                                                                 PCCPF_XXX_SRIOV_BAR0L, PCCPF_XXX_SRIOV_BAR0U, PCCPF_XXX_SRIOV_BAR2L,
                                                                 PCCPF_XXX_SRIOV_BAR2U, PCCPF_XXX_SRIOV_BAR4L, PCCPF_XXX_SRIOV_BAR4U). */
        uint32_t node                  : 2;  /**< [  5:  4](SR/W) Node number. */
        uint32_t gia_timeout           : 6;  /**< [ 11:  6](SR/W) GIA timeout (2^[GIA_TIMEOUT] clock cycles). Timeout for MSI-X commits. When zero, wait
                                                                 for commits is disabled.
                                                                 For RVU, hardware uses RVU PF0's [GIA_TIMEOUT]. */
        uint32_t reserved_12_14        : 3;
        uint32_t msix_sec_phys         : 1;  /**< [ 15: 15](SR/W) MSI-X secure physical:
                                                                 _ 0 = Any MSI-X vectors with SECVEC = 1 use the same physical setting as
                                                                 nonsecure vectors, i.e. [MSIX_PHYS].
                                                                 _ 1 = Any MSI-X vectors with SECVEC = 1 are considered physical, regardless
                                                                 of [MSIX_PHYS]. */
        uint32_t rid                   : 8;  /**< [ 23: 16](SR/W) Revision ID. R/W version of the value to be presented in PCCPF_XXX_REV[RID]. */
        uint32_t nxtfn_s               : 8;  /**< [ 31: 24](SR/W) For secure accesses, the value to be presented in PCCPF_XXX_(S)ARI_NXT[NXTFN] indicating
                                                                 the next valid function number for this device. Must be 0x0 for non-MRML PCC
                                                                 devices. */
#endif /* Word 0 - End */
    } cn96xxp3;
    /* struct cavm_pccpf_xxx_vsec_sctl_cn96xxp3 cn96xxp4; */
    /* struct cavm_pccpf_xxx_vsec_sctl_cn96xxp3 cn98xx; */
    /* struct cavm_pccpf_xxx_vsec_sctl_cn9 cnf95xxp1; */
    /* struct cavm_pccpf_xxx_vsec_sctl_cn96xxp3 cnf95xxp2; */
    /* struct cavm_pccpf_xxx_vsec_sctl_cn96xxp3 cnf95xxp3; */
    /* struct cavm_pccpf_xxx_vsec_sctl_cn96xxp3 f95mm; */
    /* struct cavm_pccpf_xxx_vsec_sctl_cn9 f95o; */
    /* struct cavm_pccpf_xxx_vsec_sctl_cn96xxp3 loki; */
};
typedef union cavm_pccpf_xxx_vsec_sctl cavm_pccpf_xxx_vsec_sctl_t;

#define CAVM_PCCPF_XXX_VSEC_SCTL CAVM_PCCPF_XXX_VSEC_SCTL_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_VSEC_SCTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_VSEC_SCTL_FUNC(void)
{
    return 0x10c;
}

#define typedef_CAVM_PCCPF_XXX_VSEC_SCTL cavm_pccpf_xxx_vsec_sctl_t
#define bustype_CAVM_PCCPF_XXX_VSEC_SCTL CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_VSEC_SCTL "PCCPF_XXX_VSEC_SCTL"
#define busnum_CAVM_PCCPF_XXX_VSEC_SCTL 0
#define arguments_CAVM_PCCPF_XXX_VSEC_SCTL -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_vsec_sriov_bar0l
 *
 * PCC PF Vendor-Specific SR-IOV Address 0 Lower Register
 */
union cavm_pccpf_xxx_vsec_sriov_bar0l
{
    uint32_t u;
    struct cavm_pccpf_xxx_vsec_sriov_bar0l_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lbab                  : 16; /**< [ 31: 16](RO) Lower bits of the hard-coded SR-IOV BAR 0 base address; the reset value for
                                                                 PCCPF_XXX_SRIOV_BAR0L[LBAB]. */
        uint32_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_15         : 16;
        uint32_t lbab                  : 16; /**< [ 31: 16](RO) Lower bits of the hard-coded SR-IOV BAR 0 base address; the reset value for
                                                                 PCCPF_XXX_SRIOV_BAR0L[LBAB]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_vsec_sriov_bar0l_s cn; */
};
typedef union cavm_pccpf_xxx_vsec_sriov_bar0l cavm_pccpf_xxx_vsec_sriov_bar0l_t;

#define CAVM_PCCPF_XXX_VSEC_SRIOV_BAR0L CAVM_PCCPF_XXX_VSEC_SRIOV_BAR0L_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_VSEC_SRIOV_BAR0L_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_VSEC_SRIOV_BAR0L_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x128;
    __cavm_csr_fatal("PCCPF_XXX_VSEC_SRIOV_BAR0L", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR0L cavm_pccpf_xxx_vsec_sriov_bar0l_t
#define bustype_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR0L CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR0L "PCCPF_XXX_VSEC_SRIOV_BAR0L"
#define busnum_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR0L 0
#define arguments_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR0L -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_vsec_sriov_bar0u
 *
 * PCC PF Vendor-Specific SR-IOV Address 0 Upper Register
 */
union cavm_pccpf_xxx_vsec_sriov_bar0u
{
    uint32_t u;
    struct cavm_pccpf_xxx_vsec_sriov_bar0u_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](RO) Upper bits of the hard-coded SR-IOV BAR 0 base address; the reset value for
                                                                 PCCPF_XXX_SRIOV_BAR0U[UBAB]. */
#else /* Word 0 - Little Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](RO) Upper bits of the hard-coded SR-IOV BAR 0 base address; the reset value for
                                                                 PCCPF_XXX_SRIOV_BAR0U[UBAB]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_vsec_sriov_bar0u_s cn; */
};
typedef union cavm_pccpf_xxx_vsec_sriov_bar0u cavm_pccpf_xxx_vsec_sriov_bar0u_t;

#define CAVM_PCCPF_XXX_VSEC_SRIOV_BAR0U CAVM_PCCPF_XXX_VSEC_SRIOV_BAR0U_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_VSEC_SRIOV_BAR0U_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_VSEC_SRIOV_BAR0U_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x12c;
    __cavm_csr_fatal("PCCPF_XXX_VSEC_SRIOV_BAR0U", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR0U cavm_pccpf_xxx_vsec_sriov_bar0u_t
#define bustype_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR0U CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR0U "PCCPF_XXX_VSEC_SRIOV_BAR0U"
#define busnum_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR0U 0
#define arguments_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR0U -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_vsec_sriov_bar2l
 *
 * PCC PF Vendor-Specific SR-IOV Address 2 Lower Register
 */
union cavm_pccpf_xxx_vsec_sriov_bar2l
{
    uint32_t u;
    struct cavm_pccpf_xxx_vsec_sriov_bar2l_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lbab                  : 16; /**< [ 31: 16](RO) Lower bits of the hard-coded SR-IOV BAR 2 base address; the reset value for
                                                                 PCCPF_XXX_SRIOV_BAR2L[LBAB]. */
        uint32_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_15         : 16;
        uint32_t lbab                  : 16; /**< [ 31: 16](RO) Lower bits of the hard-coded SR-IOV BAR 2 base address; the reset value for
                                                                 PCCPF_XXX_SRIOV_BAR2L[LBAB]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_vsec_sriov_bar2l_s cn; */
};
typedef union cavm_pccpf_xxx_vsec_sriov_bar2l cavm_pccpf_xxx_vsec_sriov_bar2l_t;

#define CAVM_PCCPF_XXX_VSEC_SRIOV_BAR2L CAVM_PCCPF_XXX_VSEC_SRIOV_BAR2L_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_VSEC_SRIOV_BAR2L_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_VSEC_SRIOV_BAR2L_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x130;
    __cavm_csr_fatal("PCCPF_XXX_VSEC_SRIOV_BAR2L", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR2L cavm_pccpf_xxx_vsec_sriov_bar2l_t
#define bustype_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR2L CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR2L "PCCPF_XXX_VSEC_SRIOV_BAR2L"
#define busnum_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR2L 0
#define arguments_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR2L -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_vsec_sriov_bar2u
 *
 * PCC PF Vendor-Specific SR-IOV Address 2 Upper Register
 */
union cavm_pccpf_xxx_vsec_sriov_bar2u
{
    uint32_t u;
    struct cavm_pccpf_xxx_vsec_sriov_bar2u_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](RO) Upper bits of the hard-coded SR-IOV BAR 2 base address; the reset value for
                                                                 PCCPF_XXX_SRIOV_BAR2U[UBAB]. */
#else /* Word 0 - Little Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](RO) Upper bits of the hard-coded SR-IOV BAR 2 base address; the reset value for
                                                                 PCCPF_XXX_SRIOV_BAR2U[UBAB]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_vsec_sriov_bar2u_s cn; */
};
typedef union cavm_pccpf_xxx_vsec_sriov_bar2u cavm_pccpf_xxx_vsec_sriov_bar2u_t;

#define CAVM_PCCPF_XXX_VSEC_SRIOV_BAR2U CAVM_PCCPF_XXX_VSEC_SRIOV_BAR2U_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_VSEC_SRIOV_BAR2U_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_VSEC_SRIOV_BAR2U_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x134;
    __cavm_csr_fatal("PCCPF_XXX_VSEC_SRIOV_BAR2U", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR2U cavm_pccpf_xxx_vsec_sriov_bar2u_t
#define bustype_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR2U CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR2U "PCCPF_XXX_VSEC_SRIOV_BAR2U"
#define busnum_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR2U 0
#define arguments_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR2U -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_vsec_sriov_bar4l
 *
 * PCC PF Vendor-Specific SR-IOV Address 4 Lower Register
 */
union cavm_pccpf_xxx_vsec_sriov_bar4l
{
    uint32_t u;
    struct cavm_pccpf_xxx_vsec_sriov_bar4l_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lbab                  : 16; /**< [ 31: 16](RO) Lower bits of the hard-coded SR-IOV BAR 4 base address; the reset value for
                                                                 PCCPF_XXX_SRIOV_BAR4L[LBAB]. */
        uint32_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_15         : 16;
        uint32_t lbab                  : 16; /**< [ 31: 16](RO) Lower bits of the hard-coded SR-IOV BAR 4 base address; the reset value for
                                                                 PCCPF_XXX_SRIOV_BAR4L[LBAB]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_vsec_sriov_bar4l_s cn; */
};
typedef union cavm_pccpf_xxx_vsec_sriov_bar4l cavm_pccpf_xxx_vsec_sriov_bar4l_t;

#define CAVM_PCCPF_XXX_VSEC_SRIOV_BAR4L CAVM_PCCPF_XXX_VSEC_SRIOV_BAR4L_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_VSEC_SRIOV_BAR4L_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_VSEC_SRIOV_BAR4L_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x138;
    __cavm_csr_fatal("PCCPF_XXX_VSEC_SRIOV_BAR4L", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR4L cavm_pccpf_xxx_vsec_sriov_bar4l_t
#define bustype_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR4L CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR4L "PCCPF_XXX_VSEC_SRIOV_BAR4L"
#define busnum_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR4L 0
#define arguments_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR4L -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_vsec_sriov_bar4u
 *
 * PCC PF Vendor-Specific SR-IOV Address 4 Upper Register
 */
union cavm_pccpf_xxx_vsec_sriov_bar4u
{
    uint32_t u;
    struct cavm_pccpf_xxx_vsec_sriov_bar4u_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](RO) Upper bits of the hard-coded SR-IOV BAR 4 base address; the reset value for
                                                                 PCCPF_XXX_SRIOV_BAR4U[UBAB]. */
#else /* Word 0 - Little Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](RO) Upper bits of the hard-coded SR-IOV BAR 4 base address; the reset value for
                                                                 PCCPF_XXX_SRIOV_BAR4U[UBAB]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_vsec_sriov_bar4u_s cn; */
};
typedef union cavm_pccpf_xxx_vsec_sriov_bar4u cavm_pccpf_xxx_vsec_sriov_bar4u_t;

#define CAVM_PCCPF_XXX_VSEC_SRIOV_BAR4U CAVM_PCCPF_XXX_VSEC_SRIOV_BAR4U_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_VSEC_SRIOV_BAR4U_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_VSEC_SRIOV_BAR4U_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x13c;
    __cavm_csr_fatal("PCCPF_XXX_VSEC_SRIOV_BAR4U", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR4U cavm_pccpf_xxx_vsec_sriov_bar4u_t
#define bustype_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR4U CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR4U "PCCPF_XXX_VSEC_SRIOV_BAR4U"
#define busnum_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR4U 0
#define arguments_CAVM_PCCPF_XXX_VSEC_SRIOV_BAR4U -1,-1,-1,-1

#endif /* __CAVM_CSRS_PCCPF_H__ */
