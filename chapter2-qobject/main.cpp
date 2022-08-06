#include <QCoreApplication>

class A:public QObject{
public:
    A(QObject *parent=nullptr):QObject(parent){
        qInfo() << this << " is constructor" ;
    };
    ~A(){
        qDebug() << this << " is destroyed";
    }
};

int main(int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);
    A objA;
    objA.setObjectName("A");
    A *pA2 = new A(&objA);
    pA2->setObjectName("A2");
    A *pA3 = new A(pA2);
    pA3->setObjectName("A3");
    objA.dumpObjectTree();

//    return a.exec();
}
