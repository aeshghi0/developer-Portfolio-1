#ifndef SALESINFO_H
#define SALESINFO_H

#include "constants.h"
//#include "inventory.h"
#include <QStringBuilder>
#include <QString>
using namespace std;

/** @brief salesInfo class header file.
    @author Mason Godfrey
    @date March 2018
    */

class salesInfo
{
private:
    QString itemDate;      /*!< item date */
    int     membID;        /*!< member id */
    QString itemName;      /*!< item name */
    double  itemCost;      /*!< item cost */
    int     itemQuantity;  /*!< item quantity */

public:
    /**
     * @brief getItemDate - gets item date
     * @return  itemDate
     */
    const  QString& getItemDate() const;

    /**
     * @brief getMembID - gets member id number
     * @return  membID
     */
    int    getMembID() const;

    /**
     * @brief getItemName - gets item name
     * @return itemName
     */
    const  QString& getItemName() const;

    /**
     * @brief getItemCost - gets item cost
     * @return itemCost
     */
    double getItemCost() const;

    /**
     * @brief getItemQuantity - gets item quantity
     * @return itemQuantity
     */
    int    getItemQuantity() const;

    /**
     * @brief setItemDate - changes item date to user specified
     * @param date
     */
    void setItemDate(const QString& date);

    /**
     * @brief setMembID - changes member ID to user specified
     * @param memID
     */
    void setMembID(int memID);

    /**
     * @brief setItemName - changes item name to user specified
     * @param name
     */
    void setItemName(const QString& name);

    /**
     * @brief setItemCost - changes item cost to user specified
     * @param cost
     */
    void setItemCost(double cost);

    /**
     * @brief setItemQuantity - changes item quantity to user specified
     * @param quan
     */
    void setItemQuantity(int quan);

    /**
     * @brief salesInfo - default constructor
     */
    salesInfo();

    /**
     * @brief salesInfo - constructor w/ parameters
     * @param salesInfo
     */
    salesInfo(const salesInfo& salesInfo);

    /**
     * @brief salesInfo - constructor w/ parameters (create new purchase)
     * @param date  - itemDate
     * @param memID - membID
     * @param name  - itemName
     * @param cost  - itemCost
     * @param quan  - itemQuantity
     */
    salesInfo(const QString& date, int memID, const QString& name, double cost, int quan);
};

#endif // SALESINFO_H
