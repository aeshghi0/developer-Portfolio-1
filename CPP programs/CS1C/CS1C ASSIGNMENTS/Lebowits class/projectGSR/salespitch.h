#ifndef SALESPITCH_H
#define SALESPITCH_H

#include <QDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

/*! \class salesPitch
 \brief This class defines the salesPitch class
 It will consist of a GUI that shows our sales pitch
 It will inherit from QDialog provided by QT
 */

namespace Ui {
class salesPitch;
}

class salesPitch : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief salesPitch The class constructor
     * @param parent  Creates a null value to the QWidget parent class
     */
    explicit salesPitch(QWidget *parent = nullptr);




    /**
      * @brief salesPitch The class constructor
      */
    ~salesPitch();

private slots:


private:
    Ui::salesPitch *ui; //!< A private member pointer variable that holds the GUI for salesPitch
};

#endif // SALESPITCH_H
