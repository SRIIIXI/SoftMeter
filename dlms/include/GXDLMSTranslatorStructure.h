#ifndef GXDLMSTRANSLATOR_STRUCTURE_H
#define GXDLMSTRANSLATOR_STRUCTURE_H

#include "GXIgnore.h"
#ifndef DLMS_IGNORE_XML_TRANSLATOR
#include <sstream>
#include "GXEnums.h"
#include "GXByteBuffer.h"
#include "TranslatorSimpleTags.h"
#include "TranslatorStandardTags.h"
#include "GXDLMSVariant.h"

class CGXDLMSTranslatorStructure
{
    DLMS_TRANSLATOR_OUTPUT_TYPE m_OutputType;
    bool m_OmitNameSpace;

    // Amount of spaces.
    int m_Offset;

    std::ostringstream m_Sb;

    std::map<unsigned long, std::string> m_Tags;
    /**
     * Are numeric values shows as hex.
     */
    bool m_ShowNumericsAsHex;

    bool m_ShowStringAsHex;

    // Are comments added.
    bool m_Comments;
    //Are spaces ignored.
    bool m_IgnoreSpaces;

    std::string GetTag(unsigned long tag);
    char tmp[20];
public:
    DLMS_TRANSLATOR_OUTPUT_TYPE GetOutputType();

    bool GetOmitNameSpace();

    int GetOffset();

    void SetOffset(int value);

    std::string GetDataType(DLMS_DATA_TYPE type);

    bool GetShowStringAsHex();

    void SetShowStringAsHex(bool value);

    bool GetComments();

    void SetComments(bool value);

    // Are spaces ignored.
    bool GetIgnoreSpaces();

    // Are spaces ignored.
    void SetIgnoreSpaces(bool value);

    // Constructor.
    CGXDLMSTranslatorStructure(
        DLMS_TRANSLATOR_OUTPUT_TYPE type,
        bool omitNameSpace,
        bool numericsAshex,
        bool hex,
        bool comments,
        std::map<unsigned long, std::string> list);

    std::string ToString();

    // Append spaces.
    void AppendSpaces();

    void AppendLine(std::string str);

    void AppendLine(unsigned long tag, std::string name, CGXDLMSVariant& value);

    void AppendLine(unsigned long tag, std::string name, std::string& value);

    void AppendLine(std::string tag, std::string name, CGXDLMSVariant& value);

    // Start comment section.
    // comment: Comment to add.
    void StartComment(std::string comment);

    void AppendLine(std::string tag, std::string name, std::string& value);

    // End comment section.
    void EndComment();

    // Append comment.
    // comment: Comment to add.
    void AppendComment(std::string comment);

    void Append(std::string& value);

    void Append(unsigned long tag, bool start);

    void AppendStartTag(unsigned long tag, std::string name, std::string& value);

    void AppendStartTag(unsigned long tag, std::string name, std::string& value, bool plain);

    void AppendStartTag(unsigned long cmd);

    void AppendStartTag2(unsigned long cmd, bool plain);

    void AppendStartTag(unsigned long cmd, unsigned long type);

    void AppendStartTag(std::string tag, bool plain);

    void AppendStartTag(std::string tag);

    void AppendEndTag(unsigned long cmd, unsigned long type);

    void AppendEndTag(unsigned long tag);

    void AppendEndTag(unsigned long tag, bool plain);

    void AppendEndTag(std::string& tag);

    void AppendEmptyTag(unsigned long tag);

    void AppendEmptyTag(std::string tag);

    // Remove \r\n.
    void Trim();

    // Get XML Length.
    int GetXmlLength();

    // Set XML Length.
    void SetXmlLength(int value);

    // Convert integer to string.
    // value: Conveted value.
    // <param name="desimals">Desimal count.
    // returns: Integer value as a string.
    int IntegerToHex(long value, int desimals, std::string& result);

    // Convert integer to string.
    // value: Conveted value.
    // <param name="desimals">Desimal count.
    // returns: Integer value as a string.
    int IntegerToHex(unsigned long value, int desimals, std::string& result);

    // Convert integer to string.
    // value: Conveted value.
    // <param name="desimals">Desimal count.
    // <param name="forceHex">Force value as hex.
    // returns: Integer value as a string.
    int IntegerToHex(long value, int desimals, bool forceHex, std::string& result);

    // Convert integer to string.
    // value: Conveted value.
    // <param name="desimals">Desimal count.
    // <param name="forceHex">Force value as hex.
    // returns: Integer value as a string.
    int IntegerToHex(unsigned long value, int desimals, bool forceHex, std::string& result);

    // Convert integer to string.
    // value: Conveted value.
    // returns: Integer value as a string.
    int IntegerToHex(unsigned long value, std::string& result);

    // Convert integer to string.
    // value: Conveted value.
    // returns: Integer value as a string.
    int IntegerToHex(long long value, std::string& result);

    // Convert integer to string.
    // value: Conveted value.
    // returns: Integer value as a string.
    int IntegerToHex(unsigned long long value, std::string& result);
};
#endif //DLMS_IGNORE_XML_TRANSLATOR
#endif //GXDLMSTRANSLATOR_STRUCTURE_H
