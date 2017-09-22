#ifndef RETRUNLIST_H
#define RETRUNLIST_H

#include <QDialog>
#include "data.h"
namespace Ui {
class RetrunList;
}

class RetrunList : public QDialog
{
    Q_OBJECT

public:
    explicit RetrunList(QWidget *parent = 0);
    ~RetrunList();

private:
    Ui::RetrunList *ui;
};

#endif // RETRUNLIST_H
