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
    QString user = ui->username->text();
    QString pass = ui->passwd->text();
    if(user=="aviral" && pass=="aviral")
    {
        QMessageBox::information(this, "Login Successful!", "You are authorized!");
    }
    else
    {
        QMessageBox::warning(this, "Login Unsuccessful!", "You are NOT authorized!");

    }
}

void MainWindow::on_pushButton_2_clicked()
{
    exit(0);
}
