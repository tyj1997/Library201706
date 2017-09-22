#include "returnlist.h"
#include "ui_returnlist.h"
#include <qicon.h>

ReturnList::ReturnList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReturnList)
{
    ui->setupUi(this);
     this->setWindowTitle(tr("还书"));
    QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\book.ico");
    this->setWindowIcon(icon);
}

ReturnList::~ReturnList()
{
    delete ui;
}
 void ReturnList::bookinfo(QString code,QString time,int num)
 {

     QStringList booknum;
     borrowtime=time;
     for(int i=0;i<BookVector.size();i++)
     {
         if(BookVector[i].GetBookCode()==code)
         {
             ui->comboBox->clear();
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
            for(int j=1;j<=num;j++)
                booknum<<QString::number(j);
            ui->comboBox->addItems(booknum);
            break;
         }
     }
 }

void ReturnList::on_pushButton_clicked()
{
    int text= ui->comboBox->currentText().toInt();
    p->ReturnBook(ui->label_3->text().remove(0,5),borrowtime,text);
    this->close();

}
