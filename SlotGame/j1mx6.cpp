#include "j1mx6.h"
#include "ui_j1mx6.h"


j1mx6::j1mx6(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::j1mx6)
{

//    this->setWindowFlags(this->windowFlags()|Qt::MSWindowsFixedSizeDialogHint);
    ui->setupUi(this);
//    this->setWindowFlags(Qt::FramelessWindowHint);
//    this->setWindowState(Qt::WindowMaximized);
//    this->setWindowFlags(Qt::WindowStaysOnTopHint);
    ui->pushButton->setStyleSheet("border-image:url(:/new/prefix1/J1MX6-2.jpg);");
}

j1mx6::~j1mx6()
{
    delete ui;
}

void j1mx6::on_pushButton_clicked()
{

//    slot* win=new slot();
//   Slot.show();


   this->close();
    openslot();


}

void j1mx6::openslot()
    {
        Slot.show();

    }
