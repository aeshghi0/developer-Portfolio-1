#ifndef ADDMEMBER_H
#define ADDMEMBER_H

#include "loginwindow.h"
#include "members.h"
#include "memberManager.h"
#include <QDialog>

namespace Ui {
class addMember;
}

/** @brief addMember class used for UI purposes. UI interface for adding a member record.

    UI class code to add a new item record
    @author Kenneth Casimiro
    @date March 2018
    */

class addMember : public QDialog
{
    Q_OBJECT

public:
    /** Default constructor.
        */
    explicit addMember(QWidget *parent = 0);
    /** Default destructor.
        */
    ~addMember();

private slots:

    /** Return back button. Returns the user to the previous window
        */
    void on_back_button_clicked();

    /** Logout button. Returns the user to the login window
        */
    void on_logout_button_clicked();

    /** Submit button. Creates the new member record
        */
    void on_button_submit_clicked();

private:
    Ui::addMember *ui;
};

#endif // ADDMEMBER_H
