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

private:


    QTimer *updateTimer;



};

#endif // FIELD_H
