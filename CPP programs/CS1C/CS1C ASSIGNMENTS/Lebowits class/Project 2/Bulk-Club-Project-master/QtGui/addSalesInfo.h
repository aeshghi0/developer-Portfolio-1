#ifndef ADDSALESINFO_H
#define ADDSALESINFO_H

#include "loginwindow.h"
#include "salesInfo.h"
#include "salesInfoManager.h"
#include <QDialog>

/** @brief addSalesInfo class used for UI purposes. UI interface for adding a member purchase record.

    UI class code to add a new item record
    @author Mason Godfrey
    @date March 2018
    */

namespace Ui {
class addSalesInfo;
}

class addSalesInfo : public QDialog
{
    Q_OBJECT

public:
    /** Default constructor.
        */
    explicit addSalesInfo(QWidget *parent = 0);
    /** Default destructor.
        */
    ~addSalesInfo();

private slots:
    /** Return back button. Returns the user to the previous window
        */
    void on_logout_button_clicked();

    /** Logout button. Returns the user to the login window
        */
    void on_back_button_clicked();

    /** Submit button. Creates the new member purchase record
        */
    void on_button_submit_clicked();

private:
    Ui::addSalesInfo *ui;
};

#endif // ADDSALESINFO_H
