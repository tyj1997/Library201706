#ifndef INFORBOX_H
#define INFORBOX_H

#include <QDialog>
#include "data.h"
namespace Ui {
class InforBox;
}

class InforBox : public QDialog
{
    Q_OBJECT

public:
    explicit InforBox(QWidget *parent = 0);
    ~InforBox();
   void ReserveBook();
private:
    Ui::InforBox *ui;
};

#endif // INFORBOX_H
