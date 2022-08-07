#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    w.resize(250, 150);
    w.setWindowTitle("this is a simple example");
    w.setToolTip("this is a QWidget");
    w.setWindowIcon(QIcon("/Users/azhong/Documents/Project/qt-learning/chapter7-simplegui/resources/logo.ico"));
    w.show();
    return a.exec();
}
