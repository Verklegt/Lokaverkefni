/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *Open_Pogram;
    QPushButton *Close_Button;
    QPushButton *Feeling_Lucky;
    QWebView *webView;
    QToolBar *mainToolBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(273, 385);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:0.77, y2:0.863455, stop:0 rgba(0, 0, 127, 255), stop:0.151685 rgba(0, 0, 127, 255), stop:0.17 rgba(0, 0, 127, 255), stop:0.18 rgba(255, 255, 255, 255), stop:0.210212 rgba(255, 255, 255, 255), stop:0.229614 rgba(255, 0, 0, 255), stop:0.248497 rgba(255, 0, 0, 255), stop:0.256358 rgba(255, 0, 0, 255), stop:0.276553 rgba(255, 255, 255, 255), stop:0.380762 rgba(0, 0, 127, 255));"));
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Open_Pogram = new QPushButton(centralWidget);
        Open_Pogram->setObjectName(QStringLiteral("Open_Pogram"));
        Open_Pogram->setGeometry(QRect(20, 260, 231, 21));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setUnderline(false);
        font.setWeight(75);
        Open_Pogram->setFont(font);
        Open_Pogram->setAutoFillBackground(false);
        Open_Pogram->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 0, 0);"));
        Close_Button = new QPushButton(centralWidget);
        Close_Button->setObjectName(QStringLiteral("Close_Button"));
        Close_Button->setGeometry(QRect(20, 320, 231, 21));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        Close_Button->setFont(font1);
        Close_Button->setAutoFillBackground(false);
        Close_Button->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 0, 0);"));
        Feeling_Lucky = new QPushButton(centralWidget);
        Feeling_Lucky->setObjectName(QStringLiteral("Feeling_Lucky"));
        Feeling_Lucky->setGeometry(QRect(20, 290, 231, 21));
        Feeling_Lucky->setFont(font1);
        Feeling_Lucky->setAutoFillBackground(false);
        Feeling_Lucky->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 0, 0);"));
        webView = new QWebView(centralWidget);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setGeometry(QRect(20, 10, 231, 231));
        webView->setUrl(QUrl(QStringLiteral("about:blank")));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setStyleSheet(QStringLiteral(""));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "H\303\263pur 27", 0));
        Open_Pogram->setText(QApplication::translate("MainWindow", "Open Program", 0));
        Close_Button->setText(QApplication::translate("MainWindow", "Exit", 0));
        Feeling_Lucky->setText(QApplication::translate("MainWindow", "Bored?", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
