#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "data.h"
#include <iostream>
#include "register.h"
#include "changepassword.h"
using namespace std;
namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();
    void AddPerson();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::Login *ui;
    Register RegisterWin;
    ChangePassWord ChangePassWordWin;
};

#endif // LOGIN_H
