#ifndef DISPLAYITEM_H
#define DISPLAYITEM_H

#include <QDialog>
#include "loginwindow.h"

/** @brief displayItem header file UI used to display a item record.
    @author Kenneth Casimiro
    @date March 2018
    */

namespace Ui {
class displayItem;
}

class displayItem : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief displayItem - default constructor
     * @param parent
     */
    explicit displayItem(QWidget *parent = 0);

    /**
     * @brief default destructor
     */
    ~displayItem();

private slots:
    /**
     * @brief on_pushButton_clicked - back; goes to previous window
     */
    void on_pushButton_clicked();

    /**
     * @brief on_pushButton_2_clicked - logout; goes to login window
     */
    void on_pushButton_2_clicked();

    /**
     * @brief on_pushButton_3_clicked - submit; takes user input to display item
     */
    void on_pushButton_3_clicked();

private:
    Ui::displayItem *ui;
};

#endif // DISPLAYITEM_H
