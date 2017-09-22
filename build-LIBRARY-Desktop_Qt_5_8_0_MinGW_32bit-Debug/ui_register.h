/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QLabel *label;
    QLabel *label_5;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox;
    QLabel *label_6;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(500, 551);
        Register->setStyleSheet(QLatin1String("border-radius:5px;\n"
"\n"
""));
        label = new QLabel(Register);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 80, 91, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_5 = new QLabel(Register);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(220, 250, 91, 16));
        label_5->setFont(font);
        pushButton = new QPushButton(Register);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 470, 75, 23));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:5px;\n"
"width:130px;\n"
" height:70px;"));
        layoutWidget = new QWidget(Register);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 120, 281, 108));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setStyleSheet(QLatin1String("border-radius:5px;\n"
"\n"
"border:1 solid black;\n"
"height:20px;"));
        lineEdit_3->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_3, 3, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setStyleSheet(QLatin1String("border-radius:5px;\n"
"\n"
"border:1 solid black;\n"
"height:20px;"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setStyleSheet(QLatin1String("border-radius:5px;\n"
"\n"
"border:1 solid black;\n"
"height:20px;"));
        lineEdit_2->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_2, 2, 1, 1, 1);

        comboBox = new QComboBox(Register);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(350, 390, 101, 20));
        label_6 = new QLabel(Register);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 290, 41, 16));
        label_6->setFont(font);
        radioButton_2 = new QRadioButton(Register);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(320, 290, 61, 16));
        radioButton_2->setFont(font);
        radioButton = new QRadioButton(Register);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(180, 290, 61, 16));
        radioButton->setFont(font);
        label_7 = new QLabel(Register);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(100, 350, 31, 16));
        label_7->setFont(font);
        label_8 = new QLabel(Register);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(100, 390, 31, 20));
        label_8->setFont(font);
        lineEdit_5 = new QLineEdit(Register);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(170, 350, 133, 20));
        lineEdit_5->setStyleSheet(QLatin1String("border-radius:5px;\n"
"\n"
"border:1 solid #BDC0BA;\n"
"height:20px"));
        lineEdit_6 = new QLineEdit(Register);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(170, 390, 133, 20));
        lineEdit_6->setStyleSheet(QLatin1String("border-radius:5px;\n"
"\n"
"border:1 solid #BDC0BA;\n"
"height:20px"));
        pushButton_3 = new QPushButton(Register);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(330, 480, 75, 23));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 185, 227);\n"
"border-radius:5px;\n"
"width:130px;\n"
" height:70px;"));
        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_6);
        QWidget::setTabOrder(lineEdit_6, pushButton);

        retranslateUi(Register);
        QObject::connect(comboBox, SIGNAL(activated(QString)), lineEdit_6, SLOT(setText(QString)));

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Register", "\350\264\246\345\217\267\344\277\241\346\201\257", Q_NULLPTR));
        label_5->setText(QApplication::translate("Register", "\344\270\252\344\272\272\344\277\241\346\201\257", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Register", "\347\241\256\350\256\244", Q_NULLPTR));
        label_3->setText(QApplication::translate("Register", "\345\257\206\347\240\201", Q_NULLPTR));
        label_2->setText(QApplication::translate("Register", "\350\264\246\345\217\267", Q_NULLPTR));
        label_4->setText(QApplication::translate("Register", "\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
        label_6->setText(QApplication::translate("Register", "\350\201\214\344\270\232", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("Register", "\345\255\246\347\224\237", Q_NULLPTR));
        radioButton->setText(QApplication::translate("Register", "\346\225\231\345\270\210", Q_NULLPTR));
        label_7->setText(QApplication::translate("Register", "\345\247\223\345\220\215", Q_NULLPTR));
        label_8->setText(QApplication::translate("Register", "\345\255\246\351\231\242", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Register", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
