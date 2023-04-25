#ifndef ROBOTCAREWARRANTYPURCHASE_H
#define ROBOTCAREWARRANTYPURCHASE_H

#include <QDialog>
#include <QMessageBox>

const double SALESTAX = .07;

/*! \class robotCareWarrantyPurchase
 \brief This class defines the robotCareWarrantyPurchase class
 It will consist of a GUI that allows the user to purchse the robot care warranty
 It will inherit from QDialog provided by QT
 */

namespace Ui {
class robotCareWarrantyPurchase;
}

class robotCareWarrantyPurchase : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief robotCareWarrantyPurchase The class constructor
     * @param parent  Creates a null value to the QWidget parent class
     */
    explicit robotCareWarrantyPurchase(QWidget *parent = nullptr);




    /**
        * @brief robotCareWarrantyPurchase The class constructor
        */
    ~robotCareWarrantyPurchase();

private slots:
    /**
     * @brief on_CartButton_clicked A private slot function that updates the user's cart
     */
    void on_CartButton_clicked();





    /**
     * @brief on_CardPushButton_clicked A private slot that allows the user to purchase the item
     */
    void on_CardPushButton_clicked();

private:
    Ui::robotCareWarrantyPurchase *ui;
    int itemsInCart; //!< A private variable that holds the items in cart
    QString cardNo; //!< A private QString variable that holds the card number
    QString cardExpiration; //!< A private QString variable that holds the card expiration
    QString cardSecurity; //!< A private QString variable that holds the card security
    QString CardNameHolder; //!< A private QString variable that holds the card name

    QString billingFirstName; //!< A private QString variable that holds the customer's first name
    QString billingLastName; //!< A private QString variable that holds the customer's last name
    QString billingAddress; //!< A private QString variable that holds the customer's address
    QString billingCity; //!< A private QString variable that holds the customer's city
    QString billingState; //!< A private QString variable that holds the customer's state
    QString billingPhoneNumber; //!< A private QString variable that holds the customer's phone number

    double runningCost; //!< A private QString variable that holds the customer's running cost
    double finalCost; //!< A private QString variable that holds the customer's total cost

    QMessageBox *message; //!< A private QMessagebox that holds a message for the user
};
#endif // ROBOTCAREWARRANTYPURCHASE_H
