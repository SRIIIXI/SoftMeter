#include "GXDLMSSNParameters.h"

CGXDLMSSNParameters::CGXDLMSSNParameters(CGXDLMSSettings* settings,
    DLMS_COMMAND command,
    int count,
    int commandType,
    CGXByteBuffer* attributeDescriptor,
    CGXByteBuffer* data)
{
    m_Settings = settings;
    m_BlockIndex = (unsigned short)settings->GetBlockIndex();
    m_Command = command;
    m_Count = count;
    m_RequestType = commandType;
    m_AttributeDescriptor = attributeDescriptor;
    m_Data = data;
    m_MultipleBlocks = false;
    m_Time = 0;
    if (settings != NULL) 
    {
        settings->SetCommand(command);
    }
}

CGXDLMSSettings* CGXDLMSSNParameters::GetSettings()
{
    return m_Settings;
}

DLMS_COMMAND CGXDLMSSNParameters::GetCommand()
{
    return m_Command;
}

int CGXDLMSSNParameters::GetRequestType()
{
    return m_RequestType;
}

void CGXDLMSSNParameters::SetRequestType(int value)
{
    m_RequestType = value;
}

CGXByteBuffer* CGXDLMSSNParameters::GetAttributeDescriptor()
{
    return m_AttributeDescriptor;
}

CGXByteBuffer* CGXDLMSSNParameters::GetData()
{
    return m_Data;
}

struct tm* CGXDLMSSNParameters::GetTime()
{
    return m_Time;
}

void CGXDLMSSNParameters::SetTime(struct tm* value)
{
    m_Time = value;
}

bool CGXDLMSSNParameters::IsMultipleBlocks()
{
    return m_MultipleBlocks;
}

void CGXDLMSSNParameters::SetMultipleBlocks(bool value)
{
    m_MultipleBlocks = value;
}

unsigned short CGXDLMSSNParameters::GetBlockIndex()
{
    return m_BlockIndex;
}

void CGXDLMSSNParameters::SetBlockIndex(unsigned short value)
{
    m_BlockIndex = value;
}

int CGXDLMSSNParameters::GetCount()
{
    return m_Count;
}