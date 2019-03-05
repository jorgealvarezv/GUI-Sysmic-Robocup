#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<field.h>
#include<QGraphicsItem>
#include<QPainter>
#include<QGraphicsEllipseItem>
#include<QGraphicsScene>
#include<robot.h>



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    int port_r=10020;
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_action_Start_triggered();


private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
