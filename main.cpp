#include "mainwindow.h"
#include <QApplication>
#include <stdio.h>

using namespace std;

void test()
{
    printf("Well, hello world\n");
}

void test1()
{
    printf("Q wea te pasa xd\n");
}

int main(int argc, char *argv[])
{
    printf("Starting Asimov...\n\n");

    //printf("argv: %s", argv[1]);

    bool sim = false;

    for (int i = 1; i < argc; i++) {
        const char* var = argv[i];
        if (strcmp (var, "-sim") == 0) {
            sim = true;
            printf("well hello\n");
        }
    }

    printf("Running on %s\n", sim ? "simulation (port 10020)" :  "real hardware"); // puro humo por ahora => TODO implement dynamic port changing

    QApplication a(argc, argv);

    QTimer timer;
    QObject::connect(&timer, &QTimer::timeout, test);
    QObject::connect(&timer, &QTimer::timeout, test1);
    timer.start(500);


    MainWindow w;
    //w.setWindowIcon(QIcon("./home/jorge/Desktop/Sysmic/Icons/Sysmic_Icon.png"));
    w.show();

    return a.exec();
}
