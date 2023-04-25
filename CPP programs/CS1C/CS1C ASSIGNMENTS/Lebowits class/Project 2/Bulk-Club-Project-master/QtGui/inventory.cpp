#include "inventory.h"
#include "constants.h"

int inventory::getItemID() const
{
    return itemID;
}

const QString& inventory::getItemName() const
{
    return itemName;
}

double inventory::getItemPrice() const
{
    return itemPrice;
}

int inventory::getItemQuantity() const
{
    return itemQuantity;
}

void inventory::setItemID(int iID)
{
    itemID = iID;
}

void inventory::setItemName(const QString &iName)
{
    itemName = iName;
}

void inventory::setItemPrice(double iPrice)
{
    itemPrice = iPrice;
}

void inventory::setItemQuantity(int iQuan)
{
    itemQuantity = iQuan;
}

inventory::inventory()
    :inventory(UNASSIGNED_DB_ID, "", 0, 0)
{
}

inventory::inventory(const inventory &invent)
    :inventory(invent.itemID, invent.itemName, invent.itemPrice, invent.itemQuantity)
{
}

inventory::inventory(int iID, const QString &iName, double iPrice, int iQuan)
    :itemID(iID), itemName(iName), itemPrice(iPrice), itemQuantity(iQuan)
{
}

inventory::inventory(const QString &iName, double iPrice, int iQuan)
    :inventory(UNASSIGNED_DB_ID, iName, iPrice, iQuan)
{
}
