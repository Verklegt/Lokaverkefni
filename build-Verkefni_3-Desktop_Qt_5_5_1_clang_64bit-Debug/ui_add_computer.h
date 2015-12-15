/********************************************************************************
** Form generated from reading UI file 'add_computer.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_COMPUTER_H
#define UI_ADD_COMPUTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Add_computer
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLabel *label_error_add_computer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_error_computer_name;
    QLineEdit *add_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_error_computer_type;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *button_electro;
    QRadioButton *button_mecha;
    QRadioButton *button_trans;
    QRadioButton *button_other;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_error_computer_build;
    QLineEdit *add_build;
    QPushButton *add_computer_button;
    QPushButton *Cancel_button;

    void setupUi(QDialog *Add_computer)
    {
        if (Add_computer->objectName().isEmpty())
            Add_computer->setObjectName(QStringLiteral("Add_computer"));
        Add_computer->resize(400, 314);
        Add_computer->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 127);\n"
"color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(Add_computer);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_4 = new QLabel(Add_computer);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_error_add_computer = new QLabel(Add_computer);
        label_error_add_computer->setObjectName(QStringLiteral("label_error_add_computer"));

        verticalLayout->addWidget(label_error_add_computer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Add_computer);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        label_error_computer_name = new QLabel(Add_computer);
        label_error_computer_name->setObjectName(QStringLiteral("label_error_computer_name"));

        horizontalLayout->addWidget(label_error_computer_name);


        verticalLayout->addLayout(horizontalLayout);

        add_name = new QLineEdit(Add_computer);
        add_name->setObjectName(QStringLiteral("add_name"));
        add_name->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(add_name);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(Add_computer);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        label_error_computer_type = new QLabel(Add_computer);
        label_error_computer_type->setObjectName(QStringLiteral("label_error_computer_type"));

        horizontalLayout_2->addWidget(label_error_computer_type);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        button_electro = new QRadioButton(Add_computer);
        button_electro->setObjectName(QStringLiteral("button_electro"));

        horizontalLayout_4->addWidget(button_electro);

        button_mecha = new QRadioButton(Add_computer);
        button_mecha->setObjectName(QStringLiteral("button_mecha"));

        horizontalLayout_4->addWidget(button_mecha);

        button_trans = new QRadioButton(Add_computer);
        button_trans->setObjectName(QStringLiteral("button_trans"));

        horizontalLayout_4->addWidget(button_trans);

        button_other = new QRadioButton(Add_computer);
        button_other->setObjectName(QStringLiteral("button_other"));

        horizontalLayout_4->addWidget(button_other);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(Add_computer);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        label_error_computer_build = new QLabel(Add_computer);
        label_error_computer_build->setObjectName(QStringLiteral("label_error_computer_build"));

        horizontalLayout_3->addWidget(label_error_computer_build);


        verticalLayout->addLayout(horizontalLayout_3);

        add_build = new QLineEdit(Add_computer);
        add_build->setObjectName(QStringLiteral("add_build"));
        add_build->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(add_build);

        add_computer_button = new QPushButton(Add_computer);
        add_computer_button->setObjectName(QStringLiteral("add_computer_button"));

        verticalLayout->addWidget(add_computer_button);

        Cancel_button = new QPushButton(Add_computer);
        Cancel_button->setObjectName(QStringLiteral("Cancel_button"));

        verticalLayout->addWidget(Cancel_button);


        retranslateUi(Add_computer);

        QMetaObject::connectSlotsByName(Add_computer);
    } // setupUi

    void retranslateUi(QDialog *Add_computer)
    {
        Add_computer->setWindowTitle(QApplication::translate("Add_computer", "Add computer", 0));
        label_4->setText(QApplication::translate("Add_computer", "<html><head/><body><p><span style=\" font-size:x-large; font-weight:600; color:#00ff00;\">Add computer</span></p></body></html>", 0));
        label_error_add_computer->setText(QString());
        label->setText(QApplication::translate("Add_computer", "Name:", 0));
        label_error_computer_name->setText(QString());
        label_2->setText(QApplication::translate("Add_computer", "Type:", 0));
        label_error_computer_type->setText(QString());
        button_electro->setText(QApplication::translate("Add_computer", "Electronic", 0));
        button_mecha->setText(QApplication::translate("Add_computer", "Mechatronic", 0));
        button_trans->setText(QApplication::translate("Add_computer", "Transistor", 0));
        button_other->setText(QApplication::translate("Add_computer", "Other", 0));
        label_3->setText(QApplication::translate("Add_computer", "Year build:", 0));
        label_error_computer_build->setText(QString());
        add_computer_button->setText(QApplication::translate("Add_computer", "Add computer", 0));
        Cancel_button->setText(QApplication::translate("Add_computer", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class Add_computer: public Ui_Add_computer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_COMPUTER_H
