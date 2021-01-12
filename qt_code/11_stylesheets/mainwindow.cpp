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

// qt widgets are html aware...
// so you can also show table using labels!

// css can also be used here by going to property -> stylesheet -> write css code!
// you can change font / border / shadow , etc!
