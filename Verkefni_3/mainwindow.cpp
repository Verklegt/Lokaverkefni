#include "mainwindow.h"
#include "programwindow.h"
#include "ui_mainwindow.h"
#include "scientistservice.h"

#include <QTableWidget>
#include <QDesktopServices>
#include <QtWebKitWidgets/QWebView>
#include <QUrl>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->webView->load(QUrl("https://media.giphy.com/media/FFPCjEwUzPU6k/giphy.gif"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Open_Pogram_clicked()
{
    ProgramWindow window;
    window.setModal(true);
    window.exec();
}

void MainWindow::on_Feeling_Lucky_clicked()
{
    QString link = "http://www.facebook.com/profile.php?id012345678";
    QDesktopServices::openUrl(QUrl(link));
}

void MainWindow::on_Close_Button_clicked()
{
    close();
}
