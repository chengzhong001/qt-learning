#include "widget.h"
#include <QFrame>
#include <QGridLayout>
#include <QPushButton>
#include <QApplication>
#include <QSpinBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    auto *frame1 = new QFrame(this);
    frame1->setFrameStyle(QFrame::Box);
    frame1->setCursor(Qt::SizeAllCursor);

    auto *frame2 = new QFrame(this);
    frame2->setFrameStyle(QFrame::Box);
    frame2->setCursor(Qt::WaitCursor);

    auto *frame3 = new QFrame(this);
    frame3->setFrameStyle(QFrame::Box);
    frame3->setCursor(Qt::PointingHandCursor);

    auto *grid = new QGridLayout(this);
    grid->addWidget(frame1, 0, 0);
    grid->addWidget(frame2, 0, 1);
    grid->addWidget(frame3, 0, 2);
    // setLayout(grid);

    auto *gridframe2 = new QGridLayout(frame2);
    QPushButton *btn = new QPushButton("quit", this);
    gridframe2->addWidget(btn);
    connect(btn, &QPushButton::clicked, qApp, &QApplication::quit);
    
    QSpinBox *spinbox = new QSpinBox(this);
    gridframe2->addWidget(spinbox);
    this->dumpObjectTree();

}

Widget::~Widget()
{
}

