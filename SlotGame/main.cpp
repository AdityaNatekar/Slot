//#include "slot.h"
#include "j1mx6.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    j1mx6 w;
    w.setWindowTitle("Slot");
    w.show();



    return a.exec();
}
