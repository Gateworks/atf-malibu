/*
 * Copyright (c) 2017 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <bl_common.h>
#include <desc_image_load.h>
#include <plat/common/platform.h>
#include <platform_def.h>


/*******************************************************************************
 * Following descriptor provides BL image/ep information that gets used
 * by BL2 to load the images and also subset of this information is
 * passed to next BL image. The image loading sequence is managed by
 * populating the images in required loading order. The image execution
 * sequence is managed by populating the `next_handoff_image_id` with
 * the next executable image id.
 ******************************************************************************/
static bl_mem_params_node_t bl2_mem_params_descs[] = {
#ifdef SCP_BL2_BASE
	/* Fill SCP_BL2 related information if it exists */
    {
	    .image_id = SCP_BL2_IMAGE_ID,

	    SET_STATIC_PARAM_HEAD(ep_info, PARAM_IMAGE_BINARY,
		    VERSION_2, entry_point_info_t, SECURE | NON_EXECUTABLE),

	    SET_STATIC_PARAM_HEAD(image_info, PARAM_IMAGE_BINARY,
		    VERSION_2, image_info_t, 0),
	    .image_info.image_base = SCP_BL2_BASE,
	    .image_info.image_max_size = PLAT_CSS_MAX_SCP_BL2_SIZE,

	    .next_handoff_image_id = INVALID_IMAGE_ID,
    },
#endif /* SCP_BL2_BASE */

#ifdef EL3_PAYLOAD_BASE
	/* Fill EL3 payload related information (BL31 is EL3 payload)*/
    {
	    .image_id = BL31_IMAGE_ID,

	    SET_STATIC_PARAM_HEAD(ep_info, PARAM_EP,
		    VERSION_2, entry_point_info_t,
		    SECURE | EXECUTABLE | EP_FIRST_EXE),
	    .ep_info.pc = EL3_PAYLOAD_BASE,
	    .ep_info.spsr = SPSR_64(MODE_EL3, MODE_SP_ELX,
		    DISABLE_ALL_EXCEPTIONS),

	    SET_STATIC_PARAM_HEAD(image_info, PARAM_EP,
		    VERSION_2, image_info_t,
		    IMAGE_ATTRIB_PLAT_SETUP | IMAGE_ATTRIB_SKIP_LOADING),

	    .next_handoff_image_id = INVALID_IMAGE_ID,
    },

#else /* EL3_PAYLOAD_BASE */

	/* Fill BL31 related information */
    {
	    .image_id = BL31_IMAGE_ID,

	    SET_STATIC_PARAM_HEAD(ep_info, PARAM_EP,
		    VERSION_2, entry_point_info_t,
		    SECURE | EXECUTABLE | EP_FIRST_EXE),
	    .ep_info.pc = BL31_BASE,
	    .ep_info.spsr = SPSR_64(MODE_EL3, MODE_SP_ELX,
		    DISABLE_ALL_EXCEPTIONS),
#if DEBUG
	    .ep_info.args.arg1 = ARM_BL31_PLAT_PARAM_VAL,
#endif

	    SET_STATIC_PARAM_HEAD(image_info, PARAM_EP,
		    VERSION_2, image_info_t, IMAGE_ATTRIB_PLAT_SETUP),
	    .image_info.image_base = BL31_BASE,
	    .image_info.image_max_size = BL31_LIMIT - BL31_BASE,

# ifdef BL32_BASE
	    .next_handoff_image_id = BL32_IMAGE_ID,
# else
	    .next_handoff_image_id = BL33_IMAGE_ID,
# endif
    },

# ifdef BL32_BASE
	/* Fill BL32 related information */
    {
	    .image_id = BL32_IMAGE_ID,

	    SET_STATIC_PARAM_HEAD(ep_info, PARAM_EP,
		    VERSION_2, entry_point_info_t, SECURE | EXECUTABLE),
	    .ep_info.pc = BL32_BASE,

	    SET_STATIC_PARAM_HEAD(image_info, PARAM_EP,
		    VERSION_2, image_info_t, 0),
	    .image_info.image_base = BL32_BASE,
	    .image_info.image_max_size = BL32_LIMIT - BL32_BASE,

	    .next_handoff_image_id = BL33_IMAGE_ID,
    },
# endif /* BL32_BASE */

	/* Fill BL33 related information */
    {
	    .image_id = BL33_IMAGE_ID,
	    SET_STATIC_PARAM_HEAD(ep_info, PARAM_EP,
		    VERSION_2, entry_point_info_t, NON_SECURE | EXECUTABLE),
# ifdef PRELOADED_BL33_BASE
	    .ep_info.pc = PRELOADED_BL33_BASE,

	    SET_STATIC_PARAM_HEAD(image_info, PARAM_EP,
		    VERSION_2, image_info_t, IMAGE_ATTRIB_SKIP_LOADING),
# else
	    .ep_info.pc = NS_IMAGE_BASE,

	    SET_STATIC_PARAM_HEAD(image_info, PARAM_EP,
		    VERSION_2, image_info_t, 0),
	    .image_info.image_base = NS_IMAGE_BASE,
	    .image_info.image_max_size = NS_IMAGE_MAX_SIZE,
# endif /* PRELOADED_BL33_BASE */

	    .next_handoff_image_id = INVALID_IMAGE_ID,

# ifdef NT_FW_CONFIG
    },
	/* Fill NT_FW_CONFIG related information, if present */
    {
	    .image_id = NT_FW_CONFIG_ID,
	    SET_STATIC_PARAM_HEAD(ep_info, PARAM_IMAGE_BINARY,
		    VERSION_2, entry_point_info_t, NON_SECURE | NON_EXECUTABLE),
	    SET_STATIC_PARAM_HEAD(image_info, PARAM_IMAGE_BINARY,
		    VERSION_2, image_info_t, 0),

	    .image_info.image_base = NT_FW_CONFIG_BASE,
	    .image_info.image_max_size = NT_FW_CONFIG_LIMIT,

	    .next_handoff_image_id = INVALID_IMAGE_ID,

# endif /* NT_FW_CONFIG */
    }

#endif /* EL3_PAYLOAD_BASE */
};

REGISTER_BL_IMAGE_DESCS(bl2_mem_params_descs)
