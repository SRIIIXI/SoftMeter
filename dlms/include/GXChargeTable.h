#ifndef GXCHARGE_TABLE_H
#define GXCHARGE_TABLE_H

#include <string>
/**
 * Online help:<br>
 * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSCharge
 */
class CGXChargeTable
{
    std::string m_Index;
    short m_ChargePerUnit;
public:
    // Constructor.
    CGXChargeTable();

    /**
    * Online help:<br>
    * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSCharge
    *
    * @return Index.
    */
    std::string& GetIndex();

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSCharge
     *
     * @param value
     *            Index.
     */
    void SetIndex(std::string& value);

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSCharge
     *
     * @return Charge per unit.
     */
    short GetChargePerUnit();

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSCharge
     *
     * @param value
     *            Charge per unit.
     */
    void SetChargePerUnit(short value);

    std::string ToString();
};
#endif //GXCHARGE_TABLE_H
