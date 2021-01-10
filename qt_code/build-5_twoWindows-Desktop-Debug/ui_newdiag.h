/********************************************************************************
** Form generated from reading UI file 'newdiag.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWDIAG_H
#define UI_NEWDIAG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_newDiag
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QDialog *newDiag)
    {
        if (newDiag->objectName().isEmpty())
            newDiag->setObjectName(QStringLiteral("newDiag"));
        newDiag->resize(400, 300);
        verticalLayout = new QVBoxLayout(newDiag);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(newDiag);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);


        retranslateUi(newDiag);

        QMetaObject::connectSlotsByName(newDiag);
    } // setupUi

    void retranslateUi(QDialog *newDiag)
    {
        newDiag->setWindowTitle(QApplication::translate("newDiag", "Dialog", nullptr));
        label->setText(QApplication::translate("newDiag", "Welcome to the new window!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newDiag: public Ui_newDiag {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWDIAG_H
