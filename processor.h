#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <QThread>
#include"field.h"
#include<QGraphicsScene>



class Processor: public QThread,QWidget
{
public:
    void run();
    void update();


};

#endif // PROCESSOR_H
