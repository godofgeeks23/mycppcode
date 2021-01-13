#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

#include <QColor>
#include <QColorDialog>
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
    QColor color = QColorDialog::getColor(Qt::white, this, "Title goes here...");
    if(color.isValid())
    {
        QMessageBox::information(this, "Good Color", "Great Choice!");
    }
    else {
        QMessageBox::information(this, "Wrong Color", "Invalid Color");
    }
}
