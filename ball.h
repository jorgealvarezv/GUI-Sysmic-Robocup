#ifndef BALL_H
#define BALL_H
#include<QPainter>
#include<QGraphicsEllipseItem>
#include<QGraphicsScene>


class Ball:public QGraphicsEllipseItem
{
public:
    Ball();
    qreal win_adj=0.8;
    QRectF boundingRect() const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option, QWidget *widget);
protected:
    void advance(int phase);
public:
    int color;
    qreal angle;
    qreal speed;
    qreal x;
    qreal y;
    void DoCollision();
    void setSpeed(int speedx);
    void setAngle(int anglex);
    void setCoord(qreal posx,qreal posy);
    void setColor(int colorx);

};

#endif // BALL_H
