#ifndef ADDITEM_H
#define ADDITEM_H

#include <QDialog>

/** @brief addItem class used for UI purposes. UI interface for adding a item record.

    UI class code to add a new item record
    @author Kenneth Casimiro
    @date March 2018
    */

namespace Ui {
class addItem;
}

class addItem : public QDialog
{
    Q_OBJECT

public:
    /** Default constructor.
        */
    explicit addItem(QWidget *parent = 0);
    /** Default destructor.
        */
    ~addItem();

private slots:
    /** Return back button. Returns the user to the previous window
        */
    void on_back_button_clicked();

    /** Logout button. Returns the user to the login window
        */
    void on_logout_button_clicked();

    /** Submit button. Creates the new item record
        */
    void on_submit_button_clicked();

private:
    Ui::addItem *ui;
};

#endif // ADDITEM_H
