#ifndef FINDBOOKWIN_H
#define FINDBOOKWIN_H

#include <QDialog>
#include "data.h"
#include <QString>
#include "bookinfo.h"
#include "borrwolist.h"
#include "reservewin.h"
namespace Ui {
class FindBookWin;
}

class FindBookWin : public QDialog
{
    Q_OBJECT

public:
    explicit FindBookWin(QWidget *parent = 0);
    ~FindBookWin();
    void FindWithBookName(QString);                      //通过书名查找
    void FindWithWriter(QString);                                   //通过作者名查找
    void FindWithBookCode(QString);                                 //通过编码查找
    void FindWithBookType(QString);                                  //通过书类查找
    void FindWithPublishingHouse(QString);
    void SetTable();
     void PrintBookInfo(Book);
     void SetInfo(QString,int);
     void ToFindBook();
     void reset();
private slots:

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_tableWidget_doubleClicked(const QModelIndex &index);

private:
    Ui::FindBookWin *ui;
   BookInfo BookInfoWin;
   BorrwoList borrowlistWin;
   ReserveWin reservewin;
};

#endif // FINDBOOKWIN_H
