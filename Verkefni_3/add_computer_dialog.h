#ifndef ADD_COMPUTER_DIALOG_H
#define ADD_COMPUTER_DIALOG_H

#include <QDialog>
#include "computerservice.h"

namespace Ui {
class add_computer_dialog;
}

class add_computer_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit add_computer_dialog(QWidget *parent = 0);
    ~add_computer_dialog();

private slots:
    void on_add_new_computer_button_clicked();

private:
    Ui::add_computer_dialog *ui;

    ComputerService ComputerService;
};

#endif // ADD_COMPUTER_DIALOG_H
