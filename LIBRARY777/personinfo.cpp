#include "personinfo.h"
#include "ui_personinfo.h"
#include "data.h"
#include "source.h"
#include <vector>
#include <map>
#include <QDateTime>
#include <QMessageBox>
#include <qinputdialog.h>
#include <qicon.h>
PersonInfo::PersonInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PersonInfo)
{
    ui->setupUi(this);
    QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\book.ico");
    this->setWindowIcon(icon);
    this->setWindowTitle(tr("人物信息/借书"));
    this->setAutoFillBackground(true);
    QPalette palette;
    QPixmap pixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\Personinfo.jpg");
    palette.setBrush(QPalette::Window, QBrush(pixmap));
    this->setPalette(palette);
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(8);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    QStringList header;
    header<<tr("书名")<<tr("作者")<<tr("种类")<<tr("出版社")<<tr("ISBN")<<tr("借阅量")<<tr("借阅时期")<<tr("应还日期");
     ui->tableWidget->setColumnWidth(6,150);
        ui->tableWidget->setColumnWidth(7,150);
    ui->tableWidget->setHorizontalHeaderLabels(header);
     ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
      ui->tableWidget->setShowGrid(false);
      ui->tableWidget->setStyleSheet("background-color:rgba(0,0,0,30)");
      ui->tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section{background:skyblue;}");
      ui->tableWidget->verticalHeader()->setStyleSheet("QHeaderView::section{background:skyblue;}");
       ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
     ui->tableWidget->setFont(QFont("微软雅黑", 10, QFont::Bold ));
    ui->tableWidget->show();
}

PersonInfo::~PersonInfo()
{
    delete ui;
}

void PersonInfo::PrintPersonInfo()
{
            ui->label->setText("职业:"+p->GetPostion());
            ui->label_2->setText("姓名:"+p->GetPersonName());
            ui->label_3->setText("学院:"+p->GetCollege());
            ui->label_4->setText("权限:"+QString::number(p->GetAuthorization())+tr("本"));
            ui->label_5->setText("已借:"+QString::number(p->GetPersonBorrowNum())+tr("本"));
            if (p->GetPostion() == "教师")
            ui->label_6->setText("工作证:"+p->GetId());
            else if  (p->GetPostion() == "学生")
             ui->label_6->setText("学生证:"+p->GetId());
            else if  (p->GetPostion() == "管理员")
             ui->label_6->setText("管理证:"+p->GetId());
            ui->label_7->setText("账户余额:"+QString::number(p->GetMoney())+tr("元"));
    int k=0;
    map<QDateTime, Book> ::iterator multitr;
    ui->tableWidget->setRowCount(0);
        for (multitr = p->PersonBorrowInfoMap.begin(); multitr != p->PersonBorrowInfoMap.end(); multitr++)
        {
                    ui->tableWidget->setRowCount(k+1);

                    ui->tableWidget->setItem(k,0,new QTableWidgetItem(multitr->second.GetBookName()));
                    ui->tableWidget->setItem(k,1,new QTableWidgetItem(multitr->second.GetWriter()));
                    ui->tableWidget->setItem(k,2,new QTableWidgetItem(multitr->second.GetBookType()));
                    ui->tableWidget->setItem(k,3,new QTableWidgetItem(multitr->second.GetPublishingHouse()));
                    ui->tableWidget->setItem(k,4,new QTableWidgetItem(multitr->second.GetBookCode()));
                    ui->tableWidget->setItem(k,5,new QTableWidgetItem(QString::number(multitr->second.GetBookBorrowByone())));
                    ui->tableWidget->setItem(k,6,new QTableWidgetItem(multitr->first.toString("yyyy-MM-dd")));
                    ui->tableWidget->setItem(k,7,new QTableWidgetItem(multitr->first.addDays(30).toString("yyyy-MM-dd")));
                    if(multitr->first.addDays(30)<t)
                        for(int i=0;i<8;i++)
                        ui->tableWidget->item(k,i)->setTextColor(QColor(255,0,0));
                    k++;
         }
}





void PersonInfo::on_pushButton_clicked()
{

    if(ui->tableWidget->currentIndex().row()!=-1)
    {
     QModelIndex index=ui->tableWidget->currentIndex();
    QString info =ui->tableWidget->item(index.row(),4)->text();
     QString tinfo = ui->tableWidget->item(index.row(),6)->text();
     QDateTime t2=QDateTime::fromString(ui->tableWidget->item(index.row(),7)->text(), "yyyy-MM-dd");
     if(t>t2)
         QMessageBox::warning(NULL,"错误","此书已超期，请先还书");
     else
     {
   QMessageBox box (QMessageBox::NoIcon,tr("续借"),tr("确定续借?"),QMessageBox::Yes|QMessageBox::No,this);
   box.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\Continue.png"));
   box.setStyleSheet("background-color:white");
   QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\question.ico");
   box.setWindowIcon(icon);
   box.setButtonText(QMessageBox::Yes,QString("确定"));
       box.setButtonText(QMessageBox::No,QString("取消"));
       if(box.exec()==QMessageBox::Yes)
       {
           p->ReBorrowBook(info);
           QMessageBox Success(QMessageBox::NoIcon, "成功", "续借成功");
           Success.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\Borrow_Suc.png"));
           Success.setStyleSheet("background-color:white");
           QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\success.ico");
           Success.setWindowIcon(icon);
           QPushButton *btn_sure = Success.addButton("确定", QMessageBox::AcceptRole);
           Success.exec();
           //QMessageBox::information(NULL,tr("成功"),tr("续借成功!!!"));
            //ResetBorrowInfo(info,tinfo,*p,index.row());
            PrintPersonInfo();
         }
     }
    }
}

void PersonInfo::on_pushButton_2_clicked()
{

    if(ui->tableWidget->currentIndex().row()!=-1)
    {
     QModelIndex index=ui->tableWidget->currentIndex();
    QString info =ui->tableWidget->item(index.row(),4)->text();
    QString tinfo = ui->tableWidget->item(index.row(),6)->text();
    int booknum = ui->tableWidget->item(index.row(),5)->text().toInt();
    returnlistWin.bookinfo(info,tinfo,booknum);
    returnlistWin.exec();
    PrintPersonInfo();
   }
}

void PersonInfo::ResetBorrowInfo(QString Info,QString tinfo,Person person,int row)
{
    map<QDateTime, Book> ::iterator multitr;
        for (multitr = p->PersonBorrowInfoMap.begin(); multitr!= p-> PersonBorrowInfoMap.end(); multitr++)
        {
            if(multitr->second.GetBookCode() == Info && multitr->first.toString("yyyy-MM-dd") == tinfo)
            {
                if(multitr->second.GetBookBorrowByone() != 0)
                    ui->tableWidget->setItem(row,5,new QTableWidgetItem(QString::number(multitr->second.GetBookBorrowByone())));
                else
                    ui->tableWidget->removeRow(row);
            }
        }
        ui->label_4->setText("权限:"+QString::number(p->GetAuthorization())+tr("本"));
        ui->label_5->setText("已借:"+QString::number(p->GetPersonBorrowNum())+tr("本"));
}

