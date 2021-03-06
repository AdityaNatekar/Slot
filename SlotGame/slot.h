#ifndef SLOT_H
#define SLOT_H


#include <QMainWindow>
#include <QTimer>
#include <QPixmap>
#include <QtCore>

QT_BEGIN_NAMESPACE
namespace Ui { class slot; }
QT_END_NAMESPACE


class slot : public QMainWindow
{
    Q_OBJECT

public:
    slot(QWidget *parent = nullptr);
    ~slot();

    void SlotReset();

private slots:
//    void on_btnReset_clicked();

    void on_pushButton_clicked();

//    void on_btnStart_clicked();

    void updatepane1();

    void updatepane12();

    void updatepane13();

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_btnStop1_pressed();

    void on_btnStop1_released();

    void on_btnStop2_pressed();

    void on_btnStop2_released();

    void on_btnStop3_pressed();

    void on_btnStop3_released();

    void on_btnReset_pressed();

    void on_btnReset_released();

    void on_btnStart_pressed();

    void on_btnStart_released();

    void on_ceImageButton1_pressed();

    void on_ceImageButton1_released();

    void on_btnBack_pressed();

    void on_btnBack_released();

//    void on_btnBack_clicked();

private:
    Ui::slot *ui;

    QTimer *timer;

    QTimer *timer2;

    QTimer *timer3;















};
#endif // SLOT_H
