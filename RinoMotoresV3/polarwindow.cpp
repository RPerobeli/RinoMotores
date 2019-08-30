#include "polarwindow.h"
#include "ui_polarwindow.h"
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include "QMessageBox"
#include <iostream>
#include <../Eigen/Eigen/Dense>


using namespace Eigen;
using namespace std;



PolarWindow::PolarWindow(QWidget *parent, VectorXf* Valores) :
    QDialog(parent),
    ui(new Ui::PolarWindow)
{
    ui->setupUi(this);
    setWindowTitle("Gráfico Polar");
}

PolarWindow::~PolarWindow()
{
    delete ui;
}
