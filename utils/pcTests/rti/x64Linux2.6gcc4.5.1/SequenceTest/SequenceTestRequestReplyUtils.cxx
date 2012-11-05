/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "SequenceTestRequestReplyUtils.h"
#include "SequenceTestRequestReplyPlugin.h"


const char* getSLongRequestUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = getSLongRequestTypeSupport::get_type_name();

        if(getSLongRequestTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void getSLongRequestUtils::setTypeData(getSLongRequest& instance, /*in*/ const largo& l1, /*inout*/ const largo& l2)
{
    instance.l1 = l1;
    instance.l2 = l2;
    
}

void getSLongRequestUtils::extractTypeData(getSLongRequest& data, /*in*/ largo& l1, /*inout*/ largo& l2)
{
    l1 = data.l1;
    largoPluginSupport_copy_data(&l2, &data.l2);  
    
}


const char* getSLongReplyUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = getSLongReplyTypeSupport::get_type_name();

        if(getSLongReplyTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void getSLongReplyUtils::setTypeData(getSLongReply& instance, /*inout*/ const largo& l2, /*out*/ const largo& l3, /*out*/ const largo& getSLong_ret)
{
    instance.l2 = l2;
    instance.l3 = l3;
    instance.getSLong_ret = getSLong_ret;            
}

void getSLongReplyUtils::extractTypeData(getSLongReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ largo& l2, /*out*/ largo& l3, /*out*/ largo& getSLong_ret)
{
retcode = (eProsima::DDSRPC::ReturnMessage)data.ddsrpcRetCode;
    largo_finalize(&l2);l2 = data.l2;
    l3 = data.l3;  
    getSLong_ret = data.getSLong_ret;            
}


const char* getStringRequestUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = getStringRequestTypeSupport::get_type_name();

        if(getStringRequestTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void getStringRequestUtils::setTypeData(getStringRequest& instance, /*in*/ const cadena& s1, /*inout*/ const cadena& s2)
{
    instance.s1 = s1;
    instance.s2 = s2;
    
}

void getStringRequestUtils::extractTypeData(getStringRequest& data, /*in*/ cadena& s1, /*inout*/ cadena& s2)
{
    s1 = data.s1;
    cadenaPluginSupport_copy_data(&s2, &data.s2);  
    
}


const char* getStringReplyUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = getStringReplyTypeSupport::get_type_name();

        if(getStringReplyTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void getStringReplyUtils::setTypeData(getStringReply& instance, /*inout*/ const cadena& s2, /*out*/ const cadena& s3, /*out*/ const cadena& getString_ret)
{
    instance.s2 = s2;
    instance.s3 = s3;
    instance.getString_ret = getString_ret;            
}

void getStringReplyUtils::extractTypeData(getStringReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ cadena& s2, /*out*/ cadena& s3, /*out*/ cadena& getString_ret)
{
retcode = (eProsima::DDSRPC::ReturnMessage)data.ddsrpcRetCode;
    cadena_finalize(&s2);s2 = data.s2;
    s3 = data.s3;  
    getString_ret = data.getString_ret;            
}


const char* getStringBoundedRequestUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = getStringBoundedRequestTypeSupport::get_type_name();

        if(getStringBoundedRequestTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void getStringBoundedRequestUtils::setTypeData(getStringBoundedRequest& instance, /*in*/ const dattos& sb1, /*inout*/ const dattos& sb2)
{
    instance.sb1 = sb1;
    instance.sb2 = sb2;
    
}

void getStringBoundedRequestUtils::extractTypeData(getStringBoundedRequest& data, /*in*/ dattos& sb1, /*inout*/ dattos& sb2)
{
    sb1 = data.sb1;
    dattosPluginSupport_copy_data(&sb2, &data.sb2);  
    
}


const char* getStringBoundedReplyUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = getStringBoundedReplyTypeSupport::get_type_name();

        if(getStringBoundedReplyTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void getStringBoundedReplyUtils::setTypeData(getStringBoundedReply& instance, /*inout*/ const dattos& sb2, /*out*/ const dattos& sb3, /*out*/ const dattos& getStringBounded_ret)
{
    instance.sb2 = sb2;
    instance.sb3 = sb3;
    instance.getStringBounded_ret = getStringBounded_ret;            
}

void getStringBoundedReplyUtils::extractTypeData(getStringBoundedReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ dattos& sb2, /*out*/ dattos& sb3, /*out*/ dattos& getStringBounded_ret)
{
retcode = (eProsima::DDSRPC::ReturnMessage)data.ddsrpcRetCode;
    dattos_finalize(&sb2);sb2 = data.sb2;
    sb3 = data.sb3;  
    getStringBounded_ret = data.getStringBounded_ret;            
}

 