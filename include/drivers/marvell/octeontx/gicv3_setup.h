/*
 * Copyright (c) 2018 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __GICV3_SETUP_H__
#define __GICV3_SETUP_H__

#include <octeontx_irqs_def.h>

/*
 * It is number of all interrupts configured in GIC.
 * Every GIC interrupt has to be defined in interrupt_array.
 */
#define NUMBER_OF_GIC_INTERRUPTS (1 \
				+ GPIO_SPI_IRQS \
				+ BPHY_PSM_IRQS_NUMBER \
				+ GTI_CWD_SPI_IRQS \
				+ RAS_PPI_IRQS \
				+ MDC_SPI_IRQS \
				+ DSS_SPI_IRQS \
				+ TAD_SPI_IRQS \
				+ MCC_SPI_IRQS \
				+ LMC_SPI_IRQS \
				+ SDEI_SGI_IRQS \
				+ RAS_CORE_SPI_IRQS \
				)


void octeontx_gic_driver_init(void);
void octeontx_gic_init(void);
void octeontx_gic_pcpu_init(void);
void octeontx_gic_cpuif_enable(void);
void octeontx_gic_cpuif_disable(void);

#endif /* __GICV3_SETUP_H__ */
