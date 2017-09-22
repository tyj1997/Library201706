#include "data.h"
#include "source.h"
#include <vector>
#include "QString"
#include <QFile>
#include <QTextStream>
vector <Book> BookVector;
vector <Person> PersonVector;
QDateTime t=QDateTime::currentDateTime();
char TimeCount[100];
bool IsChoosed = 0;
int AllBookNum = 0;                                      //所有书籍数目
int HasBookNum = 0;                                      //现有的书籍数目
 int SerialNumber = 0;
 Person *p=NULL;
 QString TypeToCode(QString s)
 {

     if (s=="青春") return "001";
     else if (s=="小说") return  "002";
     else if (s== "文学") return  "003";
     else if (s=="艺术") return  "004";
     else if (s=="动漫/幽默") return  "005";
     else if (s=="娱乐时尚") return  "006";
     else if (s=="旅游") return  "007";
     else if (s=="地图/地理") return  "008";
     else if (s=="生活/购物") return  "009";
     else if (s=="育儿/成长") return  "010";
     else if (s=="心理") return  "011";
     else if (s=="体育") return  "012";
     else if (s=="励志") return  "013";
     else if (s=="管理") return  "014";
     else if (s=="经济") return  "015";
     else if (s=="法律") return  "016";
     else if (s=="政治/军事") return  "017";
     else if (s=="社会科学") return  "018";
     else if (s=="古籍") return  "019";
     else if (s=="文化") return  "020";
     else if (s=="历史") return  "021";
     else if (s=="传记") return  "022";
     else if (s=="少儿") return  "023";
     else if (s=="中小学教辅") return  "024";
     else if (s=="外语") return  "025";
     else if (s=="考试") return  "026";
     else if (s=="教材") return  "027";
     else if (s=="工具书") return  "028";
     else if (s=="科普读物") return  "029";
     else if (s=="计算机/网络") return  "030";
     else if (s=="医学") return  "031";
     else if (s=="科学技术") return  "032";
     else return "XXXX";
 }
 QString PublishingHouseToCode(QString s)
 {
    int count=100;
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
             if(s==out.readLine())
             return QString::number(count);
             count++;
         }
         if(out.atEnd())
             return "XXX";
     }
     BookInfo.close();
 }



 void Person::BorrowBook(QString code,int num)
 {
     for (int i = 0; i < BookVector.size(); i++)

     {
         if(BookVector[i].GetBookCode()==code)
         {

                 HasBookNum -=num;
                 BookVector[i].SetBookBorrowNum(BookVector[i].GetBookBorrowNum()+num);
                 p->SetAuthorization(p->GetAuthorization() - num);
                 p->SetPersonBorrowNum(p->GetPersonBorrowNum() + num);
                 //BookVector[i].SetBookBorrowByone(num);
                 for (int k = 0; k < PersonVector.size(); k++)
                     if (PersonVector[k].GetPersonName() == p->GetPersonName())
                         PersonVector[k] = *p;
                 multimap<QDateTime, Book> ::iterator multitr;
                 for(multitr = p->PersonBorrowInfoMap.begin(); multitr != p->PersonBorrowInfoMap.end(); multitr++)
                 {
                      if(multitr->first == t && multitr->second.GetBookCode() == code)    //同一天借书叠加
                      {
                           int temp = multitr->second.GetBookBorrowByone();
                           multitr->second=BookVector[i];
                           multitr->second.SetBookBorrowByone(temp+num);
                           p->ShowBorrowList(multitr->second,num);
                               return;
                      }
                 }
                 Book MyBook = BookVector[i];
                 MyBook.SetBookBorrowByone(num);
                 MyBorrow.push_back(MyBook);
                 p->PersonBorrowInfoMap.insert(pair<QDateTime, Book>(t,MyBook));             //加入个人借书信息
                 p->ShowBorrowList(MyBook,num);
             }
     }

 }
int isDigitStr(QString src)
{
    QByteArray ba = src.toLatin1();//QString 转换为 char*
     const char *s = ba.data();

    while(*s && *s>='0' && *s<='9') s++;

    if (*s)
    { //不是纯数字
        return 0;
    }
    else
    { //纯数字
        return 1;
    }
}


int Person::ReturnBook(QString code,QString tinfo,int ReturnNum)
{
    int i;
    multimap<QDateTime, Book> ::iterator multitr;
        for (multitr = p->PersonBorrowInfoMap.begin(); multitr->second.GetBookCode() != code || multitr->first.toString("yyyy-MM-dd") != tinfo; multitr++);

                int temp = multitr->second.GetBookBorrowByone();
                    if(multitr->second.GetBookBorrowByone()>= ReturnNum)
                    {
                        if(p->GetMoney()<multitr->first.addDays(30).daysTo(t)* ReturnNum*0.1)
                        {
                            QMessageBox Warn(QMessageBox::NoIcon, "警告", "余额不足,请先充值");
                            Warn.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\Recharge.png"));
                            Warn.setStyleSheet("background-color:white");
                            QPushButton *btn_sure =Warn.addButton("确定", QMessageBox::AcceptRole);
                            Warn.exec();
                        }
                            //QMessageBox::warning(NULL,"警告","余额不足,请先充值");
                        else
                        {
                        for (i = 0; i < BookVector.size(); i++)
                        {
                            if (BookVector[i].GetBookCode() == code)
                                break;
                        }
                        BookVector[i].SetBookBorrowNum(BookVector[i].GetBookBorrowNum() - ReturnNum);
                        p->SetPersonBorrowNum(p->GetPersonBorrowNum() - ReturnNum);
                        p->SetAuthorization(p->GetAuthorization() + ReturnNum);
                        for (int k = 0; k < PersonVector.size(); k++)
                            if (PersonVector[k].GetPersonName() == p->GetPersonName())
                                PersonVector[k] = *p;
                        Book Mybook = BookVector[i];
                        QMessageBox Success(QMessageBox::NoIcon, "成功", "还书成功");
                        Success.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\Return_Suc.png"));
                        Success.setStyleSheet("background-color:white");
                        QPushButton *btn_sure = Success.addButton("确定", QMessageBox::AcceptRole);
                        Success.exec();
                        //QMessageBox::warning(NULL,"成功","还书成功");
                        if(multitr->first.addDays(30)<t)
                        {
                            QMessageBox Fine(QMessageBox::NoIcon, "罚款", QString::number(ReturnNum)+"本书超时"+QString::number(multitr->first.addDays(30).daysTo(t))+"天,罚款"+QString::number(multitr->first.addDays(30).daysTo(t)*ReturnNum*0.1)+"元");
                            Fine.setIconPixmap(QPixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\Fine.png"));
                            Fine.setStyleSheet("background-color:white");
                            QPushButton *btn_sure = Fine.addButton("确定", QMessageBox::AcceptRole);
                            Fine.exec();
                            //QMessageBox::warning(NULL,"罚款",QString::number(ReturnNum)+"本书超时"+QString::number(multitr->first.addDays(30).daysTo(t))+"天,罚款"+QString::number(multitr->first.addDays(30).daysTo(t)*ReturnNum*0.1)+"元");
                            p->SetMoney(p->GetMoney()-multitr->first.addDays(30).daysTo(t)* ReturnNum*0.1);
                        }
                        multitr->second = Mybook;
                        multitr->second.SetBookBorrowByone(temp-ReturnNum);
                        if(multitr->second.GetBookBorrowByone() == 0)
                            p->PersonBorrowInfoMap.erase(multitr);
                       // cout<<"还书后"<<multitr->second.GetBookBorrowByone()<<endl;
                       // this->ShowReturnList(BookVector[i],ReturnNum, multitr->first);
                        HasBookNum+=ReturnNum;

                        ShowReturnList(BookVector[i],ReturnNum, multitr->first);
                        return 1;
                        }
                    }

}

void Person::ReBorrowBook(QString code)
{
    int i=0;
    QDateTime temp_t;
    multimap<QDateTime, Book> ::iterator multitr;
    // for ( i = 0; BookVector[i].GetBookCode() != code; i++);
        for (multitr = p->PersonBorrowInfoMap.begin(); multitr->second.GetBookCode()!=code; multitr++);
        Book MyBook = multitr->second;
        p->PersonBorrowInfoMap.erase(multitr);
         p->PersonBorrowInfoMap.insert(pair<QDateTime, Book>(t,MyBook));

}

void Person::ShowBorrowList(Book book,int num)
{
    QFile BorrowList("D:\\libraryproject\\BorrowList.txt");
    if(!BorrowList.open(QIODevice::Text|QIODevice::WriteOnly|QIODevice::Append))
    {
        std::cerr << "Cannot open file for writing" << qPrintable( BorrowList.errorString()) << std::endl;
    }
    QTextStream output(&BorrowList);

   output<<QString("借书人:") << this->GetPersonName() << endl;
   output << QString("书名:") << book.GetBookName() << endl;
    output << QString("作者:") << book.GetWriter() << endl;
    output << QString("书籍简介:") << book.GetIntroduction() << endl;
   output << QString("出版社:") << book.GetPublishingHouse() << endl;
    output << QString("借书数量:") << num << endl;
   output <<QString( "借书时间:") <<t.toString("yyyy-MM-dd")<< endl;
    BorrowList.close();
}
 void Person::ShowReturnList(Book book,int num,QDateTime time)
{
     QFile ReturnList("D:\\libraryproject\\ReturnList.txt");
     if(!ReturnList.open(QIODevice::Text|QIODevice::WriteOnly|QIODevice::Append))
     {
         std::cerr << "Cannot open file for writing" << qPrintable( ReturnList.errorString()) << std::endl;
     }
     QTextStream output(&ReturnList);
     output<< QString("还书人:") << this->GetPersonName() << endl;
        output<< QString("书名:") << book.GetBookName() << endl;
       output<<QString( "作者:") << book.GetWriter() << endl;
      output<< QString("书籍简介:") << book.GetIntroduction() << endl;
      output << QString("出版社:") << book.GetPublishingHouse() << endl;
       output<< QString("还书数量:") << num << endl;
       output <<QString( "还书时间:" )<< t.toString("yyyy-MM-dd") << endl;
       output <<QString( "借书时间:") << time.toString("yyyy-MM-dd") << endl;
         ReturnList.close();
}

