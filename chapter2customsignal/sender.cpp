#include "sender.h"

Sender::Sender(QObject *parent)
    : QObject{parent}
{

}

void Sender::incAge(){
    m_age++;
    emit ageChanged(m_age);
}
