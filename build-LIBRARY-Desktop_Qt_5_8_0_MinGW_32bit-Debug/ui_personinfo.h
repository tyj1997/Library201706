/********************************************************************************
** Form generated from reading UI file 'personinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONINFO_H
#define UI_PERSONINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_PersonInfo
{
public:
    QTableWidget *tableWidget;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *PersonInfo)
    {
        if (PersonInfo->objectName().isEmpty())
            PersonInfo->setObjectName(QStringLiteral("PersonInfo"));
        PersonInfo->resize(1273, 745);
        tableWidget = new QTableWidget(PersonInfo);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(80, 220, 1081, 321));
        tableWidget->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border:1px solid black;\n"
"border-radius:10px;"));
        label_4 = new QLabel(PersonInfo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(790, 90, 211, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label = new QLabel(PersonInfo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(470, 100, 201, 51));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_2 = new QLabel(PersonInfo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(790, 10, 201, 91));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_6 = new QLabel(PersonInfo);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(480, 10, 201, 81));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_5 = new QLabel(PersonInfo);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(200, 90, 171, 71));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_3 = new QLabel(PersonInfo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(200, 20, 161, 71));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_7 = new QLabel(PersonInfo);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(200, 170, 211, 41));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton = new QPushButton(PersonInfo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(890, 600, 181, 71));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:5px;\n"
"width:130px;\n"
" height:70px;"));
        pushButton_2 = new QPushButton(PersonInfo);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 600, 191, 71));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:5px;\n"
"width:130px;\n"
" height:70px;"));

        retranslateUi(PersonInfo);

        QMetaObject::connectSlotsByName(PersonInfo);
    } // setupUi

    void retranslateUi(QDialog *PersonInfo)
    {
        PersonInfo->setWindowTitle(QApplication::translate("PersonInfo", "Dialog", Q_NULLPTR));
        label_4->setText(QApplication::translate("PersonInfo", "TextLabel", Q_NULLPTR));
        label->setText(QApplication::translate("PersonInfo", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("PersonInfo", "TextLabel", Q_NULLPTR));
        label_6->setText(QApplication::translate("PersonInfo", "TextLabel", Q_NULLPTR));
        label_5->setText(QApplication::translate("PersonInfo", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("PersonInfo", "TextLabel", Q_NULLPTR));
        label_7->setText(QApplication::translate("PersonInfo", "TextLabel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("PersonInfo", "\347\273\255\345\200\237", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("PersonInfo", "\350\277\230\344\271\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PersonInfo: public Ui_PersonInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONINFO_H
