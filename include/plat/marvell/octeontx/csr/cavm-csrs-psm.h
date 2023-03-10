#ifndef __CAVM_CSRS_PSM_H__
#define __CAVM_CSRS_PSM_H__
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
 * OcteonTX PSM.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration psm_opcode_e
 *
 * PSM Command Opcode Enumeration
 * Enumerates the PSM command opcodes.
 */
#define CAVM_PSM_OPCODE_E_PSM_OP_ADDJOB (1)
#define CAVM_PSM_OPCODE_E_PSM_OP_ADDWORK (0x13)
#define CAVM_PSM_OPCODE_E_PSM_OP_BCAST (0x3e)
#define CAVM_PSM_OPCODE_E_PSM_OP_CONTJOB (2)
#define CAVM_PSM_OPCODE_E_PSM_OP_DJCNT (0x10)
#define CAVM_PSM_OPCODE_E_PSM_OP_FREE (0x14)
#define CAVM_PSM_OPCODE_E_PSM_OP_GPINT (0x11)
#define CAVM_PSM_OPCODE_E_PSM_OP_NOP (0)
#define CAVM_PSM_OPCODE_E_PSM_OP_QBLK (0x21)
#define CAVM_PSM_OPCODE_E_PSM_OP_QRST (0x20)
#define CAVM_PSM_OPCODE_E_PSM_OP_QRUN (0x22)
#define CAVM_PSM_OPCODE_E_PSM_OP_RSP (0x3f)
#define CAVM_PSM_OPCODE_E_PSM_OP_WAIT (0x12)
#define CAVM_PSM_OPCODE_E_PSM_OP_WRMSG (0x16)
#define CAVM_PSM_OPCODE_E_PSM_OP_WRSTS (0x15)

/**
 * Enumeration psm_set0_mabdid_e
 *
 * PSM Set 0 MAB Device ID Enumeration
 * Enumerates the PSM device IDs for Set 0 (MegaHABs).
 */
#define CAVM_PSM_SET0_MABDID_E_BBX2X_MABDID(a) (8 + 8 * (a))
#define CAVM_PSM_SET0_MABDID_E_BBX4_MABDID (0xf)
#define CAVM_PSM_SET0_MABDID_E_BBX5_MABDID (0x18)
#define CAVM_PSM_SET0_MABDID_E_BBX6_MABDID (0x19)
#define CAVM_PSM_SET0_MABDID_E_DENC_MABDID (9)
#define CAVM_PSM_SET0_MABDID_E_DLFE_MABDID (3)
#define CAVM_PSM_SET0_MABDID_E_DMAPX_MABDID(a) (0x15 + (a))
#define CAVM_PSM_SET0_MABDID_E_ECMP_MABDID (0x10)
#define CAVM_PSM_SET0_MABDID_E_EDEC_MABDID (8)
#define CAVM_PSM_SET0_MABDID_E_FDEQX_MABDID(a) (4 + 0x10 * (a))
#define CAVM_PSM_SET0_MABDID_E_LDECX_MABDID(a) (0xd + 0xa * (a))
#define CAVM_PSM_SET0_MABDID_E_LENCX_MABDID(a) (6 + 0xb * (a))
#define CAVM_PSM_SET0_MABDID_E_PDEC_MABDID (0xb)
#define CAVM_PSM_SET0_MABDID_E_PENC_MABDID (5)
#define CAVM_PSM_SET0_MABDID_E_PNBX_MABDID(a) (0x12 + (a))
#define CAVM_PSM_SET0_MABDID_E_PRCH_MABDID (0)
#define CAVM_PSM_SET0_MABDID_E_RDEC_MABDID (2)
#define CAVM_PSM_SET0_MABDID_E_RMAPX_MABDID(a) (7 + 3 * (a))
#define CAVM_PSM_SET0_MABDID_E_RSVD1X_MABDID(a) (8 + 8 * (a))
#define CAVM_PSM_SET0_MABDID_E_RSVD2_MABDID (0xf)
#define CAVM_PSM_SET0_MABDID_E_RSVD3_MABDID (0x18)
#define CAVM_PSM_SET0_MABDID_E_RSVD4_MABDID (0x19)
#define CAVM_PSM_SET0_MABDID_E_TDEC_MABDID (0xc)
#define CAVM_PSM_SET0_MABDID_E_ULFE_MABDID (1)
#define CAVM_PSM_SET0_MABDID_E_VDEC_MABDID (0xe)

/**
 * Enumeration psm_set1_mabdid_e
 *
 * PSM Set 1 MAB Device ID Enumeration
 * Enumerates the PSM device IDs for Set 1 (DSPs).
 */
#define CAVM_PSM_SET1_MABDID_E_MBPX_MABDID(a) (0 + (a))
#define CAVM_PSM_SET1_MABDID_E_SBPX_MABDID(a) (0x28 + (a))

/**
 * Enumeration psm_set2_mabdid_e
 *
 * PSM Set 2 MAB Device ID Enumeration
 * Enumerates the PSM device IDs for Set 2 (RF Engines).
 */
#define CAVM_PSM_SET2_MABDID_E_MBPX_MABDID(a) (3 + (a))
#define CAVM_PSM_SET2_MABDID_E_RFOEX_MABDID(a) (0 + (a))

/**
 * Structure psm_cmd_addjob_s
 *
 * PSM Add Job Command Structure
 * This structure specifies the format for PSM ADDJOB commands. This command is
 * used to schedule a job to an eligible MHAB/MDAB.
 */
union cavm_psm_cmd_addjob_s
{
    uint64_t u[2];
    struct cavm_psm_cmd_addjob_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jobtype               : 8;  /**< [ 63: 56] Index into the PSM resource table (see PSM_SET0_RSRC_TBL(),
                                                                 PSM_SET1_RSRC_TBL(), PSM_SET2_RSRC_TBL())
                                                                 indicating which MHAB/MDAB(s) can service this job. */
        uint64_t reserved_53_55        : 3;
        uint64_t tmem                  : 1;  /**< [ 52: 52] Location of the job descriptor.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t reserved_49_51        : 3;
        uint64_t mabq                  : 1;  /**< [ 48: 48] Indicates the MAB queue on which the job will be launched.
                                                                 0 = MAB queue 0
                                                                 1 = MAB queue 1. */
        uint64_t reserved_40_47        : 8;
        uint64_t jobtag                : 16; /**< [ 39: 24] A 16-bit tag used to identify the job. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. The value 0xFF (i.e., the
                                                                 immediate queue) may not be used for ADDJOB commands. */
        uint64_t rsrc_set              : 2;  /**< [  7:  6] Identifies the BPHY resource set where the job should be launched. */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_ADDJOB */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_ADDJOB */
        uint64_t rsrc_set              : 2;  /**< [  7:  6] Identifies the BPHY resource set where the job should be launched. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. The value 0xFF (i.e., the
                                                                 immediate queue) may not be used for ADDJOB commands. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t jobtag                : 16; /**< [ 39: 24] A 16-bit tag used to identify the job. */
        uint64_t reserved_40_47        : 8;
        uint64_t mabq                  : 1;  /**< [ 48: 48] Indicates the MAB queue on which the job will be launched.
                                                                 0 = MAB queue 0
                                                                 1 = MAB queue 1. */
        uint64_t reserved_49_51        : 3;
        uint64_t tmem                  : 1;  /**< [ 52: 52] Location of the job descriptor.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t reserved_53_55        : 3;
        uint64_t jobtype               : 8;  /**< [ 63: 56] Index into the PSM resource table (see PSM_SET0_RSRC_TBL(),
                                                                 PSM_SET1_RSRC_TBL(), PSM_SET2_RSRC_TBL())
                                                                 indicating which MHAB/MDAB(s) can service this job. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_117_127      : 11;
        uint64_t jobptr                : 53; /**< [116: 64] Address indicating the location of the job descriptor.
                                                                 This must be a 64-bit aligned address. If [TMEM] is clear, this is a
                                                                 local address within BPHY SMEM. If [TMEM] is set, this is an IOVA. */
#else /* Word 1 - Little Endian */
        uint64_t jobptr                : 53; /**< [116: 64] Address indicating the location of the job descriptor.
                                                                 This must be a 64-bit aligned address. If [TMEM] is clear, this is a
                                                                 local address within BPHY SMEM. If [TMEM] is set, this is an IOVA. */
        uint64_t reserved_117_127      : 11;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_psm_cmd_addjob_s_s cn9; */
    /* struct cavm_psm_cmd_addjob_s_s cnf95xxp1; */
    struct cavm_psm_cmd_addjob_s_cnf95xxp2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jobtype               : 8;  /**< [ 63: 56] Index into the PSM resource table (see PSM_SET0_RSRC_TBL(),
                                                                 PSM_SET1_RSRC_TBL(), PSM_SET2_RSRC_TBL())
                                                                 indicating which MHAB/MDAB(s) can service this job. */
        uint64_t reserved_53_55        : 3;
        uint64_t tmem                  : 1;  /**< [ 52: 52] Location of the job descriptor.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t reserved_49_51        : 3;
        uint64_t mabq                  : 1;  /**< [ 48: 48] Indicates the MAB queue on which the job will be launched.
                                                                 0 = MAB queue 0
                                                                 1 = MAB queue 1. */
        uint64_t reserved_40_47        : 8;
        uint64_t jobtag                : 16; /**< [ 39: 24] A 16-bit tag used to identify the job. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs
                                                                 use this field to specify the destination queue. The value 0xFF (i.e., the
                                                                 immediate queue) may not be used for ADDJOB commands. */
        uint64_t rsrc_set              : 2;  /**< [  7:  6] Identifies the BPHY resource set where the job should be launched. */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_ADDJOB */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_ADDJOB */
        uint64_t rsrc_set              : 2;  /**< [  7:  6] Identifies the BPHY resource set where the job should be launched. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs
                                                                 use this field to specify the destination queue. The value 0xFF (i.e., the
                                                                 immediate queue) may not be used for ADDJOB commands. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t jobtag                : 16; /**< [ 39: 24] A 16-bit tag used to identify the job. */
        uint64_t reserved_40_47        : 8;
        uint64_t mabq                  : 1;  /**< [ 48: 48] Indicates the MAB queue on which the job will be launched.
                                                                 0 = MAB queue 0
                                                                 1 = MAB queue 1. */
        uint64_t reserved_49_51        : 3;
        uint64_t tmem                  : 1;  /**< [ 52: 52] Location of the job descriptor.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t reserved_53_55        : 3;
        uint64_t jobtype               : 8;  /**< [ 63: 56] Index into the PSM resource table (see PSM_SET0_RSRC_TBL(),
                                                                 PSM_SET1_RSRC_TBL(), PSM_SET2_RSRC_TBL())
                                                                 indicating which MHAB/MDAB(s) can service this job. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_117_127      : 11;
        uint64_t jobptr                : 53; /**< [116: 64] Address indicating the location of the job descriptor.
                                                                 This must be a 64-bit aligned address. If [TMEM] is clear, this is a
                                                                 local address within BPHY SMEM. If [TMEM] is set, this is an IOVA. */
#else /* Word 1 - Little Endian */
        uint64_t jobptr                : 53; /**< [116: 64] Address indicating the location of the job descriptor.
                                                                 This must be a 64-bit aligned address. If [TMEM] is clear, this is a
                                                                 local address within BPHY SMEM. If [TMEM] is set, this is an IOVA. */
        uint64_t reserved_117_127      : 11;
#endif /* Word 1 - End */
    } cnf95xxp2;
    /* struct cavm_psm_cmd_addjob_s_cnf95xxp2 cnf95xxp3; */
    /* struct cavm_psm_cmd_addjob_s_s f95o; */
};

/**
 * Structure psm_cmd_addwork_s
 *
 * PSM SSO Add Work Command Structure
 * This structure specifies the format for PSM SSO add work commands (opcode=PSM_OP_ADDWORK).
 * This command is used to send an add work request to the SSO unit.
 */
union cavm_psm_cmd_addwork_s
{
    uint64_t u[2];
    struct cavm_psm_cmd_addwork_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tag                   : 32; /**< [ 63: 32] Work queue entry tag. */
        uint64_t group                 : 8;  /**< [ 31: 24] SSO guest-group that the work queue entry will be added to. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t tagtype               : 2;  /**< [  7:  6] Work queue entry tag type. See SSO_TT_E enumeration. */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_ADDWORK */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_ADDWORK */
        uint64_t tagtype               : 2;  /**< [  7:  6] Work queue entry tag type. See SSO_TT_E enumeration. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t group                 : 8;  /**< [ 31: 24] SSO guest-group that the work queue entry will be added to. */
        uint64_t tag                   : 32; /**< [ 63: 32] Work queue entry tag. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_117_127      : 11;
        uint64_t wqeptr                : 53; /**< [116: 64] Work-queue entry pointer to submit to SSO. Bits \<2:0\> are
                                                                 ignored. */
#else /* Word 1 - Little Endian */
        uint64_t wqeptr                : 53; /**< [116: 64] Work-queue entry pointer to submit to SSO. Bits \<2:0\> are
                                                                 ignored. */
        uint64_t reserved_117_127      : 11;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_psm_cmd_addwork_s_s cn9; */
    /* struct cavm_psm_cmd_addwork_s_s cnf95xxp1; */
    struct cavm_psm_cmd_addwork_s_cnf95xxp2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tag                   : 32; /**< [ 63: 32] Work queue entry tag. */
        uint64_t group                 : 8;  /**< [ 31: 24] SSO guest-group that the work queue entry will be added to. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t tagtype               : 2;  /**< [  7:  6] Work queue entry tag type. See SSO_TT_E enumeration. */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_ADDWORK */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_ADDWORK */
        uint64_t tagtype               : 2;  /**< [  7:  6] Work queue entry tag type. See SSO_TT_E enumeration. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t group                 : 8;  /**< [ 31: 24] SSO guest-group that the work queue entry will be added to. */
        uint64_t tag                   : 32; /**< [ 63: 32] Work queue entry tag. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_117_127      : 11;
        uint64_t wqeptr                : 53; /**< [116: 64] Work-queue entry pointer to submit to SSO. Bits \<2:0\> are
                                                                 ignored. */
#else /* Word 1 - Little Endian */
        uint64_t wqeptr                : 53; /**< [116: 64] Work-queue entry pointer to submit to SSO. Bits \<2:0\> are
                                                                 ignored. */
        uint64_t reserved_117_127      : 11;
#endif /* Word 1 - End */
    } cnf95xxp2;
    /* struct cavm_psm_cmd_addwork_s_cnf95xxp2 cnf95xxp3; */
    /* struct cavm_psm_cmd_addwork_s_s f95o; */
};

/**
 * Structure psm_cmd_contjob_s
 *
 * PSM Continued Job Command Structure
 * This structure specifies the format for PSM continued job commands
 * (opcode=PSM_OP_CONTJOB).  This command is used to launch a job to an
 * eligible MHAB/MDAB, and reserve that MHAB/MDAB for a subsequent job from
 * this queue.  The follow-up job may be another CONTJOB, in which case the
 * MHAB/MDAB will continue to be reserved, or an ADDJOB, which will clear the
 * reservation and allow other queues to launch jobs on the MHAB/MDAB.  It is
 * permitted to have non-job commands between one CONTJOB command and its
 * following CONTJOB/ADDJOB command.
 *
 * Note that the next ADDJOB or CONTJOB from the same queue will always go to
 * the same MHAB/MDAB, and the [RSRC_SET] and [JOBTYPE] fields of that job will be ignored.
 * This guarantees that when a CONTJOB runs on a MHAB/MDAB, the next job that runs on
 * the same MHAB/MDAB will always be the next job from the same queue.
 */
union cavm_psm_cmd_contjob_s
{
    uint64_t u[2];
    struct cavm_psm_cmd_contjob_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jobtype               : 8;  /**< [ 63: 56] Index into the PSM resource table (see PSM_SET0_RSRC_TBL(),
                                                                 PSM_SET1_RSRC_TBL(), PSM_SET2_RSRC_TBL())
                                                                 indicating which MHAB/MDAB(s) can service this job.  This field is only used on
                                                                 the first CONTJOB command of a continuation sequence.  It is ignored on
                                                                 subsequent CONTJOB and ADDJOB commands, since the destination MHAB/MDAB is
                                                                 already selected. */
        uint64_t reserved_53_55        : 3;
        uint64_t tmem                  : 1;  /**< [ 52: 52] Location of the job descriptor.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t reserved_49_51        : 3;
        uint64_t mabq                  : 1;  /**< [ 48: 48] Indicates the MAB queue on which the job will be launched.
                                                                 0 = MAB queue 0
                                                                 1 = MAB queue 1. */
        uint64_t reserved_40_47        : 8;
        uint64_t jobtag                : 16; /**< [ 39: 24] A 16-bit tag used to identify the job. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. The value 0xFF (i.e., the
                                                                 immediate queue) may not be used for CONTJOB commands. */
        uint64_t rsrc_set              : 2;  /**< [  7:  6] Identifies the BPHY resource set where the job should be launched.  This field
                                                                 is only used on the first CONTJOB command of a continuation sequence.  It is
                                                                 ignored on subsequent CONTJOB and ADDJOB commands, since the destination
                                                                 MHAB/MDAB is already selected. */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_CONTJOB */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_CONTJOB */
        uint64_t rsrc_set              : 2;  /**< [  7:  6] Identifies the BPHY resource set where the job should be launched.  This field
                                                                 is only used on the first CONTJOB command of a continuation sequence.  It is
                                                                 ignored on subsequent CONTJOB and ADDJOB commands, since the destination
                                                                 MHAB/MDAB is already selected. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. The value 0xFF (i.e., the
                                                                 immediate queue) may not be used for CONTJOB commands. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t jobtag                : 16; /**< [ 39: 24] A 16-bit tag used to identify the job. */
        uint64_t reserved_40_47        : 8;
        uint64_t mabq                  : 1;  /**< [ 48: 48] Indicates the MAB queue on which the job will be launched.
                                                                 0 = MAB queue 0
                                                                 1 = MAB queue 1. */
        uint64_t reserved_49_51        : 3;
        uint64_t tmem                  : 1;  /**< [ 52: 52] Location of the job descriptor.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t reserved_53_55        : 3;
        uint64_t jobtype               : 8;  /**< [ 63: 56] Index into the PSM resource table (see PSM_SET0_RSRC_TBL(),
                                                                 PSM_SET1_RSRC_TBL(), PSM_SET2_RSRC_TBL())
                                                                 indicating which MHAB/MDAB(s) can service this job.  This field is only used on
                                                                 the first CONTJOB command of a continuation sequence.  It is ignored on
                                                                 subsequent CONTJOB and ADDJOB commands, since the destination MHAB/MDAB is
                                                                 already selected. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_117_127      : 11;
        uint64_t jobptr                : 53; /**< [116: 64] Address indicating the location of the job descriptor.
                                                                 This must be a 64-bit aligned address. If [TMEM] is clear, this is a
                                                                 local address within BPHY SMEM. If [TMEM] is set, this is an IOVA. */
#else /* Word 1 - Little Endian */
        uint64_t jobptr                : 53; /**< [116: 64] Address indicating the location of the job descriptor.
                                                                 This must be a 64-bit aligned address. If [TMEM] is clear, this is a
                                                                 local address within BPHY SMEM. If [TMEM] is set, this is an IOVA. */
        uint64_t reserved_117_127      : 11;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_psm_cmd_contjob_s_s cn9; */
    /* struct cavm_psm_cmd_contjob_s_s cnf95xxp1; */
    struct cavm_psm_cmd_contjob_s_cnf95xxp2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jobtype               : 8;  /**< [ 63: 56] Index into the PSM resource table (see PSM_SET0_RSRC_TBL(),
                                                                 PSM_SET1_RSRC_TBL(), PSM_SET2_RSRC_TBL())
                                                                 indicating which MHAB/MDAB(s) can service this job.  This field is only used on
                                                                 the first CONTJOB command of a continuation sequence.  It is ignored on
                                                                 subsequent CONTJOB and ADDJOB commands, since the destination MHAB/MDAB is
                                                                 already selected. */
        uint64_t reserved_53_55        : 3;
        uint64_t tmem                  : 1;  /**< [ 52: 52] Location of the job descriptor.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t reserved_49_51        : 3;
        uint64_t mabq                  : 1;  /**< [ 48: 48] Indicates the MAB queue on which the job will be launched.
                                                                 0 = MAB queue 0
                                                                 1 = MAB queue 1. */
        uint64_t reserved_40_47        : 8;
        uint64_t jobtag                : 16; /**< [ 39: 24] A 16-bit tag used to identify the job. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs
                                                                 use this field to specify the destination queue. The value 0xFF (i.e., the
                                                                 immediate queue) may not be used for CONTJOB commands. */
        uint64_t rsrc_set              : 2;  /**< [  7:  6] Identifies the BPHY resource set where the job should be launched.  This field
                                                                 is only used on the first CONTJOB command of a continuation sequence.  It is
                                                                 ignored on subsequent CONTJOB and ADDJOB commands, since the destination
                                                                 MHAB/MDAB is already selected. */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_CONTJOB */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_CONTJOB */
        uint64_t rsrc_set              : 2;  /**< [  7:  6] Identifies the BPHY resource set where the job should be launched.  This field
                                                                 is only used on the first CONTJOB command of a continuation sequence.  It is
                                                                 ignored on subsequent CONTJOB and ADDJOB commands, since the destination
                                                                 MHAB/MDAB is already selected. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs
                                                                 use this field to specify the destination queue. The value 0xFF (i.e., the
                                                                 immediate queue) may not be used for CONTJOB commands. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t jobtag                : 16; /**< [ 39: 24] A 16-bit tag used to identify the job. */
        uint64_t reserved_40_47        : 8;
        uint64_t mabq                  : 1;  /**< [ 48: 48] Indicates the MAB queue on which the job will be launched.
                                                                 0 = MAB queue 0
                                                                 1 = MAB queue 1. */
        uint64_t reserved_49_51        : 3;
        uint64_t tmem                  : 1;  /**< [ 52: 52] Location of the job descriptor.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t reserved_53_55        : 3;
        uint64_t jobtype               : 8;  /**< [ 63: 56] Index into the PSM resource table (see PSM_SET0_RSRC_TBL(),
                                                                 PSM_SET1_RSRC_TBL(), PSM_SET2_RSRC_TBL())
                                                                 indicating which MHAB/MDAB(s) can service this job.  This field is only used on
                                                                 the first CONTJOB command of a continuation sequence.  It is ignored on
                                                                 subsequent CONTJOB and ADDJOB commands, since the destination MHAB/MDAB is
                                                                 already selected. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_117_127      : 11;
        uint64_t jobptr                : 53; /**< [116: 64] Address indicating the location of the job descriptor.
                                                                 This must be a 64-bit aligned address. If [TMEM] is clear, this is a
                                                                 local address within BPHY SMEM. If [TMEM] is set, this is an IOVA. */
#else /* Word 1 - Little Endian */
        uint64_t jobptr                : 53; /**< [116: 64] Address indicating the location of the job descriptor.
                                                                 This must be a 64-bit aligned address. If [TMEM] is clear, this is a
                                                                 local address within BPHY SMEM. If [TMEM] is set, this is an IOVA. */
        uint64_t reserved_117_127      : 11;
#endif /* Word 1 - End */
    } cnf95xxp2;
    /* struct cavm_psm_cmd_contjob_s_cnf95xxp2 cnf95xxp3; */
    /* struct cavm_psm_cmd_contjob_s_s f95o; */
};

/**
 * Structure psm_cmd_djcnt_s
 *
 * PSM Dependent Job Counter Command Structure
 * This structure specifies the format for PSM dependent job counter commands.  This
 * command is used to increment, decrement, or assign a value to one of the PSM
 * dependent job counters (DJCNT).
 */
union cavm_psm_cmd_djcnt_s
{
    uint64_t u[2];
    struct cavm_psm_cmd_djcnt_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_42_63        : 22;
        uint64_t incr                  : 1;  /**< [ 41: 41] If set to 1, then PSM_CMD_DJCNT_S[DJCNT_ID] will be incremented. */
        uint64_t decr                  : 1;  /**< [ 40: 40] If set to 1, and if INCR is not 1, then PSM_CMD_DJCNT_S[DJCNT_ID]
                                                                 will be decremented. */
        uint64_t reserved_39           : 1;
        uint64_t djcnt_id              : 7;  /**< [ 38: 32] Selects which DJCNT to modify. */
        uint64_t value                 : 8;  /**< [ 31: 24] Value to be assigned to the DJCNT, if neither INCR nor
                                                                 DECR fields are set to 1. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_DJCNT */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_DJCNT */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t value                 : 8;  /**< [ 31: 24] Value to be assigned to the DJCNT, if neither INCR nor
                                                                 DECR fields are set to 1. */
        uint64_t djcnt_id              : 7;  /**< [ 38: 32] Selects which DJCNT to modify. */
        uint64_t reserved_39           : 1;
        uint64_t decr                  : 1;  /**< [ 40: 40] If set to 1, and if INCR is not 1, then PSM_CMD_DJCNT_S[DJCNT_ID]
                                                                 will be decremented. */
        uint64_t incr                  : 1;  /**< [ 41: 41] If set to 1, then PSM_CMD_DJCNT_S[DJCNT_ID] will be incremented. */
        uint64_t reserved_42_63        : 22;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_64_127       : 64;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_127       : 64;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_psm_cmd_djcnt_s_s cn9; */
    /* struct cavm_psm_cmd_djcnt_s_s cnf95xxp1; */
    struct cavm_psm_cmd_djcnt_s_cnf95xxp2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_42_63        : 22;
        uint64_t incr                  : 1;  /**< [ 41: 41] If set to 1, then PSM_CMD_DJCNT_S[DJCNT_ID] will be incremented. */
        uint64_t decr                  : 1;  /**< [ 40: 40] If set to 1, and if INCR is not 1, then PSM_CMD_DJCNT_S[DJCNT_ID]
                                                                 will be decremented. */
        uint64_t reserved_39           : 1;
        uint64_t djcnt_id              : 7;  /**< [ 38: 32] Selects which DJCNT to modify. */
        uint64_t value                 : 8;  /**< [ 31: 24] Value to be assigned to the DJCNT, if neither INCR nor
                                                                 DECR fields are set to 1. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_DJCNT */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_DJCNT */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t value                 : 8;  /**< [ 31: 24] Value to be assigned to the DJCNT, if neither INCR nor
                                                                 DECR fields are set to 1. */
        uint64_t djcnt_id              : 7;  /**< [ 38: 32] Selects which DJCNT to modify. */
        uint64_t reserved_39           : 1;
        uint64_t decr                  : 1;  /**< [ 40: 40] If set to 1, and if INCR is not 1, then PSM_CMD_DJCNT_S[DJCNT_ID]
                                                                 will be decremented. */
        uint64_t incr                  : 1;  /**< [ 41: 41] If set to 1, then PSM_CMD_DJCNT_S[DJCNT_ID] will be incremented. */
        uint64_t reserved_42_63        : 22;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_64_127       : 64;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_127       : 64;
#endif /* Word 1 - End */
    } cnf95xxp2;
    /* struct cavm_psm_cmd_djcnt_s_cnf95xxp2 cnf95xxp3; */
    /* struct cavm_psm_cmd_djcnt_s_s f95o; */
};

/**
 * Structure psm_cmd_free_s
 *
 * PSM NPA Free Command Structure
 * This structure specifies the format used for PSM NPA free commands (opcode=PSM_OP_FREE).
 * This command causes the PSM to send a request to the NPA unit to free a
 * block of memory.
 */
union cavm_psm_cmd_free_s
{
    uint64_t u[2];
    struct cavm_psm_cmd_free_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_45_63        : 19;
        uint64_t fab                   : 1;  /**< [ 44: 44] Free absolute parameter to NPA. */
        uint64_t aura                  : 20; /**< [ 43: 24] The aura that NPA should use when freeing the buffer. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command.

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_FREE */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_FREE */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command.

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t aura                  : 20; /**< [ 43: 24] The aura that NPA should use when freeing the buffer. */
        uint64_t fab                   : 1;  /**< [ 44: 44] Free absolute parameter to NPA. */
        uint64_t reserved_45_63        : 19;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_117_127      : 11;
        uint64_t fptr                  : 53; /**< [116: 64] Byte address indicating the location to be freed by NPA.
                                                                 This must be a cache-line (128-byte) aligned address. */
#else /* Word 1 - Little Endian */
        uint64_t fptr                  : 53; /**< [116: 64] Byte address indicating the location to be freed by NPA.
                                                                 This must be a cache-line (128-byte) aligned address. */
        uint64_t reserved_117_127      : 11;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_psm_cmd_free_s_s cn9; */
    /* struct cavm_psm_cmd_free_s_s cnf95xxp1; */
    struct cavm_psm_cmd_free_s_cnf95xxp2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_45_63        : 19;
        uint64_t fab                   : 1;  /**< [ 44: 44] Free absolute parameter to NPA. */
        uint64_t aura                  : 20; /**< [ 43: 24] The aura that NPA should use when freeing the buffer. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command.

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_FREE */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_FREE */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command.

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t aura                  : 20; /**< [ 43: 24] The aura that NPA should use when freeing the buffer. */
        uint64_t fab                   : 1;  /**< [ 44: 44] Free absolute parameter to NPA. */
        uint64_t reserved_45_63        : 19;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_117_127      : 11;
        uint64_t fptr                  : 53; /**< [116: 64] Byte address indicating the location to be freed by NPA.
                                                                 This must be a cache-line (128-byte) aligned address. */
#else /* Word 1 - Little Endian */
        uint64_t fptr                  : 53; /**< [116: 64] Byte address indicating the location to be freed by NPA.
                                                                 This must be a cache-line (128-byte) aligned address. */
        uint64_t reserved_117_127      : 11;
#endif /* Word 1 - End */
    } cnf95xxp2;
    /* struct cavm_psm_cmd_free_s_cnf95xxp2 cnf95xxp3; */
    /* struct cavm_psm_cmd_free_s_s f95o; */
};

/**
 * Structure psm_cmd_gpint_s
 *
 * PSM General Purpose Interrupt Command Structure
 * This structure specifies the format used for PSM general purpose interrupt
 * commands (opcode=PSM_OP_GPINT).  This command is used to signal a general
 * purpose interrupt to the AP cores.
 */
union cavm_psm_cmd_gpint_s
{
    uint64_t u[2];
    struct cavm_psm_cmd_gpint_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_31_63        : 33;
        uint64_t gpint                 : 7;  /**< [ 30: 24] Indicates which general purpose PSM interrupt (0-127) should be raised. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_GPINT */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_GPINT */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t gpint                 : 7;  /**< [ 30: 24] Indicates which general purpose PSM interrupt (0-127) should be raised. */
        uint64_t reserved_31_63        : 33;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_64_127       : 64;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_127       : 64;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_psm_cmd_gpint_s_s cn9; */
    /* struct cavm_psm_cmd_gpint_s_s cnf95xxp1; */
    struct cavm_psm_cmd_gpint_s_cnf95xxp2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_31_63        : 33;
        uint64_t gpint                 : 7;  /**< [ 30: 24] Indicates which general purpose PSM interrupt (0-127) should be raised. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_GPINT */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_GPINT */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t gpint                 : 7;  /**< [ 30: 24] Indicates which general purpose PSM interrupt (0-127) should be raised. */
        uint64_t reserved_31_63        : 33;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_64_127       : 64;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_127       : 64;
#endif /* Word 1 - End */
    } cnf95xxp2;
    /* struct cavm_psm_cmd_gpint_s_cnf95xxp2 cnf95xxp3; */
    /* struct cavm_psm_cmd_gpint_s_s f95o; */
};

/**
 * Structure psm_cmd_qblk_s
 *
 * PSM Queue Block Command Structure
 * This structure specifies the format used for PSM queue block commands (opcode=PSM_OP_QBLK).
 * This command will disable a queue an prevent any commands in the queue
 * from being executed until the queue is re-enabled, either using a QRUN
 * command, or by writing to PSM_QUEUE_ENA_W1S().
 */
union cavm_psm_cmd_qblk_s
{
    uint64_t u[2];
    struct cavm_psm_cmd_qblk_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_31_63        : 33;
        uint64_t qsel                  : 7;  /**< [ 30: 24] Selects the queue to be blocked (i.e., disabled). */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue.

                                                                 Note that QID does not identify the queue to be blocked. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_QBLK */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_QBLK */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue.

                                                                 Note that QID does not identify the queue to be blocked. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qsel                  : 7;  /**< [ 30: 24] Selects the queue to be blocked (i.e., disabled). */
        uint64_t reserved_31_63        : 33;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_64_127       : 64;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_127       : 64;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_psm_cmd_qblk_s_s cn9; */
    /* struct cavm_psm_cmd_qblk_s_s cnf95xxp1; */
    struct cavm_psm_cmd_qblk_s_cnf95xxp2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_31_63        : 33;
        uint64_t qsel                  : 7;  /**< [ 30: 24] Selects the queue to be blocked (i.e., disabled). */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue.

                                                                 Note that QID does not identify the queue to be blocked. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_QBLK */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_QBLK */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue.

                                                                 Note that QID does not identify the queue to be blocked. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qsel                  : 7;  /**< [ 30: 24] Selects the queue to be blocked (i.e., disabled). */
        uint64_t reserved_31_63        : 33;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_64_127       : 64;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_127       : 64;
#endif /* Word 1 - End */
    } cnf95xxp2;
    /* struct cavm_psm_cmd_qblk_s_cnf95xxp2 cnf95xxp3; */
    /* struct cavm_psm_cmd_qblk_s_s f95o; */
};

/**
 * Structure psm_cmd_qrst_s
 *
 * PSM Queue Reset Command Structure
 * This structure specifies the format used for PSM queue reset commands (opcode=PSM_OP_QRST).
 * This command is used to reset one of the PSM command queues. The reset
 * will remove any remaining commands or jobs from the queue without
 * executing them, and reset the head and tail pointer to indicate an empty
 * queue. The queue reset will not affect any in-flight jobs from the queue.
 */
union cavm_psm_cmd_qrst_s
{
    uint64_t u[2];
    struct cavm_psm_cmd_qrst_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_31_63        : 33;
        uint64_t qsel                  : 7;  /**< [ 30: 24] Selects the queue to be reset. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue.

                                                                 Note that QID does not identify the queue to be reset. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_QRST */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_QRST */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue.

                                                                 Note that QID does not identify the queue to be reset. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qsel                  : 7;  /**< [ 30: 24] Selects the queue to be reset. */
        uint64_t reserved_31_63        : 33;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_64_127       : 64;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_127       : 64;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_psm_cmd_qrst_s_s cn9; */
    /* struct cavm_psm_cmd_qrst_s_s cnf95xxp1; */
    struct cavm_psm_cmd_qrst_s_cnf95xxp2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_31_63        : 33;
        uint64_t qsel                  : 7;  /**< [ 30: 24] Selects the queue to be reset. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue.

                                                                 Note that QID does not identify the queue to be reset. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_QRST */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_QRST */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue.

                                                                 Note that QID does not identify the queue to be reset. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qsel                  : 7;  /**< [ 30: 24] Selects the queue to be reset. */
        uint64_t reserved_31_63        : 33;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_64_127       : 64;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_127       : 64;
#endif /* Word 1 - End */
    } cnf95xxp2;
    /* struct cavm_psm_cmd_qrst_s_cnf95xxp2 cnf95xxp3; */
    /* struct cavm_psm_cmd_qrst_s_s f95o; */
};

/**
 * Structure psm_cmd_qrun_s
 *
 * PSM Queue Unblock Command Structure
 * This structure specifies the format used for PSM queue unblock commands (opcode=PSM_OP_QRUN).
 * This command is used to unblock (ie, re-enable) one of the PSM
 * command queues.
 */
union cavm_psm_cmd_qrun_s
{
    uint64_t u[2];
    struct cavm_psm_cmd_qrun_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_31_63        : 33;
        uint64_t qsel                  : 7;  /**< [ 30: 24] Selects the queue to be unblocked. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue.

                                                                 Note that QID does not identify the queue to be unblocked. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_QRUN */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_QRUN */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue.

                                                                 Note that QID does not identify the queue to be unblocked. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qsel                  : 7;  /**< [ 30: 24] Selects the queue to be unblocked. */
        uint64_t reserved_31_63        : 33;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_64_127       : 64;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_127       : 64;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_psm_cmd_qrun_s_s cn9; */
    /* struct cavm_psm_cmd_qrun_s_s cnf95xxp1; */
    struct cavm_psm_cmd_qrun_s_cnf95xxp2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_31_63        : 33;
        uint64_t qsel                  : 7;  /**< [ 30: 24] Selects the queue to be unblocked. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue.

                                                                 Note that QID does not identify the queue to be unblocked. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_QRUN */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_QRUN */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue.

                                                                 Note that QID does not identify the queue to be unblocked. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qsel                  : 7;  /**< [ 30: 24] Selects the queue to be unblocked. */
        uint64_t reserved_31_63        : 33;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_64_127       : 64;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_127       : 64;
#endif /* Word 1 - End */
    } cnf95xxp2;
    /* struct cavm_psm_cmd_qrun_s_cnf95xxp2 cnf95xxp3; */
    /* struct cavm_psm_cmd_qrun_s_s f95o; */
};

/**
 * Structure psm_cmd_rsp_s
 *
 * PSM MHAB/MDAB Response Command Structure
 * This structure specifies the PSM MHAB/MDAB response command
 * (opcode=PSM_OP_RSP).  This command is used for the MHAB/MDAB
 * to send job status information back to the PSM.  It
 * should only come from the MHAB/MDAB, and should never
 * be submitted by software.
 *
 * When PSM_LOG_CFG[LOG_JOBRSP_EN]=1, PSM writes all received PSM_CMD_RSP_S
 * structures to the log.
 */
union cavm_psm_cmd_rsp_s
{
    uint64_t u[2];
    struct cavm_psm_cmd_rsp_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t addr_err              : 1;  /**< [ 62: 62] If 1, an address error occurred during job processing. */
        uint64_t dmaerr                : 1;  /**< [ 61: 61] If 1, an error occurred during a DMA transfer. */
        uint64_t timeout               : 1;  /**< [ 60: 60] If 1, a timeout occurred during job processing. */
        uint64_t nfat_err              : 1;  /**< [ 59: 59] If 1, a non-fatal error occurred during job processing. */
        uint64_t joberr                : 1;  /**< [ 58: 58] If 1, an error occurred during job processing. */
        uint64_t cdtrtn                : 1;  /**< [ 57: 57] If 1, the MHAB/MDAB is returning a job credit. */
        uint64_t comp                  : 1;  /**< [ 56: 56] If 1, the job has been completed. */
        uint64_t ab_id                 : 2;  /**< [ 55: 54] MHAB/MDAB AB ID (if available) corresponding to the response
                                                                 command message. */
        uint64_t slot_id               : 2;  /**< [ 53: 52] MHAB/MDAB slot ID (if available) corresponding to the response
                                                                 command message. */
        uint64_t reserved_49_51        : 3;
        uint64_t mabq                  : 1;  /**< [ 48: 48] Indicates the MAB queue on which the job was launched.   The
                                                                 MHAB/MDAB will keep track of this from the job launch command
                                                                 and return it in the response. */
        uint64_t reserved_41_47        : 7;
        uint64_t contjob               : 1;  /**< [ 40: 40] Indicates if the job is a normal job (ADDJOB) or a continued
                                                                 job (CONTJOB). The MHAB/MDAB will keep track of this
                                                                 from the original job command and return it in the response. */
        uint64_t jobtag                : 16; /**< [ 39: 24] Job Tag from the ADDJOB/CONTJOB command.  The MHAB/MDAB
                                                                 will keep track of the job tag from the original job
                                                                 command and return it in the response. */
        uint64_t reserved_16_23        : 8;
        uint64_t qid                   : 8;  /**< [ 15:  8] Queue from which the job was launched.  The MHBW/MDBW
                                                                 will keep track of which queue sent the job,
                                                                 and return this information in the response command. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] For the MHAB/MDAB response command, this field is always PSM_OPCODE_E::PSM_OP_RSP. */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] For the MHAB/MDAB response command, this field is always PSM_OPCODE_E::PSM_OP_RSP. */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Queue from which the job was launched.  The MHBW/MDBW
                                                                 will keep track of which queue sent the job,
                                                                 and return this information in the response command. */
        uint64_t reserved_16_23        : 8;
        uint64_t jobtag                : 16; /**< [ 39: 24] Job Tag from the ADDJOB/CONTJOB command.  The MHAB/MDAB
                                                                 will keep track of the job tag from the original job
                                                                 command and return it in the response. */
        uint64_t contjob               : 1;  /**< [ 40: 40] Indicates if the job is a normal job (ADDJOB) or a continued
                                                                 job (CONTJOB). The MHAB/MDAB will keep track of this
                                                                 from the original job command and return it in the response. */
        uint64_t reserved_41_47        : 7;
        uint64_t mabq                  : 1;  /**< [ 48: 48] Indicates the MAB queue on which the job was launched.   The
                                                                 MHAB/MDAB will keep track of this from the job launch command
                                                                 and return it in the response. */
        uint64_t reserved_49_51        : 3;
        uint64_t slot_id               : 2;  /**< [ 53: 52] MHAB/MDAB slot ID (if available) corresponding to the response
                                                                 command message. */
        uint64_t ab_id                 : 2;  /**< [ 55: 54] MHAB/MDAB AB ID (if available) corresponding to the response
                                                                 command message. */
        uint64_t comp                  : 1;  /**< [ 56: 56] If 1, the job has been completed. */
        uint64_t cdtrtn                : 1;  /**< [ 57: 57] If 1, the MHAB/MDAB is returning a job credit. */
        uint64_t joberr                : 1;  /**< [ 58: 58] If 1, an error occurred during job processing. */
        uint64_t nfat_err              : 1;  /**< [ 59: 59] If 1, a non-fatal error occurred during job processing. */
        uint64_t timeout               : 1;  /**< [ 60: 60] If 1, a timeout occurred during job processing. */
        uint64_t dmaerr                : 1;  /**< [ 61: 61] If 1, an error occurred during a DMA transfer. */
        uint64_t addr_err              : 1;  /**< [ 62: 62] If 1, an address error occurred during job processing. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_110_127      : 18;
        uint64_t elapsed_ticks         : 42; /**< [109: 68] The elapsed value of the MHAB/MDAB's 4-bit tick counter
                                                                 for the job runtime. */
        uint64_t reserved_64_67        : 4;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_67        : 4;
        uint64_t elapsed_ticks         : 42; /**< [109: 68] The elapsed value of the MHAB/MDAB's 4-bit tick counter
                                                                 for the job runtime. */
        uint64_t reserved_110_127      : 18;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_psm_cmd_rsp_s_s cn; */
};

/**
 * Structure psm_cmd_wait_s
 *
 * PSM Wait Command Structure
 * This structure specifies the format used for PSM wait command.  This
 * command is used to wait for specified events before allowing the
 * queue to proceed.  The event, which is selected by the [WAITMODE]
 * field, may be either a specific PSM timer value, or a specific
 * DJCNT value.  The command may contain a standard [WAITCOND] field
 * as well, which must be satisfied before the wait event is checked.
 */
union cavm_psm_cmd_wait_s
{
    uint64_t u[2];
    struct cavm_psm_cmd_wait_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_56_63        : 8;
        uint64_t djcnt_val             : 8;  /**< [ 55: 48] Specifies the DJCNT value for the comparison.  The comparison
                                                                 will succeed when the counter selected by [DJCNT_ID] is equal-to
                                                                 or less-than the value in DJCNT_VAL. */
        uint64_t reserved_47           : 1;
        uint64_t djcnt_id              : 7;  /**< [ 46: 40] Selects the DJCNT to be used when [WAITMODE] = 1. */
        uint64_t reserved_33_39        : 7;
        uint64_t waitmode              : 1;  /**< [ 32: 32] Selects the event to be waited on.
                                                                 0 = Wait on the PSM timer, as specified by the [CUR_SF], [TICK], [SF], and [FRAME] fields.
                                                                 1 = Wait on a DJCNT as specified by the [DJCNT_ID] and [DJCNT_VAL] fields. */
        uint64_t reserved_25_31        : 7;
        uint64_t cur_sf                : 1;  /**< [ 24: 24] When WAITMODE=0, this field indicates whether the command should match
                                                                 the current subframe, or the specified absolute subframe number:
                                                                 0 = Match the subframe specified by the FRAME and SF fields.
                                                                 1 = Match the current subframe (i.e., only match the TICK field). */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. The value 0xFF (i.e., the
                                                                 immediate queue) may not be used for ADDJOB commands. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_WAIT. */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_WAIT. */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. The value 0xFF (i.e., the
                                                                 immediate queue) may not be used for ADDJOB commands. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t cur_sf                : 1;  /**< [ 24: 24] When WAITMODE=0, this field indicates whether the command should match
                                                                 the current subframe, or the specified absolute subframe number:
                                                                 0 = Match the subframe specified by the FRAME and SF fields.
                                                                 1 = Match the current subframe (i.e., only match the TICK field). */
        uint64_t reserved_25_31        : 7;
        uint64_t waitmode              : 1;  /**< [ 32: 32] Selects the event to be waited on.
                                                                 0 = Wait on the PSM timer, as specified by the [CUR_SF], [TICK], [SF], and [FRAME] fields.
                                                                 1 = Wait on a DJCNT as specified by the [DJCNT_ID] and [DJCNT_VAL] fields. */
        uint64_t reserved_33_39        : 7;
        uint64_t djcnt_id              : 7;  /**< [ 46: 40] Selects the DJCNT to be used when [WAITMODE] = 1. */
        uint64_t reserved_47           : 1;
        uint64_t djcnt_val             : 8;  /**< [ 55: 48] Specifies the DJCNT value for the comparison.  The comparison
                                                                 will succeed when the counter selected by [DJCNT_ID] is equal-to
                                                                 or less-than the value in DJCNT_VAL. */
        uint64_t reserved_56_63        : 8;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_100_127      : 28;
        uint64_t frame                 : 12; /**< [ 99: 88] PSM timer BFN value to be matched when [WAITMODE] = 0 and [CUR_SF] = 0. */
        uint64_t sf                    : 4;  /**< [ 87: 84] PSM timer sub-frame value to be matched when [WAITMODE] = 0 and [CUR_SF] = 0. */
        uint64_t tick                  : 16; /**< [ 83: 68] PSM timer tick counter value to be matched when [WAITMODE] = 0. */
        uint64_t reserved_64_67        : 4;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_67        : 4;
        uint64_t tick                  : 16; /**< [ 83: 68] PSM timer tick counter value to be matched when [WAITMODE] = 0. */
        uint64_t sf                    : 4;  /**< [ 87: 84] PSM timer sub-frame value to be matched when [WAITMODE] = 0 and [CUR_SF] = 0. */
        uint64_t frame                 : 12; /**< [ 99: 88] PSM timer BFN value to be matched when [WAITMODE] = 0 and [CUR_SF] = 0. */
        uint64_t reserved_100_127      : 28;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_psm_cmd_wait_s_s cn9; */
    /* struct cavm_psm_cmd_wait_s_s cnf95xxp1; */
    struct cavm_psm_cmd_wait_s_cnf95xxp2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_56_63        : 8;
        uint64_t djcnt_val             : 8;  /**< [ 55: 48] Specifies the DJCNT value for the comparison.  The comparison
                                                                 will succeed when the counter selected by [DJCNT_ID] is equal-to
                                                                 or less-than the value in DJCNT_VAL. */
        uint64_t reserved_47           : 1;
        uint64_t djcnt_id              : 7;  /**< [ 46: 40] Selects the DJCNT to be used when [WAITMODE] = 1. */
        uint64_t reserved_33_39        : 7;
        uint64_t waitmode              : 1;  /**< [ 32: 32] Selects the event to be waited on.
                                                                 0 = Wait on the PSM timer, as specified by the [CUR_SF], [TICK], [SF], and [FRAME] fields.
                                                                 1 = Wait on a DJCNT as specified by the [DJCNT_ID] and [DJCNT_VAL] fields. */
        uint64_t reserved_25_31        : 7;
        uint64_t cur_sf                : 1;  /**< [ 24: 24] When WAITMODE=0, this field indicates whether the command should match
                                                                 the current subframe, or the specified absolute subframe number:
                                                                 0 = Match the subframe specified by the FRAME and SF fields.
                                                                 1 = Match the current subframe (i.e., only match the TICK field). */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs
                                                                 use this field to specify the destination queue. The value 0xFF (i.e., the
                                                                 immediate queue) may not be used for ADDJOB commands. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_WAIT. */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_WAIT. */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs
                                                                 use this field to specify the destination queue. The value 0xFF (i.e., the
                                                                 immediate queue) may not be used for ADDJOB commands. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t cur_sf                : 1;  /**< [ 24: 24] When WAITMODE=0, this field indicates whether the command should match
                                                                 the current subframe, or the specified absolute subframe number:
                                                                 0 = Match the subframe specified by the FRAME and SF fields.
                                                                 1 = Match the current subframe (i.e., only match the TICK field). */
        uint64_t reserved_25_31        : 7;
        uint64_t waitmode              : 1;  /**< [ 32: 32] Selects the event to be waited on.
                                                                 0 = Wait on the PSM timer, as specified by the [CUR_SF], [TICK], [SF], and [FRAME] fields.
                                                                 1 = Wait on a DJCNT as specified by the [DJCNT_ID] and [DJCNT_VAL] fields. */
        uint64_t reserved_33_39        : 7;
        uint64_t djcnt_id              : 7;  /**< [ 46: 40] Selects the DJCNT to be used when [WAITMODE] = 1. */
        uint64_t reserved_47           : 1;
        uint64_t djcnt_val             : 8;  /**< [ 55: 48] Specifies the DJCNT value for the comparison.  The comparison
                                                                 will succeed when the counter selected by [DJCNT_ID] is equal-to
                                                                 or less-than the value in DJCNT_VAL. */
        uint64_t reserved_56_63        : 8;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_100_127      : 28;
        uint64_t frame                 : 12; /**< [ 99: 88] PSM timer BFN value to be matched when [WAITMODE] = 0 and [CUR_SF] = 0. */
        uint64_t sf                    : 4;  /**< [ 87: 84] PSM timer sub-frame value to be matched when [WAITMODE] = 0 and [CUR_SF] = 0. */
        uint64_t tick                  : 16; /**< [ 83: 68] PSM timer tick counter value to be matched when [WAITMODE] = 0. */
        uint64_t reserved_64_67        : 4;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_67        : 4;
        uint64_t tick                  : 16; /**< [ 83: 68] PSM timer tick counter value to be matched when [WAITMODE] = 0. */
        uint64_t sf                    : 4;  /**< [ 87: 84] PSM timer sub-frame value to be matched when [WAITMODE] = 0 and [CUR_SF] = 0. */
        uint64_t frame                 : 12; /**< [ 99: 88] PSM timer BFN value to be matched when [WAITMODE] = 0 and [CUR_SF] = 0. */
        uint64_t reserved_100_127      : 28;
#endif /* Word 1 - End */
    } cnf95xxp2;
    /* struct cavm_psm_cmd_wait_s_cnf95xxp2 cnf95xxp3; */
    struct cavm_psm_cmd_wait_s_f95o
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_56_63        : 8;
        uint64_t djcnt_val             : 8;  /**< [ 55: 48] Specifies the DJCNT value for the comparison.  The comparison
                                                                 will succeed when the counter selected by [DJCNT_ID] is equal-to
                                                                 or less-than the value in DJCNT_VAL. */
        uint64_t reserved_47           : 1;
        uint64_t djcnt_id              : 7;  /**< [ 46: 40] Selects the DJCNT to be used when [WAITMODE] = 1.  Permitted values
                                                                 are [0x0, 0x7F]. */
        uint64_t reserved_33_39        : 7;
        uint64_t waitmode              : 1;  /**< [ 32: 32] Selects the event to be waited on.
                                                                 0 = Wait on the PSM timer, as specified by the [CUR_SF], [TICK], [SF], and [FRAME] fields.
                                                                 1 = Wait on a DJCNT as specified by the [DJCNT_ID] and [DJCNT_VAL] fields. */
        uint64_t reserved_25_31        : 7;
        uint64_t cur_sf                : 1;  /**< [ 24: 24] When WAITMODE=0, this field indicates whether the command should match
                                                                 the current subframe, or the specified absolute subframe number:
                                                                 0 = Match the subframe specified by the FRAME and SF fields.
                                                                 1 = Match the current subframe (i.e., only match the TICK field). */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. The value 0xFF (i.e., the
                                                                 immediate queue) may not be used for ADDJOB commands. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_WAIT. */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_WAIT. */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. The value 0xFF (i.e., the
                                                                 immediate queue) may not be used for ADDJOB commands. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t cur_sf                : 1;  /**< [ 24: 24] When WAITMODE=0, this field indicates whether the command should match
                                                                 the current subframe, or the specified absolute subframe number:
                                                                 0 = Match the subframe specified by the FRAME and SF fields.
                                                                 1 = Match the current subframe (i.e., only match the TICK field). */
        uint64_t reserved_25_31        : 7;
        uint64_t waitmode              : 1;  /**< [ 32: 32] Selects the event to be waited on.
                                                                 0 = Wait on the PSM timer, as specified by the [CUR_SF], [TICK], [SF], and [FRAME] fields.
                                                                 1 = Wait on a DJCNT as specified by the [DJCNT_ID] and [DJCNT_VAL] fields. */
        uint64_t reserved_33_39        : 7;
        uint64_t djcnt_id              : 7;  /**< [ 46: 40] Selects the DJCNT to be used when [WAITMODE] = 1.  Permitted values
                                                                 are [0x0, 0x7F]. */
        uint64_t reserved_47           : 1;
        uint64_t djcnt_val             : 8;  /**< [ 55: 48] Specifies the DJCNT value for the comparison.  The comparison
                                                                 will succeed when the counter selected by [DJCNT_ID] is equal-to
                                                                 or less-than the value in DJCNT_VAL. */
        uint64_t reserved_56_63        : 8;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_100_127      : 28;
        uint64_t frame                 : 12; /**< [ 99: 88] PSM timer BFN value to be matched when [WAITMODE] = 0 and [CUR_SF] = 0. */
        uint64_t sf                    : 4;  /**< [ 87: 84] PSM timer sub-frame value to be matched when [WAITMODE] = 0 and [CUR_SF] = 0. */
        uint64_t tick                  : 16; /**< [ 83: 68] PSM timer tick counter value to be matched when [WAITMODE] = 0. */
        uint64_t reserved_64_67        : 4;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_67        : 4;
        uint64_t tick                  : 16; /**< [ 83: 68] PSM timer tick counter value to be matched when [WAITMODE] = 0. */
        uint64_t sf                    : 4;  /**< [ 87: 84] PSM timer sub-frame value to be matched when [WAITMODE] = 0 and [CUR_SF] = 0. */
        uint64_t frame                 : 12; /**< [ 99: 88] PSM timer BFN value to be matched when [WAITMODE] = 0 and [CUR_SF] = 0. */
        uint64_t reserved_100_127      : 28;
#endif /* Word 1 - End */
    } f95o;
};

/**
 * Structure psm_cmd_wrmsg_s
 *
 * PSM Write Message Command Structure
 * This structure specifies the format used for PSM write message commands (opcode=PSM_OP_WRMSG).
 * This command is used to write a software defined message to system
 * memory or to BPHY SMEM.  See PSM_MESSAGE_S for details
 * on the message data format.
 */
union cavm_psm_cmd_wrmsg_s
{
    uint64_t u[2];
    struct cavm_psm_cmd_wrmsg_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_58_63        : 6;
        uint64_t cmt                   : 1;  /**< [ 57: 57] Wait for write commit.
                                                                 0 = WRMSG command completes as soon as write request is sent to
                                                                 memory.
                                                                 1 = WRMSG command does not complete until after the data has been committed
                                                                 to memory. */
        uint64_t tmem                  : 1;  /**< [ 56: 56] Target memory where the message will be written.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t message               : 32; /**< [ 55: 24] Value to be written to the PSM_MESSAGE_S[MESSAGE] field. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_WRMSG */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_WRMSG */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t message               : 32; /**< [ 55: 24] Value to be written to the PSM_MESSAGE_S[MESSAGE] field. */
        uint64_t tmem                  : 1;  /**< [ 56: 56] Target memory where the message will be written.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t cmt                   : 1;  /**< [ 57: 57] Wait for write commit.
                                                                 0 = WRMSG command completes as soon as write request is sent to
                                                                 memory.
                                                                 1 = WRMSG command does not complete until after the data has been committed
                                                                 to memory. */
        uint64_t reserved_58_63        : 6;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_117_127      : 11;
        uint64_t sptr                  : 53; /**< [116: 64] Address where PSM will write the message. Must be 64-bit aligned.  If
                                                                 [TMEM] is clear, this is a local address within BPHY SMEM. If [TMEM]
                                                                 is set, this is an IOVA. */
#else /* Word 1 - Little Endian */
        uint64_t sptr                  : 53; /**< [116: 64] Address where PSM will write the message. Must be 64-bit aligned.  If
                                                                 [TMEM] is clear, this is a local address within BPHY SMEM. If [TMEM]
                                                                 is set, this is an IOVA. */
        uint64_t reserved_117_127      : 11;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_psm_cmd_wrmsg_s_s cn9; */
    /* struct cavm_psm_cmd_wrmsg_s_s cnf95xxp1; */
    struct cavm_psm_cmd_wrmsg_s_cnf95xxp2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_58_63        : 6;
        uint64_t cmt                   : 1;  /**< [ 57: 57] Wait for write commit.
                                                                 0 = WRMSG command completes as soon as write request is sent to
                                                                 memory.
                                                                 1 = WRMSG command does not complete until after the data has been committed
                                                                 to memory. */
        uint64_t tmem                  : 1;  /**< [ 56: 56] Target memory where the message will be written.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t message               : 32; /**< [ 55: 24] Value to be written to the PSM_MESSAGE_S[MESSAGE] field. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_WRMSG */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_WRMSG */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t message               : 32; /**< [ 55: 24] Value to be written to the PSM_MESSAGE_S[MESSAGE] field. */
        uint64_t tmem                  : 1;  /**< [ 56: 56] Target memory where the message will be written.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t cmt                   : 1;  /**< [ 57: 57] Wait for write commit.
                                                                 0 = WRMSG command completes as soon as write request is sent to
                                                                 memory.
                                                                 1 = WRMSG command does not complete until after the data has been committed
                                                                 to memory. */
        uint64_t reserved_58_63        : 6;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_117_127      : 11;
        uint64_t sptr                  : 53; /**< [116: 64] Address where PSM will write the message. Must be 64-bit aligned.  If
                                                                 [TMEM] is clear, this is a local address within BPHY SMEM. If [TMEM]
                                                                 is set, this is an IOVA. */
#else /* Word 1 - Little Endian */
        uint64_t sptr                  : 53; /**< [116: 64] Address where PSM will write the message. Must be 64-bit aligned.  If
                                                                 [TMEM] is clear, this is a local address within BPHY SMEM. If [TMEM]
                                                                 is set, this is an IOVA. */
        uint64_t reserved_117_127      : 11;
#endif /* Word 1 - End */
    } cnf95xxp2;
    /* struct cavm_psm_cmd_wrmsg_s_cnf95xxp2 cnf95xxp3; */
    /* struct cavm_psm_cmd_wrmsg_s_s f95o; */
};

/**
 * Structure psm_cmd_wrsts_s
 *
 * PSM Write Status Command Structure
 * This structure specifies the format used for PSM write status commands (opcode=PSM_OP_WRSTS).
 * This command is used to write a status message to chip system
 * memory or to BPHY SMEM.  See PSM_STATUS_S for details
 * on the status data format.
 */
union cavm_psm_cmd_wrsts_s
{
    uint64_t u[2];
    struct cavm_psm_cmd_wrsts_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_58_63        : 6;
        uint64_t cmt                   : 1;  /**< [ 57: 57] Wait for write commit.
                                                                 0 = WRSTS command completes as soon as write request is sent to
                                                                 memory.
                                                                 1 = WRSTS command does not complete until after the data has been committed
                                                                 to memory. */
        uint64_t tmem                  : 1;  /**< [ 56: 56] Target memory where the status will be written.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t cc                    : 16; /**< [ 55: 40] Completion code. This value is copied to the CC field in the
                                                                 PSM_STATUS_S structure. */
        uint64_t jobtag                : 16; /**< [ 39: 24] Value to be written in the PSM_STATUS_S[JOBTAG] field.

                                                                 If the WRSTS command is submitted by a MHAB/MDAB as part of a job
                                                                 completion event, the JOBTAG will be over-written by the JOBTAG field
                                                                 for the job that submitted the job completion event. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_WRSTS */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_WRSTS */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t jobtag                : 16; /**< [ 39: 24] Value to be written in the PSM_STATUS_S[JOBTAG] field.

                                                                 If the WRSTS command is submitted by a MHAB/MDAB as part of a job
                                                                 completion event, the JOBTAG will be over-written by the JOBTAG field
                                                                 for the job that submitted the job completion event. */
        uint64_t cc                    : 16; /**< [ 55: 40] Completion code. This value is copied to the CC field in the
                                                                 PSM_STATUS_S structure. */
        uint64_t tmem                  : 1;  /**< [ 56: 56] Target memory where the status will be written.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t cmt                   : 1;  /**< [ 57: 57] Wait for write commit.
                                                                 0 = WRSTS command completes as soon as write request is sent to
                                                                 memory.
                                                                 1 = WRSTS command does not complete until after the data has been committed
                                                                 to memory. */
        uint64_t reserved_58_63        : 6;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_117_127      : 11;
        uint64_t sptr                  : 53; /**< [116: 64] Address where PSM will write the message. Must be 64-bit aligned.  If
                                                                 [TMEM] is clear, this is a local address within BPHY SMEM. If [TMEM]
                                                                 is set, this is an IOVA. */
#else /* Word 1 - Little Endian */
        uint64_t sptr                  : 53; /**< [116: 64] Address where PSM will write the message. Must be 64-bit aligned.  If
                                                                 [TMEM] is clear, this is a local address within BPHY SMEM. If [TMEM]
                                                                 is set, this is an IOVA. */
        uint64_t reserved_117_127      : 11;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_psm_cmd_wrsts_s_s cn9; */
    /* struct cavm_psm_cmd_wrsts_s_s cnf95xxp1; */
    struct cavm_psm_cmd_wrsts_s_cnf95xxp2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_58_63        : 6;
        uint64_t cmt                   : 1;  /**< [ 57: 57] Wait for write commit.
                                                                 0 = WRSTS command completes as soon as write request is sent to
                                                                 memory.
                                                                 1 = WRSTS command does not complete until after the data has been committed
                                                                 to memory. */
        uint64_t tmem                  : 1;  /**< [ 56: 56] Target memory where the status will be written.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t cc                    : 16; /**< [ 55: 40] Completion code. This value is copied to the CC field in the
                                                                 PSM_STATUS_S structure. */
        uint64_t jobtag                : 16; /**< [ 39: 24] Value to be written in the PSM_STATUS_S[JOBTAG] field.

                                                                 If the WRSTS command is submitted by a MHAB/MDAB as part of a job
                                                                 completion event, the JOBTAG will be over-written by the JOBTAG field
                                                                 for the job that submitted the job completion event. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_WRSTS */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_WRSTS */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t jobtag                : 16; /**< [ 39: 24] Value to be written in the PSM_STATUS_S[JOBTAG] field.

                                                                 If the WRSTS command is submitted by a MHAB/MDAB as part of a job
                                                                 completion event, the JOBTAG will be over-written by the JOBTAG field
                                                                 for the job that submitted the job completion event. */
        uint64_t cc                    : 16; /**< [ 55: 40] Completion code. This value is copied to the CC field in the
                                                                 PSM_STATUS_S structure. */
        uint64_t tmem                  : 1;  /**< [ 56: 56] Target memory where the status will be written.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t cmt                   : 1;  /**< [ 57: 57] Wait for write commit.
                                                                 0 = WRSTS command completes as soon as write request is sent to
                                                                 memory.
                                                                 1 = WRSTS command does not complete until after the data has been committed
                                                                 to memory. */
        uint64_t reserved_58_63        : 6;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_117_127      : 11;
        uint64_t sptr                  : 53; /**< [116: 64] Address where PSM will write the message. Must be 64-bit aligned.  If
                                                                 [TMEM] is clear, this is a local address within BPHY SMEM. If [TMEM]
                                                                 is set, this is an IOVA. */
#else /* Word 1 - Little Endian */
        uint64_t sptr                  : 53; /**< [116: 64] Address where PSM will write the message. Must be 64-bit aligned.  If
                                                                 [TMEM] is clear, this is a local address within BPHY SMEM. If [TMEM]
                                                                 is set, this is an IOVA. */
        uint64_t reserved_117_127      : 11;
#endif /* Word 1 - End */
    } cnf95xxp2;
    /* struct cavm_psm_cmd_wrsts_s_cnf95xxp2 cnf95xxp3; */
    /* struct cavm_psm_cmd_wrsts_s_s f95o; */
};

/**
 * Structure psm_log_s
 *
 * PSM Log Entry Structure
 * This structure defines the format for PSM log entries.
 */
union cavm_psm_log_s
{
    uint64_t u[4];
    struct cavm_psm_log_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t mab_id                : 8;  /**< [ 39: 32] For log entries corresponding to ADDJOB and CONTJOB commands, this
                                                                 field indicates the destination MHAB/MDAB.  For job responses and
                                                                 immediate-queue commands, this field indicates the source MHAB/MDAB. */
        uint64_t frame                 : 12; /**< [ 31: 20] The value of PSM_TIMER_BPHY_VAL[FRAME] when the logged event occurred. */
        uint64_t subframe              : 4;  /**< [ 19: 16] The value of PSM_TIMER_BPHY_VAL[SUBFRAME] when the logged event occurred. */
        uint64_t tick                  : 16; /**< [ 15:  0] The value of PSM_TIMER_BPHY_VAL[TICK] when the logged event occurred. */
#else /* Word 0 - Little Endian */
        uint64_t tick                  : 16; /**< [ 15:  0] The value of PSM_TIMER_BPHY_VAL[TICK] when the logged event occurred. */
        uint64_t subframe              : 4;  /**< [ 19: 16] The value of PSM_TIMER_BPHY_VAL[SUBFRAME] when the logged event occurred. */
        uint64_t frame                 : 12; /**< [ 31: 20] The value of PSM_TIMER_BPHY_VAL[FRAME] when the logged event occurred. */
        uint64_t mab_id                : 8;  /**< [ 39: 32] For log entries corresponding to ADDJOB and CONTJOB commands, this
                                                                 field indicates the destination MHAB/MDAB.  For job responses and
                                                                 immediate-queue commands, this field indicates the source MHAB/MDAB. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_64_127       : 64;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_127       : 64;
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t cmdl                  : 64; /**< [191:128] Bits [63:0] of the command. */
#else /* Word 2 - Little Endian */
        uint64_t cmdl                  : 64; /**< [191:128] Bits [63:0] of the command. */
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t cmdh                  : 64; /**< [255:192] Bits [127:64] of the command. */
#else /* Word 3 - Little Endian */
        uint64_t cmdh                  : 64; /**< [255:192] Bits [127:64] of the command. */
#endif /* Word 3 - End */
    } s;
    /* struct cavm_psm_log_s_s cn9; */
    /* struct cavm_psm_log_s_s cnf95xx; */
    struct cavm_psm_log_s_f95o
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t mab_id                : 8;  /**< [ 39: 32] For log entries corresponding to ADDJOB and CONTJOB commands, this
                                                                 field indicates the destination MHAB/MDAB.  For job responses and
                                                                 immediate-queue commands, this field indicates the source MHAB/MDAB.
                                                                 Bits [39:38] contain the resource set, and bits [37:32] contain the
                                                                 MABDID within that set, as enumerated by PSM_SET0_MABDID_E,
                                                                 PSM_SET1_MABDID_E, and PSM_SET2_MABDID_E. */
        uint64_t frame                 : 12; /**< [ 31: 20] The value of PSM_TIMER_BPHY_VAL[FRAME] when the logged event occurred. */
        uint64_t subframe              : 4;  /**< [ 19: 16] The value of PSM_TIMER_BPHY_VAL[SUBFRAME] when the logged event occurred. */
        uint64_t tick                  : 16; /**< [ 15:  0] The value of PSM_TIMER_BPHY_VAL[TICK] when the logged event occurred. */
#else /* Word 0 - Little Endian */
        uint64_t tick                  : 16; /**< [ 15:  0] The value of PSM_TIMER_BPHY_VAL[TICK] when the logged event occurred. */
        uint64_t subframe              : 4;  /**< [ 19: 16] The value of PSM_TIMER_BPHY_VAL[SUBFRAME] when the logged event occurred. */
        uint64_t frame                 : 12; /**< [ 31: 20] The value of PSM_TIMER_BPHY_VAL[FRAME] when the logged event occurred. */
        uint64_t mab_id                : 8;  /**< [ 39: 32] For log entries corresponding to ADDJOB and CONTJOB commands, this
                                                                 field indicates the destination MHAB/MDAB.  For job responses and
                                                                 immediate-queue commands, this field indicates the source MHAB/MDAB.
                                                                 Bits [39:38] contain the resource set, and bits [37:32] contain the
                                                                 MABDID within that set, as enumerated by PSM_SET0_MABDID_E,
                                                                 PSM_SET1_MABDID_E, and PSM_SET2_MABDID_E. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_64_127       : 64;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_127       : 64;
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t cmdl                  : 64; /**< [191:128] Bits [63:0] of the command. */
#else /* Word 2 - Little Endian */
        uint64_t cmdl                  : 64; /**< [191:128] Bits [63:0] of the command. */
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t cmdh                  : 64; /**< [255:192] Bits [127:64] of the command. */
#else /* Word 3 - Little Endian */
        uint64_t cmdh                  : 64; /**< [255:192] Bits [127:64] of the command. */
#endif /* Word 3 - End */
    } f95o;
};

/**
 * Structure psm_message_s
 *
 * PSM Message Data Structure
 * This structure specifies the PSM Message Format that is written
 * by PSM write message commands (PSM_CMD_WRMSG_S).  It contains
 * a message field, which is taken from the WRMSG
 * command.  It also contains a timestamp ([TICK], [SF], [FRAME]) from
 * the PSM timer, indicating when the write occurred.
 */
union cavm_psm_message_s
{
    uint64_t u;
    struct cavm_psm_message_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t frame                 : 12; /**< [ 63: 52] Value of PSM_TIMER_BPHY_VAL[FRAME]. */
        uint64_t sf                    : 4;  /**< [ 51: 48] Value of PSM_TIMER_BPHY_VAL[SUBFRAME]. */
        uint64_t tick                  : 16; /**< [ 47: 32] Value of PSM_TIMER_BPHY_VAL[TICK]. */
        uint64_t message               : 32; /**< [ 31:  0] Message. */
#else /* Word 0 - Little Endian */
        uint64_t message               : 32; /**< [ 31:  0] Message. */
        uint64_t tick                  : 16; /**< [ 47: 32] Value of PSM_TIMER_BPHY_VAL[TICK]. */
        uint64_t sf                    : 4;  /**< [ 51: 48] Value of PSM_TIMER_BPHY_VAL[SUBFRAME]. */
        uint64_t frame                 : 12; /**< [ 63: 52] Value of PSM_TIMER_BPHY_VAL[FRAME]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_message_s_s cn; */
};

/**
 * Structure psm_status_s
 *
 * PSM Status Data Structure
 * This structure specifies the PSM Status Format that is written
 * by PSM write status commands (PSM_CMD_WRSTS_S).  It contains
 * a completion code and job tag, which are taken from the WRSTS
 * command.  It also contains a timestamp ([TICK], [SF], [FRAME]) from
 * the PSM timer, indicating when the write occurred.
 */
union cavm_psm_status_s
{
    uint64_t u;
    struct cavm_psm_status_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t frame                 : 12; /**< [ 63: 52] Value of PSM_TIMER_BPHY_VAL[FRAME]. */
        uint64_t sf                    : 4;  /**< [ 51: 48] Value of PSM_TIMER_BPHY_VAL[SUBFRAME]. */
        uint64_t tick                  : 16; /**< [ 47: 32] Value of PSM_TIMER_BPHY_VAL[TICK]. */
        uint64_t cc                    : 16; /**< [ 31: 16] Completion code. */
        uint64_t jobtag                : 16; /**< [ 15:  0] Job tag. */
#else /* Word 0 - Little Endian */
        uint64_t jobtag                : 16; /**< [ 15:  0] Job tag. */
        uint64_t cc                    : 16; /**< [ 31: 16] Completion code. */
        uint64_t tick                  : 16; /**< [ 47: 32] Value of PSM_TIMER_BPHY_VAL[TICK]. */
        uint64_t sf                    : 4;  /**< [ 51: 48] Value of PSM_TIMER_BPHY_VAL[SUBFRAME]. */
        uint64_t frame                 : 12; /**< [ 63: 52] Value of PSM_TIMER_BPHY_VAL[FRAME]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_status_s_s cn; */
};

/**
 * Register (NCB) psm_cmd_dma#_addr
 *
 * PHY Scheduler Command-List DMA Address Registers
 * This register sets the location in memory from which a command-list
 * DMA operation will be performed.
 */
union cavm_psm_cmd_dmax_addr
{
    uint64_t u;
    struct cavm_psm_cmd_dmax_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t dma_ptr               : 53; /**< [ 52:  0](R/W) Address from which PSM will read a list of commands. Must be 128-bit
                                                                 aligned. If PSM_CMD_DMA()_CTRL[TMEM] is clear, this is a local
                                                                 address within BPHY SMEM. If PSM_CMD_DMA()_CTRL[TMEM] is set, this is
                                                                 an IOVA. */
#else /* Word 0 - Little Endian */
        uint64_t dma_ptr               : 53; /**< [ 52:  0](R/W) Address from which PSM will read a list of commands. Must be 128-bit
                                                                 aligned. If PSM_CMD_DMA()_CTRL[TMEM] is clear, this is a local
                                                                 address within BPHY SMEM. If PSM_CMD_DMA()_CTRL[TMEM] is set, this is
                                                                 an IOVA. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_cmd_dmax_addr_s cn; */
};
typedef union cavm_psm_cmd_dmax_addr cavm_psm_cmd_dmax_addr_t;

static inline uint64_t CAVM_PSM_CMD_DMAX_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_CMD_DMAX_ADDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX_PASS1_X) && (a<=7))
        return 0x8600010d0000ll + 0x100ll * ((a) & 0x7);
    __cavm_csr_fatal("PSM_CMD_DMAX_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_CMD_DMAX_ADDR(a) cavm_psm_cmd_dmax_addr_t
#define bustype_CAVM_PSM_CMD_DMAX_ADDR(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_CMD_DMAX_ADDR(a) "PSM_CMD_DMAX_ADDR"
#define busnum_CAVM_PSM_CMD_DMAX_ADDR(a) (a)
#define arguments_CAVM_PSM_CMD_DMAX_ADDR(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_cmd_dma#_ctrl
 *
 * PHY Scheduler Command-List DMA Control Registers
 * This register configures and initiates the command-list DMA operation.
 */
union cavm_psm_cmd_dmax_ctrl
{
    uint64_t u;
    struct cavm_psm_cmd_dmax_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t tmem                  : 1;  /**< [ 16: 16](R/W) Location of the command-list DMA source.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t reserved_12_15        : 4;
        uint64_t list_size             : 12; /**< [ 11:  0](R/W) Number of PSM commands to be read and enqueued during the
                                                                 command-list DMA operation. */
#else /* Word 0 - Little Endian */
        uint64_t list_size             : 12; /**< [ 11:  0](R/W) Number of PSM commands to be read and enqueued during the
                                                                 command-list DMA operation. */
        uint64_t reserved_12_15        : 4;
        uint64_t tmem                  : 1;  /**< [ 16: 16](R/W) Location of the command-list DMA source.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_cmd_dmax_ctrl_s cn; */
};
typedef union cavm_psm_cmd_dmax_ctrl cavm_psm_cmd_dmax_ctrl_t;

static inline uint64_t CAVM_PSM_CMD_DMAX_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_CMD_DMAX_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX_PASS1_X) && (a<=7))
        return 0x8600010d0010ll + 0x100ll * ((a) & 0x7);
    __cavm_csr_fatal("PSM_CMD_DMAX_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_CMD_DMAX_CTRL(a) cavm_psm_cmd_dmax_ctrl_t
#define bustype_CAVM_PSM_CMD_DMAX_CTRL(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_CMD_DMAX_CTRL(a) "PSM_CMD_DMAX_CTRL"
#define busnum_CAVM_PSM_CMD_DMAX_CTRL(a) (a)
#define arguments_CAVM_PSM_CMD_DMAX_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_cmd_dma_status
 *
 * PHY Scheduler Command-List DMA Status Register
 * This register indicates which command-list DMA channels are active.
 */
union cavm_psm_cmd_dma_status
{
    uint64_t u;
    struct cavm_psm_cmd_dma_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t active                : 8;  /**< [  7:  0](RO/H) Each bit indicates which command-list DMA channels have a DMA
                                                                 operation in progress. */
#else /* Word 0 - Little Endian */
        uint64_t active                : 8;  /**< [  7:  0](RO/H) Each bit indicates which command-list DMA channels have a DMA
                                                                 operation in progress. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_cmd_dma_status_s cn; */
};
typedef union cavm_psm_cmd_dma_status cavm_psm_cmd_dma_status_t;

#define CAVM_PSM_CMD_DMA_STATUS CAVM_PSM_CMD_DMA_STATUS_FUNC()
static inline uint64_t CAVM_PSM_CMD_DMA_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_CMD_DMA_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX_PASS1_X))
        return 0x8600010d1000ll;
    __cavm_csr_fatal("PSM_CMD_DMA_STATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_CMD_DMA_STATUS cavm_psm_cmd_dma_status_t
#define bustype_CAVM_PSM_CMD_DMA_STATUS CSR_TYPE_NCB
#define basename_CAVM_PSM_CMD_DMA_STATUS "PSM_CMD_DMA_STATUS"
#define busnum_CAVM_PSM_CMD_DMA_STATUS 0
#define arguments_CAVM_PSM_CMD_DMA_STATUS -1,-1,-1,-1

/**
 * Register (NCB) psm_const1
 *
 * PHY Scheduler Constants 1 Register
 * This register contains constants for software discovery.
 */
union cavm_psm_const1
{
    uint64_t u;
    struct cavm_psm_const1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t djcnt                 : 16; /**< [ 63: 48](RO) Number of PSM dependent job counters. */
        uint64_t jobtypes              : 16; /**< [ 47: 32](RO) Number of PSM job types in each resource set. */
        uint64_t qram_size             : 24; /**< [ 31:  8](RO) Number of PSM QRAM entries. */
        uint64_t queues                : 8;  /**< [  7:  0](RO) Number of PSM queues. */
#else /* Word 0 - Little Endian */
        uint64_t queues                : 8;  /**< [  7:  0](RO) Number of PSM queues. */
        uint64_t qram_size             : 24; /**< [ 31:  8](RO) Number of PSM QRAM entries. */
        uint64_t jobtypes              : 16; /**< [ 47: 32](RO) Number of PSM job types in each resource set. */
        uint64_t djcnt                 : 16; /**< [ 63: 48](RO) Number of PSM dependent job counters. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_const1_s cn; */
};
typedef union cavm_psm_const1 cavm_psm_const1_t;

#define CAVM_PSM_CONST1 CAVM_PSM_CONST1_FUNC()
static inline uint64_t CAVM_PSM_CONST1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_CONST1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x8600010f0100ll;
    if (cavm_is_model(OCTEONTX_F95O))
        return 0x8600010f0100ll;
    __cavm_csr_fatal("PSM_CONST1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_CONST1 cavm_psm_const1_t
#define bustype_CAVM_PSM_CONST1 CSR_TYPE_NCB
#define basename_CAVM_PSM_CONST1 "PSM_CONST1"
#define busnum_CAVM_PSM_CONST1 0
#define arguments_CAVM_PSM_CONST1 -1,-1,-1,-1

/**
 * Register (NCB) psm_const2
 *
 * PHY Scheduler Constants 2 Register
 * This register contains constants for software discovery.
 */
union cavm_psm_const2
{
    uint64_t u;
    struct cavm_psm_const2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t set2_mabs             : 8;  /**< [ 39: 32](RO) Number of MHABs and MDABs in resource set 2. */
        uint64_t set1_mabs             : 8;  /**< [ 31: 24](RO) Number of MHABs and MDABs in resource set 1. */
        uint64_t set0_mabs             : 8;  /**< [ 23: 16](RO) Number of MHABs and MDABs in resource set 0. */
        uint64_t grps                  : 8;  /**< [ 15:  8](RO) Number of resource groups in each resource set. */
        uint64_t rsrc_sets             : 8;  /**< [  7:  0](RO) Number of resource sets. */
#else /* Word 0 - Little Endian */
        uint64_t rsrc_sets             : 8;  /**< [  7:  0](RO) Number of resource sets. */
        uint64_t grps                  : 8;  /**< [ 15:  8](RO) Number of resource groups in each resource set. */
        uint64_t set0_mabs             : 8;  /**< [ 23: 16](RO) Number of MHABs and MDABs in resource set 0. */
        uint64_t set1_mabs             : 8;  /**< [ 31: 24](RO) Number of MHABs and MDABs in resource set 1. */
        uint64_t set2_mabs             : 8;  /**< [ 39: 32](RO) Number of MHABs and MDABs in resource set 2. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_const2_s cn; */
};
typedef union cavm_psm_const2 cavm_psm_const2_t;

#define CAVM_PSM_CONST2 CAVM_PSM_CONST2_FUNC()
static inline uint64_t CAVM_PSM_CONST2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_CONST2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x8600010f0110ll;
    if (cavm_is_model(OCTEONTX_F95O))
        return 0x8600010f0110ll;
    __cavm_csr_fatal("PSM_CONST2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_CONST2 cavm_psm_const2_t
#define bustype_CAVM_PSM_CONST2 CSR_TYPE_NCB
#define basename_CAVM_PSM_CONST2 "PSM_CONST2"
#define busnum_CAVM_PSM_CONST2 0
#define arguments_CAVM_PSM_CONST2 -1,-1,-1,-1

/**
 * Register (NCB) psm_dbg_break_cfg
 *
 * PHY Scheduler Debug Breakpoint Configuration Register
 * This register configures the debug breakpoint mechanism. When a breakpoint
 * is triggered, the PSM sets PSM_INT_ERRINT_SUM_W1C[BKTPT] and triggers a
 * PSM_INT_VEC_E::ERRINT interrupt, and can optionally halt.  While halted,
 * the PSM will not schedule any new jobs or execute any commands from the
 * 128 queues, but jobs can still complete, job completion commands can still
 * be processed, and new commands may still be added to the queues. The
 * queues can be unhalted by re-enabling the queues (i.e., a write to
 * PSM_QUEUE_ENA_W1S(), or a QRUN command received from a MHAB/MDAB).
 */
union cavm_psm_dbg_break_cfg
{
    uint64_t u;
    struct cavm_psm_dbg_break_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t start_brk_ena         : 1;  /**< [ 63: 63](R/W) Job start breakpoint enable. When set, a debug breakpoint will be
                                                                 triggered when the PSM schedules a job with a matching [JOB_TAG] to a
                                                                 MHAB/MDAB. */
        uint64_t done_brk_ena          : 1;  /**< [ 62: 62](R/W) Enables the debug breakpoint which will be triggered
                                                                 when receiving a job completion that matches the specified [JOB_TAG].
                                                                 Job done breakpoint enable. When set, a debug breakpoint will be
                                                                 triggered when the PSM receives a job completion message with matching
                                                                 [JOB_TAG]. */
        uint64_t stop_on_brk           : 1;  /**< [ 61: 61](R/W) When set, the PSM will halt when a breakpoint is triggered, in
                                                                 addition to signaling an interrupt. Otherwise, the
                                                                 PSM will continue execution after signaling the interrupt. */
        uint64_t halted                : 1;  /**< [ 60: 60](RO/H) The PSM sets this bit after halting due to a breakpoint.
                                                                 When set, all queues will be halted from advancing. Job completion and job
                                                                 queue additions are still enabled. Queues may be resumed by re-enabling
                                                                 them using the PSM_QUEUE_ENA_W1S() registers. */
        uint64_t reserved_16_59        : 44;
        uint64_t job_tag               : 16; /**< [ 15:  0](R/W) JOBTAG to be matched for the break mechanism. */
#else /* Word 0 - Little Endian */
        uint64_t job_tag               : 16; /**< [ 15:  0](R/W) JOBTAG to be matched for the break mechanism. */
        uint64_t reserved_16_59        : 44;
        uint64_t halted                : 1;  /**< [ 60: 60](RO/H) The PSM sets this bit after halting due to a breakpoint.
                                                                 When set, all queues will be halted from advancing. Job completion and job
                                                                 queue additions are still enabled. Queues may be resumed by re-enabling
                                                                 them using the PSM_QUEUE_ENA_W1S() registers. */
        uint64_t stop_on_brk           : 1;  /**< [ 61: 61](R/W) When set, the PSM will halt when a breakpoint is triggered, in
                                                                 addition to signaling an interrupt. Otherwise, the
                                                                 PSM will continue execution after signaling the interrupt. */
        uint64_t done_brk_ena          : 1;  /**< [ 62: 62](R/W) Enables the debug breakpoint which will be triggered
                                                                 when receiving a job completion that matches the specified [JOB_TAG].
                                                                 Job done breakpoint enable. When set, a debug breakpoint will be
                                                                 triggered when the PSM receives a job completion message with matching
                                                                 [JOB_TAG]. */
        uint64_t start_brk_ena         : 1;  /**< [ 63: 63](R/W) Job start breakpoint enable. When set, a debug breakpoint will be
                                                                 triggered when the PSM schedules a job with a matching [JOB_TAG] to a
                                                                 MHAB/MDAB. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_dbg_break_cfg_s cn; */
};
typedef union cavm_psm_dbg_break_cfg cavm_psm_dbg_break_cfg_t;

#define CAVM_PSM_DBG_BREAK_CFG CAVM_PSM_DBG_BREAK_CFG_FUNC()
static inline uint64_t CAVM_PSM_DBG_BREAK_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_DBG_BREAK_CFG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x8600010f4100ll;
    if (cavm_is_model(OCTEONTX_F95O))
        return 0x8600010f4100ll;
    __cavm_csr_fatal("PSM_DBG_BREAK_CFG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_DBG_BREAK_CFG cavm_psm_dbg_break_cfg_t
#define bustype_CAVM_PSM_DBG_BREAK_CFG CSR_TYPE_NCB
#define basename_CAVM_PSM_DBG_BREAK_CFG "PSM_DBG_BREAK_CFG"
#define busnum_CAVM_PSM_DBG_BREAK_CFG 0
#define arguments_CAVM_PSM_DBG_BREAK_CFG -1,-1,-1,-1

/**
 * Register (NCB) psm_djcnt#_cfg
 *
 * PHY Scheduler Dependent Job Config Register
 * These registers allow reading and setting of dependent job counters.
 */
union cavm_psm_djcntx_cfg
{
    uint64_t u;
    struct cavm_psm_djcntx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_11_63        : 53;
        uint64_t djcnt_sat             : 1;  /**< [ 10: 10](R/W) Reserved. */
        uint64_t djcnt_sosf            : 1;  /**< [  9:  9](R/W) Enable SOS auto-decrement. When set, the DJCNT will decrement by one
                                                                 when an RFIF SOS is received. */
        uint64_t djcnt_update          : 1;  /**< [  8:  8](R/W/H) When written 1, the DJCNT will be updated with [DJCNT_VAL]. */
        uint64_t djcnt_val             : 8;  /**< [  7:  0](R/W/H) On read, returns the current value of the DJCNT. On write, the DJCNT will be
                                                                 updated with this value if [DJCNT_UPDATE] is set. */
#else /* Word 0 - Little Endian */
        uint64_t djcnt_val             : 8;  /**< [  7:  0](R/W/H) On read, returns the current value of the DJCNT. On write, the DJCNT will be
                                                                 updated with this value if [DJCNT_UPDATE] is set. */
        uint64_t djcnt_update          : 1;  /**< [  8:  8](R/W/H) When written 1, the DJCNT will be updated with [DJCNT_VAL]. */
        uint64_t djcnt_sosf            : 1;  /**< [  9:  9](R/W) Enable SOS auto-decrement. When set, the DJCNT will decrement by one
                                                                 when an RFIF SOS is received. */
        uint64_t djcnt_sat             : 1;  /**< [ 10: 10](R/W) Reserved. */
        uint64_t reserved_11_63        : 53;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_djcntx_cfg_s cn9; */
    /* struct cavm_psm_djcntx_cfg_s cnf95xxp1; */
    struct cavm_psm_djcntx_cfg_cnf95xxp2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_11_63        : 53;
        uint64_t djcnt_sat             : 1;  /**< [ 10: 10](R/W) Enable counter saturation.  When set, the DJCNT will not
                                                                 increment past 0xFF or decrement below 0x0. */
        uint64_t djcnt_sosf            : 1;  /**< [  9:  9](R/W) Enable SOS auto-decrement. When set, the DJCNT will decrement by one
                                                                 when an RFIF SOS is received. */
        uint64_t djcnt_update          : 1;  /**< [  8:  8](R/W/H) When written 1, the DJCNT will be updated with [DJCNT_VAL]. */
        uint64_t djcnt_val             : 8;  /**< [  7:  0](R/W/H) On read, returns the current value of the DJCNT. On write, the DJCNT will be
                                                                 updated with this value if [DJCNT_UPDATE] is set. */
#else /* Word 0 - Little Endian */
        uint64_t djcnt_val             : 8;  /**< [  7:  0](R/W/H) On read, returns the current value of the DJCNT. On write, the DJCNT will be
                                                                 updated with this value if [DJCNT_UPDATE] is set. */
        uint64_t djcnt_update          : 1;  /**< [  8:  8](R/W/H) When written 1, the DJCNT will be updated with [DJCNT_VAL]. */
        uint64_t djcnt_sosf            : 1;  /**< [  9:  9](R/W) Enable SOS auto-decrement. When set, the DJCNT will decrement by one
                                                                 when an RFIF SOS is received. */
        uint64_t djcnt_sat             : 1;  /**< [ 10: 10](R/W) Enable counter saturation.  When set, the DJCNT will not
                                                                 increment past 0xFF or decrement below 0x0. */
        uint64_t reserved_11_63        : 53;
#endif /* Word 0 - End */
    } cnf95xxp2;
    /* struct cavm_psm_djcntx_cfg_cnf95xxp2 cnf95xxp3; */
    /* struct cavm_psm_djcntx_cfg_cnf95xxp2 f95o; */
};
typedef union cavm_psm_djcntx_cfg cavm_psm_djcntx_cfg_t;

static inline uint64_t CAVM_PSM_DJCNTX_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_DJCNTX_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=127))
        return 0x8600010f2000ll + 0x10ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=127))
        return 0x8600010f2000ll + 0x10ll * ((a) & 0x7f);
    __cavm_csr_fatal("PSM_DJCNTX_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_DJCNTX_CFG(a) cavm_psm_djcntx_cfg_t
#define bustype_CAVM_PSM_DJCNTX_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_DJCNTX_CFG(a) "PSM_DJCNTX_CFG"
#define busnum_CAVM_PSM_DJCNTX_CFG(a) (a)
#define arguments_CAVM_PSM_DJCNTX_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_djcnt_extdecr
 *
 * PHY Scheduler Dependent Job External Event Decrementer Register
 * This register selects which DJCNT counters are decremented based on the
 * external event inputs from other blocks.
 */
union cavm_psm_djcnt_extdecr
{
    uint64_t u;
    struct cavm_psm_djcnt_extdecr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t djcnt_decr_id_7       : 7;  /**< [ 62: 56](R/W) Reserved. */
        uint64_t reserved_55           : 1;
        uint64_t djcnt_decr_id_6       : 7;  /**< [ 54: 48](R/W) Reserved. */
        uint64_t reserved_47           : 1;
        uint64_t djcnt_decr_id_5       : 7;  /**< [ 46: 40](R/W) For future use.
                                                                 Selects the DJCNT counter that will be decremented by the PSM when it
                                                                 receives an input strobe djcnt_decr[5].  Values 1-127
                                                                 will select a DJCNT, while 0 will cause the event signal to have no
                                                                 effect on any counter. */
        uint64_t reserved_39           : 1;
        uint64_t djcnt_decr_id_4       : 7;  /**< [ 38: 32](R/W) For future use.
                                                                 Selects the DJCNT counter that will be decremented by the PSM when it
                                                                 receives an input strobe djcnt_decr[4].  Values 1-127
                                                                 will select a DJCNT, while 0 will cause the event signal to have no
                                                                 effect on any counter. */
        uint64_t reserved_31           : 1;
        uint64_t djcnt_decr_id_3       : 7;  /**< [ 30: 24](R/W) For future use.
                                                                 Selects the DJCNT counter that will be decremented by the PSM when it
                                                                 receives an input strobe djcnt_decr[3].  Values 1-127
                                                                 will select a DJCNT, while 0 will cause the event signal to have no
                                                                 effect on any counter. */
        uint64_t reserved_23           : 1;
        uint64_t djcnt_decr_id_2       : 7;  /**< [ 22: 16](R/W) For future use.
                                                                 Selects the DJCNT counter that will be decremented by the PSM when it
                                                                 receives an input strobe djcnt_decr[2].  Values 1-127
                                                                 will select a DJCNT, while 0 will cause the event signal to have no
                                                                 effect on any counter. */
        uint64_t reserved_15           : 1;
        uint64_t fdeq1_decr_id         : 7;  /**< [ 14:  8](R/W) Selects the DJCNT counter that will be decremented by the PSM when it
                                                                 receives a symbol completion signal from FDEQ1.  Values 1-127 will
                                                                 select a DJCNT, while 0 will cause the event signal to have no effect
                                                                 on any counter. */
        uint64_t reserved_7            : 1;
        uint64_t fdeq0_decr_id         : 7;  /**< [  6:  0](R/W) Selects the DJCNT counter that will be decremented by the PSM when it
                                                                 receives a symbol completion signal from FDEQ0.  Values 1-127 will
                                                                 select a DJCNT, while 0 will cause the event signal to have no effect
                                                                 on any counter. */
#else /* Word 0 - Little Endian */
        uint64_t fdeq0_decr_id         : 7;  /**< [  6:  0](R/W) Selects the DJCNT counter that will be decremented by the PSM when it
                                                                 receives a symbol completion signal from FDEQ0.  Values 1-127 will
                                                                 select a DJCNT, while 0 will cause the event signal to have no effect
                                                                 on any counter. */
        uint64_t reserved_7            : 1;
        uint64_t fdeq1_decr_id         : 7;  /**< [ 14:  8](R/W) Selects the DJCNT counter that will be decremented by the PSM when it
                                                                 receives a symbol completion signal from FDEQ1.  Values 1-127 will
                                                                 select a DJCNT, while 0 will cause the event signal to have no effect
                                                                 on any counter. */
        uint64_t reserved_15           : 1;
        uint64_t djcnt_decr_id_2       : 7;  /**< [ 22: 16](R/W) For future use.
                                                                 Selects the DJCNT counter that will be decremented by the PSM when it
                                                                 receives an input strobe djcnt_decr[2].  Values 1-127
                                                                 will select a DJCNT, while 0 will cause the event signal to have no
                                                                 effect on any counter. */
        uint64_t reserved_23           : 1;
        uint64_t djcnt_decr_id_3       : 7;  /**< [ 30: 24](R/W) For future use.
                                                                 Selects the DJCNT counter that will be decremented by the PSM when it
                                                                 receives an input strobe djcnt_decr[3].  Values 1-127
                                                                 will select a DJCNT, while 0 will cause the event signal to have no
                                                                 effect on any counter. */
        uint64_t reserved_31           : 1;
        uint64_t djcnt_decr_id_4       : 7;  /**< [ 38: 32](R/W) For future use.
                                                                 Selects the DJCNT counter that will be decremented by the PSM when it
                                                                 receives an input strobe djcnt_decr[4].  Values 1-127
                                                                 will select a DJCNT, while 0 will cause the event signal to have no
                                                                 effect on any counter. */
        uint64_t reserved_39           : 1;
        uint64_t djcnt_decr_id_5       : 7;  /**< [ 46: 40](R/W) For future use.
                                                                 Selects the DJCNT counter that will be decremented by the PSM when it
                                                                 receives an input strobe djcnt_decr[5].  Values 1-127
                                                                 will select a DJCNT, while 0 will cause the event signal to have no
                                                                 effect on any counter. */
        uint64_t reserved_47           : 1;
        uint64_t djcnt_decr_id_6       : 7;  /**< [ 54: 48](R/W) Reserved. */
        uint64_t reserved_55           : 1;
        uint64_t djcnt_decr_id_7       : 7;  /**< [ 62: 56](R/W) Reserved. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_djcnt_extdecr_s cn; */
};
typedef union cavm_psm_djcnt_extdecr cavm_psm_djcnt_extdecr_t;

#define CAVM_PSM_DJCNT_EXTDECR CAVM_PSM_DJCNT_EXTDECR_FUNC()
static inline uint64_t CAVM_PSM_DJCNT_EXTDECR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_DJCNT_EXTDECR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x8600010f3000ll;
    if (cavm_is_model(OCTEONTX_F95O))
        return 0x8600010f3000ll;
    __cavm_csr_fatal("PSM_DJCNT_EXTDECR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_DJCNT_EXTDECR cavm_psm_djcnt_extdecr_t
#define bustype_CAVM_PSM_DJCNT_EXTDECR CSR_TYPE_NCB
#define basename_CAVM_PSM_DJCNT_EXTDECR "PSM_DJCNT_EXTDECR"
#define busnum_CAVM_PSM_DJCNT_EXTDECR 0
#define arguments_CAVM_PSM_DJCNT_EXTDECR -1,-1,-1,-1

/**
 * Register (NCB) psm_errcap_queue_badcmd#
 *
 * PHY Scheduler Queue Bad Command Capture Registers
 * This register reports the status of bad command errors reported by queues.
 */
union cavm_psm_errcap_queue_badcmdx
{
    uint64_t u;
    struct cavm_psm_errcap_queue_badcmdx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t queue_bad_cmd         : 64; /**< [ 63:  0](R/W1C/H) When a bit is set, the corresponding queue has reported a bad command.
                                                                 Write 1 to clear. */
#else /* Word 0 - Little Endian */
        uint64_t queue_bad_cmd         : 64; /**< [ 63:  0](R/W1C/H) When a bit is set, the corresponding queue has reported a bad command.
                                                                 Write 1 to clear. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_errcap_queue_badcmdx_s cn; */
};
typedef union cavm_psm_errcap_queue_badcmdx cavm_psm_errcap_queue_badcmdx_t;

static inline uint64_t CAVM_PSM_ERRCAP_QUEUE_BADCMDX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_ERRCAP_QUEUE_BADCMDX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=1))
        return 0x8600010f8000ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=1))
        return 0x8600010f8000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_ERRCAP_QUEUE_BADCMDX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_ERRCAP_QUEUE_BADCMDX(a) cavm_psm_errcap_queue_badcmdx_t
#define bustype_CAVM_PSM_ERRCAP_QUEUE_BADCMDX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_ERRCAP_QUEUE_BADCMDX(a) "PSM_ERRCAP_QUEUE_BADCMDX"
#define busnum_CAVM_PSM_ERRCAP_QUEUE_BADCMDX(a) (a)
#define arguments_CAVM_PSM_ERRCAP_QUEUE_BADCMDX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_gmctrl
 *
 * PHY Scheduler Guest Machine Control Register
 * This register controls which RVU PFs/VFs PSM communicates with of SSO
 * add-work commands and NPA free pointer commands.
 */
union cavm_psm_gmctrl
{
    uint64_t u;
    struct cavm_psm_gmctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t sso_pf_func           : 16; /**< [ 31: 16](R/W) SSO PF and function used for SSO add-work requests. Format specified
                                                                 by RVU_PF_FUNC_S. */
        uint64_t npa_pf_func           : 16; /**< [ 15:  0](R/W) NPA PF and function used for NPA free pointer requests. Format specified
                                                                 by RVU_PF_FUNC_S. */
#else /* Word 0 - Little Endian */
        uint64_t npa_pf_func           : 16; /**< [ 15:  0](R/W) NPA PF and function used for NPA free pointer requests. Format specified
                                                                 by RVU_PF_FUNC_S. */
        uint64_t sso_pf_func           : 16; /**< [ 31: 16](R/W) SSO PF and function used for SSO add-work requests. Format specified
                                                                 by RVU_PF_FUNC_S. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_gmctrl_s cn; */
};
typedef union cavm_psm_gmctrl cavm_psm_gmctrl_t;

#define CAVM_PSM_GMCTRL CAVM_PSM_GMCTRL_FUNC()
static inline uint64_t CAVM_PSM_GMCTRL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_GMCTRL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x8600010f0010ll;
    if (cavm_is_model(OCTEONTX_F95O))
        return 0x8600010f0010ll;
    __cavm_csr_fatal("PSM_GMCTRL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_GMCTRL cavm_psm_gmctrl_t
#define bustype_CAVM_PSM_GMCTRL CSR_TYPE_NCB
#define basename_CAVM_PSM_GMCTRL "PSM_GMCTRL"
#define busnum_CAVM_PSM_GMCTRL 0
#define arguments_CAVM_PSM_GMCTRL -1,-1,-1,-1

/**
 * Register (NCB) psm_log_base
 *
 * PHY Scheduler Log Base Register
 * This register sets the location in memory of the PSM log circular buffer.
 */
union cavm_psm_log_base
{
    uint64_t u;
    struct cavm_psm_log_base_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t base_ptr              : 53; /**< [ 52:  0](R/W/H) Byte address for the command log base pointer. Must be cacheline
                                                                 (128 byte) aligned. */
#else /* Word 0 - Little Endian */
        uint64_t base_ptr              : 53; /**< [ 52:  0](R/W/H) Byte address for the command log base pointer. Must be cacheline
                                                                 (128 byte) aligned. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_log_base_s cn; */
};
typedef union cavm_psm_log_base cavm_psm_log_base_t;

#define CAVM_PSM_LOG_BASE CAVM_PSM_LOG_BASE_FUNC()
static inline uint64_t CAVM_PSM_LOG_BASE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_LOG_BASE_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x8600010f4010ll;
    if (cavm_is_model(OCTEONTX_F95O))
        return 0x8600010f4010ll;
    __cavm_csr_fatal("PSM_LOG_BASE", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_LOG_BASE cavm_psm_log_base_t
#define bustype_CAVM_PSM_LOG_BASE CSR_TYPE_NCB
#define basename_CAVM_PSM_LOG_BASE "PSM_LOG_BASE"
#define busnum_CAVM_PSM_LOG_BASE 0
#define arguments_CAVM_PSM_LOG_BASE -1,-1,-1,-1

/**
 * Register (NCB) psm_log_cfg
 *
 * PHY Scheduler Log Configuration Register
 * This register configures the command log circular buffer and enables the
 * logging feature. The progress of written log entries can be tracked
 * using the PSM_LOG_PTR register. When the pointer wraps around to the
 * beginning of the circular buffer, the PSM log rollover interrupt is
 * triggered.
 *
 * Each log entry is 256 bits.  The log entry format is specified by PSM_LOG_S.
 *
 * Log entries are buffered in an internal buffer before being written 128
 * bytes at a time (i.e., 4 entries at a time). If PSM_LOG_CFG[FLUSH] is
 * written and the number of entries in the internal buffer is not a multiple
 * of 4, then the log will be padded with zeros to account for missing
 * entries. The internal buffer can store up to 64 entries. If an additional
 * log event (e.g., a job start) occurs while the buffer is full and waiting
 * for a write to complete, then PSM_INT_ERRINT_SUM_W1C[LOVF] is set and a
 * PSM_INT_VEC_E::ERRINT interrupt is triggered.
 */
union cavm_psm_log_cfg
{
    uint64_t u;
    struct cavm_psm_log_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t log_thold             : 4;  /**< [ 51: 48](R/W) Threshold for initiating a write operation to dump log entries to memory.
                                                                 The threshold value is in units of cachelines (128 bytes, i.e., 4 log
                                                                 entry chunks). The valid range is 0x1-0xF, and a large threshold will
                                                                 likely result in frequent overflow errors. */
        uint64_t reserved_45_47        : 3;
        uint64_t tmem                  : 1;  /**< [ 44: 44](R/W) Location of the log buffer.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t reserved_41_43        : 3;
        uint64_t flush                 : 1;  /**< [ 40: 40](R/W/H) When written 1, flushes any pending log entries remaining
                                                                 in the internal buffer. Automatically clears to zero after the flush
                                                                 completes and all log entries have been committed to memory. */
        uint64_t reserved_35_39        : 5;
        uint64_t log_nonjob_en         : 1;  /**< [ 34: 34](R/W) Enable output log of nonjob commands. */
        uint64_t log_jobrsp_en         : 1;  /**< [ 33: 33](R/W) Enable output log of all job completions and errors. */
        uint64_t log_start_en          : 1;  /**< [ 32: 32](R/W) Enable output log of all job starts. */
        uint64_t reserved_16_31        : 16;
        uint64_t log_size              : 16; /**< [ 15:  0](R/W) Size in cache lines (128 byte units) of the circular buffer log. */
#else /* Word 0 - Little Endian */
        uint64_t log_size              : 16; /**< [ 15:  0](R/W) Size in cache lines (128 byte units) of the circular buffer log. */
        uint64_t reserved_16_31        : 16;
        uint64_t log_start_en          : 1;  /**< [ 32: 32](R/W) Enable output log of all job starts. */
        uint64_t log_jobrsp_en         : 1;  /**< [ 33: 33](R/W) Enable output log of all job completions and errors. */
        uint64_t log_nonjob_en         : 1;  /**< [ 34: 34](R/W) Enable output log of nonjob commands. */
        uint64_t reserved_35_39        : 5;
        uint64_t flush                 : 1;  /**< [ 40: 40](R/W/H) When written 1, flushes any pending log entries remaining
                                                                 in the internal buffer. Automatically clears to zero after the flush
                                                                 completes and all log entries have been committed to memory. */
        uint64_t reserved_41_43        : 3;
        uint64_t tmem                  : 1;  /**< [ 44: 44](R/W) Location of the log buffer.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t reserved_45_47        : 3;
        uint64_t log_thold             : 4;  /**< [ 51: 48](R/W) Threshold for initiating a write operation to dump log entries to memory.
                                                                 The threshold value is in units of cachelines (128 bytes, i.e., 4 log
                                                                 entry chunks). The valid range is 0x1-0xF, and a large threshold will
                                                                 likely result in frequent overflow errors. */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_log_cfg_s cn; */
};
typedef union cavm_psm_log_cfg cavm_psm_log_cfg_t;

#define CAVM_PSM_LOG_CFG CAVM_PSM_LOG_CFG_FUNC()
static inline uint64_t CAVM_PSM_LOG_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_LOG_CFG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x8600010f4000ll;
    if (cavm_is_model(OCTEONTX_F95O))
        return 0x8600010f4000ll;
    __cavm_csr_fatal("PSM_LOG_CFG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_LOG_CFG cavm_psm_log_cfg_t
#define bustype_CAVM_PSM_LOG_CFG CSR_TYPE_NCB
#define basename_CAVM_PSM_LOG_CFG "PSM_LOG_CFG"
#define busnum_CAVM_PSM_LOG_CFG 0
#define arguments_CAVM_PSM_LOG_CFG -1,-1,-1,-1

/**
 * Register (NCB) psm_log_ptr
 *
 * PHY Scheduler Log Pointer Register
 * This register indicates the current log pointer, where the next
 * log entry will be written. When the pointer wraps around to the
 * beginning of the circular buffer, the PSM_INT_ERRINT_SUM_W1C[LROLL] is set
 * and a PSM_INT_VEC_E::ERRINT interrupt is triggered.
 */
union cavm_psm_log_ptr
{
    uint64_t u;
    struct cavm_psm_log_ptr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t log_ptr               : 53; /**< [ 52:  0](RO/H) System memory IOVA of the current output pointer for the command trace
                                                                 log.  Note that PSM always writes the log 128 bytes at a time. */
#else /* Word 0 - Little Endian */
        uint64_t log_ptr               : 53; /**< [ 52:  0](RO/H) System memory IOVA of the current output pointer for the command trace
                                                                 log.  Note that PSM always writes the log 128 bytes at a time. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_log_ptr_s cn; */
};
typedef union cavm_psm_log_ptr cavm_psm_log_ptr_t;

#define CAVM_PSM_LOG_PTR CAVM_PSM_LOG_PTR_FUNC()
static inline uint64_t CAVM_PSM_LOG_PTR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_LOG_PTR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x8600010f4020ll;
    if (cavm_is_model(OCTEONTX_F95O))
        return 0x8600010f4020ll;
    __cavm_csr_fatal("PSM_LOG_PTR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_LOG_PTR cavm_psm_log_ptr_t
#define bustype_CAVM_PSM_LOG_PTR CSR_TYPE_NCB
#define basename_CAVM_PSM_LOG_PTR "PSM_LOG_PTR"
#define busnum_CAVM_PSM_LOG_PTR 0
#define arguments_CAVM_PSM_LOG_PTR -1,-1,-1,-1

/**
 * Register (NCB) psm_queue#_cfg
 *
 * PHY Scheduler Queue Configuration Registers
 * These registers configure the start and end of each circular command
 * queue within the queue RAM. The queue RAM contains PSM_CONST1[QRAM_SIZE] entries, and
 * software must allocate the queues so that they do not overlap. These
 * registers should only be written during initial PSM setup when the PSM is
 * idle.
 *
 * Note that writing to a PSM_QUEUE()_CFG register will automatically reset
 * the head and tail pointers of the corresponding queue. Any commands in the
 * queue before the write will be dropped and the queue will be reset to an
 * empty state.
 *
 * Also, note that at reset, all queues are effectively uninitialized, and
 * PSM_QUEUE()_SPACE will return 0. Queues must be initialized by writing to
 * PSM_QUEUE()_CFG before they can be used. This is true even in the case of
 * a single-entry queue that starts and ends at entry 0.
 */
union cavm_psm_queuex_cfg
{
    uint64_t u;
    struct cavm_psm_queuex_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_34_63        : 30;
        uint64_t prio                  : 2;  /**< [ 33: 32](R/W) Queue priority. 0x0 is the highest priority and 0x3 is the lowest. */
        uint64_t reserved_30_31        : 2;
        uint64_t top                   : 14; /**< [ 29: 16](R/W) Indicates the highest queue RAM address allocated for the
                                                                 queue. Must be greater than the BASE address pointer. */
        uint64_t reserved_14_15        : 2;
        uint64_t base                  : 14; /**< [ 13:  0](R/W) Indicates the lowest queue RAM address allocated for the
                                                                 queue. Must be lower than the TOP address pointer. */
#else /* Word 0 - Little Endian */
        uint64_t base                  : 14; /**< [ 13:  0](R/W) Indicates the lowest queue RAM address allocated for the
                                                                 queue. Must be lower than the TOP address pointer. */
        uint64_t reserved_14_15        : 2;
        uint64_t top                   : 14; /**< [ 29: 16](R/W) Indicates the highest queue RAM address allocated for the
                                                                 queue. Must be greater than the BASE address pointer. */
        uint64_t reserved_30_31        : 2;
        uint64_t prio                  : 2;  /**< [ 33: 32](R/W) Queue priority. 0x0 is the highest priority and 0x3 is the lowest. */
        uint64_t reserved_34_63        : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_queuex_cfg_s cn9; */
    /* struct cavm_psm_queuex_cfg_s cnf95xxp1; */
    struct cavm_psm_queuex_cfg_cnf95xxp2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_34_63        : 30;
        uint64_t prio                  : 2;  /**< [ 33: 32](R/W) Queue priority. 0x0 is the highest priority and 0x3 is the lowest. */
        uint64_t reserved_30_31        : 2;
        uint64_t top                   : 14; /**< [ 29: 16](R/W) Indicates the highest queue RAM address allocated for the
                                                                 queue. Must be greater than or equal to the [BASE] address pointer. */
        uint64_t reserved_14_15        : 2;
        uint64_t base                  : 14; /**< [ 13:  0](R/W) Indicates the lowest queue RAM address allocated for the
                                                                 queue. Must be less than or equal to the [TOP] address pointer. */
#else /* Word 0 - Little Endian */
        uint64_t base                  : 14; /**< [ 13:  0](R/W) Indicates the lowest queue RAM address allocated for the
                                                                 queue. Must be less than or equal to the [TOP] address pointer. */
        uint64_t reserved_14_15        : 2;
        uint64_t top                   : 14; /**< [ 29: 16](R/W) Indicates the highest queue RAM address allocated for the
                                                                 queue. Must be greater than or equal to the [BASE] address pointer. */
        uint64_t reserved_30_31        : 2;
        uint64_t prio                  : 2;  /**< [ 33: 32](R/W) Queue priority. 0x0 is the highest priority and 0x3 is the lowest. */
        uint64_t reserved_34_63        : 30;
#endif /* Word 0 - End */
    } cnf95xxp2;
    /* struct cavm_psm_queuex_cfg_cnf95xxp2 cnf95xxp3; */
    /* struct cavm_psm_queuex_cfg_s f95o; */
};
typedef union cavm_psm_queuex_cfg cavm_psm_queuex_cfg_t;

static inline uint64_t CAVM_PSM_QUEUEX_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_QUEUEX_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=127))
        return 0x860001001000ll + 0x10ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=127))
        return 0x860001001000ll + 0x10ll * ((a) & 0x7f);
    __cavm_csr_fatal("PSM_QUEUEX_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_QUEUEX_CFG(a) cavm_psm_queuex_cfg_t
#define bustype_CAVM_PSM_QUEUEX_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_QUEUEX_CFG(a) "PSM_QUEUEX_CFG"
#define busnum_CAVM_PSM_QUEUEX_CFG(a) (a)
#define arguments_CAVM_PSM_QUEUEX_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_queue#_cmd_hi
 *
 * PHY Schedulder Queue Command High Pseudo-Registers
 * See PSM_QUEUE()_CMD_LO.
 */
union cavm_psm_queuex_cmd_hi
{
    uint64_t u;
    struct cavm_psm_queuex_cmd_hi_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t command_hi            : 64; /**< [ 63:  0](WO) The high 64 bits of a PSM command. */
#else /* Word 0 - Little Endian */
        uint64_t command_hi            : 64; /**< [ 63:  0](WO) The high 64 bits of a PSM command. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_queuex_cmd_hi_s cn; */
};
typedef union cavm_psm_queuex_cmd_hi cavm_psm_queuex_cmd_hi_t;

static inline uint64_t CAVM_PSM_QUEUEX_CMD_HI(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_QUEUEX_CMD_HI(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=127))
        return 0x860001000008ll + 0x10ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=127))
        return 0x860001000008ll + 0x10ll * ((a) & 0x7f);
    __cavm_csr_fatal("PSM_QUEUEX_CMD_HI", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_QUEUEX_CMD_HI(a) cavm_psm_queuex_cmd_hi_t
#define bustype_CAVM_PSM_QUEUEX_CMD_HI(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_QUEUEX_CMD_HI(a) "PSM_QUEUEX_CMD_HI"
#define busnum_CAVM_PSM_QUEUEX_CMD_HI(a) (a)
#define arguments_CAVM_PSM_QUEUEX_CMD_HI(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_queue#_cmd_lo
 *
 * PHY Scheduler Queue Command Low Pseudo-Registers
 * A write to this register enqueues a command in a command queue. Either:
 * * A single-transaction 128-bit store (STP) is used to PSM_QUEUE()_CMD_LO
 * and PSM_QUEUE()_CMD_HI to enqueue a single command.
 * * Or, two separate 64-bit writes to PSM_QUEUE()_CMD_LO and
 * PSM_QUEUE()_CMD_HI are used to enqueue a single command. In this case, the
 * write to PSM_QUEUE()_CMD_LO must happen first, and the value is buffered
 * in PSM until the next write to PSM_QUEUE()_CMD_HI for the same queue.
 *
 * If the queue is full when adding a command, a PSM_INT_VEC_E::QOVF()
 * interrupt is triggered and the command is dropped.
 */
union cavm_psm_queuex_cmd_lo
{
    uint64_t u;
    struct cavm_psm_queuex_cmd_lo_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t command_lo            : 64; /**< [ 63:  0](R/W/H) The low 64 bits of a PSM command. */
#else /* Word 0 - Little Endian */
        uint64_t command_lo            : 64; /**< [ 63:  0](R/W/H) The low 64 bits of a PSM command. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_queuex_cmd_lo_s cn; */
};
typedef union cavm_psm_queuex_cmd_lo cavm_psm_queuex_cmd_lo_t;

static inline uint64_t CAVM_PSM_QUEUEX_CMD_LO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_QUEUEX_CMD_LO(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=127))
        return 0x860001000000ll + 0x10ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=127))
        return 0x860001000000ll + 0x10ll * ((a) & 0x7f);
    __cavm_csr_fatal("PSM_QUEUEX_CMD_LO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_QUEUEX_CMD_LO(a) cavm_psm_queuex_cmd_lo_t
#define bustype_CAVM_PSM_QUEUEX_CMD_LO(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_QUEUEX_CMD_LO(a) "PSM_QUEUEX_CMD_LO"
#define busnum_CAVM_PSM_QUEUEX_CMD_LO(a) (a)
#define arguments_CAVM_PSM_QUEUEX_CMD_LO(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_queue#_info
 *
 * PHY Scheduler Queue Info Register
 * These registers contain internal information about the queue.
 */
union cavm_psm_queuex_info
{
    uint64_t u;
    struct cavm_psm_queuex_info_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cur_cmd_jobtype       : 8;  /**< [ 63: 56](RO/H) Contains the JOBTYPE field of the currently executing command. */
        uint64_t cur_cmd_wait_cond     : 8;  /**< [ 55: 48](RO/H) Contains the WAIT_COND field of the currently executing command. */
        uint64_t cur_cmd_subopcode     : 2;  /**< [ 47: 46](RO/H) Contains the sub-opcode of the currently executing command. */
        uint64_t cur_cmd_opcode        : 6;  /**< [ 45: 40](RO/H) Contains the opcode of the currently executing command. */
        uint64_t reserved_38_39        : 2;
        uint64_t cont_mab_id           : 6;  /**< [ 37: 32](RO/H) When [IN_CONT_SEQ] is set to one, this field provides the MAB ID of the
                                                                 MHAB/MDAB reserved by the CONTJOB. */
        uint64_t reserved_30_31        : 2;
        uint64_t badcmd_opc            : 6;  /**< [ 29: 24](R/W/H) Contains the opcode for the most recent bad command.  Write any nonzero value to clear. */
        uint64_t runjob_ctr            : 8;  /**< [ 23: 16](R/W/H) Contains the current count of running jobs issued by the queue. */
        uint64_t queue_mabq            : 1;  /**< [ 15: 15](RO/H) fixme */
        uint64_t queue_njreq           : 3;  /**< [ 14: 12](RO/H) fixme */
        uint64_t state                 : 4;  /**< [ 11:  8](RO/H) fixme */
        uint64_t queue_jobreq          : 1;  /**< [  7:  7](RO/H) fixme */
        uint64_t cont_job_wait_cdt     : 1;  /**< [  6:  6](RO/H) fixme */
        uint64_t cont_job_wait_done    : 1;  /**< [  5:  5](RO/H) fixme */
        uint64_t rdy_for_followup      : 1;  /**< [  4:  4](RO/H) When set, indicates the queue is ready to schedule a follow-up job
                                                                 after completing a continued job. */
        uint64_t in_cont_seq           : 1;  /**< [  3:  3](RO/H) When set, indicates that the queue holds a reservation from a
                                                                 continued job. */
        uint64_t cur_cmd_vld           : 1;  /**< [  2:  2](RO/H) fixme */
        uint64_t new_cmdlo_vld         : 1;  /**< [  1:  1](RO/H) fixme */
        uint64_t new_cmd_vld           : 1;  /**< [  0:  0](RO/H) fixme */
#else /* Word 0 - Little Endian */
        uint64_t new_cmd_vld           : 1;  /**< [  0:  0](RO/H) fixme */
        uint64_t new_cmdlo_vld         : 1;  /**< [  1:  1](RO/H) fixme */
        uint64_t cur_cmd_vld           : 1;  /**< [  2:  2](RO/H) fixme */
        uint64_t in_cont_seq           : 1;  /**< [  3:  3](RO/H) When set, indicates that the queue holds a reservation from a
                                                                 continued job. */
        uint64_t rdy_for_followup      : 1;  /**< [  4:  4](RO/H) When set, indicates the queue is ready to schedule a follow-up job
                                                                 after completing a continued job. */
        uint64_t cont_job_wait_done    : 1;  /**< [  5:  5](RO/H) fixme */
        uint64_t cont_job_wait_cdt     : 1;  /**< [  6:  6](RO/H) fixme */
        uint64_t queue_jobreq          : 1;  /**< [  7:  7](RO/H) fixme */
        uint64_t state                 : 4;  /**< [ 11:  8](RO/H) fixme */
        uint64_t queue_njreq           : 3;  /**< [ 14: 12](RO/H) fixme */
        uint64_t queue_mabq            : 1;  /**< [ 15: 15](RO/H) fixme */
        uint64_t runjob_ctr            : 8;  /**< [ 23: 16](R/W/H) Contains the current count of running jobs issued by the queue. */
        uint64_t badcmd_opc            : 6;  /**< [ 29: 24](R/W/H) Contains the opcode for the most recent bad command.  Write any nonzero value to clear. */
        uint64_t reserved_30_31        : 2;
        uint64_t cont_mab_id           : 6;  /**< [ 37: 32](RO/H) When [IN_CONT_SEQ] is set to one, this field provides the MAB ID of the
                                                                 MHAB/MDAB reserved by the CONTJOB. */
        uint64_t reserved_38_39        : 2;
        uint64_t cur_cmd_opcode        : 6;  /**< [ 45: 40](RO/H) Contains the opcode of the currently executing command. */
        uint64_t cur_cmd_subopcode     : 2;  /**< [ 47: 46](RO/H) Contains the sub-opcode of the currently executing command. */
        uint64_t cur_cmd_wait_cond     : 8;  /**< [ 55: 48](RO/H) Contains the WAIT_COND field of the currently executing command. */
        uint64_t cur_cmd_jobtype       : 8;  /**< [ 63: 56](RO/H) Contains the JOBTYPE field of the currently executing command. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_queuex_info_s cn; */
};
typedef union cavm_psm_queuex_info cavm_psm_queuex_info_t;

static inline uint64_t CAVM_PSM_QUEUEX_INFO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_QUEUEX_INFO(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=127))
        return 0x860001005000ll + 0x10ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=127))
        return 0x860001005000ll + 0x10ll * ((a) & 0x7f);
    __cavm_csr_fatal("PSM_QUEUEX_INFO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_QUEUEX_INFO(a) cavm_psm_queuex_info_t
#define bustype_CAVM_PSM_QUEUEX_INFO(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_QUEUEX_INFO(a) "PSM_QUEUEX_INFO"
#define busnum_CAVM_PSM_QUEUEX_INFO(a) (a)
#define arguments_CAVM_PSM_QUEUEX_INFO(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_queue#_ptr
 *
 * PHY Scheduler Queue Pointer Register
 * These registers return the status of each queue's head and tail pointers.
 */
union cavm_psm_queuex_ptr
{
    uint64_t u;
    struct cavm_psm_queuex_ptr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_34_63        : 30;
        uint64_t full                  : 1;  /**< [ 33: 33](R/W/H) Indicates the queue is full. */
        uint64_t notempty              : 1;  /**< [ 32: 32](R/W/H) Indicates there are commands in the queue. */
        uint64_t reserved_30_31        : 2;
        uint64_t tail                  : 14; /**< [ 29: 16](R/W/H) Tail pointer in the queue. This index points to the location where the
                                                                 next item will be added to the queue. */
        uint64_t reserved_14_15        : 2;
        uint64_t head                  : 14; /**< [ 13:  0](R/W/H) The head pointer in the queue. Points to the next entry to be executed
                                                                 from the queue. */
#else /* Word 0 - Little Endian */
        uint64_t head                  : 14; /**< [ 13:  0](R/W/H) The head pointer in the queue. Points to the next entry to be executed
                                                                 from the queue. */
        uint64_t reserved_14_15        : 2;
        uint64_t tail                  : 14; /**< [ 29: 16](R/W/H) Tail pointer in the queue. This index points to the location where the
                                                                 next item will be added to the queue. */
        uint64_t reserved_30_31        : 2;
        uint64_t notempty              : 1;  /**< [ 32: 32](R/W/H) Indicates there are commands in the queue. */
        uint64_t full                  : 1;  /**< [ 33: 33](R/W/H) Indicates the queue is full. */
        uint64_t reserved_34_63        : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_queuex_ptr_s cn; */
};
typedef union cavm_psm_queuex_ptr cavm_psm_queuex_ptr_t;

static inline uint64_t CAVM_PSM_QUEUEX_PTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_QUEUEX_PTR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=127))
        return 0x860001002000ll + 0x10ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=127))
        return 0x860001002000ll + 0x10ll * ((a) & 0x7f);
    __cavm_csr_fatal("PSM_QUEUEX_PTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_QUEUEX_PTR(a) cavm_psm_queuex_ptr_t
#define bustype_CAVM_PSM_QUEUEX_PTR(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_QUEUEX_PTR(a) "PSM_QUEUEX_PTR"
#define busnum_CAVM_PSM_QUEUEX_PTR(a) (a)
#define arguments_CAVM_PSM_QUEUEX_PTR(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_queue#_space
 *
 * PHY Scheduler Queue Space Register
 * These registers report the number of free entries in each queue.
 */
union cavm_psm_queuex_space
{
    uint64_t u;
    struct cavm_psm_queuex_space_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_15_63        : 49;
        uint64_t space                 : 15; /**< [ 14:  0](RO/H) The number of commands that can be added to the queue. */
#else /* Word 0 - Little Endian */
        uint64_t space                 : 15; /**< [ 14:  0](RO/H) The number of commands that can be added to the queue. */
        uint64_t reserved_15_63        : 49;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_queuex_space_s cn; */
};
typedef union cavm_psm_queuex_space cavm_psm_queuex_space_t;

static inline uint64_t CAVM_PSM_QUEUEX_SPACE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_QUEUEX_SPACE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=127))
        return 0x860001003000ll + 0x10ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=127))
        return 0x860001003000ll + 0x10ll * ((a) & 0x7f);
    __cavm_csr_fatal("PSM_QUEUEX_SPACE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_QUEUEX_SPACE(a) cavm_psm_queuex_space_t
#define bustype_CAVM_PSM_QUEUEX_SPACE(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_QUEUEX_SPACE(a) "PSM_QUEUEX_SPACE"
#define busnum_CAVM_PSM_QUEUEX_SPACE(a) (a)
#define arguments_CAVM_PSM_QUEUEX_SPACE(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_queue#_timeout_cfg
 *
 * PHY Scheduler Queue Timeout Configuration Register
 * These registers program the queue watchdog timers. Each queue has a
 * watchdog timer that increments by one on every tick of the PSM timer if
 * the queue is enabled and not empty. The watchdog timer is reset each time
 * the queue launches a job or becomes idle (i.e., empty). If the watchdog
 * timer reaches the maximum timeout, a PSM queue timeout interrupt is
 * signaled.
 */
union cavm_psm_queuex_timeout_cfg
{
    uint64_t u;
    struct cavm_psm_queuex_timeout_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t wdog_timer            : 20; /**< [ 51: 32](RO/H) Current value of the queue's watchdog timer. */
        uint64_t reserved_20_31        : 12;
        uint64_t qtime_max             : 20; /**< [ 19:  0](R/W) Maximum value of the watchdog timer.  A value of 0 will disable the
                                                                 timeout check. */
#else /* Word 0 - Little Endian */
        uint64_t qtime_max             : 20; /**< [ 19:  0](R/W) Maximum value of the watchdog timer.  A value of 0 will disable the
                                                                 timeout check. */
        uint64_t reserved_20_31        : 12;
        uint64_t wdog_timer            : 20; /**< [ 51: 32](RO/H) Current value of the queue's watchdog timer. */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_queuex_timeout_cfg_s cn; */
};
typedef union cavm_psm_queuex_timeout_cfg cavm_psm_queuex_timeout_cfg_t;

static inline uint64_t CAVM_PSM_QUEUEX_TIMEOUT_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_QUEUEX_TIMEOUT_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=127))
        return 0x860001004000ll + 0x10ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=127))
        return 0x860001004000ll + 0x10ll * ((a) & 0x7f);
    __cavm_csr_fatal("PSM_QUEUEX_TIMEOUT_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_QUEUEX_TIMEOUT_CFG(a) cavm_psm_queuex_timeout_cfg_t
#define bustype_CAVM_PSM_QUEUEX_TIMEOUT_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_QUEUEX_TIMEOUT_CFG(a) "PSM_QUEUEX_TIMEOUT_CFG"
#define busnum_CAVM_PSM_QUEUEX_TIMEOUT_CFG(a) (a)
#define arguments_CAVM_PSM_QUEUEX_TIMEOUT_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_queue_busy_sts#
 *
 * PHY Scheduler Queue Busy Status Registers
 * These registers contain busy status bits for each queue.
 */
union cavm_psm_queue_busy_stsx
{
    uint64_t u;
    struct cavm_psm_queue_busy_stsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t busy                  : 64; /**< [ 63:  0](RO/H) Busy status.
                                                                 0 = No commands queued or in-flight.
                                                                 1 = Queue busy. The queue has at least one command waiting to execute
                                                                 or actively being executed by a MHAB/MDAB. */
#else /* Word 0 - Little Endian */
        uint64_t busy                  : 64; /**< [ 63:  0](RO/H) Busy status.
                                                                 0 = No commands queued or in-flight.
                                                                 1 = Queue busy. The queue has at least one command waiting to execute
                                                                 or actively being executed by a MHAB/MDAB. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_queue_busy_stsx_s cn; */
};
typedef union cavm_psm_queue_busy_stsx cavm_psm_queue_busy_stsx_t;

static inline uint64_t CAVM_PSM_QUEUE_BUSY_STSX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_QUEUE_BUSY_STSX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=1))
        return 0x860001010300ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=1))
        return 0x860001010300ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_QUEUE_BUSY_STSX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_QUEUE_BUSY_STSX(a) cavm_psm_queue_busy_stsx_t
#define bustype_CAVM_PSM_QUEUE_BUSY_STSX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_QUEUE_BUSY_STSX(a) "PSM_QUEUE_BUSY_STSX"
#define busnum_CAVM_PSM_QUEUE_BUSY_STSX(a) (a)
#define arguments_CAVM_PSM_QUEUE_BUSY_STSX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_queue_ena_w1c#
 *
 * PHY Scheduler Queue Disable Registers
 * These registers contain disable bits for each queue.
 */
union cavm_psm_queue_ena_w1cx
{
    uint64_t u;
    struct cavm_psm_queue_ena_w1cx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dis                   : 64; /**< [ 63:  0](R/W1C/H) Disable bit for each queue. If written 1, the queue will be disabled.
                                                                 If written 0, the queue enable status will be unmodified.  Queues may be
                                                                 enabled using the PSM_QUEUE_ENA_W1S() register.  When disabled,
                                                                 commands may be added to the queue, but those commands will not be scheduled for execution. */
#else /* Word 0 - Little Endian */
        uint64_t dis                   : 64; /**< [ 63:  0](R/W1C/H) Disable bit for each queue. If written 1, the queue will be disabled.
                                                                 If written 0, the queue enable status will be unmodified.  Queues may be
                                                                 enabled using the PSM_QUEUE_ENA_W1S() register.  When disabled,
                                                                 commands may be added to the queue, but those commands will not be scheduled for execution. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_queue_ena_w1cx_s cn; */
};
typedef union cavm_psm_queue_ena_w1cx cavm_psm_queue_ena_w1cx_t;

static inline uint64_t CAVM_PSM_QUEUE_ENA_W1CX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_QUEUE_ENA_W1CX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=1))
        return 0x860001010100ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=1))
        return 0x860001010100ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_QUEUE_ENA_W1CX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_QUEUE_ENA_W1CX(a) cavm_psm_queue_ena_w1cx_t
#define bustype_CAVM_PSM_QUEUE_ENA_W1CX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_QUEUE_ENA_W1CX(a) "PSM_QUEUE_ENA_W1CX"
#define busnum_CAVM_PSM_QUEUE_ENA_W1CX(a) (a)
#define arguments_CAVM_PSM_QUEUE_ENA_W1CX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_queue_ena_w1s#
 *
 * PHY Scheduler Queue Enable Registers
 * These registers contain enable bits for each queue.
 */
union cavm_psm_queue_ena_w1sx
{
    uint64_t u;
    struct cavm_psm_queue_ena_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ena                   : 64; /**< [ 63:  0](R/W1S/H) Enable bit for each queue. If written 1, the queue will be enabled.
                                                                 If written 0, the queue enable will be unmodified.  Queues may be
                                                                 disabled using the PSM_QUEUE_ENA_W1C() registers.  When disabled,
                                                                 commands may be added to the queue, but those commands will not
                                                                 be scheduled for execution until the queue is enabled. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 64; /**< [ 63:  0](R/W1S/H) Enable bit for each queue. If written 1, the queue will be enabled.
                                                                 If written 0, the queue enable will be unmodified.  Queues may be
                                                                 disabled using the PSM_QUEUE_ENA_W1C() registers.  When disabled,
                                                                 commands may be added to the queue, but those commands will not
                                                                 be scheduled for execution until the queue is enabled. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_queue_ena_w1sx_s cn; */
};
typedef union cavm_psm_queue_ena_w1sx cavm_psm_queue_ena_w1sx_t;

static inline uint64_t CAVM_PSM_QUEUE_ENA_W1SX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_QUEUE_ENA_W1SX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=1))
        return 0x860001010000ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=1))
        return 0x860001010000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_QUEUE_ENA_W1SX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_QUEUE_ENA_W1SX(a) cavm_psm_queue_ena_w1sx_t
#define bustype_CAVM_PSM_QUEUE_ENA_W1SX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_QUEUE_ENA_W1SX(a) "PSM_QUEUE_ENA_W1SX"
#define busnum_CAVM_PSM_QUEUE_ENA_W1SX(a) (a)
#define arguments_CAVM_PSM_QUEUE_ENA_W1SX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_queue_full_sts#
 *
 * PHY Scheduler Queue Full Status Registers
 * These registers contain full indicators for each queue.
 */
union cavm_psm_queue_full_stsx
{
    uint64_t u;
    struct cavm_psm_queue_full_stsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t full                  : 64; /**< [ 63:  0](RO/H) For each queue, a 1 bit indicates the queue is full, a 0 indicates
                                                                 the queue is not full and an AP core can enqueue a job. */
#else /* Word 0 - Little Endian */
        uint64_t full                  : 64; /**< [ 63:  0](RO/H) For each queue, a 1 bit indicates the queue is full, a 0 indicates
                                                                 the queue is not full and an AP core can enqueue a job. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_queue_full_stsx_s cn; */
};
typedef union cavm_psm_queue_full_stsx cavm_psm_queue_full_stsx_t;

static inline uint64_t CAVM_PSM_QUEUE_FULL_STSX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_QUEUE_FULL_STSX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=1))
        return 0x860001010200ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=1))
        return 0x860001010200ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_QUEUE_FULL_STSX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_QUEUE_FULL_STSX(a) cavm_psm_queue_full_stsx_t
#define bustype_CAVM_PSM_QUEUE_FULL_STSX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_QUEUE_FULL_STSX(a) "PSM_QUEUE_FULL_STSX"
#define busnum_CAVM_PSM_QUEUE_FULL_STSX(a) (a)
#define arguments_CAVM_PSM_QUEUE_FULL_STSX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_queue_ram#
 *
 * PHY Scheduler Queue RAM Register
 * These registers provide a debug mechanism into the queue RAM. Both read
 * and write accesses are allowed into individual queue RAM entries.  The QRAM
 * entries are 128-bit entities, and must be written in a proper sequence due
 * to ECC logic.  The lower 64-bit word must be written first, followed by the
 * upper 64-bit word.  No other QRAM write may occur between writing the two
 * 64-bit words.
 */
union cavm_psm_queue_ramx
{
    uint64_t u;
    struct cavm_psm_queue_ramx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W/H) The queue RAM entry data. */
#else /* Word 0 - Little Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W/H) The queue RAM entry data. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_queue_ramx_s cn; */
};
typedef union cavm_psm_queue_ramx cavm_psm_queue_ramx_t;

static inline uint64_t CAVM_PSM_QUEUE_RAMX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_QUEUE_RAMX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=32767))
        return 0x860001100000ll + 8ll * ((a) & 0x7fff);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=32767))
        return 0x860001100000ll + 8ll * ((a) & 0x7fff);
    __cavm_csr_fatal("PSM_QUEUE_RAMX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_QUEUE_RAMX(a) cavm_psm_queue_ramx_t
#define bustype_CAVM_PSM_QUEUE_RAMX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_QUEUE_RAMX(a) "PSM_QUEUE_RAMX"
#define busnum_CAVM_PSM_QUEUE_RAMX(a) (a)
#define arguments_CAVM_PSM_QUEUE_RAMX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_rst
 *
 * PHY Scheduler Reset Register
 * This register provides a mechanism to reset the entire PSM or
 * individual PSM queues.
 */
union cavm_psm_rst
{
    uint64_t u;
    struct cavm_psm_rst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t psm_reset             : 1;  /**< [ 63: 63](WO) When set, will reset entire PSM to hardware reset state. */
        uint64_t reserved_17_62        : 46;
        uint64_t queue_reset           : 1;  /**< [ 16: 16](WO) When written 1 will reset an individual queue as identified by
                                                                 the [QUEUE_RESET_QID] field.  This reset will empty the queue
                                                                 but will not reset any in-flight jobs dispatched from the given
                                                                 queue, and will not change the size of the queue. */
        uint64_t reserved_8_15         : 8;
        uint64_t queue_reset_qid       : 8;  /**< [  7:  0](WO) When the [QUEUE_RESET] bit is written to initiate a queue reset
                                                                 operation, this field is used to select the queue to be reset. */
#else /* Word 0 - Little Endian */
        uint64_t queue_reset_qid       : 8;  /**< [  7:  0](WO) When the [QUEUE_RESET] bit is written to initiate a queue reset
                                                                 operation, this field is used to select the queue to be reset. */
        uint64_t reserved_8_15         : 8;
        uint64_t queue_reset           : 1;  /**< [ 16: 16](WO) When written 1 will reset an individual queue as identified by
                                                                 the [QUEUE_RESET_QID] field.  This reset will empty the queue
                                                                 but will not reset any in-flight jobs dispatched from the given
                                                                 queue, and will not change the size of the queue. */
        uint64_t reserved_17_62        : 46;
        uint64_t psm_reset             : 1;  /**< [ 63: 63](WO) When set, will reset entire PSM to hardware reset state. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_rst_s cn; */
};
typedef union cavm_psm_rst cavm_psm_rst_t;

#define CAVM_PSM_RST CAVM_PSM_RST_FUNC()
static inline uint64_t CAVM_PSM_RST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_RST_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x8600010f0200ll;
    if (cavm_is_model(OCTEONTX_F95O))
        return 0x8600010f0200ll;
    __cavm_csr_fatal("PSM_RST", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_RST cavm_psm_rst_t
#define bustype_CAVM_PSM_RST CSR_TYPE_NCB
#define basename_CAVM_PSM_RST "PSM_RST"
#define busnum_CAVM_PSM_RST 0
#define arguments_CAVM_PSM_RST -1,-1,-1,-1

/**
 * Register (NCB) psm_set#_errcap_mab_badcmd
 *
 * PHY Scheduler MHAB/MDAB FIFO Bad Command Capture Register
 * This register reports the status of bad command errors reported by MHAB/MDAB FIFOs.
 */
union cavm_psm_setx_errcap_mab_badcmd
{
    uint64_t u;
    struct cavm_psm_setx_errcap_mab_badcmd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mabfifo_bad_cmd       : 64; /**< [ 63:  0](R/W1C/H) When a bit is set, the corresponding MHAB/MDAB FIFO has reported a bad command.  Write 1 to clear. */
#else /* Word 0 - Little Endian */
        uint64_t mabfifo_bad_cmd       : 64; /**< [ 63:  0](R/W1C/H) When a bit is set, the corresponding MHAB/MDAB FIFO has reported a bad command.  Write 1 to clear. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_setx_errcap_mab_badcmd_s cn; */
};
typedef union cavm_psm_setx_errcap_mab_badcmd cavm_psm_setx_errcap_mab_badcmd_t;

static inline uint64_t CAVM_PSM_SETX_ERRCAP_MAB_BADCMD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SETX_ERRCAP_MAB_BADCMD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=2))
        return 0x8600010f9000ll + 0x10ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=2))
        return 0x8600010f9000ll + 0x10ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_SETX_ERRCAP_MAB_BADCMD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SETX_ERRCAP_MAB_BADCMD(a) cavm_psm_setx_errcap_mab_badcmd_t
#define bustype_CAVM_PSM_SETX_ERRCAP_MAB_BADCMD(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SETX_ERRCAP_MAB_BADCMD(a) "PSM_SETX_ERRCAP_MAB_BADCMD"
#define busnum_CAVM_PSM_SETX_ERRCAP_MAB_BADCMD(a) (a)
#define arguments_CAVM_PSM_SETX_ERRCAP_MAB_BADCMD(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set0_grp#_cdt
 *
 * PHY Scheduler Set 0 Group Credit Registers
 * These registers define the total number of job credits available for the MHAB
 * group.  It must match the total of the credits programmed in the
 * PSM_SET0_MAX_MABQ()_JOB_CDT() registers for the MHABs selected by the
 * corresponding PSM_SET0_GRP()_MASK register.
 */
union cavm_psm_set0_grpx_cdt
{
    uint64_t u;
    struct cavm_psm_set0_grpx_cdt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t grp_cdt               : 6;  /**< [  5:  0](R/W/H) Total maximum number of jobs for the MHABs selected by the
                                                                 corresponding PSM_SET0_GRP()_MASK register. Valid range is [0,63]. */
#else /* Word 0 - Little Endian */
        uint64_t grp_cdt               : 6;  /**< [  5:  0](R/W/H) Total maximum number of jobs for the MHABs selected by the
                                                                 corresponding PSM_SET0_GRP()_MASK register. Valid range is [0,63]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set0_grpx_cdt_s cn; */
};
typedef union cavm_psm_set0_grpx_cdt cavm_psm_set0_grpx_cdt_t;

static inline uint64_t CAVM_PSM_SET0_GRPX_CDT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET0_GRPX_CDT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=7))
        return 0x860001047400ll + 0x10ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=7))
        return 0x860001047400ll + 0x10ll * ((a) & 0x7);
    __cavm_csr_fatal("PSM_SET0_GRPX_CDT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET0_GRPX_CDT(a) cavm_psm_set0_grpx_cdt_t
#define bustype_CAVM_PSM_SET0_GRPX_CDT(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET0_GRPX_CDT(a) "PSM_SET0_GRPX_CDT"
#define busnum_CAVM_PSM_SET0_GRPX_CDT(a) (a)
#define arguments_CAVM_PSM_SET0_GRPX_CDT(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set0_grp#_mask
 *
 * PHY Scheduler Set 0 MHAB Group Mask Registers
 * These registers define membership of MHABs within each of eight groups.  Along
 * with the PSM_SET0_GRP()_CDT registers, these registers can be used to load balance
 * jobs across many homogeneous MHABs.  Under normal circumstances, the eight
 * groups should be programmed to match the eight GHBs containing the 26 MHABs and
 * ensure MHAB jobs are balanced across GHBs.
 */
union cavm_psm_set0_grpx_mask
{
    uint64_t u;
    struct cavm_psm_set0_grpx_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_26_63        : 38;
        uint64_t mab_map               : 26; /**< [ 25:  0](R/W) Bit mask indicating which MHABs belong to the MHAB
                                                                 group.  If this register is programmed, the corresponding group
                                                                 credit register (PSM_SET0_GRP()_CDT) must be programmed with the correct
                                                                 value. */
#else /* Word 0 - Little Endian */
        uint64_t mab_map               : 26; /**< [ 25:  0](R/W) Bit mask indicating which MHABs belong to the MHAB
                                                                 group.  If this register is programmed, the corresponding group
                                                                 credit register (PSM_SET0_GRP()_CDT) must be programmed with the correct
                                                                 value. */
        uint64_t reserved_26_63        : 38;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set0_grpx_mask_s cn9; */
    /* struct cavm_psm_set0_grpx_mask_s cnf95xx; */
    struct cavm_psm_set0_grpx_mask_f95o
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t mab_map               : 24; /**< [ 23:  0](R/W) Bit mask indicating which MHABs belong to the MHAB
                                                                 group.  If this register is programmed, the corresponding group
                                                                 credit register (PSM_SET0_GRP()_CDT) must be programmed with the correct
                                                                 value. */
#else /* Word 0 - Little Endian */
        uint64_t mab_map               : 24; /**< [ 23:  0](R/W) Bit mask indicating which MHABs belong to the MHAB
                                                                 group.  If this register is programmed, the corresponding group
                                                                 credit register (PSM_SET0_GRP()_CDT) must be programmed with the correct
                                                                 value. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } f95o;
};
typedef union cavm_psm_set0_grpx_mask cavm_psm_set0_grpx_mask_t;

static inline uint64_t CAVM_PSM_SET0_GRPX_MASK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET0_GRPX_MASK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=7))
        return 0x860001047000ll + 0x10ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=7))
        return 0x860001047000ll + 0x10ll * ((a) & 0x7);
    __cavm_csr_fatal("PSM_SET0_GRPX_MASK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET0_GRPX_MASK(a) cavm_psm_set0_grpx_mask_t
#define bustype_CAVM_PSM_SET0_GRPX_MASK(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET0_GRPX_MASK(a) "PSM_SET0_GRPX_MASK"
#define busnum_CAVM_PSM_SET0_GRPX_MASK(a) (a)
#define arguments_CAVM_PSM_SET0_GRPX_MASK(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set0_mab_res
 *
 * PHY Scheduler Set 0 MAB Reservation Register
 * This register reports the current value of the per-MHAB reservation vector, for CONT_JOB
 * commands.
 */
union cavm_psm_set0_mab_res
{
    uint64_t u;
    struct cavm_psm_set0_mab_res_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_26_63        : 38;
        uint64_t mabres                : 26; /**< [ 25:  0](R/W/H) This field reports the current value of the per-MHAB reservation vector, for CONT_JOB
                                                                 commands. */
#else /* Word 0 - Little Endian */
        uint64_t mabres                : 26; /**< [ 25:  0](R/W/H) This field reports the current value of the per-MHAB reservation vector, for CONT_JOB
                                                                 commands. */
        uint64_t reserved_26_63        : 38;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set0_mab_res_s cn9; */
    /* struct cavm_psm_set0_mab_res_s cnf95xx; */
    struct cavm_psm_set0_mab_res_f95o
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t mabres                : 24; /**< [ 23:  0](R/W/H) This field reports the current value of the per-MHAB reservation vector, for CONT_JOB
                                                                 commands. */
#else /* Word 0 - Little Endian */
        uint64_t mabres                : 24; /**< [ 23:  0](R/W/H) This field reports the current value of the per-MHAB reservation vector, for CONT_JOB
                                                                 commands. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } f95o;
};
typedef union cavm_psm_set0_mab_res cavm_psm_set0_mab_res_t;

#define CAVM_PSM_SET0_MAB_RES CAVM_PSM_SET0_MAB_RES_FUNC()
static inline uint64_t CAVM_PSM_SET0_MAB_RES_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET0_MAB_RES_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x860001047800ll;
    if (cavm_is_model(OCTEONTX_F95O))
        return 0x860001047800ll;
    __cavm_csr_fatal("PSM_SET0_MAB_RES", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET0_MAB_RES cavm_psm_set0_mab_res_t
#define bustype_CAVM_PSM_SET0_MAB_RES CSR_TYPE_NCB
#define basename_CAVM_PSM_SET0_MAB_RES "PSM_SET0_MAB_RES"
#define busnum_CAVM_PSM_SET0_MAB_RES 0
#define arguments_CAVM_PSM_SET0_MAB_RES -1,-1,-1,-1

/**
 * Register (NCB) psm_set0_mabfifo#_ctrl
 *
 * PHY Scheduler Set 0 MAB FIFO Control Registers
 * These registers contain internal information about the MHAB FIFOs,
 * i.e., the FIFOs of commands received from MHABs.
 */
union cavm_psm_set0_mabfifox_ctrl
{
    uint64_t u;
    struct cavm_psm_set0_mabfifox_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t errcap_qid            : 8;  /**< [ 63: 56](R/W/H) Contains the QID for the most recent bad command encountered by the MHAB FIFO.  Write
                                                                 any nonzero value to clear. */
        uint64_t reserved_54_55        : 2;
        uint64_t errcap_opc            : 6;  /**< [ 53: 48](R/W/H) Contains the opcode for the most recent bad command encountered by the MHAB FIFO.
                                                                 Write any nonzero value to clear. */
        uint64_t reserved_36_47        : 12;
        uint64_t mabfifo_wdog          : 4;  /**< [ 35: 32](R/W) Configures the timeout value of the MABFIFO watchdog timer.  The timeout value
                                                                 is 2^[MABFIFO_WDOG] * 16.  The MABFIFO watchdog timer runs when the FIFO
                                                                 contains a valid entry, and is reset to 0 whenever an entry is popped. If the
                                                                 timeout value is exceeded, an interrupt will be asserted.  A [MABFIFO_WDOG]
                                                                 value of 0 will disable the timeout check. */
        uint64_t reserved_27_31        : 5;
        uint64_t fifo_level            : 3;  /**< [ 26: 24](RO/H) Contains the number of entries held in the MHAB FIFO. */
        uint64_t reserved_17_23        : 7;
        uint64_t force_pop             : 1;  /**< [ 16: 16](R/W/H) fixme */
        uint64_t reserved_11_15        : 5;
        uint64_t fifo_cdt              : 3;  /**< [ 10:  8](R/W/H) Contains the number of credits held by the MHAB for making JCA requests. */
        uint64_t reserved_2_7          : 6;
        uint64_t mabfifo_flush_en      : 1;  /**< [  1:  1](R/W/H) fixme */
        uint64_t mabfifo_dis           : 1;  /**< [  0:  0](R/W/H) fixme */
#else /* Word 0 - Little Endian */
        uint64_t mabfifo_dis           : 1;  /**< [  0:  0](R/W/H) fixme */
        uint64_t mabfifo_flush_en      : 1;  /**< [  1:  1](R/W/H) fixme */
        uint64_t reserved_2_7          : 6;
        uint64_t fifo_cdt              : 3;  /**< [ 10:  8](R/W/H) Contains the number of credits held by the MHAB for making JCA requests. */
        uint64_t reserved_11_15        : 5;
        uint64_t force_pop             : 1;  /**< [ 16: 16](R/W/H) fixme */
        uint64_t reserved_17_23        : 7;
        uint64_t fifo_level            : 3;  /**< [ 26: 24](RO/H) Contains the number of entries held in the MHAB FIFO. */
        uint64_t reserved_27_31        : 5;
        uint64_t mabfifo_wdog          : 4;  /**< [ 35: 32](R/W) Configures the timeout value of the MABFIFO watchdog timer.  The timeout value
                                                                 is 2^[MABFIFO_WDOG] * 16.  The MABFIFO watchdog timer runs when the FIFO
                                                                 contains a valid entry, and is reset to 0 whenever an entry is popped. If the
                                                                 timeout value is exceeded, an interrupt will be asserted.  A [MABFIFO_WDOG]
                                                                 value of 0 will disable the timeout check. */
        uint64_t reserved_36_47        : 12;
        uint64_t errcap_opc            : 6;  /**< [ 53: 48](R/W/H) Contains the opcode for the most recent bad command encountered by the MHAB FIFO.
                                                                 Write any nonzero value to clear. */
        uint64_t reserved_54_55        : 2;
        uint64_t errcap_qid            : 8;  /**< [ 63: 56](R/W/H) Contains the QID for the most recent bad command encountered by the MHAB FIFO.  Write
                                                                 any nonzero value to clear. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set0_mabfifox_ctrl_s cn; */
};
typedef union cavm_psm_set0_mabfifox_ctrl cavm_psm_set0_mabfifox_ctrl_t;

static inline uint64_t CAVM_PSM_SET0_MABFIFOX_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET0_MABFIFOX_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=25))
        return 0x860001080000ll + 0x10ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=23))
        return 0x860001080000ll + 0x10ll * ((a) & 0x1f);
    __cavm_csr_fatal("PSM_SET0_MABFIFOX_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET0_MABFIFOX_CTRL(a) cavm_psm_set0_mabfifox_ctrl_t
#define bustype_CAVM_PSM_SET0_MABFIFOX_CTRL(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET0_MABFIFOX_CTRL(a) "PSM_SET0_MABFIFOX_CTRL"
#define busnum_CAVM_PSM_SET0_MABFIFOX_CTRL(a) (a)
#define arguments_CAVM_PSM_SET0_MABFIFOX_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set0_mabfifo_busy
 *
 * PHY Scheduler Set 0 MAB FIFO Busy Register
 */
union cavm_psm_set0_mabfifo_busy
{
    uint64_t u;
    struct cavm_psm_set0_mabfifo_busy_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_26_63        : 38;
        uint64_t mabf_busy             : 26; /**< [ 25:  0](RO/H) Current status of the Set 0 MAB FIFOs.  A bit value of 1
                                                                 indicates that the MAB FIFO contains at least one entry.
                                                                 A bit value of 0 indicates that it is empty. */
#else /* Word 0 - Little Endian */
        uint64_t mabf_busy             : 26; /**< [ 25:  0](RO/H) Current status of the Set 0 MAB FIFOs.  A bit value of 1
                                                                 indicates that the MAB FIFO contains at least one entry.
                                                                 A bit value of 0 indicates that it is empty. */
        uint64_t reserved_26_63        : 38;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set0_mabfifo_busy_s cn9; */
    /* struct cavm_psm_set0_mabfifo_busy_s cnf95xx; */
    struct cavm_psm_set0_mabfifo_busy_f95o
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t mabf_busy             : 24; /**< [ 23:  0](RO/H) Current status of the Set 0 MAB FIFOs.  A bit value of 1
                                                                 indicates that the MAB FIFO contains at least one entry.
                                                                 A bit value of 0 indicates that it is empty. */
#else /* Word 0 - Little Endian */
        uint64_t mabf_busy             : 24; /**< [ 23:  0](RO/H) Current status of the Set 0 MAB FIFOs.  A bit value of 1
                                                                 indicates that the MAB FIFO contains at least one entry.
                                                                 A bit value of 0 indicates that it is empty. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } f95o;
};
typedef union cavm_psm_set0_mabfifo_busy cavm_psm_set0_mabfifo_busy_t;

#define CAVM_PSM_SET0_MABFIFO_BUSY CAVM_PSM_SET0_MABFIFO_BUSY_FUNC()
static inline uint64_t CAVM_PSM_SET0_MABFIFO_BUSY_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET0_MABFIFO_BUSY_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x860001083000ll;
    if (cavm_is_model(OCTEONTX_F95O))
        return 0x860001083000ll;
    __cavm_csr_fatal("PSM_SET0_MABFIFO_BUSY", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET0_MABFIFO_BUSY cavm_psm_set0_mabfifo_busy_t
#define bustype_CAVM_PSM_SET0_MABFIFO_BUSY CSR_TYPE_NCB
#define basename_CAVM_PSM_SET0_MABFIFO_BUSY "PSM_SET0_MABFIFO_BUSY"
#define busnum_CAVM_PSM_SET0_MABFIFO_BUSY 0
#define arguments_CAVM_PSM_SET0_MABFIFO_BUSY -1,-1,-1,-1

/**
 * Register (NCB) psm_set0_mabq#_cdt_usage
 *
 * PHY Scheduler Set 0 MHAB Credit Usage Registers
 * This register reports the current usage of the MHAB job credits.
 */
union cavm_psm_set0_mabqx_cdt_usage
{
    uint64_t u;
    struct cavm_psm_set0_mabqx_cdt_usage_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_26_63        : 38;
        uint64_t cdt_usage             : 26; /**< [ 25:  0](RO/H) This field reports the current usage of the MHAB job credits.
                                                                 A bit value of 1 indicates that the MHAB is using at least one
                                                                 job credit.  A bit value of 0 indicates that no job credits are
                                                                 in use. */
#else /* Word 0 - Little Endian */
        uint64_t cdt_usage             : 26; /**< [ 25:  0](RO/H) This field reports the current usage of the MHAB job credits.
                                                                 A bit value of 1 indicates that the MHAB is using at least one
                                                                 job credit.  A bit value of 0 indicates that no job credits are
                                                                 in use. */
        uint64_t reserved_26_63        : 38;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set0_mabqx_cdt_usage_s cn9; */
    /* struct cavm_psm_set0_mabqx_cdt_usage_s cnf95xx; */
    struct cavm_psm_set0_mabqx_cdt_usage_f95o
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t cdt_usage             : 24; /**< [ 23:  0](RO/H) This field reports the current usage of the MHAB job credits.
                                                                 A bit value of 1 indicates that the MHAB is using at least one
                                                                 job credit.  A bit value of 0 indicates that no job credits are
                                                                 in use. */
#else /* Word 0 - Little Endian */
        uint64_t cdt_usage             : 24; /**< [ 23:  0](RO/H) This field reports the current usage of the MHAB job credits.
                                                                 A bit value of 1 indicates that the MHAB is using at least one
                                                                 job credit.  A bit value of 0 indicates that no job credits are
                                                                 in use. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } f95o;
};
typedef union cavm_psm_set0_mabqx_cdt_usage cavm_psm_set0_mabqx_cdt_usage_t;

static inline uint64_t CAVM_PSM_SET0_MABQX_CDT_USAGE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET0_MABQX_CDT_USAGE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=1))
        return 0x860001047c00ll + 0x10ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=1))
        return 0x860001047c00ll + 0x10ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_SET0_MABQX_CDT_USAGE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET0_MABQX_CDT_USAGE(a) cavm_psm_set0_mabqx_cdt_usage_t
#define bustype_CAVM_PSM_SET0_MABQX_CDT_USAGE(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET0_MABQX_CDT_USAGE(a) "PSM_SET0_MABQX_CDT_USAGE"
#define busnum_CAVM_PSM_SET0_MABQX_CDT_USAGE(a) (a)
#define arguments_CAVM_PSM_SET0_MABQX_CDT_USAGE(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set0_mabq#_job_cdt#
 *
 * PHY Scheduler Set 0 MHAB Job Credit Registers
 * These registers define the current number of jobs that the PSM
 * can submit to the MABQs of each MHAB at a time.
 */
union cavm_psm_set0_mabqx_job_cdtx
{
    uint64_t u;
    struct cavm_psm_set0_mabqx_job_cdtx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t cdt                   : 5;  /**< [  4:  0](RO/H) Current number of jobs for MHAB {b}. Valid range is [0,20]. */
#else /* Word 0 - Little Endian */
        uint64_t cdt                   : 5;  /**< [  4:  0](RO/H) Current number of jobs for MHAB {b}. Valid range is [0,20]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set0_mabqx_job_cdtx_s cn; */
};
typedef union cavm_psm_set0_mabqx_job_cdtx cavm_psm_set0_mabqx_job_cdtx_t;

static inline uint64_t CAVM_PSM_SET0_MABQX_JOB_CDTX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET0_MABQX_JOB_CDTX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a<=1) && (b<=25)))
        return 0x860001044000ll + 0x1000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x1f);
    if (cavm_is_model(OCTEONTX_F95O) && ((a<=1) && (b<=23)))
        return 0x860001044000ll + 0x1000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x1f);
    __cavm_csr_fatal("PSM_SET0_MABQX_JOB_CDTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET0_MABQX_JOB_CDTX(a,b) cavm_psm_set0_mabqx_job_cdtx_t
#define bustype_CAVM_PSM_SET0_MABQX_JOB_CDTX(a,b) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET0_MABQX_JOB_CDTX(a,b) "PSM_SET0_MABQX_JOB_CDTX"
#define busnum_CAVM_PSM_SET0_MABQX_JOB_CDTX(a,b) (a)
#define arguments_CAVM_PSM_SET0_MABQX_JOB_CDTX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) psm_set0_max_mabq#_job_cdt#
 *
 * PHY Scheduler Set 0 Maximum MHAB Job Credit Registers
 * These registers define the maximum number of jobs that the PSM
 * can submit to the MABQs of each MHAB at a time.
 */
union cavm_psm_set0_max_mabqx_job_cdtx
{
    uint64_t u;
    struct cavm_psm_set0_max_mabqx_job_cdtx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t max                   : 5;  /**< [  4:  0](R/W) Maximum number of jobs for MHAB {b}. Valid range is [0,20]. */
#else /* Word 0 - Little Endian */
        uint64_t max                   : 5;  /**< [  4:  0](R/W) Maximum number of jobs for MHAB {b}. Valid range is [0,20]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set0_max_mabqx_job_cdtx_s cn; */
};
typedef union cavm_psm_set0_max_mabqx_job_cdtx cavm_psm_set0_max_mabqx_job_cdtx_t;

static inline uint64_t CAVM_PSM_SET0_MAX_MABQX_JOB_CDTX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET0_MAX_MABQX_JOB_CDTX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a<=1) && (b<=25)))
        return 0x860001042000ll + 0x1000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x1f);
    if (cavm_is_model(OCTEONTX_F95O) && ((a<=1) && (b<=23)))
        return 0x860001042000ll + 0x1000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x1f);
    __cavm_csr_fatal("PSM_SET0_MAX_MABQX_JOB_CDTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET0_MAX_MABQX_JOB_CDTX(a,b) cavm_psm_set0_max_mabqx_job_cdtx_t
#define bustype_CAVM_PSM_SET0_MAX_MABQX_JOB_CDTX(a,b) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET0_MAX_MABQX_JOB_CDTX(a,b) "PSM_SET0_MAX_MABQX_JOB_CDTX"
#define busnum_CAVM_PSM_SET0_MAX_MABQX_JOB_CDTX(a,b) (a)
#define arguments_CAVM_PSM_SET0_MAX_MABQX_JOB_CDTX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) psm_set0_rsrc_tbl#
 *
 * PHY Scheduler Set 0 Resource Table Registers
 * These registers define a mapping table of job types to MHAB(s).
 * Multiple MHABs may be assigned to service jobs of each type, and a
 * given MHAB can be assigned to any number of job types.
 */
union cavm_psm_set0_rsrc_tblx
{
    uint64_t u;
    struct cavm_psm_set0_rsrc_tblx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_26_63        : 38;
        uint64_t mab_map               : 26; /**< [ 25:  0](R/W) Bit mask indicating which MHAB can accept jobs of type {a}. */
#else /* Word 0 - Little Endian */
        uint64_t mab_map               : 26; /**< [ 25:  0](R/W) Bit mask indicating which MHAB can accept jobs of type {a}. */
        uint64_t reserved_26_63        : 38;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set0_rsrc_tblx_s cn9; */
    /* struct cavm_psm_set0_rsrc_tblx_s cnf95xx; */
    struct cavm_psm_set0_rsrc_tblx_f95o
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t mab_map               : 24; /**< [ 23:  0](R/W) Bit mask indicating which MHAB can accept jobs of type {a}. */
#else /* Word 0 - Little Endian */
        uint64_t mab_map               : 24; /**< [ 23:  0](R/W) Bit mask indicating which MHAB can accept jobs of type {a}. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } f95o;
};
typedef union cavm_psm_set0_rsrc_tblx cavm_psm_set0_rsrc_tblx_t;

static inline uint64_t CAVM_PSM_SET0_RSRC_TBLX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET0_RSRC_TBLX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=255))
        return 0x860001040000ll + 0x10ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=255))
        return 0x860001040000ll + 0x10ll * ((a) & 0xff);
    __cavm_csr_fatal("PSM_SET0_RSRC_TBLX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET0_RSRC_TBLX(a) cavm_psm_set0_rsrc_tblx_t
#define bustype_CAVM_PSM_SET0_RSRC_TBLX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET0_RSRC_TBLX(a) "PSM_SET0_RSRC_TBLX"
#define busnum_CAVM_PSM_SET0_RSRC_TBLX(a) (a)
#define arguments_CAVM_PSM_SET0_RSRC_TBLX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set1_grp#_cdt
 *
 * PHY Scheduler Set 1 Group Credit Registers
 * These registers define the total number of job credits available for the MDAB
 * group.  It must match the total of the credits programmed in the
 * PSM_SET1_MAX_MABQ()_JOB_CDT() registers for the MDABs selected by the
 * corresponding PSM_SET1_GRP()_MASK register.
 */
union cavm_psm_set1_grpx_cdt
{
    uint64_t u;
    struct cavm_psm_set1_grpx_cdt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t grp_cdt               : 6;  /**< [  5:  0](R/W/H) Total maximum number of jobs for the MDABs selected by the
                                                                 corresponding PSM_SET1_GRP()_MASK register. Valid range is [0,63]. */
#else /* Word 0 - Little Endian */
        uint64_t grp_cdt               : 6;  /**< [  5:  0](R/W/H) Total maximum number of jobs for the MDABs selected by the
                                                                 corresponding PSM_SET1_GRP()_MASK register. Valid range is [0,63]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set1_grpx_cdt_s cn; */
};
typedef union cavm_psm_set1_grpx_cdt cavm_psm_set1_grpx_cdt_t;

static inline uint64_t CAVM_PSM_SET1_GRPX_CDT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET1_GRPX_CDT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=7))
        return 0x860001057400ll + 0x10ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=7))
        return 0x860001057400ll + 0x10ll * ((a) & 0x7);
    __cavm_csr_fatal("PSM_SET1_GRPX_CDT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET1_GRPX_CDT(a) cavm_psm_set1_grpx_cdt_t
#define bustype_CAVM_PSM_SET1_GRPX_CDT(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET1_GRPX_CDT(a) "PSM_SET1_GRPX_CDT"
#define busnum_CAVM_PSM_SET1_GRPX_CDT(a) (a)
#define arguments_CAVM_PSM_SET1_GRPX_CDT(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set1_grp#_mask
 *
 * PHY Scheduler Set 1 MDAB Group Mask Registers
 * These registers define membership of MDABs within each of eight groups.  Along
 * with the PSM_SET1_GRP()_CDT registers, these registers can be used to load balance
 * jobs across many homogeneous MDABs.  Under normal circumstances, the eight
 * groups should be programmed to match the eight GHBs containing the 42 MDABs and
 * ensure MDAB jobs are balanced across GHBs.
 */
union cavm_psm_set1_grpx_mask
{
    uint64_t u;
    struct cavm_psm_set1_grpx_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_42_63        : 22;
        uint64_t mab_map               : 42; /**< [ 41:  0](R/W) Bit mask indicating which MDABs belong to the MDAB
                                                                 group.  If this register is programmed, the corresponding group
                                                                 credit register (PSM_SET1_GRP()_CDT) must be programmed with the correct
                                                                 value. */
#else /* Word 0 - Little Endian */
        uint64_t mab_map               : 42; /**< [ 41:  0](R/W) Bit mask indicating which MDABs belong to the MDAB
                                                                 group.  If this register is programmed, the corresponding group
                                                                 credit register (PSM_SET1_GRP()_CDT) must be programmed with the correct
                                                                 value. */
        uint64_t reserved_42_63        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set1_grpx_mask_s cn9; */
    /* struct cavm_psm_set1_grpx_mask_s cnf95xx; */
    struct cavm_psm_set1_grpx_mask_f95o
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t mab_map               : 40; /**< [ 39:  0](R/W) Bit mask indicating which MDABs belong to the MDAB
                                                                 group.  If this register is programmed, the corresponding group
                                                                 credit register (PSM_SET1_GRP()_CDT) must be programmed with the correct
                                                                 value. */
#else /* Word 0 - Little Endian */
        uint64_t mab_map               : 40; /**< [ 39:  0](R/W) Bit mask indicating which MDABs belong to the MDAB
                                                                 group.  If this register is programmed, the corresponding group
                                                                 credit register (PSM_SET1_GRP()_CDT) must be programmed with the correct
                                                                 value. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } f95o;
};
typedef union cavm_psm_set1_grpx_mask cavm_psm_set1_grpx_mask_t;

static inline uint64_t CAVM_PSM_SET1_GRPX_MASK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET1_GRPX_MASK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=7))
        return 0x860001057000ll + 0x10ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=7))
        return 0x860001057000ll + 0x10ll * ((a) & 0x7);
    __cavm_csr_fatal("PSM_SET1_GRPX_MASK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET1_GRPX_MASK(a) cavm_psm_set1_grpx_mask_t
#define bustype_CAVM_PSM_SET1_GRPX_MASK(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET1_GRPX_MASK(a) "PSM_SET1_GRPX_MASK"
#define busnum_CAVM_PSM_SET1_GRPX_MASK(a) (a)
#define arguments_CAVM_PSM_SET1_GRPX_MASK(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set1_mab_res
 *
 * PHY Scheduler Set 1 MAB Reservation Register
 * This register reports the current value of the per-MDAB reservation vector, for CONT_JOB
 * commands.
 */
union cavm_psm_set1_mab_res
{
    uint64_t u;
    struct cavm_psm_set1_mab_res_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_42_63        : 22;
        uint64_t mabres                : 42; /**< [ 41:  0](R/W/H) This field reports the current value of the per-MDAB reservation vector, for CONT_JOB
                                                                 commands. */
#else /* Word 0 - Little Endian */
        uint64_t mabres                : 42; /**< [ 41:  0](R/W/H) This field reports the current value of the per-MDAB reservation vector, for CONT_JOB
                                                                 commands. */
        uint64_t reserved_42_63        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set1_mab_res_s cn9; */
    /* struct cavm_psm_set1_mab_res_s cnf95xx; */
    struct cavm_psm_set1_mab_res_f95o
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t mabres                : 40; /**< [ 39:  0](R/W/H) This field reports the current value of the per-MDAB reservation vector, for CONT_JOB
                                                                 commands. */
#else /* Word 0 - Little Endian */
        uint64_t mabres                : 40; /**< [ 39:  0](R/W/H) This field reports the current value of the per-MDAB reservation vector, for CONT_JOB
                                                                 commands. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } f95o;
};
typedef union cavm_psm_set1_mab_res cavm_psm_set1_mab_res_t;

#define CAVM_PSM_SET1_MAB_RES CAVM_PSM_SET1_MAB_RES_FUNC()
static inline uint64_t CAVM_PSM_SET1_MAB_RES_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET1_MAB_RES_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x860001057800ll;
    if (cavm_is_model(OCTEONTX_F95O))
        return 0x860001057800ll;
    __cavm_csr_fatal("PSM_SET1_MAB_RES", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET1_MAB_RES cavm_psm_set1_mab_res_t
#define bustype_CAVM_PSM_SET1_MAB_RES CSR_TYPE_NCB
#define basename_CAVM_PSM_SET1_MAB_RES "PSM_SET1_MAB_RES"
#define busnum_CAVM_PSM_SET1_MAB_RES 0
#define arguments_CAVM_PSM_SET1_MAB_RES -1,-1,-1,-1

/**
 * Register (NCB) psm_set1_mabfifo#_ctrl
 *
 * PHY Scheduler Set 1 MAB FIFO Control Registers
 * These registers contain internal information about the MDAB FIFOs,
 * i.e., the FIFOs of commands received from MDABs.
 */
union cavm_psm_set1_mabfifox_ctrl
{
    uint64_t u;
    struct cavm_psm_set1_mabfifox_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t errcap_qid            : 8;  /**< [ 63: 56](R/W/H) Contains the QID for the most recent bad command encountered by the MDAB FIFO.  Write
                                                                 any nonzero value to clear. */
        uint64_t reserved_54_55        : 2;
        uint64_t errcap_opc            : 6;  /**< [ 53: 48](R/W/H) Contains the opcode for the most recent bad command encountered by the MDAB FIFO.
                                                                 Write any nonzero value to clear. */
        uint64_t reserved_36_47        : 12;
        uint64_t mabfifo_wdog          : 4;  /**< [ 35: 32](R/W) Configures the timeout value of the MABFIFO watchdog timer.  The timeout value
                                                                 is 2^[MABFIFO_WDOG] * 16.  The MABFIFO watchdog timer runs when the FIFO
                                                                 contains a valid entry, and is reset to 0 whenever an entry is popped. If the
                                                                 timeout value is exceeded, an interrupt will be asserted.  A [MABFIFO_WDOG]
                                                                 value of 0 will disable the timeout check. */
        uint64_t reserved_27_31        : 5;
        uint64_t fifo_level            : 3;  /**< [ 26: 24](RO/H) Contains the number of entries held in the MDAB FIFO. */
        uint64_t reserved_17_23        : 7;
        uint64_t force_pop             : 1;  /**< [ 16: 16](R/W/H) fixme */
        uint64_t reserved_11_15        : 5;
        uint64_t fifo_cdt              : 3;  /**< [ 10:  8](R/W/H) Contains the number of credits held by the MDAB for making JCA requests. */
        uint64_t reserved_2_7          : 6;
        uint64_t mabfifo_flush_en      : 1;  /**< [  1:  1](R/W/H) fixme */
        uint64_t mabfifo_dis           : 1;  /**< [  0:  0](R/W/H) fixme */
#else /* Word 0 - Little Endian */
        uint64_t mabfifo_dis           : 1;  /**< [  0:  0](R/W/H) fixme */
        uint64_t mabfifo_flush_en      : 1;  /**< [  1:  1](R/W/H) fixme */
        uint64_t reserved_2_7          : 6;
        uint64_t fifo_cdt              : 3;  /**< [ 10:  8](R/W/H) Contains the number of credits held by the MDAB for making JCA requests. */
        uint64_t reserved_11_15        : 5;
        uint64_t force_pop             : 1;  /**< [ 16: 16](R/W/H) fixme */
        uint64_t reserved_17_23        : 7;
        uint64_t fifo_level            : 3;  /**< [ 26: 24](RO/H) Contains the number of entries held in the MDAB FIFO. */
        uint64_t reserved_27_31        : 5;
        uint64_t mabfifo_wdog          : 4;  /**< [ 35: 32](R/W) Configures the timeout value of the MABFIFO watchdog timer.  The timeout value
                                                                 is 2^[MABFIFO_WDOG] * 16.  The MABFIFO watchdog timer runs when the FIFO
                                                                 contains a valid entry, and is reset to 0 whenever an entry is popped. If the
                                                                 timeout value is exceeded, an interrupt will be asserted.  A [MABFIFO_WDOG]
                                                                 value of 0 will disable the timeout check. */
        uint64_t reserved_36_47        : 12;
        uint64_t errcap_opc            : 6;  /**< [ 53: 48](R/W/H) Contains the opcode for the most recent bad command encountered by the MDAB FIFO.
                                                                 Write any nonzero value to clear. */
        uint64_t reserved_54_55        : 2;
        uint64_t errcap_qid            : 8;  /**< [ 63: 56](R/W/H) Contains the QID for the most recent bad command encountered by the MDAB FIFO.  Write
                                                                 any nonzero value to clear. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set1_mabfifox_ctrl_s cn; */
};
typedef union cavm_psm_set1_mabfifox_ctrl cavm_psm_set1_mabfifox_ctrl_t;

static inline uint64_t CAVM_PSM_SET1_MABFIFOX_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET1_MABFIFOX_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=41))
        return 0x860001090000ll + 0x10ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=39))
        return 0x860001090000ll + 0x10ll * ((a) & 0x3f);
    __cavm_csr_fatal("PSM_SET1_MABFIFOX_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET1_MABFIFOX_CTRL(a) cavm_psm_set1_mabfifox_ctrl_t
#define bustype_CAVM_PSM_SET1_MABFIFOX_CTRL(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET1_MABFIFOX_CTRL(a) "PSM_SET1_MABFIFOX_CTRL"
#define busnum_CAVM_PSM_SET1_MABFIFOX_CTRL(a) (a)
#define arguments_CAVM_PSM_SET1_MABFIFOX_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set1_mabfifo_busy
 *
 * PHY Scheduler Set 1 MAB FIFO Busy Register
 */
union cavm_psm_set1_mabfifo_busy
{
    uint64_t u;
    struct cavm_psm_set1_mabfifo_busy_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_42_63        : 22;
        uint64_t mabf_busy             : 42; /**< [ 41:  0](RO/H) Current status of the Set 1 MAB FIFOs.  A bit value of 1
                                                                 indicates that the MAB FIFO contains at least one entry.
                                                                 A bit value of 0 indicates that it is empty. */
#else /* Word 0 - Little Endian */
        uint64_t mabf_busy             : 42; /**< [ 41:  0](RO/H) Current status of the Set 1 MAB FIFOs.  A bit value of 1
                                                                 indicates that the MAB FIFO contains at least one entry.
                                                                 A bit value of 0 indicates that it is empty. */
        uint64_t reserved_42_63        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set1_mabfifo_busy_s cn9; */
    /* struct cavm_psm_set1_mabfifo_busy_s cnf95xx; */
    struct cavm_psm_set1_mabfifo_busy_f95o
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t mabf_busy             : 40; /**< [ 39:  0](RO/H) Current status of the Set 1 MAB FIFOs.  A bit value of 1
                                                                 indicates that the MAB FIFO contains at least one entry.
                                                                 A bit value of 0 indicates that it is empty. */
#else /* Word 0 - Little Endian */
        uint64_t mabf_busy             : 40; /**< [ 39:  0](RO/H) Current status of the Set 1 MAB FIFOs.  A bit value of 1
                                                                 indicates that the MAB FIFO contains at least one entry.
                                                                 A bit value of 0 indicates that it is empty. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } f95o;
};
typedef union cavm_psm_set1_mabfifo_busy cavm_psm_set1_mabfifo_busy_t;

#define CAVM_PSM_SET1_MABFIFO_BUSY CAVM_PSM_SET1_MABFIFO_BUSY_FUNC()
static inline uint64_t CAVM_PSM_SET1_MABFIFO_BUSY_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET1_MABFIFO_BUSY_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x860001093000ll;
    if (cavm_is_model(OCTEONTX_F95O))
        return 0x860001093000ll;
    __cavm_csr_fatal("PSM_SET1_MABFIFO_BUSY", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET1_MABFIFO_BUSY cavm_psm_set1_mabfifo_busy_t
#define bustype_CAVM_PSM_SET1_MABFIFO_BUSY CSR_TYPE_NCB
#define basename_CAVM_PSM_SET1_MABFIFO_BUSY "PSM_SET1_MABFIFO_BUSY"
#define busnum_CAVM_PSM_SET1_MABFIFO_BUSY 0
#define arguments_CAVM_PSM_SET1_MABFIFO_BUSY -1,-1,-1,-1

/**
 * Register (NCB) psm_set1_mabq#_cdt_usage
 *
 * PHY Scheduler Set 1 MDAB Credit Usage Registers
 * This register reports the current usage of the MDAB job credits.
 */
union cavm_psm_set1_mabqx_cdt_usage
{
    uint64_t u;
    struct cavm_psm_set1_mabqx_cdt_usage_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_42_63        : 22;
        uint64_t cdt_usage             : 42; /**< [ 41:  0](RO/H) This field reports the current usage of the MDAB job credits.
                                                                 A bit value of 1 indicates that the MDAB is using at least one
                                                                 job credit.  A bit value of 0 indicates that no job credits are
                                                                 in use. */
#else /* Word 0 - Little Endian */
        uint64_t cdt_usage             : 42; /**< [ 41:  0](RO/H) This field reports the current usage of the MDAB job credits.
                                                                 A bit value of 1 indicates that the MDAB is using at least one
                                                                 job credit.  A bit value of 0 indicates that no job credits are
                                                                 in use. */
        uint64_t reserved_42_63        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set1_mabqx_cdt_usage_s cn9; */
    /* struct cavm_psm_set1_mabqx_cdt_usage_s cnf95xx; */
    struct cavm_psm_set1_mabqx_cdt_usage_f95o
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t cdt_usage             : 40; /**< [ 39:  0](RO/H) This field reports the current usage of the MDAB job credits.
                                                                 A bit value of 1 indicates that the MDAB is using at least one
                                                                 job credit.  A bit value of 0 indicates that no job credits are
                                                                 in use. */
#else /* Word 0 - Little Endian */
        uint64_t cdt_usage             : 40; /**< [ 39:  0](RO/H) This field reports the current usage of the MDAB job credits.
                                                                 A bit value of 1 indicates that the MDAB is using at least one
                                                                 job credit.  A bit value of 0 indicates that no job credits are
                                                                 in use. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } f95o;
};
typedef union cavm_psm_set1_mabqx_cdt_usage cavm_psm_set1_mabqx_cdt_usage_t;

static inline uint64_t CAVM_PSM_SET1_MABQX_CDT_USAGE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET1_MABQX_CDT_USAGE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=1))
        return 0x860001057c00ll + 0x10ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=1))
        return 0x860001057c00ll + 0x10ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_SET1_MABQX_CDT_USAGE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET1_MABQX_CDT_USAGE(a) cavm_psm_set1_mabqx_cdt_usage_t
#define bustype_CAVM_PSM_SET1_MABQX_CDT_USAGE(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET1_MABQX_CDT_USAGE(a) "PSM_SET1_MABQX_CDT_USAGE"
#define busnum_CAVM_PSM_SET1_MABQX_CDT_USAGE(a) (a)
#define arguments_CAVM_PSM_SET1_MABQX_CDT_USAGE(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set1_mabq#_job_cdt#
 *
 * PHY Scheduler Set 1 MDAB Job Credit Registers
 * These registers define the current number of jobs that the PSM
 * can submit to the MABQs of each MDAB at a time.
 */
union cavm_psm_set1_mabqx_job_cdtx
{
    uint64_t u;
    struct cavm_psm_set1_mabqx_job_cdtx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t cdt                   : 5;  /**< [  4:  0](RO/H) Current number of jobs for MDAB {b}. Valid range is [0,20]. */
#else /* Word 0 - Little Endian */
        uint64_t cdt                   : 5;  /**< [  4:  0](RO/H) Current number of jobs for MDAB {b}. Valid range is [0,20]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set1_mabqx_job_cdtx_s cn; */
};
typedef union cavm_psm_set1_mabqx_job_cdtx cavm_psm_set1_mabqx_job_cdtx_t;

static inline uint64_t CAVM_PSM_SET1_MABQX_JOB_CDTX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET1_MABQX_JOB_CDTX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a<=1) && (b<=41)))
        return 0x860001054000ll + 0x1000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x3f);
    if (cavm_is_model(OCTEONTX_F95O) && ((a<=1) && (b<=39)))
        return 0x860001054000ll + 0x1000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x3f);
    __cavm_csr_fatal("PSM_SET1_MABQX_JOB_CDTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET1_MABQX_JOB_CDTX(a,b) cavm_psm_set1_mabqx_job_cdtx_t
#define bustype_CAVM_PSM_SET1_MABQX_JOB_CDTX(a,b) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET1_MABQX_JOB_CDTX(a,b) "PSM_SET1_MABQX_JOB_CDTX"
#define busnum_CAVM_PSM_SET1_MABQX_JOB_CDTX(a,b) (a)
#define arguments_CAVM_PSM_SET1_MABQX_JOB_CDTX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) psm_set1_max_mabq#_job_cdt#
 *
 * PHY Scheduler Set 1 Maximum MHAB Job Credit Registers
 * These registers define the maximum number of jobs that the PSM
 * can submit to the MABQs of each MDAB at a time.
 */
union cavm_psm_set1_max_mabqx_job_cdtx
{
    uint64_t u;
    struct cavm_psm_set1_max_mabqx_job_cdtx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t max                   : 5;  /**< [  4:  0](R/W) Maximum number of jobs for MDAB {b}. Valid range is [0,20]. */
#else /* Word 0 - Little Endian */
        uint64_t max                   : 5;  /**< [  4:  0](R/W) Maximum number of jobs for MDAB {b}. Valid range is [0,20]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set1_max_mabqx_job_cdtx_s cn; */
};
typedef union cavm_psm_set1_max_mabqx_job_cdtx cavm_psm_set1_max_mabqx_job_cdtx_t;

static inline uint64_t CAVM_PSM_SET1_MAX_MABQX_JOB_CDTX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET1_MAX_MABQX_JOB_CDTX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a<=1) && (b<=41)))
        return 0x860001052000ll + 0x1000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x3f);
    if (cavm_is_model(OCTEONTX_F95O) && ((a<=1) && (b<=39)))
        return 0x860001052000ll + 0x1000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x3f);
    __cavm_csr_fatal("PSM_SET1_MAX_MABQX_JOB_CDTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET1_MAX_MABQX_JOB_CDTX(a,b) cavm_psm_set1_max_mabqx_job_cdtx_t
#define bustype_CAVM_PSM_SET1_MAX_MABQX_JOB_CDTX(a,b) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET1_MAX_MABQX_JOB_CDTX(a,b) "PSM_SET1_MAX_MABQX_JOB_CDTX"
#define busnum_CAVM_PSM_SET1_MAX_MABQX_JOB_CDTX(a,b) (a)
#define arguments_CAVM_PSM_SET1_MAX_MABQX_JOB_CDTX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) psm_set1_rsrc_tbl#
 *
 * PHY Scheduler Resource Table Registers
 * These registers define a mapping table of job types to MDAB(s).
 * Multiple MDABs may be assigned to service jobs of each type, and a
 * given MDAB can be assigned to any number of job types.
 */
union cavm_psm_set1_rsrc_tblx
{
    uint64_t u;
    struct cavm_psm_set1_rsrc_tblx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_42_63        : 22;
        uint64_t mab_map               : 42; /**< [ 41:  0](R/W) Bit mask indicating which MDABs can accept jobs of type {a}. */
#else /* Word 0 - Little Endian */
        uint64_t mab_map               : 42; /**< [ 41:  0](R/W) Bit mask indicating which MDABs can accept jobs of type {a}. */
        uint64_t reserved_42_63        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set1_rsrc_tblx_s cn9; */
    /* struct cavm_psm_set1_rsrc_tblx_s cnf95xx; */
    struct cavm_psm_set1_rsrc_tblx_f95o
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t mab_map               : 40; /**< [ 39:  0](R/W) Bit mask indicating which MDABs can accept jobs of type {a}. */
#else /* Word 0 - Little Endian */
        uint64_t mab_map               : 40; /**< [ 39:  0](R/W) Bit mask indicating which MDABs can accept jobs of type {a}. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } f95o;
};
typedef union cavm_psm_set1_rsrc_tblx cavm_psm_set1_rsrc_tblx_t;

static inline uint64_t CAVM_PSM_SET1_RSRC_TBLX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET1_RSRC_TBLX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=255))
        return 0x860001050000ll + 0x10ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=255))
        return 0x860001050000ll + 0x10ll * ((a) & 0xff);
    __cavm_csr_fatal("PSM_SET1_RSRC_TBLX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET1_RSRC_TBLX(a) cavm_psm_set1_rsrc_tblx_t
#define bustype_CAVM_PSM_SET1_RSRC_TBLX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET1_RSRC_TBLX(a) "PSM_SET1_RSRC_TBLX"
#define busnum_CAVM_PSM_SET1_RSRC_TBLX(a) (a)
#define arguments_CAVM_PSM_SET1_RSRC_TBLX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set2_grp#_cdt
 *
 * PHY Scheduler Set 2 Group Credit Registers
 * These registers define the total number of job credits available for the RF Engine
 * group.  It must match the total of the credits programmed in the
 * PSM_SET2_MAX_MABQ()_JOB_CDT() registers for the RF Engines selected by the
 * corresponding PSM_SET2_GRP()_MASK register.
 */
union cavm_psm_set2_grpx_cdt
{
    uint64_t u;
    struct cavm_psm_set2_grpx_cdt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t grp_cdt               : 6;  /**< [  5:  0](R/W/H) Total maximum number of jobs for the RFOEs selected by the
                                                                 corresponding PSM_SET2_GRP()_MASK register. Valid range is [0,63]. */
#else /* Word 0 - Little Endian */
        uint64_t grp_cdt               : 6;  /**< [  5:  0](R/W/H) Total maximum number of jobs for the RFOEs selected by the
                                                                 corresponding PSM_SET2_GRP()_MASK register. Valid range is [0,63]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set2_grpx_cdt_s cn9; */
    /* struct cavm_psm_set2_grpx_cdt_s cnf95xx; */
    struct cavm_psm_set2_grpx_cdt_f95o
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t grp_cdt               : 6;  /**< [  5:  0](R/W/H) Total maximum number of jobs for the RF Engines selected by the
                                                                 corresponding PSM_SET2_GRP()_MASK register. Valid range is [0,63]. */
#else /* Word 0 - Little Endian */
        uint64_t grp_cdt               : 6;  /**< [  5:  0](R/W/H) Total maximum number of jobs for the RF Engines selected by the
                                                                 corresponding PSM_SET2_GRP()_MASK register. Valid range is [0,63]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } f95o;
};
typedef union cavm_psm_set2_grpx_cdt cavm_psm_set2_grpx_cdt_t;

static inline uint64_t CAVM_PSM_SET2_GRPX_CDT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET2_GRPX_CDT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=7))
        return 0x860001067400ll + 0x10ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=7))
        return 0x860001067400ll + 0x10ll * ((a) & 0x7);
    __cavm_csr_fatal("PSM_SET2_GRPX_CDT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET2_GRPX_CDT(a) cavm_psm_set2_grpx_cdt_t
#define bustype_CAVM_PSM_SET2_GRPX_CDT(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET2_GRPX_CDT(a) "PSM_SET2_GRPX_CDT"
#define busnum_CAVM_PSM_SET2_GRPX_CDT(a) (a)
#define arguments_CAVM_PSM_SET2_GRPX_CDT(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set2_grp#_mask
 *
 * PHY Scheduler Set 2 RF Engine Group Mask Registers
 * These registers define membership of RF Engines within each of eight groups.  Along
 * with the PSM_SET2_GRP()_CDT registers, these registers can be used to load balance
 * jobs across many homogeneous RF Engines.
 */
union cavm_psm_set2_grpx_mask
{
    uint64_t u;
    struct cavm_psm_set2_grpx_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t mab_map               : 6;  /**< [  5:  0](R/W) Bit mask indicating which RFOEs belong to the RFOE
                                                                 group.  If this register is programmed, the corresponding group
                                                                 credit register (PSM_SET2_GRP()_CDT) must be programmed with the correct
                                                                 value. */
#else /* Word 0 - Little Endian */
        uint64_t mab_map               : 6;  /**< [  5:  0](R/W) Bit mask indicating which RFOEs belong to the RFOE
                                                                 group.  If this register is programmed, the corresponding group
                                                                 credit register (PSM_SET2_GRP()_CDT) must be programmed with the correct
                                                                 value. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set2_grpx_mask_s cn9; */
    struct cavm_psm_set2_grpx_mask_cnf95xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t mab_map               : 2;  /**< [  1:  0](R/W) Bit mask indicating which RFOEs belong to the RFOE
                                                                 group.  If this register is programmed, the corresponding group
                                                                 credit register (PSM_SET2_GRP()_CDT) must be programmed with the correct
                                                                 value. */
#else /* Word 0 - Little Endian */
        uint64_t mab_map               : 2;  /**< [  1:  0](R/W) Bit mask indicating which RFOEs belong to the RFOE
                                                                 group.  If this register is programmed, the corresponding group
                                                                 credit register (PSM_SET2_GRP()_CDT) must be programmed with the correct
                                                                 value. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } cnf95xx;
    struct cavm_psm_set2_grpx_mask_f95o
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t mab_map               : 6;  /**< [  5:  0](R/W) Bit mask indicating which RF Engines belong to the RF Engine
                                                                 group.  If this register is programmed, the corresponding group
                                                                 credit register (PSM_SET2_GRP()_CDT) must be programmed with the correct
                                                                 value. */
#else /* Word 0 - Little Endian */
        uint64_t mab_map               : 6;  /**< [  5:  0](R/W) Bit mask indicating which RF Engines belong to the RF Engine
                                                                 group.  If this register is programmed, the corresponding group
                                                                 credit register (PSM_SET2_GRP()_CDT) must be programmed with the correct
                                                                 value. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } f95o;
};
typedef union cavm_psm_set2_grpx_mask cavm_psm_set2_grpx_mask_t;

static inline uint64_t CAVM_PSM_SET2_GRPX_MASK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET2_GRPX_MASK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=7))
        return 0x860001067000ll + 0x10ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=7))
        return 0x860001067000ll + 0x10ll * ((a) & 0x7);
    __cavm_csr_fatal("PSM_SET2_GRPX_MASK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET2_GRPX_MASK(a) cavm_psm_set2_grpx_mask_t
#define bustype_CAVM_PSM_SET2_GRPX_MASK(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET2_GRPX_MASK(a) "PSM_SET2_GRPX_MASK"
#define busnum_CAVM_PSM_SET2_GRPX_MASK(a) (a)
#define arguments_CAVM_PSM_SET2_GRPX_MASK(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set2_mab_res
 *
 * PHY Scheduler Set 2 MAB Reservation Register
 * This register reports the current value of the per-MHAB/MDAB reservation
 * vector, for CONT_JOB commands.
 */
union cavm_psm_set2_mab_res
{
    uint64_t u;
    struct cavm_psm_set2_mab_res_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t mabres                : 6;  /**< [  5:  0](R/W/H) This field reports the current value of the per-MHAB/MDAB reservation vector, for CONT_JOB
                                                                 commands. */
#else /* Word 0 - Little Endian */
        uint64_t mabres                : 6;  /**< [  5:  0](R/W/H) This field reports the current value of the per-MHAB/MDAB reservation vector, for CONT_JOB
                                                                 commands. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set2_mab_res_s cn9; */
    struct cavm_psm_set2_mab_res_cnf95xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t mabres                : 2;  /**< [  1:  0](R/W/H) This field reports the current value of the per-MHAB/MDAB reservation vector, for CONT_JOB
                                                                 commands. */
#else /* Word 0 - Little Endian */
        uint64_t mabres                : 2;  /**< [  1:  0](R/W/H) This field reports the current value of the per-MHAB/MDAB reservation vector, for CONT_JOB
                                                                 commands. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } cnf95xx;
    /* struct cavm_psm_set2_mab_res_s f95o; */
};
typedef union cavm_psm_set2_mab_res cavm_psm_set2_mab_res_t;

#define CAVM_PSM_SET2_MAB_RES CAVM_PSM_SET2_MAB_RES_FUNC()
static inline uint64_t CAVM_PSM_SET2_MAB_RES_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET2_MAB_RES_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x860001067800ll;
    if (cavm_is_model(OCTEONTX_F95O))
        return 0x860001067800ll;
    __cavm_csr_fatal("PSM_SET2_MAB_RES", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET2_MAB_RES cavm_psm_set2_mab_res_t
#define bustype_CAVM_PSM_SET2_MAB_RES CSR_TYPE_NCB
#define basename_CAVM_PSM_SET2_MAB_RES "PSM_SET2_MAB_RES"
#define busnum_CAVM_PSM_SET2_MAB_RES 0
#define arguments_CAVM_PSM_SET2_MAB_RES -1,-1,-1,-1

/**
 * Register (NCB) psm_set2_mabfifo#_ctrl
 *
 * PHY Scheduler Set 2 MAB FIFO Control Registers
 * These registers contain internal information about the RF Engine FIFOs,
 * i.e., the FIFOs of commands received from RF Engines.
 */
union cavm_psm_set2_mabfifox_ctrl
{
    uint64_t u;
    struct cavm_psm_set2_mabfifox_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t errcap_qid            : 8;  /**< [ 63: 56](R/W/H) Contains the QID for the most recent bad command encountered by the RFOE FIFO.  Write
                                                                 any nonzero value to clear. */
        uint64_t reserved_54_55        : 2;
        uint64_t errcap_opc            : 6;  /**< [ 53: 48](R/W/H) Contains the opcode for the most recent bad command encountered by the RFOE FIFO.
                                                                 Write any nonzero value to clear. */
        uint64_t reserved_36_47        : 12;
        uint64_t mabfifo_wdog          : 4;  /**< [ 35: 32](R/W) Configures the timeout value of the MABFIFO watchdog timer.  The timeout value
                                                                 is 2^[MABFIFO_WDOG] * 16.  The MABFIFO watchdog timer runs when the FIFO
                                                                 contains a valid entry, and is reset to 0 whenever an entry is popped. If the
                                                                 timeout value is exceeded, an interrupt will be asserted.  A [MABFIFO_WDOG]
                                                                 value of 0 will disable the timeout check. */
        uint64_t reserved_27_31        : 5;
        uint64_t fifo_level            : 3;  /**< [ 26: 24](RO/H) Contains the number of entries held in the RFOE FIFO. */
        uint64_t reserved_17_23        : 7;
        uint64_t force_pop             : 1;  /**< [ 16: 16](R/W/H) fixme */
        uint64_t reserved_11_15        : 5;
        uint64_t fifo_cdt              : 3;  /**< [ 10:  8](R/W/H) Contains the number of credits held by the RFOE for making JCA requests. */
        uint64_t reserved_2_7          : 6;
        uint64_t mabfifo_flush_en      : 1;  /**< [  1:  1](R/W/H) fixme */
        uint64_t mabfifo_dis           : 1;  /**< [  0:  0](R/W/H) fixme */
#else /* Word 0 - Little Endian */
        uint64_t mabfifo_dis           : 1;  /**< [  0:  0](R/W/H) fixme */
        uint64_t mabfifo_flush_en      : 1;  /**< [  1:  1](R/W/H) fixme */
        uint64_t reserved_2_7          : 6;
        uint64_t fifo_cdt              : 3;  /**< [ 10:  8](R/W/H) Contains the number of credits held by the RFOE for making JCA requests. */
        uint64_t reserved_11_15        : 5;
        uint64_t force_pop             : 1;  /**< [ 16: 16](R/W/H) fixme */
        uint64_t reserved_17_23        : 7;
        uint64_t fifo_level            : 3;  /**< [ 26: 24](RO/H) Contains the number of entries held in the RFOE FIFO. */
        uint64_t reserved_27_31        : 5;
        uint64_t mabfifo_wdog          : 4;  /**< [ 35: 32](R/W) Configures the timeout value of the MABFIFO watchdog timer.  The timeout value
                                                                 is 2^[MABFIFO_WDOG] * 16.  The MABFIFO watchdog timer runs when the FIFO
                                                                 contains a valid entry, and is reset to 0 whenever an entry is popped. If the
                                                                 timeout value is exceeded, an interrupt will be asserted.  A [MABFIFO_WDOG]
                                                                 value of 0 will disable the timeout check. */
        uint64_t reserved_36_47        : 12;
        uint64_t errcap_opc            : 6;  /**< [ 53: 48](R/W/H) Contains the opcode for the most recent bad command encountered by the RFOE FIFO.
                                                                 Write any nonzero value to clear. */
        uint64_t reserved_54_55        : 2;
        uint64_t errcap_qid            : 8;  /**< [ 63: 56](R/W/H) Contains the QID for the most recent bad command encountered by the RFOE FIFO.  Write
                                                                 any nonzero value to clear. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set2_mabfifox_ctrl_s cn9; */
    /* struct cavm_psm_set2_mabfifox_ctrl_s cnf95xx; */
    struct cavm_psm_set2_mabfifox_ctrl_f95o
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t errcap_qid            : 8;  /**< [ 63: 56](R/W/H) Contains the QID for the most recent bad command encountered by the RF Engine FIFO.  Write
                                                                 any nonzero value to clear. */
        uint64_t reserved_54_55        : 2;
        uint64_t errcap_opc            : 6;  /**< [ 53: 48](R/W/H) Contains the opcode for the most recent bad command encountered by the RF Engine FIFO.
                                                                 Write any nonzero value to clear. */
        uint64_t reserved_36_47        : 12;
        uint64_t mabfifo_wdog          : 4;  /**< [ 35: 32](R/W) Configures the timeout value of the MABFIFO watchdog timer.  The timeout value
                                                                 is 2^[MABFIFO_WDOG] * 16.  The MABFIFO watchdog timer runs when the FIFO
                                                                 contains a valid entry, and is reset to 0 whenever an entry is popped. If the
                                                                 timeout value is exceeded, an interrupt will be asserted.  A [MABFIFO_WDOG]
                                                                 value of 0 will disable the timeout check. */
        uint64_t reserved_27_31        : 5;
        uint64_t fifo_level            : 3;  /**< [ 26: 24](RO/H) Contains the number of entries held in the RF Engine FIFO. */
        uint64_t reserved_17_23        : 7;
        uint64_t force_pop             : 1;  /**< [ 16: 16](R/W/H) fixme */
        uint64_t reserved_11_15        : 5;
        uint64_t fifo_cdt              : 3;  /**< [ 10:  8](R/W/H) Contains the number of credits held by the RF Engine for making JCA requests. */
        uint64_t reserved_2_7          : 6;
        uint64_t mabfifo_flush_en      : 1;  /**< [  1:  1](R/W/H) fixme */
        uint64_t mabfifo_dis           : 1;  /**< [  0:  0](R/W/H) fixme */
#else /* Word 0 - Little Endian */
        uint64_t mabfifo_dis           : 1;  /**< [  0:  0](R/W/H) fixme */
        uint64_t mabfifo_flush_en      : 1;  /**< [  1:  1](R/W/H) fixme */
        uint64_t reserved_2_7          : 6;
        uint64_t fifo_cdt              : 3;  /**< [ 10:  8](R/W/H) Contains the number of credits held by the RF Engine for making JCA requests. */
        uint64_t reserved_11_15        : 5;
        uint64_t force_pop             : 1;  /**< [ 16: 16](R/W/H) fixme */
        uint64_t reserved_17_23        : 7;
        uint64_t fifo_level            : 3;  /**< [ 26: 24](RO/H) Contains the number of entries held in the RF Engine FIFO. */
        uint64_t reserved_27_31        : 5;
        uint64_t mabfifo_wdog          : 4;  /**< [ 35: 32](R/W) Configures the timeout value of the MABFIFO watchdog timer.  The timeout value
                                                                 is 2^[MABFIFO_WDOG] * 16.  The MABFIFO watchdog timer runs when the FIFO
                                                                 contains a valid entry, and is reset to 0 whenever an entry is popped. If the
                                                                 timeout value is exceeded, an interrupt will be asserted.  A [MABFIFO_WDOG]
                                                                 value of 0 will disable the timeout check. */
        uint64_t reserved_36_47        : 12;
        uint64_t errcap_opc            : 6;  /**< [ 53: 48](R/W/H) Contains the opcode for the most recent bad command encountered by the RF Engine FIFO.
                                                                 Write any nonzero value to clear. */
        uint64_t reserved_54_55        : 2;
        uint64_t errcap_qid            : 8;  /**< [ 63: 56](R/W/H) Contains the QID for the most recent bad command encountered by the RF Engine FIFO.  Write
                                                                 any nonzero value to clear. */
#endif /* Word 0 - End */
    } f95o;
};
typedef union cavm_psm_set2_mabfifox_ctrl cavm_psm_set2_mabfifox_ctrl_t;

static inline uint64_t CAVM_PSM_SET2_MABFIFOX_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET2_MABFIFOX_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=1))
        return 0x8600010a0000ll + 0x10ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=5))
        return 0x8600010a0000ll + 0x10ll * ((a) & 0x7);
    __cavm_csr_fatal("PSM_SET2_MABFIFOX_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET2_MABFIFOX_CTRL(a) cavm_psm_set2_mabfifox_ctrl_t
#define bustype_CAVM_PSM_SET2_MABFIFOX_CTRL(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET2_MABFIFOX_CTRL(a) "PSM_SET2_MABFIFOX_CTRL"
#define busnum_CAVM_PSM_SET2_MABFIFOX_CTRL(a) (a)
#define arguments_CAVM_PSM_SET2_MABFIFOX_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set2_mabfifo_busy
 *
 * PHY Scheduler Set 2 MAB FIFO Busy Register
 */
union cavm_psm_set2_mabfifo_busy
{
    uint64_t u;
    struct cavm_psm_set2_mabfifo_busy_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t mabf_busy             : 6;  /**< [  5:  0](RO/H) Current status of the Set 2 MAB FIFOs.  A bit value of 1
                                                                 indicates that the MAB FIFO contains at least one entry.
                                                                 A bit value of 0 indicates that it is empty. */
#else /* Word 0 - Little Endian */
        uint64_t mabf_busy             : 6;  /**< [  5:  0](RO/H) Current status of the Set 2 MAB FIFOs.  A bit value of 1
                                                                 indicates that the MAB FIFO contains at least one entry.
                                                                 A bit value of 0 indicates that it is empty. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set2_mabfifo_busy_s cn9; */
    struct cavm_psm_set2_mabfifo_busy_cnf95xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t mabf_busy             : 2;  /**< [  1:  0](RO/H) Current status of the Set 2 MAB FIFOs.  A bit value of 1
                                                                 indicates that the MAB FIFO contains at least one entry.
                                                                 A bit value of 0 indicates that it is empty. */
#else /* Word 0 - Little Endian */
        uint64_t mabf_busy             : 2;  /**< [  1:  0](RO/H) Current status of the Set 2 MAB FIFOs.  A bit value of 1
                                                                 indicates that the MAB FIFO contains at least one entry.
                                                                 A bit value of 0 indicates that it is empty. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } cnf95xx;
    /* struct cavm_psm_set2_mabfifo_busy_s f95o; */
};
typedef union cavm_psm_set2_mabfifo_busy cavm_psm_set2_mabfifo_busy_t;

#define CAVM_PSM_SET2_MABFIFO_BUSY CAVM_PSM_SET2_MABFIFO_BUSY_FUNC()
static inline uint64_t CAVM_PSM_SET2_MABFIFO_BUSY_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET2_MABFIFO_BUSY_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x8600010a3000ll;
    if (cavm_is_model(OCTEONTX_F95O))
        return 0x8600010a3000ll;
    __cavm_csr_fatal("PSM_SET2_MABFIFO_BUSY", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET2_MABFIFO_BUSY cavm_psm_set2_mabfifo_busy_t
#define bustype_CAVM_PSM_SET2_MABFIFO_BUSY CSR_TYPE_NCB
#define basename_CAVM_PSM_SET2_MABFIFO_BUSY "PSM_SET2_MABFIFO_BUSY"
#define busnum_CAVM_PSM_SET2_MABFIFO_BUSY 0
#define arguments_CAVM_PSM_SET2_MABFIFO_BUSY -1,-1,-1,-1

/**
 * Register (NCB) psm_set2_mabq#_cdt_usage
 *
 * PHY Scheduler Set 2 RF Engine Credit Usage Registers
 * This register reports the current usage of the RF Engine job credits.
 */
union cavm_psm_set2_mabqx_cdt_usage
{
    uint64_t u;
    struct cavm_psm_set2_mabqx_cdt_usage_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t cdt_usage             : 6;  /**< [  5:  0](RO/H) This field reports the current usage of the RFOE job credits.
                                                                 A bit value of 1 indicates that the RFOE is using at least one
                                                                 job credit.  A bit value of 0 indicates that no job credits are
                                                                 in use. */
#else /* Word 0 - Little Endian */
        uint64_t cdt_usage             : 6;  /**< [  5:  0](RO/H) This field reports the current usage of the RFOE job credits.
                                                                 A bit value of 1 indicates that the RFOE is using at least one
                                                                 job credit.  A bit value of 0 indicates that no job credits are
                                                                 in use. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set2_mabqx_cdt_usage_s cn9; */
    struct cavm_psm_set2_mabqx_cdt_usage_cnf95xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t cdt_usage             : 2;  /**< [  1:  0](RO/H) This field reports the current usage of the RFOE job credits.
                                                                 A bit value of 1 indicates that the RFOE is using at least one
                                                                 job credit.  A bit value of 0 indicates that no job credits are
                                                                 in use. */
#else /* Word 0 - Little Endian */
        uint64_t cdt_usage             : 2;  /**< [  1:  0](RO/H) This field reports the current usage of the RFOE job credits.
                                                                 A bit value of 1 indicates that the RFOE is using at least one
                                                                 job credit.  A bit value of 0 indicates that no job credits are
                                                                 in use. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } cnf95xx;
    struct cavm_psm_set2_mabqx_cdt_usage_f95o
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t cdt_usage             : 6;  /**< [  5:  0](RO/H) This field reports the current usage of the RF Engine job credits.
                                                                 A bit value of 1 indicates that the RF Engine is using at least one
                                                                 job credit.  A bit value of 0 indicates that no job credits are
                                                                 in use. */
#else /* Word 0 - Little Endian */
        uint64_t cdt_usage             : 6;  /**< [  5:  0](RO/H) This field reports the current usage of the RF Engine job credits.
                                                                 A bit value of 1 indicates that the RF Engine is using at least one
                                                                 job credit.  A bit value of 0 indicates that no job credits are
                                                                 in use. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } f95o;
};
typedef union cavm_psm_set2_mabqx_cdt_usage cavm_psm_set2_mabqx_cdt_usage_t;

static inline uint64_t CAVM_PSM_SET2_MABQX_CDT_USAGE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET2_MABQX_CDT_USAGE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=1))
        return 0x860001067c00ll + 0x10ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=1))
        return 0x860001067c00ll + 0x10ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_SET2_MABQX_CDT_USAGE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET2_MABQX_CDT_USAGE(a) cavm_psm_set2_mabqx_cdt_usage_t
#define bustype_CAVM_PSM_SET2_MABQX_CDT_USAGE(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET2_MABQX_CDT_USAGE(a) "PSM_SET2_MABQX_CDT_USAGE"
#define busnum_CAVM_PSM_SET2_MABQX_CDT_USAGE(a) (a)
#define arguments_CAVM_PSM_SET2_MABQX_CDT_USAGE(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set2_mabq#_job_cdt#
 *
 * PHY Scheduler Set 2 RF Engine Job Credit Registers
 * These registers define the current number of jobs that the PSM
 * can submit to the MABQs of each RF Engine at a time.
 */
union cavm_psm_set2_mabqx_job_cdtx
{
    uint64_t u;
    struct cavm_psm_set2_mabqx_job_cdtx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t cdt                   : 5;  /**< [  4:  0](RO/H) Current number of jobs for RFOE {b}. Valid range is [0,20]. */
#else /* Word 0 - Little Endian */
        uint64_t cdt                   : 5;  /**< [  4:  0](RO/H) Current number of jobs for RFOE {b}. Valid range is [0,20]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set2_mabqx_job_cdtx_s cn9; */
    /* struct cavm_psm_set2_mabqx_job_cdtx_s cnf95xx; */
    struct cavm_psm_set2_mabqx_job_cdtx_f95o
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t cdt                   : 5;  /**< [  4:  0](RO/H) Current number of jobs for RF Engine {b}. Valid range is [0,20]. */
#else /* Word 0 - Little Endian */
        uint64_t cdt                   : 5;  /**< [  4:  0](RO/H) Current number of jobs for RF Engine {b}. Valid range is [0,20]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } f95o;
};
typedef union cavm_psm_set2_mabqx_job_cdtx cavm_psm_set2_mabqx_job_cdtx_t;

static inline uint64_t CAVM_PSM_SET2_MABQX_JOB_CDTX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET2_MABQX_JOB_CDTX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a<=1) && (b<=1)))
        return 0x860001064000ll + 0x1000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_F95O) && ((a<=1) && (b<=5)))
        return 0x860001064000ll + 0x1000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x7);
    __cavm_csr_fatal("PSM_SET2_MABQX_JOB_CDTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET2_MABQX_JOB_CDTX(a,b) cavm_psm_set2_mabqx_job_cdtx_t
#define bustype_CAVM_PSM_SET2_MABQX_JOB_CDTX(a,b) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET2_MABQX_JOB_CDTX(a,b) "PSM_SET2_MABQX_JOB_CDTX"
#define busnum_CAVM_PSM_SET2_MABQX_JOB_CDTX(a,b) (a)
#define arguments_CAVM_PSM_SET2_MABQX_JOB_CDTX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) psm_set2_max_mabq#_job_cdt#
 *
 * PHY Scheduler Set 2 Maximum RF Engine Job Credit Registers
 * These registers define the maximum number of jobs that the PSM
 * can submit to the MABQs of each RF Engine at a time.
 */
union cavm_psm_set2_max_mabqx_job_cdtx
{
    uint64_t u;
    struct cavm_psm_set2_max_mabqx_job_cdtx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t max                   : 5;  /**< [  4:  0](R/W) Maximum number of jobs for RFOE {b}. Valid range is [0,20]. */
#else /* Word 0 - Little Endian */
        uint64_t max                   : 5;  /**< [  4:  0](R/W) Maximum number of jobs for RFOE {b}. Valid range is [0,20]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set2_max_mabqx_job_cdtx_s cn9; */
    /* struct cavm_psm_set2_max_mabqx_job_cdtx_s cnf95xx; */
    struct cavm_psm_set2_max_mabqx_job_cdtx_f95o
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t max                   : 5;  /**< [  4:  0](R/W) Maximum number of jobs for RF Engine {b}. Valid range is [0,20]. */
#else /* Word 0 - Little Endian */
        uint64_t max                   : 5;  /**< [  4:  0](R/W) Maximum number of jobs for RF Engine {b}. Valid range is [0,20]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } f95o;
};
typedef union cavm_psm_set2_max_mabqx_job_cdtx cavm_psm_set2_max_mabqx_job_cdtx_t;

static inline uint64_t CAVM_PSM_SET2_MAX_MABQX_JOB_CDTX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET2_MAX_MABQX_JOB_CDTX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a<=1) && (b<=1)))
        return 0x860001062000ll + 0x1000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_F95O) && ((a<=1) && (b<=5)))
        return 0x860001062000ll + 0x1000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x7);
    __cavm_csr_fatal("PSM_SET2_MAX_MABQX_JOB_CDTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET2_MAX_MABQX_JOB_CDTX(a,b) cavm_psm_set2_max_mabqx_job_cdtx_t
#define bustype_CAVM_PSM_SET2_MAX_MABQX_JOB_CDTX(a,b) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET2_MAX_MABQX_JOB_CDTX(a,b) "PSM_SET2_MAX_MABQX_JOB_CDTX"
#define busnum_CAVM_PSM_SET2_MAX_MABQX_JOB_CDTX(a,b) (a)
#define arguments_CAVM_PSM_SET2_MAX_MABQX_JOB_CDTX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) psm_set2_rsrc_tbl#
 *
 * PHY Scheduler Resource Table Registers
 * These registers define a mapping table of job types to RF engines.
 * Multiple RF engines may be assigned to service jobs of each type, and a
 * given RF engine can be assigned to any number of job types.
 */
union cavm_psm_set2_rsrc_tblx
{
    uint64_t u;
    struct cavm_psm_set2_rsrc_tblx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t mab_map               : 6;  /**< [  5:  0](R/W) Bit mask indicating which RFOEs can accept jobs of type {a}. */
#else /* Word 0 - Little Endian */
        uint64_t mab_map               : 6;  /**< [  5:  0](R/W) Bit mask indicating which RFOEs can accept jobs of type {a}. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set2_rsrc_tblx_s cn9; */
    struct cavm_psm_set2_rsrc_tblx_cnf95xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t mab_map               : 2;  /**< [  1:  0](R/W) Bit mask indicating which RFOEs can accept jobs of type {a}. */
#else /* Word 0 - Little Endian */
        uint64_t mab_map               : 2;  /**< [  1:  0](R/W) Bit mask indicating which RFOEs can accept jobs of type {a}. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } cnf95xx;
    struct cavm_psm_set2_rsrc_tblx_f95o
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t mab_map               : 6;  /**< [  5:  0](R/W) Bit mask indicating which RF engines can accept jobs of type {a}. */
#else /* Word 0 - Little Endian */
        uint64_t mab_map               : 6;  /**< [  5:  0](R/W) Bit mask indicating which RF engines can accept jobs of type {a}. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } f95o;
};
typedef union cavm_psm_set2_rsrc_tblx cavm_psm_set2_rsrc_tblx_t;

static inline uint64_t CAVM_PSM_SET2_RSRC_TBLX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET2_RSRC_TBLX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=255))
        return 0x860001060000ll + 0x10ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=255))
        return 0x860001060000ll + 0x10ll * ((a) & 0xff);
    __cavm_csr_fatal("PSM_SET2_RSRC_TBLX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET2_RSRC_TBLX(a) cavm_psm_set2_rsrc_tblx_t
#define bustype_CAVM_PSM_SET2_RSRC_TBLX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET2_RSRC_TBLX(a) "PSM_SET2_RSRC_TBLX"
#define busnum_CAVM_PSM_SET2_RSRC_TBLX(a) (a)
#define arguments_CAVM_PSM_SET2_RSRC_TBLX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_timer_bfn_err
 *
 * PHY Scheduler Timer BFN Error Count Register
 * This register contains a running count of BFN errors detected.
 */
union cavm_psm_timer_bfn_err
{
    uint64_t u;
    struct cavm_psm_timer_bfn_err_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t bfn_err               : 32; /**< [ 31:  0](R/W/H) Count of BFN errors detected. */
#else /* Word 0 - Little Endian */
        uint64_t bfn_err               : 32; /**< [ 31:  0](R/W/H) Count of BFN errors detected. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_timer_bfn_err_s cn; */
};
typedef union cavm_psm_timer_bfn_err cavm_psm_timer_bfn_err_t;

#define CAVM_PSM_TIMER_BFN_ERR CAVM_PSM_TIMER_BFN_ERR_FUNC()
static inline uint64_t CAVM_PSM_TIMER_BFN_ERR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_TIMER_BFN_ERR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x8600010f1230ll;
    __cavm_csr_fatal("PSM_TIMER_BFN_ERR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_TIMER_BFN_ERR cavm_psm_timer_bfn_err_t
#define bustype_CAVM_PSM_TIMER_BFN_ERR CSR_TYPE_NCB
#define basename_CAVM_PSM_TIMER_BFN_ERR "PSM_TIMER_BFN_ERR"
#define busnum_CAVM_PSM_TIMER_BFN_ERR 0
#define arguments_CAVM_PSM_TIMER_BFN_ERR -1,-1,-1,-1

/**
 * Register (NCB) psm_timer_bphy_val
 *
 * PHY Scheduler Timer BPHY Value Register
 * This register holds the BPHY timestamp value, which consists of
 * a frame count, subframe count, and tick count.  In internal-timer mode,
 * these values can be written, and they are read-only otherwise.
 * The BPHY time value is used for timestamps in the
 * PSM log entries and WRSTS commands, and for WAIT commands.
 */
union cavm_psm_timer_bphy_val
{
    uint64_t u;
    struct cavm_psm_timer_bphy_val_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_59_63        : 5;
        uint64_t frame_update          : 1;  /**< [ 58: 58](R/W/H) If written 1, update [FRAME] count.  If written 0, the [FRAME]
                                                                 count remains unchanged. */
        uint64_t sf_update             : 1;  /**< [ 57: 57](R/W/H) If written 1, update [SUBFRAME] count.  If written 0, the [SUBFRAME]
                                                                 count remains unchanged. */
        uint64_t tick_update           : 1;  /**< [ 56: 56](R/W/H) If written 1, update [TICK] count.  If written 0, the [TICK]
                                                                 count remains unchanged. */
        uint64_t reserved_32_55        : 24;
        uint64_t frame                 : 12; /**< [ 31: 20](R/W/H) Frame count (i.e., BFN). */
        uint64_t subframe              : 4;  /**< [ 19: 16](R/W/H) Subframe count. */
        uint64_t tick                  : 16; /**< [ 15:  0](R/W/H) Current timer tick count. */
#else /* Word 0 - Little Endian */
        uint64_t tick                  : 16; /**< [ 15:  0](R/W/H) Current timer tick count. */
        uint64_t subframe              : 4;  /**< [ 19: 16](R/W/H) Subframe count. */
        uint64_t frame                 : 12; /**< [ 31: 20](R/W/H) Frame count (i.e., BFN). */
        uint64_t reserved_32_55        : 24;
        uint64_t tick_update           : 1;  /**< [ 56: 56](R/W/H) If written 1, update [TICK] count.  If written 0, the [TICK]
                                                                 count remains unchanged. */
        uint64_t sf_update             : 1;  /**< [ 57: 57](R/W/H) If written 1, update [SUBFRAME] count.  If written 0, the [SUBFRAME]
                                                                 count remains unchanged. */
        uint64_t frame_update          : 1;  /**< [ 58: 58](R/W/H) If written 1, update [FRAME] count.  If written 0, the [FRAME]
                                                                 count remains unchanged. */
        uint64_t reserved_59_63        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_timer_bphy_val_s cn; */
};
typedef union cavm_psm_timer_bphy_val cavm_psm_timer_bphy_val_t;

#define CAVM_PSM_TIMER_BPHY_VAL CAVM_PSM_TIMER_BPHY_VAL_FUNC()
static inline uint64_t CAVM_PSM_TIMER_BPHY_VAL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_TIMER_BPHY_VAL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x8600010f1010ll;
    if (cavm_is_model(OCTEONTX_F95O))
        return 0x8600010f1010ll;
    __cavm_csr_fatal("PSM_TIMER_BPHY_VAL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_TIMER_BPHY_VAL cavm_psm_timer_bphy_val_t
#define bustype_CAVM_PSM_TIMER_BPHY_VAL CSR_TYPE_NCB
#define basename_CAVM_PSM_TIMER_BPHY_VAL "PSM_TIMER_BPHY_VAL"
#define busnum_CAVM_PSM_TIMER_BPHY_VAL 0
#define arguments_CAVM_PSM_TIMER_BPHY_VAL -1,-1,-1,-1

/**
 * Register (NCB) psm_timer_bts_cfg1
 *
 * PHY Scheduler Timer BTS Configuration Register 1
 * This register configures the BTS mode settings of the PSM timer.
 */
union cavm_psm_timer_bts_cfg1
{
    uint64_t u;
    struct cavm_psm_timer_bts_cfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_58_63        : 6;
        uint64_t tick_inc              : 18; /**< [ 57: 40](R/W/H) This sets the increment value for the BPHY timer tick count.
                                                                 The increment value is a 2.16 fixed point number. */
        uint64_t reserved_38_39        : 2;
        uint64_t subf_max              : 18; /**< [ 37: 20](R/W/H) This defines the length of the subframe in BTS_CLK cycles. */
        uint64_t ns_div                : 4;  /**< [ 19: 16](R/W/H) This configures the BTS_CLK divider for the IEEE1914 timestamp
                                                                 counter.  See [NS_INC] for more details. */
        uint64_t ns_inc                : 16; /**< [ 15:  0](R/W/H) This specifies the increment value for the IEEE 1914 timestamp
                                                                 counter.  After every [NS_DIV] BTS_CLK cycles, the IEEE 1914
                                                                 timestamp value is incremented by [NS_INC].  This value is
                                                                 an 8.8 fixed-point value. */
#else /* Word 0 - Little Endian */
        uint64_t ns_inc                : 16; /**< [ 15:  0](R/W/H) This specifies the increment value for the IEEE 1914 timestamp
                                                                 counter.  After every [NS_DIV] BTS_CLK cycles, the IEEE 1914
                                                                 timestamp value is incremented by [NS_INC].  This value is
                                                                 an 8.8 fixed-point value. */
        uint64_t ns_div                : 4;  /**< [ 19: 16](R/W/H) This configures the BTS_CLK divider for the IEEE1914 timestamp
                                                                 counter.  See [NS_INC] for more details. */
        uint64_t subf_max              : 18; /**< [ 37: 20](R/W/H) This defines the length of the subframe in BTS_CLK cycles. */
        uint64_t reserved_38_39        : 2;
        uint64_t tick_inc              : 18; /**< [ 57: 40](R/W/H) This sets the increment value for the BPHY timer tick count.
                                                                 The increment value is a 2.16 fixed point number. */
        uint64_t reserved_58_63        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_timer_bts_cfg1_s cn; */
};
typedef union cavm_psm_timer_bts_cfg1 cavm_psm_timer_bts_cfg1_t;

#define CAVM_PSM_TIMER_BTS_CFG1 CAVM_PSM_TIMER_BTS_CFG1_FUNC()
static inline uint64_t CAVM_PSM_TIMER_BTS_CFG1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_TIMER_BTS_CFG1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x8600010f1100ll;
    __cavm_csr_fatal("PSM_TIMER_BTS_CFG1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_TIMER_BTS_CFG1 cavm_psm_timer_bts_cfg1_t
#define bustype_CAVM_PSM_TIMER_BTS_CFG1 CSR_TYPE_NCB
#define basename_CAVM_PSM_TIMER_BTS_CFG1 "PSM_TIMER_BTS_CFG1"
#define busnum_CAVM_PSM_TIMER_BTS_CFG1 0
#define arguments_CAVM_PSM_TIMER_BTS_CFG1 -1,-1,-1,-1

/**
 * Register (NCB) psm_timer_bts_cfg2
 *
 * PHY Scheduler Timer BTS Configuration Register 2
 * This register configures the BTS mode settings of the PSM timer.
 */
union cavm_psm_timer_bts_cfg2
{
    uint64_t u;
    struct cavm_psm_timer_bts_cfg2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_49_63        : 15;
        uint64_t safe_late_rfp         : 1;  /**< [ 48: 48](R/W/H) When set to 1, this will suppress subframe handling when a late-RFP
                                                                 condition occurs.  Without this, a late-RFP may result in an extra
                                                                 SOSF and incorrect subframe and tick values. */
        uint64_t reserved_41_47        : 7;
        uint64_t rfp_pol               : 1;  /**< [ 40: 40](R/W/H) Polarity of the radio frame pulse:
                                                                 0 = RFP detected on a falling edge.
                                                                 1 = RFP detected on a rising edge. */
        uint64_t reserved_38_39        : 2;
        uint64_t frame_max             : 22; /**< [ 37: 16](R/W/H) This defines the length of the frame in BTS cycles. */
        uint64_t bfn_clk_per           : 16; /**< [ 15:  0](R/W/H) This specifies the clock period of the BFN clock, in BTS_CLK
                                                                 cycles. */
#else /* Word 0 - Little Endian */
        uint64_t bfn_clk_per           : 16; /**< [ 15:  0](R/W/H) This specifies the clock period of the BFN clock, in BTS_CLK
                                                                 cycles. */
        uint64_t frame_max             : 22; /**< [ 37: 16](R/W/H) This defines the length of the frame in BTS cycles. */
        uint64_t reserved_38_39        : 2;
        uint64_t rfp_pol               : 1;  /**< [ 40: 40](R/W/H) Polarity of the radio frame pulse:
                                                                 0 = RFP detected on a falling edge.
                                                                 1 = RFP detected on a rising edge. */
        uint64_t reserved_41_47        : 7;
        uint64_t safe_late_rfp         : 1;  /**< [ 48: 48](R/W/H) When set to 1, this will suppress subframe handling when a late-RFP
                                                                 condition occurs.  Without this, a late-RFP may result in an extra
                                                                 SOSF and incorrect subframe and tick values. */
        uint64_t reserved_49_63        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_timer_bts_cfg2_s cn; */
};
typedef union cavm_psm_timer_bts_cfg2 cavm_psm_timer_bts_cfg2_t;

#define CAVM_PSM_TIMER_BTS_CFG2 CAVM_PSM_TIMER_BTS_CFG2_FUNC()
static inline uint64_t CAVM_PSM_TIMER_BTS_CFG2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_TIMER_BTS_CFG2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x8600010f1110ll;
    __cavm_csr_fatal("PSM_TIMER_BTS_CFG2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_TIMER_BTS_CFG2 cavm_psm_timer_bts_cfg2_t
#define bustype_CAVM_PSM_TIMER_BTS_CFG2 CSR_TYPE_NCB
#define basename_CAVM_PSM_TIMER_BTS_CFG2 "PSM_TIMER_BTS_CFG2"
#define busnum_CAVM_PSM_TIMER_BTS_CFG2 0
#define arguments_CAVM_PSM_TIMER_BTS_CFG2 -1,-1,-1,-1

/**
 * Register (NCB) psm_timer_cfg
 *
 * PHY Scheduler Timer Configuration Register
 * This register configures the PSM timer.
 */
union cavm_psm_timer_cfg
{
    uint64_t u;
    struct cavm_psm_timer_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ena                   : 1;  /**< [ 63: 63](R/W/H) Timer enable. */
        uint64_t bts_rst_n             : 1;  /**< [ 62: 62](R/W/H) Reset for the BTS_CLK domain. */
        uint64_t bts_rst_done          : 1;  /**< [ 61: 61](RO/H) Indicates the BTS reset has completed. */
        uint64_t bts_clk_check         : 1;  /**< [ 60: 60](R/W/H) Used to check the presence of the BTS Clock.  See [BTS_CLK_ACTIVE]
                                                                 for more details. */
        uint64_t bts_clk_active        : 1;  /**< [ 59: 59](RO/H) Indicates the activity of the BTS clock.  When [BTS_CLK_CHECK]
                                                                 is written to 1, the previous clock status is cleared.  After a
                                                                 rising edge and falling edge of the BTS clock are detected,
                                                                 the [BTS_CLK_ACTIVE] bit will become 1, and the [BTS_CLK_CHECK]
                                                                 bit will return to 0. */
        uint64_t reserved_58           : 1;
        uint64_t utu_mode              : 1;  /**< [ 57: 57](R/W) Reserved. */
        uint64_t reserved_50_56        : 7;
        uint64_t bcast_set2_dis        : 1;  /**< [ 49: 49](R/W/H) Reserved. */
        uint64_t bcast_mode            : 1;  /**< [ 48: 48](R/W/H) Enables the timer broadcast mode. When set, the PSM will send a
                                                                 message to the MDABs each time a new sub-frame begins. */
        uint64_t reserved_41_47        : 7;
        uint64_t internal_rfp_mode     : 1;  /**< [ 40: 40](R/W/H) Enables the timer internal RFP mode.  When set, the PSM will
                                                                 ignore the BTS domain signals and instead generate a SOF
                                                                 (start of frame) when the frame counter reaches the value
                                                                 specified by [FRAME_MAX]. */
        uint64_t reserved_34_39        : 6;
        uint64_t timer_sync_1shot      : 1;  /**< [ 33: 33](R/W/H) Enables the 1-shot timer sync mode for the IEEE 1914 timestamp
                                                                 counter.  When this mode is enabled and [TIMER_SYNC_EN] is 0,
                                                                 the IEEE 1914 counter will be reset to the value specified by
                                                                 [TIMER_SYNC_VAL] upon the first detected SOF.  Then the
                                                                 [TIMER_SYNC_1SHOT] bit will be cleared to 0 and the IEEE 1914
                                                                 counter will be free-running. */
        uint64_t timer_sync_en         : 1;  /**< [ 32: 32](R/W/H) Enables the timer sync mode for the IEEE 1914 timestamp counter.
                                                                 This bit should be 0 if [TIMER_SYNC_1SHOT] is enabled.
                                                                 0 = The IEEE 1914 counter will be a free-running counter, or
                                                                 will sync once if [TIMER_SYNC_1SHOT] is enabled.
                                                                 1 = When an SOF occurs, the IEEE 1914 counter will be reset to
                                                                 the value specified by [TIMER_SYNC_VAL]. */
        uint64_t reserved_29_31        : 3;
        uint64_t timer_sync_val        : 29; /**< [ 28:  0](R/W/H) In timer-sync mode, the IEEE 1914 counter will be reset to
                                                                 this value when an SOF occurs. */
#else /* Word 0 - Little Endian */
        uint64_t timer_sync_val        : 29; /**< [ 28:  0](R/W/H) In timer-sync mode, the IEEE 1914 counter will be reset to
                                                                 this value when an SOF occurs. */
        uint64_t reserved_29_31        : 3;
        uint64_t timer_sync_en         : 1;  /**< [ 32: 32](R/W/H) Enables the timer sync mode for the IEEE 1914 timestamp counter.
                                                                 This bit should be 0 if [TIMER_SYNC_1SHOT] is enabled.
                                                                 0 = The IEEE 1914 counter will be a free-running counter, or
                                                                 will sync once if [TIMER_SYNC_1SHOT] is enabled.
                                                                 1 = When an SOF occurs, the IEEE 1914 counter will be reset to
                                                                 the value specified by [TIMER_SYNC_VAL]. */
        uint64_t timer_sync_1shot      : 1;  /**< [ 33: 33](R/W/H) Enables the 1-shot timer sync mode for the IEEE 1914 timestamp
                                                                 counter.  When this mode is enabled and [TIMER_SYNC_EN] is 0,
                                                                 the IEEE 1914 counter will be reset to the value specified by
                                                                 [TIMER_SYNC_VAL] upon the first detected SOF.  Then the
                                                                 [TIMER_SYNC_1SHOT] bit will be cleared to 0 and the IEEE 1914
                                                                 counter will be free-running. */
        uint64_t reserved_34_39        : 6;
        uint64_t internal_rfp_mode     : 1;  /**< [ 40: 40](R/W/H) Enables the timer internal RFP mode.  When set, the PSM will
                                                                 ignore the BTS domain signals and instead generate a SOF
                                                                 (start of frame) when the frame counter reaches the value
                                                                 specified by [FRAME_MAX]. */
        uint64_t reserved_41_47        : 7;
        uint64_t bcast_mode            : 1;  /**< [ 48: 48](R/W/H) Enables the timer broadcast mode. When set, the PSM will send a
                                                                 message to the MDABs each time a new sub-frame begins. */
        uint64_t bcast_set2_dis        : 1;  /**< [ 49: 49](R/W/H) Reserved. */
        uint64_t reserved_50_56        : 7;
        uint64_t utu_mode              : 1;  /**< [ 57: 57](R/W) Reserved. */
        uint64_t reserved_58           : 1;
        uint64_t bts_clk_active        : 1;  /**< [ 59: 59](RO/H) Indicates the activity of the BTS clock.  When [BTS_CLK_CHECK]
                                                                 is written to 1, the previous clock status is cleared.  After a
                                                                 rising edge and falling edge of the BTS clock are detected,
                                                                 the [BTS_CLK_ACTIVE] bit will become 1, and the [BTS_CLK_CHECK]
                                                                 bit will return to 0. */
        uint64_t bts_clk_check         : 1;  /**< [ 60: 60](R/W/H) Used to check the presence of the BTS Clock.  See [BTS_CLK_ACTIVE]
                                                                 for more details. */
        uint64_t bts_rst_done          : 1;  /**< [ 61: 61](RO/H) Indicates the BTS reset has completed. */
        uint64_t bts_rst_n             : 1;  /**< [ 62: 62](R/W/H) Reset for the BTS_CLK domain. */
        uint64_t ena                   : 1;  /**< [ 63: 63](R/W/H) Timer enable. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_timer_cfg_s cn9; */
    struct cavm_psm_timer_cfg_cnf95xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ena                   : 1;  /**< [ 63: 63](R/W/H) Timer enable. */
        uint64_t bts_rst_n             : 1;  /**< [ 62: 62](R/W/H) Reset for the BTS_CLK domain. */
        uint64_t bts_rst_done          : 1;  /**< [ 61: 61](RO/H) Indicates the BTS reset has completed. */
        uint64_t bts_clk_check         : 1;  /**< [ 60: 60](R/W/H) Used to check the presence of the BTS Clock.  See [BTS_CLK_ACTIVE]
                                                                 for more details. */
        uint64_t bts_clk_active        : 1;  /**< [ 59: 59](RO/H) Indicates the activity of the BTS clock.  When [BTS_CLK_CHECK]
                                                                 is written to 1, the previous clock status is cleared.  After a
                                                                 rising edge and falling edge of the BTS clock are detected,
                                                                 the [BTS_CLK_ACTIVE] bit will become 1, and the [BTS_CLK_CHECK]
                                                                 bit will return to 0. */
        uint64_t reserved_57_58        : 2;
        uint64_t nonbts_mode           : 1;  /**< [ 56: 56](R/W/H) Enables the timer's non-BTS-clock mode, which drives the
                                                                 timer logic with BCLK domain signals.  This may be useful
                                                                 for verification, debug, lab bring-up, production test, etc.
                                                                 The BTS mode should not be enabled until a valid BTS clock
                                                                 is detected, as reported by the [BTS_CLK_ACTIVE] bit. */
        uint64_t reserved_49_55        : 7;
        uint64_t bcast_mode            : 1;  /**< [ 48: 48](R/W/H) Enables the timer broadcast mode. When set, the PSM will send a
                                                                 message to the MDABs each time a new sub-frame begins. */
        uint64_t reserved_41_47        : 7;
        uint64_t internal_rfp_mode     : 1;  /**< [ 40: 40](R/W/H) Enables the timer internal RFP mode.  When set, the PSM will
                                                                 ignore the BTS domain signals and instead generate a SOF
                                                                 (start of frame) when the frame counter reaches the value
                                                                 specified by [FRAME_MAX]. */
        uint64_t reserved_34_39        : 6;
        uint64_t timer_sync_1shot      : 1;  /**< [ 33: 33](R/W/H) Enables the 1-shot timer sync mode for the IEEE 1914 timestamp
                                                                 counter.  When this mode is enabled and [TIMER_SYNC_EN] is 0,
                                                                 the IEEE 1914 counter will be reset to the value specified by
                                                                 [TIMER_SYNC_VAL] upon the first detected SOF.  Then the
                                                                 [TIMER_SYNC_1SHOT] bit will be cleared to 0 and the IEEE 1914
                                                                 counter will be free-running. */
        uint64_t timer_sync_en         : 1;  /**< [ 32: 32](R/W/H) Enables the timer sync mode for the IEEE 1914 timestamp counter.
                                                                 This bit should be 0 if [TIMER_SYNC_1SHOT] is enabled.
                                                                 0 = The IEEE 1914 counter will be a free-running counter, or
                                                                 will sync once if [TIMER_SYNC_1SHOT] is enabled.
                                                                 1 = When an SOF occurs, the IEEE 1914 counter will be reset to
                                                                 the value specified by [TIMER_SYNC_VAL]. */
        uint64_t reserved_29_31        : 3;
        uint64_t timer_sync_val        : 29; /**< [ 28:  0](R/W/H) In timer-sync mode, the IEEE 1914 counter will be reset to
                                                                 this value when an SOF occurs. */
#else /* Word 0 - Little Endian */
        uint64_t timer_sync_val        : 29; /**< [ 28:  0](R/W/H) In timer-sync mode, the IEEE 1914 counter will be reset to
                                                                 this value when an SOF occurs. */
        uint64_t reserved_29_31        : 3;
        uint64_t timer_sync_en         : 1;  /**< [ 32: 32](R/W/H) Enables the timer sync mode for the IEEE 1914 timestamp counter.
                                                                 This bit should be 0 if [TIMER_SYNC_1SHOT] is enabled.
                                                                 0 = The IEEE 1914 counter will be a free-running counter, or
                                                                 will sync once if [TIMER_SYNC_1SHOT] is enabled.
                                                                 1 = When an SOF occurs, the IEEE 1914 counter will be reset to
                                                                 the value specified by [TIMER_SYNC_VAL]. */
        uint64_t timer_sync_1shot      : 1;  /**< [ 33: 33](R/W/H) Enables the 1-shot timer sync mode for the IEEE 1914 timestamp
                                                                 counter.  When this mode is enabled and [TIMER_SYNC_EN] is 0,
                                                                 the IEEE 1914 counter will be reset to the value specified by
                                                                 [TIMER_SYNC_VAL] upon the first detected SOF.  Then the
                                                                 [TIMER_SYNC_1SHOT] bit will be cleared to 0 and the IEEE 1914
                                                                 counter will be free-running. */
        uint64_t reserved_34_39        : 6;
        uint64_t internal_rfp_mode     : 1;  /**< [ 40: 40](R/W/H) Enables the timer internal RFP mode.  When set, the PSM will
                                                                 ignore the BTS domain signals and instead generate a SOF
                                                                 (start of frame) when the frame counter reaches the value
                                                                 specified by [FRAME_MAX]. */
        uint64_t reserved_41_47        : 7;
        uint64_t bcast_mode            : 1;  /**< [ 48: 48](R/W/H) Enables the timer broadcast mode. When set, the PSM will send a
                                                                 message to the MDABs each time a new sub-frame begins. */
        uint64_t reserved_49_55        : 7;
        uint64_t nonbts_mode           : 1;  /**< [ 56: 56](R/W/H) Enables the timer's non-BTS-clock mode, which drives the
                                                                 timer logic with BCLK domain signals.  This may be useful
                                                                 for verification, debug, lab bring-up, production test, etc.
                                                                 The BTS mode should not be enabled until a valid BTS clock
                                                                 is detected, as reported by the [BTS_CLK_ACTIVE] bit. */
        uint64_t reserved_57_58        : 2;
        uint64_t bts_clk_active        : 1;  /**< [ 59: 59](RO/H) Indicates the activity of the BTS clock.  When [BTS_CLK_CHECK]
                                                                 is written to 1, the previous clock status is cleared.  After a
                                                                 rising edge and falling edge of the BTS clock are detected,
                                                                 the [BTS_CLK_ACTIVE] bit will become 1, and the [BTS_CLK_CHECK]
                                                                 bit will return to 0. */
        uint64_t bts_clk_check         : 1;  /**< [ 60: 60](R/W/H) Used to check the presence of the BTS Clock.  See [BTS_CLK_ACTIVE]
                                                                 for more details. */
        uint64_t bts_rst_done          : 1;  /**< [ 61: 61](RO/H) Indicates the BTS reset has completed. */
        uint64_t bts_rst_n             : 1;  /**< [ 62: 62](R/W/H) Reset for the BTS_CLK domain. */
        uint64_t ena                   : 1;  /**< [ 63: 63](R/W/H) Timer enable. */
#endif /* Word 0 - End */
    } cnf95xx;
    struct cavm_psm_timer_cfg_f95o
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ena                   : 1;  /**< [ 63: 63](R/W/H) Timer enable. */
        uint64_t reserved_58_62        : 5;
        uint64_t utu_mode              : 1;  /**< [ 57: 57](R/W) Reserved. */
        uint64_t internal_timer_mode   : 1;  /**< [ 56: 56](R/W/H) Enables the timer's internal-timer mode, which drives the
                                                                 timer logic with BCLK domain signals.  This may be useful
                                                                 for verification, debug, lab bring-up, production test, etc.
                                                                 The internal-timer mode should not be disabled until the
                                                                 BFN block is properly initialized and providing timing
                                                                 signals to the PSM. */
        uint64_t reserved_50_55        : 6;
        uint64_t bcast_set2_dis        : 1;  /**< [ 49: 49](R/W/H) Reserved. */
        uint64_t bcast_mode            : 1;  /**< [ 48: 48](R/W/H) Enables the timer broadcast mode. When set, the PSM will send a
                                                                 message to the MDABs each time a new frame begins. */
        uint64_t reserved_34_47        : 14;
        uint64_t timer_sync_1shot      : 1;  /**< [ 33: 33](R/W/H) Enables the 1-shot timer sync mode for the IEEE 1914 timestamp
                                                                 counter.  When this mode is enabled and [TIMER_SYNC_EN] is 0,
                                                                 the IEEE 1914 counter will be reset to the value specified by
                                                                 [TIMER_SYNC_VAL] upon the first detected SOF.  Then the
                                                                 [TIMER_SYNC_1SHOT] bit will be cleared to 0 and the IEEE 1914
                                                                 counter will be free-running.
                                                                 This is only valid when [INTERNAL_TIMER_MODE] = 1. */
        uint64_t timer_sync_en         : 1;  /**< [ 32: 32](R/W/H) Enables the timer sync mode for the IEEE 1914 timestamp counter.
                                                                 This bit should be 0 if [TIMER_SYNC_1SHOT] is enabled.
                                                                 0 = The IEEE 1914 counter will be a free-running counter, or
                                                                 will sync once if [TIMER_SYNC_1SHOT] is enabled.
                                                                 1 = When an SOF occurs, the IEEE 1914 counter will be reset to
                                                                 the value specified by [TIMER_SYNC_VAL].
                                                                 This is only valid when [INTERNAL_TIMER_MODE] = 1. */
        uint64_t reserved_29_31        : 3;
        uint64_t timer_sync_val        : 29; /**< [ 28:  0](R/W/H) In timer-sync mode, the IEEE 1914 counter will be reset to
                                                                 this value when an SOF occurs. */
#else /* Word 0 - Little Endian */
        uint64_t timer_sync_val        : 29; /**< [ 28:  0](R/W/H) In timer-sync mode, the IEEE 1914 counter will be reset to
                                                                 this value when an SOF occurs. */
        uint64_t reserved_29_31        : 3;
        uint64_t timer_sync_en         : 1;  /**< [ 32: 32](R/W/H) Enables the timer sync mode for the IEEE 1914 timestamp counter.
                                                                 This bit should be 0 if [TIMER_SYNC_1SHOT] is enabled.
                                                                 0 = The IEEE 1914 counter will be a free-running counter, or
                                                                 will sync once if [TIMER_SYNC_1SHOT] is enabled.
                                                                 1 = When an SOF occurs, the IEEE 1914 counter will be reset to
                                                                 the value specified by [TIMER_SYNC_VAL].
                                                                 This is only valid when [INTERNAL_TIMER_MODE] = 1. */
        uint64_t timer_sync_1shot      : 1;  /**< [ 33: 33](R/W/H) Enables the 1-shot timer sync mode for the IEEE 1914 timestamp
                                                                 counter.  When this mode is enabled and [TIMER_SYNC_EN] is 0,
                                                                 the IEEE 1914 counter will be reset to the value specified by
                                                                 [TIMER_SYNC_VAL] upon the first detected SOF.  Then the
                                                                 [TIMER_SYNC_1SHOT] bit will be cleared to 0 and the IEEE 1914
                                                                 counter will be free-running.
                                                                 This is only valid when [INTERNAL_TIMER_MODE] = 1. */
        uint64_t reserved_34_47        : 14;
        uint64_t bcast_mode            : 1;  /**< [ 48: 48](R/W/H) Enables the timer broadcast mode. When set, the PSM will send a
                                                                 message to the MDABs each time a new frame begins. */
        uint64_t bcast_set2_dis        : 1;  /**< [ 49: 49](R/W/H) Reserved. */
        uint64_t reserved_50_55        : 6;
        uint64_t internal_timer_mode   : 1;  /**< [ 56: 56](R/W/H) Enables the timer's internal-timer mode, which drives the
                                                                 timer logic with BCLK domain signals.  This may be useful
                                                                 for verification, debug, lab bring-up, production test, etc.
                                                                 The internal-timer mode should not be disabled until the
                                                                 BFN block is properly initialized and providing timing
                                                                 signals to the PSM. */
        uint64_t utu_mode              : 1;  /**< [ 57: 57](R/W) Reserved. */
        uint64_t reserved_58_62        : 5;
        uint64_t ena                   : 1;  /**< [ 63: 63](R/W/H) Timer enable. */
#endif /* Word 0 - End */
    } f95o;
};
typedef union cavm_psm_timer_cfg cavm_psm_timer_cfg_t;

#define CAVM_PSM_TIMER_CFG CAVM_PSM_TIMER_CFG_FUNC()
static inline uint64_t CAVM_PSM_TIMER_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_TIMER_CFG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x8600010f1000ll;
    if (cavm_is_model(OCTEONTX_F95O))
        return 0x8600010f1000ll;
    __cavm_csr_fatal("PSM_TIMER_CFG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_TIMER_CFG cavm_psm_timer_cfg_t
#define bustype_CAVM_PSM_TIMER_CFG CSR_TYPE_NCB
#define basename_CAVM_PSM_TIMER_CFG "PSM_TIMER_CFG"
#define busnum_CAVM_PSM_TIMER_CFG 0
#define arguments_CAVM_PSM_TIMER_CFG -1,-1,-1,-1

/**
 * Register (NCB) psm_timer_ieee1914_val
 *
 * PHY Scheduler Timer IEEE 1914 Value Register
 * This register holds the IEEE 1914 timestamp value, which consists
 * of integer and fractional parts of a nanosecond scale value.
 * In internal-timer mode, these values can be written, and they are
 * read-only otherwise.  The IEEE 1914 time value is used
 * in processing Ethernet packets in the RFOE.
 */
union cavm_psm_timer_ieee1914_val
{
    uint64_t u;
    struct cavm_psm_timer_ieee1914_val_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_57_63        : 7;
        uint64_t ts_update             : 1;  /**< [ 56: 56](R/W/H) If written 1, update [TS_VAL] count.  If written 0, the [TS_VAL]
                                                                 count remains unchanged. */
        uint64_t reserved_29_55        : 27;
        uint64_t ts_val                : 29; /**< [ 28:  0](R/W/H) Current IEEE 1914 timer value.  This consists of a 24-bit
                                                                 integer portion and a 5-bit fractional portion. */
#else /* Word 0 - Little Endian */
        uint64_t ts_val                : 29; /**< [ 28:  0](R/W/H) Current IEEE 1914 timer value.  This consists of a 24-bit
                                                                 integer portion and a 5-bit fractional portion. */
        uint64_t reserved_29_55        : 27;
        uint64_t ts_update             : 1;  /**< [ 56: 56](R/W/H) If written 1, update [TS_VAL] count.  If written 0, the [TS_VAL]
                                                                 count remains unchanged. */
        uint64_t reserved_57_63        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_timer_ieee1914_val_s cn; */
};
typedef union cavm_psm_timer_ieee1914_val cavm_psm_timer_ieee1914_val_t;

#define CAVM_PSM_TIMER_IEEE1914_VAL CAVM_PSM_TIMER_IEEE1914_VAL_FUNC()
static inline uint64_t CAVM_PSM_TIMER_IEEE1914_VAL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_TIMER_IEEE1914_VAL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x8600010f1020ll;
    if (cavm_is_model(OCTEONTX_F95O))
        return 0x8600010f1020ll;
    __cavm_csr_fatal("PSM_TIMER_IEEE1914_VAL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_TIMER_IEEE1914_VAL cavm_psm_timer_ieee1914_val_t
#define bustype_CAVM_PSM_TIMER_IEEE1914_VAL CSR_TYPE_NCB
#define basename_CAVM_PSM_TIMER_IEEE1914_VAL "PSM_TIMER_IEEE1914_VAL"
#define busnum_CAVM_PSM_TIMER_IEEE1914_VAL 0
#define arguments_CAVM_PSM_TIMER_IEEE1914_VAL -1,-1,-1,-1

/**
 * Register (NCB) psm_timer_internal_cfg
 *
 * PHY Scheduler Timer Internal Mode Configuration Register
 * This register configures the internal mode settings of the PSM timer.
 */
union cavm_psm_timer_internal_cfg
{
    uint64_t u;
    struct cavm_psm_timer_internal_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_42_63        : 22;
        uint64_t ns_inc                : 10; /**< [ 41: 32](R/W/H) Defines the increment value used for the IEEE1914 timestamp
                                                                 each BCLK cycle.  This is a 2.8 fixed-point value. */
        uint64_t subf_ticks            : 16; /**< [ 31: 16](R/W/H) Sets the maximum tick count value for generating an
                                                                 SOSF.  The PSM will generate a SOSF when the tick counter
                                                                 reaches the value specified by [SUBF_TICKS]. */
        uint64_t tick_div              : 16; /**< [ 15:  0](R/W/H) Divider value for generating the tick clock from the BCLK.  This
                                                                 is a fixed-point value, consisting of an 8-bit integer and an
                                                                 8-bit fraction.  A value of 0x0280 would generate a tick-clock that
                                                                 is 2.5x slower than BCLK.  The minimum value of 0x0100 represents
                                                                 a 1:1 ratio of BCLK to tick-clock.  The actual [TICK_DIV] value
                                                                 should be chosen to prevent the 16-bit TICK counter from rolling
                                                                 over within the 1ms subframe interval. */
#else /* Word 0 - Little Endian */
        uint64_t tick_div              : 16; /**< [ 15:  0](R/W/H) Divider value for generating the tick clock from the BCLK.  This
                                                                 is a fixed-point value, consisting of an 8-bit integer and an
                                                                 8-bit fraction.  A value of 0x0280 would generate a tick-clock that
                                                                 is 2.5x slower than BCLK.  The minimum value of 0x0100 represents
                                                                 a 1:1 ratio of BCLK to tick-clock.  The actual [TICK_DIV] value
                                                                 should be chosen to prevent the 16-bit TICK counter from rolling
                                                                 over within the 1ms subframe interval. */
        uint64_t subf_ticks            : 16; /**< [ 31: 16](R/W/H) Sets the maximum tick count value for generating an
                                                                 SOSF.  The PSM will generate a SOSF when the tick counter
                                                                 reaches the value specified by [SUBF_TICKS]. */
        uint64_t ns_inc                : 10; /**< [ 41: 32](R/W/H) Defines the increment value used for the IEEE1914 timestamp
                                                                 each BCLK cycle.  This is a 2.8 fixed-point value. */
        uint64_t reserved_42_63        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_timer_internal_cfg_s cn; */
};
typedef union cavm_psm_timer_internal_cfg cavm_psm_timer_internal_cfg_t;

#define CAVM_PSM_TIMER_INTERNAL_CFG CAVM_PSM_TIMER_INTERNAL_CFG_FUNC()
static inline uint64_t CAVM_PSM_TIMER_INTERNAL_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_TIMER_INTERNAL_CFG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_F95O))
        return 0x8600010f1f00ll;
    __cavm_csr_fatal("PSM_TIMER_INTERNAL_CFG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_TIMER_INTERNAL_CFG cavm_psm_timer_internal_cfg_t
#define bustype_CAVM_PSM_TIMER_INTERNAL_CFG CSR_TYPE_NCB
#define basename_CAVM_PSM_TIMER_INTERNAL_CFG "PSM_TIMER_INTERNAL_CFG"
#define busnum_CAVM_PSM_TIMER_INTERNAL_CFG 0
#define arguments_CAVM_PSM_TIMER_INTERNAL_CFG -1,-1,-1,-1

/**
 * Register (NCB) psm_timer_nonbts_cfg
 *
 * PHY Scheduler Timer Non-BTS Configuration Register
 * This register configures the non-BTS mode settings of the PSM timer.
 */
union cavm_psm_timer_nonbts_cfg
{
    uint64_t u;
    struct cavm_psm_timer_nonbts_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_42_63        : 22;
        uint64_t ns_inc                : 10; /**< [ 41: 32](R/W/H) Defines the increment value used for the IEEE1914 timestamp
                                                                 each BCLK cycle.  This is a 2.8 fixed-point value. */
        uint64_t subf_ticks            : 16; /**< [ 31: 16](R/W/H) Sets the maximum tick count value for generating an
                                                                 SOSF.  The PSM will generate a SOSF when the tick counter
                                                                 reaches the value specified by [SUBF_TICKS]. */
        uint64_t tick_div              : 16; /**< [ 15:  0](R/W/H) Divider value for generating the tick clock from the BCLK.  This
                                                                 is a fixed-point value, consisting of an 8-bit integer and an
                                                                 8-bit fraction.  A value of 0x0280 would generate a tick-clock that
                                                                 is 2.5x slower than BCLK.  The minimum value of 0x0100 represents
                                                                 a 1:1 ratio of BCLK to tick-clock.  The actual [TICK_DIV] value
                                                                 should be chosen to prevent the 16-bit TICK counter from rolling
                                                                 over within the 1ms subframe interval. */
#else /* Word 0 - Little Endian */
        uint64_t tick_div              : 16; /**< [ 15:  0](R/W/H) Divider value for generating the tick clock from the BCLK.  This
                                                                 is a fixed-point value, consisting of an 8-bit integer and an
                                                                 8-bit fraction.  A value of 0x0280 would generate a tick-clock that
                                                                 is 2.5x slower than BCLK.  The minimum value of 0x0100 represents
                                                                 a 1:1 ratio of BCLK to tick-clock.  The actual [TICK_DIV] value
                                                                 should be chosen to prevent the 16-bit TICK counter from rolling
                                                                 over within the 1ms subframe interval. */
        uint64_t subf_ticks            : 16; /**< [ 31: 16](R/W/H) Sets the maximum tick count value for generating an
                                                                 SOSF.  The PSM will generate a SOSF when the tick counter
                                                                 reaches the value specified by [SUBF_TICKS]. */
        uint64_t ns_inc                : 10; /**< [ 41: 32](R/W/H) Defines the increment value used for the IEEE1914 timestamp
                                                                 each BCLK cycle.  This is a 2.8 fixed-point value. */
        uint64_t reserved_42_63        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_timer_nonbts_cfg_s cn; */
};
typedef union cavm_psm_timer_nonbts_cfg cavm_psm_timer_nonbts_cfg_t;

#define CAVM_PSM_TIMER_NONBTS_CFG CAVM_PSM_TIMER_NONBTS_CFG_FUNC()
static inline uint64_t CAVM_PSM_TIMER_NONBTS_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_TIMER_NONBTS_CFG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x8600010f1f00ll;
    __cavm_csr_fatal("PSM_TIMER_NONBTS_CFG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_TIMER_NONBTS_CFG cavm_psm_timer_nonbts_cfg_t
#define bustype_CAVM_PSM_TIMER_NONBTS_CFG CSR_TYPE_NCB
#define basename_CAVM_PSM_TIMER_NONBTS_CFG "PSM_TIMER_NONBTS_CFG"
#define busnum_CAVM_PSM_TIMER_NONBTS_CFG 0
#define arguments_CAVM_PSM_TIMER_NONBTS_CFG -1,-1,-1,-1

/**
 * Register (NCB) psm_timer_rfp_bad
 *
 * PHY Scheduler Timer RFP Bad Count Register
 * This register contains a running count of RFPs received with the
 * incorrect timing.
 */
union cavm_psm_timer_rfp_bad
{
    uint64_t u;
    struct cavm_psm_timer_rfp_bad_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t rfp_bad               : 32; /**< [ 31:  0](R/W/H) Count of bad RFPs received. */
#else /* Word 0 - Little Endian */
        uint64_t rfp_bad               : 32; /**< [ 31:  0](R/W/H) Count of bad RFPs received. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_timer_rfp_bad_s cn; */
};
typedef union cavm_psm_timer_rfp_bad cavm_psm_timer_rfp_bad_t;

#define CAVM_PSM_TIMER_RFP_BAD CAVM_PSM_TIMER_RFP_BAD_FUNC()
static inline uint64_t CAVM_PSM_TIMER_RFP_BAD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_TIMER_RFP_BAD_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x8600010f1210ll;
    __cavm_csr_fatal("PSM_TIMER_RFP_BAD", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_TIMER_RFP_BAD cavm_psm_timer_rfp_bad_t
#define bustype_CAVM_PSM_TIMER_RFP_BAD CSR_TYPE_NCB
#define basename_CAVM_PSM_TIMER_RFP_BAD "PSM_TIMER_RFP_BAD"
#define busnum_CAVM_PSM_TIMER_RFP_BAD 0
#define arguments_CAVM_PSM_TIMER_RFP_BAD -1,-1,-1,-1

/**
 * Register (NCB) psm_timer_rfp_cyc
 *
 * PHY Scheduler Timer RFP Cycle Count Register
 * This register contains the value of the BTS_CLK domain frame
 * counter when the most recent RFP was received.
 */
union cavm_psm_timer_rfp_cyc
{
    uint64_t u;
    struct cavm_psm_timer_rfp_cyc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_22_63        : 42;
        uint64_t rfp_cyc               : 22; /**< [ 21:  0](RO/H) Frame counter value when RFP was received. */
#else /* Word 0 - Little Endian */
        uint64_t rfp_cyc               : 22; /**< [ 21:  0](RO/H) Frame counter value when RFP was received. */
        uint64_t reserved_22_63        : 42;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_timer_rfp_cyc_s cn; */
};
typedef union cavm_psm_timer_rfp_cyc cavm_psm_timer_rfp_cyc_t;

#define CAVM_PSM_TIMER_RFP_CYC CAVM_PSM_TIMER_RFP_CYC_FUNC()
static inline uint64_t CAVM_PSM_TIMER_RFP_CYC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_TIMER_RFP_CYC_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x8600010f1220ll;
    __cavm_csr_fatal("PSM_TIMER_RFP_CYC", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_TIMER_RFP_CYC cavm_psm_timer_rfp_cyc_t
#define bustype_CAVM_PSM_TIMER_RFP_CYC CSR_TYPE_NCB
#define basename_CAVM_PSM_TIMER_RFP_CYC "PSM_TIMER_RFP_CYC"
#define busnum_CAVM_PSM_TIMER_RFP_CYC 0
#define arguments_CAVM_PSM_TIMER_RFP_CYC -1,-1,-1,-1

/**
 * Register (NCB) psm_timer_rfp_good
 *
 * PHY Scheduler Timer RFP Good Count Register
 * This register contains a running count of RFPs received with the
 * correct timing.
 */
union cavm_psm_timer_rfp_good
{
    uint64_t u;
    struct cavm_psm_timer_rfp_good_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t rfp_good              : 32; /**< [ 31:  0](R/W/H) Count of good RFPs received. */
#else /* Word 0 - Little Endian */
        uint64_t rfp_good              : 32; /**< [ 31:  0](R/W/H) Count of good RFPs received. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_timer_rfp_good_s cn; */
};
typedef union cavm_psm_timer_rfp_good cavm_psm_timer_rfp_good_t;

#define CAVM_PSM_TIMER_RFP_GOOD CAVM_PSM_TIMER_RFP_GOOD_FUNC()
static inline uint64_t CAVM_PSM_TIMER_RFP_GOOD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_TIMER_RFP_GOOD_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x8600010f1200ll;
    __cavm_csr_fatal("PSM_TIMER_RFP_GOOD", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_TIMER_RFP_GOOD cavm_psm_timer_rfp_good_t
#define bustype_CAVM_PSM_TIMER_RFP_GOOD CSR_TYPE_NCB
#define basename_CAVM_PSM_TIMER_RFP_GOOD "PSM_TIMER_RFP_GOOD"
#define busnum_CAVM_PSM_TIMER_RFP_GOOD 0
#define arguments_CAVM_PSM_TIMER_RFP_GOOD -1,-1,-1,-1

/**
 * Register (NCB) psm_timer_snapshot_bphy
 *
 * PHY Scheduler Timer Snapshot BPHY Timer Value Register
 * This register contains the BPHY timer snapshot.
 */
union cavm_psm_timer_snapshot_bphy
{
    uint64_t u;
    struct cavm_psm_timer_snapshot_bphy_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t bphy_value            : 32; /**< [ 31:  0](RO/H) When a timer snapshot is performed as specified by the
                                                                 PSM_TIMER_SNAPSHOT_CFG register, this field will contain the captured
                                                                 BPHY timer value (i.e., frame, subframe, tick). */
#else /* Word 0 - Little Endian */
        uint64_t bphy_value            : 32; /**< [ 31:  0](RO/H) When a timer snapshot is performed as specified by the
                                                                 PSM_TIMER_SNAPSHOT_CFG register, this field will contain the captured
                                                                 BPHY timer value (i.e., frame, subframe, tick). */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_timer_snapshot_bphy_s cn; */
};
typedef union cavm_psm_timer_snapshot_bphy cavm_psm_timer_snapshot_bphy_t;

#define CAVM_PSM_TIMER_SNAPSHOT_BPHY CAVM_PSM_TIMER_SNAPSHOT_BPHY_FUNC()
static inline uint64_t CAVM_PSM_TIMER_SNAPSHOT_BPHY_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_TIMER_SNAPSHOT_BPHY_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x8600010f1330ll;
    if (cavm_is_model(OCTEONTX_F95O))
        return 0x8600010f1330ll;
    __cavm_csr_fatal("PSM_TIMER_SNAPSHOT_BPHY", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_TIMER_SNAPSHOT_BPHY cavm_psm_timer_snapshot_bphy_t
#define bustype_CAVM_PSM_TIMER_SNAPSHOT_BPHY CSR_TYPE_NCB
#define basename_CAVM_PSM_TIMER_SNAPSHOT_BPHY "PSM_TIMER_SNAPSHOT_BPHY"
#define busnum_CAVM_PSM_TIMER_SNAPSHOT_BPHY 0
#define arguments_CAVM_PSM_TIMER_SNAPSHOT_BPHY -1,-1,-1,-1

/**
 * Register (NCB) psm_timer_snapshot_cfg
 *
 * PHY Scheduler Timer Snapshot Configuration Register
 * This register configures the timer snapshot functionality.
 */
union cavm_psm_timer_snapshot_cfg
{
    uint64_t u;
    struct cavm_psm_timer_snapshot_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t snap_on_subframe      : 1;  /**< [  1:  1](R/W/H) When written 1, the timer will simultaneously capture the IEEE1914 timer,
                                                                 PTP timer, and the BPHY timer at the start of the next sub-frame.  After
                                                                 the values are captured, this bit will be cleared to 0. */
        uint64_t snap_asap             : 1;  /**< [  0:  0](R/W/H) When written 1, the timer will simultaneously capture the IEEE1914 timer,
                                                                 PTP timer, and the BPHY timer as soon as possible.  After the values are
                                                                 captured, this bit will be cleared to 0. */
#else /* Word 0 - Little Endian */
        uint64_t snap_asap             : 1;  /**< [  0:  0](R/W/H) When written 1, the timer will simultaneously capture the IEEE1914 timer,
                                                                 PTP timer, and the BPHY timer as soon as possible.  After the values are
                                                                 captured, this bit will be cleared to 0. */
        uint64_t snap_on_subframe      : 1;  /**< [  1:  1](R/W/H) When written 1, the timer will simultaneously capture the IEEE1914 timer,
                                                                 PTP timer, and the BPHY timer at the start of the next sub-frame.  After
                                                                 the values are captured, this bit will be cleared to 0. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_timer_snapshot_cfg_s cn9; */
    /* struct cavm_psm_timer_snapshot_cfg_s cnf95xx; */
    struct cavm_psm_timer_snapshot_cfg_f95o
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t snap_on_subframe      : 1;  /**< [  1:  1](R/W/H) When written 1, the timer will simultaneously capture the IEEE1914 timer
                                                                 and the BPHY timer at the start of the next sub-frame.  After
                                                                 the values are captured, this bit will be cleared to 0. */
        uint64_t snap_asap             : 1;  /**< [  0:  0](R/W/H) When written 1, the timer will simultaneously capture the IEEE1914 timer
                                                                 and the BPHY timer as soon as possible.  After the values are
                                                                 captured, this bit will be cleared to 0. */
#else /* Word 0 - Little Endian */
        uint64_t snap_asap             : 1;  /**< [  0:  0](R/W/H) When written 1, the timer will simultaneously capture the IEEE1914 timer
                                                                 and the BPHY timer as soon as possible.  After the values are
                                                                 captured, this bit will be cleared to 0. */
        uint64_t snap_on_subframe      : 1;  /**< [  1:  1](R/W/H) When written 1, the timer will simultaneously capture the IEEE1914 timer
                                                                 and the BPHY timer at the start of the next sub-frame.  After
                                                                 the values are captured, this bit will be cleared to 0. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } f95o;
};
typedef union cavm_psm_timer_snapshot_cfg cavm_psm_timer_snapshot_cfg_t;

#define CAVM_PSM_TIMER_SNAPSHOT_CFG CAVM_PSM_TIMER_SNAPSHOT_CFG_FUNC()
static inline uint64_t CAVM_PSM_TIMER_SNAPSHOT_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_TIMER_SNAPSHOT_CFG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x8600010f1300ll;
    if (cavm_is_model(OCTEONTX_F95O))
        return 0x8600010f1300ll;
    __cavm_csr_fatal("PSM_TIMER_SNAPSHOT_CFG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_TIMER_SNAPSHOT_CFG cavm_psm_timer_snapshot_cfg_t
#define bustype_CAVM_PSM_TIMER_SNAPSHOT_CFG CSR_TYPE_NCB
#define basename_CAVM_PSM_TIMER_SNAPSHOT_CFG "PSM_TIMER_SNAPSHOT_CFG"
#define busnum_CAVM_PSM_TIMER_SNAPSHOT_CFG 0
#define arguments_CAVM_PSM_TIMER_SNAPSHOT_CFG -1,-1,-1,-1

/**
 * Register (NCB) psm_timer_snapshot_ieee1914
 *
 * PHY Scheduler Timer Snapshot IEEE1914 Timer Value Register
 * This register contains the IEEE1914 timer snapshot.
 */
union cavm_psm_timer_snapshot_ieee1914
{
    uint64_t u;
    struct cavm_psm_timer_snapshot_ieee1914_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_29_63        : 35;
        uint64_t ieee1914_value        : 29; /**< [ 28:  0](RO/H) When a timer snapshot is performed as specified by the
                                                                 PSM_TIMER_SNAPSHOT_CFG register, this field will contain the captured
                                                                 IEEE1914 timer value. */
#else /* Word 0 - Little Endian */
        uint64_t ieee1914_value        : 29; /**< [ 28:  0](RO/H) When a timer snapshot is performed as specified by the
                                                                 PSM_TIMER_SNAPSHOT_CFG register, this field will contain the captured
                                                                 IEEE1914 timer value. */
        uint64_t reserved_29_63        : 35;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_timer_snapshot_ieee1914_s cn; */
};
typedef union cavm_psm_timer_snapshot_ieee1914 cavm_psm_timer_snapshot_ieee1914_t;

#define CAVM_PSM_TIMER_SNAPSHOT_IEEE1914 CAVM_PSM_TIMER_SNAPSHOT_IEEE1914_FUNC()
static inline uint64_t CAVM_PSM_TIMER_SNAPSHOT_IEEE1914_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_TIMER_SNAPSHOT_IEEE1914_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x8600010f1310ll;
    if (cavm_is_model(OCTEONTX_F95O))
        return 0x8600010f1310ll;
    __cavm_csr_fatal("PSM_TIMER_SNAPSHOT_IEEE1914", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_TIMER_SNAPSHOT_IEEE1914 cavm_psm_timer_snapshot_ieee1914_t
#define bustype_CAVM_PSM_TIMER_SNAPSHOT_IEEE1914 CSR_TYPE_NCB
#define basename_CAVM_PSM_TIMER_SNAPSHOT_IEEE1914 "PSM_TIMER_SNAPSHOT_IEEE1914"
#define busnum_CAVM_PSM_TIMER_SNAPSHOT_IEEE1914 0
#define arguments_CAVM_PSM_TIMER_SNAPSHOT_IEEE1914 -1,-1,-1,-1

/**
 * Register (NCB) psm_timer_snapshot_ptp
 *
 * PHY Scheduler Timer Snapshot PTP Timer Value Register
 * This register contains the PTP timer snapshot.
 */
union cavm_psm_timer_snapshot_ptp
{
    uint64_t u;
    struct cavm_psm_timer_snapshot_ptp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ptp_value             : 64; /**< [ 63:  0](RO/H) When a timer snapshot is performed as specified by the
                                                                 PSM_TIMER_SNAPSHOT_CFG register, this field will contain the captured
                                                                 PTP timer value. */
#else /* Word 0 - Little Endian */
        uint64_t ptp_value             : 64; /**< [ 63:  0](RO/H) When a timer snapshot is performed as specified by the
                                                                 PSM_TIMER_SNAPSHOT_CFG register, this field will contain the captured
                                                                 PTP timer value. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_timer_snapshot_ptp_s cn; */
};
typedef union cavm_psm_timer_snapshot_ptp cavm_psm_timer_snapshot_ptp_t;

#define CAVM_PSM_TIMER_SNAPSHOT_PTP CAVM_PSM_TIMER_SNAPSHOT_PTP_FUNC()
static inline uint64_t CAVM_PSM_TIMER_SNAPSHOT_PTP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_TIMER_SNAPSHOT_PTP_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF95XX))
        return 0x8600010f1320ll;
    __cavm_csr_fatal("PSM_TIMER_SNAPSHOT_PTP", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_TIMER_SNAPSHOT_PTP cavm_psm_timer_snapshot_ptp_t
#define bustype_CAVM_PSM_TIMER_SNAPSHOT_PTP CSR_TYPE_NCB
#define basename_CAVM_PSM_TIMER_SNAPSHOT_PTP "PSM_TIMER_SNAPSHOT_PTP"
#define busnum_CAVM_PSM_TIMER_SNAPSHOT_PTP 0
#define arguments_CAVM_PSM_TIMER_SNAPSHOT_PTP -1,-1,-1,-1

#endif /* __CAVM_CSRS_PSM_H__ */
