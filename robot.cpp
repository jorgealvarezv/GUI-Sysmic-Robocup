#include "robot.h"

robot::robot()
{



}

QRectF robot::boundingRect() const
{
        return QRectF(win_adj*-9,win_adj*-9,win_adj*18,win_adj*18);
}

void robot::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QBrush b(Qt::blue);
    QBrush y(Qt::yellow);
    QRectF rob = boundingRect();
    if(color==0){
        painter->setBrush(b);
    }
    else {
        painter->setBrush(y);
    }

    painter->drawEllipse(rob);



}
void robot::setSpeed(int speedx){
    speed=speedx;

}

void robot::setAngle(int anglex)
{
    angle=anglex;
    setRotation(angle);
}

void robot::setCoord(qreal posx, qreal posy)
{
    x=posx;
    y=posy;
    setPos(x,y);
}

void robot::setColor(int colorx)
{
    color=colorx;
}
void robot::advance(int phase)
{
    if(!phase) return;
    //QPointF location =this->pos();
    setPos(mapToParent(0,-(speed)));

}


void robot::DoCollision()
{

}

