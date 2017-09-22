#include "inforbox.h"
#include "ui_inforbox.h"

InforBox::InforBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InforBox)
{
    ui->setupUi(this);
    QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\infor.ico");
    this->setWindowIcon(icon);
    this->setAutoFillBackground(true);
    QPalette palette;
    QPixmap pixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\InforBox.png");
    palette.setBrush(QPalette::Window, QBrush(pixmap));
    this->setPalette(palette);
    this->setWindowTitle(tr("消息盒子"));
}

InforBox::~InforBox()
{
    delete ui;
}
void InforBox::ReserveBook()
{
    int i;
    vector<Book> ::iterator multitr;
        for (multitr = p->Reserve.begin(); multitr!=p->Reserve.end();)
        {
            for(i=0;i<BookVector.size();i++)
            {
                if(BookVector[i].GetBookCode()==(*multitr).GetBookCode()&&(BookVector[i].GetBookNum()-BookVector[i].GetBookBorrowNum()>0))
                {
                    ui->listWidget->addItem(new QListWidgetItem("您预定的"+BookVector[i].GetBookName()+"已到"));
                   multitr= p->Reserve.erase(multitr);
                   break;

                }
            }
            if(i==BookVector.size())
               multitr++;
        }
}
