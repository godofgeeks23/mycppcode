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

// items added to the menu bar get created with theeir respective actions
// you can also add them to the toolbar (and now you don;t need to recode the same action)

// to add a slot, add it to the action under slot "triggered"
