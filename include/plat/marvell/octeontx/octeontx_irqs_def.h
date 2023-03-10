/*
 * Copyright (c) 2018 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __OCTEONTX_IRQS_DEF_H__
#define __OCTEONTX_IRQS_DEF_H__

#include <platform_irqs_def.h>

/*******************************************************************************
 * If platform doesn't specify defines for device
 * lets fill it with the default data.
 * If there is no irq of certain type, than -1 is returned by macro.
 ******************************************************************************/

/* UAA definitons */
#ifndef UAA_SPI_IRQ
/* Default there is no UAA device */
#define UAA_SPI_IRQ_DEVS		0x0
#define UAA_SPI_IRQ(dev)		-1
#endif

/* PEM definitions */
#ifndef PEM_SPI_IRQ
/* Default there is no PEM device */
#define PEM_SPI_IRQ_DEVS		0x0
#define PEM_SPI_IRQS_PER_DEV	0x0
#define PEM_SPI_IRQ(dev, irq)	-1
#endif
#ifndef PEM_SPI_MISC_IRQ
/* Default there is no PEM device (or PEM:INT_SUM,RST_INT aren't supported) */
#define PEM_SPI_MISC_IRQ_DEVS		0x0
#define PEM_SPI_MISC_IRQS_PER_DEV	0x0
#define PEM_SPI_MISC_IRQ(dev, irq)	-1
#endif

/* SMMU definitions */
#ifndef SMMU_SPI_IRQ
/* Default there is no SMMU device */
#define SMMU_SPI_IRQ_DEVS		0x0
#define SMMU_SPI_IRQS_PER_DEV	0x0
#define SMMU_SPI_IRQ(dev, irq)	-1
#endif

/* Base SPI for GPIO interrupt to be handled in ATF */
#ifndef GPIO_SPI_IRQ
/* Default there is no GPIO interrupt */
#define GPIO_SPI_IRQS			0x0
#define GPIO_SPI_IRQ(irq)		-1
#endif

/* Default SPI to be used by kernel GPIO driver when intercepting interrupts */
#ifndef GPIO_SPI_IRQ_NSEC
/* Default there is no SPI for kernel GPIO driver */
#define GPIO_SPI_NSEC_IRQS		0x0
#define GPIO_SPI_IRQ_NSEC(irq)	-1
#endif

/* SDEI SGI definitions */
#ifndef SDEI_SGI_IRQ
#define SDEI_SGI_IRQS		0
#define SDEI_SGI_IRQ		(-1)
#endif

/* BPHY definitions */
#ifndef BPHY_PSM_IRQ
#define BPHY_PSM_IRQS_NUMBER	0x0
#define BPHY_PSM_IRQ(irq)		-1
#endif

/* GTI CWD definitions */
#ifndef GTI_CWD_SPI_IRQ
#define GTI_CWD_SPI_IRQS	0x0
#define GTI_CWD_SPI_IRQ(irq)		-1
#endif

/* RAS definitions */
#ifndef RAS_PPI_IRQ
#define RAS_PPI_IRQS		0
#define RAS_PPI_IRQ(irq)	(-1)
#endif

#ifndef MDC_SPI_IRQ
#define MDC_SPI_IRQS		0
#define MDC_SPI_IRQ(irq)	(-1)
#endif

#ifndef MCC_SPI_IRQ
#define MCC_SPI_IRQS		0
#define MCC_SPI_IRQ(irq)	(-1)
#endif

#ifndef LMC_SPI_IRQ
#define LMC_SPI_IRQS		0
#define LMC_SPI_IRQ(irq)	(-1)
#endif

#ifndef RAS_CORE_SPI_IRQS
#define RAS_CORE_SPI_IRQS	0
#define RAS_CORE_SPI_IRQ(irq)	(-1)
#endif

#ifndef DSS_SPI_IRQ
#define DSS_SPI_IRQS		0
#define DSS_SPI_IRQ(irq)	(-1)
#endif

#ifndef TAD_SPI_IRQ
#define TAD_SPI_IRQS		0
#define TAD_SPI_IRQ(irq)	(-1)
#endif
#endif /* __OCTEONTX_IRQS_DEF_H__ */
