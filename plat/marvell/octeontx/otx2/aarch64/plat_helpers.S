/*
 * Copyright (c) 2016 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <arch.h>
#include <platform_def.h>
#include <asm_macros.S>
#include <bl_common.h>
#include <assert_macros.S>
#include <cpu_macros.S>
#include <context.h>

	/* Global functions */
	.globl	plat_my_core_pos
	.globl	octeontx_io_trap_handler

	/* -----------------------------------------------------
	 * unsigned int plat_my_core_pos(void);
	 *
	 * result: CorePos = (CoreId  * 4) + ClusterId
	 * -----------------------------------------------------
	 */
func plat_my_core_pos
	mrs	x0, CVM_PN_EL1
	and	x0, x0, #0xFFFF
	ret
endfunc plat_my_core_pos

/* Main entry point for Cavium-specific trapping mechanism */
func octeontx_io_trap_handler

	/*
	 * Save general purpose and ARMv8.3-PAuth registers (if enabled).
	 * If Secure Cycle Counter is not disabled in MDCR_EL3 when
	 * ARMv8.5-PMU is implemented, save PMCR_EL0 and disable Cycle Counter.
	 */
	bl	save_gp_pmcr_pauth_regs

	mov	x0, sp

	/*
	 * Restore the saved C runtime stack value which will become the new
	 * SP_EL0 i.e. EL3 runtime stack. It was saved in the 'cpu_context'
	 * structure prior to the last ERET from EL3.
	 */
	ldr	x12, [x0, #CTX_EL3STATE_OFFSET + CTX_RUNTIME_SP]
	msr	spsel, #MODE_SP_EL0

	/*
	 * Save the SPSR_EL3, ELR_EL3, & SCR_EL3 for more scalability
	 * to use by el3_exit method.
	 *
	 * Since it's custom trap mechanism, we're forced to increment
	 * ELR_EL3 by 4 (for the next instruction) when we get back
	 * to previous ELx.
	 */
	mrs	x16, spsr_el3
	mrs	x17, elr_el3
	add	x17, x17, 4
	mrs	x18, scr_el3
	stp	x16, x17, [x0, #CTX_EL3STATE_OFFSET + CTX_SPSR_EL3]
	str	x18, [x0, #CTX_EL3STATE_OFFSET + CTX_SCR_EL3]

	mov	sp, x12

	/* Go to C trap handler and then immediately drop into el3_exit() */
	bl	octeontx_trap_handler

	b	el3_exit
endfunc octeontx_io_trap_handler

.globl del3t_vector_base
vector_base del3t_vector_base

vector_entry    del3t_trap_handler
        str     x30, [sp, #CTX_GPREGS_OFFSET + CTX_GPREG_LR]
        bl      save_gp_registers

        /*
         * Save the EL3 system registers not really needed to return from
	 * this exception, but more importantly to simulate an exception
	 * return to the kernel, when we return to kernel it is simulated
	 * as an exception return, so kernel will load it's state from
	 * ELR_ELx, SPSR_ELx, which will be programmed to these EL3 sysregs.
         */
        mrs     x0, spsr_el3
        mrs     x1, elr_el3
        stp     x0, x1, [sp, #CTX_EL3STATE_OFFSET + CTX_SPSR_EL3]

        mov     x1, x18

        /* Switch to the runtime stack i.e. SP_EL0 */
        ldr     x2, [sp, #CTX_EL3STATE_OFFSET + CTX_RUNTIME_SP]
        mov     x20, sp
        msr     spsel, #0
        mov     sp, x2

        bl      prepare_elx_kernel_callback

        /* this may never be called */
        b       el3_exit

end_vector_entry del3t_trap_handler
