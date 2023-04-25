#ifndef LOGIN_H
#define LOGIN_H
#include "authorisedhomepage.h"
#include <QDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QFile>
#include <vector>
#include <utility>
#include <QDebug>

/*! \class login
  \brief This class defines the login class
  It will consist of a GUI that allows the admin to login to a special screen
  It will inherit from QDialog provided by QT
 */

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief login The login class constructor
     * @param parent Creates a null value to the QWidget parent class
     */
    explicit login(QWidget *parent = nullptr);




    /**
       * @brief login The login class constructor
       */
    ~login();

private slots:
    /**
     * @brief on_pushButton_clicked A private slot that allows the admin to log in if they got the username and password correct
     */
    void on_pushButton_clicked();

private:
    Ui::login *ui; //!< A private member pointer variable that holds the GUI for the login class
};

#endif // LOGIN_H
