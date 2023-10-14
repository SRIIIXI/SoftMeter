#include "GXHdlcSettings.h"

CGXHdlcSettings::CGXHdlcSettings()
{
    m_MaxInfoTX = DEFAULT_MAX_INFO_TX;
    m_MaxInfoRX = DEFAULT_MAX_INFO_RX;
    m_WindowSizeTX = DEFAULT_WINDOWS_SIZE_TX;
    m_WindowSizeRX = DEFAULT_WINDOWS_SIZE_RX;
}

unsigned short CGXHdlcSettings::GetMaxInfoTX()
{
    return m_MaxInfoTX;
}

void CGXHdlcSettings::SetMaxInfoTX(unsigned short value)
{
    m_MaxInfoTX = value;
}

unsigned short CGXHdlcSettings::GetMaxInfoRX()
{
    return m_MaxInfoRX;
}

void CGXHdlcSettings::SetMaxInfoRX(unsigned short value)
{
    m_MaxInfoRX = value;
}

unsigned char CGXHdlcSettings::GetWindowSizeTX()
{
    return m_WindowSizeRX;
}

void CGXHdlcSettings::SetWindowSizeTX(unsigned char value)
{
    m_WindowSizeRX = value;
}

unsigned char CGXHdlcSettings::GetWindowSizeRX()
{
    return m_WindowSizeTX;
}

void CGXHdlcSettings::SetWindowSizeRX(unsigned char value)
{
    m_WindowSizeTX = value;
}
