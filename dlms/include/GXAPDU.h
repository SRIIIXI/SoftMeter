#ifndef GXAPDU_H
#define GXAPDU_H

#include <vector>
#include "GXEnums.h"
#include "GXErrorCodes.h"
#include "GXHelpers.h"
#include "GXDLMSSettings.h"
#include "GXDLMSTranslatorStructure.h"

/////////////////////////////////////////////////////////////////////////////
// The services to access the attributes and methods of COSEM objects are
// determined on DLMS/COSEM Application layer. The services are carried by
// Application Protocol Data Units (APDUs).
// <p />
// In DLMS/COSEM the meter is primarily a server, and the controlling system is
// a client. Also unsolicited (received without a request) messages are
// available.
/////////////////////////////////////////////////////////////////////////////
class CGXAPDU
{
    friend class CGXDLMSTranslator;
private:
    /////////////////////////////////////////////////////////////////////////////
    // Constructor.
    /////////////////////////////////////////////////////////////////////////////
    CGXAPDU()
    {
    }
    static int ParsePDU2(
        CGXDLMSSettings& settings,
        CGXCipher* cipher,
        CGXByteBuffer& buff,
        DLMS_ASSOCIATION_RESULT& result,
        DLMS_SOURCE_DIAGNOSTIC& diagnostic
#ifndef DLMS_IGNORE_XML_TRANSLATOR
        , CGXDLMSTranslatorStructure* xml
#endif //DLMS_IGNORE_XML_TRANSLATOR
    );

    static int Parse(bool initiateRequest,
        CGXDLMSSettings& settings,
        CGXCipher* cipher,
        CGXByteBuffer& data,
#ifndef DLMS_IGNORE_XML_TRANSLATOR
        CGXDLMSTranslatorStructure* xml,
#endif //DLMS_IGNORE_XML_TRANSLATOR
        unsigned char tag);
public:

    /**
     * Parse User Information from PDU.
     */
    static int ParseUserInformation(
        CGXDLMSSettings& settings,
        CGXCipher* cipher,
        CGXByteBuffer& data
#ifndef DLMS_IGNORE_XML_TRANSLATOR
        , CGXDLMSTranslatorStructure* xml
#endif //DLMS_IGNORE_XML_TRANSLATOR
    );

    /**
     * Generates Aarq.
     */
    static int GenerateAarq(
        CGXDLMSSettings& settings,
        CGXCipher* cipher,
        CGXByteBuffer* encryptedData,
        CGXByteBuffer& data);

    /**
    * Generate user information.
    *
    * @param settings
    *            DLMS settings.
    * @param cipher
    * @param data
    *            Generated user information.
    */
    static int GenerateUserInformation(
        CGXDLMSSettings& settings,
        CGXCipher* cipher,
        CGXByteBuffer* encryptedData,
        CGXByteBuffer& data);

    /**
     * Parse APDU.
     */
    static int ParsePDU(CGXDLMSSettings& settings,
        CGXCipher* cipher,
        CGXByteBuffer& buff,
        DLMS_ASSOCIATION_RESULT &result,
        DLMS_SOURCE_DIAGNOSTIC& diagnostic
#ifndef DLMS_IGNORE_XML_TRANSLATOR
        , CGXDLMSTranslatorStructure* xml
#endif //DLMS_IGNORE_XML_TRANSLATOR
        );

    /**
     * Server generates AARE message.
     */
    static int GenerateAARE(
        CGXDLMSSettings& settings,
        CGXByteBuffer& data,
        DLMS_ASSOCIATION_RESULT result,
        DLMS_SOURCE_DIAGNOSTIC diagnostic,
        CGXCipher* cipher,
        CGXByteBuffer *errorData,
        CGXByteBuffer *encryptedData);

    static int GetUserInformation(
        CGXDLMSSettings& settings,
        CGXCipher* cipher,
        CGXByteBuffer& data);

    static int ParseInitiate(
        bool initiateRequest,
        CGXDLMSSettings& settings,
        CGXCipher* cipher,
        CGXByteBuffer& data
#ifndef DLMS_IGNORE_XML_TRANSLATOR
        , CGXDLMSTranslatorStructure* xml
#endif //DLMS_IGNORE_XML_TRANSLATOR
        );
};

#endif //GXAPDU_H
