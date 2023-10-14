#ifndef CGXCOMMODITY_H
#define CGXCOMMODITY_H

#include <string>
#include "GXEnums.h"

/**
Online help:
http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSCharge
*/
class CGXCommodity
{
    DLMS_OBJECT_TYPE m_Type;
    unsigned char m_LogicalName[6];
    unsigned char m_Index;
public:
    // Constructor.
    CGXCommodity();

    /**
   * @return Object type.
   */
    DLMS_OBJECT_TYPE GetType();

    /**
     * @param value
     *            Object type.
     */
    void SetType(DLMS_OBJECT_TYPE value);

    /**
   * @return Attribute index.
   */
    unsigned char* GetLogicalName();

    /**
     * @param value
     *            Attribute index.
     */
    void SetLogicalName(unsigned char* value);

    /**
    * @return Attribute index.
    */
    unsigned char GetIndex();

    /**
     * @param value
     *            Attribute index.
     */
    void SetIndex(unsigned char value);

    std::string ToString();
};
#endif //CGXCOMMODITY_H
