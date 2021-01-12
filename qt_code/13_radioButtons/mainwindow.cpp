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

// when a group of radio buttons are selected and added toa layout, they automatically get grouped!

void MainWindow::on_pushButton_clicked()
{
    if(ui->radioButton->isChecked())
        QMessageBox::information(this, "Title", "you are fan of Avi!");
    else {
        QMessageBox::information(this, "Title", "Aru is cute!");
    }
}

void MainWindow::on_radioButton_clicked()
{

}

void MainWindow::on_pushButton_2_clicked()
{

}
