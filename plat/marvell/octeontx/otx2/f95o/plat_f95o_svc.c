/*
 * Copyright (c) 2021 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <debug.h>
#include <runtime_svc.h>
#include <octeontx_svc.h>
#include <platform_svc.h>
#include <platform_irqs_def.h>
#include <octeontx_common.h>
#include <stdint.h>
#include <tools_share/uuid.h>
#include <bphy.h>

uintptr_t otx2_svc_smc_handler(uint32_t smc_fid,
			       u_register_t x1,
			       u_register_t x2,
			       u_register_t x3,
			       u_register_t x4,
			       void *cookie,
			       void *handle,
			       u_register_t flags)
{
	uint64_t ret = 0;
	int i;

	switch (smc_fid) {
	case PLAT_OCTEONTX_INSTALL_BPHY_PSM_ERRINT:
		ret = bphy_psm_install_irq(x1, x2, x3, x4);
		SMC_RET1(handle, ret);
		break;

	case PLAT_OCTEONTX_REMOVE_BPHY_PSM_ERRINT:
		bphy_psm_clear_irq(x1);
		SMC_RET1(handle, 0);
		break;

	case PLAT_OCTEONTX_GET_BPHY_PSM_MAX_IRQ:
		SMC_RET1(handle, BPHY_PSM_IRQS_NUMBER);
		break;

	case PLAT_OCTEONTX_GET_BPHY_PSM_IRQS_BITMASK:
		if (sizeof(uint64_t) * 8 < BPHY_PSM_IRQS_NUMBER)
			WARN("Irq bitmask does not match current SMC transfer size");
		for (i = 0; i < BPHY_PSM_IRQS_NUMBER; i++)
			ret |= (uint64_t)(!plat_is_irq_ns(BPHY_PSM_IRQ(i))) << i;
		SMC_RET1(handle, ret);
		break;

	default:
		WARN("Unimplemented OcteonTX Service Call: 0x%x\n", smc_fid);
		SMC_RET1(handle, SMC_UNK);
	}
}
