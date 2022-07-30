#include <QtGui>
#include <QWindow>
#include <QWidget>
//#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QGuiApplication a(argc, argv);
    QWidget w;
    w.show();
    qGuiApp->dumpObjectTree();
    qGuiApp->dumpObjectInfo();

    return a.exec();
}
/*
QObject->QCoreApplication->QGuiApplication->QApplication
QGuiApplication 继承自QCoreApplication的功能以外，还需负责初始化GUI所需的资源；
跟踪系统界面属性，保证GUI与系统保持一致；提供字符串本地化、剪切板，鼠标光标处理等功能

QApplication 为Qt Widgets模块的应用程序提供事件循环
除了继承QGuiApplication的功能以外，还负责初始化Qt Widgets模块所需要的资源，并提供更多的接口
*/
