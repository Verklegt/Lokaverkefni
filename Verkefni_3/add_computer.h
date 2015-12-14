#ifndef ADD_COMPUTER_H
#define ADD_COMPUTER_H

#include <QDialog>

namespace Ui {
class Add_computer;
}

class Add_computer : public QDialog
{
    Q_OBJECT

public:
    explicit Add_computer(QWidget *parent = 0);
    ~Add_computer();

private slots:
    void on_Cancel_button_clicked();

    void on_add_computer_button_clicked();

private:
    Ui::Add_computer *ui;
};

#endif // ADD_COMPUTER_H
