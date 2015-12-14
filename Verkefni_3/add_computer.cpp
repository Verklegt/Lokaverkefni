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

    bool thereWhasAnError = false;

    QString name = ui->add_name->text();
    QString type;
        if(ui->button_electro->isChecked()) {
            type = "0";
        }
        if(ui->button_mecha->isChecked()) {
            type = "1";
        }
        if(ui->button_trans->isChecked()) {
            type = "2";
        }
        if(ui->button_other->isChecked()) {
            type = "3";
        }
        else {
            ui->label_error_computer_type->setText("<span style='color: #ED1c58'>Please choose a type");
            thereWhasAnError = true;
        }
    QString build = ui->add_build->text();

    if(name.isEmpty()) {
        ui->label_error_computer_name->setText("<span style='color: #ED1c58'>Name cannot be empty");
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
        ui->add_build->setText("");
    }
    else {
        ui->label_error_add_computer->setText("<span style='color: #ED1c58'>ERROR ADDING A SCIENTIST");
    }
}
