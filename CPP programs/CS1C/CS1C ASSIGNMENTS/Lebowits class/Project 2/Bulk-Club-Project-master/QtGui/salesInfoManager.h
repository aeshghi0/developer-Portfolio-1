#ifndef SALESINFOMANAGER_H
#define SALESINFOMANAGER_H

#include "salesInfo.h"
#include "inventorymanager.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QVariant> //need for bindValue call.
#include <QDebug>
#include <QDialog>

/** @brief salesInfoManager class header file.
    @author Mason Godfrey
    @date March 2018
    */

class salesInfoManager
{
public:
    /**
     * @brief instance - create an instance of salesInfoManager
     * @return instance of salesInfoManager
     */
    static salesInfoManager& instance();

    /**
     * @brief salesInfoManager - disable copy
     */
    salesInfoManager(salesInfoManager const&) = delete;  // Don't forget to disable copy

    /**
     * @brief operator = - disable copy
     */
    void operator=(salesInfoManager const&) = delete; // Don't forget to disable copy

    /**
     * @brief createSalesInfo - create new purchase
     * @param salesInfo - salesInfo record
     * @return bool to see if it was successful or not
     */
    bool createSalesInfo(const salesInfo& salesInfo) const;

private:
    /**
     * @brief salesInfoManager - forbid creation outside of class
     */
    salesInfoManager();  // forbid creation outside class

    /**
     * forbid deletion outside of class
     */
    ~salesInfoManager(); // forbid to delete instance outside
};

#endif // SALESINFOMANAGER_H
