#ifndef GXDLMSSFSKREPORTINGSYSTEMLIST_H
#define GXDLMSSFSKREPORTINGSYSTEMLIST_H

#include "GXIgnore.h"
#ifndef DLMS_IGNORE_SFSK_REPORTING_SYSTEM_LIST
#include "GXDLMSObject.h"

/**
Online help:
http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSSFSKReportingSystemList
*/
class CGXDLMSSFSKReportingSystemList : public CGXDLMSObject
{
    /**
        * Contains the system titles of the server systems which have made a
        * DiscoverReport request and which have not already been registered.
        */
    std::vector<CGXByteBuffer> m_ReportingSystemList;
public:
    //Constructor.
    CGXDLMSSFSKReportingSystemList();

    //SN Constructor.
    CGXDLMSSFSKReportingSystemList(std::string ln, unsigned short sn);

    //LN Constructor.
    CGXDLMSSFSKReportingSystemList(std::string ln);

    /**
    * @return Contains the system titles of the server systems which have made
    *         a DiscoverReport request and which have not already been
    *         registered.
    */
    std::vector<CGXByteBuffer>& GetReportingSystemList()
    {
        return m_ReportingSystemList;
    }

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
#endif //DLMS_IGNORE_SFSK_REPORTING_SYSTEM_LIST
#endif //GXDLMSSFSKREPORTINGSYSTEMLIST_H