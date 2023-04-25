/********************************************************************************
** Form generated from reading UI file 'employeetable.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEETABLE_H
#define UI_EMPLOYEETABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmployeeTable
{
public:
    QTableView *tableView;

    void setupUi(QWidget *EmployeeTable)
    {
        if (EmployeeTable->objectName().isEmpty())
            EmployeeTable->setObjectName(QStringLiteral("EmployeeTable"));
        EmployeeTable->resize(400, 300);
        tableView = new QTableView(EmployeeTable);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 341, 261));

        retranslateUi(EmployeeTable);

        QMetaObject::connectSlotsByName(EmployeeTable);
    } // setupUi

    void retranslateUi(QWidget *EmployeeTable)
    {
        EmployeeTable->setWindowTitle(QApplication::translate("EmployeeTable", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmployeeTable: public Ui_EmployeeTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEETABLE_H
