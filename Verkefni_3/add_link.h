#ifndef ADD_LINK_H
#define ADD_LINK_H

#include <QDialog>

namespace Ui {
class Add_link;
}

class Add_link : public QDialog
{
    Q_OBJECT

public:
    explicit Add_link(QWidget *parent = 0);
    ~Add_link();

private slots:
    void on_Cancel_button_clicked();

    void on_OK_button_clicked();

private:
    Ui::Add_link *ui;
};

#endif // ADD_LINK_H
