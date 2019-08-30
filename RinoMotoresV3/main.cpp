#include "mainwindow.h"
#include <QApplication>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <iostream>
#include <../Eigen/Eigen/Dense>
#include "polarwindowmain.h"


using namespace Eigen;
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
