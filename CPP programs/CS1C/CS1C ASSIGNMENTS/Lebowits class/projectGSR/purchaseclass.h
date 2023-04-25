#ifndef PURCHASECLASS_H
#define PURCHASECLASS_H

#include <QString>
#include <vector>

/*! \class purchaseClass
 \brief This class defines the purchaseClass
 It will consist of member variables to help support the purchases by customers
 */

class purchaseClass
{
public:

    QString companyName; //!< A private member QString variable that holds the companyName
    QString productName; //!< A private member QString variable that holds the productName
    QString bigCost; //!< A private member QString variable that holds the total cost
public:
    /**
     * @brief purchaseClass The class constructor
     */
    purchaseClass()
    {

        setCompanyName("empty");
        setProductName("empty");
        setbigCost("0.00");
    }





    /**
    * @brief setProductName A member function that sets the productName
    * @param pN sets the value of productName
    */
   void setProductName(QString pN)
   {
       productName = pN;
    }




   /**
    * @brief getProductName A member function that gets the productName
    * @return productName
    */
   QString getProductName() const
   {
       return productName;
   }




   /**
     * @brief setbigCost A member function that sets the finalCost
     * @param fC sets the value of finalCost
     */
    void setbigCost(QString fC)
    {
        bigCost = fC;
    }




    /**
     * @brief getbigCost A member function that gets the cost
     * @return bigcost
     */
    QString getbigCost() const
    {
        return bigCost;
    }




    /**
     * @brief setCompanyName sets the value of companyName
     * @param cN sets the value of companyName
     */
    void setCompanyName(QString cN)
    {
        companyName = cN;
    }




    /**
     * @brief getCompanyName A member function that gets the companyName
     * @return companyName
     */
    QString getCompanyName()
    {
        return companyName;
    }






    template<class T>
    /**
         * @brief mySelectionSort A member function that sorts the purchases
         * @param toSort A vector that holds the purchases
         * @param n The size of toSort
         */
        void mySelectionSort(std::vector<T>& toSort, int n)
        {
            int i;
            int j;
            T temp;

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
         * @brief operator > A member function to overload the > operator
         * @param otherPurchase A variable to compare against
         * @return result
         */
        bool operator>(const purchaseClass& otherPurchase) const
        {
            bool result = false;

//            switch(comparison)
//            {
//            case 0:
                result = companyName > otherPurchase.companyName;
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
         * @brief operator < A member function to overload the < operator
         * @param otherCustomer A variable to compare against
         * @return result
         */
        bool operator<(const purchaseClass& otherCustomer) const
        {
            bool result = false;

//            switch(comparison)
//            {
//            case 0:
                result = companyName < otherCustomer.companyName;
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

#endif // PURCHASECLASS_H
