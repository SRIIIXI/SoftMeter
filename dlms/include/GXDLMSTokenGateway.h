#ifndef GXTOKEN_GATEWAY_H
#define GXTOKEN_GATEWAY_H

#include "GXIgnore.h"

#ifndef DLMS_IGNORE_TOKEN_GATEWAY

#include "GXDLMSObject.h"

/**
Online help:
http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSTokenGateway
*/
class CGXDLMSTokenGateway : public CGXDLMSObject
{
    // Token.
    //  Online help:<br/>
    //  http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSTokenGateway
    CGXByteBuffer m_Token;

    // Time.
    //  Online help:<br/>
    //  http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSTokenGateway
    CGXDateTime m_Time;

    // Descriptions.
    //  Online help:<br/>
    //  http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSTokenGateway
    std::vector<std::string> m_Descriptions;

    // Token Delivery method.
    //  Online help:<br/>
    //  http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSTokenGateway
    DLMS_TOKEN_DELIVERY m_DeliveryMethod;

    //  Token status code.
    //  Online help:<br/>
    //  http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSTokenGateway
    DLMS_TOKEN_STATUS_CODE m_Status;

    // Token data value.
    //  Online help:<br/>
    //  http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSTokenGateway
    std::string m_DataValue;
public:
    //Constructor.
    CGXDLMSTokenGateway();

    //SN Constructor.
    CGXDLMSTokenGateway(std::string ln, unsigned short sn);

    //LN Constructor.
    CGXDLMSTokenGateway(std::string ln);

    /**
   * Online help:<br>
   * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSTokenGateway
   *
   * @return Token.
   */
    CGXByteBuffer& GetToken()
    {
        return m_Token;
    }

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSTokenGateway
     *
     * @param value
     *            Token.
     */
    void SetToken(CGXByteBuffer& value)
    {
        m_Token = value;
    }

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSTokenGateway
     *
     * @return Time.
     */
    CGXDateTime& GetTime()
    {
        return m_Time;
    }

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSTokenGateway
     *
     * @param value
     *            Time.
     */
    void SetTime(CGXDateTime& value)
    {
        m_Time = value;
    }

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSTokenGateway
     *
     * @return Descriptions.
     */
    std::vector<std::string>& GetDescriptions()
    {
        return m_Descriptions;
    }

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSTokenGateway
     *
     * @param value
     *            Descriptions.
     */
    void SetDescriptions(std::vector<std::string>& value)
    {
        m_Descriptions = value;
    }

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSTokenGateway
     *
     * @return Token Delivery method.
     */
    DLMS_TOKEN_DELIVERY GetDeliveryMethod()
    {
        return m_DeliveryMethod;
    }

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSTokenGateway
     *
     * @param value
     *            Token Delivery method.
     */
    void SetDeliveryMethod(DLMS_TOKEN_DELIVERY value)
    {
        m_DeliveryMethod = value;
    }

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSTokenGateway
     *
     * @return Token status code.
     */
    DLMS_TOKEN_STATUS_CODE GetStatusCode()
    {
        return m_Status;
    }

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSTokenGateway
     *
     * @param value
     *            Token status code.
     */
    void SetStatusCode(DLMS_TOKEN_STATUS_CODE value)
    {
        m_Status = value;
    }

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSTokenGateway
     *
     * @return Token data value.
     */
    std::string GetDataValue()
    {
        return m_DataValue;
    }

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSTokenGateway
     *
     * @param value
     *            Token data value.
     */
    void SetDataValue(std::string& value)
    {
        m_DataValue = value;
    }

    // Returns amount of attributes.
    int GetAttributeCount();

    // Returns amount of methods.
    int GetMethodCount();

    //Get attribute values of object.
    void GetValues(std::vector<std::string>& values);

    /////////////////////////////////////////////////////////////////////////
    // Returns collection of attributes to read.
    //
    // If attribute is static and already read or device is returned
    // HW error it is not returned.
    //
    // all: All items are returned even if they are read already.
    // attributes: Collection of attributes to read.
    void GetAttributeIndexToRead(bool all, std::vector<int>& attributes);

    int GetDataType(int index, DLMS_DATA_TYPE& type);

    // Returns value of given attribute.
    int GetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e);

    // Set value of given attribute.
    int SetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e);
};
#endif //DLMS_IGNORE_TOKEN_GATEWAY
#endif //GXTOKEN_GATEWAY_H
