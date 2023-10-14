#include "GXStandardObisCode.h"

CGXStandardObisCode::CGXStandardObisCode(std::vector< std::string > obis,
    std::string& desc,
    std::string& interfaces, std::string& dataType)
{
    m_OBIS.clear();
    m_OBIS.insert(m_OBIS.end(), obis.begin(), obis.end());
    SetDescription(desc);
    SetInterfaces(interfaces);
    SetDataType(dataType);
}

std::vector< std::string >& CGXStandardObisCode::GetOBIS()
{
    return m_OBIS;
}

void CGXStandardObisCode::SetOBIS(std::vector< std::string >& value)
{
    m_OBIS.clear();
    m_OBIS.insert(m_OBIS.end(), value.begin(), value.end());
}

/**
 m_OBIS code description.
*/
std::string& CGXStandardObisCode::GetDescription()
{
    return m_Description;
}
void CGXStandardObisCode::SetDescription(std::string& value)
{
    m_Description = value;
}

/**
 m_Interfaces that are using this m_OBIS code.
*/
std::string& CGXStandardObisCode::GetInterfaces()
{
    return m_Interfaces;
}
void CGXStandardObisCode::SetInterfaces(std::string& value)
{
    m_Interfaces = value;
}

std::string& CGXStandardObisCode::GetDataType()
{
    return m_DataType;
}

void CGXStandardObisCode::SetDataType(std::string value)
{
    m_DataType = value;
}

std::string& CGXStandardObisCode::GetUIDataType()
{
    return m_UIDataType;
}

void CGXStandardObisCode::SetUIDataType(std::string value)
{
    m_UIDataType = value;
}
