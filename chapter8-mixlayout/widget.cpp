#include "widget.h"
//#include "./ui_widget.h"
#include <QtWidgets>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{


    auto *vbox = new QVBoxLayout();
    auto *hbox = new QHBoxLayout(this);
    auto *lw = new QListWidget(this);
    lw->addItem("北京");
    lw->addItem("上海");
    lw->addItem("广州");
    lw->addItem("深圳");
    lw->addItem("南昌");

    auto *add = new QPushButton("添加", this);
    auto *rename = new QPushButton("修改", this);
    auto *remove = new QPushButton("删除", this);
    auto *removeall = new QPushButton("全部删除", this);
    

    vbox->setSpacing(5); // 设置button的间距
    vbox->addStretch(1);
    vbox->addWidget(add);
    vbox->addWidget(rename);
    vbox->addWidget(remove);
    vbox->addWidget(removeall);
    vbox->addStretch(1);

    hbox->addWidget(lw);
    hbox->addSpacing(15);
    hbox->addLayout(vbox);

}

Widget::~Widget()
{
}

