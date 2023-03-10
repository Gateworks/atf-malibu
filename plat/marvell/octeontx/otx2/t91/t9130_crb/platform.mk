#
# Copyright (c) 2019 Marvell.
#
# SPDX-License-Identifier:	BSD-3-Clause
# https://spdx.org/licenses
#

PCI_EP_SUPPORT		:= 0

CP_NUM			:= 1
$(eval $(call add_define,CP_NUM))

DOIMAGE_SEC     	:=	tools/marvell/doimage/secure/sec_img_7K.cfg

MARVELL_MOCHI_DRV	:=	drivers/marvell/mochi/ap807_setup.c

BOARD_DIR		:= $(shell dirname $(lastword $(MAKEFILE_LIST)))
include plat/marvell/armada/a8k/common/a8k_common.mk

include plat/marvell/armada/common/marvell_common.mk
