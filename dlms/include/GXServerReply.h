#ifndef GXSERVERREPLY_H
#define GXSERVERREPLY_H

#include "GXByteBuffer.h"
#include "GXDLMSConnectionEventArgs.h"

class CGXServerReply
{
private:
    /*
    * Connection info.
    */
    CGXDLMSConnectionEventArgs m_ConnectionInfo;

    /*
     * Server received data.
     */
    CGXByteBuffer m_Data;

    /*
     * Server reply message.
     */
    CGXByteBuffer m_Reply;

    /*
     * Message count to send.
     */
    int m_Count;
public:
    /*
    * Constructor.
    */
    CGXServerReply()
    {
        m_Count = 0;
    }

    /*
     * Constructor.
     *
     * @param value
     *            Received data.
     */
    CGXServerReply(CGXByteBuffer& value)
    {
        m_Count = 0;
        m_Data = value;
    }

    /*
     * returns the data
     */
    CGXByteBuffer& GetData()
    {
        return m_Data;
    }

    /*
     * value: The data to set.
     */
    void SetData(CGXByteBuffer& value)
    {
        m_Data = value;
    }

    /*
     * returns The reply message.
     */
    CGXByteBuffer& GetReply()
    {
        return m_Reply;
    }

    /*
     * value: the replyMessages to set
     */
    void SetReply(CGXByteBuffer& value)
    {
        m_Reply = value;
    }

    /*
     * returns Connection info.
     */
    CGXDLMSConnectionEventArgs& GetConnectionInfo()
    {
        return m_ConnectionInfo;
    }

    /*
     * value: Connection info.
     */
    void SetConnectionInfo(CGXDLMSConnectionEventArgs& value)
    {
        m_ConnectionInfo = value;
    }

    /*
     * returns Is GBT streaming in progress.
     */
    bool IsStreaming()
    {
        return GetCount() != 0;
    }

    /*
     * returns Message count to send.
     */
    int GetCount()
    {
        return m_Count;
    }

    /*
     * value: Message count to send.
     */
    void SetCount(int value)
    {
        m_Count = value;
    }
};

#endif //GXSERVERREPLY_H
