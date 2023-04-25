#include "salesInfo.h"
#include "constants.h"

//QString itemDate;
//int     membID;
//QString itemName;
//double  itemCost;
//int     itemQuantity;

const QString& salesInfo::getItemDate() const
{
    return itemDate;
}

int salesInfo::getMembID() const
{
    return membID;
}

const QString& salesInfo::getItemName() const
{
    return itemName;
}

double salesInfo::getItemCost() const
{
    return itemCost;
}

int salesInfo::getItemQuantity() const
{
    return itemQuantity;
}

void salesInfo::setItemDate(const QString &date)
{
    itemDate = date;
}

void salesInfo::setMembID(int memID)
{
    membID = memID;
}

void salesInfo::setItemName(const QString &name)
{
    itemName = name;
}

void salesInfo::setItemCost(double cost)
{
    itemCost = cost;
}

salesInfo::salesInfo()
    :salesInfo("",0,"",0,0)
{
}

salesInfo::salesInfo(const salesInfo &salesInf)
    :salesInfo(salesInf.itemDate, salesInf.membID, salesInf.itemName, salesInf.itemCost, salesInf.itemQuantity)
{
}

salesInfo::salesInfo(const QString &date, int memID, const QString &name, double cost, int quan)
    :itemDate(date), membID(memID), itemName(name), itemCost(cost), itemQuantity(quan)
{
}

/*salesInfo::salesInfo(const QString &name, const QString &memStatus, const QString &expDate)
    :salesInfo(UNASSIGNED_DB_ID, name, memStatus, expDate)
{
}*/
