#ifndef PHYSICALSPACES_H
#define PHYSICALSPACES_H

#include <QDialog>

/*! \class physicalSpaces
  \brief This class defines the physicalSpaces class
  It will consist of a GUI that displays where our product can be used
  It will inherit from QDialog provided by QT
 */

namespace Ui {
class physicalSpaces;
}

class physicalSpaces : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief physicalSpaces The physicalSpaces constructor
     * @param parent Creates a null value to the QWidget parent class
     */
    explicit physicalSpaces(QWidget *parent = nullptr);




    /**
      * @param parent Creates a null value to the QWidget parent class
      */
    ~physicalSpaces();

private slots:
    /**
     * @brief on_backToHomeButton_clicked A private slot that lets the customer go back to the homepage
     */
    void on_backToHomeButton_clicked();

private:
    Ui::physicalSpaces *ui; //!< A private member pointer variable that holds the GUI physicalSpaces
};

#endif // PHYSICALSPACES_H
