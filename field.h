#ifndef FIELD_H
#define FIELD_H

#include <QWidget>
#include<QtCore>
#include<QtGui>
#include<QGraphicsScene>
#include<QGraphicsItem>
#include"robot.h"
#include"ball.h"


namespace Ui {
class Field;
}

class Field : public QWidget
{
    Q_OBJECT

public:
    explicit Field(QWidget *parent);
    ~Field();
    bool ball_field=false;
    bool rob1_field=false;
    bool rob2_field=false;
    bool rob3_field=false;
    bool rob4_field=false;
    bool rob5_field=false;
    bool rob6_field=false;
    bool rob7_field=false;
    bool rob8_field=false;
    bool rob9_field=false;
    bool rob10_field=false;
    bool rob11_field=false;
    bool rob12_field=false;
    robot *robot1;
    robot *robot2;
    robot *robot3;
    robot *robot4;
    robot *robot5;
    robot *robot6;
    robot *robot7;
    robot *robot8;
    robot *robot9;
    robot *robot10;
    robot *robot11;
    robot *robot12;
    QGraphicsScene *scene;
    Ui::Field *ui;
    qreal win_adj=0.8;
    Ball  *ball;
    void setScene();


private slots:
    void updateWin();
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);

private:


    QTimer *updateTimer;



};

#endif // FIELD_H
