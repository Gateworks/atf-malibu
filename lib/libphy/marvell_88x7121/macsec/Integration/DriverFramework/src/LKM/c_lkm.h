/* c_lkm.h
 *
 * Configuration Handling for the LKM implementation.
 * A build-level configuration file is included and sanity-checked.
 * Do not edit this file. Edit cs_lkm.h instead.
 */

/*****************************************************************************
* Copyright (c) 2010-2021 by Rambus, Inc. and/or its subsidiaries.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are
* met:
*
* 1. Redistributions of source code must retain the above copyright
* notice, this list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright
* notice, this list of conditions and the following disclaimer in the
* documentation and/or other materials provided with the distribution.
*
* 3. Neither the name of the copyright holder nor the names of its
* contributors may be used to endorse or promote products derived from
* this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
* "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
* A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
* HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
* THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*****************************************************************************/

/*----------------------------------------------------------------
 * get configuration settings from product config file
 */

/* Top-level Hardware platform configuration */
#include "cs_lkm.h"


/* Enables strict argument checking for input parameters */
/*#define LKM_STRICT_ARGS_CHECK */

/* choose from LOG_SEVERITY_INFO, LOG_SEVERITY_WARN, LOG_SEVERITY_CRIT */
#ifndef LKM_LOG_SEVERITY
#define LKM_LOG_SEVERITY LOG_SEVERITY_INFO
#endif

/* LKM_DEVICE_ID
 *
 * PCI device identification required for implementation of Device API
 */
/*#define LKM_DEVICE_ID             0x6018 */

/* LKM_VENDOR_ID
 *
 * PCI device vendor identification required for implementation of Device API
 */
/*#define LKM_VENDOR_ID             0x10EE */

/* LKM_LOG_PREFIX
 *
 * Logging prefix that precedes each trace line in log
 */
#ifndef LKM_LOG_PREFIX
#define LKM_LOG_PREFIX                  ""
#endif

/* LKM_PLATFORM_DEVICE_NAME
 *
 * Platform-specific device name that can be used for looking up
 * device properties
 */
/*#define LKM_PLATFORM_DEVICE_NAME      "Unknown" */

/* LKM_PLATFORM_IRQ_COUNT
 *
 * Platform-specific number of the IRQ's that will be used by the device.
 *
 */
#ifndef LKM_PLATFORM_IRQ_COUNT
#define LKM_PLATFORM_IRQ_COUNT          1
#endif

/* LKM_PLATFORM_IRQ_IDX
 *
 * Platform-specific index of the IRQ that will be used.
 *
 */
#ifndef LKM_PLATFORM_IRQ_IDX
#define LKM_PLATFORM_IRQ_IDX            0
#endif


/* end of file c_lkm.h */
