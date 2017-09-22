#include "bookinfo.h"
#include "ui_bookinfo.h"
#include <QPixmap>
#include <qicon.h>
BookInfo::BookInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BookInfo)
{
    ui->setupUi(this);
    QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\book.ico");
    this->setWindowIcon(icon);
    ui->textEdit->setReadOnly(true);
    this->setWindowTitle(tr("书籍信息"));
    QPalette palette;
    QPixmap pixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\书籍信息背景.jpg");
    palette.setBrush(QPalette::Window, QBrush(pixmap));
        this->setPalette(palette);
}

BookInfo::~BookInfo()
{
    delete ui;
}
void BookInfo::PrintBookInfo(QString code)
  {
      for(int i=0;i<BookVector.size();i++)
      {
          if(BookVector[i].GetBookCode()==code)
          {
             ui->label->setText("书名:"+BookVector[i].GetBookName());
             ui->label_2->setText("作者:"+BookVector[i].GetWriter());
             ui->label_3->setText("ISBN:"+BookVector[i].GetBookCode());
             ui->label_4->setText("出版社:"+BookVector[i].GetPublishingHouse());
             ui->label_5->setText("数量:"+QString::number(BookVector[i].GetBookNum())+"本");
             ui->label_6->setText("已借:"+QString::number(BookVector[i].GetBookBorrowNum())+"本");
             QPixmap pixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\"+BookVector[i].GetBookName()+".jpg");
             ui->label_7->setPixmap(pixmap);
             ui->textEdit->setText(BookVector[i].GetIntroduction());
             break;
          }
      }

  }
