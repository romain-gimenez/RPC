#ifndef _BasicTypeTest_CLIENT_RPC_SUPPORT_H_
#define _BasicTypeTest_CLIENT_RPC_SUPPORT_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "utils/GenericClientRPC.h"
#include "BasicTypeTestRequestReplySupport.h"


GENERIC_CLIENT_RPC(getOctetClientRPC, getOctetRequestDataWriter, getOctetReplyDataReader);


GENERIC_CLIENT_RPC(getCharClientRPC, getCharRequestDataWriter, getCharReplyDataReader);


GENERIC_CLIENT_RPC(getWCharClientRPC, getWCharRequestDataWriter, getWCharReplyDataReader);


GENERIC_CLIENT_RPC(getShortClientRPC, getShortRequestDataWriter, getShortReplyDataReader);


GENERIC_CLIENT_RPC(getUShortClientRPC, getUShortRequestDataWriter, getUShortReplyDataReader);


GENERIC_CLIENT_RPC(getLongClientRPC, getLongRequestDataWriter, getLongReplyDataReader);


GENERIC_CLIENT_RPC(getULongClientRPC, getULongRequestDataWriter, getULongReplyDataReader);


GENERIC_CLIENT_RPC(getLLongClientRPC, getLLongRequestDataWriter, getLLongReplyDataReader);


GENERIC_CLIENT_RPC(getULLongClientRPC, getULLongRequestDataWriter, getULLongReplyDataReader);


GENERIC_CLIENT_RPC(getFloatClientRPC, getFloatRequestDataWriter, getFloatReplyDataReader);


GENERIC_CLIENT_RPC(getDoubleClientRPC, getDoubleRequestDataWriter, getDoubleReplyDataReader);


GENERIC_CLIENT_RPC(getBooleanClientRPC, getBooleanRequestDataWriter, getBooleanReplyDataReader);


#endif  // _BasicTypeTest_CLIENT_RPC_SUPPORT_H_