#ifndef INVENTORYTABLE_H
#define INVENTORYTABLE_H

#include "constants.h"
#include "menuAdministrator.h"

#include <QtWidgets>
#include <QDialog>
#include <QtSql>
#include <QSqlTableModel>

/** @brief inventoryTable class header file.
    @author Kenneth Casimiro
    @date March 2018
    */

class QDialogButtonBox;
class QPushButton;
class QSqlTableModel;

namespace Widg {
class inventoryTable;
}

class inventoryTable : public QWidget
{
    Q_OBJECT

public:
    /**
     * @brief inventoryTable - edit inventory records
     * @param tableName - tale name in SQL database
     * @param parent
     */
    explicit inventoryTable(const QString &tableName, QWidget *parent = nullptr);
    ~inventoryTable();

private slots:
    /**
     * @brief submit - make all user changes
     */
    void submit();

    /**
     * @brief back - goes to previous window
     */
    void back();

private:
    QPushButton *backButton;      /*!< back button */
    QPushButton *submitButton;    /*!< submit button */
    QPushButton *revertButton;    /*!< revert button */
    QPushButton *quitButton;      /*!< quit button */
    QDialogButtonBox *buttonBox;  /*!< used for submit */
    QSqlTableModel *model;        /*!< used for table format */
    Widg::inventoryTable *widg;   /*!< used for table format */
};

#endif // INVENTORYTABLE_H
