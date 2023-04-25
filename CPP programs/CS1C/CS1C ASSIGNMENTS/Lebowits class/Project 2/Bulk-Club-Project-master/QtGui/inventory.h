#ifndef INVENTORY_H
#define INVENTORY_H


#include "constants.h"
#include <QStringBuilder>
#include <QString>
using namespace std;

/** @brief inventory class header file.
    @author Kenneth Casimiro
    @date March 2018
    */

class inventory
{
private:
    int     itemID;                         /*!< item Id number */
    QString itemName;                       /*!< item name */
    double  itemPrice;                      /*!< item price */
    int     itemQuantity;                   /*!< item quantity */
public:
    /**
     * @brief getItemID - gets the item id number
     * @return itemID
     */
    int    getItemID() const;               // see the item id number

    /**
     * @brief getItemName - gets the item name
     * @return itemName
     */
    const  QString& getItemName() const;    // see the item name

    /**
     * @brief getItemPrice - gets the item price
     * @return itemPrice
     */
    double getItemPrice() const;            // see the item price

    /**
     * @brief getItemQuantity - gets the item quantity
     * @return itemQuantity
     */
    int    getItemQuantity() const;         // see the item quantity

    /**
     * @brief setItemID - change the item id
     * @param iID - the ID number the user wants to change to
     */
    void setItemID(int iID);                // set the item id number

    /**
     * @brief setItemName - change the item name
     * @param iName - the item name the user wants to change to
     */
    void setItemName(const QString& iName); // set the item name

    /**
     * @brief setItemPrice - change the item price
     * @param iPrice - the item price the user wants to change to
     */
    void setItemPrice(double iPrice);       // set the item price

    /**
     * @brief setItemQuantity - change the item quantity
     * @param iQuan - the item quantity the user wants to change to
     */
    void setItemQuantity(int iQuan);        // set the item quantity

    /**
     * @brief inventory - default constructor
     */
    inventory();

    /**
     * @brief inventory - constructor w/ parameters (create inventory record)
     * @param invent - the inventory record
     */
    inventory(const inventory& invent);

    /**
     * @brief inventory - constructor w/ parameters (delete inventory record)
     * @param iID    - the item ID
     * @param iName  - the item name
     * @param iPrice - the item price
     * @param iQuan  - the item quantity
     */
    inventory(int iID, const QString& iName, double iPrice, int iQuan);

    /**
     * @brief inventory - constructor w/ parameters (edit inventory record)
     * @param iName  - item name
     * @param iPrice - item price
     * @param iQuan  - item quantity
     */
    inventory(const QString& iName, double iPrice, int iQuan);
};

#endif // INVENTORY_H
