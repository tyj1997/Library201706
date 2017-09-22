/********************************************************************************
** Form generated from reading UI file 'reservewin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVEWIN_H
#define UI_RESERVEWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReserveWin
{
public:
    QLabel *label_4;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_13;
    QLabel *label_8;
    QPushButton *pushButton_2;
    QLabel *label_10;
    QLabel *label_9;
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *ReserveWin)
    {
        if (ReserveWin->objectName().isEmpty())
            ReserveWin->setObjectName(QStringLiteral("ReserveWin"));
        ReserveWin->resize(825, 635);
        label_4 = new QLabel(ReserveWin);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 150, 531, 51));
        label_4->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        horizontalLayoutWidget_2 = new QWidget(ReserveWin);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(80, 230, 671, 78));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_2->addWidget(label_5);

        label_6 = new QLabel(horizontalLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_2->addWidget(label_6);

        label_7 = new QLabel(horizontalLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_2->addWidget(label_7);

        label_13 = new QLabel(ReserveWin);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(130, 400, 521, 71));
        label_13->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_13->setWordWrap(true);
        label_8 = new QLabel(ReserveWin);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(80, 320, 571, 41));
        label_8->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_2 = new QPushButton(ReserveWin);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(500, 550, 91, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:5px;"));
        label_10 = new QLabel(ReserveWin);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(330, 200, 121, 21));
        label_10->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_9 = new QLabel(ReserveWin);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(340, 30, 151, 31));
        label_9->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton = new QPushButton(ReserveWin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 550, 93, 28));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:5px;"));
        horizontalLayoutWidget = new QWidget(ReserveWin);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(80, 80, 671, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(label_3);


        retranslateUi(ReserveWin);
        QObject::connect(pushButton_2, SIGNAL(clicked()), ReserveWin, SLOT(close()));

        QMetaObject::connectSlotsByName(ReserveWin);
    } // setupUi

    void retranslateUi(QDialog *ReserveWin)
    {
        ReserveWin->setWindowTitle(QApplication::translate("ReserveWin", "Dialog", Q_NULLPTR));
        label_4->setText(QApplication::translate("ReserveWin", "TextLabel", Q_NULLPTR));
        label_5->setText(QApplication::translate("ReserveWin", "TextLabel", Q_NULLPTR));
        label_6->setText(QApplication::translate("ReserveWin", "TextLabel", Q_NULLPTR));
        label_7->setText(QApplication::translate("ReserveWin", "TextLabel", Q_NULLPTR));
        label_13->setText(QApplication::translate("ReserveWin", "* \350\257\267\344\273\224\347\273\206\346\240\270\345\257\271\344\271\246\347\261\215\344\277\241\346\201\257\344\270\216\347\224\250\346\210\267\344\277\241\346\201\257\346\230\257\345\220\246\344\270\200\350\207\264,\345\275\223\351\242\204\347\272\246\344\271\246\347\261\215\345\210\260\346\227\266\357\274\214\346\210\221\344\273\254\344\274\232\351\200\232\350\277\207\346\266\210\346\201\257\347\233\222\345\255\220\346\217\220\351\206\222\346\202\250", Q_NULLPTR));
        label_8->setText(QApplication::translate("ReserveWin", "TextLabel", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ReserveWin", "\345\217\226\346\266\210", Q_NULLPTR));
        label_10->setText(QApplication::translate("ReserveWin", "\344\272\272\347\211\251\344\277\241\346\201\257", Q_NULLPTR));
        label_9->setText(QApplication::translate("ReserveWin", "\344\271\246\347\261\215\344\277\241\346\201\257", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ReserveWin", "\351\242\204\347\272\246", Q_NULLPTR));
        label->setText(QApplication::translate("ReserveWin", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("ReserveWin", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("ReserveWin", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ReserveWin: public Ui_ReserveWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVEWIN_H
