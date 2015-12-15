#ifndef EDIT_SCIENTIST_H
#define EDIT_SCIENTIST_H

#include <QDialog>

namespace Ui {
class Edit_scientist;
}

class Edit_scientist : public QDialog
{
    Q_OBJECT

public:
    explicit Edit_scientist(QWidget *parent = 0);
    ~Edit_scientist();

private slots:
    void on_button_edit_scientist_clicked();

    void on_button_cancel_clicked();

private:

    Ui::Edit_scientist *ui;
};

#endif // EDIT_SCIENTIST_H
