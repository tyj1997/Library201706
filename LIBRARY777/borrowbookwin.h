#ifndef BORROWBOOK_H
#define BORROWBOOK_H

#include <QDialog>
#include "data.h"
namespace Ui {
class BorrowBookWin;
}

class BorrowBookWin : public QDialog
{
    Q_OBJECT

public:
    explicit BorrowBookWin(QWidget *parent = 0);
    ~BorrowBookWin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::BorrowBookWin *ui;
};

#endif // BORROWBOOK_H
