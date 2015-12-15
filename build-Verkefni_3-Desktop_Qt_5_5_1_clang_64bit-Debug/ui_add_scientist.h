/********************************************************************************
** Form generated from reading UI file 'add_scientist.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_SCIENTIST_H
#define UI_ADD_SCIENTIST_H

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

class Ui_Add_scientist
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_Title;
    QLabel *label_error_add_sceintist;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Name;
    QLabel *label_error_scientist_name;
    QLineEdit *add_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Sex;
    QLabel *label_error_scientist_sex;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *female_button;
    QRadioButton *male_button;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_YearOfBirth;
    QLabel *label_error_scientist_birth;
    QLineEdit *add_yearOfBirth;
    QLabel *label_YearOfDeath;
    QLineEdit *add_yearOfDeath;
    QPushButton *add_scientist_button;
    QPushButton *Cancel_button;

    void setupUi(QDialog *Add_scientist)
    {
        if (Add_scientist->objectName().isEmpty())
            Add_scientist->setObjectName(QStringLiteral("Add_scientist"));
        Add_scientist->resize(400, 341);
        Add_scientist->setAutoFillBackground(false);
        Add_scientist->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 127);\n"
"color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(Add_scientist);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_Title = new QLabel(Add_scientist);
        label_Title->setObjectName(QStringLiteral("label_Title"));

        verticalLayout->addWidget(label_Title);

        label_error_add_sceintist = new QLabel(Add_scientist);
        label_error_add_sceintist->setObjectName(QStringLiteral("label_error_add_sceintist"));

        verticalLayout->addWidget(label_error_add_sceintist);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_Name = new QLabel(Add_scientist);
        label_Name->setObjectName(QStringLiteral("label_Name"));

        horizontalLayout->addWidget(label_Name);

        label_error_scientist_name = new QLabel(Add_scientist);
        label_error_scientist_name->setObjectName(QStringLiteral("label_error_scientist_name"));

        horizontalLayout->addWidget(label_error_scientist_name);


        verticalLayout->addLayout(horizontalLayout);

        add_name = new QLineEdit(Add_scientist);
        add_name->setObjectName(QStringLiteral("add_name"));
        add_name->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(add_name);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_Sex = new QLabel(Add_scientist);
        label_Sex->setObjectName(QStringLiteral("label_Sex"));

        horizontalLayout_2->addWidget(label_Sex);

        label_error_scientist_sex = new QLabel(Add_scientist);
        label_error_scientist_sex->setObjectName(QStringLiteral("label_error_scientist_sex"));

        horizontalLayout_2->addWidget(label_error_scientist_sex);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        female_button = new QRadioButton(Add_scientist);
        female_button->setObjectName(QStringLiteral("female_button"));

        horizontalLayout_4->addWidget(female_button);

        male_button = new QRadioButton(Add_scientist);
        male_button->setObjectName(QStringLiteral("male_button"));

        horizontalLayout_4->addWidget(male_button);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_YearOfBirth = new QLabel(Add_scientist);
        label_YearOfBirth->setObjectName(QStringLiteral("label_YearOfBirth"));

        horizontalLayout_3->addWidget(label_YearOfBirth);

        label_error_scientist_birth = new QLabel(Add_scientist);
        label_error_scientist_birth->setObjectName(QStringLiteral("label_error_scientist_birth"));

        horizontalLayout_3->addWidget(label_error_scientist_birth);


        verticalLayout->addLayout(horizontalLayout_3);

        add_yearOfBirth = new QLineEdit(Add_scientist);
        add_yearOfBirth->setObjectName(QStringLiteral("add_yearOfBirth"));
        add_yearOfBirth->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(add_yearOfBirth);

        label_YearOfDeath = new QLabel(Add_scientist);
        label_YearOfDeath->setObjectName(QStringLiteral("label_YearOfDeath"));

        verticalLayout->addWidget(label_YearOfDeath);

        add_yearOfDeath = new QLineEdit(Add_scientist);
        add_yearOfDeath->setObjectName(QStringLiteral("add_yearOfDeath"));
        add_yearOfDeath->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(add_yearOfDeath);

        add_scientist_button = new QPushButton(Add_scientist);
        add_scientist_button->setObjectName(QStringLiteral("add_scientist_button"));

        verticalLayout->addWidget(add_scientist_button);

        Cancel_button = new QPushButton(Add_scientist);
        Cancel_button->setObjectName(QStringLiteral("Cancel_button"));

        verticalLayout->addWidget(Cancel_button);


        retranslateUi(Add_scientist);

        QMetaObject::connectSlotsByName(Add_scientist);
    } // setupUi

    void retranslateUi(QDialog *Add_scientist)
    {
        Add_scientist->setWindowTitle(QApplication::translate("Add_scientist", "Add scientist", 0));
        label_Title->setText(QApplication::translate("Add_scientist", "<html><head/><body><p><span style=\" font-size:x-large; font-weight:600; color:#00ff00;\">Add scientist</span></p></body></html>", 0));
        label_error_add_sceintist->setText(QString());
        label_Name->setText(QApplication::translate("Add_scientist", "Name:", 0));
        label_error_scientist_name->setText(QString());
        label_Sex->setText(QApplication::translate("Add_scientist", "Sex:", 0));
        label_error_scientist_sex->setText(QString());
        female_button->setText(QApplication::translate("Add_scientist", "Female", 0));
        male_button->setText(QApplication::translate("Add_scientist", "Male", 0));
        label_YearOfBirth->setText(QApplication::translate("Add_scientist", "Year of birth:", 0));
        label_error_scientist_birth->setText(QString());
        label_YearOfDeath->setText(QApplication::translate("Add_scientist", "Year of death (optional)", 0));
        add_yearOfDeath->setText(QString());
        add_scientist_button->setText(QApplication::translate("Add_scientist", "Add Scientist", 0));
        Cancel_button->setText(QApplication::translate("Add_scientist", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class Add_scientist: public Ui_Add_scientist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_SCIENTIST_H
