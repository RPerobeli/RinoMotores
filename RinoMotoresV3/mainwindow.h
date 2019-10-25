#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <motoreswindow.h>
#include <../Eigen/Eigen/Dense>
//#include <resultwindow.h>

using namespace Eigen;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void Database_Verify();

    void Limpa_CondicoesDeContorno();

    double Calc_Dados_Auxiliares(double Massa, double Comprimento, double CentroDeGravidade, double Gravidade, double CoefAtrito_estatico, int indice_QtdMotores,double E1,double E2);

    double* Calc_Reacoes_Apoio(double P, double L, double cg, double e1);

    int Verifica_Qtd_Motores();

private slots:
    void on_Btn_Motores_clicked();

    void on_Btn_Instrucoes_clicked();

    void on_Btn_Calcular_clicked();

    void on_Btn_DadosRobo_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
