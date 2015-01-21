/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * rpcdds_LICENSE file included in this rpcdds distribution.
 *
 *************************************************************************
 * 
 * @file CalculatorClientExample.cxx
 * This source file shows a simple example of how to create a proxy for an interface.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "CalculatorProxy.h"
#include "Calculator.h"
#include "CalculatorDDSProtocol.h"
#include "rpcdds/transports/dds/RTPSProxyTransport.h"
#include "rpcdds/exceptions/Exceptions.h"
#include "rpcdds/utils/Utilities.h"

#include <iostream>

using namespace eprosima::rpc;
using namespace ::exception;
using namespace ::transport::dds;
using namespace ::protocol::dds;

class Calculator_additionHandler : public Calculator_additionCallbackHandler
{
    public:

        void addition(/*out*/ int32_t addition_ret)
        {
            std::cout << "Addition result: " << addition_ret << std::endl;
        }

        void on_exception(const eprosima::rpc::exception::SystemException &ex)
        {
            std::cout << "Exception: " << ex.what() << std::endl;
        }
};

class Calculator_subtractionHandler : public Calculator_subtractionCallbackHandler
{
    public:

        void subtraction(/*out*/ int32_t subtraction_ret)
        {
            std::cout << "Subtraction result: " << subtraction_ret << std::endl;
        }

        void on_exception(const eprosima::rpc::exception::SystemException &ex)
        {
            std::cout << "Exception: " << ex.what() << std::endl;
        }
};

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        int32_t value1 = 0;
        int32_t value2 = 0;

        if(sscanf(argv[1], "%d", &value1) == 1)
        {
            if(sscanf(argv[2], "%d", &value2) == 1)
            {
                Calculator_additionHandler addHandler;
                Calculator_subtractionHandler subHandler;
                CalculatorProtocol *protocol = NULL;
                RTPSProxyTransport *transport = NULL;
                CalculatorProxy *proxy = NULL;

                // Creation of the proxy for interface "Calculator".
                try
                {
                    protocol = new CalculatorProtocol();
                    transport = new RTPSProxyTransport("CalculatorService", "Instance");
                    proxy = new CalculatorProxy(*transport, *protocol);
                }
                catch(InitializeException &ex)
                {
                    std::cout << ex.what() << std::endl;
                    return -1;
                }

                // Create and initialize return value.
                int32_t  addition_ret = 0;

                // Call to remote procedure "addition".
                try
                {
                    proxy->addition_async(addHandler, value1, value2);
                }
                catch(SystemException &ex)
                {
                    std::cout << ex.what() << std::endl;
                }

                try
                {
                    proxy->subtraction_async(subHandler, value1, value2);
                }
                catch(SystemException &ex)
                {
                    std::cout << ex.what() << std::endl;
                }

                // Wait 10 seconds to received the server's replies.
                eprosima::rpc::sleep(10000);

                delete proxy ;
                delete transport ;
                delete protocol ;
            }
            else
            {
                std::cout << "Bad parameter (second value)" << std::endl;
            }
        }
        else
        {
            std::cout << "Bad parameter (first value)" << std::endl;
        }
    }
    else
    {
            std::cout << "Usage: CalculatorClient <first value> <second value>" << std::endl;
    }
   
    return 0;
}


