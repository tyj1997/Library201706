#ifndef RESERVEWIN_H
#define RESERVEWIN_H

#include <QDialog>
#include "data.h"
namespace Ui {
class ReserveWin;
}

class ReserveWin : public QDialog
{
    Q_OBJECT

public:
    explicit ReserveWin(QWidget *parent = 0);
    ~ReserveWin();
    void bookinfo(QString);
private slots:
    void on_pushButton_clicked();

private:
    Ui::ReserveWin *ui;
};

#endif // RESERVEWIN_H
