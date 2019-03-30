#include "ball.h"

Ball::Ball()
{

}

QRectF Ball::boundingRect() const
{

    return QRectF(win_adj*2.15,win_adj*2.15,win_adj*4.3,win_adj*4.3);
}

void Ball::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPen mypen4=QPen("orange");
    QBrush n("orange");

    QRectF fball = boundingRect();

    painter->setBrush(n);
    painter->setPen(mypen4);
    painter->drawEllipse(fball);
}

void Ball::advance(int phase)
{
    if(!phase) return;
    //QPointF location =this->pos();
    setPos(mapToParent(0,-(speed)));
}

void Ball::setSpeed(int speedx)
{
    speed=speedx;

}

void Ball::setCoord(qreal posx, qreal posy)
{
    x=posx;
    y=posy;
    setPos(x,y);

}
