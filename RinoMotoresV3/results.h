#ifndef RESULTS_H
#define RESULTS_H

#include <QDialog>
#include <../Eigen/Eigen/Dense>
#include "mainwindow.h"
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include "QMessageBox"
#include "polarwindowmain.h"

using namespace Eigen;

namespace Ui {
class Results;
}

class Results : public QDialog
{
    Q_OBJECT

public:
    explicit Results(QWidget *parent = nullptr, MatrixXd *Matrix = nullptr, bool analisePot = false);
    ~Results();

    void Preenche_Tabela_Resultados(MatrixXd matriz);
    void Preenche_Tabela_Analise_Potencia(MatrixXd matriz);

private slots:
    void on_Btn_Fechar_clicked();

    void on_Btn_Detalhes_clicked();

    void on_Btn_PlotPolar_clicked();

    void on_tableWidget_Ranking_cellClicked();

private:
    Ui::Results *ui;
    PolarWindowMain *Polarwindow;
};

#endif // RESULTS_H
