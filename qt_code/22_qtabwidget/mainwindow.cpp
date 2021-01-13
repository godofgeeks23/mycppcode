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

// you can change tab position,

void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);

}

void MainWindow::on_pushButton_clicked()
{
    ui->tabWidget->addTab(new QWidget(), QString("Tab %0").arg(ui->tabWidget->count())+1);

}

// to add content to a tab, either you can do it manually from the form designer, or by creating a new widget class to the project, and then adding it to the tabwidget by -
//  inlcuding its header file, and ui.tabWidget.addTab(new new_window, "Title of Tab");

void MainWindow::on_pushButton_2_clicked()
{
    QApplication::quit();
}
