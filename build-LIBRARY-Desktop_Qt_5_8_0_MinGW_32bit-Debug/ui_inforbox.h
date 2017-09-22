/********************************************************************************
** Form generated from reading UI file 'inforbox.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORBOX_H
#define UI_INFORBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_InforBox
{
public:
    QLabel *label;
    QListWidget *listWidget;

    void setupUi(QDialog *InforBox)
    {
        if (InforBox->objectName().isEmpty())
            InforBox->setObjectName(QStringLiteral("InforBox"));
        InforBox->resize(695, 546);
        InforBox->setStyleSheet(QStringLiteral("alternate-background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(35, 40, 3, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.225 rgba(166, 140, 41, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.345 rgba(235, 219, 102, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.635 rgba(168, 142, 42, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:1 rgba(35, 40, 3, 255));"));
        label = new QLabel(InforBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 10, 341, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        listWidget = new QListWidget(InforBox);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(30, 120, 631, 361));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        listWidget->setFont(font1);

        retranslateUi(InforBox);

        QMetaObject::connectSlotsByName(InforBox);
    } // setupUi

    void retranslateUi(QDialog *InforBox)
    {
        InforBox->setWindowTitle(QApplication::translate("InforBox", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("InforBox", "\346\266\210     \346\201\257      \347\233\222     \345\255\220", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class InforBox: public Ui_InforBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORBOX_H
