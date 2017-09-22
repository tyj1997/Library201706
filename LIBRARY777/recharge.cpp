#include "recharge.h"
#include "ui_recharge.h"
#include <QMessageBox>
#include <qicon.h>
Recharge::Recharge(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Recharge)
{
    ui->setupUi(this);
    QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\recharge.ico");
    this->setWindowIcon(icon);
    this->setAutoFillBackground(true);
    QPalette palette;
    QPixmap pixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\Recharge.jpg");
    palette.setBrush(QPalette::Window, QBrush(pixmap));
     this->setPalette(palette);
    this->setWindowTitle(tr("充值"));

}

Recharge::~Recharge()
{
    delete ui;
}

void Recharge::on_pushButton_2_clicked()
{
    this->close();
}

void Recharge::on_pushButton_clicked()
{
    PersonRecharge();
}
void Recharge::PersonRecharge()
{
    QString id=ui->lineEdit->text();
    QString password=ui->lineEdit_2->text();
    QString money=ui->lineEdit_3->text();
    QMessageBox box (QMessageBox::NoIcon,tr("确定"),tr("确定充值?"),QMessageBox::Yes|QMessageBox::No,this);
    box.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\Recharge.png"));
    box.setStyleSheet("background-color:white");
    QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\question.ico");
    box.setWindowIcon(icon);
    box.setButtonText(QMessageBox::Yes,QString("确定"));
    box.setButtonText(QMessageBox::No,QString("取消"));
    int i;
    for(i=0;i<PersonVector.size();i++)
    {
        if(id==PersonVector[i].GetId()&&password==PersonVector[i].GetPassWord())
            break;
    }
    if(box.exec()==QMessageBox::Yes)
    {
    if(i==PersonVector.size())
    {
        QMessageBox Fail(QMessageBox::NoIcon, "错误", "该人物信息不存在");
        Fail.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\No_ID.png"));
        Fail.setStyleSheet("background-color:white");
        QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\error.ico");
        Fail.setWindowIcon(icon);
        QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
        Fail.exec();
        //QMessageBox::warning(NULL,"错误","该人物信息不存在");
    }
    else{
        if(!isDigitStr(money))
        {
            QMessageBox Fail(QMessageBox::NoIcon, "错误", "请输入正确充值金额");
            Fail.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\Recharge.png"));
            Fail.setStyleSheet("background-color:white");
            QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\error.ico");
            Fail.setWindowIcon(icon);
            QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
            Fail.exec();
            //QMessageBox::warning(NULL,"错误","请输入正确充值金额");
        }
        else
        {
            PersonVector[i].SetMoney(PersonVector[i].GetMoney()+money.toDouble());
            QMessageBox Success(QMessageBox::NoIcon, "成功", "充值成功");
            Success.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\Recharge_Suc.png"));
            QPushButton *btn_sure = Success.addButton("确定", QMessageBox::AcceptRole);
            Success.setStyleSheet("background-color:white");
            QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\success.ico");
            Success.setWindowIcon(icon);
            Success.exec();
            //QMessageBox::warning(NULL,"成功","充值成功");
            ui->lineEdit->clear();
            ui->lineEdit_2->clear();
            ui->lineEdit_3->clear();
        }
    }
    }
}
