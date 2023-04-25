#ifndef CUSTOMERTESTOMONIAL_H
#define CUSTOMERTESTOMONIAL_H

#include <QDialog>
#include <vector>
#include <QFile>
#include <QTextStream>

using namespace std;

/*! \class customerTestomonial
  \brief This class defines the customerTestomonial class
  It will consist of the company name and testomonial
 */


class customerTestomonial
{
    QString companyName; //!< A private member variable that holds the company name
    QString testomonial; //!< A private member variable that holds the testomonial
public:
    /**
     * @brief customerTestomonial The customerTestomonial constructor
     */
    customerTestomonial()
    {
        setCompanyName("empty");
        setTestomonial("empty");
    }




    /**
     * @brief setCompanyName A member function that sets the companyName value
     * @param name
     */
    void setCompanyName(QString name)
    {
        companyName = name;
    }




    /**
     * @brief getCompanyName A member funcation that gets the companyName value
     * @return companyName
     */
    QString getCompanyName()
    {
        return companyName;
    }





    /**
     * @brief setTestomonial  A member function that sets the testomonial value
     * @param test
     */
    void setTestomonial(QString test)
    {
        testomonial = test;
    }




    /**
     * @brief getTestomonial A member funcation that gets the testomonial value
     * @return testomonial
     */
    QString getTestomonial()
    {
        return testomonial;
    }





    /**
     * @brief copyFile A member function that copies the file into a vector
     * @param a A vector that holds the testomonial and companyName
     */
    void copyFile(vector<customerTestomonial> &a)
    {
        customerTestomonial temp;
        QFile inFile("/Users/blakedickerson/Desktop/Sprints/customerListInFile");
        QTextStream in(&inFile);
         if(!(inFile.open(QIODevice::ReadOnly))){
             exit(0);
         }
         while(!in.atEnd()){

            QString nameLine = in.readLine();
            QString testomonialLine = in.readLine();

            temp.setCompanyName(nameLine);
            temp.setTestomonial(testomonialLine);

            a.push_back(temp);
        }
    }
};

#endif // CUSTOMERTESTOMONIAL_H
