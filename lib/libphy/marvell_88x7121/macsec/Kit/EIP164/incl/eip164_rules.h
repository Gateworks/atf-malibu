/* eip164_rules.h
 *
 * EIP-164 Driver Library Packet Classification Rules interface
 *
 */

/* -------------------------------------------------------------------------- */
/*                                                                            */
/*   Module        : ddk164                                                   */
/*   Version       : 3.1.1                                                    */
/*   Configuration : DDK-164-BSD                                              */
/*                                                                            */
/*   Date          : 2021-Aug-12                                              */
/*                                                                            */
/* Copyright (c) 2008-2021 by Rambus, Inc. and/or its subsidiaries.           */
/*                                                                            */
/* Redistribution and use in source and binary forms, with or without         */
/* modification, are permitted provided that the following conditions are     */
/* met:                                                                       */
/*                                                                            */
/* 1. Redistributions of source code must retain the above copyright          */
/* notice, this list of conditions and the following disclaimer.              */
/*                                                                            */
/* 2. Redistributions in binary form must reproduce the above copyright       */
/* notice, this list of conditions and the following disclaimer in the        */
/* documentation and/or other materials provided with the distribution.       */
/*                                                                            */
/* 3. Neither the name of the copyright holder nor the names of its           */
/* contributors may be used to endorse or promote products derived from       */
/* this software without specific prior written permission.                   */
/*                                                                            */
/* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS        */
/* "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT          */
/* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR      */
/* A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT       */
/* HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,     */
/* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT           */
/* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,      */
/* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY      */
/* THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT        */
/* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE      */
/* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.       */
/* -------------------------------------------------------------------------- */

#ifndef EIP164_RULES_H_
#define EIP164_RULES_H_

/*----------------------------------------------------------------------------
 * This module uses (requires) the following interface(s):
 */

/* Driver Framework Device API */
#include "device_types.h"           /* Device_Handle_t */

/* EIP-164 Driver Library Types API */
#include "eip164_types.h"


/*----------------------------------------------------------------------------
 * Definitions and macros
 */

/*----------------------------------------------------------------------------
 * EIP164_Rules_SecTag_Update
 *
 * This function updates the rules for the classification of packets using the
 * SecTAG field for the EIP-164 device identified by IOArea_p parameter.
 *
 * IOArea_p (input)
 *      Pointer to the Device instance I/O area in memory that identifies the
 *      EIP-164 device to be used.
 *
 * ChannelId (input)
 *     The channel number/index to set the SecTAG parsing rules for.
 *
 * SecTag_Rules_p (input)
 *     Pointer to a memory location where the SecTAG parsing and compare rules
 *     for each packet are specified.
 *
 * This function is re-entrant for the same or different Devices.
 *
 * This function can be called concurrently with any other Rules API
 * function for the same or different Device.
 *
 * Return value
 *      EIP164_NO_ERROR : Operation is completed
 *      EIP164_ARGUMENT_ERROR : Passed wrong argument.
 */
EIP164_Error_t
EIP164_Rules_SecTag_Update(
        const EIP164_IOArea_t * const IOArea_p,
        const unsigned int ChannelId,
        const EIP164_Channel_Rule_SecTAG_t * const SecTag_Rules_p);


/*----------------------------------------------------------------------------
 * EIP164_Rules_SecTag_Read
 *
 * This function reads the rules for the classification of packets using the
 * SecTAG field for the EIP-164 device identified by IOArea_p parameter.
 *
 * IOArea_p (input)
 *      Pointer to the Device instance I/O area in memory that identifies the
 *      EIP-164 device to be used.
 *
 * ChannelId (input)
 *     The channel number/index to read the SecTAG parsing rules for.
 *
 * SecTag_Rules_p (input)
 *     Pointer to a memory location where the SecTAG parsing and compare rules
 *     for each packet are stored.
 *
 * This function is re-entrant for the same or different Devices.
 *
 * This function can be called concurrently with any other Rules API
 * function for the same or different Device.
 *
 * Return value
 *      EIP164_NO_ERROR : Operation is completed
 *      EIP164_ARGUMENT_ERROR : Passed wrong argument.
 */
EIP164_Error_t
EIP164_Rules_SecTag_Read(
        const EIP164_IOArea_t * const IOArea_p,
        const unsigned int ChannelId,
        EIP164_Channel_Rule_SecTAG_t * const SecTag_Rules_p);


#endif /* EIP164_RULES_H_ */


/* end of file eip164_rules.h */
