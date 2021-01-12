#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // method 1 to set image in label
    QPixmap pix("path of the image file with extension");
//    ui->pic->setPixmap(pix);
    // by default, image will be displayed of its original size
    int width = ui->pic->width();
    int height = ui->pic->height();
    ui->pic->setPixmap(pix.scaled(width, height, Qt::KeepAspectRatio));

    // method 2 is by selecting the pixmap property in the form designer

}

MainWindow::~MainWindow()
{
    delete ui;
}

// use labels to add pictures in windows

