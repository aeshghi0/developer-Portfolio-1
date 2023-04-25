#ifndef EDITEMPLOYEE_H
#define EDITEMPLOYEE_H

#include "loginmanager.h"
#include "loginwindow.h"
#include "menuAdministrator.h"

#include <QDialog>

/** @brief editemployee header file UI used to edit a employees record.
    @author Kenneth Casimiro
    @date March 2018
    */

namespace Ui {
class editEmployee;
}

class editEmployee : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief editEmployee - default constructor
     * @param parent
     */
    explicit editEmployee(QWidget *parent = 0);
    ~editEmployee();

private slots:
    /**
     * @brief on_pushButton_clicked - back button; goes back to previous window
     */
    void on_pushButton_clicked();

    /**
     * @brief on_pushButton_2_clicked - logout button; goes to login window
     */
    void on_pushButton_2_clicked();

private:
    Ui::editEmployee *ui;
};

#endif // EDITEMPLOYEE_H
