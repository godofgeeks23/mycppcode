#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    ui->label_4->setText("Enter some data please!");
}

void MainWindow::on_pushButton_3_clicked()
{
    exit(0);
}

void MainWindow::on_pushButton_2_clicked()
{
    QString str1 = ui->lineEdit->text();

    int age = ui->lineEdit_2->text().toInt();
    if(age>=18)
    {
        str1 = "Hello " + str1 + ", you are eligible to Vote!";
        ui->label_4->setText(str1);
    }
    else
    {
        str1 = "Hello " + str1 + ", you are NOT eligible to Vote!";
        ui->label_4->setText(str1);
    }
}
