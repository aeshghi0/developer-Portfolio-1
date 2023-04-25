#ifndef MEMBERS_H
#define MEMBERS_H

#include "constants.h"
#include <QStringBuilder>
#include <QString>
using namespace std;

/** @brief members class header file.
    @author Kenneth Casimiro
    @date March 2018
    */

class members
{
private:
    QString memberName;    /*!< member name */
    int     memberID;      /*!< member id */
    QString memberStatus;  /*!< member status */
    QString memberExpDate; /*!< member expiration date */


public:
    /**
     * @brief getName - gets member name
     * @return memberName
     */
    const QString& getName() const;

    /**
     * @brief getID - gets member ID number
     * @return  memberID
     */
    int   getID() const;

    /**
     * @brief getStatus - gets member status
     * @return memberStatus
     */
    const QString& getStatus() const;

    /**
     * @brief getExpDate - gets expiration date
     * @return  memberExpDate
     */
    const QString& getExpDate() const;

    /**
     * @brief setName - changes the name to user specified
     * @param name
     */
    void setName(const QString& name);

    /**
     * @brief setID - changes member id to user specified
     * @param newID
     */
    void setID(int newID);

    /**
     * @brief setStatus - changes member status to user specified
     * @param status
     */
    void setStatus(const QString& status);

    /**
     * @brief setExpDate - changes member expiration date to user specified
     * @param expDate
     */
    void setExpDate(const QString& expDate);

    /**
     * @brief members - default constructor
     */
    members();

    /**
     * @brief members - constructor w/ parameters (create a member)
     * @param member - member record
     */
    members(const members& member);

    /**
     * @brief members - constructor w/ parameters (delete a member)
     * @param id - member id number
     * @param name - member name
     * @param memStatus - member status
     * @param expDate - member expiration date
     */
    members(int id, const QString& name, const QString& memStatus, const QString& expDate);

    /**
     * @brief members - constructor w/ parameters (edit a member)
     * @param name - member name
     * @param memStatus - member status
     * @param expDate - member expiration date
     */
    members(const QString& name, const QString& memStatus, const QString& expDate);
};

#endif // MEMBERS_H
