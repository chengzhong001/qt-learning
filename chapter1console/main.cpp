#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug() <<"Object a name" << a.metaObject()->className();
    qDebug() << "application path" << a.applicationFilePath();
    a.dumpObjectTree();
    a.dumpObjectInfo();
    return a.exec();
}


/*
qDebug() 在Windows下如果是控制台程序，则将消息发送到控制台，否则，他将被发送到调试器

QObject->QCoreApplication->QGuiApplication->QApplication
QGuiApplication 继承自QCoreApplication的功能以外，还需负责初始化GUI所需的资源；
跟踪系统界面属性，保证GUI与系统保持一致；提供字符串本地化、剪切板，鼠标光标处理等功能

*/
