/***********************license start***********************************
* Copyright (c) 2021 Marvell.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/

/**
 * @file
 *
 * Functions for dealing with multiple chips organized into a
 * NUMA cluster.
 *
 * <hr>$Revision: 49448 $<hr>
 */

/* None of the current chips support multi-node, so allow the
   optimizer to remove processing the node number */
#define SUPPORT_MULTINODE 0

typedef enum
{
    NODE_0 = 0,
#if SUPPORT_MULTINODE
    NODE_1 = 1,
    NODE_2 = 2,
    NODE_3 = 3,
    NUMA_MAX_NODES = 4
#else
    NUMA_MAX_NODES = 1
#endif
} cavm_node_t;

/**
 * Return the local node number
 *
 * @return Node number
 */
static inline cavm_node_t cavm_numa_local(void) __attribute__ ((always_inline, pure));
static inline cavm_node_t cavm_numa_local(void)
{
#ifndef CAVM_BUILD_HOST
    /* None of the current chips support multi-node, so allow the
       optimizer to remove processing the node number */
    if (SUPPORT_MULTINODE)
    {
        int mpidr_el1;
        MRS_NV(MPIDR_EL1, mpidr_el1);
        int result;
        result = (mpidr_el1 >> 16) & 0xff;
        return NODE_0 + result;
    }
    else
        return NODE_0;
#else
    return NODE_0;
#endif
}

/**
 * Return the master node number
 *
 * @return Node number
 */
static inline cavm_node_t cavm_numa_master(void)
{
    /* None of the current chips support multi-node, so allow the
       optimizer to remove processing the node number */
    if (SUPPORT_MULTINODE)
    {
        extern int __cavm_numa_master_node;
        return __cavm_numa_master_node;
    }
    else
        return NODE_0;
}

/**
 * Get a bitmask of the nodes that exist
 *
 * @return bitmask
 */
extern uint64_t cavm_numa_get_exists_mask(void);

/**
 * Add a node to the exists mask
 *
 * @param node   Node to add
 */
extern void cavm_numa_set_exists(cavm_node_t node);

/**
 * Return true if a node exists
 *
 * @param node   Node to check
 *
 * @return Non zero if the node exists
 */
extern int cavm_numa_exists(cavm_node_t node);

/**
 * Return true if there is only one node
 *
 * @return
 */
extern int cavm_numa_is_only_one();

/**
 * Given a physical address without a node, return the proper physical address
 * for the given node.
 *
 * @param node   Node to create address for
 * @param pa     Base physical address
 *
 * @return Node specific address
 */
static inline uint64_t cavm_numa_get_address(cavm_node_t node, uint64_t pa) __attribute__((pure,always_inline));
static inline uint64_t cavm_numa_get_address(cavm_node_t node, uint64_t pa)
{
    /* None of the current chips support multi-node, so allow the
       optimizer to remove processing the node number */
    if (SUPPORT_MULTINODE)
    {
        if (pa & (1ull << 47))
            pa |= (uint64_t)(node&3) << 44;
        else
            pa |= (uint64_t)(node & 3) << 44; /* CN9XXX uses bits [45:44] for nodes */
    }
    return pa;
}


