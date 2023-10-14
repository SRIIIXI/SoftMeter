#include "GXCreditChargeConfiguration.h"
#include "GXHelpers.h"
 // Constructor.
CGXCreditChargeConfiguration::CGXCreditChargeConfiguration()
{
}

std::string& CGXCreditChargeConfiguration::GetCreditReference()
{
    return m_CreditReference;
}

void CGXCreditChargeConfiguration::SetCreditReference(std::string& value)
{
    m_CreditReference = value;
}

std::string& CGXCreditChargeConfiguration::GetChargeReference()
{
    return m_ChargeReference;
}

void CGXCreditChargeConfiguration::SetChargeReference(std::string& value)
{
    m_ChargeReference = value;
}

DLMS_CREDIT_COLLECTION_CONFIGURATION CGXCreditChargeConfiguration::GetCollectionConfiguration()
{
    return m_CollectionConfiguration;
}

void CGXCreditChargeConfiguration::SetCollectionConfiguration(DLMS_CREDIT_COLLECTION_CONFIGURATION value)
{
    m_CollectionConfiguration = value;
}

std::string CGXCreditChargeConfiguration::ToString()
{
    std::string str = m_CreditReference;
    str.append(", ");
    str.append(m_ChargeReference);
    str.append(", ");
    str.append(GXHelpers::IntToString(m_CollectionConfiguration));
    return str;
}