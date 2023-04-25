#include "premiumpluspurchase.h"
#include "ui_premiumpluspurchase.h"
#include "purchaseclass.h"
#include <QFile>
#include <QDebug>

#include <QTextStream>

const double SALESTAX = .07;

premiumPlusPurchase::premiumPlusPurchase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::premiumPlusPurchase)
{
    ui->setupUi(this);
    ui->Heading->setText("Goon Squad Robots | Premium+ Package Purchase");
    ui->Heading->setStyleSheet("font: 30pt;");
    ui->Heading->setGeometry(380, 30, 850, 50);

    itemsInCart = 0;
    ui->CartHeading->setText("How many packages would you like to purchase?");
    ui->CartHeading->setStyleSheet("font: 18pt;");
    ui->CartHeading->setGeometry(100, 100, 850, 50);

    ui->CardNumber->setText("Enter Card Number: ");

    ui->CardNameHolder->setText("Enter Card NameHolder: ");
    ui->CardNameHolderEdit->setReadOnly(true);
    ui->CardNameHolderEdit->setPlaceholderText("Must Enter a Valid Quantity To Cart");

    ui->CardSecurity->setText("Enter Card Security Code: ");
    ui->CardSecurityEdit->setReadOnly(true);
    ui->CardSecurityEdit->setPlaceholderText("Must Enter a Valid Quantity To Cart");

    ui->CardExpiration->setText("Enter Card Expiration: (mm/yy)");
    ui->CardExpirationEdit->setReadOnly(true);
    ui->CardExpirationEdit->setPlaceholderText("Must Enter a Valid Quantity To Cart");





    ui->CartItemsHeading->setText("Items in Cart: ");


    ui->CardNumberEdit->setReadOnly(true);
    ui->CardNumberEdit->setPlaceholderText("Must Enter a Valid Quantity To Cart");

    ui->BillingAddressHeading->setText("Billing Address Information: ");

    ui->BillingAddressFirstName->setText("Enter Your First Name: ");
    ui->BillingFirstNameEdit->setReadOnly(true);
    ui->BillingFirstNameEdit->setPlaceholderText("Must Enter a Valid Quantity To Cart");

    ui->BillingAddressLastName->setText("Enter Your Last Name: ");
    ui->BillingLastNameEdit->setReadOnly(true);
    ui->BillingLastNameEdit->setPlaceholderText("Must Enter a Valid Quantity To Cart");

    ui->BillingAddress->setText("Enter Your Address: ");
    ui->BillingAddressEdit->setReadOnly(true);
    ui->BillingAddressEdit->setPlaceholderText("Must Enter a Valid Quantity To Cart");

    ui->BillingCity->setText("Enter Your City: ");
    ui->BillingCityEdit->setReadOnly(true);
    ui->BillingCityEdit->setPlaceholderText("Must Enter a Valid Quantity To Cart");

    ui->BillingAddressZipCode->setText("Enter Your Zip Code: ");
    ui->BillingAddressZipCodeEdit->setReadOnly(true);
    ui->BillingAddressZipCodeEdit->setPlaceholderText("Must Enter a Valid Quantity To Cart");

    ui->BillingState->setText("Enter Your State: ");
    ui->BillingStateEdit->setReadOnly(true);
    ui->BillingStateEdit->setPlaceholderText("Must Enter a Valid Quantity To Cart");

    ui->BillingPhoneNumber->setText("Enter Your Phone Number: ");
    ui->BillingPhoneNumberEdit->setReadOnly(true);
    ui->BillingPhoneNumberEdit->setPlaceholderText("Must Enter a Valid Quantity To Cart");

    ui->line_edit->setReadOnly(true);
    ui->line_edit->setPlaceholderText("Must Enter a Valid Quantity To Cart");



}

premiumPlusPurchase::~premiumPlusPurchase()
{
    delete ui;
}

void premiumPlusPurchase::on_CartButton_clicked()
{
    itemsInCart = ui->CartLineEdit->text().toInt();
    ui->CartItems->setText(QString::number(itemsInCart));

    if(itemsInCart > 0)
    {
        ui->CardNumberEdit->setReadOnly(false);
        ui->CardNumberEdit->setPlaceholderText("");
        cardNo = ui->CardNumberEdit->text();

        ui->CardNameHolderEdit->setReadOnly(false);
        ui->CardNameHolderEdit->setPlaceholderText("");
        CardNameHolder = ui->CardNameHolderEdit->text();

        ui->CardSecurityEdit->setReadOnly(false);
        ui->CardSecurityEdit->setPlaceholderText("");
        ui->CardSecurityEdit->setEchoMode(QLineEdit::Password);
        cardSecurity = ui->CardSecurityEdit->text();

        ui->CardExpirationEdit->setReadOnly(false);
        ui->CardExpirationEdit->setPlaceholderText("");
        cardExpiration = ui->CardSecurityEdit->text();

        ui->BillingFirstNameEdit->setReadOnly(false);
        ui->BillingFirstNameEdit->setPlaceholderText("");
        billingFirstName = ui->BillingFirstNameEdit->text();

        ui->BillingLastNameEdit->setReadOnly(false);
        ui->BillingLastNameEdit->setPlaceholderText("");
        billingLastName = ui->BillingLastNameEdit->text();

        ui->BillingAddressEdit->setReadOnly(false);
        ui->BillingAddressEdit->setPlaceholderText("");
        billingAddress = ui->BillingAddressEdit->text();

        ui->BillingAddressZipCodeEdit->setReadOnly(false);
        ui->BillingAddressZipCodeEdit->setPlaceholderText("");
        billingAddress = ui->BillingAddressZipCodeEdit->text();

        ui->BillingCityEdit->setReadOnly(false);
        ui->BillingCityEdit->setPlaceholderText("");
        billingCity = ui->BillingCityEdit->text();

        ui->BillingStateEdit->setReadOnly(false);
        ui->BillingStateEdit->setPlaceholderText("");
        billingState = ui->BillingStateEdit->text();

        ui->BillingPhoneNumberEdit->setReadOnly(false);
        ui->BillingPhoneNumberEdit->setPlaceholderText("");
        billingPhoneNumber = ui->BillingPhoneNumberEdit->text();

        ui->line_edit->setReadOnly(false);
        ui->line_edit->setPlaceholderText("");
        QString companyName = ui->line_edit->text();


        runningCost = static_cast<double>(itemsInCart) * 6449.99;
        finalCost = (runningCost * SALESTAX) + runningCost;
        ui->RunningCostLabel->setNum(runningCost);
        ui->SalesTaxLabel->setNum(SALESTAX);
        ui->TotalCostLabel->setNum(finalCost);
    }
    else
    {
        ui->CartItems->setText(QString::number(0));
        itemsInCart = 0;
        QMessageBox::information(this, "Enter Positive Value!", "Enter Positive Value!");

        ui->CardNameHolderEdit->setReadOnly(true);
        ui->CardNameHolderEdit->setPlaceholderText("Must Enter a Valid Quantity To Cart");

        ui->CardSecurityEdit->setReadOnly(true);
        ui->CardSecurityEdit->setPlaceholderText("Must Enter a Valid Quantity To Cart");

        ui->CardExpirationEdit->setReadOnly(true);
        ui->CardExpirationEdit->setPlaceholderText("Must Enter a Valid Quantity To Cart");

        ui->CardNumberEdit->setReadOnly(true);
        ui->CardNumberEdit->setPlaceholderText("Must Enter a Valid Quantity To Cart");

        ui->BillingFirstNameEdit->setReadOnly(true);
        ui->BillingFirstNameEdit->setPlaceholderText("Must Enter a Valid Quantity To Cart");

        ui->BillingLastNameEdit->setReadOnly(true);
        ui->BillingLastNameEdit->setPlaceholderText("Must Enter a Valid Quantity To Cart");

        ui->BillingAddressEdit->setReadOnly(true);
        ui->BillingAddressEdit->setPlaceholderText("Must Enter a Valid Quantity To Cart");

        ui->BillingCityEdit->setReadOnly(true);
        ui->BillingCityEdit->setPlaceholderText("Must Enter a Valid Quantity To Cart");

        ui->BillingAddressZipCodeEdit->setReadOnly(true);
        ui->BillingAddressZipCodeEdit->setPlaceholderText("Must Enter a Valid Quantity To Cart");

        ui->BillingStateEdit->setReadOnly(true);
        ui->BillingStateEdit->setPlaceholderText("Must Enter a Valid Quantity To Cart");

        ui->BillingPhoneNumberEdit->setReadOnly(true);
        ui->BillingPhoneNumberEdit->setPlaceholderText("Must Enter a Valid Quantity To Cart");

        ui->line_edit->setReadOnly(false);
        ui->line_edit->setPlaceholderText("Must Enter a Valid Quantity To Cart");

        ui->RunningCostLabel->setNum(0);
        ui->SalesTaxLabel->setNum(SALESTAX);
        ui->TotalCostLabel->setNum(0);
    }
}

void premiumPlusPurchase::on_CardPushButton_clicked()
{
    if (itemsInCart > 0)
    {
        QMessageBox::StandardButton reply = QMessageBox::question(this, "My Title", "Confirm Purchase?", QMessageBox::Yes | QMessageBox::No);
        if (reply == QMessageBox::Yes)
        {
            bool yeet = 1;
            QString text = ui->line_edit->text();
            QTextStream * stream = new QTextStream(&text , QIODevice::ReadOnly);
            QString line1 =  stream->readLine();

            QString text2 = ui->TotalCostLabel->text();
            QTextStream * stream2 = new QTextStream(&text2 , QIODevice::ReadOnly);
            QString line2 =  stream2->readLine();


            QString text3 = ui->Heading->text();
            QTextStream * stream3 = new QTextStream(&text3 , QIODevice::ReadOnly);
            QString line3 =  stream3->readLine();

            purchaseClass temp;
            //vector <purchaseClass> a;
            std::vector<purchaseClass> a;


            temp.setCompanyName(line1);
            temp.setbigCost(line2);
            temp.setProductName(line3);
            a.push_back(temp);
            qDebug() << "raw";

            QFile file("/Users/blakedickerson/Desktop/Sprints/customerPurchases");
            if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
            {
                // We're going to streaming text to the file
                QTextStream stream(&file);
                for(int i =0; i < a.size(); ++i){

                    stream << "\n" << a.at(i).getCompanyName() ;
                    stream << "\n"  << a.at(i).getbigCost();
                    stream << "\n"  << a.at(i).getProductName();

                }
                file.close();
                qDebug() << "Writing finished";
            }
            // }
            QMessageBox::information(this, "Thank You For Your Purchase!", "Thank You For Your Purchase!");
            this->close();
        }
        else
        {
            QMessageBox::information(this, "Cancel Purchase!", "Your Purchase Has Been Successfully Cancelled!");
        }
    }
}
