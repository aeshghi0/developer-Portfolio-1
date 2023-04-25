#ifndef PREMIUMPACKAGEPURCHASE_H
#define PREMIUMPACKAGEPURCHASE_H

#include <QDialog>
#include <QMessageBox>

/*! \class premiumPackagePurchase
 \brief This class defines the premiumPackagePurchase class
 It consists of a GUI that allows the user to buy the premium package for our robots
 It will inherit QDialog provided by QT
 */

namespace Ui {
class premiumPackagePurchase;
}

class premiumPackagePurchase : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief premiumPackagePurchase This is the class constructor
     * @param parent  Creates a null value to the QWidget parent class
     */
    explicit premiumPackagePurchase(QWidget *parent = nullptr);




    /**
       * @brief premiumPackagePurchase This is the class constructor
       */
    ~premiumPackagePurchase();
private slots:
    /**
     * @brief on_CartButton_clicked A private slot that allows the user to update cart
     */
    void on_CartButton_clicked();





    /**
     * @brief on_CardPushButton_clicked A private slot that allows the user to purchase the item
     */
    void on_CardPushButton_clicked();

private:
    Ui::premiumPackagePurchase *ui; //!< A private member pointer variable that holds the GUI
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

#endif // PREMIUMPACKAGEPURCHASE_H
