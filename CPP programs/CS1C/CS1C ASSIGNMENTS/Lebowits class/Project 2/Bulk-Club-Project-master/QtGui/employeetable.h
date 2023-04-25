#ifndef EMPLOYEETABLE_H
#define EMPLOYEETABLE_H

#include "constants.h"
#include "menuAdministrator.h"

#include <QtWidgets>
#include <QDialog>
#include <QtSql>
#include <QSqlTableModel>

class QDialogButtonBox;
class QPushButton;
class QSqlTableModel;

/** @brief employeetable header file used to edit a employees record.
    @author Mitchell O'Hair
    @date March 2018
    */

namespace Widg {
class EmployeeTable;
}

class EmployeeTable : public QWidget
{
    Q_OBJECT

public:
    /**
     * @brief EmployeeTable - edit a employee record
     * @param tableName - table name for SQL database
     * @param parent
     */
    explicit EmployeeTable(const QString &tableName, QWidget *parent = nullptr);
    ~EmployeeTable();

private slots:
    /**
     * @brief submit - make the changes
     */
    void submit();
    /**
     * @brief back - go to the previous window
     */
    void back();

private:
    QPushButton *backButton;      /*!< back button */
    QPushButton *submitButton;    /*!< submit button */
    QPushButton *revertButton;    /*!< revert button */
    QPushButton *quitButton;      /*!< quit button */
    QDialogButtonBox *buttonBox;  /*!< used for submit */
    QSqlTableModel *model;        /*!< used for table format */
    Widg::EmployeeTable *widg;    /*!< used for table format */
};

#endif // EMPLOYEETABLE_H
