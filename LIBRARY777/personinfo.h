#ifndef PERSONINFO_H
#define PERSONINFO_H

#include <QDialog>
#include "data.h"
#include <QModelIndex>
#include "returnlist.h"
namespace Ui {
class PersonInfo;
}

class PersonInfo : public QDialog
{
    Q_OBJECT

public:
    explicit PersonInfo(QWidget *parent = 0);
    ~PersonInfo();
    void PrintPersonInfo();
    void ResetBorrowInfo(QString,QString,Person,int);
    ReturnList returnlistWin;
private slots:



     void on_pushButton_clicked();

     void on_pushButton_2_clicked();

private:
    Ui::PersonInfo *ui;
};

#endif // PERSONINFO_H

