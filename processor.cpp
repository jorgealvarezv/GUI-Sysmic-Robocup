#include "processor.h"
#include"field.h"
#include<QWidget>
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
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "robot.h"
#include"field.h"
#include<QLayout>

#include <QWidget>
#include<QtNetwork>
#include<unistd.h>






