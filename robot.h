#ifndef ROBOT_H
#define ROBOT_H
#include<QPainter>
#include<QGraphicsEllipseItem>
#include<QGraphicsScene>




class robot: public QGraphicsEllipseItem
{
public:
    robot();
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
    qreal win_adj=0.8;

};

#endif // ROBOT_H
