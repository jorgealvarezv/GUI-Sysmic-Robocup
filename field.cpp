#include "field.h"
#include "ui_field.h"
#include "robot.h"
#include "ball.h"
#include <QtNetwork>
#include <stdio.h>
#include "net/robocup_ssl_client.h"
#include "net/grSim_client.h"
#include "util/timer.h"

#include "pb/messages_robocup_ssl_detection.pb.h"
#include "pb/messages_robocup_ssl_geometry.pb.h"
#include "pb/messages_robocup_ssl_wrapper.pb.h"
#include "pb/grSim_Packet.pb.h"
#include "pb/grSim_Commands.pb.h"
#include "pb/grSim_Replacement.pb.h"
#include"mainwindow.h"
#include <QKeyEvent>



Field::Field(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Field)
{

    ui->setupUi(this);
    scene=new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setBackgroundBrush(QColor(0, 85.0, 0));

    ui->graphicsView->setRenderHint(QPainter::Antialiasing);

    scene->setSceneRect(0,0,win_adj*370,win_adj*1040);



    QPen mypen1=QPen(Qt::black);
    mypen1.setWidth(5);
    QPointF p;
    p.setX(0);
    p.setY(0);
    QPointF p1;
    p1.setX(0);
    p1.setY(win_adj*1040);

    QPointF p2;
    p2.setX(win_adj*740);
    p2.setY(win_adj*1040);

    QPointF p3;
    p3.setX(0);
    p3.setY(win_adj*520);

    QPointF p4;
    p4.setX(win_adj*740);
    p4.setY(win_adj*520);

    QPointF p5;
    p5.setX(win_adj*740);
    p5.setY(0);

    QPointF p6;
    p6.setX(win_adj*740);
    p6.setY(win_adj*1040);



    QLineF Line1(p,p1);
    QLineF Line2(p1,p2);
    QLineF Line4(p5,p);
    QLineF Line5(p5,p6);



    scene->addLine(Line1,mypen1);
    scene->addLine(Line2,mypen1);
    scene->addLine(Line4,mypen1);
    scene->addLine(Line5,mypen1);

    QPen mypen=QPen(Qt::white);
    mypen.setWidth(2);
    scene->addEllipse(win_adj*320,win_adj*470,win_adj*100,win_adj*100,mypen);
    QPointF q;
    q.setX(win_adj*70);
    q.setY(win_adj*70);
    QPointF q1;
    q1.setX(win_adj*70);
    q1.setY(win_adj*970);

    QPointF q2;
    q2.setX(win_adj*670);
    q2.setY(win_adj*970);

    QPointF q3;
    q3.setX(win_adj*70);
    q3.setY(win_adj*520);

    QPointF q4;
    q4.setX(win_adj*670);
    q4.setY(win_adj*520);

    QPointF q5;
    q5.setX(win_adj*670);
    q5.setY(win_adj*70);

    QPointF q6;
    q6.setX(win_adj*670);
    q6.setY(win_adj*970);



    QLineF Line6(q,q1);
    QLineF Line7(q1,q2);
    QLineF Line8(q3,q4);
    QLineF Line9(q5,q);
    QLineF Line10(q5,q6);


    scene->addLine(Line6,mypen);
    scene->addLine(Line7,mypen);
    scene->addLine(Line8,mypen);
    scene->addLine(Line9,mypen);
    scene->addLine(Line10,mypen);


    QPointF e;
    e.setX(win_adj*320);
    e.setY(win_adj*970);
    QPointF e1;
    e1.setX(win_adj*320);
    e1.setY(win_adj*988);
    QPointF e2;
    e2.setX(win_adj*420);
    e2.setY(win_adj*970);

    QPointF e3;
    e3.setX(win_adj*420);
    e3.setY(win_adj*988);

    QLineF Line11(e,e1);
    QLineF Line12(e2,e3);
    QLineF Line13(e1,e3);
    QPen mypen2=QPen(Qt::yellow);
    mypen2.setWidth(4);
    scene->addLine(Line11,mypen2);
    scene->addLine(Line12,mypen2);
    scene->addLine(Line13,mypen2);


    QPointF e4;
    e4.setX(win_adj*320);
    e4.setY(win_adj*70);
    QPointF e5;
    e5.setX(win_adj*320);
    e5.setY(win_adj*48);
    QPointF e6;
    e6.setX(win_adj*420);
    e6.setY(win_adj*70);

    QPointF e7;
    e7.setX(win_adj*420);
    e7.setY(win_adj*48);

    QLineF Line14(e4,e5);
    QLineF Line15(e6,e7);
    QLineF Line16(e5,e7);
    QPen mypen3=QPen(Qt::blue);

    mypen3.setWidth(4);
    scene->addLine(Line14,mypen3);
    scene->addLine(Line15,mypen3);
    scene->addLine(Line16,mypen3);
    QPointF e8;
    e8.setX(win_adj*270);
    e8.setY(win_adj*70);

    QPointF e9;
    e9.setX(win_adj*270);
    e9.setY(win_adj*170);

    QLineF Line17(e8,e9);
    scene->addLine(Line17,mypen);
    QPointF e10;
    e10.setX(win_adj*470);
    e10.setY(win_adj*70);

    QPointF e11;
    e11.setX(win_adj*470);
    e11.setY(win_adj*170);

    QLineF Line18(e10,e11);
    QLineF Line19(e9,e11);
    scene->addLine(Line18,mypen);
    scene->addLine(Line19,mypen);


     QPointF e12;
     e12.setX(win_adj*270);
     e12.setY(win_adj*970);

     QPointF e13;
     e13.setX(win_adj*270);
     e13.setY(win_adj*870);

     QLineF Line20(e12,e13);
     scene->addLine(Line20,mypen);

     QPointF e14;
     e14.setX(win_adj*470);
     e14.setY(win_adj*970);

     QPointF e15;
     e15.setX(win_adj*470);
     e15.setY(win_adj*870);

     QLineF Line21(e14,e15);
     QLineF Line22(e13,e15);
     scene->addLine(Line21,mypen);
      scene->addLine(Line22,mypen);



    robot1=new robot();
    //scene->addItem(robot1);
    robot1->setSpeed(0);
    robot1->setAngle(0);

    robot1->setColor(0);



    robot2= new robot();
    //scene->addItem(robot2);
    robot2->setSpeed(0);
    robot2->setAngle(0);

    robot2->setColor(0);


    robot3= new robot();
    //scene->addItem(robot3);
    robot3->setSpeed(0);
    robot3->setAngle(0);

    robot3->setColor(0);

    robot4= new robot();
    //scene->addItem(robot4);
    robot4->setSpeed(0);
    robot4->setAngle(0);

    robot4->setColor(0);

    robot5= new robot();
    //scene->addItem(robot5);
    robot5->setSpeed(0);
    robot5->setAngle(0);

    robot5->setColor(0);

    robot6= new robot();
    //scene->addItem(robot6);
    robot6->setSpeed(0);
    robot6->setAngle(0);

    robot6->setColor(0);

    robot7= new robot();
    //scene->addItem(robot7);
    robot7->setSpeed(0);
    robot7->setAngle(180);

    robot7->setColor(1);

    robot8= new robot();
    //scene->addItem(robot8);
    robot8->setSpeed(0);
    robot8->setAngle(180);

    robot8->setColor(1);

    robot9= new robot();
    //scene->addItem(robot9);
    robot9->setSpeed(0);

    robot9->setAngle(180);
    robot9->setColor(1);

    robot10= new robot();
    //scene->addItem(robot10);
    robot10->setSpeed(0);
    robot10->setAngle(180);

    robot10->setColor(1);

    robot11= new robot();
    //scene->addItem(robot11);
    robot11->setSpeed(0);
    robot11->setAngle(180);

    robot11->setColor(1);

    robot12= new robot();
    //scene->addItem(robot12);

    robot12->setAngle(180);

    robot12->setColor(1);
    /*
    robot array[6];
    for (int var = 0; var <6; ++var) {
        array[var].setSpeed(6);
    }*/
    ball = new Ball();
    //rotate_Robot();














    updateTimer = new QTimer(this);

    connect(updateTimer,SIGNAL(timeout()),SLOT(updateWin()));
    updateTimer->start(30);


}

Field::~Field()
{
    delete ui;
}

void Field::rotate_Robot()
{
    GrSim_Client send;
    send.sendCommand(0,0,100,false,2,0,0,1);
    usleep(10);

    send.sendCommand(0,0,0,false,2,0,0,1);
}

void Field::updateWin()
{
    RoboCupSSLClient client;

    client.open(true);
    SSL_WrapperPacket packet;


    GrSim_Client grSim_client;
    int r=0;
    qreal a;
    qreal b;




    while(r<4)
    {
        if (client.receive(packet))
           {
               if (packet.has_detection())
               {
                   MainWindow w;
                   SSL_DetectionFrame detection = packet.detection();
                   int balls_n = detection.balls_size();
                   int robots_blue_n =  detection.robots_blue_size();
                   int robots_yellow_n =  detection.robots_yellow_size();
                   if(w.port_r==10006){
                       grsim=false;

                           if(balls_n==0 && ball_field){
                               scene->removeItem(ball);
                               ball_field=false;
                           }
                           if(balls_n>0 && ball_field==false){
                               scene->addItem(ball);
                               ball_field=true;

                           }
                           if(robots_blue_n==0 ){
                               if(rob1_field){
                                   scene->removeItem(robot1);
                                   rob1_field=false;
                               }
                               if(rob2_field){
                                   scene->removeItem(robot2);
                                   rob2_field=false;
                               }
                               if(rob3_field){
                                   scene->removeItem(robot3);
                                   rob3_field=false;
                               }
                               if(rob4_field){
                                   scene->removeItem(robot4);
                                   rob4_field=false;
                               }
                               if(rob5_field){
                                   scene->removeItem(robot5);
                                   rob1_field=false;
                               }
                               if(rob6_field){
                                   scene->removeItem(robot6);
                                   rob6_field=false;
                               }

                           }
                           if(robots_yellow_n==0 ){
                               if(rob7_field){
                                   scene->removeItem(robot7);
                                   rob7_field=false;
                               }
                               if(rob8_field){
                                   scene->removeItem(robot8);
                                   rob8_field=false;
                               }
                               if(rob9_field){
                                   scene->removeItem(robot9);
                                   rob9_field=false;
                               }
                               if(rob10_field){
                                   scene->removeItem(robot10);
                                   rob10_field=false;
                               }
                               if(rob11_field){
                                   scene->removeItem(robot11);
                                   rob11_field=false;
                               }
                               if(rob12_field){
                                   scene->removeItem(robot12);
                                   rob12_field=false;
                               }

                           }
                           for (int i=0;i<robots_blue_n;i++) {
                               SSL_DetectionRobot rob = detection.robots_blue(i);
                               if(rob.robot_id()==0 && rob1_field==false)
                               {
                                   scene->addItem(robot1);
                                   rob1_field=true;
                                   break;
                               }
                               else {
                                   if(rob1_field){
                                       scene->removeItem(robot1);
                                       rob1_field=false;
                                   }


                               }

                           }
                           for (int i=0;i<robots_blue_n;i++) {
                               SSL_DetectionRobot rob = detection.robots_blue(i);
                               if(rob.robot_id()==1 && rob2_field==false)
                               {
                                   scene->addItem(robot2);
                                   rob2_field=true;
                                   break;
                               }
                               else {
                                   if(rob2_field){
                                       scene->removeItem(robot2);
                                       rob2_field=false;
                                   }


                               }

                           }
                           for (int i=0;i<robots_blue_n;i++) {
                               SSL_DetectionRobot rob = detection.robots_blue(i);
                               if(rob.robot_id()==2 && rob3_field==false)
                               {
                                   scene->addItem(robot3);
                                   rob3_field=true;
                                   break;
                               }
                               else {
                                   if(rob3_field){
                                       scene->removeItem(robot3);
                                       rob3_field=false;
                                   }


                               }

                           }
                           for (int i=0;i<robots_blue_n;i++) {
                               SSL_DetectionRobot rob = detection.robots_blue(i);
                               if(rob.robot_id()==3 && rob4_field==false)
                               {
                                   scene->addItem(robot4);
                                   rob4_field=true;
                                   break;
                               }
                               else {
                                   if(rob4_field){
                                       scene->removeItem(robot4);
                                       rob4_field=false;
                                   }


                               }

                           }
                           for (int i=0;i<robots_blue_n;i++) {
                               SSL_DetectionRobot rob = detection.robots_blue(i);
                               if(rob.robot_id()==4 && rob5_field==false)
                               {
                                   scene->addItem(robot5);
                                   rob5_field=true;
                                   break;
                               }
                               else {
                                   if(rob5_field){
                                       scene->removeItem(robot5);
                                       rob5_field=false;
                                   }


                               }

                           }
                           for (int i=0;i<robots_blue_n;i++) {
                               SSL_DetectionRobot rob = detection.robots_blue(i);
                               if(rob.robot_id()==5 && rob6_field==false)
                               {
                                   scene->addItem(robot6);
                                   rob6_field=true;
                                   break;
                               }
                               else {
                                   if(rob6_field){
                                       scene->removeItem(robot6);
                                       rob6_field=false;
                                   }


                               }

                           }
                           for (int i=0;i<robots_yellow_n;i++) {
                               SSL_DetectionRobot rob = detection.robots_yellow(i);
                               if(rob.robot_id()==0 && rob7_field==false)
                               {
                                   scene->addItem(robot7);
                                   rob7_field=true;
                                   break;
                               }
                               else {
                                   if(rob7_field){
                                       scene->removeItem(robot7);
                                       rob7_field=false;
                                   }


                               }

                           }
                           for (int i=0;i<robots_yellow_n;i++) {
                               SSL_DetectionRobot rob = detection.robots_yellow(i);
                               if(rob.robot_id()==1 && rob8_field==false)
                               {
                                   scene->addItem(robot8);
                                   rob8_field=true;
                                   break;
                               }
                               else {
                                   if(rob8_field){
                                       scene->removeItem(robot8);
                                       rob8_field=false;
                                   }


                               }

                           }
                           for (int i=0;i<robots_yellow_n;i++) {
                               SSL_DetectionRobot rob = detection.robots_yellow(i);
                               if(rob.robot_id()==2 && rob9_field==false)
                               {
                                   scene->addItem(robot9);
                                   rob9_field=true;
                                   break;
                               }
                               else {
                                   if(rob9_field){
                                       scene->removeItem(robot9);
                                       rob9_field=false;
                                   }


                               }

                           }
                           for (int i=0;i<robots_yellow_n;i++) {
                               SSL_DetectionRobot rob = detection.robots_yellow(i);
                               if(rob.robot_id()==3 && rob10_field==false)
                               {
                                   scene->addItem(robot10);
                                   rob10_field=true;
                                   break;
                               }
                               else {
                                   if(rob10_field){
                                       scene->removeItem(robot10);
                                       rob10_field=false;
                                   }


                               }

                           }
                           for (int i=0;i<robots_yellow_n;i++) {
                               SSL_DetectionRobot rob = detection.robots_yellow(i);
                               if(rob.robot_id()==4 && rob11_field==false)
                               {
                                   scene->addItem(robot11);
                                   rob11_field=true;
                                   break;
                               }
                               else {
                                   if(rob11_field){
                                       scene->removeItem(robot11);
                                       rob11_field=false;
                                   }


                               }

                           }
                           for (int i=0;i<robots_yellow_n;i++) {
                               SSL_DetectionRobot rob = detection.robots_yellow(i);
                               if(rob.robot_id()==5 && rob12_field==false)
                               {
                                   scene->addItem(robot12);
                                   rob12_field=true;
                                   break;
                               }
                               else {
                                   if(rob12_field){
                                       scene->removeItem(robot12);
                                       rob12_field=false;
                                   }


                               }

                           }







                           for (int i = 0; i < balls_n; i++) {
                               SSL_DetectionBall balls = detection.balls(i);
                               a=balls.x()-0.03;
                               b=balls.y();

                               a=(a+5200)/10*win_adj;
                               b=(b+3700)/10*win_adj;
                               ball->setCoord(b,a);


                           }

                           for (int i = 0; i < robots_blue_n; i++)
                           {
                               SSL_DetectionRobot rob = detection.robots_blue(i);
                               //printf("-Robot(AZUL) (%2d/%2d): ",i+1, robots_blue_n);
                               //printRobotInfo(robot);
                               //printf("%i\n",rob.robot_id());


                               a=rob.x()-0.03;
                               b=rob.y();
                               a=(a+5200)/10*win_adj;
                               b=(b+3700)/10*win_adj;
                               if(rob.robot_id()==0 && rob1_field==false){
                                   robot1->setCoord(b,a);
                                   scene->addItem(robot1);
                                   rob1_field=true;
                               }
                               if(rob.robot_id()==1  && rob2_field==false){
                                   robot2->setCoord(b,a);
                                   scene->addItem(robot2);
                                   rob2_field=true;
                               }
                               if(rob.robot_id()==2 && rob3_field==false){
                                   robot3->setCoord(b,a);
                                   scene->addItem(robot3);
                                   rob3_field=true;
                               }
                               if(rob.robot_id()==3 && rob4_field==false){
                                   robot4->setCoord(b,a);
                                   scene->addItem(robot4);
                                   rob4_field=true;
                               }
                               if(rob.robot_id()==4 && rob5_field==false){
                                   robot5->setCoord(b,a);
                                   scene->addItem(robot5);
                                   rob5_field=true;
                               }
                               if(rob.robot_id()==5 && rob6_field==false){
                                   robot6->setCoord(b,a);
                                   scene->addItem(robot6);
                                   rob6_field=true;
                               }
                           }

                           for (int i = 0; i < robots_yellow_n; i++) {
                               SSL_DetectionRobot rob = detection.robots_yellow(i);

                               //printf("-Robot(AZUL) (%2d/%2d): ",i+1, robots_blue_n);
                               //printRobotInfo(robot);
                               qreal a;
                               qreal b;

                               a=rob.x()-0.03;
                               b=rob.y();
                               a=(a+5200)/10*win_adj;
                               b=(b+3700)/10*win_adj;


                               if(rob.robot_id()==0 && rob7_field==false){
                                   robot7->setCoord(b,a);
                                   scene->addItem(robot7);
                                   rob7_field=true;
                               }
                               if(rob.robot_id()==1  && rob8_field==false){
                                   robot8->setCoord(b,a);
                                   scene->addItem(robot8);
                                   rob8_field=true;
                               }
                               if(rob.robot_id()==2 && rob9_field==false){
                                   robot9->setCoord(b,a);
                                   scene->addItem(robot9);
                                   rob9_field=true;
                               }
                               if(rob.robot_id()==3 && rob10_field==false){
                                   robot10->setCoord(b,a);
                                   scene->addItem(robot10);
                                   rob10_field=true;
                               }
                               if(rob.robot_id()==4 && rob11_field==false){
                                   robot11->setCoord(b,a);
                                   scene->addItem(robot11);
                                   rob11_field=true;
                               }
                               if(rob.robot_id()==5 && rob12_field==false){
                                   robot12->setCoord(b,a);
                                   scene->addItem(robot12);
                                   rob12_field=true;
                               }







                           } r++;
                    }

                   else {
                       if(grsim){
                           scene->addItem(ball);
                           scene->addItem(robot1);
                           scene->addItem(robot2);
                           scene->addItem(robot3);
                           scene->addItem(robot4);
                           scene->addItem(robot5);
                           scene->addItem(robot6);
                           scene->addItem(robot7);
                           scene->addItem(robot8);
                           scene->addItem(robot9);
                           scene->addItem(robot10);
                           scene->addItem(robot11);
                           scene->addItem(robot12);
                           grsim=false;
                       }


                       for (int i = 0; i < balls_n; i++) {
                           SSL_DetectionBall balls = detection.balls(i);
                           a=balls.x()-0.03;
                           b=balls.y();

                           a=(a+5200)/10*win_adj;
                           b=(b+3700)/10*win_adj;
                           ball->setCoord(b,a);


                       }

                       for (int i = 0; i < robots_blue_n; i++)
                       {
                           SSL_DetectionRobot rob = detection.robots_blue(i);
                           //printf("-Robot(AZUL) (%2d/%2d): ",i+1, robots_blue_n);
                           //printRobotInfo(robot);
                           //printf("%i\n",rob.robot_id());


                           a=rob.x()-0.03;
                           b=rob.y();
                           a=(a+5200)/10*win_adj;
                           b=(b+3700)/10*win_adj;
                           if(rob.robot_id()==0){
                               robot1->setCoord(b,a);

                           }
                           if(rob.robot_id()==1  ){
                               robot2->setCoord(b,a);

                           }
                           if(rob.robot_id()==2 ){
                               robot3->setCoord(b,a);

                           }
                           if(rob.robot_id()==3 ){
                               robot4->setCoord(b,a);

                           }
                           if(rob.robot_id()==4){
                               robot5->setCoord(b,a);

                           }
                           if(rob.robot_id()==5 ){
                               robot6->setCoord(b,a);

                           }
                       }

                       for (int i = 0; i < robots_yellow_n; i++) {
                           SSL_DetectionRobot rob = detection.robots_yellow(i);

                           //printf("-Robot(AZUL) (%2d/%2d): ",i+1, robots_blue_n);
                           //printRobotInfo(robot);
                           qreal a;
                           qreal b;

                           a=rob.x()-0.03;
                           b=rob.y();
                           a=(a+5200)/10*win_adj;
                           b=(b+3700)/10*win_adj;


                           if(rob.robot_id()==0){
                               robot7->setCoord(b,a);

                           }
                           if(rob.robot_id()==1){
                               robot8->setCoord(b,a);

                           }
                           if(rob.robot_id()==2){
                               robot9->setCoord(b,a);

                           }
                           if(rob.robot_id()==3){
                               robot10->setCoord(b,a);

                           }
                           if(rob.robot_id()==4){
                               robot11->setCoord(b,a);

                           }
                           if(rob.robot_id()==5 ){
                               robot12->setCoord(b,a);

                           }
                       } r++;
                   }
                }
            }
    }

}

void Field::on_refForceStart_clicked()
{
    GrSim_Client send;
    send.sendCommand(1,0,0,false,2,0,0,1);
}




void Field::on_pushButton_2_clicked()
{
    GrSim_Client send;
    send.sendCommand(0,0,100,false,2,0,0,1);

    //robot1->setSpeed(0);
    //robot2->setSpeed(0);
    //robot8->setSpeed(0);
    //ball->setSpeed(2);

}

void Field::on_pushButton_3_clicked()
{   //robot1->setAngle(270);
    //robot2->setAngle(270);
    //robot8->setAngle(90);
    GrSim_Client send;
    send.sendCommand(1,0,0,false,2,3,3,1);

}

void Field::keyPressEvent(QKeyEvent *event)
{
    int v=2;
    int id=0;
    bool yellow=false;

    GrSim_Client send;
    switch (event->key()) {

    case Qt::Key_W:

        send.sendCommand(v,0,0,yellow,id,0,0,1);
        break;
    case Qt::Key_S:
        send.sendCommand(-v,0,0,yellow,id,0,0,1);
        break;
    case Qt::Key_D:
        send.sendCommand(0,0,25,yellow,id,0,0,-1);
        break;
    case Qt::Key_A:
        send.sendCommand(0,0,-5,yellow,id,0,0,1);
        break;
    case Qt::Key_Space:

        send.sendCommand(0,0,0,yellow,id,4,4,1);
        break;

    default:

        break;
    }

}

void Field::keyReleaseEvent(QKeyEvent *event)
{

    int id=0;
    bool yellow=false;

    GrSim_Client send;
    switch (event->key()) {

    case Qt::Key_W:

        send.sendCommand(0,0,0,yellow,id,0,0,1);
        break;
    case Qt::Key_S:
        send.sendCommand(0,0,0,yellow,id,0,0,1);
        break;
    case Qt::Key_D:
        send.sendCommand(0,0,0,yellow,id,0,0,-1);
        break;
    case Qt::Key_A:
        send.sendCommand(0,0,0,yellow,id,0,0,1);
        break;
    case Qt::Key_Space:

        send.sendCommand(0,0,0,yellow,id,4,4,1);
        break;

    default:

        break;
    }


}



