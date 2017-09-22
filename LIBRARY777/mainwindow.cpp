#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <dialog.h>
#include <QMessageBox>
#include <findbook.h>
#include "source.h"
#include "data.h"
#include "login.h"
#include <QFile>
#include <QTextStream>
#include "personinfo.h"
#include "AddBook2.h"
#include "QPropertyAnimation"
#include <qicon.h>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\book.ico");
    this->setWindowIcon(icon);
    ui->label_2->setText("当前时间:"+t.currentDateTime().toString("yyyy-MM-dd"));
    connect(timer,SIGNAL(timeout()),this,SLOT(on_pushButton_4_clicked()),Qt::UniqueConnection);
    timer->start(10000);
    AddBookByFile();
    this->setWindowTitle(tr("图书馆主界面"));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow:: AddBookByFile()
{
    QFile BookInfo("D:\\libraryproject\\BookInfo.txt");
    if(!BookInfo.open(QIODevice::ReadOnly))
    {
        std::cerr << "Cannot open file for writing666" << qPrintable(BookInfo.errorString()) << std::endl;
    }
    else
    {
        QTextStream out(&BookInfo);
        QString s[7];
        while(!out.atEnd())
        {
            for(int i = 0;i <= 6;i++)
                s[i] =out.readLine();
            int Bookflag = 0;
            int s6=s[6].toInt();
            Book book(s[0],s[1],s[2],s[3],s[4],s[5],s6);
            AllBookNum+= s6;
            HasBookNum+= s6;
            for (int i = 0; i < BookVector.size(); i++)
            {
                if (BookVector[i].GetBookType() == s[0]&&BookVector[i].GetBookName() == s[1]&&BookVector[i].GetWriter() == s[2]&&BookVector[i].GetPublishingHouse() == s[3]&&BookVector[i].GetIntroduction() == s[4])
                {
                    BookVector[i].SetBookNum(s6+ BookVector[i].GetBookNum());
                    Bookflag = 1;
                }             //叠加书籍
            }
            if(Bookflag==0)
            {
                QString tempstr = QString::number(SerialNumber++,10);
                book.SetBookCode(TypeToCode(book.GetBookType()) + PublishingHouseToCode(book.GetPublishingHouse()) + tempstr);
               BookVector.push_back(book);    //后插入
            }
        }
    }
    BookInfo.close();
}
void MainWindow::on_pushButton_clicked()
{
    if(p->GetPostion()=="管理员")
    AddBookWin.show();
    else
    {
        QMessageBox Fail(QMessageBox::NoIcon, "错误", "您不是管理员,无法添加书籍");
        Fail.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\No_Admission.png"));
        Fail.setStyleSheet("background-color:white");
        QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\error.ico");
        Fail.setWindowIcon(icon);
        QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
        Fail.exec();
        //QMessageBox::warning(NULL,"错误","您不是管理员,无法添加书籍");
     }
}

void MainWindow::on_pushButton_2_clicked()
{
     timer->stop();
    FindBookWindow.reset();
    FindBookWindow.exec();
    timer->start(10000);
    cout<<p->GetAuthorization()<<endl;
}

void MainWindow::on_pushButton_3_clicked()
{
    timer->stop();
    PersonInfoWin.PrintPersonInfo();
    PersonInfoWin.exec();
     timer->start(10000);
}

void MainWindow::on_pushButton_5_clicked()
{
    QMessageBox box (QMessageBox::NoIcon,tr("注销"),tr("确定注销?"),QMessageBox::Yes|QMessageBox::No,this);
    box.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\Cancellation.png"));
    box.setStyleSheet("background-color:white");
    QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\out.ico");
    box.setWindowIcon(icon);
    box.setButtonText(QMessageBox::Yes,QString("确定"));
    box.setButtonText(QMessageBox::No,QString("取消"));
    if(box.exec()==QMessageBox::Yes)
    {
        this->hide();
        d.show();

        if(d.exec()==QDialog::Accepted)
        this->show();
        else
            this->close();
   }
}


void MainWindow::on_pushButton_4_clicked()
{

    t=t.addDays(1);
    ui->label_2->setText("当前时间:"+t.toString("yyyy-MM-dd"));

}


void MainWindow::on_pushButton_6_clicked()
{

     timer->stop();
    InforBoxWin.exec();
    InforBoxWin.ReserveBook();
     timer->start(10000);
}

void MainWindow::on_pushButton_7_clicked()
{
    if(p->GetPostion()=="管理员")
    {
     timer->stop();
    RechargeWin.exec();
    timer->start(10000);
    }
    else
        {
        QMessageBox Fail(QMessageBox::NoIcon, "错误", "您不是管理员,无法进行充值");
        Fail.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\No_Admission.png"));
        Fail.setStyleSheet("background-color:white");
        QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\error.ico");
        Fail.setWindowIcon(icon);
        QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
        Fail.exec();
    }
        //QMessageBox::warning(NULL,"错误","您不是管理员,无法进行充值");
}


void MainWindow::on_pushButton_9_clicked()
{
    timer->stop();
    LogWin.exec();
    LogWin.PrintLog();
    timer->start(10000);
}
