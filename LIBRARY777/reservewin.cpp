#include "reservewin.h"
#include "ui_reservewin.h"
#include <qicon.h>
ReserveWin::ReserveWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReserveWin)
{
    ui->setupUi(this);
 this->setWindowTitle(tr("预约"));
    QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\book.ico");
    this->setWindowIcon(icon);
}

ReserveWin::~ReserveWin()
{
    delete ui;
}
void ReserveWin:: bookinfo(QString code)
{
    for(int i=0;i<BookVector.size();i++)
    {
        if(BookVector[i].GetBookCode()==code)
        {

           ui->label->setText("书名:"+BookVector[i].GetBookName());
           ui->label_2->setText("作者:"+BookVector[i].GetWriter());
           ui->label_3->setText("ISBN:"+BookVector[i].GetBookCode());
           ui->label_4->setText("出版社:"+BookVector[i].GetPublishingHouse());
           ui->label_5->setText("职业:"+p->GetPostion());
           ui->label_6->setText("姓名:"+p->GetPersonName());
           ui->label_7->setText("学院:"+p->GetCollege());
           if (p->GetPostion() == "教师")
           ui->label_8->setText("工作证:"+p->GetId());
           else if  (p->GetPostion() == "学生")
            ui->label_8->setText("学生证:"+p->GetId());
             else if  (p->GetPostion() == "管理员")
               ui->label_8->setText("管理证:"+p->GetId());

           break;
        }
    }

}

void ReserveWin::on_pushButton_clicked()
{
     vector<Book> ::iterator it;
     for (it = p->Reserve.begin(); it!=p->Reserve.end();it++)
     {
     if((*it).GetBookCode()==ui->label_3->text().remove(0,5))
         break;
     }
     if(it!=p->Reserve.end())
     {
         QMessageBox Fail(QMessageBox::NoIcon,"错误","您已预约过此书，请耐心等待");
         Fail.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\wait.png"));
         Fail.setStyleSheet("background-color:white");
         QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\error.ico");
         Fail.setWindowIcon(icon);
         QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
         Fail.exec();
     }
     else{
    for(int i=0;i<BookVector.size();i++)
    {
        if(BookVector[i].GetBookCode()==ui->label_3->text().remove(0,5))
        {
         p->Reserve.push_back(BookVector[i]);
         break;
        }
    }
    QMessageBox Success(QMessageBox::NoIcon, "成功", "您已预约成功,书到时会自动提醒您");
    Success.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\Borrow_Suc.png"));
    Success.setStyleSheet("background-color:white");
    QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\success.ico");
    Success.setWindowIcon(icon);
    QPushButton *btn_sure = Success.addButton("确定", QMessageBox::AcceptRole);
    Success.exec();
    //QMessageBox::information(NULL,"成功","您已预约成功,书到时会自动提醒您");
     }
    this->close();
}
