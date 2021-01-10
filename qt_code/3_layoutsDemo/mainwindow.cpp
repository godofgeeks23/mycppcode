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

// by default, there is no layout
// to add a layout, add something to the window, and then right click on the empty space in the window, and select the layout
// now, whenever anything else is added to the window, it gets added according to the layout.
// benefit of layout is that when the window is resized, the elements also resize automatically!
// for further size changes, see the size policy in the properties window.
// a window can also have multiple layouts...
