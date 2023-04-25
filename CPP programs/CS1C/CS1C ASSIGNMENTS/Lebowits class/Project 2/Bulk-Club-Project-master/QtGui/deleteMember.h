#ifndef DELETEMEMBER_H
#define DELETEMEMBER_H

#include <QDialog>
#include "loginwindow.h"
#include "members.h"
#include "memberManager.h"

/** @brief deleteMember header file UI used to delete a member record.

    @author Kenneth Casimiro
    @date March 2018
    */

namespace Ui {
class deleteMember;
}

class deleteMember : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief deleteMember - default constructor
     * @param parent
     */
    explicit deleteMember(QWidget *parent = 0);
    /**
     * @brief default destructor
     */
    ~deleteMember();

private slots:
    /**
     * @brief on_pushButton_back_clicked - back button; goes back to the previous window
     */
    void on_pushButton_back_clicked();

    /**
     * @brief on_pushButton_logout_clicked - logout button; goes to the login window
     */
    void on_pushButton_logout_clicked();

    /**
     * @brief on_pushButton_3_clicked - submit; takes user input to find and delete a member record
     */
    void on_pushButton_3_clicked();

private:
    Ui::deleteMember *ui;
};

#endif // DELETEMEMBER_H
