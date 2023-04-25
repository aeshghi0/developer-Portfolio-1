#ifndef CUSTOMERLEAVETESTOMONIAL_H
#define CUSTOMERLEAVETESTOMONIAL_H

#include <QDialog>

/*! \class customerLeaveTestomonial
  \brief This class defines the customerLeaveTestomonial class
  It will consist of a GUI that allows the customer to leave a testomonial
  It will inherit from QDialog class that is provided by QT
 */

namespace Ui {
class customerLeaveTestomonial;
}

class customerLeaveTestomonial : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief customerLeaveTestomonial The customerLeaveTestomonial constructor
     * @param parent Creates a null value to the QWidget parent class
     */
    explicit customerLeaveTestomonial(QWidget *parent = nullptr);




    /**
      * @brief customerLeaveTestomonial The customerLeaveTestomonial destructor
      */
    ~customerLeaveTestomonial();

private slots:
    /**
     * @brief on_pushButton_clicked A private slot that allows the info to be stored in a file
     */
    void on_pushButton_clicked();

private:
    Ui::customerLeaveTestomonial *ui; //!< A private pointer variable that holds the GUI for customerLeaveTestomonial
};

#endif // CUSTOMERLEAVETESTOMONIAL_H
