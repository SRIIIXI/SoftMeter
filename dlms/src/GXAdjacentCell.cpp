#include "GXAdjacentCell.h"

unsigned long GXAdjacentCell::GetCellId() {
    return m_CellId;
}

void GXAdjacentCell::SetCellId(unsigned long value) {
    m_CellId = value;
}

unsigned char GXAdjacentCell::GetSignalQuality() {
    return m_SignalQuality;
}

void GXAdjacentCell::SetSignalQuality(unsigned char value) {
    m_SignalQuality = value;
}