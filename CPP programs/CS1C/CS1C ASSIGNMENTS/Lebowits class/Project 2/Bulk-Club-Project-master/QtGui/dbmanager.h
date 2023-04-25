#ifndef DBMANAGER_H
#define DBMANAGER_H

#include "constants.h"

#include <QSqlDatabase>
#include <QDebug>
#include <QFile>

/** @brief DbManager header file used to manage the database.

    @author Mitchell O'Hair
    @date March 2018
    */

class DbManager
{
public:
    /**
     * @brief instance - connects to the database
     * @return the instance of the database
     */
    static DbManager& instance();

    /**
     * @brief DbManager - deletes the copy constructor
     */
    DbManager(const DbManager&) = delete; //delete copy constructor

    /**
     * @brief operator = (deletes the = operator)
     */
    void operator =(const DbManager&) = delete; //delete = operator

    /**
     * @brief isOpen - checks if the database is open
     * @return a bool if its open or not (1 or 0 )
     */
    bool isOpen() const;
private:
    /**
     * @brief DbManager - default constructor
     */
    DbManager();

    /**
     * @brief DbManager - default destructor
     */
    ~DbManager();

    /**
     * @brief bulkDB - default database
     */
    QSqlDatabase bulkDB;
};

#endif // DBMANAGER_H
