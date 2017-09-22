#include "changepassword.h"
#include "ui_changepassword.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <qicon.h>
ChangePassWord::ChangePassWord(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangePassWord)
{
    ui->setupUi(this);
    QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\key.ico");
    this->setWindowIcon(icon);
    this->setAutoFillBackground(true);
    QPalette palette;
    QPixmap pixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\changepassword.jpg");
    palette.setBrush(QPalette::Window, QBrush(pixmap));
        this->setPalette(palette);
    this->setWindowTitle(tr("修改密码"));

}

ChangePassWord::~ChangePassWord()
{
    delete ui;
}

void ChangePassWord::on_pushButton_2_clicked()
{
    this->close();
}

void ChangePassWord::on_pushButton_clicked()
{
    SetPassWord();
}
void ChangePassWord::SetPassWord()
{
    QString id=ui->lineEdit->text();
    QString OldPassWord=ui->lineEdit_2->text();
    QString NewPassWord1=ui->lineEdit_3->text();
    QString NewPassWord2=ui->lineEdit_4->text();
    int i;

    for(i=0;i<PersonVector.size();i++)
    {
        if(PersonVector[i].GetId()==id&&PersonVector[i].GetPassWord()==OldPassWord)
            break;
    }

    if(i==PersonVector.size())
    {
        //QMessageBox::warning(NULL,"错误","该用户信息不存在");
        QMessageBox Fail(QMessageBox::NoIcon, "错误", "该用户信息不存在");
        Fail.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\No_ID.png"));
        Fail.setStyleSheet("background-color:white");
        QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\error.ico");
        Fail.setWindowIcon(icon);
        QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
        Fail.exec();
    }
    else
    {
        if(NewPassWord1!=NewPassWord2)
        {
            QMessageBox Fail(QMessageBox::NoIcon, "错误", "两次新密码输入不一致");
            Fail.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\error.png"));
            Fail.setStyleSheet("background-color:white");
            QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\error.ico");
            Fail.setWindowIcon(icon);
            QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
            Fail.exec();
            //QMessageBox::warning(NULL,"错误","两次新密码输入不一致");
        }
        else
        {
        PersonVector[i].SetPassWord(NewPassWord1);
        QFile Pinfo("D:\\libraryproject\\PersonInfo.txt");
        if(!Pinfo.open(QIODevice::Text|QIODevice::ReadWrite))
        {
           std::cerr << "Cannot open file for writing" << qPrintable( Pinfo.errorString()) << std::endl;
        }
            else
            {
            QTextStream out(&Pinfo);
            QString strAll=out.readAll();
            QStringList strList=strAll.split('\n');
            QString temp=strList.at(1);
            Pinfo.resize(0);
            for(int i=0;i<strList.count();i++)
           {
                         if(i==strList.count()-1) out<<strList.at(i);
                         else out<<strList.at(i)<<'\n';
                          if(strList.at(i)==id)
                          {
                              QString temp=strList.at(i+1);
                              temp.replace(0,temp.length(),NewPassWord1);
                              out<<temp<<'\n';
                              i++;
                          }
            }
            QMessageBox Success(QMessageBox::NoIcon, "成功", "修改成功");
            Success.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\register_suc.png"));
            Success.setStyleSheet("background-color:white");
            QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\success.ico");
            Success.setWindowIcon(icon);
            QPushButton *btn_sure = Success.addButton("确定", QMessageBox::AcceptRole);
            Success.exec();
            //QMessageBox::information(NULL,"成功","修改成功");
            ui->lineEdit->clear();
            ui->lineEdit_2->clear();
            ui->lineEdit_3->clear();
            ui->lineEdit_4->clear();
           Pinfo.close();
        }
       }

  }

}
