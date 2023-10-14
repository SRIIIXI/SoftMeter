#ifndef GXSTANDARDOBISCODECOLLECTION_H
#define GXSTANDARDOBISCODECOLLECTION_H

#include "GXErrorCodes.h"
#include "GXStandardObisCode.h"
#include "GXHelpers.h"

/////////////////////////////////////////////////////////////////////////////
// Obis Code Collection is used to save all default OBIS Codes.
/////////////////////////////////////////////////////////////////////////////
class CGXStandardObisCodeCollection : public std::vector<CGXStandardObisCode*>
{
    //Convert logican name std::string to bytes.
    static int GetBytes(std::string ln, unsigned char* bytes);

    // Check is interface included to standard.
    bool EqualsInterface(CGXStandardObisCode item, int ic);

    // Check OBIS codes.
    static bool EqualsMask(std::string& obis, int ic);

    // Check OBIS code.
    static bool EqualsObisCode(std::vector< std::string >& obisMask, unsigned char* ic);

    // Get description.
    std::string GetDescription(std::string& str);

public:
    int Find(std::string ln, DLMS_OBJECT_TYPE objectType, std::vector<CGXStandardObisCode*>& list);

    static bool EqualsMask(std::string& obisMask, std::string& ln);
    static bool EqualsMask2(std::string obisMask, std::string& ln);

    // Find Standard OBIS Code description.
    void Find(unsigned char* pObisCode, int IC, std::vector<CGXStandardObisCode*>& list);
};
#endif //GXSTANDARDOBISCODECOLLECTION_H
