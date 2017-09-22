#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#define _SVID_SOURCE
#include <QMainWindow>
#include "dialog.h"

#include "findbookwin.h"
#include "data.h"
#include <QString>
#include "login.h"
#include "personinfo.h"
#include <QTime>
#include <QTimer>
#include <time.h>
#include "AddBook2.h"
#include "inforbox.h"
#include "recharge.h"
#include "log.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void AddBookByFile();



private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();


    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::MainWindow *ui;
    FindBookWin FindBookWindow;
    Login d;
    PersonInfo PersonInfoWin;
    QTimer *timer=new QTimer(this);
    AddBook2 AddBookWin;
    InforBox InforBoxWin;
    Recharge RechargeWin;
    Log LogWin;
};

#endif // MAINWINDOW_H
