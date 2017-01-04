#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setFixedSize(geometry().size());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Result_clicked()
{
    line = ui->Show->text();
    line = calculator.getResult(line);
    ui->Show->setText(line);
}

void MainWindow::on_One_clicked()
{
    line.append("1");
    ui->Show->setText(line);
}

void MainWindow::on_Backspace_clicked()
{
    line.chop(1);
    ui->Show->setText(line);
}

void MainWindow::on_Clear_clicked()
{
    line.clear();
    ui->Show->setText(line);
}

void MainWindow::on_Div_clicked()
{
    line.append(" / ");
    ui->Show->setText(line);
}

void MainWindow::on_Dot_clicked()
{
    line.append(".");
    ui->Show->setText(line);
}

void MainWindow::on_Zero_clicked()
{
    line.append("0");
    ui->Show->setText(line);
}

void MainWindow::on_Hastag_clicked()
{

}

void MainWindow::on_Mult_clicked()
{
    line.append(" * ");
    ui->Show->setText(line);
}

void MainWindow::on_Nine_clicked()
{
    line.append("9");
    ui->Show->setText(line);
}

void MainWindow::on_Eight_clicked()
{
    line.append("8");
    ui->Show->setText(line);
}

void MainWindow::on_Seven_clicked()
{
    line.append("7");
    ui->Show->setText(line);
}

void MainWindow::on_Subt_clicked()
{
    line.append(" - ");
    ui->Show->setText(line);
}

void MainWindow::on_Six_clicked()
{
    line.append("6");
    ui->Show->setText(line);
}

void MainWindow::on_Five_clicked()
{
    line.append("5");
    ui->Show->setText(line);
}

void MainWindow::on_Four_clicked()
{
    line.append("4");
    ui->Show->setText(line);
}

void MainWindow::on_Three_clicked()
{
    line.append("3");
    ui->Show->setText(line);
}

void MainWindow::on_Sum_clicked()
{
    line.append(" + ");
    ui->Show->setText(line);
}

void MainWindow::on_Two_clicked()
{
    line.append("2");
    ui->Show->setText(line);
}
