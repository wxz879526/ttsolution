#include "mainwindow.h"
#include "formlogin.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    FormLogin w;
    w.show();

    return a.exec();
}
