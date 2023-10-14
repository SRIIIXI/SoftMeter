#ifndef GXDLMSLONGTRANSACTION_H
#define GXDLMSLONGTRANSACTION_H

#include <vector>
#include "GXEnums.h"
#include "GXByteBuffer.h"
#include "GXDLMSValueEventArg.h"
#include "GXDLMSValueEventCollection.h"

class CGXDLMSLongTransaction
{
private:
    /**
    * Executed command.
    */
    DLMS_COMMAND m_Command;

    /**
     * Targets.
     */
    CGXDLMSValueEventCollection m_Targets;

    /**
     * Extra data from PDU.
     */
    CGXByteBuffer m_Data;

public:

    /**
     * Constructor.
     *
     * @param targets
     * @param command
     * @param data
     */
    CGXDLMSLongTransaction(CGXDLMSValueEventCollection& targets,
                           DLMS_COMMAND command, CGXByteBuffer& data)
    {
        m_Targets.insert(m_Targets.end(), targets.begin(), targets.end());
        targets.clear();
        m_Command = command;
        m_Data.Set(&data, data.GetPosition());
    }

    /**
 * Constructor.
 *
 * @param targets
 * @param command
 * @param data
 */
    CGXDLMSLongTransaction(DLMS_COMMAND command, CGXByteBuffer& data)
    {
        m_Command = command;
        m_Data.Set(&data, data.GetPosition());
    }

    /**
     * @return Executed command.
     */
    DLMS_COMMAND GetCommand()
    {
        return m_Command;
    }

    /**
     * @return Targets.
     */
    std::vector<CGXDLMSValueEventArg*>& GetTargets()
    {
        return m_Targets;
    }

    /**
     * @return data.
     */
    CGXByteBuffer& GetData()
    {
        return m_Data;
    }

    /**
     * @param value
     *            New data.
     */
    void SetData(CGXByteBuffer& value)
    {
        m_Data.Clear();
        m_Data.Set(&value, value.GetPosition());
    }
};
#endif //GXDLMSLONGTRANSACTION_H
