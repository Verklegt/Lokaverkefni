#include "add_computer_dialog.h"
#include "ui_add_computer_dialog.h"
#include "computerservice.h"

#include "programwindow.h"
#include <QMessageBox>


add_computer_dialog::add_computer_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_computer_dialog)
{
    ui->setupUi(this);
}

add_computer_dialog::~add_computer_dialog()
{
    delete ui;
}

void add_computer_dialog::on_add_new_computer_button_clicked()
{
    QString name = ui->input_computer_name->text();
    QString type = ui->input_computer_type->text();
    QString yearBuilt = ui->input_computer_year_built->text();

    bool thereWasAnError = false;

    if(name.isEmpty())
    {
        ui->label_error_student_name->setText("<span style='color: #ED1C58'>Name cannot be empty</span>");

        thereWasAnError = true;
    }

    if(type.isEmpty())
    {
        //ui->label_error_student_year_born->setText("<span style='color: #ED1C58'>He has to be born</span>");

        QMessageBox::warning(this, "Super serious error", "Student needs year born");

        thereWasAnError = true;
    }

    if(yearBuilt.isEmpty())
    {
        //show error
        return;
    }

    if (thereWasAnError)
    {
        return;
    }

   bool success = ComputerService.addComputer(Computer(name.toStdString(), type.toStdString(), yearBuilt.toInt()));


   if (success)
   {
       //ui->Computer_table->setText("");
       //displayComputers();

       ui->input_computer_name->setText("");
       ui->input_computer_type->setText("");
       ui->input_computer_year_built->setText("");

       this->done(0);

   }
   else
   {
        this-done(-1);
   }

}
