#include "mainwindow.h"

#include <QApplication>

#include <stdio.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    if (argc > 1)
    {
        printf("Hello World!\n");
        fflush(stdout);
        return 0;
    }
    
    return a.exec();
}
