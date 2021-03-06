#ifndef JIMX6_H
#define JIMX6_H

#include <QMainWindow>

namespace Ui {
class jimx6;
}

class jimx6 : public QMainWindow
{
    Q_OBJECT

public:
    explicit jimx6(QWidget *parent = nullptr);
    ~jimx6();

private:
    Ui::jimx6 *ui;
};

#endif // JIMX6_H
