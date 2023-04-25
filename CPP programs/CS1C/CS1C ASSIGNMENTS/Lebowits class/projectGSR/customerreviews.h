#ifndef CUSTOMERREVIEWS_H
#define CUSTOMERREVIEWS_H

#include <QDialog>
#include <vector>
#include "customertestomonial.h"

using namespace std;

/*! \class customerReviews
  \brief This class defines the customerReviews class
  It will consist of a GUI that displays the customer reviews for our products
  It will inherit from QDialog class provided by QT
 */

namespace Ui {
class customerReviews;
}

class customerReviews : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief customerReviews The customerReviews constructor
     * @param parent Creates a null value to the QWidget parent class
     */
    explicit customerReviews(QWidget *parent = nullptr);




    /**
      * @brief customerReviews The customerReviews constructor
      */
    ~customerReviews();




    /**
     * @brief copyFile A member funcation that copies the file into a vector
     * @param vector<customerTestomonial>& The vector that holds the testomonial from the customer
     */
    void copyFile(vector<customerTestomonial>&);




    /**
     * @brief printToScreen A member function that prints the vector the the GUI
     * @param a The vector that holds the testomonial from the customer
     */
    void printToScreen(vector<customerTestomonial> &a);


private slots:
    /**
     * @brief on_pushButton_clicked A private slot that allows the customer to submit the testomonial
     */
    void on_pushButton_clicked();

private:
    Ui::customerReviews *ui; //!< A private member pointer variable that holds the GUI for customerReviews
};

#endif // CUSTOMERREVIEWS_H
