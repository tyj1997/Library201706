#ifndef CHANGEPASSWORD_H
#define CHANGEPASSWORD_H

#include <QDialog>
#include "data.h"
namespace Ui {
class ChangePassWord;
}

class ChangePassWord : public QDialog
{
    Q_OBJECT

public:
    explicit ChangePassWord(QWidget *parent = 0);
    ~ChangePassWord();
    void SetPassWord();
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::ChangePassWord *ui;
};

#endif // CHANGEPASSWORD_H
