#ifndef J1MX6_H
#define J1MX6_H

#include <QMainWindow>
#include "slot.h"


namespace Ui {
class j1mx6;
}

class j1mx6 : public QMainWindow
{
    Q_OBJECT

public:
    explicit j1mx6(QWidget *parent = nullptr);
    ~j1mx6();



private slots:
    void on_pushButton_clicked();

private:
    Ui::j1mx6 *ui;

     void openslot();


   slot Slot;


};

#endif // J1MX6_H
