#ifndef ROBOTCARE_H
#define ROBOTCARE_H

#include <QDialog>

/*! \class robotCare
 \brief This class defines the robotCare class
 It will consist of a GUI that shows the robot care warranty
 It will inherit from QDialog provided by QT
 */
namespace Ui {
class robotcare;
}

class robotcare : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief robotcare The class constructor
     * @param parent  Creates a null value to the QWidget parent class
     */
    explicit robotcare(QWidget *parent = nullptr);




    /**
           * @brief robotcare The class constructor
           */
    ~robotcare();

private slots:
    /**
     * @brief on_pushButton_clicked A private slot that lets the user purchase the warranty
     */
    void on_pushButton_clicked();





    /**
     * @brief on_pushButton_2_clicked A private slot that exits to the previous page
     */
    void on_pushButton_2_clicked();

private:
    Ui::robotcare *ui; //!< A private member pointer variable that holds the GUI for robot care
};

#endif // ROBOTCARE_H
