#ifndef GXDLMSSNPARAMETERS_H
#define GXDLMSSNPARAMETERS_H

#include "GXByteBuffer.h"
#include "GXDLMSSettings.h"

/**
 * SN Parameters
 */
class CGXDLMSSNParameters
{
private:

    /**
     * DLMS settings.
     */
    CGXDLMSSettings *m_Settings;
    /**
     * DLMS command.
     */
    DLMS_COMMAND m_Command;
    /**
     * Request type.
     */
    int m_RequestType;
    /**
     * Attribute descriptor.
     */
    CGXByteBuffer* m_AttributeDescriptor;
    /**
     * Data.
     */
    CGXByteBuffer* m_Data;
    /**
     * Send date and time. This is used in Data notification messages.
     */
    struct tm* m_Time;
    /**
     * Item Count.
     */
    int m_Count;

    /**
     * Are there more data to send or more data to receive.
     */
    bool m_MultipleBlocks;

    /**
     * Block index.
     */
    unsigned short m_BlockIndex;

public:

    /**
     * Constructor.
     *
     * @param settings
     *            DLMS settings.
     * @param command
     *            Command.
     * @param commandType
     *            command type.
     * @param attributeDescriptor
     * @param data
     *            Attribute descriptor
     */
    CGXDLMSSNParameters(CGXDLMSSettings* settings,
                        DLMS_COMMAND command,
                        int count,
                        int commandType,
                        CGXByteBuffer* attributeDescriptor,
                        CGXByteBuffer* data);

    /**
     * @return DLMS settings.
     */
    CGXDLMSSettings* GetSettings();

    /**
     * @return DLMS command.
     */
    DLMS_COMMAND GetCommand();

    /**
     * @return Request type.
     */
    int GetRequestType();

    /**
     * @param value
     *            Request type.
     */
    void SetRequestType(int value);

    /**
     * @return the attributeDescriptor
     */
    CGXByteBuffer* GetAttributeDescriptor();

    /**
     * @return the data
     */
    CGXByteBuffer* GetData();

    /**
     * @return the time
     */
    struct tm* GetTime();

    /**
     * @param value
     *            the time to set
     */
    void SetTime(struct tm* value);

    /**
     * @return the multipleBlocks
     */
    bool IsMultipleBlocks();

    /**
     * @param value
     *            the multipleBlocks to set
     */
    void SetMultipleBlocks(bool value);

    /**
     * @return Block index.
     */
    unsigned short GetBlockIndex();

    /**
     * @param value
     *            Block index.
     */
    void SetBlockIndex(unsigned short value);

    /**
     * @return Item Count.
     */
    int GetCount();
};

#endif //GXDLMSSNPARAMETERS_H
