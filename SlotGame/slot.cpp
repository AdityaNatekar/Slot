#include "slot.h"
#include "ui_slot.h"
#include "j1mx6.h"


#include <QMessageBox>
#include <QDebug>
#include <QtGui>
#include <QTimer>
#include <QPixmap>
#include<QtCore>
//#include<QFontDatabase>


slot::slot(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::slot)
{

    ui->setupUi(this);
    ui->cePanel1->setStyleSheet("border: 1px solid gray");
    ui->cePanel2->setStyleSheet("border: 1px solid gray");
    ui->cePanel3->setStyleSheet("border: 1px solid gray");
    ui->cePanel4->setStyleSheet("border: 1px solid gray");
    ui->cePanel5->setStyleSheet("border: 1px solid gray");
    ui->cePanel6->setStyleSheet("border: 1px solid gray");
    ui->cePanel7->setStyleSheet("border: 1px solid gray");
    ui->PnlKuji1->setStyleSheet("border: 1px solid gray");
    ui->PnlKuji2->setStyleSheet("border: 1px solid gray");
    ui->PnlKuji3->setStyleSheet("border: 1px solid gray");

    ui->btnStop1->setEnabled(false);
    ui->btnStop2->setEnabled(false);
    ui->btnStop3->setEnabled(false);

    ui->labeltest->setVisible(false);
    ui->labeltest2->setVisible(false);
    ui->labeltest3->setVisible(false);


    QPixmap Kuji0(":/new/prefix1/kuji0.png");
    ui->PnlKuji1->setPixmap(Kuji0);
    ui->PnlKuji1->setScaledContents( true );
    ui->PnlKuji1->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );

    ui->PnlKuji2->setPixmap(Kuji0);
    ui->PnlKuji2->setScaledContents( true );
    ui->PnlKuji2->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );

    ui->PnlKuji3->setPixmap(Kuji0);
    ui->PnlKuji3->setScaledContents( true );
    ui->PnlKuji3->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );

    ui->PnlKuji3->setPixmap(Kuji0);
    ui->PnlKuji3->setScaledContents( true );
    ui->PnlKuji3->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );


    ui->btnBack->setStyleSheet("border-image:url(:/new/prefix1/button1.png);");
    ui->ceImageButton1->setStyleSheet("border-image:url(:/new/prefix1/star-new.png);");

//   ui->ceCell1->setText("ＮＵＭＡＴＡ　ＪｅｗｅｌＯｎｅ Ｊ１ーＭＸ６");
//    ui->ceCell1->setText("NUMATA JewelOne J1-MX6");

    ui->btnReset->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.493, y1:0.517, x2:0.492971, y2:0, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(255, 255, 255, 255)); color:rgb(128,0,0);border:black;");
    ui->btnStart->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.463324, y1:0.432, x2:0.473, y2:0, stop:0 rgba(255, 255, 0, 255), stop:1 rgba(255, 255, 255, 255));color:rgb(128,0,0);border:black");
    ui->btnStop1->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.463324, y1:0.432, x2:0.473, y2:0, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));border:black");
    ui->btnStop2->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.463324, y1:0.432, x2:0.473, y2:0, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));border:black");
    ui->btnStop3->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.463324, y1:0.432, x2:0.473, y2:0, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));border:black");
    ui->pushButton->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.541, y1:1, x2:0.478261, y2:0.006, stop:0 rgba(0, 193, 255, 255), stop:1 rgba(255, 255, 255, 255));border-radius: 10px;");
//   ui->ceImageButton1->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.541, y1:1, x2:0.478261, y2:0.006, stop:0 rgba(0, 193, 255, 255), stop:1 rgba(255, 255, 255, 255)); color:red");
    ui->btnStop1->setText("");
    ui->btnStop2->setText("");
    ui->btnStop3->setText("");





//    connect(ui->btnStop1, SIGNAL(clicked(bool)), this, SLOT(btnStop1_function(bool)));
//qDebug() << "inside constructor";
        timer = new QTimer(this);
        timer2 = new QTimer(this);
        timer3 = new QTimer(this);

//        this->setWindowFlags(Qt::WindowStaysOnTopHint);

//        QFont font(":/new/prefix1/fonts-japanese-mincho.ttf");
//        ui->pushButton->setFont(font);
//        ui->pushButton->setText(tr("おめ"));
        //QFontDatabase::addApplicationFont(":/new/prefix1/ipaexg.ttf");
        QFont font = QFont("IPA Gothic",14,1);
        ui->pushButton->setFont(font);
        ui->pushButton->setText(tr("終\n了"));

        QFont font1 = QFont("IPA P Gothic",20,QFont::ExtraBold,false);
        ui->ceCell1->setFont(font1);
        ui->ceCell1->setText(tr("NUMATA  JewelOne Ｊ１ーＭＸ６"));





}


void slot::on_btnReset_released()
{
    ui->btnReset->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.493, y1:0.517, x2:0.492971, y2:0, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));color:rgb(128,0,0);border:black");
    ui->btnStart->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.463324, y1:0.432, x2:0.473, y2:0, stop:0 rgba(255, 255, 0, 255), stop:1 rgba(255, 255, 255, 255));color:rgb(128,0,0);border:black");
    ui->btnStop1->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.463324, y1:0.432, x2:0.473, y2:0, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));border:black");
    ui->btnStop2->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.463324, y1:0.432, x2:0.473, y2:0, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));border:black");
    ui->btnStop3->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.463324, y1:0.432, x2:0.473, y2:0, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));border:black");

    ui->btnStop1->setText("");
    ui->btnStop2->setText("");
    ui->btnStop3->setText("");


  ui->btnStart->setEnabled(true);
//  qDebug() << "inside reset";
  SlotReset();
}

void slot::SlotReset()
{
 //to avoid crash if one or two slots are stopped and reset
  if(ui->btnStop1->isEnabled())
{
//      qDebug() << "place to kill timer1";
       delete timer;
       timer = new QTimer(this);
  }

  if(ui->btnStop2->isEnabled())
{
//      qDebug() << "place to kill timer2";
       delete timer2;
      timer2 = new QTimer(this);
  }

  if(ui->btnStop3->isEnabled())
{
//      qDebug() << "place to kill timer3";
       delete timer3;
      timer3 = new QTimer(this);
  }
  if(ui->btnStop1->isEnabled() && ui->btnStop2->isEnabled() && ui->btnStop3->isEnabled())
{
      delete timer;
      delete timer2;
      delete timer3;
      timer = new QTimer(this);
      timer2 = new QTimer(this);
      timer3 = new QTimer(this);
  }

    //Default images on reset
    QPixmap Kuji0(":/new/prefix1/kuji0.png");
    ui->PnlKuji1->setPixmap(Kuji0);
    ui->PnlKuji1->setScaledContents( true );
    ui->PnlKuji1->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );

    ui->PnlKuji2->setPixmap(Kuji0);
    ui->PnlKuji2->setScaledContents( true );
    ui->PnlKuji2->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );

    ui->PnlKuji3->setPixmap(Kuji0);
    ui->PnlKuji3->setScaledContents( true );
    ui->PnlKuji3->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );

    //diasble the stop buttons on reset click
    ui->btnStop1->setEnabled(false);
   ui->btnStop2->setEnabled(false);
    ui->btnStop3->setEnabled(false);



}

slot::~slot()
{
    delete ui;
}

void slot::on_pushButton_clicked()
{
//this->setDisabled(true);
    QMessageBox msgBox;
//    msgBox.setModal(false);
    msgBox.setIcon(QMessageBox::Question);
    msgBox.setWindowTitle("終了確認");
    msgBox.setText("終了してよろしいですか？");
    msgBox.setStandardButtons(QMessageBox::Yes);
    msgBox.addButton(QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    msgBox.setButtonText(QMessageBox::Yes, tr("はい"));
    msgBox.setButtonText(QMessageBox::No, tr("いいえ"));
//    msgBox.setParent(this);
    msgBox.setStyleSheet("background-color:white;");
//    msgBox.exec();



    if(msgBox.exec() == QMessageBox::Yes){
//      qDebug() << "Yes was clicked";
      QApplication::quit();
    }else {
//       qDebug() << "NO was clicked";
    }


}

void slot::on_btnStart_released()
{
    ui->btnStop1->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.463324, y1:0.432, x2:0.473, y2:0, stop:0 rgba(255, 255, 0, 255), stop:1 rgba(255, 255, 255, 255));color:rgb(128,0,0);border:black");
    ui->btnStop2->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.463324, y1:0.432, x2:0.473, y2:0, stop:0 rgba(255, 255, 0, 255), stop:1 rgba(255, 255, 255, 255));color:rgb(128,0,0);border:black");
    ui->btnStop3->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.463324, y1:0.432, x2:0.473, y2:0, stop:0 rgba(255, 255, 0, 255), stop:1 rgba(255, 255, 255, 255));color:rgb(128,0,0);border:black");

    ui->btnStop1->setText("STOP!");
    ui->btnStop2->setText("STOP!");
    ui->btnStop3->setText("STOP!");

    ui->btnStart->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.463324, y1:0.432, x2:0.473, y2:0, stop:0 rgba(255, 255, 0, 255), stop:1 rgba(255, 255, 255, 255)); color:rgb(128,0,0);border:black");
    ui->btnStart->setText("START");

    if((timer->isActive() || timer2->isActive() || timer3->isActive()))
    {
      delete timer;
      delete timer2;
      delete timer3;
        timer = new QTimer(this);
        timer2 = new QTimer(this);
        timer3 = new QTimer(this);
    }
//    else if(!(timer->isActive() || timer2->isActive() || timer3->isActive()))
//    {
//        int a=1;
//    }
    else
   {
    timer = new QTimer(this);
    timer2 = new QTimer(this);
    timer3 = new QTimer(this);

    }
    ui->btnStop1->setEnabled(true);
     ui->btnStop2->setEnabled(true);
     ui->btnStop3->setEnabled(true);
    connect(timer,SIGNAL(timeout()),this,SLOT(updatepane1()));
    connect(timer2,SIGNAL(timeout()),this,SLOT(updatepane12()));
    connect(timer3,SIGNAL(timeout()),this,SLOT(updatepane13()));

    QString value= (ui->comboBox->currentText());

    if(value=="25")
    {
    timer->start(1);
    timer2->start(1);
    timer3->start(1);
    }
    else
    {
     timer->start(value.toInt());
     timer2->start(value.toInt());
     timer3->start(value.toInt());
    }
     ui->btnStart->setEnabled(true);
}





void slot::updatepane1()
{
    int static picCounter = 0;
        QPixmap p0(":/new/prefix1/kuji0.png");
        QPixmap p1(":/new/prefix1/kuji1.png");
        QPixmap p2(":/new/prefix1/kuji2.png");
        QPixmap p3(":/new/prefix1/kuji3.png");
    if (picCounter == 0)
    {
        ui->PnlKuji1->setPixmap((QPixmap(p0)) );
        ui->PnlKuji1->setScaledContents( true );
        ui->PnlKuji1->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
    }
    if(picCounter == 1)
    {
        ui->PnlKuji1->setPixmap((QPixmap(p1)));
        ui->PnlKuji1->setScaledContents( true );
        ui->PnlKuji1->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
    }
    if(picCounter == 2)
    {
        ui->PnlKuji1->setPixmap((QPixmap(p2)));
        ui->PnlKuji1->setScaledContents( true );
        ui->PnlKuji1->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
    }
    if(picCounter == 3)
    {
        ui->PnlKuji1->setPixmap((QPixmap(p3)));
        ui->PnlKuji1->setScaledContents( true );
        ui->PnlKuji1->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
    }

    // update picture
        picCounter++;
        if (picCounter == 4)
           {
            picCounter = 0;
        }


        QString value= QString::number(picCounter);
        ui->labeltest->setText(value);

}

void slot::updatepane12()
{

    int static picCounter2 = 0;
    QPixmap p0(":/new/prefix1/kuji0.png");
    QPixmap p1(":/new/prefix1/kuji1.png");
    QPixmap p2(":/new/prefix1/kuji2.png");
    QPixmap p3(":/new/prefix1/kuji3.png");
    if (picCounter2 == 0)
    {
        ui->PnlKuji2->setPixmap((QPixmap(p0)) );
        ui->PnlKuji2->setScaledContents( true );
        ui->PnlKuji2->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
    }
    if(picCounter2 == 1)
    {
        ui->PnlKuji2->setPixmap((QPixmap(p1)));
        ui->PnlKuji2->setScaledContents( true );
        ui->PnlKuji2->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
    }
    if(picCounter2 == 2)
    {
        ui->PnlKuji2->setPixmap((QPixmap(p2)));
        ui->PnlKuji2->setScaledContents( true );
        ui->PnlKuji2->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
    }
    if(picCounter2 == 3)
    {
        ui->PnlKuji2->setPixmap((QPixmap(p3)));
        ui->PnlKuji2->setScaledContents( true );
        ui->PnlKuji2->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
    }

    // update picture
        picCounter2++;
        if (picCounter2 == 4)
           {
            picCounter2 = 0;
        }

        QString value= QString::number(picCounter2);
        ui->labeltest2->setText(value);

}

void slot::updatepane13()
{
    int static picCounter = 0;
    QPixmap p0(":/new/prefix1/kuji0.png");
    QPixmap p1(":/new/prefix1/kuji1.png");
    QPixmap p2(":/new/prefix1/kuji2.png");
    QPixmap p3(":/new/prefix1/kuji3.png");
    if (picCounter == 0)
    {
        ui->PnlKuji3->setPixmap((QPixmap(p0)) );
        ui->PnlKuji3->setScaledContents( true );
        ui->PnlKuji3->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
    }
    if(picCounter == 1)
    {
        ui->PnlKuji3->setPixmap((QPixmap(p1)));
        ui->PnlKuji3->setScaledContents( true );
        ui->PnlKuji3->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
    }
    if(picCounter == 2)
    {
        ui->PnlKuji3->setPixmap((QPixmap(p2)));
        ui->PnlKuji3->setScaledContents( true );
        ui->PnlKuji3->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
    }
    if(picCounter == 3)
    {
        ui->PnlKuji3->setPixmap((QPixmap(p3)));
        ui->PnlKuji3->setScaledContents( true );
        ui->PnlKuji3->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
    }

    // update picture
        picCounter++;
        if (picCounter == 4)
           {
            picCounter = 0;
        }


        QString value= QString::number(picCounter);
        ui->labeltest3->setText(value);

}





void slot::on_comboBox_currentTextChanged(const QString &arg1)
{
//    qDebug() <<"InsideComboBox"<< arg1.toInt();
    ui->comboBox->setCurrentText(arg1);

    //If all bottons are stopped, when speed button is changed it will do nthing
    if((!(ui->btnStop1->isEnabled()))&&(!(ui->btnStop2->isEnabled()))&&(!(ui->btnStop3->isEnabled())))
{
    }

    //stop the ongoing timer before inputting new speed value
//    if((ui->btnStart->isEnabled()))
//    {   timer = new QTimer(this);
//        timer2 = new QTimer(this);
//        timer3 = new QTimer(this);
//        timer->start(arg1.toInt());
//        timer2->start(arg1.toInt());
//        timer3->start(arg1.toInt());
//         qDebug() <<"please click start";
//    }
//    else
//    {
        //to avoid misfunction if spped is changed after one or two stops
    else {




             if(!(ui->btnStop1->isEnabled()))
             {
//                        qDebug() <<"here1";
               {


                                                if((ui->btnStop2->isEnabled()))
                                                {
                                                    timer2->stop();
                                                    if(arg1=="25")
                                                    {
                                                     timer2->start(5);
                                                    }else
                                                    {
                                                    timer2->start(arg1.toInt());
                                                    }
//                                                   qDebug() <<"here2 ";
                                                   if((ui->btnStop3->isEnabled()))
                                                     {
                                                        timer3->stop();
                                                        if(arg1=="25")
                                                        {
                                                         timer3->start(5);
                                                        }else
                                                        {
                                                        timer3->start(arg1.toInt());
                                                        }
//                                                       qDebug() <<"here13";
                                                     }

                                                }

                                                else if((ui->btnStop3->isEnabled()))
                                                {
                                                   timer3->stop();
                                                   if(arg1=="25")
                                                   {
                                                    timer3->start(5);
                                                   }else
                                                   {
                                                    timer3->start(arg1.toInt());
                                                   }
//                                                   qDebug() <<"here3";
                                                   if((ui->btnStop2->isEnabled()))
                                                     {
                                                       timer2->stop();
                                                       if(arg1=="25")
                                                       {
                                                        timer2->start(5);
                                                       }else
                                                       {
                                                        timer2->start(arg1.toInt());
                                                       }
//                                                       qDebug() <<"here113";
                                                     }
                                                }
                                                 else
                                                 {
                                                   timer2->stop();
                                                   timer3->stop();
                                                   if(arg1=="25")
                                                   {
                                                    timer2->start(5);
                                                   }else
                                                   {
                                                   timer2->start(arg1.toInt());
                                                   }
                                                   if(arg1=="25")
                                                   {
                                                    timer3->start(5);
                                                   }else
                                                   {
                                                   timer3->start(arg1.toInt());
                                                   }
//                                                   qDebug() <<"here4";
                                                 }
                }

               }

               else if(!(ui->btnStop2->isEnabled()))
                 {
//                        qDebug() <<"here5 ";
                    {

                                            if((ui->btnStop1->isEnabled()))
                                            {

                                                timer->stop();
                                                if(arg1=="25")
                                                {
                                                 timer->start(5);
                                                }else
                                                {
                                                timer->start(arg1.toInt());
                                                }
//                                               qDebug() <<"here6 ";
                                               if((ui->btnStop3->isEnabled()))
                                                 {
                                                   timer3->stop();
                                                   if(arg1=="25")
                                                   {
                                                    timer3->start(5);
                                                   }else
                                                   {
                                                    timer3->start(arg1.toInt());
                                                   }
//                                                   qDebug() <<"here23";
                                                 }

                                            }

                                            else if((ui->btnStop3->isEnabled()))
                                            {
                                               timer3->stop();
                                               if(arg1=="25")
                                               {
                                                timer3->start(5);
                                               }else
                                               {
                                                timer3->start(arg1.toInt());
                                               }
//                                               qDebug() <<"here7";
                                               if((ui->btnStop1->isEnabled()))
                                                 {
                                                   timer->stop();
                                                   if(arg1=="25")
                                                   {
                                                    timer->start(5);
                                                   }else
                                                   {
                                                    timer->start(arg1.toInt());
                                                   }
//                                                   qDebug() <<"here223";
                                                 }
                                            }

                                            else
                                            {
                                             timer->stop();
                                             timer3->stop();
                                             if(arg1=="25")
                                             {
                                              timer->start(5);
                                             }else
                                             {
                                             timer->start(arg1.toInt());
                                             }
                                             if(arg1=="25")
                                             {
                                              timer3->start(5);
                                             }else
                                             {
                                             timer3->start(arg1.toInt());
                                             }
//                                             qDebug() <<"here8";
                                             }
                   }
                  }

               else if(!(ui->btnStop3->isEnabled()))
                 {

                    {
//                                            qDebug() <<"here9";
                                            if((ui->btnStop1->isEnabled()))
                                            {
                                                timer->stop();
                                                if(arg1=="25")
                                                {
                                                 timer->start(5);
                                                }else
                                                {
                                                timer->start(arg1.toInt());
                                                }
//                                               qDebug() <<"here10 ";
                                               if((ui->btnStop2->isEnabled()))
                                                 {
                                                   timer2->stop();
                                                   if(arg1=="25")
                                                   {
                                                    timer2->start(5);
                                                   }else
                                                   {
                                                    timer2->start(arg1.toInt());
                                                   }
//                                                   qDebug() <<"here33";
                                                 }
                                            }

                                            else if((ui->btnStop2->isEnabled()))
                                            {
                                                timer2->stop();
                                                if(arg1=="25")
                                                {
                                                 timer2->start(5);
                                                }else
                                                {
                                                timer2->start(arg1.toInt());
                                                }
//                                                qDebug() <<"here11";
                                                if((ui->btnStop1->isEnabled()))
                                                  {
                                                    timer->stop();
                                                    if(arg1=="25")
                                                    {
                                                     timer->start(5);
                                                    }else
                                                    {
                                                     timer->start(arg1.toInt());
                                                    }
//                                                    qDebug() <<"here333";
                                                  }
                                            }

                                                else
                                                {
                                                 timer->stop();
                                                 timer2->stop();
                                                 if(arg1=="25")
                                                 {
                                                  timer->start(5);
                                                 }else
                                                 {
                                                 timer->start(arg1.toInt());
                                                 }
                                                 if(arg1=="25")
                                                 {
                                                  timer2->start(5);
                                                 }else
                                                 {
                                                 timer2->start(arg1.toInt());
                                                 }
//                                                 qDebug() <<"here12";
                                                 }
                   }
                  }
                 else{
//                        qDebug() <<"here13";
                        timer->stop();
                        delete timer;
                        timer2->stop();
                        delete timer2;
                        timer3->stop();
                        delete timer3;
                        timer = new QTimer(this);
                        timer2 = new QTimer(this);
                        timer3 = new QTimer(this);
                        if(arg1=="25")
                        {
                         timer->start(5);
                        }else
                        {
                        timer->start(arg1.toInt());
                        }
                        if(arg1=="25")
                        {
                         timer2->start(5);
                        }else
                        {
                        timer2->start(arg1.toInt());
                        }
                        if(arg1=="25")
                        {
                         timer3->start(5);
                        }else
                        {
                        timer3->start(arg1.toInt());
                        }
                        connect(timer,SIGNAL(timeout()),this,SLOT(updatepane1()));
                        connect(timer2,SIGNAL(timeout()),this,SLOT(updatepane12()));
                        connect(timer3,SIGNAL(timeout()),this,SLOT(updatepane13()));
             }



        }
}








void slot::on_btnStop1_released()
{

    ui->btnStop1->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.463324, y1:0.432, x2:0.473, y2:0, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));border:black");

    ui->btnStop1->setText("");



    timer->stop();
    connect(timer,SIGNAL(timeout()),this,SLOT(updatepane1()));

    ui->btnStop1->setEnabled(false);



//    QString stop1value = ui->labeltest->text();
//    qDebug() <<"stop1value1"<< stop1value;

   ui->btnStart->setEnabled(true);




    if((!(timer2->isActive()))&&(!(timer3->isActive())))
    {
//        qDebug() << "inside the loop1";
        QString valuelabel1 = ui->labeltest->text();
        QString valuelabel2 = ui->labeltest2->text();
        QString valuelabel3 = ui->labeltest3->text();

        ui->btnStart->setEnabled(true);
//        delete timer;
//        delete timer2;
//        delete timer3;
//        qDebug() << "All timers not deleted inside stop1";




        if((valuelabel1==valuelabel2))
        {
            if((valuelabel1==valuelabel3))
           {
//             qDebug() << "samevalue";
             QMessageBox msgBox1;
             msgBox1.setWindowTitle("Congratulations!");
             msgBox1.setText("おめでとうございます! \n大当たりです! \n\n続けますか？");
             msgBox1.setStandardButtons(QMessageBox::Yes);
             msgBox1.addButton(QMessageBox::No);
             msgBox1.setDefaultButton(QMessageBox::No);
             msgBox1.setButtonText(QMessageBox::Yes, tr("はい"));
             msgBox1.setButtonText(QMessageBox::No, tr("いいえ"));
//             msgBox1.setParent(this);
             msgBox1.setStyleSheet("background-color:white;");
             if(msgBox1.exec() == QMessageBox::Yes){
//                 updatepane1();
//               SlotReset();
                 on_btnStart_released();
               ui->btnStart->setEnabled(true);
             }else {
                QApplication::quit();
             }
           }
        }
    }

}



void slot::on_btnStop2_released()
{


    ui->btnStop2->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.463324, y1:0.432, x2:0.473, y2:0, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));border:black");



    ui->btnStop2->setText("");


    timer2->stop();
    connect(timer2,SIGNAL(timeout()),this,SLOT(updatepane12()));

    ui->btnStop2->setEnabled(false);



//    QString stop2value = ui->labeltest2->text();
//    qDebug() <<"stop2value"<<stop2value;
    ui->btnStart->setEnabled(true);



    if((!(timer3->isActive()))&&(!(timer->isActive())))
    {
//        qDebug() << "inside the loop2";
        QString valuelabel1 = ui->labeltest->text();
        QString valuelabel2 = ui->labeltest2->text();
        QString valuelabel3 = ui->labeltest3->text();

        ui->btnStart->setEnabled(true);
//        delete timer;
//        delete timer2;
//        delete timer3;
//        qDebug() << "All timers not deleted inside stop2";
        if((valuelabel1==valuelabel2))
        {
            if((valuelabel1==valuelabel3))
           {
//             qDebug() << "samevalue";
             QMessageBox msgBox2;
             msgBox2.setWindowTitle("Congratulations!");
             msgBox2.setText("おめでとうございます! \n大当たりです! \n\n続けますか？");
             msgBox2.setStandardButtons(QMessageBox::Yes);
             msgBox2.addButton(QMessageBox::No);
             msgBox2.setDefaultButton(QMessageBox::No);
             msgBox2.setButtonText(QMessageBox::Yes, tr("はい"));
             msgBox2.setButtonText(QMessageBox::No, tr("いいえ"));
//             msgBox2.setParent(this);
             msgBox2.setStyleSheet("background-color:white;");
             if(msgBox2.exec() == QMessageBox::Yes){
//                 updatepane12();
//               SlotReset();
                 on_btnStart_released();
               ui->btnStart->setEnabled(true);
             }else {
                QApplication::quit();
             }
           }

        }
    }


}

void slot::on_btnStop3_released()
{

    ui->btnStop3->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.463324, y1:0.432, x2:0.473, y2:0, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));border:black");

    ui->btnStop3->setText("");




    timer3->stop();
    connect(timer3,SIGNAL(timeout()),this,SLOT(updatepane13()));
    ui->btnStop3->setEnabled(false);


//    QString stop3value = ui->labeltest2->text();
//    qDebug() <<"stopvalue3"<<stop3value;
    ui->btnStart->setEnabled(true);


    if((!(timer->isActive()))&&(!(timer2->isActive())))
    {
//        qDebug() << "inside the loop3";
        QString valuelabel1 = ui->labeltest->text();
        QString valuelabel2 = ui->labeltest2->text();
        QString valuelabel3 = ui->labeltest3->text();

        ui->btnStart->setEnabled(true);
//        delete timer;
//        delete timer2;
//        delete timer3;
//        qDebug() << "All timers not deleted inside stop3";

        if((valuelabel1==valuelabel2))
        {
            if((valuelabel1==valuelabel3))
           {
//             qDebug() << "samevalue";
             QMessageBox msgBox3;
             msgBox3.setWindowTitle("Congratulations!");
             msgBox3.setText("おめでとうございます! \n大当たりです! \n\n続けますか？");
             msgBox3.setStandardButtons(QMessageBox::Yes);
             msgBox3.addButton(QMessageBox::No);
             msgBox3.setDefaultButton(QMessageBox::No);
             msgBox3.setButtonText(QMessageBox::Yes, tr("はい"));
             msgBox3.setButtonText(QMessageBox::No, tr("いいえ"));
//             msgBox3.setParent(this);
             msgBox3.setStyleSheet("background-color:white;");
             if(msgBox3.exec() == QMessageBox::Yes){
//                 updatepane13();
//               SlotReset();
                 on_btnStart_released();
                  ui->btnStart->setEnabled(true);

             }else {
                QApplication::quit();
             }
           }
        }
    }

}

void slot::on_ceImageButton1_released()
{
    ui->ceImageButton1->setStyleSheet("border-image:url(:/new/prefix1/star-new.png)");
   QString speedchange = ui->comboBox->currentText();
   int n = speedchange.toInt();

   switch( n )
   {
   case 25:
       speedchange="50";
       break ;
   case 50:
       speedchange="100";
       break ;
   case 100:
       speedchange="250";
       break ;
   case 250:
       speedchange="500";
       break ;
   case 500:
       speedchange="25";
       break ;
   }


  ui->comboBox->setCurrentText(speedchange);


}




void slot::on_btnBack_released()
{
    if(timer->isActive())
    {
        timer->stop();
    }

    if(timer2->isActive())
    {
        timer2->stop();
    }

    if(timer3->isActive())
    {
        timer3->stop();
    }

    ui->btnBack->setStyleSheet("border-image:url(:/new/prefix1/button1.png)");
    j1mx6* a=new j1mx6();
    a->show();
    this->close();




}

void slot::on_btnStop1_pressed()
{
    ui->btnStop1->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.600, y1:0.585, x2:0.600, y2:1, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));color:gray;border:black");

    ui->btnStop1->setText("STOP!");

}


void slot::on_btnStop2_pressed()
{
    ui->btnStop2->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.600, y1:0.585, x2:0.600, y2:1, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(255, 255, 255, 255)); color:gray;border:black");

    ui->btnStop2->setText("STOP!");
}



void slot::on_btnStop3_pressed()
{
    ui->btnStop3->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.600, y1:0.585, x2:0.600, y2:1, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(255, 255, 255, 255)); color:gray;border:black");

    ui->btnStop3->setText("STOP!");

}



void slot::on_btnReset_pressed()
{
    ui->btnReset->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.497, y1:0.568682, x2:0.502, y2:1, stop:0 rgba(255, 255, 0, 255), stop:1 rgba(255, 255, 255, 255)); color:gray;border:black");

    ui->btnReset->setText("RESET");
}


void slot::on_btnStart_pressed()
{
    ui->btnStart->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.600, y1:0.585, x2:0.600, y2:1, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(255, 255, 255, 255)); color:gray;border:black");
    ui->btnStart->setText("START");
}



void slot::on_ceImageButton1_pressed()
{
    ui->ceImageButton1->setStyleSheet("border-image:url(:/new/prefix1/star-light-shade.png)");

}



void slot::on_btnBack_pressed()
{
    ui->btnBack->setStyleSheet("border-image:url(:/new/prefix1/button1.png)2 2 2 2 stretch stretch");

}


