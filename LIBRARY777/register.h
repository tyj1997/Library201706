#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>
#include "data.h"

namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = 0);
    ~Register();
    void RegisterID();
    void AddPersonTofile(Person);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Register *ui;
};

#endif // REGISTER_H
