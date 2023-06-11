#include "widget.h"
#include "./ui_widget.h"
#include "QPushButton"
#include "QVBoxLayout"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QPushButton *btn1 = new QPushButton();
    btn1->setText("click here");

    QPushButton *btn3 = new QPushButton();
    btn3->setText("no click here!!");

    QPushButton *btn5 = new QPushButton();
    btn4->setText("no click here!!");

    QVBoxLayout *vlay = new QVBoxLayout(this);
    vlay->addWidget(btn1);
    vlay->addWidget(btn3);
    vlay->addWidget(btn5);
}

Widget::~Widget()
{
    delete ui;
}

