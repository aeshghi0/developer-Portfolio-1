#ifndef CHANGECUSTOMER2_H
#define CHANGECUSTOMER2_H
#include <QDialog>
#include <iostream>
#include <vector>
#include <QString>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDialog>
#include <QDialog>

/*! \class changeCustomer2
  \brief This class defines the changeCustomer2 class
  It will consist of a GUI that allows the admin to change the details of a customer after a successful login
  It will also inherit from QDialog that is provided by QT
 */

namespace Ui {
class changeCustomer2;
}

class changeCustomer2 : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief changeCustomer2 The changeCustomer2 constructor
     * @param parent Creates a null value to the QWidget parent class
     */
    explicit changeCustomer2(QWidget *parent = nullptr);


    /**
      * @brief ~changeCustomer2 The changeCustomer2 destructor
      */
    ~changeCustomer2();

private slots:
    /**
     * @brief on_pushButton_clicked A private slot that allows the change to be made to the file of customers
     */
    void on_pushButton_clicked();

private:
    Ui::changeCustomer2 *ui; //!< A private member pointer variable that holds the GUI for the changeCustomer2 class
};

#endif // CHANGECUSTOMER2_H
