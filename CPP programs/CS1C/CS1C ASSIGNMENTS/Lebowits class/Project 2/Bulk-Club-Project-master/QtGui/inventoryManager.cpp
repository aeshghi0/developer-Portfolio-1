#include "inventorymanager.h"

// Constructor & Destructor
inventoryManager::inventoryManager() {}
inventoryManager::~inventoryManager() {}

// methods
inventoryManager& inventoryManager::instance()
{
    static inventoryManager instance;

    return instance;
}

bool inventoryManager::createInventory(const inventory& inventory) const
{
    if(inventory.getItemName().isEmpty() || inventory.getItemPrice() <= 0)
    {
        qDebug() << "Cannot create an item if it's name or price is not provided";
        return false;
    }

    QSqlQuery insertQuery;
    insertQuery.prepare("INSERT INTO Inventory (itemID, itemName, itemPrice, itemQuantity, totalSales, totalSold) VALUES (:iID, :iName, :iPrice, :iQuan, :iSale, :iSold)");
    insertQuery.bindValue("iID", inventory.getItemID());
    insertQuery.bindValue(":iName", inventory.getItemName());
    insertQuery.bindValue(":iPrice", inventory.getItemPrice());
    insertQuery.bindValue(":iQuan", inventory.getItemQuantity());
    insertQuery.bindValue(":iSale", 0);
    insertQuery.bindValue(":iSold", 0);

    if(insertQuery.exec())
    {
        qDebug() << "Item creation succeeded!";
        return true;
    }
    else
    {
        qDebug() << "Item creation failed: " << insertQuery.lastError();
        return false;
    }
}

bool inventoryManager::updateInventory(const salesInfo& salesInfo) const
{
    QSqlQuery updateQuery;
    updateQuery.prepare("UPDATE Inventory "
                        "Set itemQuantity = itemQuantity - :qty, totalSales = totalSales + itemPrice*:qty, totalSold = totalSold + :qty "
                        "WHERE itemName = :name");
    updateQuery.bindValue(":qty", salesInfo.getItemQuantity());
    updateQuery.bindValue(":name", salesInfo.getItemName());

    if(updateQuery.exec())
    {
        qDebug() << "Item update succeeded!";
        return true;
    }
    else
    {
        qDebug() << "Item update failed: " << updateQuery.lastError();
        return false;
    }
}

bool inventoryManager::deleteInventory(int itemId) const
{
    QSqlQuery deleteQuery;
    deleteQuery.prepare("DELETE FROM Inventory WHERE itemID = :iID");
    deleteQuery.bindValue(":iID", itemId);

    if(deleteQuery.exec())
    {
        return true;
    }
    else
    {
        return false;
    }
}


