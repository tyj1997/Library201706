#include "register.h"
#include "ui_register.h"
#include <QMessageBox>
#include "data.h"
#include <QFile>
#include <QTextStream>
#include <qicon.h>
Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\book.ico");
    this->setWindowIcon(icon);
   this->setAutoFillBackground(true);
    QPalette palette;
    QPixmap pixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\regist.jpg");
    palette.setBrush(QPalette::Window, QBrush(pixmap));
    this->setPalette(palette);

    //setWindowFlags( Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);
    QStringList college;
    college << "计算机学院" << "信通院" << "自动化院" << "电子院"<<"经管院"<<"理学院";
    ui->comboBox->addItems(college);
    ui->lineEdit_6->setText(college[0]);
    this->setWindowTitle(tr("注册"));
}

Register::~Register()
{
    delete ui;
}

void Register::on_pushButton_clicked()
{
        QString s[6];
        int flag = 1,i;
        s[0] = ui->lineEdit->text();
        s[1] = ui->lineEdit_2->text();
        s[2] = ui->lineEdit_3->text();
        if(ui->radioButton->isChecked())
            s[3] = "教师";
        else
            s[3] = "学生";
        s[4] = ui->lineEdit_5->text();
        s[5] = ui->lineEdit_6->text();
        if(s[0].isEmpty() || s[1].isEmpty() || s[2].isEmpty() || s[3].isEmpty() || s[4].isEmpty() || s[5].isEmpty())
        {
            QMessageBox Fail(QMessageBox::NoIcon, "失败", "请完善账户信息");
            Fail.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\register_fail.png"));
            Fail.setStyleSheet("background-color:white");
            QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\error.ico");
            Fail.setWindowIcon(icon);
            QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
            //Fail.setStyleSheet("QPushButton { background-color: rgb(255, 85, 0)}");
            Fail.exec();
        }
        else
        {
            for(i=0; i < PersonVector.size(); i++)
            {
                if(PersonVector[i].GetId() == s[0])
                {
                    flag = 0;
                    break;
                }
            }
            if(flag)
            {
                if(s[1] == s[2])
                {
                    if(s[3]=="教师")
                    {
                        Teacher teacher(s[3], s[4], s[5],1000, s[0],s[1]);
                        PersonVector.push_back(teacher);
                        AddPersonTofile(teacher);
                    }
                    else if (s[3]=="学生")
                    {
                        Student student(s[3], s[4], s[5],100, s[0],s[1]);
                        PersonVector.push_back(student);
                        AddPersonTofile(student);
                    }
                    QMessageBox Success(QMessageBox::NoIcon, "成功", "注册成功");
                    Success.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\register_suc.png"));
                    Success.setStyleSheet("background-color:white");
                    QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\success.ico");
                    Success.setWindowIcon(icon);
                    QPushButton *btn_sure = Success.addButton("确定", QMessageBox::AcceptRole);
                    //Fail.setStyleSheet("QPushButton { background-color: rgb(255, 85, 0)}");
                    Success.exec();
                }
                else
                {
                    QMessageBox Fail(QMessageBox::NoIcon, "失败", "请确认密码");
                    Fail.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\error.png"));
                    Fail.setStyleSheet("background-color:white");
                    QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\error.ico");
                    Fail.setWindowIcon(icon);
                    QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
                    //Fail.setStyleSheet("QPushButton { background-color: rgb(255, 85, 0)}");
                    Fail.exec();
                }
            }
            else
            {
                QMessageBox Fail(QMessageBox::NoIcon, "失败", "该账户已存在");
                Fail.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\No_ID.png"));
                Fail.setStyleSheet("background-color:white");
                QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\error.ico");
                Fail.setWindowIcon(icon);
                QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
                Fail.exec();
            }
      }
}

void Register::AddPersonTofile(Person P)
{
    QFile Addtofile("D:\\libraryproject\\PersonInfo.txt");
    if(!Addtofile.open(QIODevice::Text|QIODevice::WriteOnly|QIODevice::Append))
    {
        std::cerr << "Cannot open file for writing" << qPrintable( Addtofile.errorString()) << std::endl;
    }
    QTextStream output(&Addtofile);
    output<<P.GetPostion()<<endl;
    output<<P.GetPersonName()<<endl;
    output<<P.GetCollege()<<endl;
    output<<P.GetId()<<endl;
    output<<P.GetPassWord()<<endl;
    Addtofile.close();
}

void Register::on_pushButton_3_clicked()
{
    this->close();
}
