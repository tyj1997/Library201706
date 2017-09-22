#ifndef FINDBOOK_H
#define FINDBOOK_H

#include <QDialog>

namespace Ui {
class FindBook;
}

class FindBook : public QDialog
{
    Q_OBJECT

public:
    explicit FindBook(QWidget *parent = 0);
    ~FindBook();

private:
    Ui::FindBook *ui;
};

#endif // FINDBOOK_H
