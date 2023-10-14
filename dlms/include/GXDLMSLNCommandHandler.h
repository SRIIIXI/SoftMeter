#ifndef GXDLMSLN_COMMAND_HANDLER_H
#define GXDLMSLN_COMMAND_HANDLER_H

#include "GXByteBuffer.h"
#include "GXDLMSTranslatorStructure.h"
#include "GXDLMSSettings.h"
#include "GXDLMSConnectionEventArgs.h"


class CGXDLMSLNCommandHandler
{
    /**
 * Handle get request normal command.
 *
 * @param data
 *            Received data.
 */
    static int GetRequestNormal(
        CGXDLMSSettings& settings,
        unsigned char invokeID,
        CGXDLMSServer* server,
        CGXByteBuffer& data,
        CGXByteBuffer* replyData,
        CGXDLMSTranslatorStructure* xml,
        unsigned char cipheredCommand);

    /**
     * Handle get request with list command.
     *
     * @param data
     *            Received data.
     */
    static int GetRequestWithList(
        CGXDLMSSettings& settings,
        unsigned char invokeID,
        CGXDLMSServer* server,
        CGXByteBuffer& data,
        CGXByteBuffer* replyData,
        CGXDLMSTranslatorStructure* xml,
        unsigned char cipheredCommand);

    static int HanleSetRequestWithDataBlock(
        CGXDLMSSettings& settings,
        CGXDLMSServer* server,
        CGXByteBuffer& data,
        CGXDLMSLNParameters& p,
        CGXDLMSTranslatorStructure* xml);

    static int HandleSetRequestNormal(
        CGXDLMSSettings& settings,
        CGXDLMSServer* server,
        CGXByteBuffer& data,
        short type,
        CGXDLMSLNParameters& p,
        CGXDLMSTranslatorStructure* xml);

    static int HanleSetRequestWithList(
        CGXDLMSSettings& settings,
        unsigned char invoke,
        CGXDLMSServer* server,
        CGXByteBuffer& data,
        CGXDLMSLNParameters& p,
        CGXDLMSTranslatorStructure* xml,
        unsigned char cipheredCommand);

public:
    /**
    * Handle get request next data block command.
    *
    * @param data
    *            Received data.
    */
    static int GetRequestNextDataBlock(
        CGXDLMSSettings& settings,
        unsigned char invokeID,
        CGXDLMSServer* server,
        CGXByteBuffer& data,
        CGXByteBuffer* replyData,
        CGXDLMSTranslatorStructure* xml,
        bool streaming,
        unsigned char cipheredCommand);

    /**
    * Handle Get request.
    *
    * @return Reply to the client.
    */
    static int HandleGetRequest(
        CGXDLMSSettings& settings,
        CGXDLMSServer* server,
        CGXByteBuffer& data,
        CGXByteBuffer* replyData,
        CGXDLMSTranslatorStructure* xml,
        unsigned char cipheredCommand);

    /**
    * Handle Set request.
    *
    * @return Reply to the client.
    */
    static int HandleSetRequest(
        CGXDLMSSettings& settings,
        CGXDLMSServer* server,
        CGXByteBuffer& data,
        CGXByteBuffer* replyData,
        CGXDLMSTranslatorStructure* xml,
        unsigned char cipheredCommand);

    static int MethodRequestNormal(
        CGXDLMSSettings& settings,
        uint8_t invokeId,
        CGXDLMSServer* server,
        CGXByteBuffer& data,
        CGXDLMSConnectionEventArgs* connectionInfo,
        CGXByteBuffer* replyData,
        CGXDLMSTranslatorStructure* xml,
        unsigned char cipheredCommand);

    static int MethodRequestNextBlock(
        CGXDLMSSettings& settings,
        uint8_t invokeId,
        CGXDLMSServer* server,
        CGXByteBuffer& data,
        CGXDLMSConnectionEventArgs* connectionInfo,
        CGXByteBuffer* replyData,
        CGXDLMSTranslatorStructure* xml,
        bool streaming,
        unsigned char cipheredCommand);

    /**
  * Handle action request.
  *
  * @param reply
  *            Received data from the client.
  * @return Reply.
  */
    static int HandleMethodRequest(
        CGXDLMSSettings& settings,
        CGXDLMSServer* server,
        CGXByteBuffer& data,
        CGXByteBuffer* replyData,
        CGXDLMSConnectionEventArgs* connectionInfo,
        CGXDLMSTranslatorStructure* xml,
        unsigned char cipheredCommand);

    //Handle Access request.
    static int HandleAccessRequest(
        CGXDLMSSettings& settings,
        CGXDLMSServer* server,
        CGXByteBuffer& data,
        CGXByteBuffer* replyData,
        CGXDLMSTranslatorStructure* xml,
        unsigned char cipheredCommand);

    // Handle Event Notification.
    static int HandleEventNotification(
        CGXDLMSSettings& settings,
        CGXReplyData& reply);

};
#endif //GXDLMSLN_COMMAND_HANDLER_H
