#include "edit_scientist.h"
#include "ui_edit_scientist.h"
#include "scientistservice.h"
#include "scientist.h"

Edit_scientist::Edit_scientist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Edit_scientist)
{
    ui->setupUi(this);
}

Edit_scientist::~Edit_scientist()
{
    delete ui;
}

void Edit_scientist::on_button_edit_scientist_clicked()
{
    ui->label_error_scientist_name->setText("");
    ui->label_error_scientist_birth->setText("");

    bool thereWhasAnError = false;

    QString id = ui->line_ID->text();
    QString name = ui->add_name->text();
    QString sex;
        if(ui->button_female->isChecked()) {
            sex = "0";
        }
        if(ui->button_male->isChecked()) {
            sex = "1";
        }

    QString yearBorn = ui->add_yearOfBirth->text();
    QString yearDeath = ui->add_yearOfDeath->text();

    if(name.isEmpty()) {
        ui->label_error_scientist_name->setText("<span style='color: #ED1c58'>Name cannot be empty");
        thereWhasAnError = true;
    }
    if(yearBorn.isEmpty()) {
        ui->label_error_scientist_birth->setText("<span style='color: #ED1c58'>Year of birth cannot be empty");
        thereWhasAnError = true;
    }
    if(thereWhasAnError == true) {
        return;
    }

    Scientist scientist(name.toStdString(), sexType(sex.toInt()), yearBorn.toInt(),yearDeath.toInt());

    int ID = id.toInt();
    ScientistService scientistService;
    bool success = scientistService.editScientist(scientist, ID);

    if(success) {
        ui->add_name->setText("");
        ui->add_yearOfBirth->setText("");
        ui->add_yearOfDeath->setText("");
    }
    else {
        ui->label_error_add_sceintist->setText("<span style='color: #ED1c58'>ERROR, Something went wrong");
    }
}

void Edit_scientist::on_button_cancel_clicked()
{
    close();
}
