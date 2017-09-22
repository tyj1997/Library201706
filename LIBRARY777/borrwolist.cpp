#include "borrwolist.h"
#include "ui_borrwolist.h"
#include "data.h"
#include <qicon.h>
BorrwoList::BorrwoList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BorrwoList)
{
    ui->setupUi(this);
    QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\book.ico");
    this->setWindowIcon(icon);
    this->setWindowTitle(tr("借书单"));
    QPalette palette;
    QPixmap pixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\书籍信息背景2.jpg");
    palette.setBrush(QPalette::Window, QBrush(pixmap));
        this->setPalette(palette);
}

BorrwoList::~BorrwoList()
{
    delete ui;
}
void BorrwoList::bookinfo(QString code)
{
    QStringList booknum;
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
           for(int j=1;j<=BookVector[i].GetBookNum()-BookVector[i].GetBookBorrowNum();j++)
               booknum<<QString::number(j);
           ui->comboBox->addItems(booknum);
           break;
        }
    }

}

void BorrwoList::on_pushButton_clicked()
{
    int text= ui->comboBox->currentText().toInt();
    if(text>p->GetAuthorization())
    {
        QMessageBox Fail(QMessageBox::NoIcon, "错误", "借书权限不足");
        Fail.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\No_Admission.png"));
        Fail.setStyleSheet("background-color:white");
        QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\error.ico");
        Fail.setWindowIcon(icon);
        QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
        Fail.exec();
        //QMessageBox::warning(NULL,"错误","借书权限不足");
    }
    else
        {
           p->BorrowBook(ui->label_3->text().remove(0,5),text);
           QMessageBox Success(QMessageBox::NoIcon, "成功", "借书成功");
           Success.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\Borrow_Suc.png"));
           Success.setStyleSheet("background-color:white");
           QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\success.ico");
           Success.setWindowIcon(icon);
           QPushButton *btn_sure = Success.addButton("确定", QMessageBox::AcceptRole);
           //Fail.setStyleSheet("QPushButton { background-color: rgb(255, 85, 0)}");
           Success.exec();
           //QMessageBox::information(NULL,"成功","借书成功");
           this->close();

         }
}

