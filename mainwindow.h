#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "calculator.h"

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
    void on_One_clicked();

    void on_Result_clicked();

    void on_Backspace_clicked();

    void on_Clear_clicked();

    void on_Div_clicked();

    void on_Dot_clicked();

    void on_Zero_clicked();

    void on_Hastag_clicked();

    void on_Mult_clicked();

    void on_Nine_clicked();

    void on_Eight_clicked();

    void on_Seven_clicked();

    void on_Subt_clicked();

    void on_Six_clicked();

    void on_Five_clicked();

    void on_Four_clicked();

    void on_Three_clicked();

    void on_Sum_clicked();

    void on_Two_clicked();

private:
    Ui::MainWindow *ui;
    QString line;
    Calculator calculator;
};

#endif // MAINWINDOW_H
