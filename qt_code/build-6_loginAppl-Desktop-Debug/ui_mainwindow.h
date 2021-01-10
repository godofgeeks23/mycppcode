/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *passwd;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout1;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 30, 331, 241));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        username = new QLineEdit(groupBox);
        username->setObjectName(QStringLiteral("username"));

        horizontalLayout->addWidget(username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        passwd = new QLineEdit(groupBox);
        passwd->setObjectName(QStringLiteral("passwd"));

        horizontalLayout_2->addWidget(passwd);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout1 = new QVBoxLayout(widget);
        verticalLayout1->setSpacing(6);
        verticalLayout1->setContentsMargins(11, 11, 11, 11);
        verticalLayout1->setObjectName(QStringLiteral("verticalLayout1"));
        verticalLayout1->setContentsMargins(0, 0, 0, 0);
        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Sign In", nullptr));
        label->setText(QApplication::translate("MainWindow", "UserName:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Password:", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Quit", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
