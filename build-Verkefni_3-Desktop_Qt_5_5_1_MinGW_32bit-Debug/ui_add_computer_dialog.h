/********************************************************************************
** Form generated from reading UI file 'add_computer_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_COMPUTER_DIALOG_H
#define UI_ADD_COMPUTER_DIALOG_H

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

class Ui_add_computer_dialog
{
public:
    QLabel *name_computer_label;
    QLineEdit *input_computer_name;
    QLineEdit *input_computer_type;
    QLineEdit *input_computer_year_built;
    QLabel *type_computer_label;
    QLabel *year_built_computer_label;
    QLabel *label_4;
    QPushButton *add_new_computer_button;

    void setupUi(QDialog *add_computer_dialog)
    {
        if (add_computer_dialog->objectName().isEmpty())
            add_computer_dialog->setObjectName(QStringLiteral("add_computer_dialog"));
        add_computer_dialog->resize(413, 317);
        name_computer_label = new QLabel(add_computer_dialog);
        name_computer_label->setObjectName(QStringLiteral("name_computer_label"));
        name_computer_label->setGeometry(QRect(20, 50, 121, 21));
        input_computer_name = new QLineEdit(add_computer_dialog);
        input_computer_name->setObjectName(QStringLiteral("input_computer_name"));
        input_computer_name->setGeometry(QRect(20, 70, 341, 22));
        input_computer_type = new QLineEdit(add_computer_dialog);
        input_computer_type->setObjectName(QStringLiteral("input_computer_type"));
        input_computer_type->setGeometry(QRect(20, 130, 281, 22));
        input_computer_year_built = new QLineEdit(add_computer_dialog);
        input_computer_year_built->setObjectName(QStringLiteral("input_computer_year_built"));
        input_computer_year_built->setGeometry(QRect(20, 190, 201, 22));
        type_computer_label = new QLabel(add_computer_dialog);
        type_computer_label->setObjectName(QStringLiteral("type_computer_label"));
        type_computer_label->setGeometry(QRect(20, 110, 55, 16));
        year_built_computer_label = new QLabel(add_computer_dialog);
        year_built_computer_label->setObjectName(QStringLiteral("year_built_computer_label"));
        year_built_computer_label->setGeometry(QRect(20, 170, 71, 16));
        label_4 = new QLabel(add_computer_dialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(24, 10, 350, 20));
        label_4->setMaximumSize(QSize(16777215, 21));
        add_new_computer_button = new QPushButton(add_computer_dialog);
        add_new_computer_button->setObjectName(QStringLiteral("add_new_computer_button"));
        add_new_computer_button->setGeometry(QRect(30, 250, 161, 28));

        retranslateUi(add_computer_dialog);

        QMetaObject::connectSlotsByName(add_computer_dialog);
    } // setupUi

    void retranslateUi(QDialog *add_computer_dialog)
    {
        add_computer_dialog->setWindowTitle(QApplication::translate("add_computer_dialog", "Dialog", 0));
        name_computer_label->setText(QApplication::translate("add_computer_dialog", "Name:", 0));
        type_computer_label->setText(QApplication::translate("add_computer_dialog", "Type:", 0));
        year_built_computer_label->setText(QApplication::translate("add_computer_dialog", "Year built:", 0));
        label_4->setText(QApplication::translate("add_computer_dialog", "Please input information about computer in the fields below", 0));
        add_new_computer_button->setText(QApplication::translate("add_computer_dialog", "Add new computer!", 0));
    } // retranslateUi

};

namespace Ui {
    class add_computer_dialog: public Ui_add_computer_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_COMPUTER_DIALOG_H
