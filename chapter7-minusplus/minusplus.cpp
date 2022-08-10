#include "minusplus.h"
#include <QPushButton>
#include <QGridLayout>
#include <QLabel>

MinusPlus::MinusPlus(QWidget *parent)
    : QWidget(parent)
{
    auto *plsBtn = new QPushButton("+", this);
    auto *minBtn = new QPushButton("-", this);
    lbl = new QLabel("0", this);

    auto *grid = new QGridLayout(this);
    grid->addWidget(minBtn, 0, 0, 1, 1);
    grid->addWidget(plsBtn, 0, 1, 1, 1);
    grid->addWidget(lbl, 1, 1, 1, 1);
    setLayout(grid);

    connect(plsBtn, &QPushButton::clicked, this, &MinusPlus::OnPlus);
    connect(minBtn, &QPushButton::clicked, this, &MinusPlus::OnMinus);
}

MinusPlus::~MinusPlus()
{
   
}

void MinusPlus::OnPlus()
{
    int val = lbl->text().toInt();
    lbl->setText(QString::number(++val));
}

void MinusPlus::OnMinus()
{
     int val = lbl->text().toInt();
    lbl->setText(QString::number(--val));
}
