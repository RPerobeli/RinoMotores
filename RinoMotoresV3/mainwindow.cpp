#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "motoreswindow.h"
#include "results.h"
#include "QMessageBox"
#include <../Eigen/Eigen/Dense>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Rinobot Team - Cálculo de Motores");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Btn_Motores_clicked()
{
    MotoresWindow JanelaMotores(this);
    JanelaMotores.exec();
}

void MainWindow::on_Btn_Instrucoes_clicked()
{
    QMessageBox MsgBox;
    MsgBox.setText("Instruções,\n"
                   "Bem vindo ao software de cálculo de motores da Rinobot Team.\nPara o uso correto do software:\n"
                   "Use ponto como separador decimal ao preencher os dados do robô.\nSelecione o tipo de motor desejado dentre as opções.\nSe atente às unidades abordadas\nPreencha a base de dados dos motores"
                   " clicando no botão Motores.\nO cálculo do motor indicado será feito ao pressionar o botão Calcular.\n");
    MsgBox.exec();
}

void MainWindow::on_Btn_Calcular_clicked()
{
    //Recebe dados do robô (Raio da roda, massa do robô e numero de motores)
    QString Raio_str= ui->lineEdit_7->text();
    QString massa_str;ui->lineEdit_8->text();
    QString Qtd_motores_str=ui->lineEdit_14->text();
    QString posCG_str = ui->Edit_CG->text();

    //Transforma dados do tipo string em dados do tipo numérico
    double Raio=Raio_str.toDouble();
    double massa=massa_str.toDouble();
    double Qtd_motores=Qtd_motores_str.toDouble();
    double posCG = posCG_str.toDouble();

    int Unidade = ui->Uni_Raio->currentIndex(); //Adequação de unidades para Raio da roda
    switch(Unidade)
    {
        case 0: Raio = Raio/1000; //mm->m
        break;
        case 1: Raio = Raio/10; //mm->cm
        break;
    }
    Unidade = ui->Uni_massa->currentIndex(); //Adequação de unidades para massa
    switch(Unidade)
    {
        case 0:massa = massa/1000; //g->kg
        break;
    }

}
