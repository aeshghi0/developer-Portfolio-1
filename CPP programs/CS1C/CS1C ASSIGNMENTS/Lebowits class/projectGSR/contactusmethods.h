#ifndef CONTACTUSMETHODS_H
#define CONTACTUSMETHODS_H

#include <QDialog>

/*! \class contactUsMethods
  \brief This class defines the contactUsMethods class
  It will consist of a GUI that displays the contact information for our company
  It will inherit from the QDialog class provided by QT
 */

namespace Ui {
class contactUsMethods;
}

class contactUsMethods : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief contactUsMethods The contactUsMethods constructor
     * @param parent Creates a null value to the QWidget parent class
     */
    explicit contactUsMethods(QWidget *parent = nullptr);

    /**
      * @brief ~contactUsMethods The contactUsMethods destructor
      */
    ~contactUsMethods();

private:
    Ui::contactUsMethods *ui; //!< A private member pointer variable that holds the GUI for contactUsMethods
};

#endif // CONTACTUSMETHODS_H
