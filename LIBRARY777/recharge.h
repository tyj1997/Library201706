#ifndef RECHARGE_H
#define RECHARGE_H

#include <QDialog>
#include "data.h"
namespace Ui {
class Recharge;
}

class Recharge : public QDialog
{
    Q_OBJECT

public:
    explicit Recharge(QWidget *parent = 0);
    ~Recharge();
    void PersonRecharge();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Recharge *ui;
};

#endif // RECHARGE_H
