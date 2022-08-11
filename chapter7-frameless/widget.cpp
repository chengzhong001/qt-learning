#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowFlag(Qt::FramelessWindowHint); // 设置窗口无边框，设置后窗口不能移动
    setAttribute(Qt::WA_TranslucentBackground, true);

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_btn_exit_clicked()
{
    qApp->quit();
}

