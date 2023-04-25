/********************************************************************************
** Form generated from reading UI file 'shapeparser.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHAPEPARSER_H
#define UI_SHAPEPARSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_shapeParser
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinBox;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *comboBox;
    QLabel *label_6;
    QComboBox *comboBox_2;
    QLabel *label_7;
    QComboBox *comboBox_3;
    QLabel *label_8;
    QComboBox *comboBox_4;
    QLabel *label_9;
    QLabel *label_10;
    QComboBox *comboBox_5;
    QLabel *label_11;
    QComboBox *comboBox_6;
    QMenuBar *menubar;
    QMenu *menushape_Parser;
    QMenu *menuPen_options;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *shapeParser)
    {
        if (shapeParser->objectName().isEmpty())
            shapeParser->setObjectName(QString::fromUtf8("shapeParser"));
        shapeParser->resize(809, 622);
        centralwidget = new QWidget(shapeParser);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 60, 121, 31));
        QFont font;
        font.setPointSize(17);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 90, 161, 21));
        label_2->setFont(font);
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(110, 90, 42, 22));
        spinBox->setMinimum(2);
        spinBox->setMaximum(3);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 20, 111, 51));
        QFont font1;
        font1.setPointSize(26);
        label_3->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 110, 71, 51));
        label_4->setFont(font1);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 150, 91, 31));
        label_5->setFont(font);
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(100, 150, 101, 32));
        comboBox->setAutoFillBackground(false);
        comboBox->setInputMethodHints(Qt::ImhNone);
        comboBox->setEditable(true);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 190, 151, 16));
        label_6->setFont(font);
        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(100, 180, 91, 32));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 210, 81, 41));
        label_7->setFont(font);
        comboBox_3 = new QComboBox(centralwidget);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(10, 240, 101, 32));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(130, 220, 121, 20));
        label_8->setFont(font);
        comboBox_4 = new QComboBox(centralwidget);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setGeometry(QRect(160, 240, 111, 32));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 280, 91, 51));
        label_9->setFont(font1);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 330, 101, 21));
        label_10->setFont(font);
        comboBox_5 = new QComboBox(centralwidget);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setGeometry(QRect(120, 320, 91, 41));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 360, 101, 21));
        label_11->setFont(font);
        comboBox_6 = new QComboBox(centralwidget);
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
        comboBox_6->setGeometry(QRect(120, 351, 91, 41));
        shapeParser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(shapeParser);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 809, 22));
        menushape_Parser = new QMenu(menubar);
        menushape_Parser->setObjectName(QString::fromUtf8("menushape_Parser"));
        menuPen_options = new QMenu(menubar);
        menuPen_options->setObjectName(QString::fromUtf8("menuPen_options"));
        shapeParser->setMenuBar(menubar);
        statusbar = new QStatusBar(shapeParser);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        shapeParser->setStatusBar(statusbar);

        menubar->addAction(menushape_Parser->menuAction());
        menubar->addAction(menuPen_options->menuAction());
        menuPen_options->addSeparator();
        menuPen_options->addSeparator();

        retranslateUi(shapeParser);

        QMetaObject::connectSlotsByName(shapeParser);
    } // setupUi

    void retranslateUi(QMainWindow *shapeParser)
    {
        shapeParser->setWindowTitle(QCoreApplication::translate("shapeParser", "shapeParser", nullptr));
        label->setText(QCoreApplication::translate("shapeParser", "Shape:", nullptr));
        label_2->setText(QCoreApplication::translate("shapeParser", "Dimensions:", nullptr));
        label_3->setText(QCoreApplication::translate("shapeParser", "Shape:", nullptr));
        label_4->setText(QCoreApplication::translate("shapeParser", "Pen:", nullptr));
        label_5->setText(QCoreApplication::translate("shapeParser", "pen color:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("shapeParser", "Blue", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("shapeParser", "Red", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("shapeParser", "Black", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("shapeParser", "Orange", nullptr));
        comboBox->setItemText(4, QString());

        label_6->setText(QCoreApplication::translate("shapeParser", "Pen Width:", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("shapeParser", "1", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("shapeParser", "2", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("shapeParser", "3", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("shapeParser", "4", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("shapeParser", "5", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("shapeParser", "6", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("shapeParser", "7", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("shapeParser", "8", nullptr));
        comboBox_2->setItemText(8, QCoreApplication::translate("shapeParser", "9", nullptr));
        comboBox_2->setItemText(9, QCoreApplication::translate("shapeParser", "10", nullptr));

        label_7->setText(QCoreApplication::translate("shapeParser", "Pen Style:", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("shapeParser", "SolidLine", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("shapeParser", "DashLine", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("shapeParser", "DotLine", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("shapeParser", "DashDotLine", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("shapeParser", "DashDotDotLine", nullptr));
        comboBox_3->setItemText(5, QCoreApplication::translate("shapeParser", "CustomeDashLine", nullptr));
        comboBox_3->setItemText(6, QCoreApplication::translate("shapeParser", "Blank", nullptr));

        label_8->setText(QCoreApplication::translate("shapeParser", "Pen Join Style:", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("shapeParser", "SquareCap", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("shapeParser", "FlatCap", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("shapeParser", "RoundCap", nullptr));

        label_9->setText(QCoreApplication::translate("shapeParser", "Brush:", nullptr));
        label_10->setText(QCoreApplication::translate("shapeParser", "Brush Color:", nullptr));
        comboBox_5->setItemText(0, QCoreApplication::translate("shapeParser", "Red", nullptr));
        comboBox_5->setItemText(1, QCoreApplication::translate("shapeParser", "Blue", nullptr));
        comboBox_5->setItemText(2, QCoreApplication::translate("shapeParser", "Orange", nullptr));
        comboBox_5->setItemText(3, QCoreApplication::translate("shapeParser", "Green", nullptr));
        comboBox_5->setItemText(4, QCoreApplication::translate("shapeParser", "Yellow", nullptr));
        comboBox_5->setItemText(5, QCoreApplication::translate("shapeParser", "Orange", nullptr));
        comboBox_5->setItemText(6, QCoreApplication::translate("shapeParser", "Pink", nullptr));
        comboBox_5->setItemText(7, QCoreApplication::translate("shapeParser", "Purple", nullptr));
        comboBox_5->setItemText(8, QCoreApplication::translate("shapeParser", "Black", nullptr));

        label_11->setText(QCoreApplication::translate("shapeParser", "Brush Shape:", nullptr));
        comboBox_6->setItemText(0, QCoreApplication::translate("shapeParser", "Flat", nullptr));
        comboBox_6->setItemText(1, QCoreApplication::translate("shapeParser", "Filbert", nullptr));
        comboBox_6->setItemText(2, QCoreApplication::translate("shapeParser", "Round", nullptr));

        menushape_Parser->setTitle(QCoreApplication::translate("shapeParser", "shape Parser", nullptr));
        menuPen_options->setTitle(QCoreApplication::translate("shapeParser", "Pen options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class shapeParser: public Ui_shapeParser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHAPEPARSER_H
