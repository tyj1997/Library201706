/********************************************************************************
** Form generated from reading UI file 'recharge.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECHARGE_H
#define UI_RECHARGE_H

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

class Ui_Recharge
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Recharge)
    {
        if (Recharge->objectName().isEmpty())
            Recharge->setObjectName(QStringLiteral("Recharge"));
        Recharge->resize(451, 380);
        label = new QLabel(Recharge);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 130, 72, 15));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(Recharge);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 170, 72, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_3 = new QLabel(Recharge);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 220, 72, 21));
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit = new QLineEdit(Recharge);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(190, 120, 113, 21));
        lineEdit->setStyleSheet(QLatin1String("border-radius:5px;\n"
"\n"
"border:1 solid black;\n"
"height:20px;"));
        lineEdit_2 = new QLineEdit(Recharge);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(190, 170, 113, 21));
        lineEdit_2->setStyleSheet(QLatin1String("border-radius:5px;\n"
"\n"
"border:1 solid black;\n"
"height:20px;"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_3 = new QLineEdit(Recharge);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(190, 220, 113, 21));
        lineEdit_3->setStyleSheet(QLatin1String("border-radius:5px;\n"
"\n"
"border:1 solid black;\n"
"height:20px;"));
        label_4 = new QLabel(Recharge);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(130, 30, 171, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        label_4->setFont(font2);
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(Recharge);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 280, 93, 28));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:5px;\n"
"width:130px;\n"
" height:70px;"));
        pushButton_2 = new QPushButton(Recharge);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 280, 93, 28));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:5px;\n"
"width:130px;\n"
" height:70px;"));

        retranslateUi(Recharge);

        QMetaObject::connectSlotsByName(Recharge);
    } // setupUi

    void retranslateUi(QDialog *Recharge)
    {
        Recharge->setWindowTitle(QApplication::translate("Recharge", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Recharge", "\350\264\246\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("Recharge", "\345\257\206\347\240\201", Q_NULLPTR));
        label_3->setText(QApplication::translate("Recharge", "\345\205\205\345\200\274\351\207\221\351\242\235", Q_NULLPTR));
        label_4->setText(QApplication::translate("Recharge", "\345\205\205\345\200\274\344\270\255\345\277\203", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Recharge", "\347\241\256\345\256\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Recharge", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Recharge: public Ui_Recharge {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECHARGE_H
