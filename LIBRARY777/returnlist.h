#ifndef RETURNLIST_H
#define RETURNLIST_H

#include <QDialog>
#include "data.h"
namespace Ui {
class ReturnList;
}

class ReturnList : public QDialog
{
    Q_OBJECT

public:
    explicit ReturnList(QWidget *parent = 0);
    ~ReturnList();
     void bookinfo(QString,QString,int);
     QString borrowtime;
private slots:
     void on_pushButton_clicked();

private:
    Ui::ReturnList *ui;
};

#endif // RETURNLIST_H
