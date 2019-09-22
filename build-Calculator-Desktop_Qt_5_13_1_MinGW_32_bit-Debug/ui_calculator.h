/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *button4;
    QPushButton *Divide;
    QPushButton *multiply;
    QPushButton *button9;
    QPushButton *equal;
    QPushButton *buttonplus;
    QPushButton *button6;
    QPushButton *button0;
    QLineEdit *Display;
    QPushButton *button3;
    QPushButton *button2;
    QPushButton *button8;
    QPushButton *button1;
    QPushButton *subtract;
    QPushButton *button7;
    QPushButton *button5;
    QPushButton *clear;
    QPushButton *changeSign;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(499, 405);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        button4 = new QPushButton(centralwidget);
        button4->setObjectName(QString::fromUtf8("button4"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button4->sizePolicy().hasHeightForWidth());
        button4->setSizePolicy(sizePolicy);
        button4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #1a7ca0;\n"
"color: white;\n"
"border: 1px solid gray;\n"
"padding: 15px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: black;\n"
"color: white;\n"
"}"));

        gridLayout->addWidget(button4, 3, 0, 1, 1);

        Divide = new QPushButton(centralwidget);
        Divide->setObjectName(QString::fromUtf8("Divide"));
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #c295cf;\n"
"color: white;\n"
"border: 1px solid gray;\n"
"padding: 15px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: black;\n"
"color: white;\n"
"}"));

        gridLayout->addWidget(Divide, 2, 3, 1, 1);

        multiply = new QPushButton(centralwidget);
        multiply->setObjectName(QString::fromUtf8("multiply"));
        sizePolicy.setHeightForWidth(multiply->sizePolicy().hasHeightForWidth());
        multiply->setSizePolicy(sizePolicy);
        multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #c295cf;\n"
"color: white;\n"
"border: 1px solid gray;\n"
"padding: 15px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: black;\n"
"color: white;\n"
"}"));

        gridLayout->addWidget(multiply, 2, 4, 1, 1);

        button9 = new QPushButton(centralwidget);
        button9->setObjectName(QString::fromUtf8("button9"));
        sizePolicy.setHeightForWidth(button9->sizePolicy().hasHeightForWidth());
        button9->setSizePolicy(sizePolicy);
        button9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #1a7ca0;\n"
"color: white;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: black;\n"
"color: white;\n"
"}"));

        gridLayout->addWidget(button9, 2, 2, 1, 1);

        equal = new QPushButton(centralwidget);
        equal->setObjectName(QString::fromUtf8("equal"));
        sizePolicy.setHeightForWidth(equal->sizePolicy().hasHeightForWidth());
        equal->setSizePolicy(sizePolicy);
        equal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #c295cf;\n"
"color: white;\n"
"border: 1px solid gray;\n"
"padding: 15px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: black;\n"
"color: white;\n"
"}"));

        gridLayout->addWidget(equal, 5, 3, 1, 2);

        buttonplus = new QPushButton(centralwidget);
        buttonplus->setObjectName(QString::fromUtf8("buttonplus"));
        sizePolicy.setHeightForWidth(buttonplus->sizePolicy().hasHeightForWidth());
        buttonplus->setSizePolicy(sizePolicy);
        buttonplus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #c295cf;\n"
"color: white;\n"
"border: 1px solid gray;\n"
"padding: 15px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: black;\n"
"color: white;\n"
"}"));

        gridLayout->addWidget(buttonplus, 3, 3, 1, 1);

        button6 = new QPushButton(centralwidget);
        button6->setObjectName(QString::fromUtf8("button6"));
        sizePolicy.setHeightForWidth(button6->sizePolicy().hasHeightForWidth());
        button6->setSizePolicy(sizePolicy);
        button6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #1a7ca0;\n"
"color: white;\n"
"border: 1px solid gray;\n"
"padding: 15px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: black;\n"
"color: white;\n"
"}"));

        gridLayout->addWidget(button6, 3, 2, 1, 1);

        button0 = new QPushButton(centralwidget);
        button0->setObjectName(QString::fromUtf8("button0"));
        sizePolicy.setHeightForWidth(button0->sizePolicy().hasHeightForWidth());
        button0->setSizePolicy(sizePolicy);
        button0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #1a7ca0;\n"
"color: white;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: black;\n"
"color: white;\n"
"}"));

        gridLayout->addWidget(button0, 5, 1, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        Display->setFont(font);
        Display->setLayoutDirection(Qt::LeftToRight);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
" background-color: white;\n"
"border: 1px solid lightgray;\n"
"padding: 5px;\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 1, 0, 1, 5);

        button3 = new QPushButton(centralwidget);
        button3->setObjectName(QString::fromUtf8("button3"));
        sizePolicy.setHeightForWidth(button3->sizePolicy().hasHeightForWidth());
        button3->setSizePolicy(sizePolicy);
        button3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #1a7ca0;\n"
"color: white;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: black;\n"
"color: white;\n"
"}"));

        gridLayout->addWidget(button3, 4, 2, 1, 1);

        button2 = new QPushButton(centralwidget);
        button2->setObjectName(QString::fromUtf8("button2"));
        sizePolicy.setHeightForWidth(button2->sizePolicy().hasHeightForWidth());
        button2->setSizePolicy(sizePolicy);
        button2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #1a7ca0;\n"
"color: white;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: black;\n"
"color: white;\n"
"}"));

        gridLayout->addWidget(button2, 4, 1, 1, 1);

        button8 = new QPushButton(centralwidget);
        button8->setObjectName(QString::fromUtf8("button8"));
        sizePolicy.setHeightForWidth(button8->sizePolicy().hasHeightForWidth());
        button8->setSizePolicy(sizePolicy);
        button8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #1a7ca0;\n"
"color: white;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: black;\n"
"color: white;\n"
"}"));

        gridLayout->addWidget(button8, 2, 1, 1, 1);

        button1 = new QPushButton(centralwidget);
        button1->setObjectName(QString::fromUtf8("button1"));
        sizePolicy.setHeightForWidth(button1->sizePolicy().hasHeightForWidth());
        button1->setSizePolicy(sizePolicy);
        button1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #1a7ca0;\n"
"color: white;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: black;\n"
"color: white;\n"
"}"));

        gridLayout->addWidget(button1, 4, 0, 1, 1);

        subtract = new QPushButton(centralwidget);
        subtract->setObjectName(QString::fromUtf8("subtract"));
        sizePolicy.setHeightForWidth(subtract->sizePolicy().hasHeightForWidth());
        subtract->setSizePolicy(sizePolicy);
        subtract->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #c295cf;\n"
"color: white;\n"
"border: 1px solid gray;\n"
"padding: 15px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: black;\n"
"color: white;\n"
"}"));

        gridLayout->addWidget(subtract, 3, 4, 1, 1);

        button7 = new QPushButton(centralwidget);
        button7->setObjectName(QString::fromUtf8("button7"));
        sizePolicy.setHeightForWidth(button7->sizePolicy().hasHeightForWidth());
        button7->setSizePolicy(sizePolicy);
        button7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #1a7ca0;\n"
"color: white;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: black;\n"
"color: white;\n"
"}"));

        gridLayout->addWidget(button7, 2, 0, 1, 1);

        button5 = new QPushButton(centralwidget);
        button5->setObjectName(QString::fromUtf8("button5"));
        sizePolicy.setHeightForWidth(button5->sizePolicy().hasHeightForWidth());
        button5->setSizePolicy(sizePolicy);
        button5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #1a7ca0;\n"
"color: white;\n"
"border: 1px solid gray;\n"
"padding: 15px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: black;\n"
"color: white;\n"
"}"));

        gridLayout->addWidget(button5, 3, 1, 1, 1);

        clear = new QPushButton(centralwidget);
        clear->setObjectName(QString::fromUtf8("clear"));
        sizePolicy.setHeightForWidth(clear->sizePolicy().hasHeightForWidth());
        clear->setSizePolicy(sizePolicy);
        clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #c295cf;\n"
"color: white;\n"
"border: 1px solid gray;\n"
"padding: 15px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: black;\n"
"color: white;\n"
"}"));

        gridLayout->addWidget(clear, 4, 4, 1, 1);

        changeSign = new QPushButton(centralwidget);
        changeSign->setObjectName(QString::fromUtf8("changeSign"));
        sizePolicy.setHeightForWidth(changeSign->sizePolicy().hasHeightForWidth());
        changeSign->setSizePolicy(sizePolicy);
        changeSign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #c295cf;\n"
"color: white;\n"
"border: 1px solid gray;\n"
"padding: 15px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: black;\n"
"color: white;\n"
"}"));

        gridLayout->addWidget(changeSign, 4, 3, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Nirmala UI"));
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 5);

        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 499, 21));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Calculator->setStatusBar(statusbar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        button4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Divide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        multiply->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        button9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        equal->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        buttonplus->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        button6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        button0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        Display->setText(QCoreApplication::translate("Calculator", "0.0", nullptr));
        button3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        button2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        button8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        button1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        subtract->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        button7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        button5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        clear->setText(QCoreApplication::translate("Calculator", "Clear", nullptr));
        changeSign->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        label->setText(QCoreApplication::translate("Calculator", "Emily's Calculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
