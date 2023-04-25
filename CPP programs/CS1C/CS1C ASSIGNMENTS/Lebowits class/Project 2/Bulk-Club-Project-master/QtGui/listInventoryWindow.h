#ifndef LISTINVENTORYWINDOW_H
#define LISTINVENTORYWINDOW_H

#include <QDialog>
#include "loginwindow.h"
#include "inventorymanager.h"
#include "displayPurchases.h"

/** @brief listInventoryWindow UI class header file.
    @author Mitch O'Hair
    @date March 2018
    */

namespace Ui {
class listInventoryWindow;
}

class listInventoryWindow : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief listInventoryWindow - show all inventory records
     * @param parent
     */
    explicit listInventoryWindow(QWidget *parent = 0);
    ~listInventoryWindow();

private slots:
    /**
     * @brief on_pushButton_back_clicked - goes back to previous window
     */
    void on_pushButton_back_clicked();

    /**
     * @brief on_pushButton_logout_clicked - goes to login window
     */
    void on_pushButton_logout_clicked();

private:
    Ui::listInventoryWindow *ui;
};

#endif // LISTINVENTORYWINDOW_H
