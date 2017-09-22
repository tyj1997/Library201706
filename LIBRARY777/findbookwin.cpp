#include "findbookwin.h"
#include "ui_findbookwin.h"
#include <QMessageBox>
#include "data.h"
#include "source.h"
#include <qinputdialog.h>
#include <qicon.h>
FindBookWin::FindBookWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindBookWin)
{

    ui->setupUi(this);
    QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\book.ico");
    this->setWindowIcon(icon);
    this->setAutoFillBackground(true);
    QPalette palette;
    QPixmap pixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\borrow.jpg");
    palette.setBrush(QPalette::Window, QBrush(pixmap));
    this->setPalette(palette);
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(9);
    ui->tableWidget->verticalHeader()->setDefaultSectionSize(50);

   ui->tableWidget->setFont(QFont("微软雅黑", 10, QFont::Bold ));
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    QStringList header;
    header<<tr("书名")<<tr("作者")<<tr("种类")<<tr("出版社")<<tr("ISBN")<<tr("数量")<<tr("已借")<<tr("借阅率")<<tr("购书时间");
    ui->tableWidget->setHorizontalHeaderLabels(header);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setShowGrid(false);
     ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
   ui->tableWidget->setStyleSheet("background-color:rgba(0,0,0,30)");
   ui->tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section{background:skyblue;}");
   ui->tableWidget->verticalHeader()->setStyleSheet("QHeaderView::section{background:skyblue;}");
    ui->tableWidget->show();
    this->setWindowTitle(tr("查询\借阅书籍"));

}


FindBookWin::~FindBookWin()
{
    delete ui;
}



  void FindBookWin::SetInfo(QString info,int row)
      {
    for (int i = 0; i < BookVector.size(); i++)
         {
             if (BookVector[i].GetBookCode()==info)
            {
               double a = BookVector[i].GetBookNum();
                 double b = BookVector[i].GetBookBorrowNum();
                 double Borrowrates = b / a;
                 QString rate=QString::number(Borrowrates*100,'f',2);
                 ui->tableWidget->setItem(row,6,new QTableWidgetItem(QString::number(BookVector[i].GetBookBorrowNum())));
                 ui->tableWidget->setItem(row,7,new QTableWidgetItem( rate+'%'));
                 }
    }

 }

void FindBookWin::on_pushButton_6_clicked()
{

    if(ui->tableWidget->currentIndex().row()!=-1)
    {
    QModelIndex index=ui->tableWidget->currentIndex();
   QString info =ui->tableWidget->item(index.row(),4)->text();
   if(ui->tableWidget->item(index.row(),5)->text().toInt()-ui->tableWidget->item(index.row(),6)->text().toInt()>0)
   {
       //QMessageBox::information(NULL,"失败","该书剩余量充足");
       QMessageBox Fail(QMessageBox::NoIcon, "失败", "该书剩余量充足");
       Fail.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\Book_Enough.png"));
       Fail.setStyleSheet("background-color:white");
       QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\error.ico");
       Fail.setWindowIcon(icon);
       QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
       Fail.exec();
   }
   else
   {
   reservewin.bookinfo(info);
    reservewin.exec();
   }
    }
}

void FindBookWin::on_pushButton_7_clicked()
{
    if(ui->tableWidget->currentIndex().row()!=-1)
    {
        QModelIndex index=ui->tableWidget->currentIndex();
        if(ui->tableWidget->item(index.row(),5)->text().toInt()-ui->tableWidget->item(index.row(),6)->text().toInt()==0)
        {
            QMessageBox Fail(QMessageBox::NoIcon, "失败", "该书目前无剩余,您可进行预约");
            Fail.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\Book.png"));
            Fail.setStyleSheet("background-color:white");
            QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\error.ico");
            Fail.setWindowIcon(icon);
            QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
            Fail.exec();
            //QMessageBox::information(NULL,"失败","该书目前无剩余，您可以进行预约");
        }
        else
        {
            QString info =ui->tableWidget->item(index.row(),4)->text();
            borrowlistWin.bookinfo(info);
            borrowlistWin.exec();
            SetInfo(info,index.row());
        }
     }
}
void FindBookWin::ToFindBook()
{
    QString s1=ui->lineEdit->text();
    QString s2=ui->lineEdit_2->text();
    QString s3=ui->lineEdit_3->text();
    QString s4=ui->lineEdit_4->text();
    QString s5=ui->lineEdit_5->text();
    int k=0;
    int flag=0;
     for (int i = 0; i < BookVector.size(); i++)
     {
         if (BookVector[i].GetBookName().lastIndexOf(s1)!=-1&&BookVector[i].GetWriter().lastIndexOf(s2)!=-1&&BookVector[i].GetPublishingHouse().lastIndexOf(s3)!=-1&&BookVector[i].GetBookType().lastIndexOf(s4)!=-1&&BookVector[i].GetBookCode().lastIndexOf(s5)!=-1)
         {
             double a = BookVector[i].GetBookNum();
                 double b = BookVector[i].GetBookBorrowNum();
                 double Borrowrates = b / a;
                 QString rate=QString::number(Borrowrates*100,'f',2);
              ui->tableWidget->setRowCount(k+1);
             ui->tableWidget->setItem(k,0,new QTableWidgetItem(BookVector[i].GetBookName()));
             ui->tableWidget->setItem(k,1,new QTableWidgetItem(BookVector[i].GetWriter()));
             ui->tableWidget->setItem(k,2,new QTableWidgetItem(BookVector[i].GetBookType()));
               ui->tableWidget->setItem(k,3,new QTableWidgetItem(BookVector[i].GetPublishingHouse()));
             ui->tableWidget->setItem(k,4,new QTableWidgetItem(BookVector[i].GetBookCode()));
             ui->tableWidget->setItem(k,5,new QTableWidgetItem(QString::number(BookVector[i].GetBookNum())));
             ui->tableWidget->setItem(k,6,new QTableWidgetItem(QString::number(BookVector[i].GetBookBorrowNum())));
              ui->tableWidget->setItem(k,7,new QTableWidgetItem( rate+'%'));
                  ui->tableWidget->setItem(k,8,new QTableWidgetItem(BookVector[i].GetBuyTime()));
             k++;
             flag=1;
         }

     }
     if(flag==0)
          ui->tableWidget->setRowCount(0);
        ui->tableWidget->show();

}

void FindBookWin::on_pushButton_8_clicked()
{
    ToFindBook();
}
void FindBookWin::reset(){
    ui->tableWidget->setRowCount(0);
}

void FindBookWin::on_tableWidget_doubleClicked(const QModelIndex &index)
{
   QString info=ui->tableWidget->item(index.row(),4)->text();
    BookInfoWin.PrintBookInfo(info);
   BookInfoWin.show();
}
