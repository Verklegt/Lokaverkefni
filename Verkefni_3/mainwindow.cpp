#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "scientistservice.h"
#include <QTableWidget>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    displayScientists();
    displayComputers();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displayScientists()
{
    vector<Scientist> scientist = scientistService.getAllScientists("name", true);
    displayScientists(scientist);
}

void MainWindow::displayScientists(std::vector<Scientist> scientist)
{
    ui->Scientist_table->clearContents();
    ui->Scientist_table->setRowCount(scientist.size());

    for (unsigned int row = 0; row < scientist.size(); row++) {
        Scientist currentScientist = scientist.at(row);

        QString name = QString::fromStdString(currentScientist.getName());
        //QString sex = QString::fromStdString(currentScientist.getSex());
        QString id = QString::number(currentScientist.getId());
        QString yearBorn = QString::number(currentScientist.getYearBorn());
        QString yearDied = QString::number(currentScientist.getYearDied());

        ui->Scientist_table->setItem(row, 0, new QTableWidgetItem(name));
        //ui->Scientist_table->setItem(row, 1, new QTableWidgetItem(sex));
        ui->Scientist_table->setItem(row, 2, new QTableWidgetItem(id));
        ui->Scientist_table->setItem(row, 3, new QTableWidgetItem(yearBorn));
        ui->Scientist_table->setItem(row, 4, new QTableWidgetItem(yearDied));
    }
}

void MainWindow::on_input_filter_scientist_textChanged()
{
    string userInput = ui->input_filter_scientist->text().toStdString();

    vector<Scientist> scientist = scientistService.searchForScientists(userInput);
    displayScientists(scientist);
}

void MainWindow::displayComputers()
{
    vector<Computer> computer = computerService.getAllComputers("name", true);
    displayComputers(computer);
}

void MainWindow::displayComputers(std::vector<Computer> computer)
{
    ui->Computer_table->clearContents();
    ui->Computer_table->setRowCount(computer.size());

    for (unsigned int row = 0; row < computer.size(); row++) {
        Computer currentComputer = computer.at(row);

        QString name = QString::fromStdString(currentComputer.getName());
        QString id = QString::number(currentComputer.getId());
        QString yearBuilt = QString::number(currentComputer.getYearBuilt());
        //QString type = QString::fromStdString(currentComputer.getType());

        ui->Computer_table->setItem(row, 0, new QTableWidgetItem(name));
        ui->Computer_table->setItem(row, 1, new QTableWidgetItem(id));
        //ui->Computer_table->setItem(row, 2, new QTableWidgetItem(type));
        ui->Computer_table->setItem(row, 3, new QTableWidgetItem(yearBuilt));
    }
}

void MainWindow::on_input_filter_computer_textChanged()
{
    string userInput = ui->input_filter_computer->text().toStdString();

    vector<Computer> computer = computerService.searchForComputers(userInput);
    displayComputers(computer);
}
