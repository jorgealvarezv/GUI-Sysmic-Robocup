#include "mainwindow.h"
#include <QApplication>

using namespace std;

int main(int argc, char *argv[])
{
    printf("Starting Asimov...");
    QApplication a(argc, argv);
    MainWindow w;
    //w.setWindowIcon(QIcon("./home/jorge/Desktop/Sysmic/Icons/Sysmic_Icon.png"));
    w.show();

    return a.exec();
}
