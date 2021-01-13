#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(my_function));
    int millisecs = 3000;
    timer->start(millisecs);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::my_function()
{
    qDebug()<<"update...";
}

// include QTimer in header class
