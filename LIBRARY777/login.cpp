#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include "data.h"
#include <iostream>
#include <QTextStream>
#include <QFile>
#include <qicon.h>
using namespace std;

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\book.ico");
    this->setWindowIcon(icon);
    setWindowFlags(Qt::FramelessWindowHint);
    setWindowOpacity(0.9);
    this->setWindowTitle(tr("登录"));
}
Login::~Login()
{
    delete ui;
}
void Login::AddPerson()
{
    QFile PersonInfo("D://libraryproject//PersonInfo.txt");
    if(!PersonInfo.open(QIODevice::ReadOnly))
    {
        std::cerr << "Cannot open file for writing" << qPrintable(PersonInfo.errorString()) << std::endl;
    }
    QTextStream in(&PersonInfo);
    QString s[5];
    while(!in.atEnd())
    {
        for(int i = 0;i <= 4;i++)
            s[i] = in.readLine();
        if(QString::compare(s[0],tr("教师")) == 0)
        {
            int authorization = 1000;
            Teacher teacher(s[0], s[1], s[2], authorization, s[3],s[4]);
            PersonVector.push_back(teacher);
        }
        else if (QString::compare(s[0],tr("学生")) == 0)
        {
            int authorization = 100;
            Student student(s[0], s[1], s[2], authorization, s[3],s[4]);
            PersonVector.push_back(student);
        }
        else if(QString::compare(s[0],tr("管理员")) == 0)
        {
           int authorization = 0;
           Administrator administrator(s[0], s[1], s[2], authorization, s[3],s[4]);
           PersonVector.push_back(administrator);
        }
    }
}
void Login::on_pushButton_clicked()
{
    int i;
    //int flag = 0;
    QString CurrentId = ui->lineEdit->text();
    QString CurrentPassWord = ui->lineEdit_2->text();
    for(i=0; i < PersonVector.size(); i++)
    {
        if(PersonVector[i].GetId() == CurrentId)
        {
            if(PersonVector[i].GetPassWord() == CurrentPassWord)
            {
                 accept();
                 ui->lineEdit_2->clear();
                 ui->lineEdit->clear();
                 p=&PersonVector[i];
                 this->hide();
                 return;
            }
            else
            {
                ui->lineEdit_2->clear();
                QMessageBox Fail(QMessageBox::NoIcon, "失败", "密码错误");
                Fail.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\error.png"));
                Fail.setStyleSheet("background-color:white");
                QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\error.ico");
                Fail.setWindowIcon(icon);
                QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
                Fail.exec();
                //QMessageBox::warning(NULL,"失败","密码错误");
                return;
            }
        }
    }
    ui->lineEdit_2->clear();
    QMessageBox Fail(QMessageBox::NoIcon, "失败", "账户不存在");
    Fail.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\No_ID.png"));
    Fail.setStyleSheet("background-color:white");
    QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\error.ico");
    Fail.setWindowIcon(icon);
    QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
    Fail.exec();
    //QMessageBox::warning(NULL,"失败","账户不存在");
}

void Login::on_pushButton_3_clicked()
{

     RegisterWin.exec();

}

void Login::on_pushButton_5_clicked()
{
    ChangePassWordWin.exec();
}
