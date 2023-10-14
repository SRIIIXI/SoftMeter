#ifndef CGXDLMSSN_COMMAND_HANDLER_H
#define CGXDLMSSN_COMMAND_HANDLER_H

#include "GXByteBuffer.h"
#include "GXDLMSTranslatorStructure.h"
#include "GXDLMSSettings.h"
#include "GXDLMSValueEventCollection.h"
#include "GXSNInfo.h"

class CGXDLMSSNCommandHandler
{
    /**
* Find Short Name object.
*
* @param sn
*/
    static int FindSNObject(CGXDLMSServer* server, int sn, CGXSNInfo& i);

    /**
* Get data for Read command.
*
* @param settings
*            DLMS settings.
* @param list
*            received objects.
* @param data
*            Data as byte array.
* @param type
*            Response type.
*/
    static int GetReadData(
        CGXDLMSSettings& settings,
        std::vector<CGXDLMSValueEventArg*>& list,
        CGXByteBuffer& data,
        DLMS_SINGLE_READ_RESPONSE& type);

    /**
    * Handle read Block in blocks.
    *
    * @param data
    *            Received data.
    */
    static int HandleReadBlockNumberAccess(
        CGXDLMSSettings& settings,
        CGXDLMSServer* server,
        CGXByteBuffer& data,
        CGXByteBuffer* replyData,
        CGXDLMSTranslatorStructure* xml);

    static int HandleReadDataBlockAccess(
        CGXDLMSSettings& settings,
        CGXDLMSServer* server,
        DLMS_COMMAND command,
        CGXByteBuffer& data,
        int cnt,
        CGXByteBuffer* replyData,
        CGXDLMSTranslatorStructure* xml,
        unsigned char cipheredCommand);

    static int ReturnSNError(
        CGXDLMSSettings& settings,
        CGXDLMSServer* server,
        DLMS_COMMAND cmd,
        DLMS_ERROR_CODE error,
        CGXByteBuffer* replyData);

    static int HandleRead(
        CGXDLMSSettings& settings,
        CGXDLMSServer* server,
        DLMS_VARIABLE_ACCESS_SPECIFICATION type,
        CGXByteBuffer& data,
        CGXDLMSValueEventCollection& list,
        std::vector<CGXDLMSValueEventArg*>& reads,
        std::vector<CGXDLMSValueEventArg*>& actions,
        CGXByteBuffer* replyData,
        CGXDLMSTranslatorStructure* xml);
public:
    /**
  * Handle read request.
  */
    static int HandleReadRequest(
        CGXDLMSSettings& settings,
        CGXDLMSServer* server,
        CGXByteBuffer& data,
        CGXByteBuffer* replyData,
        CGXDLMSTranslatorStructure* xml,
        unsigned char cipheredCommand);

    /**
    * Handle write request.
    *
    * @param reply
    *            Received data from the client.
    * @return Reply.
    */
    static  int HandleWriteRequest(
        CGXDLMSSettings& settings,
        CGXDLMSServer* server,
        CGXByteBuffer& data,
        CGXByteBuffer* replyData,
        CGXDLMSTranslatorStructure* xml,
        unsigned char cipheredCommand);


    // Handle Information Report.
    static int HandleInformationReport(
        CGXDLMSSettings& settings,
        CGXReplyData& reply);
};
#endif //CGXDLMSSN_COMMAND_HANDLER_H
