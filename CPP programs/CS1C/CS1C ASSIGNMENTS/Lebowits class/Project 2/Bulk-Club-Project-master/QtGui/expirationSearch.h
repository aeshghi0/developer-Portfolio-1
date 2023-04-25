#ifndef EXPIRATIONSEARCH_H
#define EXPIRATIONSEARCH_H

#include <QDialog>
#include "menuAdministrator.h"
#include "loginwindow.h"

/** @brief expirationSearch header file UI used to find which membership expires in which month.
    @author Kenneth Casimiro
    @date March 2018
    */

namespace Ui {
class expirationSearch;
}

class expirationSearch : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief expirationSearch - default constructor
     * @param parent
     */
    explicit expirationSearch(QWidget *parent = 0);
    ~expirationSearch();

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
     * @brief on_comboBox_month_activated - pick a month to see which memberships will expire in that month
     * @param index - month
     */
    void on_comboBox_month_activated(int index);

private:
    Ui::expirationSearch *ui;
};

#endif // EXPIRATIONSEARCH_H
