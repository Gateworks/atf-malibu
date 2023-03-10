/*
 * Copyright (c) 2016 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <debug.h>
#include <lib/psci/psci.h>
#include <runtime_svc.h>
#include <octeontx_svc.h>
#include <stdint.h>
#include <tools_share/uuid.h>
#include <string.h>
#include <octeontx_common.h>
#include <gpio_octeontx.h>
#include <gti_watchdog.h>
#include <errno.h>
#include <libfdt.h>
#include <octeontx_dram.h>
#include <octeontx_trace.h>
#include <platform_svc.h>
#if RAS_EXTENSION
#include <plat_ras.h>
#endif

/*
 * FIXME: UUID should be different for platforms with different set
 *        of SMC calls.
 */
/* OcteonTX OEM Service UUID */
DEFINE_SVC_UUID2(octeontx_svc_uid,
		0xcf98f46f, 0xfa9c, 0x4e5a, 0xa4, 0x3a,
		0x2a, 0x2f, 0x05, 0xb1, 0x45, 0x59);

/* Setup Standard Services */
static int32_t octeontx_svc_setup(void)
{
	return 0;
}

WEAK uintptr_t plat_octeontx_svc_smc_handler(uint32_t smc_fid,
					u_register_t x1,
					u_register_t x2,
					u_register_t x3,
					u_register_t x4,
					void *cookie,
					void *handle,
					u_register_t flags)
{
	WARN("Unimplemented OcteonTX Service Call: 0x%x\n", smc_fid);
	SMC_RET1(handle, SMC_UNK);
}

/*
 * Top-level OEM Service SMC handler
 */
uintptr_t octeontx_svc_smc_handler(uint32_t smc_fid,
				 u_register_t x1,
				 u_register_t x2,
				 u_register_t x3,
				 u_register_t x4,
				 void *cookie,
				 void *handle,
				 u_register_t flags)
{
	int64_t ret = 0;

	VERBOSE("OcteonTX Service Call: 0x%x\n", smc_fid);

	switch (smc_fid) {
	case OCTEONTX_SVC_CALL_COUNT:
		/*
		 * Return the number of Service Calls.
		 */
		SMC_RET1(handle,
			OCTEONTX_NUM_CALLS + PLAT_OCTEONTX_NUM_SMC_CALLS);
		break;

	case OCTEONTX_SVC_UID:
		/* Return UID to the caller */
		SMC_UUID_RET(handle, octeontx_svc_uid);

	case OCTEONTX_SVC_VERSION:
		/* Return the version of current implementation */
		SMC_RET2(handle, PLAT_OCTEONTX_VERSION_MAJOR,
			PLAT_OCTEONTX_VERSION_MINOR);
		break;

	case OCTEONTX_DRAM_SIZE:
		/* Current implementation support only one node */
		if (x1 >= 1){
			ret = 0;
			SMC_RET1(handle, ret);
		}
		ret = octeontx_dram_size();
		SMC_RET1(handle, ret);
		break;

	case OCTEONTX_NODE_COUNT:
		/* Current implementation support only one node */
		ret = 1;
		SMC_RET1(handle, ret);
		break;

	case OCTEONTX_PUTC:
		putchar(x1);
		SMC_RET0(handle);
		break;

	case OCTEONTX_INSTALL_GPIO_INT:
		ret = gpio_install_irq(x1, x2, x3, x4);
		SMC_RET1(handle, ret);
		break;

	case OCTEONTX_REMOVE_GPIO_INT:
		gpio_clear_irq(x1);
		SMC_RET1(handle, 0);
		break;

	case OCTEONTX_INSTALL_WDOG:
		ret = gti_wdog_install_handler(x1, x2, x3, x4);
		SMC_RET1(handle, ret);
		break;

	case OCTEONTX_REMOVE_WDOG:
		ret = gti_wdog_remove_handler();
		SMC_RET1(handle, ret);
		break;

	case OCTEONTX_START_WDOG:
		ret = gti_wdog_start(x1, x2, x3, x4);
		SMC_RET1(handle, ret);
		break;

	case OCTEONTX_RESTORE_WDOG_CTXT:
		ret = gti_wdog_restore_wdog_ctxt();
		SMC_RET1(handle, ret);
		break;

#if defined ARM_TRACE_SECURE_BUFFER
	uint64_t address, size;

	case OCTEONTX_TRC_GET_CPU_BUFSIZE:
		ret = arm_trace_get_cpu_tracebufsize(&size);
		SMC_RET2(handle, ret, size);
		break;

	case OCTEONTX_TRC_ALLOC_SBUF:
		ret = arm_trace_alloc_sbuf(x1, x2, x3, &address);
		SMC_RET2(handle, ret, address);
		break;

	case OCTEONTX_TRC_REGISTER_DRVBUF:
		ret = arm_trace_register_drvbuf(x1, x2);
		SMC_RET1(handle, ret);
		break;

	case OCTEONTX_TRC_COPY_TO_DRVBUF:
		ret = arm_trace_copy_to_drvbuf(x1, x2, x3);
		SMC_RET1(handle, ret);
		break;

	case OCTEONTX_TRC_FREE_SBUF:
		/* Nothing to do here */
		SMC_RET1(handle, ret);
		break;

	case OCTEONTX_TRC_UNREGISTER_DRVBUF:
		ret = arm_trace_unregister_drvbuf(x1, x2);
		SMC_RET1(handle, ret);
		break;
#endif

#ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
	case PLAT_OCTEONTX_SERDES_DBG_GET_MEM:
		SMC_RET4(handle, SMC_OK,
			 SERDES_EYE_DATA_BASE, SERDES_SETTINGS_DATA_BASE,
			 SERDES_PRBS_DATA_BASE);
		break;
#else /* DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS */
	/*
	 * If serdes diagnostic command are disabled return SMC_UNK,
	 * but without warning message.
	 */
	case PLAT_OCTEONTX_SERDES_DBG_GET_MEM:
		SMC_RET3(handle, SMC_UNK, 0, 0);
		break;
#endif /* DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS */

	case OCTEONTX_EDAC:
#if RAS_EXTENSION
		ret = plat_ras_smc_op(x1, x2, x3, x4);
#else
		ret = -EINVAL;
#endif
		SMC_RET1(handle, ret);
		break;

#if !(defined(PLAT_CN10K_FAMILY))
	case OCTEONTX_LPI_PROP_TBL_BASE:
		SMC_RET2(handle, 0, LPI_PROP_TBL_BASE);
		break;
#endif

	default:
		return plat_octeontx_svc_smc_handler(smc_fid, x1, x2, x3, x4,
			cookie, handle, flags);
	}
}

/* Register Standard Service Calls as runtime service */
DECLARE_RT_SVC(
		octeontx_svc,
		OEN_SIP_START,
		OEN_SIP_END,
		SMC_TYPE_FAST,
		octeontx_svc_setup,
		octeontx_svc_smc_handler
);
