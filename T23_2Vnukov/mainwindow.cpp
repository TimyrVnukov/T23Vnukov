#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_clicked()
{
    int month = ui->dateEdit->date().month();
    if(month == 1) {
        ui->label_2->setStyleSheet("background-image: url(:/imgg/img-home2/1.JPG);");
    }
    if(month == 2) {
        ui->label_2->setStyleSheet("background-image: url(:/imgg/img-home2/2.JPG);");
    }
    if(month == 3) {
        ui->label_2->setStyleSheet("background-image: url(:/imgg/img-home2/3.JPG);");
    }
    if(month == 4) {
        ui->label_2->setStyleSheet("background-image: url(:/imgg/img-home2/4.JPG);");
    }
    if(month == 5) {
        ui->label_2->setStyleSheet("background-image: url(:/imgg/img-home2/5.JPG);");
    }
    if(month == 6) {
        ui->label_2->setStyleSheet("background-image: url(:/imgg/img-home2/6.JPG);");
    }
    if(month == 7) {
        ui->label_2->setStyleSheet("background-image: url(:/imgg/img-home2/7.JPG);");
    }
    if(month == 8) {
        ui->label_2->setStyleSheet("background-image: url(:/imgg/img-home2/8.JPG);");
    }
    if(month == 9) {
        ui->label_2->setStyleSheet("background-image: url(:/imgg/img-home2/9.JPG);");
    }
    if(month == 10) {
        ui->label_2->setStyleSheet("background-image: url(:/imgg/img-home2/10.JPG);");
    }
    if(month == 11) {
        ui->label_2->setStyleSheet("background-image: url(:/imgg/img-home2/11.JPG);");
    }
    if(month == 12) {
        ui->label_2->setStyleSheet("background-image: url(:/imgg/img-home2/12.JPG);");
    }
}

