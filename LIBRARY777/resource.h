#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <map>
#include <iomanip>
#include <algorithm>
#include <list>
#include <ctime>
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
time_t t;
class Book;
class Person;
char TimeCount[100];
using namespace std;
static bool IsChoosed = 0;
static int AllBookNum = 0;                                      //所有书籍数目
static int HasBookNum = 0;                                      //现有的书籍数目
static int SerialNumber = 0;									//流水号
static void AddBook();										    //添加书籍
static void FindBook();                                         //查找书籍
static void FindWithBookName();                                 //通过书名查找
static void FindWithWriter();                                   //通过作者名查找
static void FindWithBookCode();                                 //通过编码查找
static void FindWithBookType();                                  //通过书类查找
static void FindWithPublishingHouse();                           //通过出版社查找
static void PrintBookInfo(Book);           //打印书的信息
static void PrintPersonInfo(Person);
static void AddDay();
//static void PrintPersonInfo(multimap<string, Person>::iterator);
//static void AddPerson();
static string TypeToCode(string);                               //书类转换为编码
static string PublishingHouseToCode(string);                    //出版社转换为编码
static Person* ChoosePerson();
vector <Book> BookVector;
vector <Person> PersonVector;
class Book
{
public:
    friend class Person;
    Book(string BookType, string BookNname, string Writer, string PublishingHouse, string Introduction, string BuyTime, int BookNum) {
        this->BookType = BookType;
        this->BookName = BookNname;
        this->Writer = Writer;
        this->PublishingHouse = PublishingHouse;
        this->Introduction = Introduction;
        this->BuyTime = BuyTime;
        this->BookNum = BookNum;
    }
    string GetBookName() { return this->BookName; }
    string GetBookCode() { return this->BookCode; }
    string GetWriter() { return this->Writer; }
    string GetPublishingHouse() { return this->PublishingHouse; }
    string GetIntroduction() { return this->Introduction; }
    string GetBuyTime() { return this->BuyTime; }
    int GetBookNum() { return this->BookNum; }
    string GetBookType() { return this->BookType; }
    int GetBookBorrowNum() { return this->BookBorrowNum; }
    void SetBookCode(string BookCode) { this->BookCode = BookCode; }
    void SetBookNum(int BookNum) { this->BookNum = BookNum; }
    void SetBookBorrowNum(int BookBorrowNum) { this->BookBorrowNum = BookBorrowNum; }
    void SetBookBorrowByone(int BookBorrowByone) { this->BookBorrowByone= BookBorrowByone; }
    int  GetBookBorrowByone(){ return this->BookBorrowByone; }
protected:
    string BookName;                                 //书名
    string BookCode;								  //书的编码
    string Writer;                                    //作者
    string PublishingHouse;                           //出版社
    string Introduction;                              //简介
    string BuyTime;                                   //购买时间
    int    BookNum;                                   //数量
    string BookType;                                //类型
    int    BookBorrowNum = 0;
    int    BookBorrowByone = 0;

};

class Person {
public:
    friend class Book;
    map <time_t,Book> PersonBorrowInfoMap;
    void BorrowBook();
    void ReturnBook();
    string GetPersonName() { return this->Name; }
    int GetPersonBorrowNum() { return this->BorrowNum; }
    string GetCollege() { return this->College; }
    int GetAuthorization() { return this->Authorization; }
    string GetPostion(){ return this->Position; }
    virtual string GetId() { return Id; }
    void SetAuthorization(int Authorization) { this->Authorization = Authorization; }
    void ShowBorrowList(Book,int);
    void ShowReturnList(Book, int,time_t);
    void SetPersonBorrowNum(int BorrowNum) { this->BorrowNum = BorrowNum; }
protected:
    string Name;                                   //名字
    int BorrowNum=0;                                       //借书数量
    string College;                                      //所在学院
    int Authorization;                                   //借书权限
    string Position;
    string Id;

};
class Student :public Person {
public:
    Student(string Position,string Name,string College, int Authorization,string StudentNumber ) {
        this->Position = Position;
        this->Name = Name;
        this->College = College;
        this->Authorization = Authorization;
        this->Id = StudentNumber;
    }

private:
};
class Teacher :public Person {
public:
    Teacher(string Position,string Name,  string College, int Authorization, string  TeacherNumber) {
        this->Name = Name;
        this->College = College;
        this->Position = Position;
        this->Authorization = Authorization;
        this->Id = TeacherNumber;
    }

private:
};

