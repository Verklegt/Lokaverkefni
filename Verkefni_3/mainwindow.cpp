#include "mainwindow.h"
#include "programwindow.h"
#include "ui_mainwindow.h"
#include "scientistservice.h"

#include <QTableWidget>
#include <QDesktopServices>
#include <QUrl>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
