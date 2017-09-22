#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <map>
#include <iomanip>
#include <algorithm>
#include <list>
#include <QDateTime>
#include <cmath>
#include <ctime>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <iterator>
#include <sstream>
#include <exception>
#include <string>
#include <fstream>
using namespace std;

#include "QString"
#include <QMessageBox>

class Book;
class Person;
using namespace std;									//流水号
void AddBook();										    //添加书籍
                                       //查找书籍
                        //通过出版社查找
           //打印书的信息
void AddDay();
//static void PrintPersonInfo(multimap<string, Person>::iterator);
//static void AddPerson();
 extern QString TypeToCode(QString);                               //书类转换为编码
 extern QString PublishingHouseToCode(QString);                    //出版社转换为编码
 Person* ChoosePerson();
 void printPersonInfo(Person p);
class Book
{
public:
    friend class Person;
    Book(QString BookType,QString BookNname, QString Writer, QString PublishingHouse, QString Introduction, QString BuyTime, int BookNum) {
        this->BookType = BookType;
        this->BookName = BookNname;
        this->Writer = Writer;
        this->PublishingHouse = PublishingHouse;
        this->Introduction = Introduction;
        this->BuyTime = BuyTime;
        this->BookNum = BookNum;
    }
    QString GetBookName() { return this->BookName; }
    QString GetBookCode() { return this->BookCode; }
    QString GetWriter() { return this->Writer; }
    QString GetPublishingHouse() { return this->PublishingHouse; }
    QString GetIntroduction() { return this->Introduction; }
    QString GetBuyTime() { return this->BuyTime; }
    int GetBookNum() { return this->BookNum; }
    QString GetBookType() { return this->BookType; }
    int GetBookBorrowNum() { return this->BookBorrowNum; }
    void SetBookCode(QString BookCode) { this->BookCode = BookCode; }
    void SetBookNum(int BookNum) { this->BookNum = BookNum; }
    void SetBookBorrowNum(int BookBorrowNum) { this->BookBorrowNum = BookBorrowNum; }
    void SetBookBorrowByone(int BookBorrowByone) { this->BookBorrowByone= BookBorrowByone; }
    int  GetBookBorrowByone(){ return this->BookBorrowByone; }
    void SetBookBuyTime(QString BuyTime){this->BuyTime=BuyTime;}
protected:
    QString BookName;                                 //书名
    QString BookCode;								  //书的编码
    QString Writer;                                    //作者
    QString PublishingHouse;                           //出版社
    QString Introduction;                              //简介
    QString BuyTime;                                   //购买时间
    int    BookNum;                                   //数量
    QString BookType;                                //类型
    int    BookBorrowNum = 0;
    int    BookBorrowByone = 0;

};

class Person {
public:
    friend class Book;
    multimap <QDateTime,Book> PersonBorrowInfoMap;
    vector <Book> MyBorrow;
    vector <Book> Reserve;
    void BorrowBook(QString,int);
    int ReturnBook(QString,QString,int);
    void ReBorrowBook(QString);
    QString GetPersonName() { return this->Name; }
    int GetPersonBorrowNum() { return this->BorrowNum; }
    QString GetCollege() { return this->College; }
    int GetAuthorization() { return this->Authorization; }
    QString GetPostion(){ return this->Position; }
    QString GetId() { return this->Id; }
    QString GetPassWord() {return this->PassWord;}
    void SetPassWord(QString PassWord){this->PassWord=PassWord;}
    void SetAuthorization(int Authorization) { this->Authorization = Authorization; }
    void ShowBorrowList(Book,int);
    void ShowReturnList(Book, int,QDateTime);
    void SetPersonBorrowNum(int BorrowNum) { this->BorrowNum = BorrowNum; }
    double GetMoney(){return this->money;}
    void SetMoney(double money){this->money=money;}

protected:
    QString Name;                                   //名字
    int BorrowNum=0;                                       //借书数量
    QString College;                                      //所在学院
    int Authorization;                                   //借书权限
    QString Position;
    QString Id;
    QString PassWord;
   double money=100;


};
class Student :public Person {
public:
    Student(QString Position,QString Name,QString College, int Authorization,QString StudentNumber,QString PassWord) {
        this->Position = Position;
        this->Name = Name;
        this->College = College;
        this->Authorization = Authorization;
        this->Id = StudentNumber;
        this->PassWord = PassWord;
    }

private:
};
class Teacher :public Person {
public:
    Teacher(QString Position,QString Name,  QString College, int Authorization, QString  TeacherNumber,QString PassWord) {
        this->Name = Name;
        this->College = College;
        this->Position = Position;
        this->Authorization = Authorization;
        this->Id = TeacherNumber;
        this->PassWord = PassWord;
    }

private:
};
class Administrator :public Person{
    public:
    Administrator(QString Position,QString Name,  QString College, int Authorization, QString  TeacherNumber,QString PassWord) {
        this->Name = Name;
        this->College = College;
        this->Position = Position;
        this->Authorization = Authorization;
        this->Id = TeacherNumber;
        this->PassWord = PassWord;
    }
    private:
};
 extern vector <Book> BookVector;
  extern vector <Person> PersonVector;
extern QDateTime t;

extern char TimeCount[100];
extern bool IsChoosed ;
extern int AllBookNum ;                                      //所有书籍数目
extern int HasBookNum ;                                      //现有的书籍数目
extern int SerialNumber;
extern Person *p;

extern int isDigitStr(QString src) ;

#endif // DATA_H
