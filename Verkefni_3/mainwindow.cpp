#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "scientistservice.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    displayScientists();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displayScientists()
{
    vector<Scientist> scientist = scientistService.getAllScientists("name",true);
    displayScientists(scientist);
}

void MainWindow::displayScientists(std::vector<Scientist> scientist)
{
    ui->Display_scientists->clear();

    for (unsigned int i = 0; i < scientist.size(); i++) {
        Scientist currentScientist = scientist.at(i);

        ui->Display_scientists->addItem(QString::fromStdString(currentScientist.getName()));
    }
}
void MainWindow::on_input_filter_scientist_textChanged(const QString &arg1)
{
    string userInput = ui->input_filter_scientist->text().toStdString();

    vector<Scientist> scientist = scientistService.searchForScientists(userInput);
    displayScientists(scientist);
}
