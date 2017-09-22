/********************************************************************************
** Form generated from reading UI file 'log.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOG_H
#define UI_LOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_Log
{
public:
    QListWidget *listWidget;

    void setupUi(QDialog *Log)
    {
        if (Log->objectName().isEmpty())
            Log->setObjectName(QStringLiteral("Log"));
        Log->resize(796, 619);
        listWidget = new QListWidget(Log);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(90, 130, 601, 441));

        retranslateUi(Log);

        QMetaObject::connectSlotsByName(Log);
    } // setupUi

    void retranslateUi(QDialog *Log)
    {
        Log->setWindowTitle(QApplication::translate("Log", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Log: public Ui_Log {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_H
