#include "GXChargePerUnitScaling.h"
#include "GXHelpers.h"

 // Constructor.
CGXChargePerUnitScaling::CGXChargePerUnitScaling()
{
}

/**
 * Online help:<br>
 * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSCharge
 *
 * @return Commodity scale.
 */
signed char CGXChargePerUnitScaling::GetCommodityScale()
{
    return m_CommodityScale;
}

/**
 * Online help:<br>
 * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSCharge
 *
 * @param value
 *            Commodity scale.
 */
void CGXChargePerUnitScaling::SetCommodityScale(signed char value)
{
    m_CommodityScale = value;
}

/**
 * Online help:<br>
 * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSCharge
 *
 * @return Price scale.
 */
signed char CGXChargePerUnitScaling::GetPriceScale()
{
    return m_PriceScale;
}

/**
 * Online help:<br>
 * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSCharge
 *
 * @param value
 *            Price scale.
 */
void CGXChargePerUnitScaling::SetPriceScale(signed char value)
{
    m_PriceScale = value;
}

std::string CGXChargePerUnitScaling::ToString()
{
    std::string str = GXHelpers::IntToString(m_CommodityScale);
    str.append(", ");
    str = GXHelpers::IntToString(m_PriceScale);
    return str;
}