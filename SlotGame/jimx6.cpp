#include "jimx6.h"
#include "ui_jimx6.h"

jimx6::jimx6(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::jimx6)
{
    ui->setupUi(this);
}

jimx6::~jimx6()
{
    delete ui;
}
