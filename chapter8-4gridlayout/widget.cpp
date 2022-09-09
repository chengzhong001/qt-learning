#include "widget.h"
//#include "./ui_widget.h"
#include <QtWidgets>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    auto *nameEdit = new QLineEdit(this);
    auto *addEdit = new QLineEdit(this);
    auto *occpEdit = new QLineEdit(this);
    auto *formLayout = new QFormLayout(this);

    formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignCenter);
    formLayout->addRow("Name:", nameEdit);
    formLayout->addRow("Email:", addEdit);
    formLayout->addRow("Age:", occpEdit);

}

Widget::~Widget()
{
}
