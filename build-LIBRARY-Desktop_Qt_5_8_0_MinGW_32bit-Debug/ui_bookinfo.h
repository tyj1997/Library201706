/********************************************************************************
** Form generated from reading UI file 'bookinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKINFO_H
#define UI_BOOKINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_BookInfo
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QTextEdit *textEdit;

    void setupUi(QDialog *BookInfo)
    {
        if (BookInfo->objectName().isEmpty())
            BookInfo->setObjectName(QStringLiteral("BookInfo"));
        BookInfo->resize(1164, 758);
        BookInfo->setStyleSheet(QStringLiteral(""));
        label = new QLabel(BookInfo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(500, 50, 221, 21));
        label->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_2 = new QLabel(BookInfo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(500, 100, 221, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_3 = new QLabel(BookInfo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(500, 200, 221, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_4 = new QLabel(BookInfo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(500, 150, 251, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_5 = new QLabel(BookInfo);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(500, 250, 201, 21));
        label_5->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        label_6 = new QLabel(BookInfo);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(500, 300, 271, 21));
        label_6->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_7 = new QLabel(BookInfo);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 30, 301, 391));
        label_8 = new QLabel(BookInfo);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(190, 450, 101, 31));
        label_8->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        textEdit = new QTextEdit(BookInfo);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(110, 510, 251, 141));

        retranslateUi(BookInfo);

        QMetaObject::connectSlotsByName(BookInfo);
    } // setupUi

    void retranslateUi(QDialog *BookInfo)
    {
        BookInfo->setWindowTitle(QApplication::translate("BookInfo", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("BookInfo", "fff", Q_NULLPTR));
        label_2->setText(QApplication::translate("BookInfo", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("BookInfo", "TextLabel", Q_NULLPTR));
        label_4->setText(QApplication::translate("BookInfo", "TextLabel", Q_NULLPTR));
        label_5->setText(QApplication::translate("BookInfo", "TextLabel", Q_NULLPTR));
        label_6->setText(QApplication::translate("BookInfo", "TextLabel", Q_NULLPTR));
        label_7->setText(QString());
        label_8->setText(QApplication::translate("BookInfo", "\344\271\246\347\261\215\347\256\200\344\273\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BookInfo: public Ui_BookInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKINFO_H
