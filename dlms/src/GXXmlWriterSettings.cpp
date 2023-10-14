#include "GXXmlWriterSettings.h"

CGXXmlWriterSettings::CGXXmlWriterSettings()
{
    m_Values = true;
    m_SkipDefaults = true;
}

bool CGXXmlWriterSettings::GetValues()
{
    return m_Values;
}

void CGXXmlWriterSettings::SetValues(bool value)
{
    m_Values = value;
}

//Are default values serialized.
bool CGXXmlWriterSettings::GetSkipDefaults()
{
    return m_SkipDefaults;
}

//Are default values serialized.
void CGXXmlWriterSettings::SetSkipDefaults(bool value)
{
    m_SkipDefaults = value;
}