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

// splitter - is a resizable partition between two layouts
// to add it, select the two layouts, right click and click on layout -> add splitter vertically / horizontally

// buddies - for example if a line edit and its corresponding label is are made buddies, then when of them is seletected, both of them get active

// spacers - used to add empty space in a layout
