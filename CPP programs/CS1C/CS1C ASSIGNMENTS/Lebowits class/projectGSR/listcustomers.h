#ifndef LISTCUSTOMERS_H
#define LISTCUSTOMERS_H

#include <QDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QFile>
#include <vector>
#include <utility>
#include <QDebug>
#include <iomanip>
#include "customer.h"
#include "purchaseclass.h"

using namespace std;

/*! \class listcustomers
  \brief This class defines the listCustomers class
  It will consist of a GUI that prints and sorts the customers in the file
  It will inherit from QDialog and the customer class
 */

namespace Ui {
class listcustomers;
}

class listcustomers : public QDialog, public customer
{
    Q_OBJECT

public:
    /**
     * @brief listcustomers The listCustomers constructor
     * @param parent Creates a null value to the QWidget parent class
     */
    explicit listcustomers(QWidget *parent = nullptr);




    /**
       * @brief listcustomers The listCustomers destructor
       */
    ~listcustomers();




    /**
     * @brief copyFile A member function that copies the file into a vector
     * @param a A vector that holds all the customer details
     */
    void copyFile(vector<customer> &a);




    /**
     * @brief printToScreen A member function that prints the customer details to the screen
     * @param a A vector that holds the customer details
     */
    void printToScreen(vector<customer> &a);




    /**
     * @brief copyFile2 A member function that copies the purchases of customers into a file
     * @param a A vector that holds the purchases for each customer
     */
    void copyFile2(vector<purchaseClass> &a);




    /**
     * @brief print A member function that pritns the customers
     * @return QString
     */
    QString print();

public slots:
    /**
     * @brief helper A public slot that sorts the customers by name
     */
    void helper();




    /**
     * @brief keyHelper A public slot that sorts the customers by "Key"
     */
    void keyHelper();




    /**
     * @brief purchaseHelper A public slot that sorts the customers by purchase item alphabetically
     */
    void purchaseHelper();
private slots:
    /**
     * @brief on_pushButton_clicked A private slot that allows the customers to be sorted by name
     */
    void on_pushButton_clicked();




    /**
     * @brief on_pushButton_2_clicked A private slot that allows the customers to be sorted by "key"
     */
    void on_pushButton_2_clicked();





    /**
     * @brief on_pushButton_3_clicked A private slot that allows the customers to be sorted by purchase item alphabetically
     */
    void on_pushButton_3_clicked();

private:
    Ui::listcustomers *ui; //!< A private member pointer variable that holds the GUI for listCustomers

   //  vector<QString> name;
    // vector<QString> address;
     //vector<QString> city;
    // vector<QString> web;
//    / vector<QString> interest;
//     vector<QString> key;
//     vector<QString> cost;

   // vector<pair<QString,pair<QString,QString>>> copyFiles;
};

/**
 * @brief createVector A function that creates a vector to sort the customers
 */
void createVector();
#endif // LISTCUSTOMERS_H
