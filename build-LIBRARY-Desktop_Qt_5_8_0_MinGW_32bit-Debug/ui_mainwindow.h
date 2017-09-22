/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_N;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QPushButton *pushButton_5;
    QLabel *label_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1161, 733);
        MainWindow->setStyleSheet(QLatin1String("\n"
"#mainwindow{ \n"
"border-image: url(:/new/prefix1/images/6.png);\n"
"} \n"
"#mainwindow * { \n"
"border-image:url(); \n"
"}\n"
""));
        MainWindow->setToolButtonStyle(Qt::ToolButtonFollowStyle);
        MainWindow->setTabShape(QTabWidget::Rounded);
        action_N = new QAction(MainWindow);
        action_N->setObjectName(QStringLiteral("action_N"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/images/1.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        action_N->setIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 250, 150, 150));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"image: url(:/new/prefix1/build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug/\346\267\273\345\212\240\344\271\246\347\261\215.png);\n"
"\n"
"font: 15pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:0px;\n"
"width:130px;\n"
" height:70px;"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 250, 150, 150));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"image: url(:/new/prefix1/build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug/\346\237\245\350\257\242\344\271\246\347\261\215.png);\n"
"\n"
"font: 15pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:0px;\n"
"width:130px;\n"
" height:70px;\n"
""));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 250, 150, 150));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 15pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:0px;\n"
"width:130px;\n"
" height:70px;\n"
"image: url(:/new/prefix1/build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug/\346\237\245\350\257\242\344\272\272\347\211\251\344\277\241\346\201\257.png);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-150, -30, 1500, 241));
        label->setStyleSheet(QStringLiteral("image: url(:/images/loginimage.png)"));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(60, 420, 150, 150));
        pushButton_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"image: url(:/new/prefix1/build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug/\346\263\250\351\224\200.png);\n"
"font: 15pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:0px;\n"
"width:130px;\n"
" height:70px;"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 590, 451, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";color: rgb(255, 255, 255);\n"
""));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(660, 250, 150, 150));
        pushButton_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"image: url(:/new/prefix1/build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug/\346\227\266\351\227\264.png);\n"
"font: 15pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:0px;\n"
"width:130px;\n"
" height:70px;"));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(460, 420, 150, 150));
        pushButton_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 15pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:0px;\n"
"width:130px;\n"
" height:70px;\n"
"image: url(:/new/prefix1/build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug/\346\237\245\347\234\213\346\226\260\346\266\210\346\201\257.png);"));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(260, 420, 150, 150));
        pushButton_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 15pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:0px;\n"
"width:130px;\n"
" height:70px;\n"
"image: url(:/new/prefix1/build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug/\345\205\205\345\200\274.png);"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1161, 26));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        action_N->setText(QApplication::translate("MainWindow", "IMAGE1", Q_NULLPTR));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        label->setText(QString());
        pushButton_5->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        pushButton_4->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
