/*
 * Copyright (c) 2016 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <arch.h>
#include <asm_macros.S>
#include <bl_common.h>
#include <cpu_macros.S>
#include <plat_macros.S>
#include <context.h>
#include "wa_cve_2022_23960_bhb_vector.S"

#define OCTEONTX2_CN98XX_MIDR		0x430F0B10
#define OCTEONTX2_CN96XX_MIDR		0x430F0B20
#define OCTEONTX2_CNF95XX_MIDR		0x430F0B30
#define OCTEONTX2_LOKI_MIDR		0x430F0B40
#define OCTEONTX2_F95MM_MIDR		0x430F0B50
#define OCTEONTX2_F95O_MIDR		0x430F0B60

#define OCTEON_TX2_BHB_LOOP_COUNT	U(8)

#if WORKAROUND_CVE_2022_23960
	wa_cve_2022_23960_bhb_vector_table OCTEON_TX2_BHB_LOOP_COUNT, octeontx2
#endif /* WORKAROUND_CVE_2022_23960 */

#define EC_CAVIUM_IO_TRAP		U(0x1f)

func octeontx2_reset_func
#if IMAGE_BL31 && WORKAROUND_CVE_2022_23960
	/*
	 * The octeontx2 generic vectors are overridden to apply errata
         * mitigation on exception entry from lower ELs.
	 */
	adr	x0, wa_cve_vbar_octeontx2
	msr	vbar_el3, x0
#endif /* IMAGE_BL31 && WORKAROUND_CVE_2022_23960 */

	isb
	ret
endfunc octeontx2_reset_func

func octeontx2_core_pwr_dwn
	ret
endfunc octeontx2_core_pwr_dwn

func octeontx2_cluster_pwr_dwn
	ret
endfunc octeontx2_cluster_pwr_dwn

func octeontx2_cpu_reg_dump
	ret
endfunc octeontx2_cpu_reg_dump

func octeontx2_check_wa_cve_2017_5715
#if WORKAROUND_CVE_2017_5715
	mov x0, #ERRATA_APPLIES
#else
	mov x0, #ERRATA_MISSING
#endif
	ret
endfunc octeontx2_check_wa_cve_2017_5715

func octeontx2_check_wa_cve_2018_3639
#if WORKAROUND_CVE_2018_3639
	mov x0, #ERRATA_APPLIES
#else
	mov x0, #ERRATA_MISSING
#endif
	ret
endfunc octeontx2_check_wa_cve_2018_3639

/* ----------------------------------------------
 * void octeontx2_exception_handler(int)
 * Function for handling sync exceptions specific
 * for this platform. x1 argument contains EC
 * from el3_esr.
 * ----------------------------------------------
 */
func octeontx2_exception_handler
/* These errors are handled only in runtime (in BL31) */
#if defined(IMAGE_BL31)
	/* -----------------------------------------------------
	 * Handle Cavium-specific trap - synchronous data abort
	 * with (as per ARM's ARM DDI0487B) EC = 0x1f, which
	 * is IMPLEMENTATION_DEFINED
	 * -----------------------------------------------------
	 */
	cmp	x1, #EC_CAVIUM_IO_TRAP
	b.eq	1f

	/* ------------------------------------------------------
	 * The following handles WFI trapped in EL0.
	 * Right now this only happens when EL0 ISR is returning.
	 * ------------------------------------------------------
	 */
	cmp	x1, #EC_WFE_WFI
	b.eq	2f
#endif /* BL31 */

	/* ---------------------------------------------------
	 * Other errors are unhandled, return to generic code.
	 * ---------------------------------------------------
	 */
	ret
#if defined(IMAGE_BL31)
1:
	/* Restore x0-x5 which was clobbered before entering here */
	ldp     x0, x1, [sp, #CTX_GPREGS_OFFSET + CTX_GPREG_X0]
	ldp     x2, x3, [sp, #CTX_GPREGS_OFFSET + CTX_GPREG_X2]
	ldp     x4, x5, [sp, #CTX_GPREGS_OFFSET + CTX_GPREG_X4]
	b octeontx_io_trap_handler
2:
	/* Restore x0-x5 which was clobbered before entering here */
	ldp     x0, x1, [sp, #CTX_GPREGS_OFFSET + CTX_GPREG_X0]
	ldp     x2, x3, [sp, #CTX_GPREGS_OFFSET + CTX_GPREG_X2]
	ldp     x4, x5, [sp, #CTX_GPREGS_OFFSET + CTX_GPREG_X4]
	b el3_exit_wfi
#endif /* BL31 */
endfunc octeontx2_exception_handler

#if REPORT_ERRATA
/*
 * Errata printing function for octeontx2. Must follow AAPCS.
 */
func octeontx2_errata_report
	ret
endfunc octeontx2_errata_report
#endif

declare_cpu_ops_base octeontx2, OCTEONTX2_CN96XX_MIDR, \
	octeontx2_reset_func, \
	octeontx2_check_wa_cve_2017_5715, \
	octeontx2_check_wa_cve_2018_3639, \
	octeontx2_exception_handler, \
	octeontx2_core_pwr_dwn, \
	octeontx2_cluster_pwr_dwn

declare_cpu_ops_base octeontx2, OCTEONTX2_CNF95XX_MIDR, \
	octeontx2_reset_func, \
	octeontx2_check_wa_cve_2017_5715, \
	octeontx2_check_wa_cve_2018_3639, \
	octeontx2_exception_handler, \
	octeontx2_core_pwr_dwn, \
	octeontx2_cluster_pwr_dwn

declare_cpu_ops_base octeontx2, OCTEONTX2_LOKI_MIDR, \
	octeontx2_reset_func, \
	octeontx2_check_wa_cve_2017_5715, \
	octeontx2_check_wa_cve_2018_3639, \
	octeontx2_exception_handler, \
	octeontx2_core_pwr_dwn, \
	octeontx2_cluster_pwr_dwn

declare_cpu_ops_base octeontx2, OCTEONTX2_CN98XX_MIDR, \
	octeontx2_reset_func, \
	octeontx2_check_wa_cve_2017_5715, \
	octeontx2_check_wa_cve_2018_3639, \
	octeontx2_exception_handler, \
	octeontx2_core_pwr_dwn, \
	octeontx2_cluster_pwr_dwn

declare_cpu_ops_base octeontx2, OCTEONTX2_F95MM_MIDR, \
	octeontx2_reset_func, \
	octeontx2_check_wa_cve_2017_5715, \
	octeontx2_check_wa_cve_2018_3639, \
	octeontx2_exception_handler, \
	octeontx2_core_pwr_dwn, \
	octeontx2_cluster_pwr_dwn

declare_cpu_ops_base octeontx2, OCTEONTX2_F95O_MIDR, \
	octeontx2_reset_func, \
	octeontx2_check_wa_cve_2017_5715, \
	octeontx2_check_wa_cve_2018_3639, \
	octeontx2_exception_handler, \
	octeontx2_core_pwr_dwn, \
	octeontx2_cluster_pwr_dwn
