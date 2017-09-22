/********************************************************************************
** Form generated from reading UI file 'changepassword.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORD_H
#define UI_CHANGEPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ChangePassWord
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_5;

    void setupUi(QDialog *ChangePassWord)
    {
        if (ChangePassWord->objectName().isEmpty())
            ChangePassWord->setObjectName(QStringLiteral("ChangePassWord"));
        ChangePassWord->resize(381, 379);
        label = new QLabel(ChangePassWord);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 80, 72, 15));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(ChangePassWord);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 120, 72, 15));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_3 = new QLabel(ChangePassWord);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 170, 72, 15));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_4 = new QLabel(ChangePassWord);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 220, 121, 20));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit = new QLineEdit(ChangePassWord);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(180, 70, 113, 21));
        lineEdit->setStyleSheet(QLatin1String("border-radius:5px;\n"
"\n"
"border:1 solid black;\n"
"height:20px;"));
        lineEdit_2 = new QLineEdit(ChangePassWord);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(180, 120, 113, 21));
        lineEdit_2->setStyleSheet(QLatin1String("border-radius:5px;\n"
"\n"
"border:1 solid black;\n"
"height:20px;"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_3 = new QLineEdit(ChangePassWord);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(180, 170, 113, 21));
        lineEdit_3->setStyleSheet(QLatin1String("border-radius:5px;\n"
"\n"
"border:1 solid black;\n"
"height:20px;"));
        lineEdit_3->setEchoMode(QLineEdit::Password);
        lineEdit_4 = new QLineEdit(ChangePassWord);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(180, 220, 113, 21));
        lineEdit_4->setStyleSheet(QLatin1String("border-radius:5px;\n"
"\n"
"border:1 solid black;\n"
"height:20px;"));
        lineEdit_4->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(ChangePassWord);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 290, 101, 31));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:5px;\n"
"width:130px;\n"
" height:70px;"));
        pushButton_2 = new QPushButton(ChangePassWord);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 290, 91, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:5px;\n"
"width:130px;\n"
" height:70px;"));
        label_5 = new QLabel(ChangePassWord);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(120, 10, 171, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_5->setFont(font1);
        label_5->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        retranslateUi(ChangePassWord);

        QMetaObject::connectSlotsByName(ChangePassWord);
    } // setupUi

    void retranslateUi(QDialog *ChangePassWord)
    {
        ChangePassWord->setWindowTitle(QApplication::translate("ChangePassWord", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ChangePassWord", "\350\264\246\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("ChangePassWord", "\345\216\237\345\257\206\347\240\201", Q_NULLPTR));
        label_3->setText(QApplication::translate("ChangePassWord", "\346\226\260\345\257\206\347\240\201", Q_NULLPTR));
        label_4->setText(QApplication::translate("ChangePassWord", "\347\241\256\350\256\244\346\226\260\345\257\206\347\240\201", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ChangePassWord", "\347\241\256\350\256\244", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ChangePassWord", "\351\200\200\345\207\272", Q_NULLPTR));
        label_5->setText(QApplication::translate("ChangePassWord", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChangePassWord: public Ui_ChangePassWord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORD_H
