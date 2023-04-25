#include "members.h"
#include "constants.h"

const QString& members::getName() const
{
    return memberName;
}

const QString& members::getExpDate() const
{
    return memberExpDate;
}

const QString& members::getStatus() const
{
    return memberStatus;
}

int members::getID() const
{
    return memberID;
}

void members::setName(const QString &name)
{
    memberName = name;
}

void members::setExpDate(const QString &expDate)
{
    memberExpDate = expDate;
}

void members::setStatus(const QString &status)
{
    memberStatus = status;
}

void members::setID(int newID)
{
    memberID = newID;
}

members::members()
    :members(UNASSIGNED_DB_ID, "","","")
{
}

members::members(const members &member)
    :members(member.memberID, member.memberName, member.memberStatus,member.memberExpDate)
{
}

members::members(int id, const QString &name, const QString &memStatus, const QString &expDate)
    :memberID(id), memberName(name), memberStatus(memStatus), memberExpDate(expDate)
{
}

members::members(const QString &name, const QString &memStatus, const QString &expDate)
    :members(UNASSIGNED_DB_ID, name, memStatus, expDate)
{
}
