#ifndef DELETECUSTOMER_H
#define DELETECUSTOMER_H

#include <QDialog>

/*! \class deletecustomer
  \brief This class defines the deleteCustomer class
  It will consist of a GUI that allows the admin to delete a customer
  It will inherit from class QDialog provided by QT
 */

namespace Ui {
class deletecustomer;
}

class deletecustomer : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief deletecustomer The deleteCustomer constructor
     * @param parent Creates a null value to the QWidget parent class
     */
    explicit deletecustomer(QWidget *parent = nullptr);




    /**
      * @brief deletecustomer The deleteCustomer destructor
      */
    ~deletecustomer();

private slots:
    /**
     * @brief on_pushButton_clicked A private slot function that allows the admin to delete the customer
     */
    void on_pushButton_clicked();

private:
    Ui::deletecustomer *ui; //!< A private member pointer variable that holds the GUI for deleteCustomer
};

#endif // DELETECUSTOMER_H
