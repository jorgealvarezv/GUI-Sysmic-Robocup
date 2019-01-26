#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "robot.h"
#include"field.h"
#include<QLayout>
#include "net/robocup_ssl_client.h"

#include <QWidget>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Field *field=new Field(this);
    setCentralWidget(field);


    Field(this);







    field->show();


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_Start_triggered()
{

}

void MainWindow::on_actionUse_camera_triggered(bool checked)
{
    if(checked)
    {
        port_r=10020;
    }
    else {
        port_r=10020;
    }

}
