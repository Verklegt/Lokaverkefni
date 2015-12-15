/********************************************************************************
** Form generated from reading UI file 'programwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRAMWINDOW_H
#define UI_PROGRAMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ProgramWindow
{
public:
    QLineEdit *input_filter_computer;
    QTableWidget *Scientist_table;
    QTableWidget *Computer_table;
    QPushButton *add_computer_button;
    QLineEdit *input_filter_scientist;
    QLabel *Scientist_text_2;
    QPushButton *add_scientist_button;
    QLabel *Scientist_text;
    QPushButton *button_remove_scientist;
    QPushButton *button_remove_computer;
    QPushButton *button_add_link;
    QPushButton *edit_scientist_button;
    QPushButton *edit_computer_button;

    void setupUi(QDialog *ProgramWindow)
    {
        if (ProgramWindow->objectName().isEmpty())
            ProgramWindow->setObjectName(QStringLiteral("ProgramWindow"));
        ProgramWindow->resize(1234, 563);
        ProgramWindow->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 127);\n"
"alternate-background-color: rgb(0, 0, 0);"));
        input_filter_computer = new QLineEdit(ProgramWindow);
        input_filter_computer->setObjectName(QStringLiteral("input_filter_computer"));
        input_filter_computer->setGeometry(QRect(650, 70, 561, 21));
        input_filter_computer->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        Scientist_table = new QTableWidget(ProgramWindow);
        if (Scientist_table->columnCount() < 5)
            Scientist_table->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        Scientist_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        Scientist_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        Scientist_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        Scientist_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        Scientist_table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        Scientist_table->setObjectName(QStringLiteral("Scientist_table"));
        Scientist_table->setGeometry(QRect(19, 109, 501, 411));
        Scientist_table->setLayoutDirection(Qt::LeftToRight);
        Scientist_table->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        Scientist_table->setFrameShape(QFrame::Box);
        Scientist_table->setFrameShadow(QFrame::Plain);
        Scientist_table->setLineWidth(2);
        Scientist_table->setSelectionMode(QAbstractItemView::SingleSelection);
        Scientist_table->setSelectionBehavior(QAbstractItemView::SelectRows);
        Scientist_table->setSortingEnabled(true);
        Scientist_table->setWordWrap(true);
        Scientist_table->horizontalHeader()->setCascadingSectionResizes(true);
        Scientist_table->horizontalHeader()->setStretchLastSection(true);
        Scientist_table->verticalHeader()->setCascadingSectionResizes(true);
        Scientist_table->verticalHeader()->setProperty("showSortIndicator", QVariant(true));
        Scientist_table->verticalHeader()->setStretchLastSection(false);
        Computer_table = new QTableWidget(ProgramWindow);
        if (Computer_table->columnCount() < 5)
            Computer_table->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        Computer_table->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        Computer_table->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        Computer_table->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        Computer_table->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        Computer_table->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        Computer_table->setObjectName(QStringLiteral("Computer_table"));
        Computer_table->setGeometry(QRect(650, 110, 561, 411));
        Computer_table->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        Computer_table->setFrameShape(QFrame::Box);
        Computer_table->setFrameShadow(QFrame::Plain);
        Computer_table->setLineWidth(2);
        Computer_table->setSelectionMode(QAbstractItemView::SingleSelection);
        Computer_table->setSelectionBehavior(QAbstractItemView::SelectRows);
        Computer_table->setSortingEnabled(true);
        Computer_table->horizontalHeader()->setCascadingSectionResizes(true);
        Computer_table->horizontalHeader()->setHighlightSections(true);
        Computer_table->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        Computer_table->horizontalHeader()->setStretchLastSection(true);
        Computer_table->verticalHeader()->setVisible(false);
        Computer_table->verticalHeader()->setCascadingSectionResizes(true);
        Computer_table->verticalHeader()->setDefaultSectionSize(30);
        Computer_table->verticalHeader()->setHighlightSections(true);
        Computer_table->verticalHeader()->setMinimumSectionSize(19);
        Computer_table->verticalHeader()->setProperty("showSortIndicator", QVariant(true));
        Computer_table->verticalHeader()->setStretchLastSection(false);
        add_computer_button = new QPushButton(ProgramWindow);
        add_computer_button->setObjectName(QStringLiteral("add_computer_button"));
        add_computer_button->setGeometry(QRect(530, 170, 111, 41));
        add_computer_button->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 127);"));
        input_filter_scientist = new QLineEdit(ProgramWindow);
        input_filter_scientist->setObjectName(QStringLiteral("input_filter_scientist"));
        input_filter_scientist->setGeometry(QRect(19, 69, 501, 22));
        input_filter_scientist->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        Scientist_text_2 = new QLabel(ProgramWindow);
        Scientist_text_2->setObjectName(QStringLiteral("Scientist_text_2"));
        Scientist_text_2->setGeometry(QRect(650, 0, 231, 61));
        QFont font;
        font.setPointSize(14);
        Scientist_text_2->setFont(font);
        add_scientist_button = new QPushButton(ProgramWindow);
        add_scientist_button->setObjectName(QStringLiteral("add_scientist_button"));
        add_scientist_button->setGeometry(QRect(530, 120, 111, 41));
        add_scientist_button->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 127);"));
        add_scientist_button->setIconSize(QSize(16, 16));
        add_scientist_button->setAutoExclusive(false);
        Scientist_text = new QLabel(ProgramWindow);
        Scientist_text->setObjectName(QStringLiteral("Scientist_text"));
        Scientist_text->setGeometry(QRect(19, -1, 221, 61));
        Scientist_text->setFont(font);
        button_remove_scientist = new QPushButton(ProgramWindow);
        button_remove_scientist->setObjectName(QStringLiteral("button_remove_scientist"));
        button_remove_scientist->setGeometry(QRect(530, 420, 111, 41));
        button_remove_scientist->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 127);"));
        button_remove_computer = new QPushButton(ProgramWindow);
        button_remove_computer->setObjectName(QStringLiteral("button_remove_computer"));
        button_remove_computer->setGeometry(QRect(530, 470, 111, 41));
        button_remove_computer->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 127);"));
        button_add_link = new QPushButton(ProgramWindow);
        button_add_link->setObjectName(QStringLiteral("button_add_link"));
        button_add_link->setGeometry(QRect(530, 340, 111, 41));
        button_add_link->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 127);"));
        edit_scientist_button = new QPushButton(ProgramWindow);
        edit_scientist_button->setObjectName(QStringLiteral("edit_scientist_button"));
        edit_scientist_button->setGeometry(QRect(530, 220, 111, 41));
        edit_scientist_button->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 127);"));
        edit_computer_button = new QPushButton(ProgramWindow);
        edit_computer_button->setObjectName(QStringLiteral("edit_computer_button"));
        edit_computer_button->setGeometry(QRect(530, 270, 111, 41));
        edit_computer_button->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 127);"));

        retranslateUi(ProgramWindow);

        QMetaObject::connectSlotsByName(ProgramWindow);
    } // setupUi

    void retranslateUi(QDialog *ProgramWindow)
    {
        ProgramWindow->setWindowTitle(QApplication::translate("ProgramWindow", "Program Window", 0));
        input_filter_computer->setText(QString());
        input_filter_computer->setPlaceholderText(QApplication::translate("ProgramWindow", "Search computer", 0));
        QTableWidgetItem *___qtablewidgetitem = Scientist_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ProgramWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = Scientist_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ProgramWindow", "Sex", 0));
        QTableWidgetItem *___qtablewidgetitem2 = Scientist_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ProgramWindow", "ID", 0));
        QTableWidgetItem *___qtablewidgetitem3 = Scientist_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ProgramWindow", "Year Born", 0));
        QTableWidgetItem *___qtablewidgetitem4 = Scientist_table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("ProgramWindow", "Year Died", 0));
        QTableWidgetItem *___qtablewidgetitem5 = Computer_table->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("ProgramWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem6 = Computer_table->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("ProgramWindow", "ID", 0));
        QTableWidgetItem *___qtablewidgetitem7 = Computer_table->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("ProgramWindow", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem8 = Computer_table->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("ProgramWindow", "Year Built", 0));
        QTableWidgetItem *___qtablewidgetitem9 = Computer_table->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("ProgramWindow", "Scientist", 0));
        add_computer_button->setText(QApplication::translate("ProgramWindow", "Add Computer", 0));
        add_computer_button->setShortcut(QApplication::translate("ProgramWindow", "Ctrl+Shift+A", 0));
        input_filter_scientist->setInputMask(QString());
        input_filter_scientist->setText(QString());
        input_filter_scientist->setPlaceholderText(QApplication::translate("ProgramWindow", "Search scientist", 0));
        Scientist_text_2->setText(QApplication::translate("ProgramWindow", "<html><head/><body><p><span style=\" font-size:x-large; font-weight:600; color:#ffffff;\">Computers</span></p></body></html>", 0));
        add_scientist_button->setText(QApplication::translate("ProgramWindow", "Add Scientist", 0));
        add_scientist_button->setShortcut(QApplication::translate("ProgramWindow", "Ctrl+A", 0));
        Scientist_text->setText(QApplication::translate("ProgramWindow", "<html><head/><body><p><span style=\" font-size:x-large; font-weight:600; color:#ffffff;\">Scientists</span></p></body></html>", 0));
        button_remove_scientist->setText(QApplication::translate("ProgramWindow", "Remove Scientist", 0));
        button_remove_scientist->setShortcut(QApplication::translate("ProgramWindow", "Ctrl+D", 0));
        button_remove_computer->setText(QApplication::translate("ProgramWindow", "Remove Computer", 0));
        button_remove_computer->setShortcut(QApplication::translate("ProgramWindow", "Ctrl+Shift+D", 0));
        button_add_link->setText(QApplication::translate("ProgramWindow", "Add link", 0));
        edit_scientist_button->setText(QApplication::translate("ProgramWindow", "Edit Scientist", 0));
        edit_computer_button->setText(QApplication::translate("ProgramWindow", "Edit Computer", 0));
    } // retranslateUi

};

namespace Ui {
    class ProgramWindow: public Ui_ProgramWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRAMWINDOW_H
