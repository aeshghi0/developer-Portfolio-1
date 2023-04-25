/********************************************************************************
** Form generated from reading UI file 'pamphreqwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAMPHREQWINDOW_H
#define UI_PAMPHREQWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pamphReqWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTextBrowser *textBrowser;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *pamphReqWindow)
    {
        if (pamphReqWindow->objectName().isEmpty())
            pamphReqWindow->setObjectName(QString::fromUtf8("pamphReqWindow"));
        pamphReqWindow->resize(800, 600);
        centralwidget = new QWidget(pamphReqWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 381, 61));
        label->setSizeIncrement(QSize(6, 6));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        label->setLineWidth(3);
        label->setMidLineWidth(2);
        label->setTextFormat(Qt::RichText);
        label->setMargin(2);
        label->setIndent(0);
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 60, 791, 191));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 270, 341, 31));
        QFont font1;
        font1.setPointSize(15);
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 300, 51, 16));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 300, 271, 21));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 360, 341, 16));
        label_4->setFont(font1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 320, 112, 31));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 350, 112, 51));
        pamphReqWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(pamphReqWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        pamphReqWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(pamphReqWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        pamphReqWindow->setStatusBar(statusbar);

        retranslateUi(pamphReqWindow);

        QMetaObject::connectSlotsByName(pamphReqWindow);
    } // setupUi

    void retranslateUi(QMainWindow *pamphReqWindow)
    {
        pamphReqWindow->setWindowTitle(QCoreApplication::translate("pamphReqWindow", "pamphReqWindow", nullptr));
        label->setText(QCoreApplication::translate("pamphReqWindow", "Customer Pamphlet Request", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("pamphReqWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">As a explosive detector distrubutor, we understand that our customers need to read and review the pamphlet carefully; and we understand that there is going to be a lot of grey areas in understandoing the pamphlet of our company and it needs to be read more than just once. so here there are several ways that you can have access to the pamphlet beside having access to it from the website.</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("pamphReqWindow", "1 - E-mail the pamphlet to yourself or an associate", nullptr));
        label_3->setText(QCoreApplication::translate("pamphReqWindow", "E-mail :", nullptr));
        label_4->setText(QCoreApplication::translate("pamphReqWindow", "2 - Download a PDF version of the pamphlet", nullptr));
        pushButton->setText(QCoreApplication::translate("pamphReqWindow", "Send", nullptr));
        pushButton_2->setText(QCoreApplication::translate("pamphReqWindow", "Download", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pamphReqWindow: public Ui_pamphReqWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAMPHREQWINDOW_H
