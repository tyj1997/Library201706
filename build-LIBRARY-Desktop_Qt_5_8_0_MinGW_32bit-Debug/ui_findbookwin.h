/********************************************************************************
** Form generated from reading UI file 'findbookwin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDBOOKWIN_H
#define UI_FINDBOOKWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_FindBookWin
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_5;
    QTableWidget *tableWidget;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLabel *label_6;

    void setupUi(QDialog *FindBookWin)
    {
        if (FindBookWin->objectName().isEmpty())
            FindBookWin->setObjectName(QStringLiteral("FindBookWin"));
        FindBookWin->resize(1768, 943);
        lineEdit = new QLineEdit(FindBookWin);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 40, 251, 31));
        lineEdit->setStyleSheet(QLatin1String("border-radius:5px;\n"
"border:1 solid black;\n"
"height:30px;\n"
"font: 75 12pt \"Microsoft JhengHei\";"));
        pushButton = new QPushButton(FindBookWin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(410, 40, 93, 28));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:5px;\n"
"width:130px;\n"
" height:70px;"));
        label = new QLabel(FindBookWin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 50, 72, 15));
        label_2 = new QLabel(FindBookWin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 100, 72, 15));
        label_3 = new QLabel(FindBookWin);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 150, 91, 16));
        lineEdit_2 = new QLineEdit(FindBookWin);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 90, 251, 31));
        lineEdit_2->setStyleSheet(QLatin1String("border-radius:5px;\n"
"\n"
"border:1 solid black;\n"
"height:20px;"));
        lineEdit_3 = new QLineEdit(FindBookWin);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(120, 140, 251, 31));
        lineEdit_3->setStyleSheet(QLatin1String("border-radius:5px;\n"
"\n"
"border:1 solid black;\n"
"height:20px;"));
        pushButton_2 = new QPushButton(FindBookWin);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(410, 270, 93, 28));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:5px;\n"
""));
        pushButton_3 = new QPushButton(FindBookWin);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(410, 90, 93, 28));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:5px;\n"
"width:130px;\n"
" height:70px;"));
        pushButton_4 = new QPushButton(FindBookWin);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(410, 210, 93, 28));
        pushButton_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:5px;\n"
"width:130px;\n"
" height:70px;"));
        label_4 = new QLabel(FindBookWin);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 210, 72, 15));
        lineEdit_4 = new QLineEdit(FindBookWin);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(120, 200, 251, 31));
        lineEdit_4->setStyleSheet(QLatin1String("border-radius:5px;\n"
"\n"
"border:1 solid black;\n"
"height:20px;"));
        label_5 = new QLabel(FindBookWin);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 270, 72, 15));
        lineEdit_5 = new QLineEdit(FindBookWin);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(120, 260, 251, 31));
        lineEdit_5->setStyleSheet(QLatin1String("border-radius:5px;\n"
"\n"
"border:1 solid black;\n"
"height:20px;"));
        pushButton_5 = new QPushButton(FindBookWin);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(410, 150, 93, 28));
        pushButton_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:5px;\n"
"width:130px;\n"
" height:70px;"));
        tableWidget = new QTableWidget(FindBookWin);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(560, 70, 1161, 821));
        tableWidget->setStyleSheet(QStringLiteral(""));
        pushButton_6 = new QPushButton(FindBookWin);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(340, 560, 141, 81));
        pushButton_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:5px;\n"
""));
        pushButton_7 = new QPushButton(FindBookWin);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(60, 560, 161, 81));
        pushButton_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:5px;\n"
""));
        pushButton_8 = new QPushButton(FindBookWin);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(180, 380, 151, 61));
        pushButton_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:5px;\n"
"width:130px;\n"
" height:70px;"));
        label_6 = new QLabel(FindBookWin);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(570, 30, 551, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 25 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";"));

        retranslateUi(FindBookWin);

        QMetaObject::connectSlotsByName(FindBookWin);
    } // setupUi

    void retranslateUi(QDialog *FindBookWin)
    {
        FindBookWin->setWindowTitle(QApplication::translate("FindBookWin", "Dialog", Q_NULLPTR));
        lineEdit->setText(QString());
        pushButton->setText(QApplication::translate("FindBookWin", "\346\237\245\350\257\242", Q_NULLPTR));
        label->setText(QApplication::translate("FindBookWin", "\344\271\246\345\220\215\346\237\245\346\211\276", Q_NULLPTR));
        label_2->setText(QApplication::translate("FindBookWin", "\344\275\234\350\200\205\346\237\245\346\211\276", Q_NULLPTR));
        label_3->setText(QApplication::translate("FindBookWin", "\345\207\272\347\211\210\347\244\276\346\237\245\346\211\276", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("FindBookWin", "\346\237\245\350\257\242", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("FindBookWin", "\346\237\245\350\257\242", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("FindBookWin", "\346\237\245\350\257\242", Q_NULLPTR));
        label_4->setText(QApplication::translate("FindBookWin", "\347\247\215\347\261\273\346\237\245\346\211\276", Q_NULLPTR));
        label_5->setText(QApplication::translate("FindBookWin", "\347\274\226\347\240\201\346\237\245\346\211\276", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("FindBookWin", "\346\237\245\350\257\242", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("FindBookWin", "\351\242\204\347\272\246\344\271\246\347\261\215", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("FindBookWin", "\345\200\237\351\230\205", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("FindBookWin", "\347\273\274\345\220\210\346\237\245\350\257\242", Q_NULLPTR));
        label_6->setText(QApplication::translate("FindBookWin", "* \345\217\214\345\207\273\344\271\246\347\261\215\346\237\245\347\234\213\350\257\246\347\273\206\344\277\241\346\201\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FindBookWin: public Ui_FindBookWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDBOOKWIN_H
