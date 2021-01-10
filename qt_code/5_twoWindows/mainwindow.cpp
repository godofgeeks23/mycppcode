#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newdiag.h"
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

// add a new window to the project by new -> qt -> qt designer form class
// choose a template - set its name
// add to your project
// to use that class in your project via your main window class, add its header file to this main class

void MainWindow::on_pushButton_clicked()
{
    newDiag mynext;
    mynext.setModal(true);      // modal approach - when new window is opened, old one cant be accessed
    mynext.exec();

    // to hide your main window, use hide();
}
