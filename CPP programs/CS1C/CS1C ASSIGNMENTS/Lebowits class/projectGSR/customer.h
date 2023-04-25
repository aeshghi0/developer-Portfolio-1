#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <vector>
#include <QString>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDialog>
using namespace std;

/*! \class customer
 \brief This class defines the customer class.
 It will consist of three QString variables that store the customer name, year, and happiness with the company. It will consist of two static
 variables that keep track of the amount of requests for pamphlets and to set the private variable to sort against.
*/

class customer
{
    QString name; //!< A private member QString variable that holds the name of a customer
    QString address; //!< A private member QString variable that holds the address of a customer
    QString city; //!< A private member QString variable that holds the city of a customer
    QString web; //!< A private member QString variable that holds the website of a customer
    QString interest; //!< A private member QString variable that holds the interest of a customer
    QString key; //!< A private member QString variable that holds the importance of a customer
    QString recieved; //!< A private member QString variable that shows if the customer got a pamphlet
   // QString totalPurchase; //!< A private member QString variable that holds the total purchase of a customer

public:
    /**
     * @brief customer The customer constructor
     */
    customer(){
        name = "empty";
        address = "empty";
        city = "empty";
        web = "empty";
        interest = "empty";
        key = "empty";
        recieved = "empty";
      //  totalPurchase = 0.0;
    }






    /**
     * @brief setRecieved A member function that sets the value of received
     * @param r set to the value of received
     */
    void setRecieved(QString r){
        recieved = r;
    }   
    /**
     * @brief getRecieved A member function that returns the value of received
     * @return received
     */
    QString getRecieved(){
        return recieved;
    }





    /**
     * @brief setName A member function that sets the value of name
     * @param n set to the value of name
     */
    void setName(QString n){
        name = n;
    }





    /**
     * @brief setAddress A member function that sets the value of address
     * @param a set to the value of address
     */
    void setAddress(QString a){
        address = a;
    }




    /**
     * @brief setCity A member function that sets the value of city
     * @param c set to the value of city
     */
    void setCity(QString c){
        city = c;
    }




    /**
     * @brief setWeb A member function that sets the value of web
     * @param w set to the value of web
     */
    void setWeb(QString w){
        web = w;
    }




    /**
     * @brief setInterest A member function that sets the value of interest
     * @param i set to the value of interest
     */
    void setInterest(QString i){
        interest = i;
    }




    /**
     * @brief setKey A member function that sets the value of key
     * @param k set to the value of key
     */
    void setKey(QString k){
        key = k;
    }





    /**
     * @brief getName A member function that returns the value of name
     * @return name
     */
    QString getName(){
        return name;
    }




    /**
     * @brief getAddress  A member function that returns the value of address
     * @return address
     */
    QString getAddress(){
        return address;
    }




    /**
     * @brief getCity  A member function that returns the value of city
     * @return city
     */
    QString getCity(){
        return city;
    }




    /**
     * @brief getWeb  A member function that returns the value of web
     * @return web
     */
    QString getWeb(){
        return web;
    }




    /**
     * @brief getInterest  A member function that returns the value of interest
     * @return interest
     */
    QString getInterest(){
        return interest;
    }




    /**
     * @brief getKey  A member function that returns the value of key
     * @return key
     */
    QString getKey(){
        return key;
    }




//    /**
//     * @brief setTotalPurchase A member function that sets the value of totalPurchase
//     * @param tp set to the value of totalPurchase
//     */
//    void setTotalPurchase(QString tp)
//    {
//        totalPurchase = tp;
//    }
//    /**
//     * @brief getTotalPurchase  A member function that returns the value of received
//     * @return totalPurchase
//     */
//    QString getTotalPurchase() const
//    {
//        return totalPurchase;
//    }





    template<class U>
    /**
         * @brief selectionSort A member function that sorts a vector of type U with a template
         * @param toSort A vector that holds the customer data
         * @param n The size of toSort
         */
        void selectionSort(vector<U>& toSort, int n)
        {
            int i;
            int j;
            U temp;

            for (i = 1; i < n; ++i)
            {
                j = i;
                temp = toSort[i];
                while (j > 0 && temp < toSort[j-1])
                {
                    toSort[j] = toSort[j-1];
                    j--;
                }
                toSort [j] = temp;
            }
        }




        /**
         * @brief operator > A member function to over the > operator
         * @param otherCustomer A value to be compared to
         * @return result
         */
        bool operator>( customer& otherCustomer) const
        {
            bool result = false;

//            switch(comparison)
//            {
//            case 0:
                result = name > otherCustomer.getName();
               // break;
//            case 1:
//                result = customerYear > otherCustomer.customerYear;
//                break;
//            case 2:
//                result = customerHappiness > otherCustomer.customerHappiness;
//                break;
          // }
            return result;
        }




        /**
         * @brief operator < A member function to over the < operator
         * @param otherCustomer A value to be compared to
         * @return result
         */
        bool operator<(const customer& otherCustomer) const
        {
            bool result = false;

//            switch(comparison)
//            {
//            case 0:
                result = name < otherCustomer.name;
                //break;
//            case 1:
//                result = customerYear < otherCustomer.customerYear;
//                break;
//            case 2:
//                result = customerHappiness < otherCustomer.customerHappiness;
//                break;
          //  }
            return result;
        }

};



#endif // CUSTOMER_H
