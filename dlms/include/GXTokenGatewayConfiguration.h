#ifndef GXTOKEN_GATEWAY_CONFIGURATION_H
#define GXTOKEN_GATEWAY_CONFIGURATION_H

#include "GXEnums.h"
#include <string>

/**
 * Online help:<br>
 * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSAccount
 */
class CGXTokenGatewayConfiguration
{
    /**
     * Credit reference.<br>
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSAccount
     */
    std::string m_CreditReference;

    /**
     * Token proportion.<br>
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSAccount
     */
    unsigned char m_TokenProportion;
public:
    // Constructor.
    CGXTokenGatewayConfiguration();

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSAccount
     *
     * @return Credit reference.
     */
    std::string& GetCreditReference();

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSAccount
     *
     * @param value
     *            Credit reference.
     */
    void SetCreditReference(std::string& value);

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSAccount
     *
     * @return Token proportion.
     */
    unsigned char GetTokenProportion();

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSAccount
     *
     * @param value
     *            Token proportion.
     */
    void SetTokenProportion(unsigned char value);

    std::string ToString();
};
#endif //GXTOKEN_GATEWAY_CONFIGURATION_H
