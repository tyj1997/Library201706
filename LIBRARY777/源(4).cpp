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
void Person::BorrowBook()
{
	string BookName;
	int BorrowNum,i;
	cout << "���������:";
	cin >> BookName;
		cout << "ѡ���������:";
		cin >> BorrowNum;
		for (i = 0; i < BookVector.size(); i++)
		{
			if (BookVector[i].GetBookName() == BookName)
				break;
		}
		if (i != BookVector.size())
		{
			if (BorrowNum > (BookVector[i].GetBookNum()- BookVector[i].GetBookBorrowNum()))
				cout << "�����������㣬�޷�����!!!" << endl;
			else if (this->GetAuthorization() < BorrowNum)
				cout << "Ȩ�޲��㣬�޷�����!!!" << endl;
			else {
				cout << "����ɹ�!!!" << endl;
				HasBookNum -= BorrowNum;
				cout << HasBookNum << endl;
				BookVector[i].SetBookBorrowNum(BookVector[i].GetBookBorrowNum()+BorrowNum);
				this->SetAuthorization(this->GetAuthorization() - BorrowNum);
				this->SetPersonBorrowNum(this->GetPersonBorrowNum() + BorrowNum);
				BookVector[i].SetBookBorrowByone(BorrowNum);
				for (int k = 0; k < PersonVector.size(); k++)
					if (PersonVector[k].GetPersonName() == this->GetPersonName())
						PersonVector[k] = *this;	
				this->PersonBorrowInfoMap.insert(pair<time_t, Book>(t,BookVector[i]));             //������˽�����Ϣ
				this->ShowBorrowList(BookVector[i], BorrowNum);
			}
		}
		else cout << "�����ڸ���" << endl;
}
void Person::ReturnBook()
{
	string name;
	int i;
	int ReturnNum, Returnflag = 0;
	cout << "���뻹������:";
	cin >> name;
	cout << "���뻹������:";
		cin >> ReturnNum;
	map<time_t, Book> ::iterator multitr;
	for (multitr =this->PersonBorrowInfoMap.begin(); multitr != this->PersonBorrowInfoMap.end(); multitr++)
	{
		    if (multitr->second.GetBookName() == name)
		    {
		    	//    cout<<"����ǰ"<<multitr->second.GetBookBorrowByone()<<endl;
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
				//    cout<<"�����"<<multitr->second.GetBookBorrowByone()<<endl;
				    this->ShowReturnList(BookVector[i],ReturnNum, multitr->first);
				    HasBookNum+=ReturnNum;
			    }
			else
			    cout<<"��û�н���ô���飬��ȷ�ϻ�����Ŀ"<<endl;
			return;
			}
	}
	cout<<"�����ڸ��飬��������"<<endl; 
}
void Person::ShowBorrowList(Book book,int BorrowNum) {
	cout << "������:" << this->GetPersonName()<<endl;
	cout << "����:" << book.GetBookName() << endl;
	cout << "����:" << book.GetWriter() << endl;
	cout << "�鼮���:" << book.GetIntroduction()<<endl;
	cout << "������:" << book.GetPublishingHouse()<<endl;
	cout << "��������:" << BorrowNum << endl;
	cout << "����ʱ��:" << TimeCount << endl;
	cout << "ע��:��������30��֮�ڹ黹�����ڽ�����" << endl;                         //ֱ�Ӽ��㻹������ 
	fstream BorrowList("D:\\libraryproject\\BorrowList.txt", ios::in | ios::out|ios::app);
	BorrowList << "������:" << this->GetPersonName() << endl;
	BorrowList << "����:" << book.GetBookName() << endl;
	BorrowList << "����:" << book.GetWriter() << endl;
	BorrowList << "�鼮���:" << book.GetIntroduction() << endl;
	BorrowList << "������:" << book.GetPublishingHouse() << endl;
	BorrowList << "��������:" << BorrowNum << endl;
	BorrowList << "����ʱ��:" << TimeCount << endl;
	BorrowList << "ע��:��������30��֮�ڹ黹�����ڽ�����" << endl;
	BorrowList.close();

}
void Person::ShowReturnList(Book book, int ReturnNum,time_t BorrowTime)
{
	char borrowtime[100];
	struct tm* Localtime;
	Localtime = localtime(&BorrowTime);
	strftime(borrowtime, 100, "%Y��%m��%d��  %H:%M:%S", Localtime);
	cout << "������:" << this->GetPersonName() << endl;
	cout << "����:" << book.GetBookName() << endl;
	cout << "����:" << book.GetWriter() << endl;
	cout << "�鼮���:" << book.GetIntroduction() << endl;
	cout << "������:" << book.GetPublishingHouse() << endl;
	cout << "��������:" << ReturnNum << endl;
	cout << "����ʱ��:" << TimeCount << endl;
	cout << "����ʱ��:" << borrowtime << endl;
	if (t - BorrowTime > 2538000)
	{
		cout << "�����ѳ��ڣ���������ɷ���" << endl;
	}
	fstream ReturnList("D:\\libraryproject\\ReturnList.txt", ios::in | ios::out | ios::app);
	ReturnList << "������:" << this->GetPersonName() << endl;
	ReturnList << "����:" << book.GetBookName() << endl;
	ReturnList << "����:" << book.GetWriter() << endl;
	ReturnList << "�鼮���:" << book.GetIntroduction() << endl;
	ReturnList << "������:" << book.GetPublishingHouse() << endl;
	ReturnList << "��������:" << ReturnNum << endl;
	ReturnList << "����ʱ��:" << TimeCount << endl;
	ReturnList << "����ʱ��:" << borrowtime << endl;
	if (t - BorrowTime > 2538000)
	{
		cout << "�����ѳ��ڣ���������ɷ���" << endl;
		ReturnList << "�����ѳ��ڣ���������ɷ���" << endl;
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
			}             //�����鼮 
		}
		if(Bookflag==0) {
			stringstream tempstr;
		    tempstr<<++SerialNumber;
		    string s=tempstr.str();
			book.SetBookCode(TypeToCode(book.GetBookType()) + PublishingHouseToCode(book.GetPublishingHouse()) + s.c_str());
			BookVector.push_back(book);           //����� 
		}
		
	}
	BookInfo.close();
}
void FindBook()
 {
	 int FindNum;
	 string name;
	 cout << "                    **************��ѯ��ʽ*************" << endl;
	 cout << "                    **          ��������ѯ           **"  << endl;
	 cout << "                    **          �����߲�ѯ           ** " << endl;
	 cout << "                    **          �۳������ѯ         ** " << endl;
	 cout << "                    **          �ܱ����ѯ           **" << endl;
	 cout << "                    **          �������ѯ           **" << endl;
	 cout << "                    **          �޲�ѯʣ���鼮       **" << endl;
	 cout << "                    **          �߷��س�ʼ�˵�       **" << endl;
	 cout << "                    ***********************************" << endl;
	 cout << "��ѡ���ѯ��ʽ:";
	 cin >> FindNum;
	 if (cin.fail())
	 {
		 cout << "�����������,����������!!!" << endl;
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
		 case 6:cout << "ͼ��ݹ�����:" << AllBookNum << "��    �ѽ���:" << AllBookNum - HasBookNum << "��" << "  ʣ��" << HasBookNum << "��" << endl; break;
		 case 7:break;
		 default:cout << "�����������,����������!!!" << endl; FindBook(); break;
		 }
	 }
	
}
void FindWithBookName()
{
	string name;
	int flag = 0;
	cout << "�����������:";
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
		cout << "δ�ҵ�����" << endl;
		FindBook();
	}
}
void FindWithWriter()
{
	string writer;
	int flag = 0;
	cout << "�������ߵ�����:";
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
		cout << "δ�ҵ�����" << endl;
		FindBook();
	}
}
void FindWithBookCode()
{
	string code;
	int flag = 0;
	cout << "������ı���:";
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
		cout << "δ�ҵ�����" << endl;
		FindBook();
	}
}
void FindWithPublishingHouse()
{
	int flag = 0;
	string PublishingHouse;
	cout << "�������������:";
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
		cout << "δ�ҵ�����" << endl;
		FindBook();
	}
}
void FindWithBookType()
{
	int flag = 0;
	string TypeName;
	cout << "��������:";
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
		cout << "δ�ҵ�����" << endl;
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
	cout << "                             ͼ������:" << book.GetBookType() << endl;
	cout << "                             ����:" << book.GetBookName() << endl;
	cout << "                             ����:" << book.GetWriter() << endl;
	cout << "                             ������:" << book.GetPublishingHouse() << endl;
	cout << "                             ���:" << book.GetIntroduction() << endl;
	cout << "                             ����ʱ��:" << book.GetBuyTime() << endl;
	cout << "                             ����:" << book.GetBookCode() << endl;
	cout << "                             ����:" << book.GetBookNum() << "��" << endl;
	cout << "                             �ѽ��:" << book.GetBookBorrowNum()  << "��" << endl;
	cout << "                             ͼ�������:" << setprecision(2)<<fixed<<Borrowrates*100<<"%"<< endl;
	cout << "               -----------------------------------------------" << endl;
	cout << endl;
}
void PrintPersonInfo(Person person)
{
	cout << "               ------------------------------------------------" << endl;
	cout << "                         ְҵ:" << person.GetPostion() << endl;
	cout << "                         ����:" << person.GetPersonName() << endl;
	cout << "                         ѧԺ:" << person.GetCollege() << endl;
	cout << "                         Ȩ��:" << person.GetAuthorization() << "��" << endl;
	cout << "                         �ѽ�:" << person.GetPersonBorrowNum() << "��" << endl;
	if (person.GetPostion() == "��ʦ")
		cout << "                         ����֤:" << person.GetId() << endl;
	else if (person.GetPostion() == "ѧ��")
		cout << "                         ѧ��֤:" << person.GetId() << endl;
	cout << "               ------------------------------------------------" << endl;
}
 string TypeToCode(string s)
{
	if (s == "�����") return "0001";
	else if (s == "��ѧ") return  "0002";
	else if (s == "����") return  "0003";
	else if (s == "�ƾ�") return  "0004";
	else if (s == "С˵") return  "0005";
	else return "XXXX";
}
 string PublishingHouseToCode(string s)
{
	 if (s == "������ѧ������") return  "01";
	else if (s == "����ӡ���") return  "02";
	else if (s == "��ѧ����������") return  "03";
	else return "XX";
}
 void AddPerson()
{
	fstream PersonInfo("D:\\libraryproject\\PersonInfo.txt", ios::in | ios::out);
	string s1, s2, s3, s4, s5;
	while (getline(PersonInfo, s1) && getline(PersonInfo, s2) && getline(PersonInfo, s3) && getline(PersonInfo, s4) && getline(PersonInfo, s5))
	{
		if (s1 == "��ʦ")
		{
			Teacher teacher(s1, s2, s3,atoi(s4.c_str()), s5);
			PersonVector.push_back(teacher);
		}
		else if (s1 == "ѧ��")
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
	cout << "������ѡ�����������:";
	cin >> name;
	for (int i = 0; i < PersonVector.size(); i++)
	{
		if (PersonVector[i].GetPersonName() == name)
		{
			PrintPersonInfo(PersonVector[i]);
			return &PersonVector[i];
		}
	}
		cout << "�����ڸ�������ʧ��!!!" << endl;
		return NULL;		
}
 void AddDay()
{
	
	t += 86400;
	struct tm* Localtime;
	Localtime = localtime(&t);
	
	strftime(TimeCount, 100, "%Y��%m��%d��  %H:%M:%S", Localtime);
	cout << TimeCount << endl;
}
int main()
{
	int num;
	Person *p=NULL;
	time(&t);
	struct tm* Localtime;
	Localtime = localtime(&t);
	strftime(TimeCount, 100, "%Y��%m��%d��  %H:%M:%S", Localtime);
	/*?�٢ڢۢܢݢޢߢ���??????????*/
	AddPerson();
	AddBook();
	while (1)
	{
		cout << "       *************************ͼ��ݹ���ϵͳ*************************" << endl;
		cout << "       **                         ��.�˳�ϵͳ                        **"<< endl;
		cout << "       **                         ��.����鼮                        **" << endl;
		cout << "       **                         ��.��ѯ�鼮                        **" << endl;
		cout << "       **                         ��.ѡ������                        **" << endl;
		cout << "       **                         ��.�����鼮                        **" << endl;
		cout << "       **                         ��.�黹�鼮                        **" << endl;
		cout << "       **                         ��.��ѯ������Ϣ                    **" << endl;
		cout << "       **                         ��.ʱ���һ��                      **" << endl;
		cout << "       ****************************************************************" <<endl;
		cout << "������Ҫ���еĲ���:";
			cin >> num;
			if (cin.fail())
			{
				cout << "�����������,����������!!!" << endl;
				cin.clear(istream::goodbit);
				cin.ignore(1024, '\n');
			}
			else {
				switch (num) {
				case 1:exit(0); break;
				case 2:AddBook(); break;
				case 3:FindBook(); break;
				case 4:p = ChoosePerson(); break;
				case 5:if (p)p->BorrowBook(); else cout << "δѡ������޷�����" << endl; break;
				case 6: if (p)p->ReturnBook(); else cout << "δѡ������޷�����" << endl; break;
				case 7:if (p)PrintPersonInfo(*p);else cout << "δѡ������޷������Ϣ" << endl; break;
				case 8:AddDay(); break;
				default:cout << "�����������,����������!!!" << endl; break;
				}
		    }
	}
		
	system("pause");
	return 0;
}
