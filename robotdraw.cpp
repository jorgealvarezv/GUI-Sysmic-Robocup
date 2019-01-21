#include "robotdraw.h"



void robotDraw::paintEvent(QPaintEvent *event)
{
    QPainter painter;
    painter.begin(this);
    painter.setRenderHint(QPainter::Antialiasing);

    painter.drawLine(10, 10, 100, 100);
    painter.drawText(QRect(30, 10, 100, 20), "Hello Paint Qt");
    painter.drawRoundedRect(QRect(10, 60, 100, 50), 10, 10);

    painter.end();
}
