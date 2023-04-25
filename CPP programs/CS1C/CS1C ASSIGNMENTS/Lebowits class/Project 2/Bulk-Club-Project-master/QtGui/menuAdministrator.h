#ifndef MENUADMINISTRATOR_H
#define MENUADMINISTRATOR_H

#include "addemployee.h"
#include "deleteemployee.h"
#include "editemployee.h"
#include "employeetable.h"
#include "addMember.h"
#include "deleteMember.h"
#include "memberTable.h"
#include "listMembersWindow.h"
#include "addItem.h"
#include "deleteItem.h"
#include "inventoryTable.h"
#include "displayItem.h"
#include "addSalesInfo.h"
#include "newsales.h"
#include "listInventoryWindow.h"
#include <QDialog>

/** @brief menuAdministrator UI class header file.
    @author Mitchell O'Hair
    @date March 2018
    */

namespace Ui {
class menuAdministrator;
}

class menuAdministrator : public QDialog
{
    Q_OBJECT

public:
    explicit menuAdministrator(QWidget *parent = 0);
    ~menuAdministrator();

private slots:
    /**
     * @brief on_pushButton_2_clicked -  add employee
     */
    void on_pushButton_2_clicked();

    /**
     * @brief on_pushButton_clicked -  logout
     */
    void on_pushButton_clicked();

    /**
     * @brief on_pushButton_3_clicked - delete employee
     */
    void on_pushButton_3_clicked();

    /**
     * @brief on_pushButton_4_clicked - edit employee
     */
    void on_pushButton_4_clicked();

    /**
     * @brief on_pushButton_7_clicked - add member
     */
    void on_pushButton_7_clicked();

    /**
     * @brief on_pushButton_8_clicked - delete member
     */
    void on_pushButton_8_clicked();

    /**
     * @brief on_pushButton_11_clicked - edit member
     */
    void on_pushButton_11_clicked();

    /**
     * @brief on_pushButton_5_clicked - add item
     */
    void on_pushButton_5_clicked();

    /**
     * @brief on_pushButton_6_clicked - delete item
     */
    void on_pushButton_6_clicked();

    /**
     * @brief on_pushButton_10_clicked - edit item
     */
    void on_pushButton_10_clicked();

    /**
     * @brief on_pushButton_9_clicked - new purchase
     */
    void on_pushButton_9_clicked();

private:
    Ui::menuAdministrator *ui;
};

#endif // MENUADMINISTRATOR_H
