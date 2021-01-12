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

// using realtive paths instead of absolutepath is a good practice

// add new -> qt resource file -> set a name -> done
// a resource folder will be created with a resource.qrc file created in it
// open that file in qt-creator... below, 'add' option will be shown
// add prefix -> change that to the path of the file directory
// now add -> add files -> select the image/file you want to add!
// now you will be able to right click on the file in qt-creator workinf dir and select "copy path..."

// now you can use this path for your project!

