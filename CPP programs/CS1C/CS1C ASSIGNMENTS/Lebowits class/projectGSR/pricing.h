#ifndef PRICING_H
#define PRICING_H

#include <QDialog>

/*! \class pricing
 \brief This class defines the pricing class
 It will consist of a GUI that defines our company's prices
 It will inherit from QDialog provided by QT
*/

namespace Ui {
class pricing;
}

class pricing : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief pricing The class constructor
     * @param parent  Creates a null value to the QWidget parent class
     */
    explicit pricing(QWidget *parent = nullptr);




    /**
       * @brief pricing The class constructor
       */
    ~pricing();

private slots:
    /**
     * @brief on_pushButton_clicked A private slot that allows the viewer to see the standard purchase option
     */
    void on_pushButton_clicked();





    /**
     * @brief on_pushButton_2_clicked A private slot that allows the viewer to see the premium purchase option
     */

    void on_pushButton_2_clicked();




    /**
     * @brief on_pushButton_3_clicked A private slot that allows the viewer to see the premium plus purchase option
     */

    void on_pushButton_3_clicked();

private:
    Ui::pricing *ui; //!< A private member pointer variable that holds the GUI for pricing
};

#endif // PRICING_H
