#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QDir dir1("C:/random");
    if(dir1.exists())
    {
        QMessageBox::information(this, "Title", "Directory Found!");

    }
    else {
        QMessageBox::information(this, "Title", "INVALID: Directory NOT Found!");
    }

    QDir dir2("/");

    foreach(QFileInfo var, dir2.entryInfoList())
    {
        if(var.isDir())
            ui->comboBox->addItem(var.absoluteFilePath());
        else
            ui->listWidget->addItem(var.absoluteFilePath());
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

// access to direcotry structure and its contents

// you can also create a folder by using dir.mkpath("<path>");



void MainWindow::on_pushButton_2_clicked()
{
    QApplication::quit();
}
