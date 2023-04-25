#ifndef ADDCUSTOMER_H
#define ADDCUSTOMER_H

#include <QDialog>

/*! \class addCustomer
  \brief This class defines the addCustomer class
  It will consist of a GUI that allows the admin to add a customer to the file
  It will inherit from the QDialog class provided by QT
 */

namespace Ui {
class addcustomer;
}

class addcustomer : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief addcustomer The addCustomer constructor
     * @param parent Creates a null value to the QWidget parent class
     */
    explicit addcustomer(QWidget *parent = nullptr);




    /**
      * @brief addcustomer The addCustomer destructor
      */
    ~addcustomer();

private slots:
    /**
     * @brief on_pushButton_clicked A member function that allows the customer to be added to the file
     */
    void on_pushButton_clicked();

private:
    Ui::addcustomer *ui; //!< A private member pointer variable that holds the GUI for addCustomer
};

#endif // ADDCUSTOMER_H
