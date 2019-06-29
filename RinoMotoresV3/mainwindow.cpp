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

//Salva o banco de dados em uma variável
static QSqlDatabase DbMotores = QSqlDatabase::addDatabase("QSQLITE");

void MainWindow::Database_Verify()
{
    //Confere se o banco de dados foi aberto
    if(!DbMotores.open())
    {
        //Caixa de mensagem que aparece quando há erro ao abrir o banco de dados
        QMessageBox ErroOpenDb;
        ErroOpenDb.setText("Erro ao abrir ao banco de dados!");
        ErroOpenDb.exec();
        return;
    }
    else
    {
       qDebug()<<"Banco Aberto";
    }
    if(!DbMotores.isOpen())
    {
        //Caixa de mensagem que aparece quando há erro ao conectar com o banco de dados
        QMessageBox ErroOpenDb;
        ErroOpenDb.setText("Erro ao conectar o banco de dados!");
        ErroOpenDb.exec();
        return;
    }
    else
    {
       qDebug()<<"Conectado ao Banco";
    }
    return;
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Rinobot Team - Cálculo de Motores");

    DbMotores.setDatabaseName("../RinoMotoresV3/db_Motores.db");

    Database_Verify();
    Limpa_CondicoesDeContorno();


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

void MainWindow::Limpa_CondicoesDeContorno()
{
    //Função que limpa a tabela de condições de contorno e cria uma única linha com valores padrão
    QSqlQuery query;
    query.prepare("delete from tb_CondicoesContorno");

    if(query.exec())
    {
        qDebug()<<"Excluiu corretamente";
    }
    else
    {
        qDebug()<<"Falha na exclusão";
    }

    QString CoefAtrito = "0.6";
    QString Gravidade = "9.81";
    QString ForcaResistente = "40";
    //Após limpar, ela insere 1 unico conjunto de dados padrao
    query.prepare("insert into tb_CondicoesContorno (Massa,Raio,Comprimento,CentroDeGravidade,Gravidade,CoefAtrito,ForcaResistente,Indice_QtdMotores,e1,e2,excluir)"
                  " values('',' ','','','"+Gravidade+"','"+CoefAtrito+"','"+ForcaResistente+"','0','','','true')");
     if(query.exec())
     {
        qDebug()<<"SUCESSO ao atualizar registro";

     }
     else
     {
        qDebug()<<"Erro ao atualizar registro";
     }
}
