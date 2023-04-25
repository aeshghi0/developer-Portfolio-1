#ifndef PRODUCTINFO_H
#define PRODUCTINFO_H

#include <QDialog>

/*! \class productInfo
 \brief This class defines the productInfo class
 It will consist of a GUI that displays our product info
 It will inherit from QDialog provided by QT
 */

namespace Ui {
class productInfo;
}

class productInfo : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief productInfo The class constructor
     * @param parent  Creates a null value to the QWidget parent class
     */
    explicit productInfo(QWidget *parent = nullptr);




    /**
      * @brief productInfo The class constructor
       */
    ~productInfo();

private:
    Ui::productInfo *ui; //!< A private member pointer variable that holds the GUI for productInfo
};

#endif // PRODUCTINFO_H
