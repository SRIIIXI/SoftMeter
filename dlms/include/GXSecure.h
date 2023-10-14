#ifndef GXSECURE_H
#define GXSECURE_H

#include "GXEnums.h"
#include "GXByteBuffer.h"
#include "GXDLMSSettings.h"

class CGXSecure
{
public:
    /**
    * Generates challenge.
    *
    * @param authentication
    *            Used authentication.
    * @return Generated challenge.
    */
    static int GenerateChallenge(
        DLMS_AUTHENTICATION authentication,
        CGXByteBuffer& challenge);

    /**
    * Chipher text.
    *
    * @param auth
    *            Authentication level.
    * @param data
    *            Text to chipher.
    * @param secret
    *            Secret.
    * @return Chiphered text.
    */
    static int Secure(
        CGXDLMSSettings& settings,
        CGXCipher* cipher,
        unsigned long ic,
        CGXByteBuffer& data,
        CGXByteBuffer& secret,
        CGXByteBuffer& reply);

    static int EncryptAesKeyWrapping(CGXByteBuffer& data, CGXByteBuffer& kek, CGXByteBuffer& reply);
    static int DecryptAesKeyWrapping(CGXByteBuffer& data, CGXByteBuffer& kek, CGXByteBuffer& reply);
};

#endif //GXSECURE_H
