#include <QApplication>
#include <QDebug>
#include "mainwindow.h"
#include "hamming.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}

