#ifndef CGXUNIT_CHARGE_H
#define CGXUNIT_CHARGE_H

#include <vector>
#include "GXChargePerUnitScaling.h"
#include "GXCommodity.h"
#include "GXChargeTable.h"
/**
* Time object. Date part is ignored.
*/
class CGXUnitCharge
{
    /**
    * Charge per unit scaling. <br>
    * Online help:<br>
    * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSCharge
    */
    CGXChargePerUnitScaling m_ChargePerUnitScaling;

    /**
     * Commodity.<br>
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSCharge
     */
    CGXCommodity m_Commodity;

    /**
     * Charge tables.<br>
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSCharge
     */
    std::vector<CGXChargeTable> m_ChargeTables;
public:
    // Constructor.
    CGXUnitCharge();

    /**
    * Online help:<br>
    * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSCharge
    *
    * @return Charge per unit scaling.
    */
    CGXChargePerUnitScaling& GetChargePerUnitScaling();

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSCharge
     *
     * @return Commodity
     */
    CGXCommodity& GetCommodity();

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSCharge
     *
     * @return Charge tables.
     */
    std::vector<CGXChargeTable>& GetChargeTables();

    std::string ToString();

};
#endif //CGXUNIT_CHARGE_H