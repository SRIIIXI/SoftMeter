#include "GXChargeTable.h"
#include "GXHelpers.h"

CGXChargeTable::CGXChargeTable()
{
    m_ChargePerUnit = 0;
}

std::string& CGXChargeTable::GetIndex()
{
    return m_Index;
}

void CGXChargeTable::SetIndex(std::string& value)
{
    m_Index = value;
}

short CGXChargeTable::GetChargePerUnit()
{
    return m_ChargePerUnit;
}

void CGXChargeTable::SetChargePerUnit(short value)
{
    m_ChargePerUnit = value;
}

std::string CGXChargeTable::ToString()
{
    std::string str = m_Index + " " + GXHelpers::IntToString(m_ChargePerUnit);
    return str;
}