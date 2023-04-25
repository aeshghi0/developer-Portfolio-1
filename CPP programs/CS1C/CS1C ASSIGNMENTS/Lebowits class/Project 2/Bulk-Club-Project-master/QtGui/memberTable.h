#ifndef MEMBERTABLE_H
#define MEMBERTABLE_H

#include "constants.h"
#include "menuAdministrator.h"

#include <QtWidgets>
#include <QDialog>
#include <QtSql>
#include <QSqlTableModel>

/** @brief memberTable header file.
    @author Kenneth Casimiro
    @date March 2018
    */

class QDialogButtonBox;
class QPushButton;
class QSqlTableModel;

namespace Widg {
class MemberTable;
}

class MemberTable : public QWidget
{
    Q_OBJECT

public:
    /**
     * @brief MemberTable - default constructor
     * @param tableName - name of table in SQL database
     * @param parent
     */
    explicit MemberTable(const QString &tableName, QWidget *parent = nullptr);
    ~MemberTable();

private slots:
    /**
     * @brief submit - commits all user changes
     */
    void submit();

    /**
     * @brief back - goes back to previous window
     */
    void back();

private:
    QPushButton *backButton;      /*!< back button */
    QPushButton *submitButton;    /*!< submit button */
    QPushButton *revertButton;    /*!< revert button */
    QPushButton *quitButton;      /*!< quit button*/
    QDialogButtonBox *buttonBox;  /*!< used for submit */
    QSqlTableModel *model;        /*!< used for table format */
    Widg::MemberTable *widg;      /*!< used for table format */
};

#endif // MEMBERTABLE_H
