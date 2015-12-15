#ifndef EDIT_COMPUTER_H
#define EDIT_COMPUTER_H

#include <QDialog>

namespace Ui {
class Edit_computer;
}

class Edit_computer : public QDialog
{
    Q_OBJECT

public:
    explicit Edit_computer(QWidget *parent = 0);
    ~Edit_computer();

private slots:
    void on_button_edit_computer_clicked();

    void on_button_cancel_clicked();

private:

    Ui::Edit_computer *ui;
};

#endif // EDIT_COMPUTER_H
