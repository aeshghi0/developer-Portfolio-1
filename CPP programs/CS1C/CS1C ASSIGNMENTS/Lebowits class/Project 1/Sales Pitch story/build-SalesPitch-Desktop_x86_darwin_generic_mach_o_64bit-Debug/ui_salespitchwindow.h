/********************************************************************************
** Form generated from reading UI file 'salespitchwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALESPITCHWINDOW_H
#define UI_SALESPITCHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SalesPitchWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SalesPitchWindow)
    {
        if (SalesPitchWindow->objectName().isEmpty())
            SalesPitchWindow->setObjectName(QString::fromUtf8("SalesPitchWindow"));
        SalesPitchWindow->resize(800, 600);
        centralwidget = new QWidget(SalesPitchWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 421, 61));
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(30, 70, 611, 271));
        SalesPitchWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SalesPitchWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        SalesPitchWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SalesPitchWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SalesPitchWindow->setStatusBar(statusbar);

        retranslateUi(SalesPitchWindow);

        QMetaObject::connectSlotsByName(SalesPitchWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SalesPitchWindow)
    {
        SalesPitchWindow->setWindowTitle(QCoreApplication::translate("SalesPitchWindow", "SalesPitchWindow", nullptr));
        textEdit->setHtml(QCoreApplication::translate("SalesPitchWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt; font-weight:600; text-decoration: underline;\">The Product information</span></p></body></html>", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("SalesPitchWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#fefefe;\"><span style=\" font-family:'PT Sans','sans-serif'; font-size:18pt; color:#606060; background-color:#fefefe;\">VJ Electronix offers manual and fully automated inspection systems for applications such as PCB assembly, semiconductor packages, electromechanical assemblies, bio-medical/pharmaceuticals, batteries, and more. Our systems offer a range of imaging options and simple manual or programmable operation. In addition, custom inspection systems are available tailored specifically for your production requirements.</span></p>\n"
""
                        "<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'PT Sans','sans-serif'; font-size:18pt; color:#606060; background-color:#fefefe;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#fefefe;\"><span style=\" font-family:'PT Sans','sans-serif'; font-size:18pt; color:#606060; background-color:#fefefe;\">All of our products are easily integrated into the manufacturing process for fast start-up and 24/7 operation. Their versatility and ease-of-use deliver repeatable results with all levels of production staff.</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SalesPitchWindow: public Ui_SalesPitchWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALESPITCHWINDOW_H
