/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *list_ShowSubtitle;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QTextEdit *edt_text;
    QLineEdit *edt_start;
    QLabel *label_4;
    QLineEdit *edt_end;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btn_Save;
    QPushButton *btnStart;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_negetive;
    QLineEdit *edt_shifttime;
    QPushButton *btn_plus;
    QPushButton *btn_change;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1073, 550);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(47, 39, 39);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(19);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	color: rgb(119, 118, 123);\n"
"}"));

        verticalLayout_3->addWidget(label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        list_ShowSubtitle = new QListWidget(centralwidget);
        list_ShowSubtitle->setObjectName(QString::fromUtf8("list_ShowSubtitle"));
        list_ShowSubtitle->setStyleSheet(QString::fromUtf8("QListWidget\n"
"{\n"
"\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"}"));

        horizontalLayout_3->addWidget(list_ShowSubtitle);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(350, 0));
        widget->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(36, 31, 49);\n"
"}"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, -1, -1, 0);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	color: rgb(119, 118, 123);\n"
"}"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        edt_text = new QTextEdit(widget);
        edt_text->setObjectName(QString::fromUtf8("edt_text"));
        edt_text->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"	\n"
"		\n"
"	color: rgb(255, 255, 255);\n"
"\n"
"}"));

        gridLayout->addWidget(edt_text, 3, 0, 1, 2);

        edt_start = new QLineEdit(widget);
        edt_start->setObjectName(QString::fromUtf8("edt_start"));
        edt_start->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"}"));

        gridLayout->addWidget(edt_start, 0, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	color: rgb(119, 118, 123);\n"
"}"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        edt_end = new QLineEdit(widget);
        edt_end->setObjectName(QString::fromUtf8("edt_end"));
        edt_end->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"}"));

        gridLayout->addWidget(edt_end, 1, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	color: rgb(119, 118, 123);\n"
"}"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(widget);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        btn_Save = new QPushButton(centralwidget);
        btn_Save->setObjectName(QString::fromUtf8("btn_Save"));
        btn_Save->setMinimumSize(QSize(521, 0));
        btn_Save->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	color: rgb(61, 56, 70);\n"
"	background-color: rgb(111, 63, 26);\n"
"}"));

        verticalLayout_2->addWidget(btn_Save);

        btnStart = new QPushButton(centralwidget);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));
        btnStart->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	color: rgb(61, 56, 70);\n"
"	background-color: rgb(111, 63, 26);\n"
"}"));

        verticalLayout_2->addWidget(btnStart);


        horizontalLayout_2->addLayout(verticalLayout_2);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_negetive = new QPushButton(widget_2);
        btn_negetive->setObjectName(QString::fromUtf8("btn_negetive"));
        btn_negetive->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	color: rgb(61, 56, 70);\n"
"	background-color: rgb(111, 63, 26);\n"
"}"));

        horizontalLayout->addWidget(btn_negetive);

        edt_shifttime = new QLineEdit(widget_2);
        edt_shifttime->setObjectName(QString::fromUtf8("edt_shifttime"));
        edt_shifttime->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"}"));

        horizontalLayout->addWidget(edt_shifttime);

        btn_plus = new QPushButton(widget_2);
        btn_plus->setObjectName(QString::fromUtf8("btn_plus"));
        btn_plus->setMinimumSize(QSize(100, 0));
        btn_plus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	color: rgb(61, 56, 70);\n"
"	background-color: rgb(111, 63, 26);\n"
"}"));

        horizontalLayout->addWidget(btn_plus);


        verticalLayout->addLayout(horizontalLayout);

        btn_change = new QPushButton(widget_2);
        btn_change->setObjectName(QString::fromUtf8("btn_change"));
        btn_change->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	color: rgb(61, 56, 70);\n"
"	background-color: rgb(111, 63, 26);\n"
"}"));

        verticalLayout->addWidget(btn_change);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(widget_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        gridLayout_3->addLayout(verticalLayout_3, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Subtitle", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Text", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "End time:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Start time:", nullptr));
        btn_Save->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        btnStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        btn_negetive->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btn_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btn_change->setText(QCoreApplication::translate("MainWindow", "Change", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
