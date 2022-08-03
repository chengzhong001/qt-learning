#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <QDebug>

class MyClass : public QObject
{
    Q_OBJECT
    Q_PROPERTY(Priority priority READ priority WRITE setPriority NOTIFY priorityChanged)
    Q_CLASSINFO("auther", "Azhong")
    Q_CLASSINFO("version", "3.0.0")

public:
//    explicit MyClass(QObject *parent = nullptr);
    ~MyClass(){qDebug() << "~Myclass";}
    enum Priority{High, Low, VeryHigh, VeryLow};
    Q_ENUM(Priority)

    void setPriority(Priority priority){
        m_priority = priority;
        emit priorityChanged(priority);
    }
    Priority priority() const {return m_priority;}

signals:
    void priorityChanged(MyClass::Priority);

private:
    Priority m_priority;
};

#endif // MYCLASS_H
