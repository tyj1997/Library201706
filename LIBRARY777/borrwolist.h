#ifndef BORRWOLIST_H
#define BORRWOLIST_H

#include <QDialog>

namespace Ui {
class BorrwoList;
}

class BorrwoList : public QDialog
{
    Q_OBJECT

public:
    explicit BorrwoList(QWidget *parent = 0);
    ~BorrwoList();
    void bookinfo(QString);
    int getnum();
private slots:
    void on_pushButton_clicked();

private:
    Ui::BorrwoList *ui;
};

#endif // BORRWOLIST_H
