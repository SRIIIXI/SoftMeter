#include "GXDLMSData.h"

#ifndef DLMS_IGNORE_DATA

//Constructor.
CGXDLMSData::CGXDLMSData() :
    CGXDLMSData("", 0)
{
}

//SN Constructor.
CGXDLMSData::CGXDLMSData(std::string ln, unsigned short sn) :
    CGXDLMSObject(DLMS_OBJECT_TYPE_DATA, ln, sn)
{

}

//LN Constructor.
CGXDLMSData::CGXDLMSData(std::string ln) :
    CGXDLMSData(ln, 0)
{

}

// Get value of COSEM Data object.
CGXDLMSVariant&CGXDLMSData::GetValue()
{
    return m_Value;
}

// Set value of COSEM Data object.
void CGXDLMSData::SetValue(CGXDLMSVariant& value)
{
    m_Value = value;
}

// Returns amount of attributes.
int CGXDLMSData::GetAttributeCount()
{
    return 2;
}

// Returns amount of methods.
int CGXDLMSData::GetMethodCount()
{
    return 0;
}

void CGXDLMSData::GetValues(std::vector<std::string>& values)
{
    values.clear();
    std::string ln;
    GetLogicalName(ln);
    values.push_back(ln);
    values.push_back(m_Value.ToString());
}

void CGXDLMSData::GetAttributeIndexToRead(bool all, std::vector<int>& attributes)
{
    //LN is static and read only once.
    if (all || CGXDLMSObject::IsLogicalNameEmpty(m_LN))
    {
        attributes.push_back(1);
    }
    //Value
    if (all || CanRead(2))
    {
        attributes.push_back(2);
    }
}

int CGXDLMSData::GetDataType(int index, DLMS_DATA_TYPE& type)
{
    if (index == 1)
    {
        type = DLMS_DATA_TYPE_OCTET_STRING;
        return DLMS_ERROR_CODE_OK;
    }
    if (index == 2)
    {
        return CGXDLMSObject::GetDataType(index, type);
    }
    return DLMS_ERROR_CODE_INVALID_PARAMETER;
}

// Returns value of given attribute.
int CGXDLMSData::GetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e)
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
        e.SetValue(m_Value);
        return DLMS_ERROR_CODE_OK;
    }
    return DLMS_ERROR_CODE_INVALID_PARAMETER;
}

// Set value of given attribute.
int CGXDLMSData::SetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e)
{
    if (e.GetIndex() == 1)
    {
        return SetLogicalName(this, e.GetValue());
    }
    else if (e.GetIndex() == 2)
    {
        SetValue(e.GetValue());
    }
    else
    {
        return DLMS_ERROR_CODE_INVALID_PARAMETER;
    }
    return DLMS_ERROR_CODE_OK;
}
#endif //DLMS_IGNORE_DATA