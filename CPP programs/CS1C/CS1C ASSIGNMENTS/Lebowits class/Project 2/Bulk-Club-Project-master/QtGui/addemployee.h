#ifndef ADDEMPLOYEE_H
#define ADDEMPLOYEE_H

#include "loginwindow.h"

#include <QDialog>

/** @brief addEmployee class used for UI purposes. UI interface for adding a employee record.

    UI class code to add a new employee record
    @author Mitchell O'Hair
    @date March 2018
    */

namespace Ui {
class addEmployee;
}

class addEmployee : public QDialog
{
    Q_OBJECT

public:
    /** Default constructor.
        */
    explicit addEmployee(QWidget *parent = 0);
    /** Default destructor.
        */
    ~addEmployee();

private slots:
    /** Return back button. Returns the user to the previous window
        */
    void on_back_button_clicked();

    /** Logout button. Returns the user to the login window
        */
    void on_logout_button_clicked();

    /** Submit button. Creates the new employee record
        */
    void on_button_submit_clicked();

private:
    Ui::addEmployee *ui;
};

#endif // ADDEMPLOYEE_H
