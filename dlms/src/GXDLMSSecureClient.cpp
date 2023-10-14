#include "GXDLMSSecureClient.h"

CGXDLMSSecureClient::CGXDLMSSecureClient(bool UseLogicalNameReferencing,
    int clientAddress,
    int serverAddress,
    //Authentication type.
    DLMS_AUTHENTICATION authentication,
    //Password if authentication is used.
    const char* password,
    DLMS_INTERFACE_TYPE intefaceType) :
    CGXDLMSClient(
        UseLogicalNameReferencing,
        clientAddress,
        serverAddress,
        authentication,
        password,
        intefaceType), m_Cipher("ABCDEFGH")
{
    m_Settings.SetCipher(&m_Cipher);
}

CGXDLMSSecureClient::~CGXDLMSSecureClient()
{
}

CGXCipher* CGXDLMSSecureClient::GetCiphering()
{
    return m_Settings.GetCipher();
}

int CGXDLMSSecureClient::Encrypt(CGXByteBuffer& kek, CGXByteBuffer& data, CGXByteBuffer& reply)
{
    reply.Clear();
    if (kek.GetSize() < 16)
    {
        //Key Encrypting Key.
        return DLMS_ERROR_CODE_INVALID_PARAMETER;
    }
    if (kek.GetSize() % 8 != 0)
    {
        //Key Encrypting Key.
        return DLMS_ERROR_CODE_INVALID_PARAMETER;
    }
    return CGXSecure::EncryptAesKeyWrapping(data, kek, reply);
}

int CGXDLMSSecureClient::Decrypt(CGXByteBuffer& kek, CGXByteBuffer& data, CGXByteBuffer& reply)
{
    reply.Clear();
    if (kek.GetSize() < 16)
    {
        //Key Encrypting Key.
        return DLMS_ERROR_CODE_INVALID_PARAMETER;
    }
    if (kek.GetSize() % 8 != 0)
    {
        //Key Encrypting Key.
        return DLMS_ERROR_CODE_INVALID_PARAMETER;
    }
    if (data.GetSize() < 16)
    {
        return DLMS_ERROR_CODE_INVALID_PARAMETER;
    }
    if (data.GetSize() % 8 != 0)
    {
        return DLMS_ERROR_CODE_INVALID_PARAMETER;
    }
    return CGXSecure::DecryptAesKeyWrapping(data, kek, reply);
}