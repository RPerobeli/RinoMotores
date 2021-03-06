﻿#include "mainwindow.h"
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

//define aqui em cima o caminho pros bancos de dados, dessa forma é possível usar diversos bancos diferentes
//#define DataBase "../RinoMotoresV3/db_Motores.db" //banco de dados geral com todos os motores existentes
#define DataBase "../RinoMotoresV3/db_Motoress.db" //banco de dados sucinto, mais restrito para comparações menores


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

    DbMotores.setDatabaseName(DataBase);

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
                   "Use ponto como separador decimal ao preencher os dados do robô.\nSelecione o foco de motor desejado dentre as opções.\nSe atente às unidades abordadas\nPreencha a base de dados dos motores"
                   " clicando no botão Motores.\nO cálculo do motor indicado será feito ao pressionar o botão Calcular.\n"
                   "Ao informar a Redução do motor, caso o motor tenha redução X:1, informar apenas o valor X.\n"
                   "Para mais informações: Rodrigo.costa2015@engenharia.ufjf.br.\n");
    MsgBox.exec();
}

void MainWindow::on_Btn_Calcular_clicked()
{
    MatrixXd Result;
    MatrixXd* Pointer_Result = &Result;
    bool chavePot = false;
    //É necessário saber qual a aplicação do robô antes de calcular qualquer coisa
    int indiceAplicacao = ui->comboBox_Aplicacao->currentIndex();
    if(indiceAplicacao == 0)
    {
        QMessageBox MsgBox;
        MsgBox.setText("Selecione a aplicação do robô");
        MsgBox.exec();
    }else if(ui->comboBox->currentIndex() != 0)
    {
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

            //Uma vez que a aplicação é válida, calcular os dados auxiliares --> torque máximo até o robô derrapar
            double torqueMaximo = Calc_Dados_Auxiliares(Massa,Comprimento,CentroDeGravidade,Gravidade,CoefAtrito_estatico,indice_QtdMotores,E1,E2);
//            QString torqueMaximo_str = QString::number(torqueMaximo,'g',6);
//            QSqlQuery query2;
//            query2.prepare("update tb_CondicoesContorno "
//                           "set torqueMaximo = '"+torqueMaximo_str+"' where excluir = 'true'");
//            if(query2.exec())
//            {
//                qDebug()<<"sucesso ao atualizar o torque de derrapagem";
//            }else
//            {
//                qDebug()<<"DEU RUIM NA DERRAPAGEM";
//            }


            //obtém a quantidade de motores no banco de dados
            int QtdMotores = MainWindow::Verifica_Qtd_Motores();
            int indicePesos = ui->comboBox->currentIndex();
            QString QtdMotores_str = QString::number(QtdMotores);
            qDebug()<<"quantidade de motores no banco: "+QtdMotores_str;

            //confere qual a aplicação, e resolve o sistema de EDOs
            switch(indiceAplicacao)
            {
                case 1:
                {
                    qDebug()<<"Mini-sumô";
                    Result = Resultado_Final_Minisumo(Massa,Raio,ForcaResistente,indice_QtdMotores,Gravidade,QtdMotores,indicePesos,torqueMaximo);


                }break;
                case 2:
                {
                    qDebug()<<"Seguidor";
                    //MatrixXd Result = Resultado_Final_Seguidor();
                }break;
                case 3:
                {
                    qDebug()<<"VSSS";
                    //MatrixXd Result = Resultado_Final_VSSS();
                }break;
                case 4:
                {
                    qDebug()<<"Outros";
                    //MatrixXd Result = Resultado_Final_Outro();
                }break;
                case 5:
                {
                    qDebug()<<"Analise de Potencia";
                    Result = Analise_de_Potencias(QtdMotores);
                    chavePot = true;
                }
                default:
                    qDebug()<<"erro no switch case";
                    break;
            }
            //Salva a matriz de notas finais em uma Tabela do banco de dados


            //Abre a Janela de Resultados
            Results Result_Window(this, Pointer_Result, chavePot);
            Result_Window.exec();
        }else
        {
        QMessageBox MsgBox;
        MsgBox.setText("Erro ao adquirir os dados do robô");
        MsgBox.exec();
        }
    }else
    {
        QMessageBox MsgBox;
        MsgBox.setText("Selecione um foco para o motor");
        MsgBox.exec();
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

    QString CoefAtrito_estatico= "0.56";
    QString Gravidade = "9.81";
    QString ForcaResistente = "3.5";
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

double MainWindow::Calc_Dados_Auxiliares(double Massa, double Comprimento, double CentroDeGravidade, double Gravidade, double CoefAtrito_estatico, int indice_QtdMotores,double E1,double E2)
{
    //Função que calcula reações de apoio, forças de atrito, ... COLOCAR MAIS SE TIVE
        //Calcula reações de apoio:
        double Peso = (Massa*Gravidade)/1000; //g --> kg
        double *reacoes = new double[2];
        double torqueMaximo = 0; //torque máximo até derrapagem

        if(indice_QtdMotores == 1 || indice_QtdMotores == 2)
        {
            reacoes = Calc_Reacoes_Apoio(Peso, Comprimento, CentroDeGravidade, E1);

            //QString reacoes0 = QString::number(reacoes[0]);
            //QString reacoes1 = QString::number(reacoes[1]);
            //qDebug()<<"Reacao traseiro ="+ reacoes0;
            //qDebug()<<"Reacao dianteiro ="+ reacoes1;

            //Força de atrito na lamina:
            //double F_lamina = CoefAtrito_estatico*reacoes[1];
            //Torque maximo até derrapar:
            torqueMaximo = CoefAtrito_estatico*reacoes[0]/2;

        }else
        {
            reacoes = Calc_Reacoes_Apoio(Peso, E2, CentroDeGravidade, E1);
            //Torque maximo até derrapar:
            torqueMaximo = CoefAtrito_estatico*reacoes[0]/2;
        }
        return torqueMaximo;
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

int MainWindow::Verifica_Qtd_Motores()
{

    QSqlQuery query;
    query.prepare("select * from tb_Motores");
    int n=0;
    if(query.exec())
    {
        while(query.next())
        {
            n++;
        }
        return n;
    }else
    {
        return -1;
    }
}
