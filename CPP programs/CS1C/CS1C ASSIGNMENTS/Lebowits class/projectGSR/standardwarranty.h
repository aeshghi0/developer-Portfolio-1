#ifndef STANDARDWARRANTY_H
#define STANDARDWARRANTY_H

#include <QDialog>


/*! \class standardWarranty
 \brief This class defines the standardWarranty class
 It will consist of a GUI that allows the customer to see the standard warranty for our robots
 It will inherit from QDialog provided by QT
 */

namespace Ui {
class standardwarranty;
}

class standardwarranty : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief standardwarranty The class constructor
     * @param parent  Creates a null value to the QWidget parent class
     */
    explicit standardwarranty(QWidget *parent = nullptr);



    /**
    * @brief standardwarranty The class destructor
    */
    ~standardwarranty();

private slots:
    /**
     * @brief on_pushButton_clicked A private slot that allows the user to go to the purchase page
     */
    void on_pushButton_clicked();




    /**
     * @brief on_pushButton_2_clicked A private slot that allows the user to go back to the homepage
     */
    void on_pushButton_2_clicked();

private:
    Ui::standardwarranty *ui; //!< A private memeber pointer variable that holds the GUI for standardWarranty
};

#endif // STANDARDWARRANTY_H
