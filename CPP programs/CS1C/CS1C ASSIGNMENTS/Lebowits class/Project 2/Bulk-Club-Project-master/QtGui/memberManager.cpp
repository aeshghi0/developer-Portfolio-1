#include "memberManager.h"

// Constructor & Destructor
memberManager::memberManager() {}
memberManager::~memberManager() {}

// methods
memberManager& memberManager::instance()
{
    static memberManager instance;

    return instance;
}

bool memberManager::createMember(const members& member) const
{
    if(member.getName().isEmpty() || member.getExpDate().isEmpty())
    {
        qDebug() << "Cannot create a member if their name is not provided";
        return false;
    }

    QSqlQuery insertQuery;
    insertQuery.prepare("INSERT INTO Member (MemberID, MemberName, MemberStatus, MemberExpire) VALUES (:memId, :name, :memType, :memExpDate)");
    insertQuery.bindValue("memId", member.getID());
    insertQuery.bindValue(":name", member.getName());
    insertQuery.bindValue(":memType", member.getStatus());
    insertQuery.bindValue(":memExpDate", member.getExpDate());

    if(insertQuery.exec())
    {
        qDebug() << "Member creation succeeded!";
        return true;
    }
    else
    {
        qDebug() << "Member creation failed: " << insertQuery.lastError();
        return false;
    }
}

bool memberManager::deleteMember(int memberId) const
{
    QSqlQuery deleteQuery;
    deleteQuery.prepare("DELETE FROM Member WHERE MemberID = :memId");
    deleteQuery.bindValue(":memId", memberId);

    if(deleteQuery.exec())
    {
        return true;
    }
    else
    {
        return false;
    }
}


