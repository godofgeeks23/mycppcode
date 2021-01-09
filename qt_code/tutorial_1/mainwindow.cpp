#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // connect(sender, signal, reciver, action);
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),ui->progressBar, SLOT(setValue(int)));
    // disconnect(ui->horizontalSlider, SIGNAL(valueChanged(int)),ui->progressBar, SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
   ui->label->setText("You Clicked!!!");
}
