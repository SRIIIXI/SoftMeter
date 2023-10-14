#include "GXDLMSValueEventArg.h"
#include "GXDLMSSettings.h"
#include "GXDLMSServer.h"

CGXDLMSObject* CGXDLMSValueEventArg::GetTarget()
{
    return m_Target;
}

void CGXDLMSValueEventArg::SetTarget(CGXDLMSObject* value)
{
    m_Target = value;
}

int CGXDLMSValueEventArg::GetIndex()
{
    return m_Index;
}

void CGXDLMSValueEventArg::SetIndex(int value)
{
    m_Index = value;
}

CGXDLMSVariant& CGXDLMSValueEventArg::GetValue()
{
    return m_Value;
}

void CGXDLMSValueEventArg::SetValue(CGXDLMSVariant value)
{
    m_Value = value;
}

bool CGXDLMSValueEventArg::GetHandled()
{
    return m_Handled;
}

void CGXDLMSValueEventArg::SetHandled(bool value)
{
    m_Handled = value;
}

int CGXDLMSValueEventArg::GetSelector()
{
    return m_Selector;
}

void CGXDLMSValueEventArg::SetSelector(int value)
{
    m_Selector = value;
}

CGXDLMSVariant& CGXDLMSValueEventArg::GetParameters()
{
    return m_Parameters;
}

void CGXDLMSValueEventArg::SetParameters(CGXDLMSVariant& value)
{
    m_Parameters = value;
}

void CGXDLMSValueEventArg::Init(
    CGXDLMSServer* server,
    CGXDLMSObject* target,
    int index,
    int selector)
{
    m_Server = server;
    m_Settings = &server->GetSettings();
    m_Handled = false;
    SetTarget(target);
    SetIndex(index);
    m_Selector = selector;
    m_Error = DLMS_ERROR_CODE_OK;
    m_ByteArray = false;
    m_SkipMaxPduSize = false;
    m_RowToPdu = 0;
    m_RowBeginIndex = 0;
    m_RowEndIndex = 0;
}

CGXDLMSValueEventArg::CGXDLMSValueEventArg(
    CGXDLMSServer* server,
    CGXDLMSObject* target,
    int index)
{
    Init(server, target, index, 0);
}

CGXDLMSValueEventArg::CGXDLMSValueEventArg(
    CGXDLMSServer* server,
    CGXDLMSObject* target,
    int index,
    int selector,
    CGXDLMSVariant& parameters)
{
    Init(server, target, index, selector);
    m_Parameters = parameters;
}

CGXDLMSValueEventArg::CGXDLMSValueEventArg(
    CGXDLMSObject* target,
    int index)
{
    Init(NULL, target, index, 0);
}

CGXDLMSValueEventArg::CGXDLMSValueEventArg(
    CGXDLMSObject* target,
    int index,
    int selector,
    CGXDLMSVariant& parameters)
{
    Init(NULL, target, index, selector);
    m_Parameters = parameters;
}

DLMS_ERROR_CODE CGXDLMSValueEventArg::GetError()
{
    return m_Error;
}

void CGXDLMSValueEventArg::SetError(DLMS_ERROR_CODE value)
{
    m_Error = value;
}

bool CGXDLMSValueEventArg::IsAction()
{
    return m_Action;
}

void CGXDLMSValueEventArg::SetAction(bool value)
{
    m_Action = value;
}

bool CGXDLMSValueEventArg::IsByteArray()
{
    return m_ByteArray;
}

void CGXDLMSValueEventArg::SetByteArray(bool value)
{
    m_ByteArray = value;
}

bool CGXDLMSValueEventArg::GetSkipMaxPduSize()
{
    return m_SkipMaxPduSize;
}

void CGXDLMSValueEventArg::SetSkipMaxPduSize(bool value)
{
    m_SkipMaxPduSize = value;
}

unsigned short CGXDLMSValueEventArg::GetRowToPdu()
{
    return m_RowToPdu;
}

void CGXDLMSValueEventArg::SetRowToPdu(unsigned short value) {
    m_RowToPdu = value;
}

unsigned int CGXDLMSValueEventArg::GetRowEndIndex() {
    return m_RowEndIndex;
}

void CGXDLMSValueEventArg::SetRowEndIndex(unsigned int value) {
    m_RowEndIndex = value;
}

unsigned int CGXDLMSValueEventArg::GetRowBeginIndex() {
    return m_RowBeginIndex;
}

void CGXDLMSValueEventArg::SetRowBeginIndex(unsigned int value) {
    m_RowBeginIndex = value;
}

CGXDLMSSettings* CGXDLMSValueEventArg::GetSettings()
{
    return m_Settings;
}


CGXDLMSServer* CGXDLMSValueEventArg::GetServer()
{
    return m_Server;
}

void CGXDLMSValueEventArg::SetInvokeId(unsigned int value)
{
    m_InvokeId = value;
}

unsigned int CGXDLMSValueEventArg::GetInvokeId()
{
    return m_InvokeId;
}