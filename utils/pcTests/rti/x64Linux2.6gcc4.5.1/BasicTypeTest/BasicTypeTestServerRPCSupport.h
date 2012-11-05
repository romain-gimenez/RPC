#ifndef _BasicTypeTest_SERVER_RPC_SUPPORT_H_
#define _BasicTypeTest_SERVER_RPC_SUPPORT_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "utils/GenericServerRPC.h"
#include "BasicTypeTestRequestReplySupport.h"



GENERIC_SERVER_RPC(getOctetServerRPC, getOctetReplyDataWriter, getOctetRequestDataReader);


GENERIC_SERVER_RPC(getCharServerRPC, getCharReplyDataWriter, getCharRequestDataReader);


GENERIC_SERVER_RPC(getWCharServerRPC, getWCharReplyDataWriter, getWCharRequestDataReader);


GENERIC_SERVER_RPC(getShortServerRPC, getShortReplyDataWriter, getShortRequestDataReader);


GENERIC_SERVER_RPC(getUShortServerRPC, getUShortReplyDataWriter, getUShortRequestDataReader);


GENERIC_SERVER_RPC(getLongServerRPC, getLongReplyDataWriter, getLongRequestDataReader);


GENERIC_SERVER_RPC(getULongServerRPC, getULongReplyDataWriter, getULongRequestDataReader);


GENERIC_SERVER_RPC(getLLongServerRPC, getLLongReplyDataWriter, getLLongRequestDataReader);


GENERIC_SERVER_RPC(getULLongServerRPC, getULLongReplyDataWriter, getULLongRequestDataReader);


GENERIC_SERVER_RPC(getFloatServerRPC, getFloatReplyDataWriter, getFloatRequestDataReader);


GENERIC_SERVER_RPC(getDoubleServerRPC, getDoubleReplyDataWriter, getDoubleRequestDataReader);


GENERIC_SERVER_RPC(getBooleanServerRPC, getBooleanReplyDataWriter, getBooleanRequestDataReader);


#endif  // _BasicTypeTest_SERVER_RPC_SUPPORT_H_