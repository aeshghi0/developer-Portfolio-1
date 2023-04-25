#ifndef INVENTORYMANAGER_H
#define INVENTORYMANAGER_H

#include "inventory.h"
#include "salesInfo.h"
#include "dbmanager.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QVariant> //need for bindValue call.
#include <QDebug>

/** @brief inventoryManager class function method header file.
    @author Kenneth Casimiro
    @date March 2018
    */

class inventoryManager
{
public:
    /**
     * @brief instance - makes it where only one manager is active
     * @return instance of inventoryManager
     */
    static inventoryManager& instance();

    /**
     * @brief inventoryManager - disable copy
     */
    inventoryManager(inventoryManager const&) = delete;  // Don't forget to disable copy

    /**
     * @brief operator = - disable copy
     */
    void operator=(inventoryManager const&) = delete; // Don't forget to disable copy

    /**
     * @brief createInventory - create an inventory record
     * @param inventory - inventory record
     * @return bool to determine if it was successful or not
     */
    bool createInventory(const inventory& inventory) const;

    /**
     * @brief updateInventory - update an inventory record
     * @param salesInfo - salesInfo record
     * @return bool to determine if it was successful or not
     */
    bool updateInventory(const salesInfo& salesInfo) const;

    /**
     * @brief deleteInventory - delete an inventory record
     * @param iID - item ID number
     * @return  - bool to determine if it was successful or not
     */
    bool deleteInventory(int iID) const;

private:
    /**
     * @brief inventoryManager - forbids creation outside of class
     */
    inventoryManager();  // forbid creation outside class

    /**
      * @brief forbids deletion outside of class
      */
    ~inventoryManager(); // forbid to delete instance outside

};

#endif // INVENTORYMANAGER_H
