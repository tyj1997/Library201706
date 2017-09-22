#include "mainwindow.h"
#include <QApplication>
#include "login.h"
#include "data.h"
#include <QPixmap>
#include <QSplashScreen>
#include <QLabel>
#include <QMovie>
#include <synchapi.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//          QPixmap pixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\MainWindow.gif");
//          QSplashScreen splash(pixmap);
//          splash.setWindowOpacity(0.7);// 设置窗口透明度
//          QLabel label(&splash);
//          QMovie mv("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\MainWindow.gif");
//          label.setMovie(&mv);
//          mv.start();
//          splash.show();
//          splash.setCursor(Qt::BlankCursor);
//          for(int i=0; i<10000; i+=mv.speed())
//          {
//             QCoreApplication::processEvents();
//             Sleep(mv.speed());
//          }
    MainWindow w;
    Login login;
    login.AddPerson();
 //   splash.finish(&login);
    if(login.exec()==QDialog::Accepted)
    {
        w.setAutoFillBackground(true);
        QPalette palette;
        QPixmap pixmap("D:\\libraryproject\\6666666666666\\build-LIBRARY-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\MainWindow.png");
        palette.setBrush(QPalette::Window, QBrush(pixmap));
        w.setPalette(palette);
    w.show();
    return a.exec();
    }
    else return 0;
}
