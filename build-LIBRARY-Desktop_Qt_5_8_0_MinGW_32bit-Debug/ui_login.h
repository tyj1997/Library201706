/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit_2;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(491, 313);
        Login->setStyleSheet(QLatin1String("border-bottom-radius:5px;\n"
"\n"
""));
        label_3 = new QLabel(Login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(-20, 0, 531, 161));
        layoutWidget = new QWidget(Login);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 170, 52, 71));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"\n"
""));

        verticalLayout_2->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"\n"
""));

        verticalLayout_2->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        layoutWidget1 = new QWidget(Login);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(111, 172, 252, 65));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setStyleSheet(QLatin1String("border-top-right-radius:5px;\n"
"border-top-left-radius:5px;\n"
"border:1 solid #BDC0BA;\n"
"height:20px;"));

        verticalLayout->addWidget(lineEdit);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        lineEdit_2 = new QLineEdit(layoutWidget1);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setStyleSheet(QLatin1String("border-bottom-right-radius:5px;\n"
"border-bottom-left-radius:5px;\n"
"border:1 solid #BDC0BA;\n"
"height:20px;"));
        lineEdit_2->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEdit_2);

        layoutWidget2 = new QWidget(Login);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(110, 260, 252, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:5px;\n"
"width:71px;\n"
" height:22px;"));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(layoutWidget2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:5px;\n"
"width:71px;\n"
" height:22px;"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(Login);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(370, 170, 75, 23));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:5px;\n"
"width:71px;\n"
" height:22px;"));
        pushButton_5 = new QPushButton(Login);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(370, 220, 75, 23));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:5px;\n"
"width:71px;\n"
" height:22px;"));

        retranslateUi(Login);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Login, SLOT(close()));

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("Login", "<html><head/><body><p align=\"center\"><img src=\":/new/prefix1/images/loginimage.png\" width=\"511\" height=\"161\"/></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:10pt;\">\350\264\246\345\217\267</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("Login", "\345\257\206\347\240\201", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Login", "\347\231\273\351\231\206", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Login", "\351\200\200\345\207\272", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Login", "\346\263\250\345\206\214\350\264\246\345\217\267", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Login", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
