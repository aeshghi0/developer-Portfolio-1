#ifndef DELETEITEM_H
#define DELETEITEM_H

#include <QDialog>
#include "loginwindow.h"
#include "inventory.h"
#include "inventorymanager.h"

/** @brief deleteItem header file UI used to delete a item record.

    @author Kenneth Casimiro
    @date March 2018
    */

namespace Ui {
class deleteItem;
}

class deleteItem : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief deleteItem - default constructor
     * @param parent
     */
    explicit deleteItem(QWidget *parent = 0);
    /**
     * @brief default destructor
     */
    ~deleteItem();
private slots:
    /**
     * @brief on_pushButton_back_clicked - back button; goes back to the previous window
     */
    void on_pushButton_back_clicked();

    /**
     * @brief on_pushButton_logout_clicked - logout button; goes to the login window
     */
    void on_pushButton_logout_clicked();

    /**
     * @brief on_pushButton_3_clicked - submit; takes user input to find and delete an item record
     */
    void on_pushButton_3_clicked();
private:
    Ui::deleteItem *ui;
};

#endif // DELETEITEM_H
