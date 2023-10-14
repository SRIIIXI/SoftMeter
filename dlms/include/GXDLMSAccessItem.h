#ifndef CGXDLMSACCESSITEM_H
#define CGXDLMSACCESSITEM_H

#include "GXDLMSObject.h"

/**
Access item is used to generate Access Service message.
*/
class CGXDLMSAccessItem
{
    /**
     * COSEM target object.
     */
    CGXDLMSObject* m_Target;
    /**
     * Executed command type.
     */
    DLMS_ACCESS_SERVICE_COMMAND_TYPE m_Command;

    /**
     * Attribute index.
     */
    unsigned char m_Index;

    //Reply error code.
    DLMS_ERROR_CODE m_Error;

    // Reply value.
    CGXDLMSVariant m_Value;
public:
    /**
     * Returns COSEM target object.
     */
    CGXDLMSObject* GetTarget();

    /**
     * value: COSEM target object.
     */
    void SetTarget(CGXDLMSObject* value);

    /**
     * Returns Executed command type.
     */
    DLMS_ACCESS_SERVICE_COMMAND_TYPE GetCommand();

    /**
     * value: Executed command type.
     */
    void SetCommand(DLMS_ACCESS_SERVICE_COMMAND_TYPE value);

    /**
     * Returns Attribute index.
     */
    unsigned char GetIndex();

    /**
     * value: Attribute index.
     */
    void SetIndex(unsigned char value);

    /**
     * value: Reply error code.
     */
    void SetError(DLMS_ERROR_CODE value);

    /**
     * Returns reply error code.
     */
    DLMS_ERROR_CODE GetError();

    /**
     * value:  Reply value.
     */
    void SetValue(CGXDLMSVariant& value);
    /**
     *  Returns reply value.
     */
    CGXDLMSVariant& GetValue();

    /**
     * Constructor.
     */
    CGXDLMSAccessItem();

    /**
     * Constructor.
     *
     * command: Command to execute.
     * target: COSEM target object.
     * attributeIndex: Attribute index.
     */
    CGXDLMSAccessItem(DLMS_ACCESS_SERVICE_COMMAND_TYPE command,
        CGXDLMSObject* target,
        unsigned char attributeIndex);
};
#endif //CGXDLMSACCESSITEM_H