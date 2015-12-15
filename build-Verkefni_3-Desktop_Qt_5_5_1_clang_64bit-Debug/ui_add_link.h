/********************************************************************************
** Form generated from reading UI file 'add_link.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_LINK_H
#define UI_ADD_LINK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Add_link
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *Scientist_label;
    QLineEdit *Computer_label;
    QPushButton *OK_button;
    QPushButton *Cancel_button;
    QLabel *label_error_scientistID;
    QLabel *label_error_computerID;
    QLabel *label_error_add_link;

    void setupUi(QDialog *Add_link)
    {
        if (Add_link->objectName().isEmpty())
            Add_link->setObjectName(QStringLiteral("Add_link"));
        Add_link->resize(278, 151);
        Add_link->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 127);\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(Add_link);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 121, 31));
        label_2 = new QLabel(Add_link);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 15, 141, 21));
        Scientist_label = new QLineEdit(Add_link);
        Scientist_label->setObjectName(QStringLiteral("Scientist_label"));
        Scientist_label->setGeometry(QRect(10, 50, 51, 21));
        Scientist_label->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        Computer_label = new QLineEdit(Add_link);
        Computer_label->setObjectName(QStringLiteral("Computer_label"));
        Computer_label->setGeometry(QRect(150, 50, 51, 21));
        Computer_label->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        OK_button = new QPushButton(Add_link);
        OK_button->setObjectName(QStringLiteral("OK_button"));
        OK_button->setGeometry(QRect(40, 90, 91, 31));
        Cancel_button = new QPushButton(Add_link);
        Cancel_button->setObjectName(QStringLiteral("Cancel_button"));
        Cancel_button->setGeometry(QRect(150, 90, 91, 31));
        label_error_scientistID = new QLabel(Add_link);
        label_error_scientistID->setObjectName(QStringLiteral("label_error_scientistID"));
        label_error_scientistID->setGeometry(QRect(70, 50, 71, 21));
        label_error_computerID = new QLabel(Add_link);
        label_error_computerID->setObjectName(QStringLiteral("label_error_computerID"));
        label_error_computerID->setGeometry(QRect(210, 50, 111, 21));
        label_error_add_link = new QLabel(Add_link);
        label_error_add_link->setObjectName(QStringLiteral("label_error_add_link"));
        label_error_add_link->setGeometry(QRect(50, 120, 181, 21));

        retranslateUi(Add_link);

        QMetaObject::connectSlotsByName(Add_link);
    } // setupUi

    void retranslateUi(QDialog *Add_link)
    {
        Add_link->setWindowTitle(QApplication::translate("Add_link", "Dialog", 0));
        label->setText(QApplication::translate("Add_link", "<h3>Input sceintist ID</h3>", 0));
        label_2->setText(QApplication::translate("Add_link", "<h3>Input computer ID</h3>", 0));
        OK_button->setText(QApplication::translate("Add_link", "OK", 0));
        Cancel_button->setText(QApplication::translate("Add_link", "Cancel", 0));
        label_error_scientistID->setText(QString());
        label_error_computerID->setText(QString());
        label_error_add_link->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Add_link: public Ui_Add_link {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_LINK_H
