#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->checkBox->isChecked())
    {
        QMessageBox::information(this, "Nice!", "Very good apples!");
    }
    else {
        QMessageBox::information(this, "Bad!", "Eat fruits!");
    }
}

void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if(arg1)
        QMessageBox::information(this, "Nice!", "Very good apples!");
    else {
        QMessageBox::information(this, "Bad!", "Start eating fruits!");
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->checkBox->setChecked(true);
    ui->checkBox_2->setChecked(true);
    ui->checkBox_3->setChecked(true);
}
