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
    QApplication::quit();
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::information(this, "Title here...", ui->comboBox->currentText());
}

void MainWindow::on_pushButton_3_clicked()
{
    int index = 3;
    ui->comboBox->insertItem(index, "New item");
}
