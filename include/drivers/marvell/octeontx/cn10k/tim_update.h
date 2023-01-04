/*
 * Copyright (c) 2019 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __TIM_UPDATE_H__
#define __TIM_UPDATE_H__

#include <libtim.h>

#define SPI_CONFIG_ERR		2
#define SPI_MMAP_ERR		3
#define SPI_IMG_VALIDATE_ERR	4
#define SPI_IMG_UPDATE_ERR	5
#define SPI_BAD_MAGIC_NUMBER	6
#define SPI_BAD_PARAMETER	7
#define SPI_ALREADY_IN_PROGRESS	8
#define VER_MAX_NAME_LENGTH	32
#define SMC_MAX_OBJECTS		32

#ifndef BIT
# define BIT(x)	(1UL << (x)))
#endif

#define VERIFY_LOG_SIZE		1024

/**
 * TIM0 is special and needs to be handled different than other TIMs.
 */
#define TIM0_FILENAME		"tim0.timb"
#define TIM0_FDT_NAME		"tim0"
#define TIM0_OBJECT		"scp_bl1.bin"

/**
 * The default endpoint script is also special since it does not load
 * the GSERP firmware
 */
#define EP_TIM_FILENAME		"ep_script-cn10xx.timb"


enum update_ret {
	/** No errors */
	UPDATE_OK = 0,
	/** Error with the CPIO image */
	UPDATE_CPIO_ERROR = -1,
	/** Invalid TIM found in update */
	UPDATE_TIM_ERROR = -2,
	/** One or more files failed hash check */
	UPDATE_HASH_ERROR = -3,
	/** Update authentication error */
	UPDATE_AUTH_ERROR = -4,
	/** I/O error reading or writing to the flash */
	UPDATE_IO_ERROR = -5,
	/**
	 * Error found that requires all objects to be updated,
	 * i.e. a corrupt object found in the existing flash
	 */
	UPDATE_REQUIRE_FULL = -6,
	/** Out of resources, too many files, etc. */
	UPDATE_NO_MEM = -7,
	/** Problem found with device tree firmware-update section */
	UPDATE_DT_ERROR = -8,
	/** Incomplete file grouping found */
	UPDATE_GROUP_ERROR = -9,
	/** Location or size of an object invalid */
	UPDATE_LOCATION_ERROR = -10,
	/** Unsupported media */
	UPDATE_INVALID_MEDIA = -11,
	/** Invalid alignment of update file */
	UPDATE_BAD_ALIGNMENT = -12,
	/** TIM is missing in an object */
	UPDATE_MISSING_TIM = -13,
	/** File is missing in an object */
	UPDATE_MISSING_FILE = -14,
	/** TIM is missing in flash */
	UPDATE_TIM_MISSING = -15,
	/** I/O issue with eHSM component */
	UPDATE_EHSM_ERROR = -16,
	/** Update rejected due to version check */
	UPDATE_VERSION_CHECK_FAIL = -17,
	/** Bad magic number in update descriptor */
	UPDATE_BAD_DESC_MAGIC = -18,
	/** Unsupported version in update descriptor */
	UPDATE_BAD_DESC_VERSION = -19,
	/** Error mapping update to secure memory */
	UPDATE_MMAP_ERROR = -20,
	/** More space is needed in the work buffer. */
	UPDATE_WORK_BUFFER_TOO_SMALL = -21,
	/**
	 * Returned if an update or clone operation is already running on
	 * another core.
	 */
	UPDATE_ALREADY_IN_PROGRESS = -22,
	/** Failed to register to the media IO driver */
	UPDATE_IO_DEV_REGISTER_ERROR = -23,
	/** Failed to open media I/O driver */
	UPDATE_IO_DEV_OPEN_ERROR = -24,
	/** Error initializing IO device */
	UPDATE_IO_DEV_INIT_ERROR = -25,
	/** Unknown error */
	UPDATE_UNKNOWN_ERROR = -1000,
};

struct smc_update_obj_info {

};

/**
 * Note: the following needs to be updated in U-Boot and other update tools
 * whenever this is changed.
 */
#define UPDATE_MAGIC			0x55504454	/* UPDT */
/** Minimum allowed update version */
#define UPDATE_MIN_VERSION		0x0001
/** Minimum version that includes log support */
#define UPDATE_LOG_VERSION		0x0100
/** Current smc_update_descriptor version */
#define UPDATE_VERSION			0x0100
/** Set to update secondary location */
#define UPDATE_FLAG_BACKUP		BIT(0)
/** Set to update eMMC instead of SPI */
#define UPDATE_FLAG_EMMC		BIT(1)
/** Erase eMMC partition data */
#define UPDATE_FLAG_ERASE_PART		BIT(2)
/** Don't perform version check */
#define UPDATE_FLAG_IGNORE_VERSION 	BIT(3)
/** Always overwrite even if data matches */
#define UPDATE_FLAG_FORCE_WRITE		BIT(4)
/** Erase configuration data after update */
#define UPDATE_FLAG_ERASE_CONFIG	BIT(5)
/** Log update progress */
#define UPDATE_FLAG_LOG_PROGRESS	BIT(6)
/** Set when user parameters are passed */
#define UPDATE_FLAG_USER_PARMS		BIT(15)

/** Offset from the beginning of the flash where the backup image is located */
#define BACKUP_IMAGE_OFFSET		0x2000000

#define SIZE_SMC_UPDATE_DESCRIPTOR_0	80
#define SIZE_SMC_UPDATE_DESCRIPTOR_1	160

/**
 * This descriptor is passed by U-Boot or other software performing an update
 */
struct smc_update_descriptor {
	uint32_t	magic;		/** UPDATE_MAGIC */
	uint16_t	version;	/** Version of descriptor */
	uint16_t	update_flags;	/** Flags passed to update process */
	uint64_t	image_addr;	/** Address of image (CPIO file) */
	uint64_t	image_size;	/** Size of image (CPIO file) */
	uint32_t	bus;		/** SPI BUS number */
	uint32_t	cs;		/** SPI chip select number */
	uint32_t	async_operation; /** use asynchronus SPI operations */
	uint32_t	retcode;	/** Return code for async operations */
	uint64_t	user_addr;	/** Passed to customer function */
	uint64_t	user_size;	/** Passed to customer function */
	uint64_t	user_flags;	/** Passed to customer function */
	uintptr_t	work_buffer;	/** Used for compressed objects */
	uint64_t	work_buffer_size;/** Size of work buffer */
	uintptr_t	output_console;	/** Text output console for update info */
	uint32_t	output_console_size;/** Console buffer size in bytes */
	uint32_t	output_console_end;/** Not used yet */
	uint64_t	reserved2[8];
	struct smc_update_obj_info object_retinfo[SMC_MAX_OBJECTS];
};

struct smc_update_descriptor_prev {
	uint32_t	magic;		/** UPDATE_MAGIC */
	uint16_t	version;	/** Version of descriptor */
	uint16_t	update_flags;	/** Flags passed to update process */
	uint64_t	image_addr;	/** Address of image (CPIO file) */
	uint64_t	image_size;	/** Size of image (CPIO file) */
	uint32_t	bus;		/** SPI BUS number */
	uint32_t	cs;		/** SPI chip select number */
	uint32_t	async_operation; /** use asynchronus SPI operations */
	uint32_t	reserved;	/** Space to add stuff */
	uint64_t	user_addr;	/** Passed to customer function */
	uint64_t	user_size;	/** Passed to customer function */
	uint64_t	user_flags;	/** Passed to customer function */
	uintptr_t	work_buffer;	/** Used for compressed objects */
	uint64_t	work_buffer_size;/** Size of work buffer */
	struct smc_update_obj_info object_retinfo[SMC_MAX_OBJECTS];
};


/* Read Flash */
/**
 * This descriptor is used to read data from flash
 */
struct smc_read_flash_descriptor {
        uint64_t        addr;           /** Physical buffer address */
        uint64_t        offset;         /** Offset in flash */
        uint64_t        length;         /** Length to read */
        uint32_t        bus;            /** SPI BUS number */
        uint32_t        cs;             /** SPI chip select number */
        uint32_t        async_spi;      /** Async SPI operations */
        uint32_t        reserved;       /** Space to add stuff */
};

int spi_smc_read_flash(uintptr_t desc_buf, uint64_t desc_size);

/** This is used for each object (version entry) */
enum smc_version_entry_retcode {
	RET_OK = 0,
	RET_NOT_FOUND = 1,
	RET_TIM_INVALID = 2,
	RET_BAD_HASH = 3,
	RET_NOT_ENOUGH_MEMORY = 4,
	/**
	 * If the names mismatch, this return code is set and the actual name
	 * found is copied into the name field.
	 */
	RET_NAME_MISMATCH = 5,
	RET_TIM_NO_VERSION = 6,
	RET_TIM_NO_HASH = 7,
	RET_HASH_ENGINE_ERROR = 8,
	RET_HASH_NO_MATCH = 9,
	/**
	 * This is returned if the length reported by the TIM header is greater
	 * than the maximum size allowed by the device tree entry.  The TIM
	 * image size will be reported as the entry size.
	 */
	RET_IMAGE_TOO_BIG = 10,
	RET_DEVICE_TREE_ENTRY_ERROR = 11,
	/** I/O error occurred during the copy operation */
	RET_BACKUP_IO_ERROR = 12,
};

struct smc_version_info_entry {
	char name[VER_MAX_NAME_LENGTH];
	struct tim_opaque_data_version_info version;
	uint8_t tim_hash[512 / 8];	/** Hash value stored in the TIM */
	uint8_t obj_hash[512 / 8];	/** Calculated hash value */
	uint64_t tim_address;		/** Address of TIM in flash */
	uint64_t tim_size;		/** Size of TIM in bytes */
	uint64_t max_size;		/** Maximum space for object and TIM */
	uint64_t object_size;		/** Size of flash object in bytes */
	uint64_t object_address;	/** Address of object in flash */
	uint16_t hash_size;		/** Size of hash in bytes */
	uint16_t flags;			/** Flags for this object */
	enum smc_version_entry_retcode retcode;	/** Return code if error */
	uint64_t perform_clone;         /** run clone operation on that image */
	uint64_t reserved[6];		/** Reserved for future growth */
	uint8_t log[VERIFY_LOG_SIZE];	/** Log for object */
};

#define VERSION_FLAG_BACKUP	BIT(0)	/** Set to use backup offset */

/**
 * Set if objects are stored in eMMC, leave zero for SPI NOR
 */
#define VERSION_FLAG_EMMC	BIT(1)

/**
 * If this bit is set, only the object names specified in the objects
 * will be checked, otherwise, all objects will be checked and any data
 * in the objects array will be ignored.
 */
#define SMC_VERSION_CHECK_SPECIFIC_OBJECTS	BIT(2)

/**
 * If set, either the specified or all of the objects will have their hashes
 * verified, otherwise, no verification will be performed.
 */
#define SMC_VERSION_CHECK_VALIDATE_HASH		BIT(3)

/**
 * Set this to copy objects to the backup flash after verification.
 * Do not set this and SCM_VERSION_COPY_TO_BACKUP_EMMC.
 */
#define SMC_VERSION_COPY_TO_BACKUP_FLASH	BIT(4)

/**
 * Set this to copy objects to the backup eMMC after verification.
 * Do not set this and SCM_VERSION_COPY_TO_BACKUP_FLASH.
 */
#define SMC_VERSION_COPY_TO_BACKUP_EMMC		BIT(5)

/**
 * Set this to copy objects to the backup flash offset after verification.
 */
#define SMC_VERSION_COPY_TO_BACKUP_OFFSET	BIT(6)

/**
 * Set this to force copy all objects into backup storage
 */
#define SMC_VERSION_FORCE_COPY_OBJECTS		BIT(7)

#define SMC_VERSION_ASYNC_OPERATION             BIT(8)

/**
 * Maximum number of objects that can return the version info
 */
#define SMC_MAX_VERSION_ENTRIES			32

/** Return code for version info */
enum smc_version_ret {
	VERSION_OK,			/** Header is good */
	/**
	 * The firmware layout has changed so not all objects can be
	 * verified.  Objects are located using the device tree which
	 * is initialized at boot time.
	 */
	FIRMWARE_LAYOUT_CHANGED,
	/**
	 * If the number of objects exceeds the num_objects field then this
	 * is returned and num_objects will contain the number of objects
	 * found.
	 */
	TOO_MANY_OBJECTS,
	INVALID_DEVICE_TREE,		/** firmware-layout section missing */
	VERSION_NOT_SUPPORTED,		/** Version descriptor not supported */
	/** SMC_VERSION_CHECK_VALIDATE_HASH must be set */
	BACKUP_SRC_NOT_VALIDATED,
	/** An object failed the verification stage */
	BACKUP_SRC_FAILED_VALIDATION,
	/** Both the source and destination are the same */
	BACKUP_SRC_AND_DEST_ARE_SAME,
	/** An I/O error with the source occurred copying an object */
	BACKUP_IO_SRC_ERROR,
	/** An I/O error with the destination occurred writing an object */
	BACKUP_IO_DST_ERROR,
	/** An I/O error with the destination occurred erasing the media */
	BACKUP_IO_ERASE_ERROR,
};

#define VERSION_MAGIC		0x4e535256	/** VRSN */
#define VERSION_INFO_VERSION	0x0102		/** 1.1 */

/** Minimum version that includes force clone support */
#define VERSION_FORCE_CLONE_MIN_VERSION	 0x0102

struct smc_version_info {
	uint32_t	magic_number;	/** VRSN */
	uint16_t	version;	/** Version of descriptor */
	uint16_t	version_flags;	/** Flags passed to version process */
	uint32_t	bus;		/** SPI BUS number */
	uint32_t	cs;		/** SPI chip select number */
	uint32_t	target_bus;	/** Target bus used for copying */
	uint32_t	target_cs;	/** Target CS used for copying */
	/*
	 * Note that currently the work buffers are not used since the images
	 * are read from flash in chunks for verification purposes.
	 */
	uintptr_t	work_buffer_addr;/** Used to decompress objects */
	uint64_t	work_buffer_size;/** Size of decompression buffer */
	enum smc_version_ret	retcode;
	/**
	 * On entry, if all objects are to be verified then this contains
	 * the maximum number of objects to verify and this specifies the size
	 * of the objects array.
	 * On exit this will contain the number of objects actually verified.
	 *
	 * If the return code is TOO_MANY_OBJECTS then this will return the
	 * actual number of objects which will be greater than the number
	 * of available entries.
	 */
	uint32_t	num_objects;
	uint32_t	timeout;	/** Timeout in ms */
	uint32_t	reserved32;	/** Pad to 64 bits */
	uint64_t	reserved[4];	/** Reserved for future growth */
	/** Array of objects to verify */
	struct smc_version_info_entry objects[SMC_MAX_VERSION_ENTRIES];
};

int spi_smc_update(uintptr_t desc_buf, uint64_t desc_size,
		   uint64_t dram_end, enum update_ret *uret);

/**
 * Check version and verify objects in flash
 * @param	desc_buf	Address of structure smc_version_info
 * @param	desc_size	Size of data structure
 * @param	dram_end	End of DRAM
 * @param[out]	uret		SPI return code
 *
 * @return	0 for success, otherwise error.
 */
int smc_check_versions(uint64_t desc_buf, uint64_t desc_size,
		       uint64_t dram_end, int *uret);
/**
 * Check if async SPI engine is ready
 */
int async_spi_is_ready(void);

//Asynchronus operations - clone
//States
enum async_clone_operations {
	ACLONE_CHECK_SOURCE=0,
	ACLONE_CHECK_DESTINATION,
	ACLONE_MARK_COPY,
	ACLONE_ERASE_TIM0_DEST,
	ACLONE_COPY_IMAGES,
	ACLONE_CLEANUP,
};

struct async_clone_copy_params {
	struct io_handle *src_handle;
	struct io_handle *dst_handle;
	uint64_t src_object_addr;
	uint64_t src_object_size;
	uint64_t src_tim_addr;
	uint64_t src_tim_size;
};

//Data structures for clone
struct async_clone_data {
	struct smc_version_info *vinfo_source;
	struct smc_version_info *vinfo_destination;
	enum async_clone_operations state;
	struct async_clone_copy_params copy_params;
	bool force_clone;
	bool clone_needed;
	int clone_counter;
	int clone_object_list[SMC_MAX_OBJECTS];
};

enum async_file_check_ret {
	ASYNC_CHECK_CONTINUE,
	ASYNC_CHECK_DONE,
	ASYNC_CHECK_ERROR,
};

enum async_update_operations {
	AUPDATE_VERIF_IMAGE = 0,
	AUPDATE_INIT_UPDATE,
	AUPDATE_PROCESS_TIMS,
	AUPDATE_CHECK_GROUPS,
	AUPDATE_CHECK_FILES,
	AUPDATE_CHECK_FLASH_FILES,
	AUPDATE_CHECK_FLASH_GROUPS,
	AUPDATE_ERASE_EBF_CONFIG,
	AUPDATE_ERASE_TIM0,
	AUPDATE_WRITE_FILES,
	AUPDATE_RESTORE_TIM0,
	AUPDATE_CLEANUP,
};

struct async_update_data {
	struct smc_update_descriptor *desc;
	enum async_update_operations state;
	struct object_entry *obj;
	bool all_present;
	bool old_tim0_saved;
	bool tim0_updated;
	bool update_all;
	bool init_variables;
};
#endif	/* __TIM_UPDATE_H__ */
