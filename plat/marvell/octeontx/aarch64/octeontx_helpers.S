/*
 * Copyright (c) 2016 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <arch.h>
#include <platform_def.h>
#include <asm_macros.S>
#include <assert_macros.S>
#include <cpu_macros.S>
#include <drivers/arm/pl011.h>

	/* Global functions */
	.globl	plat_is_my_cpu_primary
	.globl	plat_get_my_entrypoint
	.globl	plat_secondary_cold_boot_setup
	.globl	plat_crash_console_init
	.globl	plat_crash_console_putc
	.globl	plat_crash_console_flush
	.globl	platform_mem_init
	.globl	octeontx_sec_entry_point

	/* -----------------------------------------------------
	 * unsigned int plat_is_my_cpu_primary(void);
	 *
	 * This function checks if this is the Primary CPU
	 * -----------------------------------------------------
	 */
func plat_is_my_cpu_primary
	mrs	x0, mpidr_el1
	and	x0, x0, #(MPIDR_CLUSTER_MASK | MPIDR_CPU_MASK | MPIDR_NODE_MASK)
	cmp	x0, #OCTEONTX_PRIMARY_CPU
	cset	x0, eq
	ret
endfunc plat_is_my_cpu_primary

	/* -----------------------------------------------------
	 * unsigned long plat_get_my_entrypoint (void);
	 *
	 * Main job of this routine is to distinguish between
	 * a cold and warm boot. If the octeontx_sec_entry_point for
	 * this CPU is present, then it's a warm boot.
	 *
	 * -----------------------------------------------------
	 */
func plat_get_my_entrypoint
	adr	x1, octeontx_sec_entry_point
	ldr	x0, [x1]
	ret
endfunc plat_get_my_entrypoint

	/* -----------------------------------------------------
	 * void plat_secondary_cold_boot_setup (void);
	 *
	 * This function performs any platform specific actions
	 * needed for a secondary cpu after a cold reset. Right
	 * now this is a stub function.
	 * -----------------------------------------------------
	 */
func plat_secondary_cold_boot_setup

#if defined(PLAT_CN10K_FAMILY)
	/* Enable Activity Monitors used by SCP Power Control firmware for cn10k */ 
	mov x1, 0xf
	msr S3_3_C13_C2_5, x1
#endif

	mov_imm	x0, MAILBOX_BASE
	/* Wait until the entrypoint gets populated.
	 * In current implementation it will be always bl31_warm_entrypoint.
	 * Secondary CPU will be trapped until all initializations will be done.
	 */
poll_mailbox:
	ldr	x1, [x0]
	cbz	x1, 1f
	br	x1
1:
	wfe
	b	poll_mailbox
endfunc plat_secondary_cold_boot_setup

	/* ---------------------------------------------
	 * int plat_crash_console_init(void)
	 * Function to initialize the crash console
	 * without a C Runtime to print crash report.
	 * Clobber list : x0, x1, x2, x3, x4
	 * ---------------------------------------------
	 */
func plat_crash_console_init
	/* Register UAA0 as pl011 console */
	mov_imm	x0, 0x87E028000000
	mov_imm	x1, 7273800
	mov_imm	x2, 115200
	b	console_pl011_core_init
endfunc plat_crash_console_init

	/* ---------------------------------------------
	 * int plat_crash_console_putc(int c)
	 * Function to print a character on the crash
	 * console without a C Runtime.
	 * Clobber list : x1, x2
	 * ---------------------------------------------
	 */
func plat_crash_console_putc
#if defined(PLAT_CN10K_FAMILY) && defined(IMAGE_BL31) && defined(SAVE_FATAL_ERRLOGS)
	mov_imm	x1, WORK_BUFFER_BASE
	str	x2, [x1]
	str	x30, [x1, #8]
	str	x3, [x1, #16]
	str	x4, [x1, #24]
	str	x5, [x1, #32]

	mov_imm x1, WORK_BUFFER_CRASHLOG_BASE
	mov_imm x3, WORK_BUFFER_CRASH_MAGIC
	ldr	x2, [x1]
	cmp	x3, x2
	b.eq 	1f
	str	x3, [x1]
	mov_imm	x2, 0
	str	x2, [x1, #CRASHLOG_LEN_OFFSET]
1:
	ldr	x2, [x1, #CRASHLOG_LEN_OFFSET]

	mov_imm	x3, WORK_BUFFER_CRASHLOG_SIZE
	cmp	x3, x2
	b.eq	2f
	add	x3, x1, x2
	strb	w0, [x3, #CRASHLOG_BUF_OFFSET]

	add	x2, x2, #1
	str	x2, [x1, #CRASHLOG_LEN_OFFSET]

2:
	mov_imm x1, WORK_BUFFER_BASE
	ldr	x5, [x1, #32]
	ldr	x4, [x1, #24]
	ldr	x3, [x1, #16]
	ldr	x30, [x1, #8]
	ldr	x2, [x1]

	isb
#endif
	mov_imm	x1, 0x87E028000000
	/* ---------------------------------------------
	 * Link register (x30) is not altered, ret from
	 * console_putc will return from this function
	 * ---------------------------------------------
	 */
	b	console_pl011_core_putc
endfunc plat_crash_console_putc

	/* ---------------------------------------------
	 * int plat_crash_console_flush()
	 * Function to force a write of all buffered
	 * data that hasn't been output.
	 * Out : return -1 on error else return 0.
	 * Clobber list : r0
	 * ---------------------------------------------
	 */
func plat_crash_console_flush
	mov_imm	x0, 0x87E028000000
	b	console_pl011_core_flush
endfunc plat_crash_console_flush

	/* --------------------------------------------------------
	 * void platform_mem_init (void);
	 *
	 * Any memory init, relocation to be done before the
	 * platform boots. Called very early in the boot process.
	 * --------------------------------------------------------
	 */
func platform_mem_init
	ret
endfunc platform_mem_init

	.data
	.align 3

	/* --------------------------------------------------
	 * CPU Secure entry point - resume from suspend
	 * --------------------------------------------------
	 */
octeontx_sec_entry_point:
	.quad	0
