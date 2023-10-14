#include "GXSNInfo.h"

CGXSNInfo::CGXSNInfo()
{
    m_Action = false;
    m_Index = 0;
    m_Item = 0;
}

int CGXSNInfo::GetIndex()
{
    return m_Index;
}

void CGXSNInfo::SetIndex(int value)
{
    m_Index = value;
}

bool CGXSNInfo::IsAction()
{
    return m_Action;
}

void CGXSNInfo::SetAction(bool value)
{
    m_Action = value;
}

CGXDLMSObject* CGXSNInfo::GetItem()
{
    return m_Item;
}

void CGXSNInfo::SetItem(CGXDLMSObject* value)
{
    m_Item = value;
}