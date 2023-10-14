
#pragma once

#include "GXDLMSSecureServer.h"
#include "GXDLMSSecuritySetup.h"
#include "GXByteBuffer.h"
#include <queue>

extern char DATAFILE[FILENAME_MAX];
extern char IMAGEFILE[FILENAME_MAX];


class CGXDLMSBase : public CGXDLMSSecureServer
{
    int SendPush(CGXDLMSPushSetup* target);

private:
    unsigned long m_FrameCounter;
public:
    GX_TRACE_LEVEL m_Trace;

    /////////////////////////////////////////////////////////////////////////
    //Constructor.
    /////////////////////////////////////////////////////////////////////////
    CGXDLMSBase(
        CGXDLMSAssociationLogicalName* ln,
        CGXDLMSIecHdlcSetup* hdlc, const char* systemTitle) :
        CGXDLMSSecureServer(ln, hdlc, systemTitle)
    {
        m_FrameCounter = 100;
        m_Trace = GX_TRACE_LEVEL_VERBOSE;
        SetMaxReceivePDUSize(1024);
        CGXDLMSSecuritySetup* sec = new CGXDLMSSecuritySetup();
        sec->SetServerSystemTitle(GetCiphering()->GetSystemTitle());

        CGXByteBuffer servertitle = GetCiphering()->GetSystemTitle();
        CGXByteBuffer clienttitle;

        int sz = servertitle.GetSize();

        for (int x = sz - 1; x > -1; x--)
        {
            clienttitle.SetUInt8(servertitle.GetData()[x]);
        }

        sec->SetClientSystemTitle(clienttitle);

        GetItems().push_back(sec);
   }

    /////////////////////////////////////////////////////////////////////////
    //Constructor.
    /////////////////////////////////////////////////////////////////////////
    CGXDLMSBase(
        CGXDLMSAssociationLogicalName* ln,
        CGXDLMSTcpUdpSetup* wrapper, const char* systemTitle) :
        CGXDLMSSecureServer(ln, wrapper, systemTitle)
    {
        m_FrameCounter = 100;
        m_Trace = GX_TRACE_LEVEL_VERBOSE;
        SetMaxReceivePDUSize(1024);
    }

    /////////////////////////////////////////////////////////////////////////
    //Constructor.
    /////////////////////////////////////////////////////////////////////////
    CGXDLMSBase(
        CGXDLMSAssociationShortName* sn,
        CGXDLMSIecHdlcSetup* hdlc, const char* systemTitle) :
        CGXDLMSSecureServer(sn, hdlc, systemTitle)
    {
        m_FrameCounter = 100;
        m_Trace = GX_TRACE_LEVEL_VERBOSE;
        SetMaxReceivePDUSize(1024);
    }

    /////////////////////////////////////////////////////////////////////////
    //Constructor.
    /////////////////////////////////////////////////////////////////////////
    CGXDLMSBase(
        CGXDLMSAssociationShortName* sn,
        CGXDLMSTcpUdpSetup* wrapper, const char* systemTitle) :
        CGXDLMSSecureServer(sn, wrapper, systemTitle)
    {
        m_FrameCounter = 100;
        m_Trace = GX_TRACE_LEVEL_VERBOSE;
        SetMaxReceivePDUSize(1024);
    }

    /////////////////////////////////////////////////////////////////////////
    //Destructor.
    /////////////////////////////////////////////////////////////////////////
    ~CGXDLMSBase(void)
    {
    }

    int Init();

    CGXDLMSObject* FindObject(
        DLMS_OBJECT_TYPE objectType,
        int sn,
        std::string& ln);

    void PreRead(
        std::vector<CGXDLMSValueEventArg*>& args);

    void PreWrite(
        std::vector<CGXDLMSValueEventArg*>& args);

    void PreAction(
        std::vector<CGXDLMSValueEventArg*>& args);

    void PostRead(
        std::vector<CGXDLMSValueEventArg*>& args);

    void PostWrite(
        std::vector<CGXDLMSValueEventArg*>& args);

    void PostAction(
        std::vector<CGXDLMSValueEventArg*>& args);

    bool IsTarget(
        unsigned long int serverAddress,
        unsigned long clientAddress);

    DLMS_SOURCE_DIAGNOSTIC ValidateAuthentication(
        DLMS_AUTHENTICATION authentication,
        CGXByteBuffer& password);

    /**
    * Get attribute access mode.
    *
    * @param arg
    *            Value event argument.
    * @return Access mode.
    * @throws Exception
    *             Server handler occurred exceptions.
    */
    DLMS_ACCESS_MODE GetAttributeAccess(CGXDLMSValueEventArg* arg);

    /**
    * Get method access mode.
    *
    * @param arg
    *            Value event argument.
    * @return Method access mode.
    * @throws Exception
    *             Server handler occurred exceptions.
    */
    DLMS_METHOD_ACCESS_MODE GetMethodAccess(CGXDLMSValueEventArg* arg);

    /**
    * Accepted connection is made for the server. All initialization is done
    * here.
    */
    void Connected(
        CGXDLMSConnectionEventArgs& connectionInfo);

    /**
     * Client has try to made invalid connection. Password is incorrect.
     *
     * @param connectionInfo
     *            Connection information.
     */
    void InvalidConnection(
        CGXDLMSConnectionEventArgs& connectionInfo);
    /**
     * Server has close the connection. All clean up is made here.
     */
    void Disconnected(
        CGXDLMSConnectionEventArgs& connectionInfo);

    /**
    * Get selected value(s). This is called when example profile generic
    * request current value.
    *
    * @param type
    *            Update type.
    * @param args
    *            Value event arguments.
    */
    void PreGet(
        std::vector<CGXDLMSValueEventArg*>& args);

    /**
    * Get selected value(s). This is called when example profile generic
    * request current value.
    *
    * @param type
    *            Update type.
    * @param args
    *            Value event arguments.
    */
    void PostGet(
        std::vector<CGXDLMSValueEventArg*>& args);
};
