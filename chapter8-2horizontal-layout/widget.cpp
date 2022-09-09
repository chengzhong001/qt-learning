#include "widget.h"
//#include "./ui_widget.h"
#include <QtWidgets>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    auto *vbox = new QVBoxLayout(this);
    auto *hbox = new QHBoxLayout(this);

    auto *okBtn = new QPushButton("Ok", this);
    auto *applyBtn = new QPushButton("Apply", this);
    hbox->addWidget(okBtn, 1, Qt::AlignRight);
    hbox->addWidget(applyBtn, 0);
    vbox->addStretch(1);
    vbox->addLayout(hbox);

}

Widget::~Widget()
{
}
