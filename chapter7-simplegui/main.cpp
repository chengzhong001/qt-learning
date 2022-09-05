#include "widget.h"
#include <QFile>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    w.resize(250, 150);
    w.setWindowTitle("一个简单的例子");
    w.setToolTip("这是一个Qwidget");
    w.setWindowIcon(QIcon(":/resources/logo.icns"));

    QFile stylefile("/Users/azhong/Documents/Project/qt-learning/chapter7-simplegui/myStyle.css");
    stylefile.open(QIODevice::ReadOnly);
    QString stylesheet = QString::fromLatin1(stylefile.readAll());
    a.setStyleSheet(stylesheet);

    w.show();
    return a.exec();
}
