#include <QCoreApplication>
#include <QList>
#include <QString>
#include <QDebug>

void test1(){
    QString string = "coin, book, cup,pencil,clock, bookmark";
    QStringList items = string.split(",");
    QStringListIterator it(items);
//    for(auto i: it){
//        qDebug() << i;
//    }
    while(it.hasNext())
        qDebug() << it.next().trimmed();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    test1();

    return a.exec();
}
