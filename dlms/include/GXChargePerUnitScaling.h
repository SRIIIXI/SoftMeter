#ifndef GXCHARGE_PER_UNIT_SCALING_H
#define GXCHARGE_PER_UNIT_SCALING_H

#include <string>

/**
Online help:
http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSCharge
*/
class CGXChargePerUnitScaling
{
    signed char m_CommodityScale;
    signed char m_PriceScale;
public:
    // Constructor.
    CGXChargePerUnitScaling();

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSCharge
     *
     * @return Commodity scale.
     */
    signed char GetCommodityScale();

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSCharge
     *
     * @param value
     *            Commodity scale.
     */
    void SetCommodityScale(signed char value);

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSCharge
     *
     * @return Price scale.
     */
    signed char GetPriceScale();

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSCharge
     *
     * @param value
     *            Price scale.
     */
    void SetPriceScale(signed char value);

    std::string ToString();
};
#endif //GXCHARGE_PER_UNIT_SCALING_H
