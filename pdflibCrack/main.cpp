#include "mainwindow.h"
#include <QSplashScreen>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap loadingPix(":/loading.jpg");
    QSplashScreen splash(loadingPix);
    splash.show();
    a.processEvents();
    MainWindow w;
    w.show();
    splash.finish(&w);
    return a.exec();
}
