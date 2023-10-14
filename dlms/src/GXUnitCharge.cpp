#include "GXUnitCharge.h"

CGXUnitCharge::CGXUnitCharge()
{
}

CGXChargePerUnitScaling& CGXUnitCharge::GetChargePerUnitScaling() {
    return m_ChargePerUnitScaling;
}

CGXCommodity& CGXUnitCharge::GetCommodity() {
    return m_Commodity;
}

std::vector<CGXChargeTable>& CGXUnitCharge::GetChargeTables()
{
    return m_ChargeTables;
}

std::string CGXUnitCharge::ToString()
{
    std::string str = m_ChargePerUnitScaling.ToString();
    str.append(", ");
    str.append(m_Commodity.ToString());
    str.append(", {");
    for (std::vector<CGXChargeTable>::iterator it = m_ChargeTables.begin(); it != m_ChargeTables.end(); ++it)
    {
        str.append(it->ToString());
        str.append(", ");
    }
    str.append("}");
    return str;
}