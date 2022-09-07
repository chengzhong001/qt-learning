#include "widget.h"
//#include "./ui_widget.h"
#include <QtWidgets>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
//    auto vbox = new QVBoxLayout(this);
    //    auto *settings = new QPushButton("设置", this);
    //    auto *accounts = new QPushButton("账户", this);
    //    auto *loans = new QPushButton("存款",this);
    //    auto *cash = new QPushButton("取款",this);

    //    settings->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    //    accounts->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    //    loans->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    //    cash->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    //    vbox->addWidget(settings);
    //    vbox->addWidget(accounts);
    //    vbox->addWidget(loans);
    //    vbox->addWidget(cash);

//    auto *hbox = new QHBoxLayout(this);
    //    auto okBtn = new QPushButton("Ok", this);
    //    auto applyBtn = new QPushButton("Apply", this);
    //    hbox->addWidget(okBtn, 1, Qt::AlignRight);
    //    hbox->addWidget(applyBtn, 0);
    //    vbox->addStretch(1);
    //    vbox->addLayout(hbox);

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

    vbox->setSpacing(5);
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

