#include "mainwindow.h"
#include <QApplication>
#include<processor.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowIcon(QIcon("./home/jorge/Desktop/Sysmic/Icons/Sysmic_Icon.png"));
    w.show();

    return a.exec();
}
