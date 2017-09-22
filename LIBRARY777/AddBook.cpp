#include "AddBook.h"
#include "ui_AddBook.h"

AddBook::AddBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddBook)
{
    ui->setupUi(this);
}

AddBook::~AddBook()
{
    delete ui;
}

void AddBook::AddBookByKeyboard()
{
    QString s[6];
    s[0] = ui->lineEdit->text();
    s[1] = ui->lineEdit_2->text();
    s[2] = ui->lineEdit_3->text();
    s[3] = ui->lineEdit_4->text();
    s[4] = ui->lineEdit_5->text();
    s[5] = ui->lineEdit_6->text();
    int s6 = ui->lineEdit_7->text().toInt();
    int Bookflag = 0;
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
        QString tempstr = QString::number(SerialNumber,10);
        book.SetBookCode(TypeToCode(book.GetBookType()) + PublishingHouseToCode(book.GetPublishingHouse()) + tempstr);
        BookVector.push_back(book);    //后插入
    }
}

void AddBook::on_pushButton_clicked()
{
    AddBookByKeyboard();
    QMessageBox::information(this,tr("成功"),tr("添加书籍成功!!"));
    this->close();
}
