/********************************************************************************
** Form generated from reading UI file 'borrowbookwin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROWBOOKWIN_H
#define UI_BORROWBOOKWIN_H

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

class Ui_BorrowBookWin
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *BorrowBookWin)
    {
        if (BorrowBookWin->objectName().isEmpty())
            BorrowBookWin->setObjectName(QStringLiteral("BorrowBookWin"));
        BorrowBookWin->resize(395, 292);
        label = new QLabel(BorrowBookWin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 100, 72, 15));
        label_2 = new QLabel(BorrowBookWin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 150, 72, 15));
        lineEdit = new QLineEdit(BorrowBookWin);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 100, 113, 21));
        lineEdit->setStyleSheet(QLatin1String("border-radius:5px;\n"
"\n"
"border:1 solid black;\n"
""));
        lineEdit_2 = new QLineEdit(BorrowBookWin);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 150, 113, 21));
        lineEdit_2->setStyleSheet(QLatin1String("border-radius:5px;\n"
"\n"
"border:1 solid black;\n"
""));
        pushButton = new QPushButton(BorrowBookWin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 220, 93, 28));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:5px;\n"
"width:71px;\n"
" height:22px;"));

        retranslateUi(BorrowBookWin);

        QMetaObject::connectSlotsByName(BorrowBookWin);
    } // setupUi

    void retranslateUi(QDialog *BorrowBookWin)
    {
        BorrowBookWin->setWindowTitle(QApplication::translate("BorrowBookWin", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("BorrowBookWin", "\344\271\246\345\220\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("BorrowBookWin", "\345\200\237\344\271\246\346\225\260\351\207\217", Q_NULLPTR));
        pushButton->setText(QApplication::translate("BorrowBookWin", "\345\200\237\351\230\205", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BorrowBookWin: public Ui_BorrowBookWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWBOOKWIN_H
