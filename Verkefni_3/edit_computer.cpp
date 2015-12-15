#include "edit_computer.h"
#include "ui_edit_computer.h"
#include "computer.h"
#include "computerservice.h"

Edit_computer::Edit_computer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Edit_computer)
{
    ui->setupUi(this);
}

Edit_computer::~Edit_computer()
{
    delete ui;
}

void Edit_computer::on_button_edit_computer_clicked()
{
    ui->label_error_computer_name->setText("");
    ui->label_error_computer_build->setText("");

    bool thereWhasAnError = false;

    QString name = ui->add_name->text();
    QString type;
        if(ui->electro_button->isChecked()) {
            type = "0";
        }
        if(ui->mecha_button->isChecked()) {
            type = "1";
        }
        if(ui->trans_button->isChecked()) {
            type = "2";
        }
        if(ui->other_button->isChecked()) {
            type = "3";
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
    bool success = computerService.editComputer(computer);

    if(success) {
        ui->add_name->setText("");
        ui->add_build->setText("");
    }
    else {
        ui->label_error_add_computer->setText("<span style='color: #ED1c58'>ERROR ADDING A SCIENTIST");
    }
}

void Edit_computer::on_button_cancel_clicked()
{
    close();
}
