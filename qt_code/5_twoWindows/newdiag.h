#ifndef NEWDIAG_H
#define NEWDIAG_H

#include <QDialog>

namespace Ui {
class newDiag;
}

class newDiag : public QDialog
{
    Q_OBJECT

public:
    explicit newDiag(QWidget *parent = nullptr);
    ~newDiag();

private:
    Ui::newDiag *ui;
};

#endif // NEWDIAG_H
