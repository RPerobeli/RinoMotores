#ifndef POLARWINDOW_H
#define POLARWINDOW_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include "QMessageBox"
#include <iostream>
#include <../Eigen/Eigen/Dense>

using namespace Eigen;

namespace Ui {
class PolarWindow;
}

class PolarWindow : public QDialog
{
    Q_OBJECT

public:
    explicit PolarWindow(QWidget *parent = nullptr, VectorXf *Valores = nullptr);
    ~PolarWindow();

private:
    Ui::PolarWindow *ui;
};

#endif // POLARWINDOW_H
