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
#include <libcalculus.h>

//Salva o banco de dados em uma variável
static QSqlDatabase DbMotores = QSqlDatabase::addDatabase("QSQLITE");

static float raioDojo = 36.5;

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
    //É necessário saber qual a aplicação do robô antes de calcular qualquer coisa
    int indiceAplicacao = ui->comboBox_Aplicacao->currentIndex();
    if(indiceAplicacao == 0)
    {
        QMessageBox MsgBox;
        MsgBox.setText("Selecione a aplicação do robô");
        MsgBox.exec();
    }else
    {
        //Uma vez que a aplicação é válida, calcular os dados auxiliares
        Calc_Dados_Auxiliares();
        //confere qual a aplicação, e resolve o sistema de EDOs
        switch(indiceAplicacao)
        {
            case 1:
                qDebug()<<"Mini-sumô";

                break;
            case 2:
                qDebug()<<"Seguidor";
                break;
            case 3:
                qDebug()<<"VSSS";
                break;
            case 4:
                qDebug()<<"Outros";
                break;
        }
    }

}

void MainWindow::on_Btn_DadosRobo_clicked()
{
    //É necessário saber qual a aplicação do robô para poder validar os dados
    int indiceAplicacao = ui->comboBox_Aplicacao->currentIndex();

    if(indiceAplicacao == 0)
    {
        QMessageBox MsgBox;
        MsgBox.setText("Selecione a aplicação do robô");
        MsgBox.exec();
    }else
    {
        qDebug()<<"Aplicação válida";
        DadosRobo Janela_Dados_Externos(this,indiceAplicacao);
        Janela_Dados_Externos.exec();
    }



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

    QString CoefAtrito_estatico= "0.6";
    QString Gravidade = "9.81";
    QString ForcaResistente = "40";
    //Após limpar, ela insere 1 unico conjunto de dados padrao
    query.prepare("insert into tb_CondicoesContorno (Massa,Raio,Comprimento,CentroDeGravidade,Gravidade,CoefAtrito,ForcaResistente,Indice_QtdMotores,e1,e2,excluir)"
                  " values('',' ','','','"+Gravidade+"','"+CoefAtrito_estatico+"','"+ForcaResistente+"','0','','','true')");
     if(query.exec())
     {
        qDebug()<<"SUCESSO ao atualizar registro";

     }
     else
     {
        qDebug()<<"Erro ao atualizar registro";
     }
}

void MainWindow::Calc_Dados_Auxiliares()
{
    //Função que calcula reações de apoio, forças de atrito, ... COLOCAR MAIS SE TIVER
    QSqlQuery query;
    query.prepare("select * from tb_CondicoesContorno where excluir = 'true'");
    if(query.exec())
    {
        //Pega os dados no banco de dados
        query.first();
        double Massa = query.value(1).toDouble();
        double Raio = query.value(2).toDouble();
        double Comprimento = query.value(3).toDouble();
        double CentroDeGravidade = query.value(4).toDouble();
        double Gravidade = query.value(5).toDouble();
        double CoefAtrito_estatico = query.value(6).toDouble();
        double ForcaResistente = query.value(7).toDouble();
        int indice_QtdMotores = query.value(8).toInt();
        double E1 = query.value(9).toDouble();
        double E2 = query.value(10).toDouble();

        //Calcula reações de apoio:
        double Peso = (Massa*Gravidade)/1000;
        double *reacoes = new double[2];

        if(indice_QtdMotores == 1 || indice_QtdMotores == 2)
        {
            reacoes = Calc_Reacoes_Apoio(Peso, Comprimento, CentroDeGravidade, E1);

            QString reacoes0 = QString::number(reacoes[0]);
            QString reacoes1 = QString::number(reacoes[1]);

            //qDebug()<<"Reacao traseiro ="+ reacoes0;
            //qDebug()<<"Reacao dianteiro ="+ reacoes1;

            //Força de atrito na lamina:
            double F_lamina = CoefAtrito_estatico*reacoes[1];

        }else
        {
            reacoes = Calc_Reacoes_Apoio(Peso, E2, CentroDeGravidade, E1);
        }

        //Torque maximo até derrapar:
        double torqueMaximo = CoefAtrito_estatico*reacoes[0];



    }else
    {
        QMessageBox MsgBox;
        MsgBox.setText("Erro ao adquirir os dados do robô");
        MsgBox.exec();
    }
}

double* MainWindow::Calc_Reacoes_Apoio(double P, double L, double cg, double e1)
{
    //alocação dinamica de dados
    double *r = new double[2];

    //Reacao no eixo traseiro
    r[0] = P*(1-(1/L)*(cg-e1));
    //Reacao no eixo dianteiro(caso tenha) ou na lamina
    r[1] = (P/L)*(cg-e1);
    return r;
}
