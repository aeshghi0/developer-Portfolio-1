#ifndef MENUMANAGER_H
#define MENUMANAGER_H

#include "loginwindow.h"
#include "addMember.h"
#include "deleteMember.h"
#include "employeetable.h"
#include "listMembersWindow.h"

#include <QDialog>

/** @brief menuManager UI class header file.
    @author Mitchell O'Hair
    @date March 2018
    */

namespace Ui {
class menuManager;
}

class menuManager : public QDialog
{
    Q_OBJECT

public:
    explicit menuManager(QWidget *parent = 0);
    ~menuManager();

private slots:
    /**
     * @brief on_pushButton_logout_clicked - logout
     */
    void on_pushButton_logout_clicked();

    /**
     * @brief on_pushButton_itemSearch_clicked - search item stats
     */
    void on_pushButton_itemSearch_clicked();

    /**
     * @brief on_pushButton_displayMembers_clicked - display member records
     */
    void on_pushButton_displayMembers_clicked();

    /**
     * @brief on_pushButton_displaySalesReport_clicked - display sales report
     */
    void on_pushButton_displaySalesReport_clicked();

    /**
     * @brief on_pushButton_displayPurchases_clicked - display member purchases
     */
    void on_pushButton_displayPurchases_clicked();

    /**
     * @brief on_pushButton_inventory_clicked - display inventory records
     */
    void on_pushButton_inventory_clicked();

private:
    Ui::menuManager *ui;
};

#endif // MENUMANAGER_H
