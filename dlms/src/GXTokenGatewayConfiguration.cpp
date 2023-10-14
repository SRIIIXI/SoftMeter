#include "GXTokenGatewayConfiguration.h"
#include "GXHelpers.h"

CGXTokenGatewayConfiguration::CGXTokenGatewayConfiguration()
{
};

std::string& CGXTokenGatewayConfiguration::GetCreditReference() {
    return m_CreditReference;
}

void CGXTokenGatewayConfiguration::SetCreditReference(std::string& value) {
    m_CreditReference = value;
}

unsigned char CGXTokenGatewayConfiguration::GetTokenProportion() {
    return m_TokenProportion;
}

void CGXTokenGatewayConfiguration::SetTokenProportion(unsigned char value) {
    m_TokenProportion = value;
}

std::string CGXTokenGatewayConfiguration::ToString()
{
    std::string str = m_CreditReference;
    str.append(", ");
    str.append(GXHelpers::IntToString(m_TokenProportion));
    return str;
}