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
void Person::BorrowBook()
{
	string BookName;
	int BorrowNum,i;
	cout << "输入借书名:";
	cin >> BookName;
		cout << "选择借书数量:";
		cin >> BorrowNum;
		for (i = 0; i < BookVector.size(); i++)
		{
			if (BookVector[i].GetBookName() == BookName)
				break;
		}
		if (i != BookVector.size())
		{
			if (BorrowNum > (BookVector[i].GetBookNum()- BookVector[i].GetBookBorrowNum()))
				cout << "该书数量不足，无法借阅!!!" << endl;
			else if (this->GetAuthorization() < BorrowNum)
				cout << "权限不足，无法借阅!!!" << endl;
			else {
				cout << "借书成功!!!" << endl;
				HasBookNum -= BorrowNum;
				cout << HasBookNum << endl;
				BookVector[i].SetBookBorrowNum(BookVector[i].GetBookBorrowNum()+BorrowNum);
				this->SetAuthorization(this->GetAuthorization() - BorrowNum);
				this->SetPersonBorrowNum(this->GetPersonBorrowNum() + BorrowNum);
				BookVector[i].SetBookBorrowByone(BorrowNum);
				for (int k = 0; k < PersonVector.size(); k++)
					if (PersonVector[k].GetPersonName() == this->GetPersonName())
						PersonVector[k] = *this;	
				this->PersonBorrowInfoMap.insert(pair<time_t, Book>(t,BookVector[i]));             //加入个人借书信息
				this->ShowBorrowList(BookVector[i], BorrowNum);
			}
		}
		else cout << "不存在该书" << endl;
}
void Person::ReturnBook()
{
	string name;
	int i;
	int ReturnNum, Returnflag = 0;
	cout << "输入还书名字:";
	cin >> name;
	cout << "输入还书数量:";
		cin >> ReturnNum;
	map<time_t, Book> ::iterator multitr;
	for (multitr =this->PersonBorrowInfoMap.begin(); multitr != this->PersonBorrowInfoMap.end(); multitr++)
	{
		    if (multitr->second.GetBookName() == name)
		    {
		    	//    cout<<"还书前"<<multitr->second.GetBookBorrowByone()<<endl;
			    if(multitr->second. GetBookBorrowByone()>= ReturnNum)
			    { 
				    for (i = 0; i < BookVector.size(); i++)
				    {
					    if (BookVector[i].GetBookName() == name)
						    break;
				    }
				    BookVector[i].SetBookBorrowNum(BookVector[i].GetBookBorrowNum() - ReturnNum);
				    this->SetPersonBorrowNum(this->GetPersonBorrowNum() - ReturnNum);
				    this->SetAuthorization(this->GetAuthorization() + ReturnNum);
			     	for (int k = 0; k < PersonVector.size(); k++)
					    if (PersonVector[k].GetPersonName() == this->GetPersonName())
						    PersonVector[k] = *this;
				    multitr->second = BookVector[i];
				    multitr->second.SetBookBorrowByone(multitr->second.GetBookBorrowByone()-ReturnNum);
				//    cout<<"还书后"<<multitr->second.GetBookBorrowByone()<<endl;
				    this->ShowReturnList(BookVector[i],ReturnNum, multitr->first);
				    HasBookNum+=ReturnNum;
			    }
			else
			    cout<<"您没有借这么多书，请确认还书数目"<<endl;
			return;
			}
	}
	cout<<"不存在该书，请检查书名"<<endl; 
}
void Person::ShowBorrowList(Book book,int BorrowNum) {
	cout << "借书人:" << this->GetPersonName()<<endl;
	cout << "书名:" << book.GetBookName() << endl;
	cout << "作者:" << book.GetWriter() << endl;
	cout << "书籍简介:" << book.GetIntroduction()<<endl;
	cout << "出版社:" << book.GetPublishingHouse()<<endl;
	cout << "借书数量:" << BorrowNum << endl;
	cout << "借书时间:" << TimeCount << endl;
	cout << "注意:借书请于30日之内归还，超期将罚款" << endl;                         //直接计算还书日期 
	fstream BorrowList("D:\\libraryproject\\BorrowList.txt", ios::in | ios::out|ios::app);
	BorrowList << "借书人:" << this->GetPersonName() << endl;
	BorrowList << "书名:" << book.GetBookName() << endl;
	BorrowList << "作者:" << book.GetWriter() << endl;
	BorrowList << "书籍简介:" << book.GetIntroduction() << endl;
	BorrowList << "出版社:" << book.GetPublishingHouse() << endl;
	BorrowList << "借书数量:" << BorrowNum << endl;
	BorrowList << "借书时间:" << TimeCount << endl;
	BorrowList << "注意:借书请于30日之内归还，超期将罚款" << endl;
	BorrowList.close();

}
void Person::ShowReturnList(Book book, int ReturnNum,time_t BorrowTime)
{
	char borrowtime[100];
	struct tm* Localtime;
	Localtime = localtime(&BorrowTime);
	strftime(borrowtime, 100, "%Y年%m月%d日  %H:%M:%S", Localtime);
	cout << "还书人:" << this->GetPersonName() << endl;
	cout << "书名:" << book.GetBookName() << endl;
	cout << "作者:" << book.GetWriter() << endl;
	cout << "书籍简介:" << book.GetIntroduction() << endl;
	cout << "出版社:" << book.GetPublishingHouse() << endl;
	cout << "还书数量:" << ReturnNum << endl;
	cout << "还书时间:" << TimeCount << endl;
	cout << "借书时间:" << borrowtime << endl;
	if (t - BorrowTime > 2538000)
	{
		cout << "该书已超期！！！需缴纳罚金" << endl;
	}
	fstream ReturnList("D:\\libraryproject\\ReturnList.txt", ios::in | ios::out | ios::app);
	ReturnList << "还书人:" << this->GetPersonName() << endl;
	ReturnList << "书名:" << book.GetBookName() << endl;
	ReturnList << "作者:" << book.GetWriter() << endl;
	ReturnList << "书籍简介:" << book.GetIntroduction() << endl;
	ReturnList << "出版社:" << book.GetPublishingHouse() << endl;
	ReturnList << "还书数量:" << ReturnNum << endl;
	ReturnList << "还书时间:" << TimeCount << endl;
	ReturnList << "借书时间:" << borrowtime << endl;
	if (t - BorrowTime > 2538000)
	{
		cout << "该书已超期！！！需缴纳罚金" << endl;
		ReturnList << "该书已超期！！！需缴纳罚金" << endl;
	}
	ReturnList.close();
}
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


void AddBook()
{
	fstream BookInfo("D:\\libraryproject\\BookInfo.txt", ios::in | ios::out);
	string s1, s2, s3, s4, s5,s6,s7;
	while(getline(BookInfo, s1) && getline(BookInfo, s2) && getline(BookInfo, s3) && getline(BookInfo, s4) && getline(BookInfo, s5)&&getline(BookInfo, s6)&&getline(BookInfo, s7))
	{
		int Bookflag = 0;
		Book book(s1, s2, s3, s4, s5,s6,atoi(s7.c_str()));
		AllBookNum+= atoi(s7.c_str());
		HasBookNum+= atoi(s7.c_str());	
		for (int i = 0; i < BookVector.size(); i++)
		{
			if (BookVector[i].GetBookType() == s1&&BookVector[i].GetBookName() == s2&&BookVector[i].GetWriter() == s3&&BookVector[i].GetPublishingHouse() == s4&&BookVector[i].GetIntroduction() == s5)
			{
				BookVector[i].SetBookNum(atoi(s7.c_str())+ BookVector[i].GetBookNum());
				Bookflag = 1;
			}             //叠加书籍 
		}
		if(Bookflag==0) {
			stringstream tempstr;
		    tempstr<<++SerialNumber;
		    string s=tempstr.str();
			book.SetBookCode(TypeToCode(book.GetBookType()) + PublishingHouseToCode(book.GetPublishingHouse()) + s.c_str());
			BookVector.push_back(book);           //后插入 
		}
		
	}
	BookInfo.close();
}
void FindBook()
 {
	 int FindNum;
	 string name;
	 cout << "                    **************查询方式*************" << endl;
	 cout << "                    **          ①书名查询           **"  << endl;
	 cout << "                    **          ②作者查询           ** " << endl;
	 cout << "                    **          ③出版社查询         ** " << endl;
	 cout << "                    **          ④编码查询           **" << endl;
	 cout << "                    **          ⑤书类查询           **" << endl;
	 cout << "                    **          ⑥查询剩余书籍       **" << endl;
	 cout << "                    **          ⑦返回初始菜单       **" << endl;
	 cout << "                    ***********************************" << endl;
	 cout << "请选择查询方式:";
	 cin >> FindNum;
	 if (cin.fail())
	 {
		 cout << "输入操作错误,请重新输入!!!" << endl;
		 cin.clear(istream::goodbit);
		 cin.ignore(1024, '\n');
	 }
	 else {
		 switch (FindNum) {
		 case 1:FindWithBookName(); break;
		 case 2:FindWithWriter(); break;
		 case 3:FindWithPublishingHouse(); break;
		 case 4:FindWithBookCode(); break;
		 case 5:FindWithBookType(); break;
		 case 6:cout << "图书馆共有书:" << AllBookNum << "本    已借走:" << AllBookNum - HasBookNum << "本" << "  剩余" << HasBookNum << "本" << endl; break;
		 case 7:break;
		 default:cout << "输入操作错误,请重新输入!!!" << endl; FindBook(); break;
		 }
	 }
	
}
void FindWithBookName()
{
	string name;
	int flag = 0;
	cout << "输入书的名字:";
	cin >> name;
	for (int i = 0; i < BookVector.size(); i++)
	{
		if (BookVector[i].GetBookName() == name)
		{
			PrintBookInfo(BookVector[i]);
			flag = 1;
		}
	}
	if (flag == 0)
	{
		cout << "未找到该书" << endl;
		FindBook();
	}
}
void FindWithWriter()
{
	string writer;
	int flag = 0;
	cout << "输入作者的名字:";
	cin >> writer;
	for (int i = 0; i < BookVector.size(); i++)
	{
		if (BookVector[i].GetWriter() == writer)
		{
			PrintBookInfo(BookVector[i]);
			flag = 1;
		}
	}
	if (flag == 0)
	{
		cout << "未找到该书" << endl;
		FindBook();
	}
}
void FindWithBookCode()
{
	string code;
	int flag = 0;
	cout << "输入书的编码:";
	cin >> code;
	for (int i = 0; i < BookVector.size(); i++)
	{
		if (BookVector[i].GetBookCode() == code)
		{
			PrintBookInfo(BookVector[i]);
			flag = 1;
		}
	}
	if (flag == 0) {
		cout << "未找到该书" << endl;
		FindBook();
	}
}
void FindWithPublishingHouse()
{
	int flag = 0;
	string PublishingHouse;
	cout << "输入出版社名字:";
	cin >> PublishingHouse;
	for (int i = 0; i < BookVector.size(); i++)
	{
		if (BookVector[i].GetPublishingHouse() == PublishingHouse)
		{
			PrintBookInfo(BookVector[i]);
			flag = 1;
		}
	}
	if (flag == 0) {
		cout << "未找到该书" << endl;
		FindBook();
	}
}
void FindWithBookType()
{
	int flag = 0;
	string TypeName;
	cout << "输入书类:";
	cin >> TypeName;
	for (int i = 0; i < BookVector.size(); i++)
	{
		if (BookVector[i].GetBookType() == TypeName)
		{
			PrintBookInfo(BookVector[i]);
			flag = 1;
		}
	}
	if (flag == 0) {
		cout << "未找到该书" << endl;
		FindBook();
	}
}
void PrintBookInfo(Book book)
{
	double a = book.GetBookNum();
	double b = book.GetBookBorrowNum();
	double Borrowrates = b / a;
	cout << endl;
	cout << "               ------------------------------------------------" << endl;
	cout << "                             图书种类:" << book.GetBookType() << endl;
	cout << "                             书名:" << book.GetBookName() << endl;
	cout << "                             作者:" << book.GetWriter() << endl;
	cout << "                             出版社:" << book.GetPublishingHouse() << endl;
	cout << "                             简介:" << book.GetIntroduction() << endl;
	cout << "                             购买时间:" << book.GetBuyTime() << endl;
	cout << "                             编码:" << book.GetBookCode() << endl;
	cout << "                             数量:" << book.GetBookNum() << "本" << endl;
	cout << "                             已借出:" << book.GetBookBorrowNum()  << "本" << endl;
	cout << "                             图书借阅率:" << setprecision(2)<<fixed<<Borrowrates*100<<"%"<< endl;
	cout << "               -----------------------------------------------" << endl;
	cout << endl;
}
void PrintPersonInfo(Person person)
{
	cout << "               ------------------------------------------------" << endl;
	cout << "                         职业:" << person.GetPostion() << endl;
	cout << "                         姓名:" << person.GetPersonName() << endl;
	cout << "                         学院:" << person.GetCollege() << endl;
	cout << "                         权限:" << person.GetAuthorization() << "本" << endl;
	cout << "                         已借:" << person.GetPersonBorrowNum() << "本" << endl;
	if (person.GetPostion() == "教师")
		cout << "                         工作证:" << person.GetId() << endl;
	else if (person.GetPostion() == "学生")
		cout << "                         学生证:" << person.GetId() << endl;
	cout << "               ------------------------------------------------" << endl;
}
 string TypeToCode(string s)
{
	if (s == "计算机") return "0001";
	else if (s == "文学") return  "0002";
	else if (s == "教育") return  "0003";
	else if (s == "财经") return  "0004";
	else if (s == "小说") return  "0005";
	else return "XXXX";
}
 string PublishingHouseToCode(string s)
{
	 if (s == "人民文学出版社") return  "01";
	else if (s == "商务印书馆") return  "02";
	else if (s == "科学教育出版社") return  "03";
	else return "XX";
}
 void AddPerson()
{
	fstream PersonInfo("D:\\libraryproject\\PersonInfo.txt", ios::in | ios::out);
	string s1, s2, s3, s4, s5;
	while (getline(PersonInfo, s1) && getline(PersonInfo, s2) && getline(PersonInfo, s3) && getline(PersonInfo, s4) && getline(PersonInfo, s5))
	{
		if (s1 == "教师")
		{
			Teacher teacher(s1, s2, s3,atoi(s4.c_str()), s5);
			PersonVector.push_back(teacher);
		}
		else if (s1 == "学生")
		{
			Student student(s1, s2, s3, atoi(s4.c_str()), s5);
			PersonVector.push_back(student);
		}
	}
	PersonInfo.close();
}
 Person* ChoosePerson()
{
	
	string name;
	cout << "请输入选择的人物姓名:";
	cin >> name;
	for (int i = 0; i < PersonVector.size(); i++)
	{
		if (PersonVector[i].GetPersonName() == name)
		{
			PrintPersonInfo(PersonVector[i]);
			return &PersonVector[i];
		}
	}
		cout << "不存在该人物，添加失败!!!" << endl;
		return NULL;		
}
 void AddDay()
{
	
	t += 86400;
	struct tm* Localtime;
	Localtime = localtime(&t);
	
	strftime(TimeCount, 100, "%Y年%m月%d日  %H:%M:%S", Localtime);
	cout << TimeCount << endl;
}
int main()
{
	int num;
	Person *p=NULL;
	time(&t);
	struct tm* Localtime;
	Localtime = localtime(&t);
	strftime(TimeCount, 100, "%Y年%m月%d日  %H:%M:%S", Localtime);
	/*?①②③④⑤⑥⑦⑧⑨⑩??????????*/
	AddPerson();
	AddBook();
	while (1)
	{
		cout << "       *************************图书馆管理系统*************************" << endl;
		cout << "       **                         ①.退出系统                        **"<< endl;
		cout << "       **                         ②.添加书籍                        **" << endl;
		cout << "       **                         ③.查询书籍                        **" << endl;
		cout << "       **                         ④.选择人物                        **" << endl;
		cout << "       **                         ⑤.借阅书籍                        **" << endl;
		cout << "       **                         ⑥.归还书籍                        **" << endl;
		cout << "       **                         ⑦.查询人物信息                    **" << endl;
		cout << "       **                         ⑧.时间加一天                      **" << endl;
		cout << "       ****************************************************************" <<endl;
		cout << "输入您要进行的操作:";
			cin >> num;
			if (cin.fail())
			{
				cout << "输入操作错误,请重新输入!!!" << endl;
				cin.clear(istream::goodbit);
				cin.ignore(1024, '\n');
			}
			else {
				switch (num) {
				case 1:exit(0); break;
				case 2:AddBook(); break;
				case 3:FindBook(); break;
				case 4:p = ChoosePerson(); break;
				case 5:if (p)p->BorrowBook(); else cout << "未选择人物，无法借书" << endl; break;
				case 6: if (p)p->ReturnBook(); else cout << "未选择人物，无法还书" << endl; break;
				case 7:if (p)PrintPersonInfo(*p);else cout << "未选择人物，无法输出信息" << endl; break;
				case 8:AddDay(); break;
				default:cout << "输入操作错误,请重新输入!!!" << endl; break;
				}
		    }
	}
		
	system("pause");
	return 0;
}
