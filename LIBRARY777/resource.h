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
static int AllBookNum = 0;                                      //�����鼮��Ŀ
static int HasBookNum = 0;                                      //���е��鼮��Ŀ
static int SerialNumber = 0;									//��ˮ��
static void AddBook();										    //����鼮
static void FindBook();                                         //�����鼮
static void FindWithBookName();                                 //ͨ����������
static void FindWithWriter();                                   //ͨ������������
static void FindWithBookCode();                                 //ͨ���������
static void FindWithBookType();                                  //ͨ���������
static void FindWithPublishingHouse();                           //ͨ�����������
static void PrintBookInfo(Book);           //��ӡ�����Ϣ
static void PrintPersonInfo(Person);
static void AddDay();
//static void PrintPersonInfo(multimap<string, Person>::iterator);
//static void AddPerson();
static string TypeToCode(string);                               //����ת��Ϊ����
static string PublishingHouseToCode(string);                    //������ת��Ϊ����
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
    string BookName;                                 //����
    string BookCode;								  //��ı���
    string Writer;                                    //����
    string PublishingHouse;                           //������
    string Introduction;                              //���
    string BuyTime;                                   //����ʱ��
    int    BookNum;                                   //����
    string BookType;                                //����
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
    string Name;                                   //����
    int BorrowNum=0;                                       //��������
    string College;                                      //����ѧԺ
    int Authorization;                                   //����Ȩ��
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

