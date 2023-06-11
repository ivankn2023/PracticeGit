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

    QPushButton *btn2 = new QPushButton();
    btn2->setText("no click here!!");

    QVBoxLayout *vlay = new QVBoxLayout(this);
    vlay->addWidget(btn1);
    vlay->addWidget(btn2);

}

Widget::~Widget()
{
    delete ui;
}

