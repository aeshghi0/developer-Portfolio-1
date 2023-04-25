#ifndef DELETEEMPLOYEE_H
#define DELETEEMPLOYEE_H

#include <loginwindow.h>
#include "dbmanager.h"

#include <QDialog>

/** @brief deleteEmployee header file UI used to delete a employee record.

    @author Mitchell O'Hair
    @date March 2018
    */

namespace Ui {
class deleteEmployee;
}

class deleteEmployee : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief default constructor
     * @param parent
     */
    explicit deleteEmployee(QWidget *parent = 0);
    /**
      * @brief default destructor
      */
    ~deleteEmployee();

private slots:
    /**
     * @brief on_pushButton_clicked - back button; goes back to the previous window
     */
    void on_pushButton_clicked();

    /**
     * @brief on_pushButton_2_clicked - logout button; goes to the login window
     */
    void on_pushButton_2_clicked();

    /**
     * @brief on_pushButton_3_clicked - submit button; takes the user input to find and delete an employee record
     */
    void on_pushButton_3_clicked();

private:
    Ui::deleteEmployee *ui;
};

#endif // DELETEEMPLOYEE_H
