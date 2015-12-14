#include "add_computer.h"
#include "computerservice.h"
#include "computer.h"
#include "ui_add_computer.h"

Add_computer::Add_computer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_computer)
{
    ui->setupUi(this);
}

Add_computer::~Add_computer()
{
    delete ui;
}

void Add_computer::on_Cancel_button_clicked()
{
    close();
}

void Add_computer::on_add_computer_button_clicked()
{
    ui->label_error_computer_name->setText("");
    ui->label_error_computer_build->setText("");
    ui->label_error_computer_type->setText("");

    QString name = ui->add_name->text();
    QString type = ui->add_type->text();
    QString build = ui->add_build->text();

    bool thereWhasAnError = false;

    if(name.isEmpty()) {
        ui->label_error_computer_name->setText("<span style='color: #ED1c58'>Name cannot be empty");
        thereWhasAnError = true;
    }
    if(type.isEmpty()) {
        ui->label_error_computer_type->setText("<span style='color: #ED1c58'>Type cannot be empty");
        thereWhasAnError = true;
    }
    if(build.isEmpty()) {
        ui->label_error_computer_build->setText("<span style='color: #ED1c58'>Year of build cannot be empty");
        thereWhasAnError = true;
    }
    if(thereWhasAnError == true) {
        return;
    }

    Computer computer(name.toStdString(), computerType(type.toInt()), build.toInt());

    ComputerService computerService;
    bool success = computerService.addComputer(computer);

    if(success) {
        ui->add_name->setText("");
        ui->add_type->setText("");
        ui->add_build->setText("");
    }
    else {
        ui->label_error_add_computer->setText("<span style='color: #ED1c58'>ERROR ADDING A SCIENTIST");
    }
}
