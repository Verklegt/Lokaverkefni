#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "scientist.h"
#include "scientistservice.h"

#include <QMainWindow>
#include <vector>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_input_filter_scientist_textChanged(const QString &arg1);

private:
    void displayScientists();
    void displayScientists(std::vector<Scientist> scientist);
    ScientistService scientistService;

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
