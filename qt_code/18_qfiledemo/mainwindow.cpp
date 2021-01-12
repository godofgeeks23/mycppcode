#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
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

void MainWindow::on_pushButton_3_clicked()
{
    QApplication::quit();
}

void MainWindow::on_pushButton_clicked()
{
    QFile myfile("/home/aviral/myfile.txt");
    if(!myfile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this, "Title goes here...!", "File not open!");
    }
    QTextStream out(&myfile);
    QString text = ui->plainTextEdit->toPlainText();
    out<<text;
    myfile.flush();
    myfile.close();
}

void MainWindow::on_pushButton_2_clicked()
{
    QFile myfile("/home/aviral/myfile.txt");
    if(!myfile.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::information(this, "Title goes here...!", "File not open!");
    }
    QTextStream in(&myfile);
    QString text = in.readAll();
    ui->plainTextEdit->setPlainText(text);
    myfile.close();
}
