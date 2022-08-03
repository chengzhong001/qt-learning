#include <QCoreApplication>
#include "myclass.h"
#include <QVariant>
#include <QMetaClassInfo>
#include <QThread>
#include <iostream>

class Thread :public QThread{
public:
    void run(){
        while (1) {
            std::string isQ;
            std::cin >> isQ;
            if(isQ.compare("Q")==0)
                break;
        }
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//    MyClass *myinstance = new MyClass;
    {
        QSharedPointer<MyClass> myinstance = QSharedPointer<MyClass> (new MyClass);
        QObject *object = myinstance.get();

        myinstance->setPriority(MyClass::VeryLow);
        object->setProperty("priority", "VeryHigh");
        object->setProperty("isGood", false);

        qInfo() << myinstance->priority();
        qInfo() << object->property("isGood");

        qInfo() << myinstance->metaObject()->classInfo(0).name();
        qInfo() << myinstance->metaObject()->classInfo(0).value();
        qInfo() << myinstance->metaObject()->classInfo(1).name();
        qInfo() << myinstance->metaObject()->classInfo(1).value();
    }

//    delete myinstance;
//    Thread mythread;
//    mythread.start();

//    QObject::connect(&mythread, &Thread::finished, &a, &QCoreApplication::quit);

    return a.exec();
}
