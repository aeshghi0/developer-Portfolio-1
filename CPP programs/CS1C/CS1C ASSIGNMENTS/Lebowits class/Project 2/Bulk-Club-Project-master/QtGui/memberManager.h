#ifndef MEMBERMANAGER_H
#define MEMBERMANAGER_H

#include "members.h"
#include "dbmanager.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QVariant> //need for bindValue call.
#include <QDebug>

/** @brief memberManager class header file.
    @author Kenneth Casimiro
    @date March 2018
    */

class memberManager
{
public:
    /**
     * @brief instance - creates an instance of memberManager
     * @return instance of memberManager
     */
    static memberManager& instance();

    /**
     * @brief memberManager - disable copy
     */
    memberManager(memberManager const&) = delete;  // Don't forget to disable copy

    /**
     * @brief operator = - disable copy
     */
    void operator=(memberManager const&) = delete; // Don't forget to disable copy

    /**
     * @brief createMember - create a member record
     * @param member - member record
     * @return bool to see if it was successful or not
     */
    bool createMember(const members& member) const;

    /**
     * @brief deleteMember - delete a member record
     * @param memberId - member record id number
     * @return bool to see if it was successful or not
     */
    bool deleteMember(int memberId) const;

private:
    /**
     * @brief memberManager - forbid creation outside of class
     */
    memberManager();  // forbid creation outside class

    /**
     * @brief forbid deletion outside of class
     */
    ~memberManager(); // forbid to delete instance outside

};

#endif // MEMBERMANAGER_H
