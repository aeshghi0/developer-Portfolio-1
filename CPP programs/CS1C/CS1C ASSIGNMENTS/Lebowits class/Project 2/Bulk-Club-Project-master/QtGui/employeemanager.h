#ifndef EMPLOYEEMANAGER_H
#define EMPLOYEEMANAGER_H

#include "user.h"
#include "loginmanager.h"

#include <QWidget>
#include <QMainWindow>

namespace Ui {
class EmployeeManager;
}

class EmployeeManager : public QMainWindow
{
    Q_OBJECT

public:
    explicit EmployeeManager(QWidget *parent = 0);
    ~EmployeeManager();

private slots:

    void on_pushButton_Add_clicked();

    void on_pushButton_Delete_clicked();

    void on_pushButton_Edit_clicked();

private:
    Ui::EmployeeManager *ui;
};

#endif // EMPLOYEEMANAGER_H
