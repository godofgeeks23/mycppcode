#include "newdiag.h"
#include "ui_newdiag.h"

newDiag::newDiag(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newDiag)
{
    ui->setupUi(this);
}

newDiag::~newDiag()
{
    delete ui;
}
