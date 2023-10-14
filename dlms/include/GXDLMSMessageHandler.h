#ifndef GXDLMSMESSAGEHANDLER_H
#define GXDLMSMESSAGEHANDLER_H

#include "GXIgnore.h"
#ifndef DLMS_IGNORE_MESSAGE_HANDLER

#include "GXDLMSObject.h"
#include "GXDateTime.h"
#include "GXDLMSScriptAction.h"

/**
Online help:
http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSMessageHandler
*/
class CGXDLMSMessageHandler : public CGXDLMSObject
{
    std::vector<std::pair<CGXDateTime, CGXDateTime> > m_ListeningWindow;
    std::vector<std::string> m_AllowedSenders;
    std::vector<std::pair<std::string, std::pair<int, CGXDLMSScriptAction> > > m_SendersAndActions;
public:
    //Constructor.
    CGXDLMSMessageHandler();

    //SN Constructor.
    CGXDLMSMessageHandler(std::string ln, unsigned short sn);

    //LN Constructor.
    CGXDLMSMessageHandler(std::string ln);

    /**
    Listening Window.
    */
    std::vector<std::pair<CGXDateTime, CGXDateTime> >& GetListeningWindow();

    /**
     List of allowed Senders.
    */
    std::vector<std::string>& GetAllowedSenders();

    /**
     Contains the logical name of a "Script table" object and the script selector of the
     script to be executed if an empty message is received from a match-ing sender.
    */
    std::vector<std::pair<std::string, std::pair<int, CGXDLMSScriptAction> > >& GetSendersAndActions();

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
#endif //DLMS_IGNORE_MESSAGE_HANDLER
#endif //GXDLMSMESSAGEHANDLER_H
