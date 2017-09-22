/********************************************************************************
** Form generated from reading UI file 'returnlist.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNLIST_H
#define UI_RETURNLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReturnList
{
public:
    QComboBox *comboBox;
    QLabel *label_12;
    QLabel *label_11;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_13;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_4;
    QLabel *label_10;

    void setupUi(QDialog *ReturnList)
    {
        if (ReturnList->objectName().isEmpty())
            ReturnList->setObjectName(QStringLiteral("ReturnList"));
        ReturnList->resize(813, 596);
        comboBox = new QComboBox(ReturnList);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(360, 480, 87, 21));
        label_12 = new QLabel(ReturnList);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(500, 470, 161, 31));
        label_12->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_11 = new QLabel(ReturnList);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(250, 480, 91, 21));
        label_11->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        horizontalLayoutWidget_2 = new QWidget(ReturnList);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(80, 220, 671, 78));
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

        label_13 = new QLabel(ReturnList);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(150, 380, 521, 71));
        label_13->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_13->setWordWrap(true);
        pushButton = new QPushButton(ReturnList);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 530, 93, 28));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:5px;"));
        pushButton_2 = new QPushButton(ReturnList);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(520, 530, 91, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:5px;"));
        horizontalLayoutWidget = new QWidget(ReturnList);
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

        label_8 = new QLabel(ReturnList);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(80, 310, 571, 41));
        label_8->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_9 = new QLabel(ReturnList);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(330, 30, 151, 31));
        label_9->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_4 = new QLabel(ReturnList);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 140, 531, 51));
        label_4->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_10 = new QLabel(ReturnList);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(330, 190, 121, 21));
        label_10->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        retranslateUi(ReturnList);
        QObject::connect(pushButton_2, SIGNAL(clicked()), ReturnList, SLOT(close()));

        QMetaObject::connectSlotsByName(ReturnList);
    } // setupUi

    void retranslateUi(QDialog *ReturnList)
    {
        ReturnList->setWindowTitle(QApplication::translate("ReturnList", "Dialog", Q_NULLPTR));
        label_12->setText(QApplication::translate("ReturnList", "\346\234\254", Q_NULLPTR));
        label_11->setText(QApplication::translate("ReturnList", "\350\277\230\344\271\246\346\225\260\351\207\217", Q_NULLPTR));
        label_5->setText(QApplication::translate("ReturnList", "TextLabel", Q_NULLPTR));
        label_6->setText(QApplication::translate("ReturnList", "TextLabel", Q_NULLPTR));
        label_7->setText(QApplication::translate("ReturnList", "TextLabel", Q_NULLPTR));
        label_13->setText(QApplication::translate("ReturnList", "* \350\257\267\344\273\224\347\273\206\346\240\270\345\257\271\344\271\246\347\261\215\344\277\241\346\201\257\344\270\216\347\224\250\346\210\267\344\277\241\346\201\257\346\230\257\345\220\246\344\270\200\350\207\264,\350\213\245\350\277\230\344\271\246\346\227\266\350\266\205\350\277\20730\345\244\251\346\234\237\351\231\220\357\274\214\346\214\211\346\257\217\346\234\2540.1\345\205\203/\345\244\251\347\275\232\346\254\276\343\200\202", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ReturnList", "\347\241\256\345\256\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ReturnList", "\345\217\226\346\266\210", Q_NULLPTR));
        label->setText(QApplication::translate("ReturnList", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("ReturnList", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("ReturnList", "TextLabel", Q_NULLPTR));
        label_8->setText(QApplication::translate("ReturnList", "TextLabel", Q_NULLPTR));
        label_9->setText(QApplication::translate("ReturnList", "\344\271\246\347\261\215\344\277\241\346\201\257", Q_NULLPTR));
        label_4->setText(QApplication::translate("ReturnList", "TextLabel", Q_NULLPTR));
        label_10->setText(QApplication::translate("ReturnList", "\344\272\272\347\211\251\344\277\241\346\201\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ReturnList: public Ui_ReturnList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNLIST_H
