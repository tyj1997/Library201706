#ifndef BOOKINFO_H
#define BOOKINFO_H

#include <QDialog>
#include <data.h>
namespace Ui {
class BookInfo;
}

class BookInfo : public QDialog
{
    Q_OBJECT

public:
    explicit BookInfo(QWidget *parent = 0);
    ~BookInfo();
    void PrintBookInfo(QString);

private:
    Ui::BookInfo *ui;
};

#endif // BOOKINFO_H
