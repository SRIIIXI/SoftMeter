#include "GXCurrency.h"
#include "GXHelpers.h"

// Constructor.
CGXCurrency::CGXCurrency()
{
    m_Scale = 0;
    m_Unit = DLMS_CURRENCY_TIME;
};

/**
 * @return Currency name.
 */
std::string& CGXCurrency::GetName()
{
    return m_Name;
}

/**
 * @param value
 *            Currency name.
 */
void CGXCurrency::SetName(std::string& value)
{
    m_Name = value;
}

/**
 * @return Currency scale.
 */
char CGXCurrency::GetScale()
{
    return m_Scale;
}

/**
 * @param value
 *            Currency scale.
 */
void CGXCurrency::SetScale(char value)
{
    m_Scale = value;
}

/**
 * @return Currency unit.
 */
DLMS_CURRENCY CGXCurrency::GetUnit()
{
    return m_Unit;
}

/**
 * @param value
 *            Currency unit.
 */
void CGXCurrency::SetUnit(DLMS_CURRENCY value)
{
    m_Unit = value;
}

std::string CGXCurrency::ToString()
{
    std::string str = m_Name;
    str.append(", ");
    str.append(GXHelpers::IntToString(m_Scale));
    str.append(", ");
    str.append(GXHelpers::IntToString(m_Unit));
    return str;
}