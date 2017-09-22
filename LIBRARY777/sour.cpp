#ifdef SOUR
#define SOUR
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
#include "source.h"
#include <QMessageBox>
#include <QString>
//void FindBook()
// {
//     int FindNum;
//     Qstring name;
//     cout << "                    **************查询方式*************" << endl;
//     cout << "                    **          ①书名查询           **"  << endl;
//     cout << "                    **          ②作者查询           ** " << endl;
//     cout << "                    **          ③出版社查询         ** " << endl;
//     cout << "                    **          ④编码查询           **" << endl;
//     cout << "                    **          ⑤书类查询           **" << endl;
//     cout << "                    **          ⑥查询剩余书籍       **" << endl;
//     cout << "                    **          ⑦返回初始菜单       **" << endl;
//     cout << "                    ***********************************" << endl;
//     cout << "请选择查询方式:";
//     cin >> FindNum;
//     if (cin.fail())
//     {
//         cout << "输入操作错误,请重新输入!!!" << endl;
//         cin.clear(istream::goodbit);
//         cin.ignore(1024, '\n');
//     }
//     else {
//         switch (FindNum) {
//       //  case 1:FindWithBookName(); break;
//         case 2:FindWithWriter(); break;
//         case 3:FindWithPublishingHouse(); break;
//         case 4:FindWithBookCode(); break;
//         case 5:FindWithBookType(); break;
//         case 6:cout << "图书馆共有书:" << AllBookNum << "本    已借走:" << AllBookNum - HasBookNum << "本" << "  剩余" << HasBookNum << "本" << endl; break;
//         case 7:break;
//         default:cout << "输入操作错误,请重新输入!!!" << endl; FindBook(); break;
//         }
//     }

//}

//void FindWithWriter()
//{
//    Qstring writer;
//    int flag = 0;
//    cout << "输入作者的名字:";
//    cin >> writer;
//    for (int i = 0; i < BookVector.size(); i++)
//    {
//        if (BookVector[i].GetWriter() == writer)
//        {
//            PrintBookInfo(BookVector[i]);
//            flag = 1;
//        }
//    }
//    if (flag == 0)
//    {
//        cout << "未找到该书" << endl;
//        FindBook();
//    }
//}
//void FindWithBookCode()
//{
//    Qstring code;
//    int flag = 0;
//    cout << "输入书的编码:";
//    cin >> code;
//    for (int i = 0; i < BookVector.size(); i++)
//    {
//        if (BookVector[i].GetBookCode() == code)
//        {
//            PrintBookInfo(BookVector[i]);
//            flag = 1;
//        }
//    }
//    if (flag == 0) {
//        cout << "未找到该书" << endl;
//        FindBook();
//    }
//}
//void FindWithPublishingHouse()
//{
//    int flag = 0;
//    Qstring PublishingHouse;
//    cout << "输入出版社名字:";
//    cin >> PublishingHouse;
//    for (int i = 0; i < BookVector.size(); i++)
//    {
//        if (BookVector[i].GetPublishingHouse() == PublishingHouse)
//        {
//            PrintBookInfo(BookVector[i]);
//            flag = 1;
//        }
//    }
//    if (flag == 0) {
//        cout << "未找到该书" << endl;
//        FindBook();
//    }
//}
//void FindWithBookType()
//{
//    int flag = 0;
//    Qstring TypeName;
//    cout << "输入书类:";
//    cin >> TypeName;
//    for (int i = 0; i < BookVector.size(); i++)
//    {
//        if (BookVector[i].GetBookType() == TypeName)
//        {
//            PrintBookInfo(BookVector[i]);
//            flag = 1;
//        }
//    }
//    if (flag == 0) {
//        cout << "未找到该书" << endl;
//        FindBook();
//    }
//}




// void AddDay()
// {

//     t += 86400;
//     struct tm* Localtime;
//     Localtime = localtime(&t);

//     strftime(TimeCount, 100, "%Y年%m月%d日  %H:%M:%S", Localtime);
//     cout << TimeCount << endl;
// }
#endif
