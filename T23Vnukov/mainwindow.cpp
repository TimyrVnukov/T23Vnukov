#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->radioButton->setChecked(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void setType() {

}
void MainWindow::on_radioButton_2_clicked()
{
    float inp = ui->lineEdit_2->text().toInt();
    float result = inp * 8;
    ui->lineEdit->setText(QString::number(result));
}


void MainWindow::on_radioButton_3_clicked()
{
    float inp = ui->lineEdit_2->text().toInt();
    float result = inp / 1024;
    ui->lineEdit->setText(QString::number(result));
}


void MainWindow::on_radioButton_4_clicked()
{
    float inp = ui->lineEdit_2->text().toInt();
    float result = inp / 1024 / 1024;
    ui->lineEdit->setText(QString::number(result));
}


void MainWindow::on_radioButton_clicked()
{
    float inp = ui->lineEdit_2->text().toInt();
    float result = inp / 1024 / 1024 / 1024;
    ui->lineEdit->setText(QString::number(result));
}

