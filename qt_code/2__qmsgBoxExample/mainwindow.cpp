#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
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
//    QMessageBox::about(this, "Write Title Here", "Message Itself");
//    QMessageBox::aboutQt(this, "About Qt used here...");

//      below 4 types return a StandardButton, indicating the button that was pressed
//      QMessageBox::critical(this, "Write Title Here", "Message Itself");
//      QMessageBox::information(this, "Write Title Here", "Message Itself");
//      QMessageBox::question(this, "Write Title Here", "Message Itself");
//      QMessageBox::warning(this, "Write Title Here", "Message Itself");
          QMessageBox::StandardButton reply = QMessageBox::question(this, "Write Title Here", "Message Itself", QMessageBox::Yes | QMessageBox::No);
          if(reply==QMessageBox::Yes)
          {
              QApplication::quit();
          }
          else {
              qDebug()<<"No is clicked";
          }
}
