#include "GXDLMSMBusMasterPortSetup.h"
#include "GXDLMSConverter.h"

#ifndef DLMS_IGNORE_MBUS_MASTER_PORT_SETUP
//Constructor.
CGXDLMSMBusMasterPortSetup::CGXDLMSMBusMasterPortSetup() :
    CGXDLMSMBusMasterPortSetup("", 0)
{
}

//SN Constructor.
CGXDLMSMBusMasterPortSetup::CGXDLMSMBusMasterPortSetup(std::string ln, unsigned short sn) :
    CGXDLMSObject(DLMS_OBJECT_TYPE_MBUS_MASTER_PORT_SETUP, ln, sn)
{
    m_CommSpeed = DLMS_BAUD_RATE_2400;
}

//LN Constructor.
CGXDLMSMBusMasterPortSetup::CGXDLMSMBusMasterPortSetup(std::string ln) :
    CGXDLMSMBusMasterPortSetup(ln, 0)
{
}

/**
The communication speed supported by the port.
*/
DLMS_BAUD_RATE CGXDLMSMBusMasterPortSetup::GetCommSpeed()
{
    return m_CommSpeed;
}

void CGXDLMSMBusMasterPortSetup::SetCommSpeed(DLMS_BAUD_RATE value)
{
    m_CommSpeed = value;
}

// Returns amount of attributes.
int CGXDLMSMBusMasterPortSetup::GetAttributeCount()
{
    return 2;
}

// Returns amount of methods.
int CGXDLMSMBusMasterPortSetup::GetMethodCount()
{
    return 0;
}

void CGXDLMSMBusMasterPortSetup::GetValues(std::vector<std::string>& values)
{
    values.clear();
    std::string ln;
    GetLogicalName(ln);
    values.push_back(ln);
    values.push_back(CGXDLMSConverter::ToString(m_CommSpeed));
}

void CGXDLMSMBusMasterPortSetup::GetAttributeIndexToRead(bool all, std::vector<int>& attributes)
{
    //LN is static and read only once.
    if (all || CGXDLMSObject::IsLogicalNameEmpty(m_LN))
    {
        attributes.push_back(1);
    }
    //CommSpeed
    if (all || CanRead(2))
    {
        attributes.push_back(2);
    }
}

int CGXDLMSMBusMasterPortSetup::GetDataType(int index, DLMS_DATA_TYPE& type)
{
    if (index == 1)
    {
        type = DLMS_DATA_TYPE_OCTET_STRING;
        return DLMS_ERROR_CODE_OK;
    }
    if (index == 2)
    {
        type = DLMS_DATA_TYPE_ENUM;
        return DLMS_ERROR_CODE_OK;
    }
    return DLMS_ERROR_CODE_INVALID_PARAMETER;
}

// Returns value of given attribute.
int CGXDLMSMBusMasterPortSetup::GetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e)
{
    if (e.GetIndex() == 1)
    {
        int ret;
        CGXDLMSVariant tmp;
        if ((ret = GetLogicalName(this, tmp)) != 0)
        {
            return ret;
        }
        e.SetValue(tmp);
        return DLMS_ERROR_CODE_OK;
    }
    if (e.GetIndex() == 2)
    {
        e.SetValue(m_CommSpeed);
        return DLMS_ERROR_CODE_OK;
    }
    return DLMS_ERROR_CODE_INVALID_PARAMETER;
}

// Set value of given attribute.
int CGXDLMSMBusMasterPortSetup::SetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e)
{
    if (e.GetIndex() == 1)
    {
        return SetLogicalName(this, e.GetValue());
    }
    else if (e.GetIndex() == 2)
    {
        m_CommSpeed = (DLMS_BAUD_RATE)e.GetValue().ToInteger();
    }
    else
    {
        return DLMS_ERROR_CODE_INVALID_PARAMETER;
    }
    return DLMS_ERROR_CODE_OK;
}
#endif //DLMS_IGNORE_MBUS_MASTER_PORT_SETUP