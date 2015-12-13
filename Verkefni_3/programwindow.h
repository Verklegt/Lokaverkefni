#ifndef PROGRAMWINDOW_H
#define PROGRAMWINDOW_H
#include "scientist.h"
#include "scientistservice.h"
#include "computerservice.h"

#include <QDialog>
#include <vector>

namespace Ui {
class ProgramWindow;
}

class ProgramWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ProgramWindow(QWidget *parent = 0);
    ~ProgramWindow();

private slots:
    void on_input_filter_scientist_textChanged();

    void on_input_filter_computer_textChanged();

private:
    void displayScientists();
    void displayScientists(std::vector<Scientist> scientist);
    void displayComputers();
    void displayComputers(std::vector<Computer> computer);

    ScientistService scientistService;
    ComputerService computerService;

    Ui::ProgramWindow *ui;
};

#endif // PROGRAMWINDOW_H
