#ifndef NEWSALES_H
#define NEWSALES_H

#include "menu.h"
#include <iostream>
#include <QMainWindow>
#include <QInputDialog>
#include <QFile>
#include <QTextStream>

/** @brief newSales UI class header file.
    @author Tristan Ligtvoet
    @date March 2018
    */

namespace Ui {
class newSales;
}

class newSales : public QWidget
{
    Q_OBJECT

public:
    /**
     * @brief newSales - default constructor
     * @param parent
     */
    explicit newSales(QWidget *parent = 0);

    /**
     * @brief nameOfCustomer - gets the member name
     * @return name
     */
    QString nameOfCustomer(int);

    /**
     * @brief memberStatus - gets the member status
     * @return memberStatus
     */
    QString memberStatus(int);
    ~newSales();

private slots:
    /**
     * @brief on_pushButton_back_clicked - goes to previous window
     */
    void on_pushButton_back_clicked();

    /**
     * @brief on_pushButton_clicked - gets user specified input to search sales on a given day
     */
    void on_pushButton_clicked();

private:
    Ui::newSales *ui;
};

#endif // NEWSALES_H
