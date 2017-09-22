#ifndef ADDBOOK2_H
#define ADDBOOK2_H

#include <QDialog>

namespace Ui {
class AddBook2;
}

class AddBook2 : public QDialog
{
    Q_OBJECT

public:
    explicit AddBook2(QWidget *parent = 0);
    ~AddBook2();
    void AddBookByKeyboard();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AddBook2 *ui;
};

#endif // ADDBOOK2_H
