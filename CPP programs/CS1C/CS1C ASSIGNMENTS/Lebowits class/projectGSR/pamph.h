#ifndef PAMPH_H
#define PAMPH_H

#include <QDialog>
#include <iostream>
#include <vector>
#include <QString>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDialog>
#include "customer.h"
using namespace std;

/*! \class pamph
  \brief This class defines the pamph class
  It will consist of a GUI that allows a customer to request a pamphlet
  It will inherit from QDialog provided by QT
 */

namespace Ui {
class pamph;
}

class pamph : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief pamph The pamph class constructor
     * @param parent Creates a null value to the QWidget parent class
     */
    explicit pamph(QWidget *parent = nullptr);




    /**
      * @brief pamph The pamph class constructor
      */
    ~pamph();

private slots:
    /**
     * @brief on_pushButton_3_clicked A private slot that sets the received value to received for a company who has requested a pamphlet
     */
    void on_pushButton_3_clicked();





    /**
     * @brief on_pushButton_clicked A private slot that lets the customer know they have received a pamphlet
     */
    void on_pushButton_clicked();

private:
    Ui::pamph *ui; //!< A private member pointer variable that holds the GUI for pamph
};

#endif // PAMPH_H
