#ifndef DRAWINGTEST_H
#define DRAWINGTEST_H

#include <QWidget>

class robotDraw : public QWidget
{
    Q_OBJECT

public:
    robotDraw(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *event) override;
};

#endif // DRAWINGTEST_H
