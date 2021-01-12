#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // status bar can also contain widgets in itself
    ui->statusBar->addPermanentWidget(ui->progressBar);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
//    ui->statusBar->showMessage("You clicked the button!");

    int timeout = 2000; // in milliseconds
    ui->statusBar->showMessage("You clicked the button!", timeout);
}
