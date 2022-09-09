#include "widget.h"
//#include "./ui_widget.h"
#include <QtWidgets>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    auto *grid = new QGridLayout(this);
    grid->setVerticalSpacing(15);
    grid->setHorizontalSpacing(10);

    auto *title = new QLabel("Title", this);
    grid->addWidget(title, 0, 0, 1, 1);
    title->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
    auto *edit1 = new QLineEdit(this);
    grid->addWidget(edit1, 0, 1, 1, 1);

    auto *author = new QLabel("Author", this);
    grid->addWidget(author, 1, 0, 1, 1);
    author->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
    auto *edit2 = new QLineEdit(this);
    grid->addWidget(edit2, 1, 1, 1, 1);

    auto *review = new QLabel("Review", this);
    grid->addWidget(review, 2, 0, 1, 1);
    review->setAlignment(Qt::AlignRight | Qt::AlignTop);

    auto *text = new QTextEdit(this);
    text->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
    qDebug() << text->sizeHint();
    grid->addWidget(text, 2, 1, 3, 1);
}

Widget::~Widget()
{
}
