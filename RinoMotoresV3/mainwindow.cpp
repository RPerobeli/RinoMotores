#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "motoreswindow.h"
#include "results.h"
#include "QMessageBox"
#include "dadosrobo.h"
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
                   " clicando no botão Motores.\nO cálculo do motor indicado será feito ao pressionar o botão Calcular.\n"
                   "Para mais informações: Rodrigo.costa2015@engenharia.ufjf.br.\n");
    MsgBox.exec();
}

void MainWindow::on_Btn_Calcular_clicked()
{

}

void MainWindow::on_Btn_DadosRobo_clicked()
{
    DadosRobo Janela_Dados_Externos(this);
    Janela_Dados_Externos.exec();

}
