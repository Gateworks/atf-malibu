/*
 * Copyright (c) 2016 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

/* SPI driver for OcteonTX (CN8xxx and CN9xxx) */

#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <spi.h>
#include <drivers/delay_timer.h>
#include <octeontx_common.h>
#include <drivers/io/io_storage.h>
#include <assert.h>
#include <drivers/io/io_driver.h>
#include <debug.h>
#include <plat_board_cfg.h>

#include "cavm-csrs-gpio.h"
#include "cavm-csrs-mpi.h"
#include "cavm-csrs-rst.h"

static file_state_t current_file = { 0 };

uint32_t spi_mode;

static int spi_config_cn8xxx(uint64_t spi_clk, uint32_t mode, int cpol,
	int cpha, int spi_con, int cs)
{
	uint64_t sclk;
	union cavm_rst_boot rst_boot;
	union cavm_mpix_cfg mpi_cfg;

	rst_boot.u = CSR_READ(CAVM_RST_BOOT);
	mpi_cfg.u = CSR_READ(CAVM_MPI_CFG);

	sclk = PLL_REF_CLK_CN8XXX * rst_boot.s.pnr_mul;

	switch (cs) {
	case 0:
		mpi_cfg.s.csena0 = 1;
		break;
	case 1:
		mpi_cfg.s.csena1 = 1;
		break;
	case 2:
		mpi_cfg.s.csena2 = 1;
		break;
	case 3:
		mpi_cfg.s.csena3 = 1;
		break;
	default:
		break;
	}
	mpi_cfg.s.clkdiv = (sclk >> 1) / spi_clk;
	mpi_cfg.s.cshi = !!(mode & SPI_CS_HIGH);
	mpi_cfg.s.lsbfirst = !!(mode & SPI_LSB_FIRST);
	mpi_cfg.s.wireor = !!(mode & SPI_3WIRE);
	mpi_cfg.s.idlelo = cpha != cpol;
	mpi_cfg.s.cslate = cpha;
	mpi_cfg.s.enable = 1;
	CSR_WRITE(CAVM_MPI_CFG, mpi_cfg.u);
	return 0;
}

static int spi_config_cn9xxx(uint64_t spi_clk, uint32_t mode, int cpol,
	int cpha, int spi_con, int cs)
{
	uint64_t sclk;
	union cavm_rst_boot rst_boot;
	union cavm_mpix_cfg mpi_cfg;
	mpi_cfg.u = CSR_READ(CAVM_MPIX_CFG(spi_con));

	if (mode & SPI_FORCE_LEGACY_MODE) {
		rst_boot.u = CSR_READ(CAVM_RST_BOOT);
		sclk = PLL_REF_CLK_CN9XXX * rst_boot.s.pnr_mul;
		mpi_cfg.s.legacy_dis = 0; /* Use legacy mode */
	} else {
		sclk = PLL_REF_CLK_CN9XXX; /* With tb100_en use always 100Mhz */
		mpi_cfg.s.legacy_dis = 1; /* We don't use legacy mode */
		mpi_cfg.s.tb100_en = 1; /* Use 100Mhz main reference */
		mpi_cfg.s.cs_espi_en = 0; /* Not using eSPI mode */
		mpi_cfg.s.iomode = CAVM_MPI_IOMODE_E_X1_UNIDIR;
		mpi_cfg.s.cs_sticky = 1;
	}
	mpi_cfg.s.clkdiv = (sclk >> 1) / spi_clk;
	mpi_cfg.s.csena3 = 1;
	mpi_cfg.s.csena2 = 1;
	mpi_cfg.s.csena1 = 1;
	mpi_cfg.s.csena0 = 1;
	mpi_cfg.s.cshi = !!(mode & SPI_CS_HIGH);
	mpi_cfg.s.lsbfirst = !!(mode & SPI_LSB_FIRST);
	mpi_cfg.s.wireor = !!(mode & SPI_3WIRE);
	mpi_cfg.s.tritx = 1;
	mpi_cfg.s.idlelo = cpha != cpol;
	mpi_cfg.s.enable = 1;
	CSR_WRITE(CAVM_MPIX_CFG(spi_con), mpi_cfg.u);

	return 0;
}

int spi_config(uint64_t spi_clk, uint32_t mode, int cpol, int cpha,
		      int spi_con, int cs)
{
	if (cavm_is_model(OCTEONTX_CN8XXX)) {
		return spi_config_cn8xxx(
				spi_clk, mode, cpol, cpha, spi_con, cs);
	} else if (cavm_is_model(OCTEONTX_CN9XXX)) {
		return spi_config_cn9xxx(
				spi_clk, mode, cpol, cpha, spi_con, cs);
	} else {
		return -1;
	}
	return -1;
}

static int spi_xfer_legacy(unsigned char *dout, unsigned char *din, int len,
		    int spi_con, int cs, int last_data)
{
	union cavm_mpix_tx mpi_tx;
	union cavm_mpix_sts mpi_sts;
	int i;

	while (len > 0) {
		int size = MIN(len, MPI_MAX_DATA);

		if (dout) {
			for (i = 0; i < size; i++) {
				if (cavm_is_model(OCTEONTX_CN8XXX))
					CSR_WRITE(CAVM_MPI_DATX(i), *dout++);
				else if (cavm_is_model(OCTEONTX_CN9XXX))
					CSR_WRITE(CAVM_MPIX_DATX(spi_con, i), *dout++);
				else
					return -1;
			}
		}

		len -= size;
		mpi_tx.u = 0;
		mpi_tx.s.csid = cs;
		mpi_tx.s.leavecs = 1;

		if (last_data && len <= 0)
			mpi_tx.s.leavecs = 0;

		mpi_tx.s.txnum = dout ? size : 0;
		mpi_tx.s.totnum = size;
		if (cavm_is_model(OCTEONTX_CN8XXX))
			CSR_WRITE(CAVM_MPI_TX, mpi_tx.u);
		else if (cavm_is_model(OCTEONTX_CN9XXX))
			CSR_WRITE(CAVM_MPIX_TX(spi_con), mpi_tx.u);
		else
			return -1;
		/* Wait for tx/rx to complete */
		do {
			if (cavm_is_model(OCTEONTX_CN8XXX))
				mpi_sts.u = CSR_READ(CAVM_MPI_STS);
			else if (cavm_is_model(OCTEONTX_CN9XXX))
				mpi_sts.u = CSR_READ(CAVM_MPIX_STS(spi_con));
			else
				return -1;
		} while (mpi_sts.s.busy != 0);

		if (din) {
			for (i = 0; i < size; i++) {
				if (cavm_is_model(OCTEONTX_CN8XXX))
					*din++ = CSR_READ(CAVM_MPI_DATX(i));
				else if (cavm_is_model(OCTEONTX_CN9XXX))
					*din++ = CSR_READ(CAVM_MPIX_DATX(spi_con, i));
				else
					return -1;
			}
		}
	}

	return 0;
}

static int spi_xfer_cn9xxx(unsigned char *dout, unsigned char *din, int len,
		    int spi_con, int cs, int last_data, int lsbfirst)
{
	union cavm_mpix_xmit mpi_tx;
	union cavm_mpix_sts mpi_sts;
	int i, j;
	uint64_t data;

	while (len > 0) {
		int size = MIN(len, MPI_MAX_DATA_CN9XXX);

		if (dout) {
			for (i = 0; i * 8 < size; i++) {
				data = 0;
				for (j = 0; i * 8 + j < size && j < 8; j++) {
					if (!lsbfirst) {
						data += ((uint64_t)*dout++)
								<< (j * 8);
					} else {
						data <<= 8;
						data += *dout++;
					}
				}
				CSR_WRITE(
					CAVM_MPIX_WIDE_BUFX(spi_con, i), data);
			}
		}

		len -= size;
		mpi_tx.u = 0;
		mpi_tx.s.csid = cs;
		mpi_tx.s.leavecs = 1;

		if (last_data && len <= 0)
			mpi_tx.s.leavecs = 0;

		mpi_tx.s.txnum = dout ? size : 0;
		mpi_tx.s.totnum = size;
		CSR_WRITE(CAVM_MPIX_XMIT(spi_con), mpi_tx.u);

		/* Wait for tx/rx to complete */
		do {
			mpi_sts.u = CSR_READ(CAVM_MPIX_STS(spi_con));
		} while (mpi_sts.s.busy != 0);

		if (din) {
			for (i = 0; i * 8 < size; i++) {
				data = CSR_READ(
					CAVM_MPIX_WIDE_BUFX(spi_con, i));
				for (j = 0; i * 8 + j < size && j < 8; j++) {
					*din++ = data & UINT8_MAX;
					data >>= 8;
				}
			}
		}
	}

	return 0;
}

static inline int spi_xfer(unsigned char *dout, unsigned char *din, int len,
	int spi_con, int cs, int last_data)
{
	union cavm_mpix_cfg mpi_cfg;

	if (cavm_is_model(OCTEONTX_CN9XXX)) {
		mpi_cfg.u = CSR_READ(CAVM_MPIX_CFG(spi_con));
		if (mpi_cfg.s.legacy_dis) {
			return spi_xfer_cn9xxx(dout, din, len, spi_con, cs,
						last_data, mpi_cfg.s.lsbfirst);
		}
	}

	return spi_xfer_legacy(dout, din, len, spi_con, cs, last_data);
}


int spi_nor_read(uint8_t *buf, int buf_size, uint32_t addr,
			int addr_len, int spi_con, int cs)
{
	uint8_t cmd[9];
	int i;
	int len;
	union cavm_mpix_cfg mpi_cfg;

	if (addr_len != SPI_ADDRESSING_24BIT && addr_len != SPI_ADDRESSING_32BIT) {
		printf("Unsupported addressing mode %d\n", addr_len);
		return -1;
	}

	for (i = 1; i <= (addr_len >> 3); i++)
		cmd[i] = addr >> (addr_len - i * 8);

	/* Address len + command byte */
	len = (addr_len >> 3) + 1;

	if (cavm_is_model(OCTEONTX_CN9XXX) &&
		!(spi_mode & SPI_FORCE_X1_READ) &&
		!(spi_mode & SPI_FORCE_LEGACY_MODE)) {

		cmd[0] = SPI_NOR_CMD_QREAD;
		/* Dummy byte after command is required in Quad SPI mode */
		len++;
		if (spi_xfer(cmd, NULL, len, spi_con, cs, 0))
			return -1;

		/* Set Quad SPI mode for read */
		mpi_cfg.u = CSR_READ(CAVM_MPIX_CFG(spi_con));
		mpi_cfg.s.iomode = CAVM_MPI_IOMODE_E_X4_BIDIR;
		CSR_WRITE(CAVM_MPIX_CFG(spi_con), mpi_cfg.u);
		/* Wait after configuration */
		udelay(10);

		if (spi_xfer(NULL, buf, buf_size, spi_con, cs, 1))
			return -1;

		/* Set X1 mode back */
		mpi_cfg.s.iomode = CAVM_MPI_IOMODE_E_X1_UNIDIR;
		CSR_WRITE(CAVM_MPIX_CFG(spi_con), mpi_cfg.u);
		/* Wait after configuration */
		udelay(10);
	} else {
		if (spi_mode & SPI_FORCE_4B_OPCODE)
			cmd[0] = SPI_NOR_CMD_READ_4B;
		else
			cmd[0] = SPI_NOR_CMD_READ;
		if (spi_xfer(cmd, NULL, len, spi_con, cs, 0))
			return -1;

		if (spi_xfer(NULL, buf, buf_size, spi_con, cs, 1))
			return -1;
	}

	return buf_size;
}

int spi_nor_read_status(uint8_t *sr, int spi_con, int cs)
{
	uint8_t cmd[2];

	cmd[0] = SPI_NOR_CMD_RDSR;
	if (spi_xfer(cmd, NULL, 1, spi_con, cs, 0))
		return -1;
	if (spi_xfer(NULL, sr, 1, spi_con, cs, 1))
		return -1;

	return 0;
}

int spi_nor_write(uint8_t *buf, int buf_size, uint32_t addr,
			int addr_len, int spi_con, int cs)
{
	uint8_t cmd[9], reg;
	int i, timeout = SPI_NOR_PROGRAM_TIMEOUT;
	int xfer_sz = buf_size, wrlen = 256;

	if (addr_len != SPI_ADDRESSING_24BIT &&
	    addr_len != SPI_ADDRESSING_32BIT) {
		printf("%s: Unsupported addressing mode %d\n", __func__, addr_len);
		return -1;
	}

	while (xfer_sz > 0) {
		if (xfer_sz < 256)
			wrlen = xfer_sz;

		cmd[0] = SPI_NOR_CMD_WREN;
		if (spi_xfer(cmd, NULL, 1, spi_con, cs, 1))
			return -1;

		if (spi_mode & SPI_FORCE_4B_OPCODE)
			cmd[0] = SPI_NOR_CMD_PROGRAM_4B;
		else
			cmd[0] = SPI_NOR_CMD_PROGRAM;

		for (i = 1; i <= (addr_len >> 3); i++)
			cmd[i] = addr >> (addr_len - i * 8);

		if (spi_xfer(cmd, NULL, (addr_len >> 3) + 1, spi_con, cs, 0))
			return -1;

		if (spi_xfer(buf, NULL, wrlen, spi_con, cs, 1))
			return -1;

		do {
			i = spi_nor_read_status(&reg, spi_con, cs);
			if (i < 0 || --timeout < 0)
				return -1;

			mdelay(1);
		} while (reg & SPI_STATUS_WIP);

		addr += wrlen;
		buf += wrlen;
		xfer_sz -= wrlen;
	}
	return buf_size;
}

int spi_nor_erase(uint32_t addr, int addr_len, int spi_con, int cs)
{
	uint8_t cmd[5], reg;
	int i, timeout = SPI_NOR_ERASE_TIMEOUT;

	if (addr_len != SPI_ADDRESSING_24BIT &&
	    addr_len != SPI_ADDRESSING_32BIT) {
		printf("%s: SPI%d:CS%d:Unsupported addressing mode %d\n",
			__func__, spi_con, cs, addr_len);
		return -1;
	}
	if (addr & 0xFFF) {
		printf("%s: SPI%d:CS%d:Address not 4K sector aligned %x\n",
			__func__, spi_con, cs, addr);
		return -1;
	}

	cmd[0] = SPI_NOR_CMD_WREN;
	if (spi_xfer(cmd, NULL, 1, spi_con, cs, 1)) {
		printf("%s: SPI%d:CS%d:wren failed\n", __func__,  spi_con, cs);
		return -1;
	}

	if (spi_mode & SPI_FORCE_4B_OPCODE)
		cmd[0] = SPI_NOR_CMD_ERASE_4B;
	else
		cmd[0] = SPI_NOR_CMD_ERASE;
	for (i = 1; i <= (addr_len >> 3); i++)
		cmd[i] = addr >> (addr_len - i * 8);

	if (spi_xfer(cmd, NULL, (addr_len >> 3) + 1, spi_con, cs, 1)) {
		printf("%s: SPI%d:CS%d:erase failed\n", __func__,  spi_con, cs);
		return -1;
	}
	do {
		i = spi_nor_read_status(&reg, spi_con, cs);
		if (i < 0 || --timeout < 0) {
			printf("%s: SPI%d:CS%d:status failed %x\n", __func__,
				spi_con, cs, reg);
			return -1;
		}
		mdelay(1);
	} while (reg & SPI_STATUS_WIP);

	return 0;
}

/*
 * APIs to read from SPI NOR flash
 */

/* ---- */

/* Identify the device type as spi */
static io_type_t device_type_spi(void)
{
	return IO_TYPE_SPI;
}

static int spi_block_open(io_dev_info_t *dev_info, const uintptr_t spec,
			     io_entity_t *entity)
{
	int result = -ENOMEM;
	const io_block_spec_t *block_spec = (io_block_spec_t *)spec;

	/* Since we need to track open state for seek() we only allow one open
	 * spec at a time. When we have dynamic memory we can malloc and set
	 * entity->info.
	 */
	if (current_file.in_use == 0) {
		assert(block_spec != NULL);
		assert(entity != NULL);

		current_file.in_use = 1;
		// FIXME current_file.cs = block_spec->offset;
		/* File cursor offset for seek and incremental reads etc. */
		current_file.file_pos = 0;
		current_file.offset_address = block_spec->offset;
		current_file.length = block_spec->length;
		current_file.spi_con = plat_octeontx_bcfg->bcfg.boot_dev.controller;
		current_file.cs = plat_octeontx_bcfg->bcfg.boot_dev.cs;
		entity->info = (uintptr_t)&current_file;

		return spi_config(CONFIG_SPI_FREQUENCY, spi_mode, 0, 0,
				  current_file.spi_con, current_file.cs);
	} else {
		WARN("An SPI device is already active. Close first.\n");
	}

	return result;
}

static int spi_block_seek(io_entity_t *entity, int mode,
			     signed long long offset)
{
	int result = -ENOENT;

	/* We only support IO_SEEK_SET and CUR for the moment. */
	if (mode == IO_SEEK_SET) {
		assert(entity != NULL);

		/* TODO: can we do some basic limit checks on seek? */
		((file_state_t *)entity->info)->file_pos = offset;
		result = 0;
	} else if (mode == IO_SEEK_CUR) {
		assert(entity != NULL);

		/* TODO: can we do some basic limit checks on seek? */
		((file_state_t *)entity->info)->file_pos += offset;
		result = 0;
	}

	return result;
}

static inline void spi_update_addr_mode(int *addr_mode)
{
	if (cavm_is_model(OCTEONTX_CN8XXX)) {
		int boot_method;

		boot_method = CSR_READ(CAVM_GPIO_STRAP) & 0xF;
		if (boot_method == CAVM_RST_BOOT_METHOD_E_SPI32)
			*addr_mode = SPI_ADDRESSING_32BIT;
	}
}

static int spi_block_read(io_entity_t *entity, uintptr_t buffer,
			     size_t length, size_t *length_read)
{
	file_state_t *fp;
	ssize_t ret;
	int addr_mode = SPI_ADDRESSING_24BIT;
	assert(entity != NULL);
	assert(buffer != (uintptr_t)NULL);
	assert(length_read != NULL);

	fp = (file_state_t *)entity->info;

	spi_update_addr_mode(&addr_mode);
	ret = spi_nor_read((void *)buffer, length,
			   fp->offset_address + fp->file_pos,
			   addr_mode, fp->spi_con, fp->cs);
	if (ret < 0)
		return ret;

	*length_read = ret;
	fp->file_pos += ret;

	return 0;
}

static int spi_block_close(io_entity_t *entity)
{
	assert(entity != NULL);

	entity->info = 0;

	/* This would be a mem free() if we had malloc.*/
	memset((void *)&current_file, 0, sizeof(current_file));

	return 0;
}

static int spi_block_size(io_entity_t *entity, size_t *length)
{
	*length = current_file.length;
	return 0;
}

static int spi_dev_init(io_dev_info_t *dev_info, const uintptr_t init_params)
{
	if (init_params != (uintptr_t)NULL)
		spi_mode = *(int *)init_params;
	return 0;
}

static int spi_dev_close(io_dev_info_t *dev_info)
{
	/* NOP */
	/* TODO: Consider tracking open files and cleaning them up here */
	return 0;
}


static const io_dev_funcs_t spi_dev_funcs = {
	.type = device_type_spi,
	.open = spi_block_open,
	.seek = spi_block_seek,
	.size = spi_block_size,
	.read = spi_block_read,
	.write = NULL,
	.close = spi_block_close,
	.dev_init = spi_dev_init,
	.dev_close = spi_dev_close,
};


/* No state associated with this device so structure can be const */
static const io_dev_info_t spi_dev_info = {
	.funcs = &spi_dev_funcs,
	.info = (uintptr_t)NULL
};

/* Open a connection to the spi device */
static int spi_dev_open(const uintptr_t dev_spec __attribute__((unused)),
			   io_dev_info_t **dev_info)
{
	assert(dev_info != NULL);
	*dev_info = (io_dev_info_t *)&spi_dev_info; /* cast away const */

	return 0;
}

static const io_dev_connector_t spi_dev_connector = {
	.dev_open = spi_dev_open
};

/* Register the spi driver with the IO abstraction */
int register_io_dev_spi(const io_dev_connector_t **dev_con)
{
	int result;
	assert(dev_con != NULL);

	result = io_register_device(&spi_dev_info);
	if (result == 0)
		*dev_con = &spi_dev_connector;

	return result;
}
