#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include "user.h"
#include "menuAdministrator.h"
#include "menuManager.h"
#include "dbmanager.h"
#include "loginmanager.h"

#include <QMainWindow>
#include <QMessageBox>
#include <QSqlDatabase>

/** @brief LoginWindow class header file.
    @author Mitchell O'Hair
    @date March 2018
    */

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief LoginWindow - login window default constructor
     * @param parent
     */
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

private slots:
    /**
     * @brief on_pushButton_login_clicked - submit to see if user input was correct; if so it will direct them to the menu
     */
    void on_pushButton_login_clicked();

private:
    Ui::LoginWindow *ui;
};

#endif // LOGINWINDOW_H
