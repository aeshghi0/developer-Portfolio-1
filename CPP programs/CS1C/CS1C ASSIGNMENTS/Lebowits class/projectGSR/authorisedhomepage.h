#ifndef AUTHORISEDHOMEPAGE_H
#define AUTHORISEDHOMEPAGE_H

#include <QDialog>
#include "customer.h"

/*! \class authorisedHomePage
  \brief This class defines the authorisedHomePage class
  It will consist of a GUI that allows the admin to acceess the authorised home page
  It will inherit from the QDialog class provided by QT
 */

namespace Ui {
class authorisedHomePage;
}

class authorisedHomePage : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief authorisedHomePage The authorisedHomePage constructor
     * @param parent Creates a null value to the QWidget parent class
     */
    explicit authorisedHomePage(QWidget *parent = nullptr);




    /**
      * @brief authorisedHomePage The authorisedHomePage destructor
      */
    ~authorisedHomePage();

private slots:
    /**
     * @brief on_pushButton_11_clicked A member function that shows the admin the customer details
     */
    void on_pushButton_11_clicked();




    /**
     * @brief on_pushButton_3_clicked A member function that allows the admin to add a customer
     */
    void on_pushButton_3_clicked();




    /**
     * @brief on_pushButton_4_clicked A member function that allows the admin to delete a customer
     */
    void on_pushButton_4_clicked();



    /**
     * @brief on_pushButton_5_clicked A member function that allows the admin to edit a customer
     */
    void on_pushButton_5_clicked();

private:
    Ui::authorisedHomePage *ui; //!< A private member pointer variable that holds the GUI for authorisedHomePage
};

#endif // AUTHORISEDHOMEPAGE_H
