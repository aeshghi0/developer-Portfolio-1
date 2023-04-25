#ifndef LOGINMANAGER_H
#define LOGINMANAGER_H

#include "user.h"
#include "dbmanager.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QVariant> //need for bindValue call.
#include <QDebug>
using namespace std;

/** @brief LoginManager class header file.
    @author Mitchell O'Hair
    @date March 2018
    */

class LoginManager
{
public:
    /**
     * @brief instance - creates an instance of LoginManager
     * @return instance of LoginManager
     */
    static LoginManager& instance();

    /**
     * @brief LoginManager - disable copy
     */
    LoginManager(LoginManager const&) = delete;     // Don't forget to disable copy

    /**
     * @brief operator = - disable copy
     */
    void operator=(LoginManager const&) = delete;   // Don't forget to disable copy

    /**
     * @brief createUserAccount - creates an employee record
     * @param user - employee record
     * @return - bool to see if it was successful or not
     */
    bool createUserAccount(const User& user) const; // will not be modifying internal state of AuthManager so const. Parameter also const since user cannot be modified.

    /**
     * @brief deleteUserAccount - delete an employee record
     * @param userId - employee record id number
     * @return - boolt to see if it was successful or not
     */
    bool deleteUserAccount(int userId) const;

    /**
     * @brief updateUserAccount - update a employee record
     * @param user - employee record
     * @return  - bool to see if it was successful or not
     */
    bool updateUserAccount(const User& user) const;

    /**
     * @brief authenticate - to see if the employee information is in the database
     * @param username - employee username
     * @param password - employee password
     * @return bool to see if it was successfull or not
     */
    User authenticate(const QString& username, const QString& password) const;
private:
    /**
       * @brief LoginManager - forbid creation outside of class
       */
      LoginManager();  //forbid creation outside class

      /**
       * @brief forbid deletion outside of class
       */
      ~LoginManager(); // forbid to delete instance outside
};

#endif // LOGINMANAGER_H
