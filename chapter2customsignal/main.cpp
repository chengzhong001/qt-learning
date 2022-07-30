#include <QCoreApplication>
#include "sender.h"
#include "receiver.h"

int main(int argc, char *argv[])
{

    Sender senderObj;
    Receiver receiverObj;

    senderObj.incAge();

    QObject::connect(&senderObj, &Sender::ageChanged, &receiverObj, &Receiver::ageChanged);
    senderObj.incAge();
    senderObj.incAge();

    receiverObj.~Receiver();
//    QObject::disconnect(&senderObj, &Sender::ageChanged, &receiverObj, &Receiver::ageChanged);
    senderObj.incAge();
    senderObj.incAge();
}
