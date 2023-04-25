#ifndef CUSTOMERHELP_H
#define CUSTOMERHELP_H

#include <QDialog>

/*! \class customerHelp
 \brief This class defines the customerHelp class
  It will consist of one private member that holds the GUI of popular customer questions
  It will inherit from the QDialog class provided by QT
 */

namespace Ui {
class customerHelp;
}

class customerHelp : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief customerHelp The customerHelp constructor
     * @param parent Creates a null value to the QWidget parent class
     */
    explicit customerHelp(QWidget *parent = nullptr);

    /**
     * @brief ~customerHelp The customerHelp destructor
     */
    ~customerHelp();

private slots:
    /**
     * @brief on_backToHomeButton_clicked A private slot that allows the user to get back to the homepage
     */
    void on_backToHomeButton_clicked();





    /**
     * @brief on_pushButton_clicked A private slot that allows the answer of the payment label to pop down
     */
    void on_pushButton_clicked();




    /**
     * @brief on_pushButton_2_clicked A private slot that allows the answer of the sales tax label to pop down
     */
    void on_pushButton_2_clicked();




    /**
     * @brief on_pushButton_3_clicked A private slot that allows the answer of the charge label to pop down
     */
    void on_pushButton_3_clicked();




    /**
     * @brief on_pushButton_4_clicked A private slot that allows the answer of out of stock label to pop down
     */
    void on_pushButton_4_clicked();





    /**
     * @brief on_pushButton_5_clicked A private slot that allows the answer of the return label to pop down
     */
    void on_pushButton_5_clicked();




    /**
     * @brief on_pushButton_6_clicked A private slot that allows the answer of the refund label to pop down
     */
    void on_pushButton_6_clicked();




    /**
     * @brief on_pushButton_7_clicked A private slot that allows the answer of the custom robot label to pop down
     */
    void on_pushButton_7_clicked();




    /**
     * @brief on_pushButton_8_clicked A private slot that allows the answer of the accessories label to pop down
     */
    void on_pushButton_8_clicked();





    /**
     * @brief on_pushButton_9_clicked A private slot that allows the answer of the shipping label to pop down
     */
    void on_pushButton_9_clicked();

private:
    Ui::customerHelp *ui; //!< A private member variable that holds the GUI for customerHelp
};

#endif // CUSTOMERHELP_H
