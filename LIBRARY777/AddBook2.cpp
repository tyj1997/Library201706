#include "AddBook2.h"
#include "ui_AddBook2.h"
#include <QMessageBox>
#include "data.h"
#include "QPropertyAnimation"
#include <QFile>
#include <QTextStream>
#include <qicon.h>
AddBook2::AddBook2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddBook2)
{
    ui->setupUi(this);
    QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\book.ico");
    this->setWindowIcon(icon);
    this->setAutoFillBackground(true);
    QPalette palette;
    QPixmap pixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\AddBook.png");
    palette.setBrush(QPalette::Window, QBrush(pixmap));
    this->setPalette(palette);
    this->setWindowTitle(tr("添加书籍"));
    QStringList BookType;
    QStringList Publishment;
    QStringList booknum;
    BookType<<"青春"<<"小说"<<"文学"<<"艺术"<<"动漫/幽默"<<"娱乐时尚"<<"旅游"<<"地图/地理"<<"生活/购物"<<"育儿/成长"<<"心理"<<"体育"<<"励志"
           <<"管理"<<"经济"<<"法律"<<"政治/军事"<<"社会科学"<<"古籍"<<"文化"<<"历史"<<"传记"<<"少儿"<<"中小学教辅"<<"外语"<<"考试"<<"教材"
          <<"工具书"<<"科普读物"<<"计算机/网络"<<"医学"<<"科学技术";
    ui->comboBox->addItems(BookType);
    for(int i=1;i<=100;i++)
        booknum<<QString::number(i);
     ui->comboBox_3->addItems(booknum);
    QFile BookInfo("D:\\libraryproject\\出版社.txt");
    if(!BookInfo.open(QIODevice::ReadOnly))
    {
        std::cerr << "Cannot open file for writing" << qPrintable(BookInfo.errorString()) << std::endl;
    }
    else
    {
        QTextStream out(&BookInfo);
        while(!out.atEnd())
        {
            Publishment<<out.readLine();
        }
    }
    BookInfo.close();
    ui->comboBox_2->addItems(Publishment);

}

AddBook2::~AddBook2()
{
    delete ui;
}


void AddBook2::AddBookByKeyboard()
{
    QString s[6];
    s[0] = ui->comboBox->currentText();
    s[1] = ui->lineEdit_2->text();
    s[2] = ui->lineEdit_3->text();
    s[3] = ui->comboBox_2->currentText();
    s[4] = ui->textEdit->toPlainText();
    int s5 = ui->comboBox_3->currentText().toInt();
    int Bookflag = 0;
    if(s[1]==NULL||s[2]==NULL||s[4]==NULL)
    {
        QMessageBox Error(QMessageBox::NoIcon, "错误", "请检查图书信息是否正确");
        QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\error.ico");
        Error.setWindowIcon(icon);
        Error.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\error.png"));
        Error.setStyleSheet("background-color:white");
        QPushButton *btn_sure = Error.addButton("确定", QMessageBox::AcceptRole);
        //Fail.setStyleSheet("QPushButton { background-color: rgb(255, 85, 0)}");
        Error.exec();
        //QMessageBox::warning(this,tr("错误"),tr("请检查图书信息是否正确"));
    }
   else
    {
    Book book(s[0],s[1],s[2],s[3],s[4],t.toString("yyyy-MM-dd"),s5);
    AllBookNum+= s5;
    HasBookNum+= s5;
    for (int i = 0; i < BookVector.size(); i++)
    {
        if (BookVector[i].GetBookType() == s[0]&&BookVector[i].GetBookName() == s[1]&&BookVector[i].GetWriter() == s[2]&&BookVector[i].GetPublishingHouse() == s[3]&&BookVector[i].GetIntroduction() == s[4])
        {
            BookVector[i].SetBookNum(s5+ BookVector[i].GetBookNum());
            BookVector[i].SetBookBuyTime(t.toString("yyyy-MM-dd"));
            Bookflag = 1;
        }             //叠加书籍
    }
    if(Bookflag==0)
    {
        QString tempstr = QString::number(SerialNumber,10);
        book.SetBookCode(TypeToCode(book.GetBookType()) + PublishingHouseToCode(book.GetPublishingHouse()) + tempstr);
        BookVector.push_back(book);    //后插入
    }
    QMessageBox Success(QMessageBox::NoIcon, "成功", "添加书籍成功");
    QIcon icon("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\success.ico");
    Success.setWindowIcon(icon);
    Success.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\Add_Book.png"));
    Success.setStyleSheet("background-color:white");
    QPushButton *btn_sure = Success.addButton("确定", QMessageBox::AcceptRole);
    Success.exec();
    QFile BookInfo("D:\\libraryproject\\BookInfo.txt");
    if(!BookInfo.open(QIODevice::Text|QIODevice::WriteOnly|QIODevice::Append))
    {
        std::cerr << "Cannot open file for writing" << qPrintable(BookInfo.errorString()) << std::endl;
    }
    else
        {
            QTextStream output(&BookInfo);
            output<<s[0]<<endl;
            output<<s[1]<<endl;
            output<<s[2]<<endl;
            output<<s[3]<<endl;
            output<<s[4]<<endl;
            output<<t.toString("yyyy-MM-dd")<<endl;
            output<<ui->comboBox_3->currentText()<<endl;
        }
    BookInfo.close();
    }
}

void AddBook2::on_pushButton_clicked()
{
    AddBookByKeyboard();
}
