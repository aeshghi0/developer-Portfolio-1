#ifndef WARRANTY_H
#define WARRANTY_H

#include <QDialog>

/*! \class warranty
 \brief This class defines the warranty class
 It will consist of a GUI that allows the customer to see the warranties for our robots
 It will inherit from QDialog provided by QT
 */

namespace Ui {
class warranty;
}

class warranty : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief warranty The class constructor
     * @param parent  Creates a null value to the QWidget parent class
     */
    explicit warranty(QWidget *parent = nullptr);



    /**
         * @brief warranty The class constructor
         */
    ~warranty();

private slots:
    /**
     * @brief on_pushButton_clicked A private slot that lets the user go to the standard warranty
     */
    void on_pushButton_clicked();





    /**
     * @brief on_pushButton_clicked A private slot that lets the user go to the robot care warranty
     */
    void on_pushButton_2_clicked();





    /**
     * @brief on_pushButton_clicked A private slot that lets the user go to the homepage
     */
    void on_pushButton_3_clicked();

private:
    Ui::warranty *ui; //!< A private memeber pointer variable that holds the GUI for warranty
};

#endif // WARRANTY_H
