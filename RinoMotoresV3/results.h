#ifndef RESULTS_H
#define RESULTS_H

#include <QDialog>
#include <../Eigen/Eigen/Dense>
#include "mainwindow.h"
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include "QMessageBox"

using namespace Eigen;

namespace Ui {
class Results;
}

class Results : public QDialog
{
    Q_OBJECT

public:
    explicit Results(QWidget *parent = nullptr, MatrixXd *Matrix = nullptr);
    ~Results();

    void Preenche_Tabela_Resultados(MatrixXd matriz);

private slots:
    void on_Btn_Fechar_clicked();

private:
    Ui::Results *ui;
};

#endif // RESULTS_H
