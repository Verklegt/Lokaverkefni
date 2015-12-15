/********************************************************************************
** Form generated from reading UI file 'edit_scientist.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_SCIENTIST_H
#define UI_EDIT_SCIENTIST_H

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

class Ui_Edit_scientist
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_Title;
    QLabel *label_error_add_sceintist;
    QLabel *label;
    QLineEdit *line_ID;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Name;
    QLabel *label_error_scientist_name;
    QLineEdit *add_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Sex;
    QLabel *label_error_scientist_sex;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *button_female;
    QRadioButton *button_male;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_YearOfBirth;
    QLabel *label_error_scientist_birth;
    QLineEdit *add_yearOfBirth;
    QLabel *label_YearOfDeath;
    QLineEdit *add_yearOfDeath;
    QPushButton *button_edit_scientist;
    QPushButton *button_cancel;

    void setupUi(QDialog *Edit_scientist)
    {
        if (Edit_scientist->objectName().isEmpty())
            Edit_scientist->setObjectName(QStringLiteral("Edit_scientist"));
        Edit_scientist->resize(534, 382);
        Edit_scientist->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 127);\n"
"color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(Edit_scientist);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_Title = new QLabel(Edit_scientist);
        label_Title->setObjectName(QStringLiteral("label_Title"));

        verticalLayout->addWidget(label_Title);

        label_error_add_sceintist = new QLabel(Edit_scientist);
        label_error_add_sceintist->setObjectName(QStringLiteral("label_error_add_sceintist"));

        verticalLayout->addWidget(label_error_add_sceintist);

        label = new QLabel(Edit_scientist);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        line_ID = new QLineEdit(Edit_scientist);
        line_ID->setObjectName(QStringLiteral("line_ID"));

        verticalLayout->addWidget(line_ID);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_Name = new QLabel(Edit_scientist);
        label_Name->setObjectName(QStringLiteral("label_Name"));

        horizontalLayout->addWidget(label_Name);

        label_error_scientist_name = new QLabel(Edit_scientist);
        label_error_scientist_name->setObjectName(QStringLiteral("label_error_scientist_name"));

        horizontalLayout->addWidget(label_error_scientist_name);


        verticalLayout->addLayout(horizontalLayout);

        add_name = new QLineEdit(Edit_scientist);
        add_name->setObjectName(QStringLiteral("add_name"));
        add_name->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(add_name);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_Sex = new QLabel(Edit_scientist);
        label_Sex->setObjectName(QStringLiteral("label_Sex"));

        horizontalLayout_2->addWidget(label_Sex);

        label_error_scientist_sex = new QLabel(Edit_scientist);
        label_error_scientist_sex->setObjectName(QStringLiteral("label_error_scientist_sex"));

        horizontalLayout_2->addWidget(label_error_scientist_sex);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        button_female = new QRadioButton(Edit_scientist);
        button_female->setObjectName(QStringLiteral("button_female"));

        horizontalLayout_4->addWidget(button_female);

        button_male = new QRadioButton(Edit_scientist);
        button_male->setObjectName(QStringLiteral("button_male"));

        horizontalLayout_4->addWidget(button_male);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_YearOfBirth = new QLabel(Edit_scientist);
        label_YearOfBirth->setObjectName(QStringLiteral("label_YearOfBirth"));

        horizontalLayout_3->addWidget(label_YearOfBirth);

        label_error_scientist_birth = new QLabel(Edit_scientist);
        label_error_scientist_birth->setObjectName(QStringLiteral("label_error_scientist_birth"));

        horizontalLayout_3->addWidget(label_error_scientist_birth);


        verticalLayout->addLayout(horizontalLayout_3);

        add_yearOfBirth = new QLineEdit(Edit_scientist);
        add_yearOfBirth->setObjectName(QStringLiteral("add_yearOfBirth"));
        add_yearOfBirth->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(add_yearOfBirth);

        label_YearOfDeath = new QLabel(Edit_scientist);
        label_YearOfDeath->setObjectName(QStringLiteral("label_YearOfDeath"));

        verticalLayout->addWidget(label_YearOfDeath);

        add_yearOfDeath = new QLineEdit(Edit_scientist);
        add_yearOfDeath->setObjectName(QStringLiteral("add_yearOfDeath"));
        add_yearOfDeath->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(add_yearOfDeath);

        button_edit_scientist = new QPushButton(Edit_scientist);
        button_edit_scientist->setObjectName(QStringLiteral("button_edit_scientist"));

        verticalLayout->addWidget(button_edit_scientist);

        button_cancel = new QPushButton(Edit_scientist);
        button_cancel->setObjectName(QStringLiteral("button_cancel"));

        verticalLayout->addWidget(button_cancel);


        retranslateUi(Edit_scientist);

        QMetaObject::connectSlotsByName(Edit_scientist);
    } // setupUi

    void retranslateUi(QDialog *Edit_scientist)
    {
        Edit_scientist->setWindowTitle(QApplication::translate("Edit_scientist", "Dialog", 0));
        label_Title->setText(QApplication::translate("Edit_scientist", "<html><head/><body><p><span style=\" font-size:x-large; font-weight:600; color:#00ff00;\">Edit scientist</span></p></body></html>", 0));
        label_error_add_sceintist->setText(QString());
        label->setText(QApplication::translate("Edit_scientist", "ID", 0));
        label_Name->setText(QApplication::translate("Edit_scientist", "Name:", 0));
        label_error_scientist_name->setText(QString());
        label_Sex->setText(QApplication::translate("Edit_scientist", "Sex:", 0));
        label_error_scientist_sex->setText(QString());
        button_female->setText(QApplication::translate("Edit_scientist", "Female", 0));
        button_male->setText(QApplication::translate("Edit_scientist", "Male", 0));
        label_YearOfBirth->setText(QApplication::translate("Edit_scientist", "Year of birth:", 0));
        label_error_scientist_birth->setText(QString());
        label_YearOfDeath->setText(QApplication::translate("Edit_scientist", "Year of death (optional)", 0));
        add_yearOfDeath->setText(QString());
        button_edit_scientist->setText(QApplication::translate("Edit_scientist", "Edit scientist", 0));
        button_cancel->setText(QApplication::translate("Edit_scientist", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class Edit_scientist: public Ui_Edit_scientist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_SCIENTIST_H
