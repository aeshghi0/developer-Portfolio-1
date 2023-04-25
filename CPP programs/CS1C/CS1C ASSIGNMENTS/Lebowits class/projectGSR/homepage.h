#ifndef HOMEPAGE_H
#define HOMEPAGE_H


#include <QMainWindow>

/*! \class homePage
  \brief This class defines the homepage class
  It will consist of a GUI that displays the hompage
  It will inherit from QMainWindow provided by QT
 */

QT_BEGIN_NAMESPACE
namespace Ui { class homePage; }
QT_END_NAMESPACE

class homePage : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief homePage The hompage constructor
     * @param parent Creates a null value to the QWidget parent class
     */
    homePage(QWidget *parent = nullptr);




    /**
      * @brief homePage The hompage destructor
      */
    ~homePage();

private slots:
    /**
     * @brief on_pushButton_clicked A private slot that goes to the customerHelp page
     */
    void on_pushButton_clicked();




    /**
     * @brief on_pushButton_2_clicked A private slot that goes to the contactUsPage page
     */
    void on_pushButton_2_clicked();




    /**
     * @brief on_pushButton_5_clicked A private slot that goes to the physicalSpaces page
     */
    void on_pushButton_5_clicked();





    /**
     * @brief on_pushButton_7_clicked A private slot that goes to the pricing page
     */
    void on_pushButton_7_clicked();





    /**
     * @brief on_pushButton_9_clicked A private slot that goes to the warranty page
     */
    void on_pushButton_9_clicked();




    /**
     * @brief on_pushButton_11_clicked A private slot that goes to the login page
     */
    void on_pushButton_11_clicked();




    /**
     * @brief on_pushButton_12_clicked A private slot that goes to the pamphlet page
     */
    void on_pushButton_12_clicked();




    /**
     * @brief on_pushButton_6_clicked A private slot that goes to the prodcutInfo page
     */
    void on_pushButton_6_clicked();





    /**
     * @brief on_pushButton_10_clicked A private slot that goes to the customerReviews page
     */
    void on_pushButton_10_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::homePage *ui; //!< A private member pointer variable that holds the GUI for hompage

};
#endif // HOMEPAGE_H
