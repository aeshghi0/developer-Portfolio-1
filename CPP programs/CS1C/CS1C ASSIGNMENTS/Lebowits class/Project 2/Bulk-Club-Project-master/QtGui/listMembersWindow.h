#ifndef LISTMEMBERSWINDOW_H
#define LISTMEMBERSWINDOW_H

#include <QDialog>
#include "loginwindow.h"
#include "members.h"
#include "memberManager.h"
#include "expirationSearch.h"
#include "displayPurchases.h"

/** @brief listMembersWindow UI class header file.
    @author Kenneth Casimiro
    @date March 2018
    */

namespace Ui {
class listMembersWindow;
}

class listMembersWindow : public QDialog
{
    Q_OBJECT

public:
    explicit listMembersWindow(QWidget *parent = 0);
    ~listMembersWindow();

private slots:
    /**
     * @brief on_BackButton_clicked - goes to previous window
     */
    void on_BackButton_clicked();

    /**
     * @brief on_Logout_clicked - goes to login window
     */
    void on_Logout_clicked();

    /**
     * @brief on_allMembersButton_clicked - displays all member records
     */
    void on_allMembersButton_clicked();

    /**
     * @brief on_comboBox_activated - sorts all member records
     * @param index - what sort the user wants to do
     */
    void on_comboBox_activated(int index);

    /**
     * @brief on_searchExpirationButton_clicked - opens the search expiration month window
     */
    void on_searchExpirationButton_clicked();

    /**
     * @brief on_pushButton_2_clicked - shows all Executive member records
     */
    void on_pushButton_2_clicked();

    /**
     * @brief on_pushButton_clicked - shows all Regular member records
     */
    void on_pushButton_clicked();

    /**
     * @brief on_getMemberPurchasesButton_clicked - opens the displayPurchases window
     */
    void on_getMemberPurchasesButton_clicked();

    /**
     * @brief on_getRebatesButton_clicked - shows all Executive member records rebates
     */
    void on_getRebatesButton_clicked();

private:
    Ui::listMembersWindow *ui;
};

#endif // LISTMEMBERSWINDOW_H
