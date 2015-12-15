#include "programwindow.h"
#include "ui_programwindow.h"
#include "add_computer.h"
#include "add_scientist.h"
#include "add_link.h"
#include "edit_computer.h"
#include "edit_scientist.h"

#include <QTableWidget>
#include <QWidgetItem>
#include <QMessageBox>
#include <QMessageBox>

using namespace std;


ProgramWindow::ProgramWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProgramWindow)
{
    ui->setupUi(this);

    displayScientists();
    displayComputers();
}

ProgramWindow::~ProgramWindow()
{
    delete ui;
}


void ProgramWindow::displayScientists()
{
    vector<Scientist> scientist = scientistService.getAllScientists("name", true);
    displayScientists(scientist);
}

void ProgramWindow::displayScientists(std::vector<Scientist> scientist)
{
    ui->Scientist_table->setSortingEnabled(false);
    ui->Scientist_table->clearContents();
    ui->Scientist_table->setRowCount(scientist.size());

    for (unsigned int row = 0; row < scientist.size(); row++) {
        Scientist currentScientist = scientist.at(row);

        QString name = QString::fromStdString(currentScientist.getName());
        QString sex;
        if(currentScientist.getSex() == 0) {
            sex = "female";
        }
        else {
            sex = "male";
        }
        QString id = QString::number(currentScientist.getId());
        QString yearBorn = QString::number(currentScientist.getYearBorn());
        QString yearDied = QString::number(currentScientist.getYearDied());

        if(yearDied == "0") {
            yearDied = "Alive";
        }

        ui->Scientist_table->setItem(row, 0, new QTableWidgetItem(name));
        ui->Scientist_table->setItem(row, 1, new QTableWidgetItem(sex));
        ui->Scientist_table->setItem(row, 2, new QTableWidgetItem(id));
        ui->Scientist_table->setItem(row, 3, new QTableWidgetItem(yearBorn));
        ui->Scientist_table->setItem(row, 4, new QTableWidgetItem(yearDied));
    }
    ui->Scientist_table->setSortingEnabled(true);
}

void ProgramWindow::on_input_filter_scientist_textChanged()
{
    string userInput = ui->input_filter_scientist->text().toStdString();

    vector<Scientist> scientist = scientistService.searchForScientists(userInput);
    displayScientists(scientist);
}

void ProgramWindow::displayComputers()
{
    vector<Computer> computer = computerService.getAllComputers("name", true);
    displayComputers(computer);
}

void ProgramWindow::displayComputers(std::vector<Computer> computer)
{
    ui->Computer_table->setSortingEnabled(false);
    ui->Computer_table->clearContents();
    ui->Computer_table->setRowCount(computer.size());

    for (unsigned int row = 0; row < computer.size(); row++) {
        Computer currentComputer = computer.at(row);
        std::vector<Scientist> scientists = currentComputer.getScientists();

        QString name = QString::fromStdString(currentComputer.getName());
        QString id = QString::number(currentComputer.getId());
        QString yearBuilt = QString::number(currentComputer.getYearBuilt());
        QString type = QString::fromStdString(currentComputer.getTypeName());
        QString scientist;
        for(unsigned int j = 0; j < scientists.size(); j++)
        {
            if(j == 0)
            {
                scientist = QString::fromStdString(scientists.at(j).getName());
            }
            else
            {
                scientist = QString::fromStdString(scientists.at(j).getName());
            }
        }

        ui->Computer_table->setItem(row, 0, new QTableWidgetItem(name));
        ui->Computer_table->setItem(row, 1, new QTableWidgetItem(id));
        ui->Computer_table->setItem(row, 2, new QTableWidgetItem(type));
        ui->Computer_table->setItem(row, 3, new QTableWidgetItem(yearBuilt));
        ui->Computer_table->setItem(row, 4, new QTableWidgetItem(scientist));
    }
    ui->Computer_table->setSortingEnabled(true);
}

void ProgramWindow::on_input_filter_computer_textChanged()
{
    string userInput = ui->input_filter_computer->text().toStdString();

    vector<Computer> computer = computerService.searchForComputers(userInput);
    displayComputers(computer);
}

void ProgramWindow::on_add_computer_button_clicked()
{
    Add_computer addComputer;
    addComputer.setModal(true);
    addComputer.exec();
    displayComputers();
}

void ProgramWindow::on_add_scientist_button_clicked()
{
    Add_scientist addScientist;
    addScientist.setModal(true);
    addScientist.exec();
    displayScientists();
}

void ProgramWindow::on_button_remove_scientist_clicked()
{
    int currentRow = ui->Scientist_table->selectionModel()->currentIndex().row();

    int scientistId = ui->Scientist_table->model()->index(currentRow, 2).data().toInt();

    if(currentRow > -1) {

        QTableWidgetItem *nameItem =  ui->Scientist_table->item(currentRow, 0);
        int reply = QMessageBox::question(this,
                                          "Remove scientist",
                                          "Are you sure you want to remove " + nameItem->text() + "?",
                                          QMessageBox::Yes | QMessageBox::No);

        if(reply == QMessageBox::Yes) {
            scientistService.removeScientist(scientistId);

            displayScientists();
        }
    }
    else {

        QMessageBox::warning(this,
                             "Error",
                             "No scientist has been selected.",
                             QMessageBox::Ok);
    }
}

void ProgramWindow::on_button_remove_computer_clicked()
{
    int currentRow = ui->Computer_table->selectionModel()->currentIndex().row();

    int computerId = ui->Computer_table->model()->index(currentRow, 1).data().toInt();

    if(currentRow > -1) {

        QTableWidgetItem *nameItem =  ui->Computer_table->item(currentRow, 0);
        int reply = QMessageBox::question(this, "Remove computer", "Are you sure you want to remove " + nameItem->text() + "?", QMessageBox::Yes | QMessageBox::No);

        if(reply == QMessageBox::Yes) {
            computerService.removeComputer(computerId);
            displayComputers();
        }
    }
    else {

        QMessageBox::warning(this, "Error", "No scientist has been selected.", QMessageBox::Ok);
    }
}

void ProgramWindow::on_button_add_link_clicked()
{
    Add_link addLink;
    addLink.setModal(true);
    addLink.exec();
    displayComputers();
}

void ProgramWindow::on_edit_scientist_button_clicked()
{
    Edit_scientist editScientist;
    editScientist.setModal(true);
    editScientist.exec();
    displayScientists();
}

void ProgramWindow::on_edit_computer_button_clicked()
{
    Edit_computer editComputer;
    editComputer.setModal(true);
    editComputer.exec();
    displayComputers();
}
