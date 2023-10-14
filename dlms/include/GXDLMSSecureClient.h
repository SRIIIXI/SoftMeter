#ifndef GXDLMSSECURECLIENT_H
#define GXDLMSSECURECLIENT_H

#include "GXDLMSClient.h"

class CGXDLMSSecureClient : public CGXDLMSClient
{
private:
    CGXCipher m_Cipher;
public:
    /////////////////////////////////////////////////////////////////////////////
    //Constructor
    /////////////////////////////////////////////////////////////////////////////
    CGXDLMSSecureClient(
        bool UseLogicalNameReferencing = true,
        int ClientAddress = 16,
        int ServerAddress = 1,
        //Authentication type.
        DLMS_AUTHENTICATION authentication = DLMS_AUTHENTICATION_NONE,
        //Password if authentication is used.
        const char* password = NULL,
        DLMS_INTERFACE_TYPE intefaceType = DLMS_INTERFACE_TYPE_HDLC);

    /////////////////////////////////////////////////////////////////////////////
    //Destructor.
    /////////////////////////////////////////////////////////////////////////////
    ~CGXDLMSSecureClient();

    /**
     * @return Ciphering settings.
     */
    CGXCipher* GetCiphering();

    /**
    * Encrypt data using Key Encrypting Key.
    *
    * @param kek
    *            Key Encrypting Key, also known as Master key.
    * @param data
    *            Data to encrypt.
    * @return Encrypt data.
    */
    static int Encrypt(
        CGXByteBuffer& kek,
        CGXByteBuffer& data,
        CGXByteBuffer& reply);

    /**
    * Decrypt data using Key Encrypting Key.
    *
    * @param kek
    *            Key Encrypting Key, also known as Master key.
    * @param data
    *            Data to decrypt.
    * @return Decrypted data.
    */
    static int Decrypt(
        CGXByteBuffer& kek,
        CGXByteBuffer& data,
        CGXByteBuffer& reply);
};
#endif //GXDLMSCLIENT_H
