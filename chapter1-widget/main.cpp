//#include "mainwindow.h"

#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget w;
    w.show();
    qApp->dumpObjectTree();
    qApp->dumpObjectInfo();
    return a.exec();
}
