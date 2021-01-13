#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDir>
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

void MainWindow::on_pushButton_clicked()
{
//    QString filename = QFileDialog::getOpenFileName(this, "Open a file", "/home/aviral/");
//    QString filename = QFileDialog::getOpenFileName(this, title, default directory to open);

    QString filter = "All Text Files (*.txt) ;; All PDF Files (*.pdf)";     // optional
    QString filename = QFileDialog::getOpenFileName(this, "Open a file", QDir::homePath(), filter);
    QMessageBox::information(this, "Title", filename);
}
