#include "EnumYStringTestProxy.h"
#include "EnumYStringTestAsyncSupport.h"
#include "exceptions/ServerInternalException.h"
#include "EnumYStringTestRequestReplyPlugin.h"


EnumYStringTest_getEnumTask::EnumYStringTest_getEnumTask(EnumYStringTest_getEnumCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

EnumYStringTest_getEnumTask::~EnumYStringTest_getEnumTask()
{
}

EnumYStringTest_getEnumCallbackHandler& EnumYStringTest_getEnumTask::getObject()
{
    return m_obj;
}

void* EnumYStringTest_getEnumTask::getReplyInstance()
{
    return &m_reply;
}

void EnumYStringTest_getEnumTask::execute()
{  
    Valores  v2 = VALOR1;    
    Valores  v3 = VALOR1;    
    Valores  getEnum_ret = VALOR1;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	EnumYStringTest_getEnumReplyUtils::extractTypeData(m_reply, retcode, v2, v3, getEnum_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getEnum(v2, v3, getEnum_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void EnumYStringTest_getEnumTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}


EnumYStringTest_getStringTask::EnumYStringTest_getStringTask(EnumYStringTest_getStringCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

EnumYStringTest_getStringTask::~EnumYStringTest_getStringTask()
{
}

EnumYStringTest_getStringCallbackHandler& EnumYStringTest_getStringTask::getObject()
{
    return m_obj;
}

void* EnumYStringTest_getStringTask::getReplyInstance()
{
    return &m_reply;
}

void EnumYStringTest_getStringTask::execute()
{  
    char*  s2 = NULL;    
    char*  s3 = NULL;    
    char*  getString_ret = NULL;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	EnumYStringTest_getStringReplyUtils::extractTypeData(m_reply, retcode, s2, s3, getString_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getString(s2, s3, getString_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void EnumYStringTest_getStringTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}


EnumYStringTest_getStringBoundedTask::EnumYStringTest_getStringBoundedTask(EnumYStringTest_getStringBoundedCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

EnumYStringTest_getStringBoundedTask::~EnumYStringTest_getStringBoundedTask()
{
}

EnumYStringTest_getStringBoundedCallbackHandler& EnumYStringTest_getStringBoundedTask::getObject()
{
    return m_obj;
}

void* EnumYStringTest_getStringBoundedTask::getReplyInstance()
{
    return &m_reply;
}

void EnumYStringTest_getStringBoundedTask::execute()
{  
    char*  sb2 = NULL;    
    char*  sb3 = NULL;    
    char*  getStringBounded_ret = NULL;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	EnumYStringTest_getStringBoundedReplyUtils::extractTypeData(m_reply, retcode, sb2, sb3, getStringBounded_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getStringBounded(sb2, sb3, getStringBounded_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void EnumYStringTest_getStringBoundedTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}