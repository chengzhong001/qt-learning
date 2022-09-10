#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.resize(350, 250);
    w.setWindowTitle("简单的菜单");
    w.show();
    return a.exec();
}
