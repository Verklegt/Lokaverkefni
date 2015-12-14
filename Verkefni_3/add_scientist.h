#ifndef ADD_SCIENTIST_H
#define ADD_SCIENTIST_H

#include <QDialog>

namespace Ui {
class Add_scientist;
}

class Add_scientist : public QDialog
{
    Q_OBJECT

public:
    explicit Add_scientist(QWidget *parent = 0);
    ~Add_scientist();

private slots:
    void on_Cancel_button_clicked();

    void on_add_scientist_button_clicked();

    void on_edit_scientist_button_clicked();

private:
    Ui::Add_scientist *ui;
};

#endif // ADD_SCIENTIST_H
