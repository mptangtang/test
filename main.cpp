#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    //  Add a comments in main

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
