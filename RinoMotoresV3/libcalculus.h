#ifndef LIBCALCULUS_H
#define LIBCALCULUS_H

#include <../Eigen/Eigen/Dense>
#include <iostream>
#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include "QMessageBox"
#include <motoreswindow.h>

using namespace Eigen;
using namespace std;

#define R 7
#define l 0.01
#define h 0.001
#define raioDojo 77/2
#define pi 3.141589


void Adequa_Unidades(double *Torque_max,double *Kv,double *Rot_max, double *Massa, double *Raio, double *Kt, double g)
{
    //recebe endereço de memoria, o *Variável é o valor da variável
    *Torque_max = *Torque_max*g/1000; //kg.mm --> N.m
    *Kv = *Kv*30/pi; // V/rpm --> V.s/rad
    *Rot_max = *Rot_max *pi/30; // rpm --> rad/s
    *Massa = *Massa/1000; //g --> kg
    *Raio = *Raio/1000; //mm --> m
    *Kt = *Kt*g/1000; // kg.mm/A --> N.m/A
    return;
}

int Verifica_Num_Motores(int indice_QtdMotores)
{
    int n=0;
    switch(indice_QtdMotores)
    {
    case 1:
        n = 1;
        break;
    case 2:
        n = 2;
        break;
    case 3:
        n = 2;
        break;
    case 4:
        n = 4;
        break;
    }
    return n;
}
MatrixXd RungeKutta4(Vector3d X_0, double F_res, double V, double Kt, double Kv, double GearRatio, double m,double r, double limite, int indiceTeste)
{
    Vector3d X(3);
    X << X_0[0],X_0[1],X_0[2];

    double t = 0;
    int cont = 0;

    MatrixXd MatrizResultados;

    while((X(indiceTeste)>-limite) && (X(indiceTeste)<limite))
    {
        //armazenamento das variáveis
        MatrizResultados(0,cont) = X[0];//corrente
        MatrizResultados(1,cont) = X[1];//velocidade
        MatrizResultados(2,cont) = X[2];//posição
        MatrizResultados(3,cont) = t;

        //equações do sistema
        double eq1 = V/l -((R/l)*X(0))-(((Kv*GearRatio)/(l*r))*X(0));
        double eq2 = ((Kt*GearRatio)/(m*r)*X(0)-(F_res/m));
        double eq3 = X(1);

        Vector3d F1; F1 << eq1, eq2, eq3;
        Vector3d F2 = F1 + (h/2)*F1;
        Vector3d F3 = F1 + (h/2)*F2;
        Vector3d F4 = F1 + h*F3;

        Vector3d X_n = X + (h/6)*(F1+ 2*F2 + 2*F3 + F4);
        //Vector3d X_n = X+h*F1;

        t = t+h;
        X = X_n;
        cont++;
    }
    return MatrizResultados;
}

Matrix2d Resultado_Final_Minisumo(double Massa,double Raio, double ForcaResistente,int indice_QtdMotores, double Gravidade)
{
    //obtém a quantidade de motores:
    int numMotores = Verifica_Num_Motores(indice_QtdMotores);
    //faz o loop para todos os testes e motores
    QSqlQuery query;
    query.prepare("select * from tb_Motores");
    if(query.exec())
    {
        MatrixXd notasTestes;
        int cont=0;
        Vector3d X_0; X_0 << 0,0,0;
        while(query.next())//enquanto houver um motor
        {

            //adquire as variáveis
            double ID = query.value(0).toDouble();
            //QString Fabricante = query.value(1).toString();
            double Reducao = query.value(2).toDouble();
            double Kt = query.value(3).toDouble();
            double Kv = query.value(4).toDouble();
            double Tensao = query.value(5).toDouble();
            //double I_max = query.value(6).toDouble();
            //double I_min = query.value(7).toDouble();
            double Rot_max = query.value(8).toDouble();
            double Torque_max = query.value(9).toDouble();
            double Preco = query.value(10).toDouble();


            Adequa_Unidades(&Torque_max,&Kv,&Rot_max,&Massa,&Raio,&Kt,Gravidade);

            double v_max = Rot_max*Raio; // em m/s

            //Pega o valor de preço e valor de velocidade maxima
            notasTestes(5,cont) = Preco;
            notasTestes(6,cont) = v_max;

            //Teste de Arrancada
            MatrixXd ResultadosArrancada = RungeKutta4(X_0,0, Tensao, Kt, Kv, Reducao, Massa, Raio, v_max,2);

            //Teste de Reversão

            MatrixXd ResultadosReversao;

            //Teste do Empurrão
            ForcaResistente = ForcaResistente/numMotores;
            MatrixXd ResultadosEmpurrao;


            //Eficiência no ponto de operação


            //faz ponderação
            Matrix2d notasFinais;
            //faz ordenação
            //retorna a matriz de resultados, com ID e nota


        return notasFinais;
        }
    }else
    {
        QMessageBox MsgBox;
        MsgBox.setText("Erro ao adquirir os dados do robô");
        MsgBox.exec();

    }
}
















/*
double* Resultado_Final_Seguidor()
{
    //faz o loop para todos os testes e motores
    //faz ponderação
    //faz ordenação
    //retorna a matriz de resultados, com ID e nota
    return;
}
double* Resultado_Final_VSSS()
{
    //faz o loop para todos os testes e motores
    //faz ponderação
    //faz ordenação
    //retorna a matriz de resultados, com ID e nota
    return;
}*/



#endif // LIBCALCULUS_H
