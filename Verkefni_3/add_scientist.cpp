#include "add_scientist.h"
#include "scientistservice.h"
#include "scientist.h"
#include "ui_add_scientist.h"

using namespace std;

Add_scientist::Add_scientist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_scientist)
{
    ui->setupUi(this);
}

Add_scientist::~Add_scientist()
{
    delete ui;
}

void Add_scientist::on_Cancel_button_clicked()
{
    close();
}

void Add_scientist::on_add_scientist_button_clicked()
{
    ui->label_error_scientist_name->setText("");
    ui->label_error_scientist_birth->setText("");

    bool thereWhasAnError = false;

    QString name = ui->add_name->text();
    QString sex;
        if(ui->button_female->isChecked()) {
            sex = "female";
        }
        if(ui->button_male->isChecked()) {
            sex = "male";
        }
        else {
            ui->label_error_scientist_sex->setText("<span style='color: #ED1c58'>Choose sex");
            thereWhasAnError = true;
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

    ScientistService scientistService;
    bool success = scientistService.addScientist(scientist);

    if(success) {
        ui->add_name->setText("");
        ui->add_yearOfBirth->setText("");
        ui->add_yearOfDeath->setText(""); 
    }
    else {
        ui->label_error_add_sceintist->setText("<span style='color: #ED1c58'>ERROR, Something went wrong");
    }
}

void Add_scientist::on_edit_scientist_button_clicked()
{
    ui->label_error_scientist_name->setText("");
    ui->label_error_scientist_birth->setText("");

    bool thereWhasAnError = false;

    QString name = ui->add_name->text();
    QString sex;
        if(ui->button_male->isChecked()) {
            sex = "male";
        }
        if(ui->button_female->isChecked()) {
            sex = "female";
        }
        else {
            ui->label_error_scientist_sex->setText("<span style='color: #ED1c58'>Choose sex");
            thereWhasAnError = true;
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

    ScientistService scientistService;
    bool success = scientistService.editScientist(scientist);

    if(success) {
        ui->add_name->setText("");
        ui->add_yearOfBirth->setText("");
        ui->add_yearOfDeath->setText("");
    }
    else {
        ui->label_error_add_sceintist->setText("<span style='color: #ED1c58'>ERROR, Something went wrong");
    }
}
