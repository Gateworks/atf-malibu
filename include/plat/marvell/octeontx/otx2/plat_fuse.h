/*
 * Copyright (c) 2021 Marvell.
 * This program is provided "as is" without any warranty of any kind,
 * and is distributed under the applicable Marvell proprietary limited use
 * license agreement.
 */

#ifndef __PLAT_FUSE_H__
#define __PLAT_FUSE_H__

/* Utils macro for fuses usage */
#define FUSE_BIT_TO_BYTE_ADDR_SHIFT	0x3
#define FUSE_BIT_TO_BYTE_ADDR(addr)	((addr) >> FUSE_BIT_TO_BYTE_ADDR_SHIFT)
#define FUSE_BYTE_ADDR_MASK		0x7
#define FUSE_BIT_SET			0x1
#define FUSE_GET_VAL(dat, fuse)		(((uint8_t)dat) >> ((fuse) & FUSE_BYTE_ADDR_MASK) & FUSE_BIT_SET)

int plat_fuse_read(int fuse);

#endif /* __PLAT_FUSE_H__ */
