#include "retrunlist.h"
#include "ui_retrunlist.h"

RetrunList::RetrunList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RetrunList)
{
    ui->setupUi(this);
}

RetrunList::~RetrunList()
{
    delete ui;
}
