#ifndef __CAVM_CSRS_VDEC_H__
#define __CAVM_CSRS_VDEC_H__
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
 * OcteonTX VDEC.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Structure vdec_common_cfg_s
 *
 * VDEC Common Configuration Parameters Structure
 * This structure defines the format for the first word of the job
 * configuration for all VDEC jobs.
 */
union cavm_vdec_common_cfg_s
{
    uint64_t u;
    struct cavm_vdec_common_cfg_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t words_per_task        : 8;  /**< [ 31: 24] The number of 64-bit job configuration words per task.

                                                                 _ If [TASK_TYPE] = 0x0, [WORDS_PER_TASK] must be 0x5. */
        uint64_t reserved_21_23        : 3;
        uint64_t task_type             : 3;  /**< [ 20: 18] The specific task type for this job.
                                                                 0x0 = LTE.
                                                                 0x1-0x7 = Reserved. */
        uint64_t phy_mode              : 2;  /**< [ 17: 16] PHY operating mode:
                                                                 0x0 = LTE.
                                                                 0x1-0x3 = Reserved. */
        uint64_t reserved_5_15         : 11;
        uint64_t num_tasks             : 5;  /**< [  4:  0] Number of tasks in the job.  Permitted values are 1-16. */
#else /* Word 0 - Little Endian */
        uint64_t num_tasks             : 5;  /**< [  4:  0] Number of tasks in the job.  Permitted values are 1-16. */
        uint64_t reserved_5_15         : 11;
        uint64_t phy_mode              : 2;  /**< [ 17: 16] PHY operating mode:
                                                                 0x0 = LTE.
                                                                 0x1-0x3 = Reserved. */
        uint64_t task_type             : 3;  /**< [ 20: 18] The specific task type for this job.
                                                                 0x0 = LTE.
                                                                 0x1-0x7 = Reserved. */
        uint64_t reserved_21_23        : 3;
        uint64_t words_per_task        : 8;  /**< [ 31: 24] The number of 64-bit job configuration words per task.

                                                                 _ If [TASK_TYPE] = 0x0, [WORDS_PER_TASK] must be 0x5. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_vdec_common_cfg_s_s cn9; */
    /* struct cavm_vdec_common_cfg_s_s cnf95xxp1; */
    struct cavm_vdec_common_cfg_s_cnf95xxp2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t words_per_task        : 8;  /**< [ 31: 24] The number of 64-bit job configuration words per task.

                                                                 _ If [TASK_TYPE] = 0x0, [WORDS_PER_TASK] must be 0x5. */
        uint64_t reserved_21_23        : 3;
        uint64_t task_type             : 3;  /**< [ 20: 18] The specific task type for this job.
                                                                 0x0 = LTE.
                                                                 0x1-0x7 = Reserved. */
        uint64_t phy_mode              : 2;  /**< [ 17: 16] PHY operating mode:
                                                                 0x0 = LTE.
                                                                 0x1-0x3 = Reserved. */
        uint64_t reserved_5_15         : 11;
        uint64_t num_tasks             : 5;  /**< [  4:  0] Number of tasks in the job.  Permitted values are 0x1-0x10. */
#else /* Word 0 - Little Endian */
        uint64_t num_tasks             : 5;  /**< [  4:  0] Number of tasks in the job.  Permitted values are 0x1-0x10. */
        uint64_t reserved_5_15         : 11;
        uint64_t phy_mode              : 2;  /**< [ 17: 16] PHY operating mode:
                                                                 0x0 = LTE.
                                                                 0x1-0x3 = Reserved. */
        uint64_t task_type             : 3;  /**< [ 20: 18] The specific task type for this job.
                                                                 0x0 = LTE.
                                                                 0x1-0x7 = Reserved. */
        uint64_t reserved_21_23        : 3;
        uint64_t words_per_task        : 8;  /**< [ 31: 24] The number of 64-bit job configuration words per task.

                                                                 _ If [TASK_TYPE] = 0x0, [WORDS_PER_TASK] must be 0x5. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cnf95xxp2;
    /* struct cavm_vdec_common_cfg_s_cnf95xxp2 cnf95xxp3; */
    /* struct cavm_vdec_common_cfg_s_cnf95xxp2 f95o; */
    /* struct cavm_vdec_common_cfg_s_cnf95xxp2 loki; */
};

/**
 * Structure vdec_lte_report_s
 *
 * VDEC LTE Report Structure
 * This structure defines the format for the report word included with the
 * VDEC output data for each LTE task. The report is appended after the decoded
 * data for each task of each LTE VDEC job.
 */
union cavm_vdec_lte_report_s
{
    uint64_t u[3];
    struct cavm_vdec_lte_report_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_56_63        : 8;
        uint64_t decoded_crc           : 24; /**< [ 55: 32] The decoded CRC that was removed from the decoded output. If
                                                                 [BYPASS_CRC] was 1 in the task configuration, this field will be set to
                                                                 zero. */
        uint64_t reserved_16_31        : 16;
        uint64_t task_id               : 16; /**< [ 15:  0] Task ID parameter specified in job configuration. */
#else /* Word 0 - Little Endian */
        uint64_t task_id               : 16; /**< [ 15:  0] Task ID parameter specified in job configuration. */
        uint64_t reserved_16_31        : 16;
        uint64_t decoded_crc           : 24; /**< [ 55: 32] The decoded CRC that was removed from the decoded output. If
                                                                 [BYPASS_CRC] was 1 in the task configuration, this field will be set to
                                                                 zero. */
        uint64_t reserved_56_63        : 8;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_127          : 1;
        uint64_t nbits_cber            : 15; /**< [126:112] Number of bits, excluding bits with LLR == 0, used in the
                                                                 [CBER] calculation. */
        uint64_t cber                  : 15; /**< [111: 97] Estimated bit error rate. This field reports the number of bit-wise
                                                                 differences between the input sign and the decoded value for all
                                                                 coded bits. */
        uint64_t crc_error             : 1;  /**< [ 96: 96] CRC mismatch detected:
                                                                 0 = [DECODED_CRC] matches [CALC_CRC].
                                                                 1 = [DECODED_CRC] does not match [CALC_CRC]. */
        uint64_t reserved_88_95        : 8;
        uint64_t calc_crc              : 24; /**< [ 87: 64] CRC calculated from the decoded output. Valid only if the task
                                                                 configuration specified [BYPASS_CRC] = 0. */
#else /* Word 1 - Little Endian */
        uint64_t calc_crc              : 24; /**< [ 87: 64] CRC calculated from the decoded output. Valid only if the task
                                                                 configuration specified [BYPASS_CRC] = 0. */
        uint64_t reserved_88_95        : 8;
        uint64_t crc_error             : 1;  /**< [ 96: 96] CRC mismatch detected:
                                                                 0 = [DECODED_CRC] matches [CALC_CRC].
                                                                 1 = [DECODED_CRC] does not match [CALC_CRC]. */
        uint64_t cber                  : 15; /**< [111: 97] Estimated bit error rate. This field reports the number of bit-wise
                                                                 differences between the input sign and the decoded value for all
                                                                 coded bits. */
        uint64_t nbits_cber            : 15; /**< [126:112] Number of bits, excluding bits with LLR == 0, used in the
                                                                 [CBER] calculation. */
        uint64_t reserved_127          : 1;
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t reserved_180_191      : 12;
        uint64_t path_metric1          : 20; /**< [179:160] Path metric value; second best path. */
        uint64_t reserved_148_159      : 12;
        uint64_t path_metric0          : 20; /**< [147:128] Path metric value; best path. */
#else /* Word 2 - Little Endian */
        uint64_t path_metric0          : 20; /**< [147:128] Path metric value; best path. */
        uint64_t reserved_148_159      : 12;
        uint64_t path_metric1          : 20; /**< [179:160] Path metric value; second best path. */
        uint64_t reserved_180_191      : 12;
#endif /* Word 2 - End */
    } s;
    /* struct cavm_vdec_lte_report_s_s cn9; */
    /* struct cavm_vdec_lte_report_s_s cnf95xxp1; */
    struct cavm_vdec_lte_report_s_cnf95xxp2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_56_63        : 8;
        uint64_t decoded_crc           : 24; /**< [ 55: 32] The decoded CRC that was removed from the decoded output. If
                                                                 [BYPS_CRC] was 1 in the task configuration, this field will be set to
                                                                 zero. */
        uint64_t reserved_16_31        : 16;
        uint64_t task_id               : 16; /**< [ 15:  0] Task ID parameter specified in job configuration. */
#else /* Word 0 - Little Endian */
        uint64_t task_id               : 16; /**< [ 15:  0] Task ID parameter specified in job configuration. */
        uint64_t reserved_16_31        : 16;
        uint64_t decoded_crc           : 24; /**< [ 55: 32] The decoded CRC that was removed from the decoded output. If
                                                                 [BYPS_CRC] was 1 in the task configuration, this field will be set to
                                                                 zero. */
        uint64_t reserved_56_63        : 8;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_127          : 1;
        uint64_t nbits_cber            : 15; /**< [126:112] Number of bits, excluding bits with LLR == 0x0, used in the
                                                                 [CBER] calculation. */
        uint64_t cber                  : 15; /**< [111: 97] Estimated bit error rate. This field reports the number of bit-wise
                                                                 differences between the input sign and the decoded value for all
                                                                 coded bits. */
        uint64_t crc_error             : 1;  /**< [ 96: 96] CRC mismatch detected:
                                                                 0 = [DECODED_CRC] matches the calculated CRC.
                                                                 1 = [DECODED_CRC] does not match the calculated CRC. */
        uint64_t reserved_88_95        : 8;
        uint64_t calc_crc              : 24; /**< [ 87: 64] CRC calculated from the decoded output. Valid only if the task
                                                                 configuration specified [BYPS_CRC] = 0. */
#else /* Word 1 - Little Endian */
        uint64_t calc_crc              : 24; /**< [ 87: 64] CRC calculated from the decoded output. Valid only if the task
                                                                 configuration specified [BYPS_CRC] = 0. */
        uint64_t reserved_88_95        : 8;
        uint64_t crc_error             : 1;  /**< [ 96: 96] CRC mismatch detected:
                                                                 0 = [DECODED_CRC] matches the calculated CRC.
                                                                 1 = [DECODED_CRC] does not match the calculated CRC. */
        uint64_t cber                  : 15; /**< [111: 97] Estimated bit error rate. This field reports the number of bit-wise
                                                                 differences between the input sign and the decoded value for all
                                                                 coded bits. */
        uint64_t nbits_cber            : 15; /**< [126:112] Number of bits, excluding bits with LLR == 0x0, used in the
                                                                 [CBER] calculation. */
        uint64_t reserved_127          : 1;
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t reserved_180_191      : 12;
        uint64_t path_metric1          : 20; /**< [179:160] Path metric value; second best path. */
        uint64_t reserved_148_159      : 12;
        uint64_t path_metric0          : 20; /**< [147:128] Path metric value; best path. */
#else /* Word 2 - Little Endian */
        uint64_t path_metric0          : 20; /**< [147:128] Path metric value; best path. */
        uint64_t reserved_148_159      : 12;
        uint64_t path_metric1          : 20; /**< [179:160] Path metric value; second best path. */
        uint64_t reserved_180_191      : 12;
#endif /* Word 2 - End */
    } cnf95xxp2;
    /* struct cavm_vdec_lte_report_s_cnf95xxp2 cnf95xxp3; */
    /* struct cavm_vdec_lte_report_s_cnf95xxp2 f95o; */
    /* struct cavm_vdec_lte_report_s_cnf95xxp2 loki; */
};

/**
 * Structure vdec_lte_task_cfg_s
 *
 * VDEC LTE Task Configuration Structure
 * This structure defines the configuration parameters for an individual LTE
 * task. The job configuration section for an LTE-mode VDEC job should
 * contain one of these structures for each task.
 */
union cavm_vdec_lte_task_cfg_s
{
    uint64_t u[5];
    struct cavm_vdec_lte_task_cfg_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t num_llr               : 18; /**< [ 63: 46] The number of input LLRs, up to 186624. When [BYPS_CIRC_EXT]=1, this
                                                                 field is ignored and the number of encoded LLRs must be 3x[DEC_OUT_SIZE]. */
        uint64_t byps_rm               : 1;  /**< [ 45: 45] When set, bypass rate dematching and subblock deinterleaving. */
        uint64_t byps_circ_ext         : 1;  /**< [ 44: 44] When set, bypass circular extension. When circular extension is
                                                                 bypassed, [BYPS_RM] is ignored and the rate de-matching and subblock
                                                                 deinterleaving functions are bypassed as if [BYPS_RM]=1.

                                                                 When set to one, [REENC_ENA] must be 0, [BYPS_CH_DEINT] must be 1, and
                                                                 [BYPS_LAYER_DEMAP] must be 1.  In addition, this field must be set
                                                                 to 1 if [DEC_OUT_SIZE] is greater than 0x400.

                                                                 If [BYPS_CIRC_EXT] is set to 1, circular extension must be performed
                                                                 externally, and the input data must include
                                                                 3*5*ceiling([TRACEBACK_LEN]/5) bits of circular prefix and postfix
                                                                 before and after the encoded data. The prefix and original encoded
                                                                 data must be 128 bit aligned, with padding bits added to the end of
                                                                 the prefix as required. The postfix must be packed immediately after
                                                                 the encoded data, with no extra padding bits.

                                                                 When [BYPS_CIRC_EXT] is set to 1, the coding rate is always 1/3. */
        uint64_t byps_crc              : 1;  /**< [ 43: 43] When 1, CRC decoding is bypassed. When this field is 0, the code
                                                                 block CRC is decoded using the polynomial selected by [CRC_SELECT].
                                                                 The decoded CRC is stripped from the decoded output data. */
        uint64_t crc_select            : 3;  /**< [ 42: 40] CRC size and type:
                                                                 0x0 = CRC8.
                                                                 0x1 = CRC16.
                                                                 0x2 = CRC24A.
                                                                 0x3 = CRC24B.
                                                                 0x4-0x7 = Reserved. */
        uint64_t byps_llr_negate       : 1;  /**< [ 39: 39] When set, bypass LLR negation. */
        uint64_t total_num_sym         : 5;  /**< [ 38: 34] The number of input symbols to be deinterleaved.

                                                                 _ When [BYPS_CH_DEINT]=0, [TOTAL_NUM_SYM] shall be set to the total
                                                                 number of OFDM symbols [1..24] onto which the data/control LLR
                                                                 values are mapped.  This is the same as the number of input threads
                                                                 to be de-interleaved.

                                                                 _ When [BYPS_CH_DEINT]=1 and [BYPS_LAYER_DEMAP]=1, then [TOTAL_NUM_SYM]
                                                                 must be set to 0x1.

                                                                 _ When [BYPS_CH_DEINT]=1 and [BYPS_LAYER_DEMAP]=0, then [TOTAL_NUM_SYM]
                                                                 must be set to 0x2. */
        uint64_t byps_layer_demap      : 1;  /**< [ 33: 33] Bypasses internal layer demapping.

                                                                 _ When [BYPS_CH_DEINT] = 0, layer
                                                                 demapping is performed as part of deinterleaving, and
                                                                 [BYPS_LAYER_DEMAP] must be set to 1.

                                                                 _ When [BYPS_CH_DEINT] = 1, this field determines whether VDEC performs
                                                                 layer demapping. If [BYPS_LAYER_DEMAP] = 0, then [NUM_SYMBOLS] must be
                                                                 2, and there must be 2 input DMA threads, using
                                                                 MHBW_JD_DMA_CFG_WORD_0_S[CHUNK_SIZE] of 48 bytes. */
        uint64_t byps_ch_deint         : 1;  /**< [ 32: 32] When set, the task will bypass channel deinterleaving. */
        uint64_t reserved_23_31        : 9;
        uint64_t num_layers            : 3;  /**< [ 22: 20] Number of layers the transport block is mapped to. Must be either 1 or
                                                                 2. */
        uint64_t mod_order             : 4;  /**< [ 19: 16] The modulation order:
                                                                 0x1 = BPSK.
                                                                 0x2 = QPSK.
                                                                 0x4 = 16QAM.
                                                                 0x6 = 64QAM.
                                                                 0x8 = 256QAM.
                                                                 0x0, 0x3, 0x5, 0x7, 0x9-0xf = Reserved. */
        uint64_t task_id               : 16; /**< [ 15:  0] Each task in a job should be assigned a unique ID. The task ID will be
                                                                 included in the output to correctly identify the output for each task. */
#else /* Word 0 - Little Endian */
        uint64_t task_id               : 16; /**< [ 15:  0] Each task in a job should be assigned a unique ID. The task ID will be
                                                                 included in the output to correctly identify the output for each task. */
        uint64_t mod_order             : 4;  /**< [ 19: 16] The modulation order:
                                                                 0x1 = BPSK.
                                                                 0x2 = QPSK.
                                                                 0x4 = 16QAM.
                                                                 0x6 = 64QAM.
                                                                 0x8 = 256QAM.
                                                                 0x0, 0x3, 0x5, 0x7, 0x9-0xf = Reserved. */
        uint64_t num_layers            : 3;  /**< [ 22: 20] Number of layers the transport block is mapped to. Must be either 1 or
                                                                 2. */
        uint64_t reserved_23_31        : 9;
        uint64_t byps_ch_deint         : 1;  /**< [ 32: 32] When set, the task will bypass channel deinterleaving. */
        uint64_t byps_layer_demap      : 1;  /**< [ 33: 33] Bypasses internal layer demapping.

                                                                 _ When [BYPS_CH_DEINT] = 0, layer
                                                                 demapping is performed as part of deinterleaving, and
                                                                 [BYPS_LAYER_DEMAP] must be set to 1.

                                                                 _ When [BYPS_CH_DEINT] = 1, this field determines whether VDEC performs
                                                                 layer demapping. If [BYPS_LAYER_DEMAP] = 0, then [NUM_SYMBOLS] must be
                                                                 2, and there must be 2 input DMA threads, using
                                                                 MHBW_JD_DMA_CFG_WORD_0_S[CHUNK_SIZE] of 48 bytes. */
        uint64_t total_num_sym         : 5;  /**< [ 38: 34] The number of input symbols to be deinterleaved.

                                                                 _ When [BYPS_CH_DEINT]=0, [TOTAL_NUM_SYM] shall be set to the total
                                                                 number of OFDM symbols [1..24] onto which the data/control LLR
                                                                 values are mapped.  This is the same as the number of input threads
                                                                 to be de-interleaved.

                                                                 _ When [BYPS_CH_DEINT]=1 and [BYPS_LAYER_DEMAP]=1, then [TOTAL_NUM_SYM]
                                                                 must be set to 0x1.

                                                                 _ When [BYPS_CH_DEINT]=1 and [BYPS_LAYER_DEMAP]=0, then [TOTAL_NUM_SYM]
                                                                 must be set to 0x2. */
        uint64_t byps_llr_negate       : 1;  /**< [ 39: 39] When set, bypass LLR negation. */
        uint64_t crc_select            : 3;  /**< [ 42: 40] CRC size and type:
                                                                 0x0 = CRC8.
                                                                 0x1 = CRC16.
                                                                 0x2 = CRC24A.
                                                                 0x3 = CRC24B.
                                                                 0x4-0x7 = Reserved. */
        uint64_t byps_crc              : 1;  /**< [ 43: 43] When 1, CRC decoding is bypassed. When this field is 0, the code
                                                                 block CRC is decoded using the polynomial selected by [CRC_SELECT].
                                                                 The decoded CRC is stripped from the decoded output data. */
        uint64_t byps_circ_ext         : 1;  /**< [ 44: 44] When set, bypass circular extension. When circular extension is
                                                                 bypassed, [BYPS_RM] is ignored and the rate de-matching and subblock
                                                                 deinterleaving functions are bypassed as if [BYPS_RM]=1.

                                                                 When set to one, [REENC_ENA] must be 0, [BYPS_CH_DEINT] must be 1, and
                                                                 [BYPS_LAYER_DEMAP] must be 1.  In addition, this field must be set
                                                                 to 1 if [DEC_OUT_SIZE] is greater than 0x400.

                                                                 If [BYPS_CIRC_EXT] is set to 1, circular extension must be performed
                                                                 externally, and the input data must include
                                                                 3*5*ceiling([TRACEBACK_LEN]/5) bits of circular prefix and postfix
                                                                 before and after the encoded data. The prefix and original encoded
                                                                 data must be 128 bit aligned, with padding bits added to the end of
                                                                 the prefix as required. The postfix must be packed immediately after
                                                                 the encoded data, with no extra padding bits.

                                                                 When [BYPS_CIRC_EXT] is set to 1, the coding rate is always 1/3. */
        uint64_t byps_rm               : 1;  /**< [ 45: 45] When set, bypass rate dematching and subblock deinterleaving. */
        uint64_t num_llr               : 18; /**< [ 63: 46] The number of input LLRs, up to 186624. When [BYPS_CIRC_EXT]=1, this
                                                                 field is ignored and the number of encoded LLRs must be 3x[DEC_OUT_SIZE]. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_121_127      : 7;
        uint64_t crc_mask_en           : 1;  /**< [120:120] When 0, no CRC mask is applied on the calculated CRC.  When 1,
                                                                 the calculated CRC is masked with [CRC_MASK]. */
        uint64_t symb_byte_align       : 2;  /**< [119:118] When 0x1, each [MOD_ORDER] bits of reencoded output are mapped to one
                                                                 byte, with the (8-[MOD_ORDER]) most significant bits padded with zeros.
                                                                 When 0x0, the reencoded output bits are packed with no extra padding. */
        uint64_t reenc_size            : 18; /**< [117:100] The reencoded output size, in bits, after rate matching. The maximum
                                                                 size is 186624. */
        uint64_t reenc_byte_order      : 2;  /**< [ 99: 98] Byte order for the reencoded output data.  See Baseband PHY (BPHY):
                                                                 Data Packing section for details. Normal usage should use
                                                                 [REENC_BYTE_ORDER] = 0x0. */
        uint64_t reenc_bit_order       : 1;  /**< [ 97: 97] Bit order for the reencoded output data.  See Baseband PHY (BPHY):
                                                                 Data Packing section for details. */
        uint64_t dec_bit_order         : 1;  /**< [ 96: 96] The bit order for the decoded output data.  See Baseband PHY (BPHY):
                                                                 Data Packing section for details. */
        uint64_t dec_byte_order        : 2;  /**< [ 95: 94] The byte order for the decoded output data.  See Baseband PHY (BPHY):
                                                                 Data Packing section for details. Normal usage should use
                                                                 [DEC_BYTE_ORDER] = 0x0. */
        uint64_t llr_lvl               : 4;  /**< [ 93: 90] Rounding level used when [LLR_MODE] = 0x0. Rounding is performed as
                                                                 follows:

                                                                 _ LLR \>= 0: (LLR + (1 \<\< ([LLR_LVL]-1)) \>\> [LLR_LVL]

                                                                 _ LLR \<  0: (LLR + NEG((1 \<\< ([LLR_LVL]-1))) \>\> [LLR_LVL]

                                                                 The result is then saturated to 8 bits (symmetrically).
                                                                 Permitted values for this field are [0,2]. */
        uint64_t llr_mode              : 2;  /**< [ 89: 88] The LLR conversion mode.
                                                                 0x0 = LLR conversion uses the setting in [LLR_LVL].
                                                                 0x1 = LLRs are normalized by the average scale.
                                                                 0x2 = LLRs are normalized by the maximum scale.
                                                                 0x3 = Reserved.
                                                                 Note, when [BYPS_CIRC_EXT]=1, [LLR_MODE] must be 0x0. */
        uint64_t traceback_len         : 8;  /**< [ 87: 80] Trace back depth of the Viterbi decoder. This must be set to a value between 0x14 and
                                                                 0x60. It is recommended to always set this to 0x60 to achieve the best CBER performance.
                                                                 However, using a lower value can result in higher decoder throughput. */
        uint64_t byps_reenc_rm         : 1;  /**< [ 79: 79] When set, bypass rate-matching of the reencoded output, and output
                                                                 3 x [DEC_OUT_SIZE] bits of encoder output. */
        uint64_t reenc_ena             : 1;  /**< [ 78: 78] When set, enable re-encoding. */
        uint64_t dec_out_size          : 14; /**< [ 77: 64] The number of decoded bits. This size always includes the CRC
                                                                 bits, even if [BYPS_CRC] = 0 and the CRC is not included with
                                                                 the output data.

                                                                 _ When [BYPS_CIRC_EXT]=0, the max size is 0x1000.

                                                                 _ When [BYPS_CIRC_EXT]=1, the max size is 0x2000. */
#else /* Word 1 - Little Endian */
        uint64_t dec_out_size          : 14; /**< [ 77: 64] The number of decoded bits. This size always includes the CRC
                                                                 bits, even if [BYPS_CRC] = 0 and the CRC is not included with
                                                                 the output data.

                                                                 _ When [BYPS_CIRC_EXT]=0, the max size is 0x1000.

                                                                 _ When [BYPS_CIRC_EXT]=1, the max size is 0x2000. */
        uint64_t reenc_ena             : 1;  /**< [ 78: 78] When set, enable re-encoding. */
        uint64_t byps_reenc_rm         : 1;  /**< [ 79: 79] When set, bypass rate-matching of the reencoded output, and output
                                                                 3 x [DEC_OUT_SIZE] bits of encoder output. */
        uint64_t traceback_len         : 8;  /**< [ 87: 80] Trace back depth of the Viterbi decoder. This must be set to a value between 0x14 and
                                                                 0x60. It is recommended to always set this to 0x60 to achieve the best CBER performance.
                                                                 However, using a lower value can result in higher decoder throughput. */
        uint64_t llr_mode              : 2;  /**< [ 89: 88] The LLR conversion mode.
                                                                 0x0 = LLR conversion uses the setting in [LLR_LVL].
                                                                 0x1 = LLRs are normalized by the average scale.
                                                                 0x2 = LLRs are normalized by the maximum scale.
                                                                 0x3 = Reserved.
                                                                 Note, when [BYPS_CIRC_EXT]=1, [LLR_MODE] must be 0x0. */
        uint64_t llr_lvl               : 4;  /**< [ 93: 90] Rounding level used when [LLR_MODE] = 0x0. Rounding is performed as
                                                                 follows:

                                                                 _ LLR \>= 0: (LLR + (1 \<\< ([LLR_LVL]-1)) \>\> [LLR_LVL]

                                                                 _ LLR \<  0: (LLR + NEG((1 \<\< ([LLR_LVL]-1))) \>\> [LLR_LVL]

                                                                 The result is then saturated to 8 bits (symmetrically).
                                                                 Permitted values for this field are [0,2]. */
        uint64_t dec_byte_order        : 2;  /**< [ 95: 94] The byte order for the decoded output data.  See Baseband PHY (BPHY):
                                                                 Data Packing section for details. Normal usage should use
                                                                 [DEC_BYTE_ORDER] = 0x0. */
        uint64_t dec_bit_order         : 1;  /**< [ 96: 96] The bit order for the decoded output data.  See Baseband PHY (BPHY):
                                                                 Data Packing section for details. */
        uint64_t reenc_bit_order       : 1;  /**< [ 97: 97] Bit order for the reencoded output data.  See Baseband PHY (BPHY):
                                                                 Data Packing section for details. */
        uint64_t reenc_byte_order      : 2;  /**< [ 99: 98] Byte order for the reencoded output data.  See Baseband PHY (BPHY):
                                                                 Data Packing section for details. Normal usage should use
                                                                 [REENC_BYTE_ORDER] = 0x0. */
        uint64_t reenc_size            : 18; /**< [117:100] The reencoded output size, in bits, after rate matching. The maximum
                                                                 size is 186624. */
        uint64_t symb_byte_align       : 2;  /**< [119:118] When 0x1, each [MOD_ORDER] bits of reencoded output are mapped to one
                                                                 byte, with the (8-[MOD_ORDER]) most significant bits padded with zeros.
                                                                 When 0x0, the reencoded output bits are packed with no extra padding. */
        uint64_t crc_mask_en           : 1;  /**< [120:120] When 0, no CRC mask is applied on the calculated CRC.  When 1,
                                                                 the calculated CRC is masked with [CRC_MASK]. */
        uint64_t reserved_121_127      : 7;
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t reserved_152_191      : 40;
        uint64_t crc_mask              : 24; /**< [151:128] CRC mask to be applied on the calculated CRC if [CRC_MASK_EN] is 1. */
#else /* Word 2 - Little Endian */
        uint64_t crc_mask              : 24; /**< [151:128] CRC mask to be applied on the calculated CRC if [CRC_MASK_EN] is 1. */
        uint64_t reserved_152_191      : 40;
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t deint_skip_offset2    : 16; /**< [255:240] Reserved. */
        uint64_t deint_skip_offset1    : 16; /**< [239:224] Reserved. */
        uint64_t skip_offset1_num_sym  : 16; /**< [223:208] Reserved. */
        uint64_t reserved_198_207      : 10;
        uint64_t ch_deint_offset       : 5;  /**< [197:193] Number of REs to be discarded across all threads from the
                                                                 beginning of the channel deinterleaver (excluding RI LLRs
                                                                 that are marked with the value 0x80).  The actual number of
                                                                 LLRs that are discarded is [CH_DEINT_OFFSET] * [MOD_ORDER]. */
        uint64_t ch_deint_mode         : 1;  /**< [192:192] Must be set to 0. */
#else /* Word 3 - Little Endian */
        uint64_t ch_deint_mode         : 1;  /**< [192:192] Must be set to 0. */
        uint64_t ch_deint_offset       : 5;  /**< [197:193] Number of REs to be discarded across all threads from the
                                                                 beginning of the channel deinterleaver (excluding RI LLRs
                                                                 that are marked with the value 0x80).  The actual number of
                                                                 LLRs that are discarded is [CH_DEINT_OFFSET] * [MOD_ORDER]. */
        uint64_t reserved_198_207      : 10;
        uint64_t skip_offset1_num_sym  : 16; /**< [223:208] Reserved. */
        uint64_t deint_skip_offset1    : 16; /**< [239:224] Reserved. */
        uint64_t deint_skip_offset2    : 16; /**< [255:240] Reserved. */
#endif /* Word 3 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 4 - Big Endian */
        uint64_t num_rd_dma_wrds_per_sym : 16;/**< [319:304] Number of 128-bit words of DMA input per OFDM symbol.
                                                                 This is the same as the number of words per thread. */
        uint64_t num_wr1_wrds          : 16; /**< [303:288] Number of 64-bit words this task will output on write DMA port 1.
                                                                 Note that port 1 is used for writing the reencoded output and this
                                                                 field must be set to zero if [REENC_ENA]=0. */
        uint64_t num_wr0_wrds          : 16; /**< [287:272] Number of 64-bit words this task will output on write DMA port 0. */
        uint64_t num_rd_wrds           : 16; /**< [271:256] Number of 128-bit words of DMA input for this task. */
#else /* Word 4 - Little Endian */
        uint64_t num_rd_wrds           : 16; /**< [271:256] Number of 128-bit words of DMA input for this task. */
        uint64_t num_wr0_wrds          : 16; /**< [287:272] Number of 64-bit words this task will output on write DMA port 0. */
        uint64_t num_wr1_wrds          : 16; /**< [303:288] Number of 64-bit words this task will output on write DMA port 1.
                                                                 Note that port 1 is used for writing the reencoded output and this
                                                                 field must be set to zero if [REENC_ENA]=0. */
        uint64_t num_rd_dma_wrds_per_sym : 16;/**< [319:304] Number of 128-bit words of DMA input per OFDM symbol.
                                                                 This is the same as the number of words per thread. */
#endif /* Word 4 - End */
    } s;
    /* struct cavm_vdec_lte_task_cfg_s_s cn9; */
    /* struct cavm_vdec_lte_task_cfg_s_s cnf95xxp1; */
    struct cavm_vdec_lte_task_cfg_s_cnf95xxp2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t num_llr               : 18; /**< [ 63: 46] The number of input LLRs, up to 0x3CC00. When [BYPS_CIRC_EXT] = 1, this
                                                                 field is ignored and the number of encoded LLRs must be 3 x [DEC_OUT_SIZE]. */
        uint64_t byps_rm               : 1;  /**< [ 45: 45] When set, bypass rate dematching and subblock deinterleaving. */
        uint64_t byps_circ_ext         : 1;  /**< [ 44: 44] When set, bypass circular extension. When circular extension is
                                                                 bypassed, [BYPS_RM] is ignored and the rate de-matching and subblock
                                                                 deinterleaving functions are bypassed as if [BYPS_RM] = 1.

                                                                 When set to one, [REENC_ENA] must be 0, [BYPS_CH_DEINT] must be 1, and
                                                                 [BYPS_LAYER_DEMAP] must be 1.  In addition, this field must be set
                                                                 to 1 if [DEC_OUT_SIZE] is greater than 0x400.

                                                                 If [BYPS_CIRC_EXT] is set to 1, circular extension must be performed
                                                                 externally, and the input data must include
                                                                 3*5*ceiling([TRACEBACK_LEN] / 5) bits of circular prefix and postfix
                                                                 before and after the encoded data. The prefix and original encoded
                                                                 data must be 128-bit aligned, with padding bits added to the end of
                                                                 the prefix as required. The postfix must be packed immediately after
                                                                 the encoded data, with no extra padding bits.

                                                                 When [BYPS_CIRC_EXT] is set to 1, the coding rate is always 1/3. */
        uint64_t byps_crc              : 1;  /**< [ 43: 43] When 1, CRC decoding is bypassed. When this field is 0, the code
                                                                 block CRC is decoded using the polynomial selected by [CRC_SELECT].
                                                                 The decoded CRC is stripped from the decoded output data. */
        uint64_t crc_select            : 3;  /**< [ 42: 40] CRC size and type:
                                                                 0x0 = CRC8.
                                                                 0x1 = CRC16.
                                                                 0x2 = CRC24A.
                                                                 0x3 = CRC24B.
                                                                 0x4-0x7 = Reserved. */
        uint64_t byps_llr_negate       : 1;  /**< [ 39: 39] When set, bypass LLR negation. */
        uint64_t total_num_sym         : 5;  /**< [ 38: 34] The number of input symbols to be deinterleaved.

                                                                 _ When [BYPS_CH_DEINT] = 0, [TOTAL_NUM_SYM] shall be set to the total
                                                                 number of OFDM symbols [0x1, 0x18] onto which the data/control LLR
                                                                 values are mapped.  This is the same as the number of input threads
                                                                 to be de-interleaved.

                                                                 _ When [BYPS_CH_DEINT] = 1 and [BYPS_LAYER_DEMAP] = 1, then [TOTAL_NUM_SYM]
                                                                 must be set to 0x1.

                                                                 _ When [BYPS_CH_DEINT] = 1 and [BYPS_LAYER_DEMAP] = 0, then [TOTAL_NUM_SYM]
                                                                 must be set to 0x2. */
        uint64_t byps_layer_demap      : 1;  /**< [ 33: 33] Bypasses internal layer demapping.

                                                                 _ When [BYPS_CH_DEINT] = 0, layer
                                                                 demapping is performed as part of deinterleaving, and
                                                                 [BYPS_LAYER_DEMAP] must be set to 1.

                                                                 _ When [BYPS_CH_DEINT] = 1, this field determines whether VDEC performs
                                                                 layer demapping. If [BYPS_LAYER_DEMAP] = 0, then [NUM_SYMBOLS] must be
                                                                 0x2, and there must be two input DMA threads, using
                                                                 MHBW_JD_DMA_CFG_WORD_0_S[CHUNK_SIZE] of 0xC (48 bytes). */
        uint64_t byps_ch_deint         : 1;  /**< [ 32: 32] When set, the task will bypass channel deinterleaving. */
        uint64_t reserved_23_31        : 9;
        uint64_t num_layers            : 3;  /**< [ 22: 20] Number of layers the transport block is mapped to. Must be either 0x1 or 0x2. */
        uint64_t mod_order             : 4;  /**< [ 19: 16] The modulation order:
                                                                 0x1 = BPSK.
                                                                 0x2 = QPSK.
                                                                 0x4 = 16QAM.
                                                                 0x6 = 64QAM.
                                                                 0x8 = 256QAM.
                                                                 0x0, 0x3, 0x5, 0x7, 0x9-0xF = Reserved. */
        uint64_t task_id               : 16; /**< [ 15:  0] Each task in a job should be assigned a unique ID. The task ID will be
                                                                 included in the output to correctly identify the output for each task. */
#else /* Word 0 - Little Endian */
        uint64_t task_id               : 16; /**< [ 15:  0] Each task in a job should be assigned a unique ID. The task ID will be
                                                                 included in the output to correctly identify the output for each task. */
        uint64_t mod_order             : 4;  /**< [ 19: 16] The modulation order:
                                                                 0x1 = BPSK.
                                                                 0x2 = QPSK.
                                                                 0x4 = 16QAM.
                                                                 0x6 = 64QAM.
                                                                 0x8 = 256QAM.
                                                                 0x0, 0x3, 0x5, 0x7, 0x9-0xF = Reserved. */
        uint64_t num_layers            : 3;  /**< [ 22: 20] Number of layers the transport block is mapped to. Must be either 0x1 or 0x2. */
        uint64_t reserved_23_31        : 9;
        uint64_t byps_ch_deint         : 1;  /**< [ 32: 32] When set, the task will bypass channel deinterleaving. */
        uint64_t byps_layer_demap      : 1;  /**< [ 33: 33] Bypasses internal layer demapping.

                                                                 _ When [BYPS_CH_DEINT] = 0, layer
                                                                 demapping is performed as part of deinterleaving, and
                                                                 [BYPS_LAYER_DEMAP] must be set to 1.

                                                                 _ When [BYPS_CH_DEINT] = 1, this field determines whether VDEC performs
                                                                 layer demapping. If [BYPS_LAYER_DEMAP] = 0, then [NUM_SYMBOLS] must be
                                                                 0x2, and there must be two input DMA threads, using
                                                                 MHBW_JD_DMA_CFG_WORD_0_S[CHUNK_SIZE] of 0xC (48 bytes). */
        uint64_t total_num_sym         : 5;  /**< [ 38: 34] The number of input symbols to be deinterleaved.

                                                                 _ When [BYPS_CH_DEINT] = 0, [TOTAL_NUM_SYM] shall be set to the total
                                                                 number of OFDM symbols [0x1, 0x18] onto which the data/control LLR
                                                                 values are mapped.  This is the same as the number of input threads
                                                                 to be de-interleaved.

                                                                 _ When [BYPS_CH_DEINT] = 1 and [BYPS_LAYER_DEMAP] = 1, then [TOTAL_NUM_SYM]
                                                                 must be set to 0x1.

                                                                 _ When [BYPS_CH_DEINT] = 1 and [BYPS_LAYER_DEMAP] = 0, then [TOTAL_NUM_SYM]
                                                                 must be set to 0x2. */
        uint64_t byps_llr_negate       : 1;  /**< [ 39: 39] When set, bypass LLR negation. */
        uint64_t crc_select            : 3;  /**< [ 42: 40] CRC size and type:
                                                                 0x0 = CRC8.
                                                                 0x1 = CRC16.
                                                                 0x2 = CRC24A.
                                                                 0x3 = CRC24B.
                                                                 0x4-0x7 = Reserved. */
        uint64_t byps_crc              : 1;  /**< [ 43: 43] When 1, CRC decoding is bypassed. When this field is 0, the code
                                                                 block CRC is decoded using the polynomial selected by [CRC_SELECT].
                                                                 The decoded CRC is stripped from the decoded output data. */
        uint64_t byps_circ_ext         : 1;  /**< [ 44: 44] When set, bypass circular extension. When circular extension is
                                                                 bypassed, [BYPS_RM] is ignored and the rate de-matching and subblock
                                                                 deinterleaving functions are bypassed as if [BYPS_RM] = 1.

                                                                 When set to one, [REENC_ENA] must be 0, [BYPS_CH_DEINT] must be 1, and
                                                                 [BYPS_LAYER_DEMAP] must be 1.  In addition, this field must be set
                                                                 to 1 if [DEC_OUT_SIZE] is greater than 0x400.

                                                                 If [BYPS_CIRC_EXT] is set to 1, circular extension must be performed
                                                                 externally, and the input data must include
                                                                 3*5*ceiling([TRACEBACK_LEN] / 5) bits of circular prefix and postfix
                                                                 before and after the encoded data. The prefix and original encoded
                                                                 data must be 128-bit aligned, with padding bits added to the end of
                                                                 the prefix as required. The postfix must be packed immediately after
                                                                 the encoded data, with no extra padding bits.

                                                                 When [BYPS_CIRC_EXT] is set to 1, the coding rate is always 1/3. */
        uint64_t byps_rm               : 1;  /**< [ 45: 45] When set, bypass rate dematching and subblock deinterleaving. */
        uint64_t num_llr               : 18; /**< [ 63: 46] The number of input LLRs, up to 0x3CC00. When [BYPS_CIRC_EXT] = 1, this
                                                                 field is ignored and the number of encoded LLRs must be 3 x [DEC_OUT_SIZE]. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_121_127      : 7;
        uint64_t crc_mask_en           : 1;  /**< [120:120] When 0, no CRC mask is applied on the calculated CRC.  When 1,
                                                                 the calculated CRC is masked with [CRC_MASK]. */
        uint64_t symb_byte_align       : 2;  /**< [119:118] When 0x1, each [MOD_ORDER] bits of reencoded output are mapped to one
                                                                 byte, with the (8 - [MOD_ORDER]) most significant bits padded with zeros.
                                                                 When 0x0, the reencoded output bits are packed with no extra padding. */
        uint64_t reenc_size            : 18; /**< [117:100] The reencoded output size, in bits, after rate matching. The maximum
                                                                 size is 0x3CC00. */
        uint64_t reenc_byte_order      : 2;  /**< [ 99: 98] Byte order for the reencoded output data.  See Baseband PHY (BPHY):
                                                                 Data Packing section for details. Normal usage should use
                                                                 [REENC_BYTE_ORDER] = 0x0. */
        uint64_t reenc_bit_order       : 1;  /**< [ 97: 97] Bit order for the reencoded output data.  See Baseband PHY (BPHY):
                                                                 Data Packing section for details. */
        uint64_t dec_bit_order         : 1;  /**< [ 96: 96] The bit order for the decoded output data.  See Baseband PHY (BPHY):
                                                                 Data Packing section for details. */
        uint64_t dec_byte_order        : 2;  /**< [ 95: 94] The byte order for the decoded output data.  See Baseband PHY (BPHY):
                                                                 Data Packing section for details. Normal usage should use
                                                                 [DEC_BYTE_ORDER] = 0x0. */
        uint64_t llr_lvl               : 4;  /**< [ 93: 90] Rounding level used when [LLR_MODE] = 0x0. Rounding is performed as
                                                                 follows:

                                                                 _ LLR \>= 0: (LLR + (1 \<\< ([LLR_LVL] - 1)) \>\> [LLR_LVL]

                                                                 _ LLR \<  0: (LLR + NEG((1 \<\< ([LLR_LVL] - 1))) \>\> [LLR_LVL]

                                                                 The result is then saturated to 8 bits (symmetrically).
                                                                 Permitted values for this field are [0x0, 0x2]. */
        uint64_t llr_mode              : 2;  /**< [ 89: 88] The LLR conversion mode.
                                                                 0x0 = LLR conversion uses the setting in [LLR_LVL].
                                                                 0x1 = LLRs are normalized by the average scale.
                                                                 0x2 = LLRs are normalized by the maximum scale.
                                                                 0x3 = Reserved.
                                                                 Note, when [BYPS_CIRC_EXT] = 1, [LLR_MODE] must be 0x0. */
        uint64_t traceback_len         : 8;  /**< [ 87: 80] Trace back depth of the Viterbi decoder. This must be set to a value between 0x14 and
                                                                 0x60. It is recommended to always set this to 0x60 to achieve the best CBER performance.
                                                                 However, using a lower value can result in higher decoder throughput. */
        uint64_t byps_reenc_rm         : 1;  /**< [ 79: 79] When set, bypass rate-matching of the reencoded output, and output
                                                                 3 x [DEC_OUT_SIZE] bits of encoder output. */
        uint64_t reenc_ena             : 1;  /**< [ 78: 78] When set, enable re-encoding. */
        uint64_t dec_out_size          : 14; /**< [ 77: 64] The number of decoded bits. This size always includes the CRC
                                                                 bits, even if [BYPS_CRC] = 0 and the CRC is not included with
                                                                 the output data.

                                                                 _ When [BYPS_CIRC_EXT] = 0, the max size is 0x1000.

                                                                 _ When [BYPS_CIRC_EXT] = 1, the max size is 0x2000. */
#else /* Word 1 - Little Endian */
        uint64_t dec_out_size          : 14; /**< [ 77: 64] The number of decoded bits. This size always includes the CRC
                                                                 bits, even if [BYPS_CRC] = 0 and the CRC is not included with
                                                                 the output data.

                                                                 _ When [BYPS_CIRC_EXT] = 0, the max size is 0x1000.

                                                                 _ When [BYPS_CIRC_EXT] = 1, the max size is 0x2000. */
        uint64_t reenc_ena             : 1;  /**< [ 78: 78] When set, enable re-encoding. */
        uint64_t byps_reenc_rm         : 1;  /**< [ 79: 79] When set, bypass rate-matching of the reencoded output, and output
                                                                 3 x [DEC_OUT_SIZE] bits of encoder output. */
        uint64_t traceback_len         : 8;  /**< [ 87: 80] Trace back depth of the Viterbi decoder. This must be set to a value between 0x14 and
                                                                 0x60. It is recommended to always set this to 0x60 to achieve the best CBER performance.
                                                                 However, using a lower value can result in higher decoder throughput. */
        uint64_t llr_mode              : 2;  /**< [ 89: 88] The LLR conversion mode.
                                                                 0x0 = LLR conversion uses the setting in [LLR_LVL].
                                                                 0x1 = LLRs are normalized by the average scale.
                                                                 0x2 = LLRs are normalized by the maximum scale.
                                                                 0x3 = Reserved.
                                                                 Note, when [BYPS_CIRC_EXT] = 1, [LLR_MODE] must be 0x0. */
        uint64_t llr_lvl               : 4;  /**< [ 93: 90] Rounding level used when [LLR_MODE] = 0x0. Rounding is performed as
                                                                 follows:

                                                                 _ LLR \>= 0: (LLR + (1 \<\< ([LLR_LVL] - 1)) \>\> [LLR_LVL]

                                                                 _ LLR \<  0: (LLR + NEG((1 \<\< ([LLR_LVL] - 1))) \>\> [LLR_LVL]

                                                                 The result is then saturated to 8 bits (symmetrically).
                                                                 Permitted values for this field are [0x0, 0x2]. */
        uint64_t dec_byte_order        : 2;  /**< [ 95: 94] The byte order for the decoded output data.  See Baseband PHY (BPHY):
                                                                 Data Packing section for details. Normal usage should use
                                                                 [DEC_BYTE_ORDER] = 0x0. */
        uint64_t dec_bit_order         : 1;  /**< [ 96: 96] The bit order for the decoded output data.  See Baseband PHY (BPHY):
                                                                 Data Packing section for details. */
        uint64_t reenc_bit_order       : 1;  /**< [ 97: 97] Bit order for the reencoded output data.  See Baseband PHY (BPHY):
                                                                 Data Packing section for details. */
        uint64_t reenc_byte_order      : 2;  /**< [ 99: 98] Byte order for the reencoded output data.  See Baseband PHY (BPHY):
                                                                 Data Packing section for details. Normal usage should use
                                                                 [REENC_BYTE_ORDER] = 0x0. */
        uint64_t reenc_size            : 18; /**< [117:100] The reencoded output size, in bits, after rate matching. The maximum
                                                                 size is 0x3CC00. */
        uint64_t symb_byte_align       : 2;  /**< [119:118] When 0x1, each [MOD_ORDER] bits of reencoded output are mapped to one
                                                                 byte, with the (8 - [MOD_ORDER]) most significant bits padded with zeros.
                                                                 When 0x0, the reencoded output bits are packed with no extra padding. */
        uint64_t crc_mask_en           : 1;  /**< [120:120] When 0, no CRC mask is applied on the calculated CRC.  When 1,
                                                                 the calculated CRC is masked with [CRC_MASK]. */
        uint64_t reserved_121_127      : 7;
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t reserved_152_191      : 40;
        uint64_t crc_mask              : 24; /**< [151:128] CRC mask to be applied on the calculated CRC if [CRC_MASK_EN] is 1. */
#else /* Word 2 - Little Endian */
        uint64_t crc_mask              : 24; /**< [151:128] CRC mask to be applied on the calculated CRC if [CRC_MASK_EN] is 1. */
        uint64_t reserved_152_191      : 40;
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t deint_skip_offset2    : 16; /**< [255:240] Reserved. */
        uint64_t deint_skip_offset1    : 16; /**< [239:224] Reserved. */
        uint64_t skip_offset1_num_sym  : 16; /**< [223:208] Reserved. */
        uint64_t reserved_198_207      : 10;
        uint64_t ch_deint_offset       : 5;  /**< [197:193] Number of REs to be discarded across all threads from the
                                                                 beginning of the channel deinterleaver (excluding RI LLRs
                                                                 that are marked with the value 0x80).  The actual number of
                                                                 LLRs that are discarded is [CH_DEINT_OFFSET] * [MOD_ORDER]. */
        uint64_t ch_deint_mode         : 1;  /**< [192:192] Must be set to 0. */
#else /* Word 3 - Little Endian */
        uint64_t ch_deint_mode         : 1;  /**< [192:192] Must be set to 0. */
        uint64_t ch_deint_offset       : 5;  /**< [197:193] Number of REs to be discarded across all threads from the
                                                                 beginning of the channel deinterleaver (excluding RI LLRs
                                                                 that are marked with the value 0x80).  The actual number of
                                                                 LLRs that are discarded is [CH_DEINT_OFFSET] * [MOD_ORDER]. */
        uint64_t reserved_198_207      : 10;
        uint64_t skip_offset1_num_sym  : 16; /**< [223:208] Reserved. */
        uint64_t deint_skip_offset1    : 16; /**< [239:224] Reserved. */
        uint64_t deint_skip_offset2    : 16; /**< [255:240] Reserved. */
#endif /* Word 3 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 4 - Big Endian */
        uint64_t num_rd_dma_wrds_per_sym : 16;/**< [319:304] Number of 128-bit words of DMA input per OFDM symbol.
                                                                 This is the same as the number of words per thread. */
        uint64_t num_wr1_wrds          : 16; /**< [303:288] Number of 64-bit words this task will output on write DMA port 1.
                                                                 Note that port 1 is used for writing the reencoded output and this
                                                                 field must be set to zero if [REENC_ENA] = 0. */
        uint64_t num_wr0_wrds          : 16; /**< [287:272] Number of 64-bit words this task will output on write DMA port 0. */
        uint64_t num_rd_wrds           : 16; /**< [271:256] Number of 128-bit words of DMA input for this task. */
#else /* Word 4 - Little Endian */
        uint64_t num_rd_wrds           : 16; /**< [271:256] Number of 128-bit words of DMA input for this task. */
        uint64_t num_wr0_wrds          : 16; /**< [287:272] Number of 64-bit words this task will output on write DMA port 0. */
        uint64_t num_wr1_wrds          : 16; /**< [303:288] Number of 64-bit words this task will output on write DMA port 1.
                                                                 Note that port 1 is used for writing the reencoded output and this
                                                                 field must be set to zero if [REENC_ENA] = 0. */
        uint64_t num_rd_dma_wrds_per_sym : 16;/**< [319:304] Number of 128-bit words of DMA input per OFDM symbol.
                                                                 This is the same as the number of words per thread. */
#endif /* Word 4 - End */
    } cnf95xxp2;
    /* struct cavm_vdec_lte_task_cfg_s_cnf95xxp2 cnf95xxp3; */
    /* struct cavm_vdec_lte_task_cfg_s_cnf95xxp2 f95o; */
    /* struct cavm_vdec_lte_task_cfg_s_cnf95xxp2 loki; */
};

/**
 * Register (RSL) vdec#_control
 *
 * VDEC Control Register
 */
union cavm_vdecx_control
{
    uint64_t u;
    struct cavm_vdecx_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jobid2                : 16; /**< [ 63: 48](R/W/H) Job ID for slot 2. */
        uint64_t jobid1                : 16; /**< [ 47: 32](R/W/H) Job ID for slot 1. */
        uint64_t jobid0                : 16; /**< [ 31: 16](R/W/H) Job ID for slot 0. */
        uint64_t reserved_3_15         : 13;
        uint64_t start2                : 1;  /**< [  2:  2](R/W/H) Start processing job in slot 2. */
        uint64_t start1                : 1;  /**< [  1:  1](R/W/H) Start processing job in slot 1. */
        uint64_t start0                : 1;  /**< [  0:  0](R/W/H) Start processing job in slot 0. */
#else /* Word 0 - Little Endian */
        uint64_t start0                : 1;  /**< [  0:  0](R/W/H) Start processing job in slot 0. */
        uint64_t start1                : 1;  /**< [  1:  1](R/W/H) Start processing job in slot 1. */
        uint64_t start2                : 1;  /**< [  2:  2](R/W/H) Start processing job in slot 2. */
        uint64_t reserved_3_15         : 13;
        uint64_t jobid0                : 16; /**< [ 31: 16](R/W/H) Job ID for slot 0. */
        uint64_t jobid1                : 16; /**< [ 47: 32](R/W/H) Job ID for slot 1. */
        uint64_t jobid2                : 16; /**< [ 63: 48](R/W/H) Job ID for slot 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_vdecx_control_s cn; */
};
typedef union cavm_vdecx_control cavm_vdecx_control_t;

static inline uint64_t CAVM_VDECX_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_VDECX_CONTROL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=1))
        return 0x87e043700000ll + 0x8000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=1))
        return 0x87e043700000ll + 0x8000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=1))
        return 0x87e043700000ll + 0x8000ll * ((a) & 0x1);
    __cavm_csr_fatal("VDECX_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_VDECX_CONTROL(a) cavm_vdecx_control_t
#define bustype_CAVM_VDECX_CONTROL(a) CSR_TYPE_RSL
#define basename_CAVM_VDECX_CONTROL(a) "VDECX_CONTROL"
#define busnum_CAVM_VDECX_CONTROL(a) (a)
#define arguments_CAVM_VDECX_CONTROL(a) (a),-1,-1,-1

/**
 * Register (RSL) vdec#_error_enable0
 *
 * VDEC Error Enable 0 Register
 * This register enables error reporting for read overflow/underflow errors.
 */
union cavm_vdecx_error_enable0
{
    uint64_t u;
    struct cavm_vdecx_error_enable0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t rp0_of_en             : 1;  /**< [  4:  4](R/W) Read port 0 overflow enable. */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_uf_en             : 1;  /**< [  0:  0](R/W) Read Port 0 underflow enable. */
#else /* Word 0 - Little Endian */
        uint64_t rp0_uf_en             : 1;  /**< [  0:  0](R/W) Read Port 0 underflow enable. */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_of_en             : 1;  /**< [  4:  4](R/W) Read port 0 overflow enable. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_vdecx_error_enable0_s cn; */
};
typedef union cavm_vdecx_error_enable0 cavm_vdecx_error_enable0_t;

static inline uint64_t CAVM_VDECX_ERROR_ENABLE0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_VDECX_ERROR_ENABLE0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=1))
        return 0x87e043700040ll + 0x8000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=1))
        return 0x87e043700040ll + 0x8000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=1))
        return 0x87e043700040ll + 0x8000ll * ((a) & 0x1);
    __cavm_csr_fatal("VDECX_ERROR_ENABLE0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_VDECX_ERROR_ENABLE0(a) cavm_vdecx_error_enable0_t
#define bustype_CAVM_VDECX_ERROR_ENABLE0(a) CSR_TYPE_RSL
#define basename_CAVM_VDECX_ERROR_ENABLE0(a) "VDECX_ERROR_ENABLE0"
#define busnum_CAVM_VDECX_ERROR_ENABLE0(a) (a)
#define arguments_CAVM_VDECX_ERROR_ENABLE0(a) (a),-1,-1,-1

/**
 * Register (RSL) vdec#_error_source0
 *
 * VDEC Error Source 0 Register
 * This register indicates the source of read overflow/underflow errors.
 */
union cavm_vdecx_error_source0
{
    uint64_t u;
    struct cavm_vdecx_error_source0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t rp0_jid               : 16; /**< [ 31: 16](RO/H) Job ID of the job which reported the overflow/underflow error on read
                                                                 port 0. */
        uint64_t reserved_5_15         : 11;
        uint64_t rp0_of                : 1;  /**< [  4:  4](R/W1C/H) Read port 0 overflow. */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_uf                : 1;  /**< [  0:  0](R/W1C/H) Read port 0 underflow. */
#else /* Word 0 - Little Endian */
        uint64_t rp0_uf                : 1;  /**< [  0:  0](R/W1C/H) Read port 0 underflow. */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_of                : 1;  /**< [  4:  4](R/W1C/H) Read port 0 overflow. */
        uint64_t reserved_5_15         : 11;
        uint64_t rp0_jid               : 16; /**< [ 31: 16](RO/H) Job ID of the job which reported the overflow/underflow error on read
                                                                 port 0. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_vdecx_error_source0_s cn; */
};
typedef union cavm_vdecx_error_source0 cavm_vdecx_error_source0_t;

static inline uint64_t CAVM_VDECX_ERROR_SOURCE0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_VDECX_ERROR_SOURCE0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=1))
        return 0x87e043700030ll + 0x8000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=1))
        return 0x87e043700030ll + 0x8000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=1))
        return 0x87e043700030ll + 0x8000ll * ((a) & 0x1);
    __cavm_csr_fatal("VDECX_ERROR_SOURCE0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_VDECX_ERROR_SOURCE0(a) cavm_vdecx_error_source0_t
#define bustype_CAVM_VDECX_ERROR_SOURCE0(a) CSR_TYPE_RSL
#define basename_CAVM_VDECX_ERROR_SOURCE0(a) "VDECX_ERROR_SOURCE0"
#define busnum_CAVM_VDECX_ERROR_SOURCE0(a) (a)
#define arguments_CAVM_VDECX_ERROR_SOURCE0(a) (a),-1,-1,-1

/**
 * Register (RSL) vdec#_hab_jcfg0_ram#_data
 *
 * VDEC Job Configuration 0 RAM Registers
 * This register range accesses the job configuration RAM for slot 0.
 */
union cavm_vdecx_hab_jcfg0_ramx_data
{
    uint64_t u;
    struct cavm_vdecx_hab_jcfg0_ramx_data_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W/H) Job configuration RAM entry. */
#else /* Word 0 - Little Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W/H) Job configuration RAM entry. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_vdecx_hab_jcfg0_ramx_data_s cn; */
};
typedef union cavm_vdecx_hab_jcfg0_ramx_data cavm_vdecx_hab_jcfg0_ramx_data_t;

static inline uint64_t CAVM_VDECX_HAB_JCFG0_RAMX_DATA(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_VDECX_HAB_JCFG0_RAMX_DATA(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a<=1) && (b<=255)))
        return 0x87e043702000ll + 0x8000ll * ((a) & 0x1) + 8ll * ((b) & 0xff);
    if (cavm_is_model(OCTEONTX_F95O) && ((a<=1) && (b<=255)))
        return 0x87e043702000ll + 0x8000ll * ((a) & 0x1) + 8ll * ((b) & 0xff);
    if (cavm_is_model(OCTEONTX_LOKI) && ((a<=1) && (b<=255)))
        return 0x87e043702000ll + 0x8000ll * ((a) & 0x1) + 8ll * ((b) & 0xff);
    __cavm_csr_fatal("VDECX_HAB_JCFG0_RAMX_DATA", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_VDECX_HAB_JCFG0_RAMX_DATA(a,b) cavm_vdecx_hab_jcfg0_ramx_data_t
#define bustype_CAVM_VDECX_HAB_JCFG0_RAMX_DATA(a,b) CSR_TYPE_RSL
#define basename_CAVM_VDECX_HAB_JCFG0_RAMX_DATA(a,b) "VDECX_HAB_JCFG0_RAMX_DATA"
#define busnum_CAVM_VDECX_HAB_JCFG0_RAMX_DATA(a,b) (a)
#define arguments_CAVM_VDECX_HAB_JCFG0_RAMX_DATA(a,b) (a),(b),-1,-1

/**
 * Register (RSL) vdec#_hab_jcfg1_ram#_data
 *
 * VDEC Job Configuration 1 RAM Register
 * This register range accesses the job configuration RAM for slot 1.
 */
union cavm_vdecx_hab_jcfg1_ramx_data
{
    uint64_t u;
    struct cavm_vdecx_hab_jcfg1_ramx_data_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W/H) Job configuration RAM entry. */
#else /* Word 0 - Little Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W/H) Job configuration RAM entry. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_vdecx_hab_jcfg1_ramx_data_s cn; */
};
typedef union cavm_vdecx_hab_jcfg1_ramx_data cavm_vdecx_hab_jcfg1_ramx_data_t;

static inline uint64_t CAVM_VDECX_HAB_JCFG1_RAMX_DATA(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_VDECX_HAB_JCFG1_RAMX_DATA(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a<=1) && (b<=255)))
        return 0x87e043704000ll + 0x8000ll * ((a) & 0x1) + 8ll * ((b) & 0xff);
    if (cavm_is_model(OCTEONTX_F95O) && ((a<=1) && (b<=255)))
        return 0x87e043704000ll + 0x8000ll * ((a) & 0x1) + 8ll * ((b) & 0xff);
    if (cavm_is_model(OCTEONTX_LOKI) && ((a<=1) && (b<=255)))
        return 0x87e043704000ll + 0x8000ll * ((a) & 0x1) + 8ll * ((b) & 0xff);
    __cavm_csr_fatal("VDECX_HAB_JCFG1_RAMX_DATA", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_VDECX_HAB_JCFG1_RAMX_DATA(a,b) cavm_vdecx_hab_jcfg1_ramx_data_t
#define bustype_CAVM_VDECX_HAB_JCFG1_RAMX_DATA(a,b) CSR_TYPE_RSL
#define basename_CAVM_VDECX_HAB_JCFG1_RAMX_DATA(a,b) "VDECX_HAB_JCFG1_RAMX_DATA"
#define busnum_CAVM_VDECX_HAB_JCFG1_RAMX_DATA(a,b) (a)
#define arguments_CAVM_VDECX_HAB_JCFG1_RAMX_DATA(a,b) (a),(b),-1,-1

/**
 * Register (RSL) vdec#_hab_jcfg2_ram#_data
 *
 * VDEC Job Configuration 2 RAM Register
 * This register range accesses the job configuration RAM for slot 2.
 */
union cavm_vdecx_hab_jcfg2_ramx_data
{
    uint64_t u;
    struct cavm_vdecx_hab_jcfg2_ramx_data_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W/H) Job configuration RAM entry. */
#else /* Word 0 - Little Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W/H) Job configuration RAM entry. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_vdecx_hab_jcfg2_ramx_data_s cn; */
};
typedef union cavm_vdecx_hab_jcfg2_ramx_data cavm_vdecx_hab_jcfg2_ramx_data_t;

static inline uint64_t CAVM_VDECX_HAB_JCFG2_RAMX_DATA(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_VDECX_HAB_JCFG2_RAMX_DATA(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a<=1) && (b<=255)))
        return 0x87e043706000ll + 0x8000ll * ((a) & 0x1) + 8ll * ((b) & 0xff);
    if (cavm_is_model(OCTEONTX_F95O) && ((a<=1) && (b<=255)))
        return 0x87e043706000ll + 0x8000ll * ((a) & 0x1) + 8ll * ((b) & 0xff);
    if (cavm_is_model(OCTEONTX_LOKI) && ((a<=1) && (b<=255)))
        return 0x87e043706000ll + 0x8000ll * ((a) & 0x1) + 8ll * ((b) & 0xff);
    __cavm_csr_fatal("VDECX_HAB_JCFG2_RAMX_DATA", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_VDECX_HAB_JCFG2_RAMX_DATA(a,b) cavm_vdecx_hab_jcfg2_ramx_data_t
#define bustype_CAVM_VDECX_HAB_JCFG2_RAMX_DATA(a,b) CSR_TYPE_RSL
#define basename_CAVM_VDECX_HAB_JCFG2_RAMX_DATA(a,b) "VDECX_HAB_JCFG2_RAMX_DATA"
#define busnum_CAVM_VDECX_HAB_JCFG2_RAMX_DATA(a,b) (a)
#define arguments_CAVM_VDECX_HAB_JCFG2_RAMX_DATA(a,b) (a),(b),-1,-1

/**
 * Register (RSL) vdec#_status
 *
 * VDEC Status Register
 */
union cavm_vdecx_status
{
    uint64_t u;
    struct cavm_vdecx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) When set, VDEC is ready to receive the next job. */
        uint64_t reserved_3            : 1;
        uint64_t cfg2_busy             : 1;  /**< [  2:  2](RO/H) When set, slot 2 is busy processing a job. */
        uint64_t cfg1_busy             : 1;  /**< [  1:  1](RO/H) When set, slot 1 is busy processing a job. */
        uint64_t cfg0_busy             : 1;  /**< [  0:  0](RO/H) When set, slot 0 is busy processing a job. */
#else /* Word 0 - Little Endian */
        uint64_t cfg0_busy             : 1;  /**< [  0:  0](RO/H) When set, slot 0 is busy processing a job. */
        uint64_t cfg1_busy             : 1;  /**< [  1:  1](RO/H) When set, slot 1 is busy processing a job. */
        uint64_t cfg2_busy             : 1;  /**< [  2:  2](RO/H) When set, slot 2 is busy processing a job. */
        uint64_t reserved_3            : 1;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) When set, VDEC is ready to receive the next job. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_vdecx_status_s cn; */
};
typedef union cavm_vdecx_status cavm_vdecx_status_t;

static inline uint64_t CAVM_VDECX_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_VDECX_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=1))
        return 0x87e043700018ll + 0x8000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=1))
        return 0x87e043700018ll + 0x8000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=1))
        return 0x87e043700018ll + 0x8000ll * ((a) & 0x1);
    __cavm_csr_fatal("VDECX_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_VDECX_STATUS(a) cavm_vdecx_status_t
#define bustype_CAVM_VDECX_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_VDECX_STATUS(a) "VDECX_STATUS"
#define busnum_CAVM_VDECX_STATUS(a) (a)
#define arguments_CAVM_VDECX_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) vdec#_tc_config_err_flags_reg
 *
 * VDEC Task Configuration Error Register
 * This register reports task configuration errors, that occur when a
 * specified parameter value is outside the acceptable range.
 */
union cavm_vdecx_tc_config_err_flags_reg
{
    uint64_t u;
    struct cavm_vdecx_tc_config_err_flags_reg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_23_63        : 41;
        uint64_t invalid_reenc_byte_order : 1;/**< [ 22: 22](RO/H) Invalid VDEC_LTE_TASK_CFG_S[REENC_BYTE_ORDER] value. */
        uint64_t invalid_reenc_bit_order : 1;/**< [ 21: 21](RO/H) Invalid VDEC_LTE_TASK_CFG_S[REENC_BIT_ORDER] value. */
        uint64_t reserved_18_20        : 3;
        uint64_t invalid_reenc_size    : 1;  /**< [ 17: 17](RO/H) Invalid VDEC_LTE_TASK_CFG_S[REENC_SIZE] value. */
        uint64_t invalid_byps_reenc_rm : 1;  /**< [ 16: 16](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_REENC_RM] value. */
        uint64_t invalid_reenc_ena     : 1;  /**< [ 15: 15](RO/H) Invalid VDEC_LTE_TASK_CFG_S[REENC_ENA] value. */
        uint64_t invalid_llr_lvl       : 1;  /**< [ 14: 14](RO/H) Invalid VDEC_LTE_TASK_CFG_S[LLR_LVL] value. */
        uint64_t invalid_llr_mode      : 1;  /**< [ 13: 13](RO/H) Invalid VDEC_LTE_TASK_CFG_S[LLR_MODE] value. */
        uint64_t invalid_byps_llr_negate : 1;/**< [ 12: 12](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_LLR_NEGATE] value. */
        uint64_t invalid_byps_circ_ext : 1;  /**< [ 11: 11](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_CIRC_EXT] value. */
        uint64_t invalid_crc_mask      : 1;  /**< [ 10: 10](RO/H) Invalid VDEC_LTE_TASK_CFG_S[CRC_MASK] value. */
        uint64_t invalid_crc_mask_en   : 1;  /**< [  9:  9](RO/H) Invalid VDEC_LTE_TASK_CFG_S[CRC_MASK_EN] value. */
        uint64_t invalid_crc_select    : 1;  /**< [  8:  8](RO/H) Invalid VDEC_LTE_TASK_CFG_S[CRC_SELECT] value. */
        uint64_t invalid_byps_crc      : 1;  /**< [  7:  7](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_CRC] value. */
        uint64_t invalid_mod_order     : 1;  /**< [  6:  6](RO/H) Invalid VDEC_LTE_TASK_CFG_S[MOD_ORDER] value. */
        uint64_t invalid_byps_layer_demap : 1;/**< [  5:  5](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_LAYER_DEMAP] value. */
        uint64_t invalid_num_llr       : 1;  /**< [  4:  4](RO/H) Invalid VDEC_LTE_TASK_CFG_S[NUM_LLR] value. */
        uint64_t invalid_byps_rm       : 1;  /**< [  3:  3](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_RM] value. */
        uint64_t invalid_traceback_len : 1;  /**< [  2:  2](RO/H) Invalid VDEC_LTE_TASK_CFG_S[TRACEBACK_LEN] value. */
        uint64_t invalid_dec_out_size  : 1;  /**< [  1:  1](RO/H) Invalid VDEC_LTE_TASK_CFG_S[DEC_OUT_SIZE] value. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t invalid_dec_out_size  : 1;  /**< [  1:  1](RO/H) Invalid VDEC_LTE_TASK_CFG_S[DEC_OUT_SIZE] value. */
        uint64_t invalid_traceback_len : 1;  /**< [  2:  2](RO/H) Invalid VDEC_LTE_TASK_CFG_S[TRACEBACK_LEN] value. */
        uint64_t invalid_byps_rm       : 1;  /**< [  3:  3](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_RM] value. */
        uint64_t invalid_num_llr       : 1;  /**< [  4:  4](RO/H) Invalid VDEC_LTE_TASK_CFG_S[NUM_LLR] value. */
        uint64_t invalid_byps_layer_demap : 1;/**< [  5:  5](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_LAYER_DEMAP] value. */
        uint64_t invalid_mod_order     : 1;  /**< [  6:  6](RO/H) Invalid VDEC_LTE_TASK_CFG_S[MOD_ORDER] value. */
        uint64_t invalid_byps_crc      : 1;  /**< [  7:  7](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_CRC] value. */
        uint64_t invalid_crc_select    : 1;  /**< [  8:  8](RO/H) Invalid VDEC_LTE_TASK_CFG_S[CRC_SELECT] value. */
        uint64_t invalid_crc_mask_en   : 1;  /**< [  9:  9](RO/H) Invalid VDEC_LTE_TASK_CFG_S[CRC_MASK_EN] value. */
        uint64_t invalid_crc_mask      : 1;  /**< [ 10: 10](RO/H) Invalid VDEC_LTE_TASK_CFG_S[CRC_MASK] value. */
        uint64_t invalid_byps_circ_ext : 1;  /**< [ 11: 11](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_CIRC_EXT] value. */
        uint64_t invalid_byps_llr_negate : 1;/**< [ 12: 12](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_LLR_NEGATE] value. */
        uint64_t invalid_llr_mode      : 1;  /**< [ 13: 13](RO/H) Invalid VDEC_LTE_TASK_CFG_S[LLR_MODE] value. */
        uint64_t invalid_llr_lvl       : 1;  /**< [ 14: 14](RO/H) Invalid VDEC_LTE_TASK_CFG_S[LLR_LVL] value. */
        uint64_t invalid_reenc_ena     : 1;  /**< [ 15: 15](RO/H) Invalid VDEC_LTE_TASK_CFG_S[REENC_ENA] value. */
        uint64_t invalid_byps_reenc_rm : 1;  /**< [ 16: 16](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_REENC_RM] value. */
        uint64_t invalid_reenc_size    : 1;  /**< [ 17: 17](RO/H) Invalid VDEC_LTE_TASK_CFG_S[REENC_SIZE] value. */
        uint64_t reserved_18_20        : 3;
        uint64_t invalid_reenc_bit_order : 1;/**< [ 21: 21](RO/H) Invalid VDEC_LTE_TASK_CFG_S[REENC_BIT_ORDER] value. */
        uint64_t invalid_reenc_byte_order : 1;/**< [ 22: 22](RO/H) Invalid VDEC_LTE_TASK_CFG_S[REENC_BYTE_ORDER] value. */
        uint64_t reserved_23_63        : 41;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_vdecx_tc_config_err_flags_reg_s cn9; */
    struct cavm_vdecx_tc_config_err_flags_reg_cnf95xxp1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_23_63        : 41;
        uint64_t invalid_reenc_byte_order : 1;/**< [ 22: 22](RO/H) Invalid VDEC_LTE_TASK_CFG_S[REENC_BYTE_ORDER] value. */
        uint64_t invalid_reenc_bit_order : 1;/**< [ 21: 21](RO/H) Invalid VDEC_LTE_TASK_CFG_S[REENC_BIT_ORDER] value. */
        uint64_t invalid_hd_byte_order : 1;  /**< [ 20: 20](RO/H) Invalid VDEC_LTE_TASK_CFG_S[HD_BYTE_ORDER] value. */
        uint64_t invalid_hd_bit_order  : 1;  /**< [ 19: 19](RO/H) Invalid VDEC_LTE_TASK_CFG_S[HD_BIT_ORDER] value. */
        uint64_t invalid_symb_byte_aligned : 1;/**< [ 18: 18](RO/H) Invalid VDEC_LTE_TASK_CFG_S[SYMB_BYTE_ALIGNED] value. */
        uint64_t invalid_reenc_size    : 1;  /**< [ 17: 17](RO/H) Invalid VDEC_LTE_TASK_CFG_S[REENC_SIZE] value. */
        uint64_t invalid_byps_reenc_rm : 1;  /**< [ 16: 16](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_REENC_RM] value. */
        uint64_t invalid_reenc_ena     : 1;  /**< [ 15: 15](RO/H) Invalid VDEC_LTE_TASK_CFG_S[REENC_ENA] value. */
        uint64_t invalid_llr_lvl       : 1;  /**< [ 14: 14](RO/H) Invalid VDEC_LTE_TASK_CFG_S[LLR_LVL] value. */
        uint64_t invalid_llr_mode      : 1;  /**< [ 13: 13](RO/H) Invalid VDEC_LTE_TASK_CFG_S[LLR_MODE] value. */
        uint64_t invalid_byps_llr_negate : 1;/**< [ 12: 12](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_LLR_NEGATE] value. */
        uint64_t invalid_byps_circ_ext : 1;  /**< [ 11: 11](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_CIRC_EXT] value. */
        uint64_t invalid_crc_mask      : 1;  /**< [ 10: 10](RO/H) Invalid VDEC_LTE_TASK_CFG_S[CRC_MASK] value. */
        uint64_t invalid_crc_mask_en   : 1;  /**< [  9:  9](RO/H) Invalid VDEC_LTE_TASK_CFG_S[CRC_MASK_EN] value. */
        uint64_t invalid_crc_select    : 1;  /**< [  8:  8](RO/H) Invalid VDEC_LTE_TASK_CFG_S[CRC_SELECT] value. */
        uint64_t invalid_byps_crc      : 1;  /**< [  7:  7](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_CRC] value. */
        uint64_t invalid_mod_order     : 1;  /**< [  6:  6](RO/H) Invalid VDEC_LTE_TASK_CFG_S[MOD_ORDER] value. */
        uint64_t invalid_byps_layer_demap : 1;/**< [  5:  5](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_LAYER_DEMAP] value. */
        uint64_t invalid_num_llr       : 1;  /**< [  4:  4](RO/H) Invalid VDEC_LTE_TASK_CFG_S[NUM_LLR] value. */
        uint64_t invalid_byps_rm       : 1;  /**< [  3:  3](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_RM] value. */
        uint64_t invalid_traceback_len : 1;  /**< [  2:  2](RO/H) Invalid VDEC_LTE_TASK_CFG_S[TRACEBACK_LEN] value. */
        uint64_t invalid_dec_out_size  : 1;  /**< [  1:  1](RO/H) Invalid VDEC_LTE_TASK_CFG_S[DEC_OUT_SIZE] value. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t invalid_dec_out_size  : 1;  /**< [  1:  1](RO/H) Invalid VDEC_LTE_TASK_CFG_S[DEC_OUT_SIZE] value. */
        uint64_t invalid_traceback_len : 1;  /**< [  2:  2](RO/H) Invalid VDEC_LTE_TASK_CFG_S[TRACEBACK_LEN] value. */
        uint64_t invalid_byps_rm       : 1;  /**< [  3:  3](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_RM] value. */
        uint64_t invalid_num_llr       : 1;  /**< [  4:  4](RO/H) Invalid VDEC_LTE_TASK_CFG_S[NUM_LLR] value. */
        uint64_t invalid_byps_layer_demap : 1;/**< [  5:  5](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_LAYER_DEMAP] value. */
        uint64_t invalid_mod_order     : 1;  /**< [  6:  6](RO/H) Invalid VDEC_LTE_TASK_CFG_S[MOD_ORDER] value. */
        uint64_t invalid_byps_crc      : 1;  /**< [  7:  7](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_CRC] value. */
        uint64_t invalid_crc_select    : 1;  /**< [  8:  8](RO/H) Invalid VDEC_LTE_TASK_CFG_S[CRC_SELECT] value. */
        uint64_t invalid_crc_mask_en   : 1;  /**< [  9:  9](RO/H) Invalid VDEC_LTE_TASK_CFG_S[CRC_MASK_EN] value. */
        uint64_t invalid_crc_mask      : 1;  /**< [ 10: 10](RO/H) Invalid VDEC_LTE_TASK_CFG_S[CRC_MASK] value. */
        uint64_t invalid_byps_circ_ext : 1;  /**< [ 11: 11](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_CIRC_EXT] value. */
        uint64_t invalid_byps_llr_negate : 1;/**< [ 12: 12](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_LLR_NEGATE] value. */
        uint64_t invalid_llr_mode      : 1;  /**< [ 13: 13](RO/H) Invalid VDEC_LTE_TASK_CFG_S[LLR_MODE] value. */
        uint64_t invalid_llr_lvl       : 1;  /**< [ 14: 14](RO/H) Invalid VDEC_LTE_TASK_CFG_S[LLR_LVL] value. */
        uint64_t invalid_reenc_ena     : 1;  /**< [ 15: 15](RO/H) Invalid VDEC_LTE_TASK_CFG_S[REENC_ENA] value. */
        uint64_t invalid_byps_reenc_rm : 1;  /**< [ 16: 16](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_REENC_RM] value. */
        uint64_t invalid_reenc_size    : 1;  /**< [ 17: 17](RO/H) Invalid VDEC_LTE_TASK_CFG_S[REENC_SIZE] value. */
        uint64_t invalid_symb_byte_aligned : 1;/**< [ 18: 18](RO/H) Invalid VDEC_LTE_TASK_CFG_S[SYMB_BYTE_ALIGNED] value. */
        uint64_t invalid_hd_bit_order  : 1;  /**< [ 19: 19](RO/H) Invalid VDEC_LTE_TASK_CFG_S[HD_BIT_ORDER] value. */
        uint64_t invalid_hd_byte_order : 1;  /**< [ 20: 20](RO/H) Invalid VDEC_LTE_TASK_CFG_S[HD_BYTE_ORDER] value. */
        uint64_t invalid_reenc_bit_order : 1;/**< [ 21: 21](RO/H) Invalid VDEC_LTE_TASK_CFG_S[REENC_BIT_ORDER] value. */
        uint64_t invalid_reenc_byte_order : 1;/**< [ 22: 22](RO/H) Invalid VDEC_LTE_TASK_CFG_S[REENC_BYTE_ORDER] value. */
        uint64_t reserved_23_63        : 41;
#endif /* Word 0 - End */
    } cnf95xxp1;
    struct cavm_vdecx_tc_config_err_flags_reg_cnf95xxp2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_23_63        : 41;
        uint64_t invalid_reenc_byte_order : 1;/**< [ 22: 22](RO/H) Invalid VDEC_LTE_TASK_CFG_S[REENC_BYTE_ORDER] value. */
        uint64_t invalid_reenc_bit_order : 1;/**< [ 21: 21](RO/H) Invalid VDEC_LTE_TASK_CFG_S[REENC_BIT_ORDER] value. */
        uint64_t invalid_dec_byte_order : 1; /**< [ 20: 20](RO/H) Invalid VDEC_LTE_TASK_CFG_S[DEC_BYTE_ORDER] value. */
        uint64_t invalid_dec_bit_order : 1;  /**< [ 19: 19](RO/H) Invalid VDEC_LTE_TASK_CFG_S[DEC_BIT_ORDER] value. */
        uint64_t invalid_symb_byte_align : 1;/**< [ 18: 18](RO/H) Invalid VDEC_LTE_TASK_CFG_S[SYMB_BYTE_ALIGN] value. */
        uint64_t invalid_reenc_size    : 1;  /**< [ 17: 17](RO/H) Invalid VDEC_LTE_TASK_CFG_S[REENC_SIZE] value. */
        uint64_t invalid_byps_reenc_rm : 1;  /**< [ 16: 16](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_REENC_RM] value. */
        uint64_t invalid_reenc_ena     : 1;  /**< [ 15: 15](RO/H) Invalid VDEC_LTE_TASK_CFG_S[REENC_ENA] value. */
        uint64_t invalid_llr_lvl       : 1;  /**< [ 14: 14](RO/H) Invalid VDEC_LTE_TASK_CFG_S[LLR_LVL] value. */
        uint64_t invalid_llr_mode      : 1;  /**< [ 13: 13](RO/H) Invalid VDEC_LTE_TASK_CFG_S[LLR_MODE] value. */
        uint64_t invalid_byps_llr_negate : 1;/**< [ 12: 12](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_LLR_NEGATE] value. */
        uint64_t invalid_byps_circ_ext : 1;  /**< [ 11: 11](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_CIRC_EXT] value. */
        uint64_t invalid_crc_mask      : 1;  /**< [ 10: 10](RO/H) Invalid VDEC_LTE_TASK_CFG_S[CRC_MASK] value. */
        uint64_t invalid_crc_mask_en   : 1;  /**< [  9:  9](RO/H) Invalid VDEC_LTE_TASK_CFG_S[CRC_MASK_EN] value. */
        uint64_t invalid_crc_select    : 1;  /**< [  8:  8](RO/H) Invalid VDEC_LTE_TASK_CFG_S[CRC_SELECT] value. */
        uint64_t invalid_byps_crc      : 1;  /**< [  7:  7](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_CRC] value. */
        uint64_t invalid_mod_order     : 1;  /**< [  6:  6](RO/H) Invalid VDEC_LTE_TASK_CFG_S[MOD_ORDER] value. */
        uint64_t invalid_byps_layer_demap : 1;/**< [  5:  5](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_LAYER_DEMAP] value. */
        uint64_t invalid_num_llr       : 1;  /**< [  4:  4](RO/H) Invalid VDEC_LTE_TASK_CFG_S[NUM_LLR] value. */
        uint64_t invalid_byps_rm       : 1;  /**< [  3:  3](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_RM] value. */
        uint64_t invalid_traceback_len : 1;  /**< [  2:  2](RO/H) Invalid VDEC_LTE_TASK_CFG_S[TRACEBACK_LEN] value. */
        uint64_t invalid_dec_out_size  : 1;  /**< [  1:  1](RO/H) Invalid VDEC_LTE_TASK_CFG_S[DEC_OUT_SIZE] value. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t invalid_dec_out_size  : 1;  /**< [  1:  1](RO/H) Invalid VDEC_LTE_TASK_CFG_S[DEC_OUT_SIZE] value. */
        uint64_t invalid_traceback_len : 1;  /**< [  2:  2](RO/H) Invalid VDEC_LTE_TASK_CFG_S[TRACEBACK_LEN] value. */
        uint64_t invalid_byps_rm       : 1;  /**< [  3:  3](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_RM] value. */
        uint64_t invalid_num_llr       : 1;  /**< [  4:  4](RO/H) Invalid VDEC_LTE_TASK_CFG_S[NUM_LLR] value. */
        uint64_t invalid_byps_layer_demap : 1;/**< [  5:  5](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_LAYER_DEMAP] value. */
        uint64_t invalid_mod_order     : 1;  /**< [  6:  6](RO/H) Invalid VDEC_LTE_TASK_CFG_S[MOD_ORDER] value. */
        uint64_t invalid_byps_crc      : 1;  /**< [  7:  7](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_CRC] value. */
        uint64_t invalid_crc_select    : 1;  /**< [  8:  8](RO/H) Invalid VDEC_LTE_TASK_CFG_S[CRC_SELECT] value. */
        uint64_t invalid_crc_mask_en   : 1;  /**< [  9:  9](RO/H) Invalid VDEC_LTE_TASK_CFG_S[CRC_MASK_EN] value. */
        uint64_t invalid_crc_mask      : 1;  /**< [ 10: 10](RO/H) Invalid VDEC_LTE_TASK_CFG_S[CRC_MASK] value. */
        uint64_t invalid_byps_circ_ext : 1;  /**< [ 11: 11](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_CIRC_EXT] value. */
        uint64_t invalid_byps_llr_negate : 1;/**< [ 12: 12](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_LLR_NEGATE] value. */
        uint64_t invalid_llr_mode      : 1;  /**< [ 13: 13](RO/H) Invalid VDEC_LTE_TASK_CFG_S[LLR_MODE] value. */
        uint64_t invalid_llr_lvl       : 1;  /**< [ 14: 14](RO/H) Invalid VDEC_LTE_TASK_CFG_S[LLR_LVL] value. */
        uint64_t invalid_reenc_ena     : 1;  /**< [ 15: 15](RO/H) Invalid VDEC_LTE_TASK_CFG_S[REENC_ENA] value. */
        uint64_t invalid_byps_reenc_rm : 1;  /**< [ 16: 16](RO/H) Invalid VDEC_LTE_TASK_CFG_S[BYPS_REENC_RM] value. */
        uint64_t invalid_reenc_size    : 1;  /**< [ 17: 17](RO/H) Invalid VDEC_LTE_TASK_CFG_S[REENC_SIZE] value. */
        uint64_t invalid_symb_byte_align : 1;/**< [ 18: 18](RO/H) Invalid VDEC_LTE_TASK_CFG_S[SYMB_BYTE_ALIGN] value. */
        uint64_t invalid_dec_bit_order : 1;  /**< [ 19: 19](RO/H) Invalid VDEC_LTE_TASK_CFG_S[DEC_BIT_ORDER] value. */
        uint64_t invalid_dec_byte_order : 1; /**< [ 20: 20](RO/H) Invalid VDEC_LTE_TASK_CFG_S[DEC_BYTE_ORDER] value. */
        uint64_t invalid_reenc_bit_order : 1;/**< [ 21: 21](RO/H) Invalid VDEC_LTE_TASK_CFG_S[REENC_BIT_ORDER] value. */
        uint64_t invalid_reenc_byte_order : 1;/**< [ 22: 22](RO/H) Invalid VDEC_LTE_TASK_CFG_S[REENC_BYTE_ORDER] value. */
        uint64_t reserved_23_63        : 41;
#endif /* Word 0 - End */
    } cnf95xxp2;
    /* struct cavm_vdecx_tc_config_err_flags_reg_cnf95xxp2 cnf95xxp3; */
    /* struct cavm_vdecx_tc_config_err_flags_reg_cnf95xxp2 f95o; */
    /* struct cavm_vdecx_tc_config_err_flags_reg_cnf95xxp2 loki; */
};
typedef union cavm_vdecx_tc_config_err_flags_reg cavm_vdecx_tc_config_err_flags_reg_t;

static inline uint64_t CAVM_VDECX_TC_CONFIG_ERR_FLAGS_REG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_VDECX_TC_CONFIG_ERR_FLAGS_REG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=1))
        return 0x87e043701040ll + 0x8000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=1))
        return 0x87e043701040ll + 0x8000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=1))
        return 0x87e043701040ll + 0x8000ll * ((a) & 0x1);
    __cavm_csr_fatal("VDECX_TC_CONFIG_ERR_FLAGS_REG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_VDECX_TC_CONFIG_ERR_FLAGS_REG(a) cavm_vdecx_tc_config_err_flags_reg_t
#define bustype_CAVM_VDECX_TC_CONFIG_ERR_FLAGS_REG(a) CSR_TYPE_RSL
#define basename_CAVM_VDECX_TC_CONFIG_ERR_FLAGS_REG(a) "VDECX_TC_CONFIG_ERR_FLAGS_REG"
#define busnum_CAVM_VDECX_TC_CONFIG_ERR_FLAGS_REG(a) (a)
#define arguments_CAVM_VDECX_TC_CONFIG_ERR_FLAGS_REG(a) (a),-1,-1,-1

/**
 * Register (RSL) vdec#_tc_control_reg
 *
 * VDEC Internal Control Register
 * This register controls the internal VDEC decoder core.
 */
union cavm_vdecx_tc_control_reg
{
    uint64_t u;
    struct cavm_vdecx_tc_control_reg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t single_task_chnl_en   : 1;  /**< [  4:  4](R/W) Reserved. */
        uint64_t single_task_phy_en    : 1;  /**< [  3:  3](R/W) Reserved. */
        uint64_t single_task_en        : 1;  /**< [  2:  2](R/W) When set to 1, the core will always wait until idle before starting
                                                                 the next task. */
        uint64_t cfg_chk_dis           : 1;  /**< [  1:  1](R/W) When set to 1, disables config checks. Tasks with invalid
                                                                 configurations will still be processed. */
        uint64_t clk_gate_dis          : 1;  /**< [  0:  0](R/W) When set to 1, disables clock gating. */
#else /* Word 0 - Little Endian */
        uint64_t clk_gate_dis          : 1;  /**< [  0:  0](R/W) When set to 1, disables clock gating. */
        uint64_t cfg_chk_dis           : 1;  /**< [  1:  1](R/W) When set to 1, disables config checks. Tasks with invalid
                                                                 configurations will still be processed. */
        uint64_t single_task_en        : 1;  /**< [  2:  2](R/W) When set to 1, the core will always wait until idle before starting
                                                                 the next task. */
        uint64_t single_task_phy_en    : 1;  /**< [  3:  3](R/W) Reserved. */
        uint64_t single_task_chnl_en   : 1;  /**< [  4:  4](R/W) Reserved. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_vdecx_tc_control_reg_s cn; */
};
typedef union cavm_vdecx_tc_control_reg cavm_vdecx_tc_control_reg_t;

static inline uint64_t CAVM_VDECX_TC_CONTROL_REG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_VDECX_TC_CONTROL_REG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=1))
        return 0x87e043701010ll + 0x8000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=1))
        return 0x87e043701010ll + 0x8000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=1))
        return 0x87e043701010ll + 0x8000ll * ((a) & 0x1);
    __cavm_csr_fatal("VDECX_TC_CONTROL_REG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_VDECX_TC_CONTROL_REG(a) cavm_vdecx_tc_control_reg_t
#define bustype_CAVM_VDECX_TC_CONTROL_REG(a) CSR_TYPE_RSL
#define basename_CAVM_VDECX_TC_CONTROL_REG(a) "VDECX_TC_CONTROL_REG"
#define busnum_CAVM_VDECX_TC_CONTROL_REG(a) (a)
#define arguments_CAVM_VDECX_TC_CONTROL_REG(a) (a),-1,-1,-1

/**
 * Register (RSL) vdec#_tc_error_mask_reg
 *
 * VDEC Decoder Error Mask Register
 * This register enables internal decoder errors. Errors reported in
 * VDEC()_TC_ERROR_REG will generate an error signal only when the
 * corresponding bit is set in VDEC()_TC_ERROR_MASK_REG[ERR_MASK].
 */
union cavm_vdecx_tc_error_mask_reg
{
    uint64_t u;
    struct cavm_vdecx_tc_error_mask_reg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t err_mask              : 32; /**< [ 31:  0](R/W) Error mask bits. */
#else /* Word 0 - Little Endian */
        uint64_t err_mask              : 32; /**< [ 31:  0](R/W) Error mask bits. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_vdecx_tc_error_mask_reg_s cn; */
};
typedef union cavm_vdecx_tc_error_mask_reg cavm_vdecx_tc_error_mask_reg_t;

static inline uint64_t CAVM_VDECX_TC_ERROR_MASK_REG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_VDECX_TC_ERROR_MASK_REG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=1))
        return 0x87e043701030ll + 0x8000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=1))
        return 0x87e043701030ll + 0x8000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=1))
        return 0x87e043701030ll + 0x8000ll * ((a) & 0x1);
    __cavm_csr_fatal("VDECX_TC_ERROR_MASK_REG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_VDECX_TC_ERROR_MASK_REG(a) cavm_vdecx_tc_error_mask_reg_t
#define bustype_CAVM_VDECX_TC_ERROR_MASK_REG(a) CSR_TYPE_RSL
#define basename_CAVM_VDECX_TC_ERROR_MASK_REG(a) "VDECX_TC_ERROR_MASK_REG"
#define busnum_CAVM_VDECX_TC_ERROR_MASK_REG(a) (a)
#define arguments_CAVM_VDECX_TC_ERROR_MASK_REG(a) (a),-1,-1,-1

/**
 * Register (RSL) vdec#_tc_error_reg
 *
 * VDEC Decoder Error Register
 * This register reports decoder errors.
 */
union cavm_vdecx_tc_error_reg
{
    uint64_t u;
    struct cavm_vdecx_tc_error_reg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t inv_cfg               : 1;  /**< [  8:  8](R/W1/H) Invalid task configuration -- aborted job.  Further information is
                                                                 captured in VDEC(0..1)_TC_CONFIG_ERR_FLAGS_REG.  Write 1 to toggle. */
        uint64_t reserved_4_7          : 4;
        uint64_t ign_read              : 1;  /**< [  3:  3](R/W1/H) Ignored a read access while another read was in process.  Write 1 to toggle. */
        uint64_t inv_read              : 1;  /**< [  2:  2](R/W1/H) Invalid read access to an out-of-range address.  Write 1 to toggle. */
        uint64_t inv_write             : 1;  /**< [  1:  1](R/W1/H) Invalid write access to an out-of-range address.  Write 1 to toggle. */
        uint64_t inv_start             : 1;  /**< [  0:  0](R/W1/H) Invalid task start.  Write 1 to toggle. */
#else /* Word 0 - Little Endian */
        uint64_t inv_start             : 1;  /**< [  0:  0](R/W1/H) Invalid task start.  Write 1 to toggle. */
        uint64_t inv_write             : 1;  /**< [  1:  1](R/W1/H) Invalid write access to an out-of-range address.  Write 1 to toggle. */
        uint64_t inv_read              : 1;  /**< [  2:  2](R/W1/H) Invalid read access to an out-of-range address.  Write 1 to toggle. */
        uint64_t ign_read              : 1;  /**< [  3:  3](R/W1/H) Ignored a read access while another read was in process.  Write 1 to toggle. */
        uint64_t reserved_4_7          : 4;
        uint64_t inv_cfg               : 1;  /**< [  8:  8](R/W1/H) Invalid task configuration -- aborted job.  Further information is
                                                                 captured in VDEC(0..1)_TC_CONFIG_ERR_FLAGS_REG.  Write 1 to toggle. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_vdecx_tc_error_reg_s cn9; */
    /* struct cavm_vdecx_tc_error_reg_s cnf95xxp1; */
    struct cavm_vdecx_tc_error_reg_cnf95xxp2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t inv_cfg               : 1;  /**< [  8:  8](R/W1C/H) Invalid task configuration -- aborted job.  Further information is
                                                                 captured in VDEC()_TC_CONFIG_ERR_FLAGS_REG. */
        uint64_t reserved_4_7          : 4;
        uint64_t ign_read              : 1;  /**< [  3:  3](R/W1C/H) Ignored a read access while another read was in process. */
        uint64_t inv_read              : 1;  /**< [  2:  2](R/W1C/H) Invalid read access to an out-of-range address. */
        uint64_t inv_write             : 1;  /**< [  1:  1](R/W1C/H) Invalid write access to an out-of-range address. */
        uint64_t inv_start             : 1;  /**< [  0:  0](R/W1C/H) Invalid task start. */
#else /* Word 0 - Little Endian */
        uint64_t inv_start             : 1;  /**< [  0:  0](R/W1C/H) Invalid task start. */
        uint64_t inv_write             : 1;  /**< [  1:  1](R/W1C/H) Invalid write access to an out-of-range address. */
        uint64_t inv_read              : 1;  /**< [  2:  2](R/W1C/H) Invalid read access to an out-of-range address. */
        uint64_t ign_read              : 1;  /**< [  3:  3](R/W1C/H) Ignored a read access while another read was in process. */
        uint64_t reserved_4_7          : 4;
        uint64_t inv_cfg               : 1;  /**< [  8:  8](R/W1C/H) Invalid task configuration -- aborted job.  Further information is
                                                                 captured in VDEC()_TC_CONFIG_ERR_FLAGS_REG. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } cnf95xxp2;
    /* struct cavm_vdecx_tc_error_reg_cnf95xxp2 cnf95xxp3; */
    /* struct cavm_vdecx_tc_error_reg_cnf95xxp2 f95o; */
    /* struct cavm_vdecx_tc_error_reg_cnf95xxp2 loki; */
};
typedef union cavm_vdecx_tc_error_reg cavm_vdecx_tc_error_reg_t;

static inline uint64_t CAVM_VDECX_TC_ERROR_REG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_VDECX_TC_ERROR_REG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=1))
        return 0x87e043701038ll + 0x8000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=1))
        return 0x87e043701038ll + 0x8000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=1))
        return 0x87e043701038ll + 0x8000ll * ((a) & 0x1);
    __cavm_csr_fatal("VDECX_TC_ERROR_REG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_VDECX_TC_ERROR_REG(a) cavm_vdecx_tc_error_reg_t
#define bustype_CAVM_VDECX_TC_ERROR_REG(a) CSR_TYPE_RSL
#define basename_CAVM_VDECX_TC_ERROR_REG(a) "VDECX_TC_ERROR_REG"
#define busnum_CAVM_VDECX_TC_ERROR_REG(a) (a)
#define arguments_CAVM_VDECX_TC_ERROR_REG(a) (a),-1,-1,-1

/**
 * Register (RSL) vdec#_tc_main_reset_reg
 *
 * VDEC Decoder Core Reset Register
 */
union cavm_vdecx_tc_main_reset_reg
{
    uint64_t u;
    struct cavm_vdecx_tc_main_reset_reg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t soft_reset            : 1;  /**< [  0:  0](R/W/H) Reset bit.  Write any value to reset the VDEC decoder core. */
#else /* Word 0 - Little Endian */
        uint64_t soft_reset            : 1;  /**< [  0:  0](R/W/H) Reset bit.  Write any value to reset the VDEC decoder core. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_vdecx_tc_main_reset_reg_s cn; */
};
typedef union cavm_vdecx_tc_main_reset_reg cavm_vdecx_tc_main_reset_reg_t;

static inline uint64_t CAVM_VDECX_TC_MAIN_RESET_REG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_VDECX_TC_MAIN_RESET_REG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=1))
        return 0x87e043701000ll + 0x8000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=1))
        return 0x87e043701000ll + 0x8000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=1))
        return 0x87e043701000ll + 0x8000ll * ((a) & 0x1);
    __cavm_csr_fatal("VDECX_TC_MAIN_RESET_REG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_VDECX_TC_MAIN_RESET_REG(a) cavm_vdecx_tc_main_reset_reg_t
#define bustype_CAVM_VDECX_TC_MAIN_RESET_REG(a) CSR_TYPE_RSL
#define basename_CAVM_VDECX_TC_MAIN_RESET_REG(a) "VDECX_TC_MAIN_RESET_REG"
#define busnum_CAVM_VDECX_TC_MAIN_RESET_REG(a) (a)
#define arguments_CAVM_VDECX_TC_MAIN_RESET_REG(a) (a),-1,-1,-1

/**
 * Register (RSL) vdec#_tc_status0_reg
 *
 * VDEC Internal Status 0 Register
 * This register reports status from the internal decoder core.
 */
union cavm_vdecx_tc_status0_reg
{
    uint64_t u;
    struct cavm_vdecx_tc_status0_reg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t core_stat             : 32; /**< [ 63: 32](RO) reserved. */
        uint64_t reserved_1_31         : 31;
        uint64_t idle                  : 1;  /**< [  0:  0](R/W) Idle status bit. */
#else /* Word 0 - Little Endian */
        uint64_t idle                  : 1;  /**< [  0:  0](R/W) Idle status bit. */
        uint64_t reserved_1_31         : 31;
        uint64_t core_stat             : 32; /**< [ 63: 32](RO) reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_vdecx_tc_status0_reg_s cn9; */
    /* struct cavm_vdecx_tc_status0_reg_s cnf95xxp1; */
    struct cavm_vdecx_tc_status0_reg_cnf95xxp2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t core_stat             : 32; /**< [ 63: 32](RO/H) Reserved. */
        uint64_t reserved_1_31         : 31;
        uint64_t idle                  : 1;  /**< [  0:  0](RO/H) Idle status bit. */
#else /* Word 0 - Little Endian */
        uint64_t idle                  : 1;  /**< [  0:  0](RO/H) Idle status bit. */
        uint64_t reserved_1_31         : 31;
        uint64_t core_stat             : 32; /**< [ 63: 32](RO/H) Reserved. */
#endif /* Word 0 - End */
    } cnf95xxp2;
    /* struct cavm_vdecx_tc_status0_reg_cnf95xxp2 cnf95xxp3; */
    /* struct cavm_vdecx_tc_status0_reg_cnf95xxp2 f95o; */
    /* struct cavm_vdecx_tc_status0_reg_cnf95xxp2 loki; */
};
typedef union cavm_vdecx_tc_status0_reg cavm_vdecx_tc_status0_reg_t;

static inline uint64_t CAVM_VDECX_TC_STATUS0_REG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_VDECX_TC_STATUS0_REG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=1))
        return 0x87e043701020ll + 0x8000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_F95O) && (a<=1))
        return 0x87e043701020ll + 0x8000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=1))
        return 0x87e043701020ll + 0x8000ll * ((a) & 0x1);
    __cavm_csr_fatal("VDECX_TC_STATUS0_REG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_VDECX_TC_STATUS0_REG(a) cavm_vdecx_tc_status0_reg_t
#define bustype_CAVM_VDECX_TC_STATUS0_REG(a) CSR_TYPE_RSL
#define basename_CAVM_VDECX_TC_STATUS0_REG(a) "VDECX_TC_STATUS0_REG"
#define busnum_CAVM_VDECX_TC_STATUS0_REG(a) (a)
#define arguments_CAVM_VDECX_TC_STATUS0_REG(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_VDEC_H__ */
