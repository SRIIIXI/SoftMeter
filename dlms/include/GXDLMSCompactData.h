#ifndef GXDLMSCOMPACT_DATA_H
#define GXDLMSCOMPACT_DATA_H

#include "GXIgnore.h"
#ifndef DLMS_IGNORE_COMPACT_DATA
#include "GXDLMSObject.h"
#include "GXDLMSCaptureObject.h"

typedef enum
{
    /**
     * Data is captured with Capture-method.
     */
    DLMS_CAPTURE_METHOD_INVOKE,
    /**
     * Data is captured upon reading.
     */
    DLMS_CAPTURE_METHOD_IMPLICIT
}DLMS_CAPTURE_METHOD;

/**
Online help:
http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSCompactData
*/
class CGXDLMSCompactData : public CGXDLMSObject
{
    /*
    * Compact buffer
    */
    CGXByteBuffer m_Buffer;

    /*
     * Capture objects.
     */
    std::vector<std::pair<CGXDLMSObject*, CGXDLMSCaptureObject*> > m_CaptureObjects;

    /*
     * Template ID.
     */
    unsigned char m_TemplateId;

    /*
     * Template description.
     */
    CGXByteBuffer m_TemplateDescription;

    /*
     * Capture method.
     */
    DLMS_CAPTURE_METHOD m_CaptureMethod;

    int GetCaptureObjects(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e);
public:
    //Constructor.
    CGXDLMSCompactData();

    //SN Constructor.
    CGXDLMSCompactData(std::string ln, unsigned short sn);

    //LN Constructor.
    CGXDLMSCompactData(std::string ln);

    ~CGXDLMSCompactData();

    /*
     * Returns Compact buffer
     */
    CGXByteBuffer& GetBuffer();

    /*
     * value: Compact buffer
     */
    void SetBuffer(CGXByteBuffer& value);

    /*
     * Capture objects.
     */
    std::vector<std::pair<CGXDLMSObject*, CGXDLMSCaptureObject*> >& GetCaptureObjects();

    /*
     * Returns Template ID.
     */
    unsigned char GetTemplateId();

    /*
     * value: Template ID.
     */
    void SetTemplateId(unsigned char value);

    /*
     * Returns template description.
     */
    CGXByteBuffer& GetTemplateDescription();

    /*
     * value: Template description.
     */
    void SetTemplateDescription(CGXByteBuffer& value);

    /*
     * Returns Capture method.
     */
    DLMS_CAPTURE_METHOD GetCaptureMethod();

    /*
     * value: Capture method.
     */
    void SetCaptureMethod(DLMS_CAPTURE_METHOD value);

    // Returns amount of attributes.
    int GetAttributeCount();

    // Returns amount of methods.
    int GetMethodCount();

    //Get attribute values of object.
    void GetValues(std::vector<std::string>& values);

    /////////////////////////////////////////////////////////////////////////
    // Returns collection of attributes to read.
    //
    // If attribute is static and already read or device is returned
    // HW error it is not returned.
    //
    // all: All items are returned even if they are read already.
    // attributes: Collection of attributes to read.
    void GetAttributeIndexToRead(bool all, std::vector<int>& attributes);

    int GetDataType(int index, DLMS_DATA_TYPE& type);

    // Returns value of given attribute.
    int GetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e);

    // Set value of given attribute.
    int SetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e);
};
#endif //DLMS_IGNORE_COMPACT_DATA
#endif //GXDLMSCOMPACT_DATA_H