#ifndef GXCURRENCY_H
#define GXCURRENCY_H

#include "GXEnums.h"
#include <string>

/**
 * Used currency.<br>
 * Online help:<br>
 * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSCurrency
 */
class CGXCurrency
{
    /**
    * Currency name.
    */
    std::string m_Name;
    /**
     * Currency scale.
     */
    char m_Scale;
    /**
     * Currency unit.
     */
    DLMS_CURRENCY m_Unit;

public:
    // Constructor.
    CGXCurrency();

    /**
     * @return Currency name.
     */
    std::string& GetName();

    /**
     * @param value
     *            Currency name.
     */
    void SetName(std::string& value);

    /**
     * @return Currency scale.
     */
    char GetScale();

    /**
     * @param value
     *            Currency scale.
     */
    void SetScale(char value);

    /**
     * @return Currency unit.
     */
    DLMS_CURRENCY GetUnit();

    /**
     * @param value
     *            Currency unit.
     */
    void SetUnit(DLMS_CURRENCY value);

    std::string ToString();
};
#endif //GXCURRENCY_H
