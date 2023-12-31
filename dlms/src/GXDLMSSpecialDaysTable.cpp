#include "GXDLMSVariant.h"
#include "GXDLMSClient.h"
#include "GXDLMSSpecialDaysTable.h"
#include <sstream>

#ifndef DLMS_IGNORE_SPECIAL_DAYS_TABLE
//Constructor.
CGXDLMSSpecialDaysTable::CGXDLMSSpecialDaysTable() :
    CGXDLMSSpecialDaysTable("", 0)
{
}

//SN Constructor.
CGXDLMSSpecialDaysTable::CGXDLMSSpecialDaysTable(std::string ln, unsigned short sn) :
    CGXDLMSObject(DLMS_OBJECT_TYPE_SPECIAL_DAYS_TABLE, ln, sn)
{

}

//LN Constructor.
CGXDLMSSpecialDaysTable::CGXDLMSSpecialDaysTable(std::string ln) :
    CGXDLMSSpecialDaysTable(ln, 0)
{

}

CGXDLMSSpecialDaysTable::~CGXDLMSSpecialDaysTable()
{
    for (std::vector<CGXDLMSSpecialDay*>::iterator it = m_Entries.begin(); it != m_Entries.end(); ++it)
    {
        delete *it;
    }
    m_Entries.clear();
}

std::vector<CGXDLMSSpecialDay*>& CGXDLMSSpecialDaysTable::GetEntries()
{
    return m_Entries;
}

// Returns amount of attributes.
int CGXDLMSSpecialDaysTable::GetAttributeCount()
{
    return 2;
}

// Returns amount of methods.
int CGXDLMSSpecialDaysTable::GetMethodCount()
{
    return 2;
}

int CGXDLMSSpecialDaysTable::Insert(CGXDLMSClient* client, CGXDLMSSpecialDay* entry, std::vector<CGXByteBuffer>& reply)
{
    CGXDLMSVariant data;
    CGXByteBuffer bb;
    bb.SetUInt8(DLMS_DATA_TYPE_STRUCTURE);
    bb.SetUInt8(3);
    GXHelpers::SetData2(NULL, bb, DLMS_DATA_TYPE_UINT16, entry->GetIndex());
    GXHelpers::SetData2(NULL, bb, DLMS_DATA_TYPE_OCTET_STRING, entry->GetDate());
    GXHelpers::SetData2(NULL, bb, DLMS_DATA_TYPE_UINT8, entry->GetDayId());
    data = bb;
    return client->Method(this, 1, data, DLMS_DATA_TYPE_ARRAY, reply);
}

int CGXDLMSSpecialDaysTable::Delete(CGXDLMSClient* client, CGXDLMSSpecialDay* entry, std::vector<CGXByteBuffer>& reply)
{
    CGXDLMSVariant data = entry->GetIndex();
    data.vt = DLMS_DATA_TYPE_UINT16;
    return client->Method(this, 2, data, reply);
}


void CGXDLMSSpecialDaysTable::GetValues(std::vector<std::string>& values)
{
    values.clear();
    std::string ln, str;
    GetLogicalName(ln);
    values.push_back(ln);
    std::stringstream sb;
    sb << '[';
    bool empty = true;
    for (std::vector<CGXDLMSSpecialDay*>::iterator it = m_Entries.begin(); it != m_Entries.end(); ++it)
    {
        if (!empty)
        {
            sb << ", ";
        }
        empty = false;
        std::string str = (*it)->ToString();
        sb.write(str.c_str(), str.size());
    }
    sb << ']';
    values.push_back(sb.str());
}

void CGXDLMSSpecialDaysTable::GetAttributeIndexToRead(bool all, std::vector<int>& attributes)
{
    //LN is static and read only once.
    if (all || CGXDLMSObject::IsLogicalNameEmpty(m_LN))
    {
        attributes.push_back(1);
    }
    //Entries
    if (all || CanRead(2))
    {
        attributes.push_back(2);
    }
}

int CGXDLMSSpecialDaysTable::GetDataType(int index, DLMS_DATA_TYPE& type)
{
    if (index == 1)
    {
        type = DLMS_DATA_TYPE_OCTET_STRING;
        return DLMS_ERROR_CODE_OK;
    }
    //Entries
    if (index == 2)
    {
        type = DLMS_DATA_TYPE_ARRAY;
        return DLMS_ERROR_CODE_OK;
    }
    return DLMS_ERROR_CODE_INVALID_PARAMETER;
}

// Returns value of given attribute.
int CGXDLMSSpecialDaysTable::GetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e)
{
    if (e.GetIndex() == 1)
    {
        int ret;
        CGXDLMSVariant tmp;
        if ((ret = GetLogicalName(this, tmp)) != 0)
        {
            return ret;
        }
        e.SetValue(tmp);
        return DLMS_ERROR_CODE_OK;
    }
    if (e.GetIndex() == 2)
    {
        e.SetByteArray(true);
        CGXByteBuffer data;
        data.SetUInt8(DLMS_DATA_TYPE_ARRAY);
        //Add count
        GXHelpers::SetObjectCount((unsigned long)m_Entries.size(), data);
        int ret;
        CGXDLMSVariant index, date, id;
        for (std::vector<CGXDLMSSpecialDay*>::iterator it = m_Entries.begin(); it != m_Entries.end(); ++it)
        {
            data.SetUInt8(DLMS_DATA_TYPE_STRUCTURE);
            data.SetUInt8(3); //Count
            index = (*it)->GetIndex();
            date = (*it)->GetDate();
            id = (*it)->GetDayId();
            if ((ret = GXHelpers::SetData(&settings, data, DLMS_DATA_TYPE_UINT16, index)) != DLMS_ERROR_CODE_OK ||
                (ret = GXHelpers::SetData(&settings, data, DLMS_DATA_TYPE_OCTET_STRING, date)) != DLMS_ERROR_CODE_OK ||
                (ret = GXHelpers::SetData(&settings, data, DLMS_DATA_TYPE_UINT8, id)) != DLMS_ERROR_CODE_OK)
            {
                return ret;
            }
        }
        e.SetValue(data);
        return DLMS_ERROR_CODE_OK;
    }
    return DLMS_ERROR_CODE_INVALID_PARAMETER;
}

// Set value of given attribute.
int CGXDLMSSpecialDaysTable::SetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e)
{
    if (e.GetIndex() == 1)
    {
        int ret;
        CGXDLMSVariant tmp;
        if ((ret = GetLogicalName(this, tmp)) != 0)
        {
            return ret;
        }
        e.SetValue(tmp);
        return DLMS_ERROR_CODE_OK;
    }
    else if (e.GetIndex() == 2)
    {
        for (std::vector<CGXDLMSSpecialDay*>::iterator it = m_Entries.begin(); it != m_Entries.end(); ++it)
        {
            delete *it;
        }
        m_Entries.clear();
        if (e.GetValue().vt == DLMS_DATA_TYPE_ARRAY)
        {
            CGXDLMSVariant tmp;
            for (std::vector<CGXDLMSVariant>::iterator item = e.GetValue().Arr.begin(); item != e.GetValue().Arr.end(); ++item)
            {
                CGXDLMSSpecialDay *it = new CGXDLMSSpecialDay();
                it->SetIndex((*item).Arr[0].ToInteger());
                CGXDLMSClient::ChangeType((*item).Arr[1], DLMS_DATA_TYPE_DATE, tmp);
                it->SetDate(tmp.dateTime);
                it->SetDayId((*item).Arr[2].ToInteger());
                m_Entries.push_back(it);
            }
        }
    }
    else
    {
        return DLMS_ERROR_CODE_INVALID_PARAMETER;
    }
    return DLMS_ERROR_CODE_OK;
}
#endif //DLMS_IGNORE_SPECIAL_DAYS_TABLE