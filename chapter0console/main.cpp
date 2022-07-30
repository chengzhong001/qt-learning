#include <QCoreApplication>

#include <iostream>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout << "Qt Version: "  << qVersion() << std::endl;
    qDebug() << "Qt Version:" << qVersion() ;
    return a.exec();
}
