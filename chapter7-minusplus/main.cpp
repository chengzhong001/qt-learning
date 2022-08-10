#include "minusplus.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MinusPlus w;
    w.resize(300,190);
    w.setWindowTitle("Plus minus");
    
    w.show();
    return a.exec();
}
