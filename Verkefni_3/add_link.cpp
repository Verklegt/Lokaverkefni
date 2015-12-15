#include "add_link.h"
#include "ui_add_link.h"
#include "linkservice.h"

Add_link::Add_link(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_link)
{
    ui->setupUi(this);
}

Add_link::~Add_link()
{
    delete ui;
}


void Add_link::on_Cancel_button_clicked()
{
    close();
}

void Add_link::on_OK_button_clicked()
{
    ui->label_error_scientistID->setText("");
    ui->label_error_computerID->setText("");

    bool thereWhasAnError = false;

    QString SciID = ui->Scientist_label->text();
    QString CompID = ui->Computer_label->text();

    if(SciID.isEmpty()) {
        ui->label_error_scientistID->setText("<span style='color: #ED1c58'>Invalid ID");
        thereWhasAnError = true;
    }
    if(CompID.isEmpty()) {
        ui->label_error_computerID->setText("<span style='color: #ED1c58'>Invalid ID");
        thereWhasAnError = true;
    }
    if(thereWhasAnError == true) {
        return;
    }


    LinkService linkServ;
    bool success = linkServ.addLink(SciID.toStdString(), CompID.toStdString());

    if(success) {
        ui->Scientist_label->setText("");
        ui->Computer_label->setText("");
    }
    else {
        ui->label_error_add_link->setText("<span style='color: #ED1c58'>ERROR, Something went wrong");
    }
}
