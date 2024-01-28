#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <stdlib.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    strtol("123", 0, 10);
}

MainWindow::~MainWindow()
{
    delete ui;
}

