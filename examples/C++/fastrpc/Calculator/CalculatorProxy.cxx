/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * fastrpc_LICENSE file included in this fastrpc distribution.
 *
 *************************************************************************
 * 
 * @file CalculatorProxy.cxx
 * This source file contains the definition of the proxy for all interfaces.
 *
 * This file was generated by the tool fastrpcgen.
 */

#include "CalculatorProxy.h"
#include "fastrpc/transports/ProxyTransport.h"
#include "CalculatorProtocol.h"

CalculatorProxy::CalculatorProxy(eprosima::rpc::transport::ProxyTransport &transport,
    eprosima::rpc::protocol::CalculatorProtocol &protocol) : Proxy(transport, protocol)
{
    protocol.activateInterface("Calculator");
}

CalculatorProxy::~CalculatorProxy()
{
}

int32_t CalculatorProxy::addition(/*in*/ int32_t value1, /*in*/ int32_t value2)
{
    int32_t addition_ret =
    dynamic_cast<eprosima::rpc::protocol::CalculatorProtocol&>(getProtocol()).Calculator_addition(value1, value2);
    return addition_ret;
}


int32_t CalculatorProxy::subtraction(/*in*/ int32_t value1, /*in*/ int32_t value2)
{
    int32_t subtraction_ret =
    dynamic_cast<eprosima::rpc::protocol::CalculatorProtocol&>(getProtocol()).Calculator_subtraction(value1, value2);
    return subtraction_ret;
}


