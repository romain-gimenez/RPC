#ifndef _FooInterface_CLIENT_RPC_SUPPORT_H_
#define _FooInterface_CLIENT_RPC_SUPPORT_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "utils/GenericClientRPC.h"
#include "FooInterfaceRequestReplySupport.h"


GENERIC_CLIENT_RPC(foo_procedureClientRPC, foo_procedureRequestDataWriter, foo_procedureReplyDataReader);


#endif  // _FooInterface_CLIENT_RPC_SUPPORT_H_