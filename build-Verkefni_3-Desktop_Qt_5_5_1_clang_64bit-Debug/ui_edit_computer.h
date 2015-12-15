/********************************************************************************
** Form generated from reading UI file 'edit_computer.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_COMPUTER_H
#define UI_EDIT_COMPUTER_H

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

class Ui_Edit_computer
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
    QRadioButton *electro_button;
    QRadioButton *mecha_button;
    QRadioButton *trans_button;
    QRadioButton *other_button;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_error_computer_build;
    QLineEdit *add_build;
    QPushButton *button_edit_computer;
    QPushButton *button_cancel;

    void setupUi(QDialog *Edit_computer)
    {
        if (Edit_computer->objectName().isEmpty())
            Edit_computer->setObjectName(QStringLiteral("Edit_computer"));
        Edit_computer->resize(468, 293);
        Edit_computer->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 127);\n"
"color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(Edit_computer);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_4 = new QLabel(Edit_computer);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_error_add_computer = new QLabel(Edit_computer);
        label_error_add_computer->setObjectName(QStringLiteral("label_error_add_computer"));

        verticalLayout->addWidget(label_error_add_computer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Edit_computer);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        label_error_computer_name = new QLabel(Edit_computer);
        label_error_computer_name->setObjectName(QStringLiteral("label_error_computer_name"));

        horizontalLayout->addWidget(label_error_computer_name);


        verticalLayout->addLayout(horizontalLayout);

        add_name = new QLineEdit(Edit_computer);
        add_name->setObjectName(QStringLiteral("add_name"));
        add_name->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(add_name);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(Edit_computer);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        label_error_computer_type = new QLabel(Edit_computer);
        label_error_computer_type->setObjectName(QStringLiteral("label_error_computer_type"));

        horizontalLayout_2->addWidget(label_error_computer_type);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        electro_button = new QRadioButton(Edit_computer);
        electro_button->setObjectName(QStringLiteral("electro_button"));

        horizontalLayout_4->addWidget(electro_button);

        mecha_button = new QRadioButton(Edit_computer);
        mecha_button->setObjectName(QStringLiteral("mecha_button"));

        horizontalLayout_4->addWidget(mecha_button);

        trans_button = new QRadioButton(Edit_computer);
        trans_button->setObjectName(QStringLiteral("trans_button"));

        horizontalLayout_4->addWidget(trans_button);

        other_button = new QRadioButton(Edit_computer);
        other_button->setObjectName(QStringLiteral("other_button"));

        horizontalLayout_4->addWidget(other_button);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(Edit_computer);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        label_error_computer_build = new QLabel(Edit_computer);
        label_error_computer_build->setObjectName(QStringLiteral("label_error_computer_build"));

        horizontalLayout_3->addWidget(label_error_computer_build);


        verticalLayout->addLayout(horizontalLayout_3);

        add_build = new QLineEdit(Edit_computer);
        add_build->setObjectName(QStringLiteral("add_build"));
        add_build->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(add_build);

        button_edit_computer = new QPushButton(Edit_computer);
        button_edit_computer->setObjectName(QStringLiteral("button_edit_computer"));

        verticalLayout->addWidget(button_edit_computer);

        button_cancel = new QPushButton(Edit_computer);
        button_cancel->setObjectName(QStringLiteral("button_cancel"));

        verticalLayout->addWidget(button_cancel);


        retranslateUi(Edit_computer);

        QMetaObject::connectSlotsByName(Edit_computer);
    } // setupUi

    void retranslateUi(QDialog *Edit_computer)
    {
        Edit_computer->setWindowTitle(QApplication::translate("Edit_computer", "Dialog", 0));
        label_4->setText(QApplication::translate("Edit_computer", "<html><head/><body><p><span style=\" font-size:x-large; font-weight:600; color:#00ff00;\">Edit computer</span></p></body></html>", 0));
        label_error_add_computer->setText(QString());
        label->setText(QApplication::translate("Edit_computer", "Name:", 0));
        label_error_computer_name->setText(QString());
        label_2->setText(QApplication::translate("Edit_computer", "Type:", 0));
        label_error_computer_type->setText(QString());
        electro_button->setText(QApplication::translate("Edit_computer", "Electronic", 0));
        mecha_button->setText(QApplication::translate("Edit_computer", "Mechatronic", 0));
        trans_button->setText(QApplication::translate("Edit_computer", "Transistor", 0));
        other_button->setText(QApplication::translate("Edit_computer", "Other", 0));
        label_3->setText(QApplication::translate("Edit_computer", "Year build:", 0));
        label_error_computer_build->setText(QString());
        button_edit_computer->setText(QApplication::translate("Edit_computer", "Edit computer", 0));
        button_cancel->setText(QApplication::translate("Edit_computer", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class Edit_computer: public Ui_Edit_computer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_COMPUTER_H
