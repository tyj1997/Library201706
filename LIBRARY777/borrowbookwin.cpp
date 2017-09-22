#include "borrowbookwin.h"
#include "ui_borrowbookwin.h"

BorrowBookWin::BorrowBookWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BorrowBookWin)
{
    ui->setupUi(this);
}

BorrowBookWin::~BorrowBookWin()
{
    delete ui;
}

void BorrowBookWin::on_pushButton_clicked()
{
    p->BorrowBook();

}
