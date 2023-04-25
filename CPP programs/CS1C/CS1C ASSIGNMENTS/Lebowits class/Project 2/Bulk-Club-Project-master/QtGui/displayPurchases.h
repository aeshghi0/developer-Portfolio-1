#ifndef DISPLAYPURCHASES_H
#define DISPLAYPURCHASES_H

#include <QDialog>
#include "loginwindow.h"

/** @brief displayPurchases header file UI used to display a member purchase.
    @author Kenneth Casimiro
    @date March 2018
    */

namespace Ui {
class displayPurchases;
}

class displayPurchases : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief displayPurchases - default constructor
     * @param parent
     */
    explicit displayPurchases(QWidget *parent = 0);
    ~displayPurchases();

private slots:
    /**
     * @brief on_pushButton_clicked - back button; goes to previous window
     */
    void on_pushButton_clicked();

    /**
     * @brief on_pushButton_2_clicked - logout button; goes to login window
     */
    void on_pushButton_2_clicked();

    /**
     * @brief on_pushButton_3_clicked - submit; takes user input to display member purchase
     */
    void on_pushButton_3_clicked();

private:
    Ui::displayPurchases *ui;
};

#endif // DISPLAYPURCHASES_H
