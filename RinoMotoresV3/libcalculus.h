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
#include "math.h"

using namespace Eigen;
using namespace std;

#define R 7
#define l 0.01
#define h 0.001
#define raioDojo 0.77/2
#define pi 3.141589
#define erro 0.00001 //erro permitido pelo metodo rungekutta
//#define B 0.0005 //constante de atrito viscoso
#define B 0.00001
#define Grav 9.81

MatrixXd Ponderacao(int indice,MatrixXd notasModuladas,MatrixXd notasTestes)
{

    MatrixXd PesosMinisumo(4,6);
                    //Arrancada / Reversao / Empurrao / eficiencia / Preco / velMax
    PesosMinisumo << 0.25,       0.25,      0.1,        0.05,       0.05,    0.3,  //Rapido
                     0.20,       0.20,      0.3,        0.05,       0.1,    0.15, //Forte
                     0.15,       0.15,       0.15,       0.3,        0.1,   0.15, //Eficiente
                     0.15,       0.15,      0.15,        0.1,       0.3,    0.15; //Barato
    //cout <<"Pesos:\n"<<PesosMinisumo<<endl;

    MatrixXd notasPesadas(3,notasModuladas.cols());
    notasPesadas = MatrixXd::Zero(3,notasModuladas.cols());
    for(int i=0;i<notasPesadas.cols();i++)
    {
        notasPesadas(0,i) = notasTestes(0,i); //ID do motor
        notasPesadas(2,i) = notasTestes(8,i); //Flag se derrapa ou não
        for(int j=1;j<notasModuladas.rows();j++)
        {
            notasPesadas(1,i) = notasPesadas(1,i)+ PesosMinisumo(indice-1,j-1)*notasModuladas(j,i);
        }
    }
    return notasPesadas;
}

double Maior(double q, double Maior)
{
    //função que guarda o maior valor dentre 2 valores
    if(q <= Maior)
    {
        return Maior;
    }else
    {
        return q;
    }
}

double Absolute(double x)
{
    //função calcula módulo
    if(x<0)
    {
        return -x;
    }else
    {
        return x;
    }
}

MatrixXd Modula_Notas(VectorXd vetorDeMaximos, MatrixXd notasTestes)
{
    //função que recebe vetor com as notas e vetor com os máximos, e retorna um vetor com as notas moduladas
    MatrixXd notasModuladas(7,notasTestes.cols());

    for(int cont=0;cont<notasTestes.cols();cont++)
    {
        //Armazena o ID
        notasModuladas(0,cont) = notasTestes(0,cont);
        //Tempos:
        notasModuladas(1,cont) = Absolute((-5/vetorDeMaximos(0))*notasTestes(1,cont)+5); //Arrancada
        notasModuladas(2,cont) = Absolute((-5/vetorDeMaximos(1))*notasTestes(2,cont)+5); //Reversão

        //Empurrão
        if(notasTestes(7,cont) != 0) //confere a flag se o motor falhou em empurrar
        {
            notasModuladas(3,cont) = 0;
        }else
        {
            notasModuladas(3,cont) = Absolute((-5/vetorDeMaximos(2))*notasTestes(3,cont)+5);
        }

        //eficiencia
        if(vetorDeMaximos(3)==0)
        {
            notasModuladas(4,cont) = 0;
        }else
        {
            notasModuladas(4,cont) = Absolute((5/vetorDeMaximos(3))*notasTestes(4,cont));
        }

        //preço
        notasModuladas(5,cont) = Absolute((-5/vetorDeMaximos(4))*notasTestes(5,cont)+5);
        //vel maxima
        if(vetorDeMaximos(5)==0)
        {
            notasModuladas(6,cont) = 0;
        }else
        {
            notasModuladas(6,cont) = Absolute((5/vetorDeMaximos(5))*notasTestes(6,cont));
        }
    }
    return notasModuladas;
}

MatrixXd Ordena_Matriz(MatrixXd matrix)
{
    //Ordena a matriz de acordo com a NOTA obtida
    //cout <<"matrix:\n"<< *matrix <<endl;
    Vector2d aux; aux<<0,0;
    for(int i = 0;i<matrix.cols();i++)
    {
        for(int j=i+1; j<matrix.cols();j++)
        {
            if(matrix(1,i)<matrix(1,j))
            {
                aux(0) = matrix(0,i);
                aux(1) = matrix(1,i);

                matrix(0,i) = matrix(0,j);
                matrix(1,i) = matrix(1,j);

                matrix(0,j) = aux(0);
                matrix(1,j) = aux(1);
            }
        }
    }
    return matrix;
}

void Adequa_Unidades_Robo_SI(double *Massa,double *Raio)
{
    *Massa = *Massa/1000; //g --> kg
    *Raio = *Raio/1000; //mm --> m
/*
    QString massa_str = QString::number(*Massa,'g',6);
    QString Raio_str = QString::number(*Raio,'g',6);
    qDebug()<<"Massa= "+massa_str+"kg  Raio= "+Raio_str+"m";
*/
}

void Adequa_Unidades_SI(double *Torque_max,double *Kv,double *Rot_max, double *Kt, double g)
{
    //qDebug()<<"Adequou as unidades";
    //recebe endereço de memoria, o *Variável é o valor da variável
    *Torque_max = *Torque_max*g/1000; //kg.mm --> N.m
    *Kv = *Kv*30/pi; // V/rpm --> V.s/rad
    *Rot_max = *Rot_max *pi/30; // rpm --> rad/s
    *Kt = *Kt*g/1000; // kg.mm/A --> N.m/A

    /*QString T_max = QString::number(*Torque_max,'g',6);
    QString Kv_str = QString::number(*Kv,'g',6);
    QString Rot_max_str = QString::number(*Rot_max,'g',6);
    //QString Kt_str = QString::number(*Kt,'g',6);

    qDebug()<< "T_max= "+T_max+"Nm  Kv="+Kv_str+"Vs/rad  Rot_max="+Rot_max_str+"rad/s  Kt= "+Kt_str+"";
    */

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

void Grava_Notas_Moduladas(MatrixXd notasModuladas)
{
    QSqlQuery query;

    query.prepare("delete from tb_Modulacao");
    if(query.exec())
    {
        qDebug()<<"Sucesso em Excluir Notas Moduladas";
    }
    for(int i=0; i<notasModuladas.cols();i++)
    {
        QString id = QString::number(notasModuladas(0,i),'g',6);
        QString tArr = QString::number(notasModuladas(1,i),'g',6);
        QString tRev = QString::number(notasModuladas(2,i),'g',6);
        QString tEmp = QString::number(notasModuladas(3,i),'g',6);
        QString Eff = QString::number(notasModuladas(4,i),'g',6);
        QString Preco = QString::number(notasModuladas(5,i),'g',6);
        QString vel_max = QString::number(notasModuladas(6,i),'g',6);
        query.prepare("insert into tb_Modulacao (ID,tempoArrancada,tempoReversao,tempoEmpurrao,eficiencia,preco,vel_max)"
                      "values('"+id+"','"+tArr+"','"+tRev+"','"+tEmp+"','"+Eff+"','"+Preco+"','"+vel_max+"')");
        if(query.exec())
        {
            //qDebug()<<"Sucesso em Gravar Notas Moduladas";
        }else
        {
            qDebug()<<"Erro em Gravar Notas Moduladas";
        }
    }

}
//Vector3d Array_Final(MatrixXd resultados)
//{
//    cout <<"Entrou no ArrayFinal"<<endl;
//    int i = resultados.cols();
//    //QString i_str = QString::number(i);
//    //qDebug()<<"numero de colunas:"+i_str;

//    Vector3d X_final;   X_final << resultados(3,i-1), //tempo
//                                   resultados(0,i-1), //corrente elétrica
//                                   resultados(1,i-1); //velocidade linear
//    cout << "X_final\n" << X_final <<endl;
//    return X_final;
//}

VectorXd RungeKutta4_limitado(Vector3d X_0, double F_res, double V, double Kt, double Kv, double GearRatio, double m,double r)
{
    //qDebug()<<"Entrou no RK4 limitado";
    Vector3d X(3); X << 0,0,0;
    VectorXd Result(5); Result<<0,0,0,0,0;
    double t = 0;
    int cont = 0;


    X << X_0(0),X_0(1),X_0(2);

/*
    QString Fres = QString::number(F_res,'g',6);
    QString tensao = QString::number(V,'g',6);
    QString Kt_str = QString::number(Kt,'g',6);
    QString Kv_str = QString::number(Kv,'g',6);
    QString reducao = QString::number(GearRatio,'g',6);
    QString massa = QString::number(m,'g',6);
    QString raio = QString::number(r,'g',6);
    qDebug()<<"F= "+Fres+" V= "+tensao+" Kt= "+Kt_str+" Kv= "+Kv_str;
*/

    //MatrixXd MatrizResultados(4,10000); //4,10000

    while((X(2)>-raioDojo) && (X(2)<raioDojo)) //posição dentro do dohyo
    {

        //cout<<"while do RK4 - iteracao "<< cont<<endl;

        //armazenamento das variáveis
        Result << X(0),X(1),X(2),t,0;
        //MatrizResultados(0,cont) = X(0);//corrente
        //MatrizResultados(1,cont) = X(1);//velocidade
        //MatrizResultados(2,cont) = X(2);//posição
        //MatrizResultados(3,cont) = t;   //tempo

        //equações do sistema
        double eq1 = V/l -((R/l)*X(0))-(((Kv*GearRatio)/(l*r))*X(1));
        double eq2 = ((Kt*GearRatio)/(m*r)*X(0)-(F_res/m) - (B*GearRatio)/(m*r*r)*X(1));
        double eq3 = X(1);

        Vector3d F1; F1 << eq1, eq2, eq3;
        Vector3d F2 = F1 + (h/2)*F1;
        Vector3d F3 = F1 + (h/2)*F2;
        Vector3d F4 = F1 + h*F3;

        Vector3d X_n = X + (h/6)*(F1+ 2*F2 + 2*F3 + F4);
        //Vector3d X_n = X+h*F1;

        //cout << X <<endl;
        //cout <<"--------------------"<<endl;

        t = t+h;
        X = X_n;

        cont++;

    }
    if(Result(2)<0)
    {
        //Result(3)=10;
        Result(4)= 1; //flag que retorna 1 quando o motor falha e é empurrado.
    }
    //cout <<"result"<<Result<<endl;
    return Result;
}

Vector4d RungeKutta4_Convergente(Vector3d X_0,double F_res, double V, double Kt, double Kv, double GearRatio, double m,double r)
{
    //O critério de parada do while é a diferença entre a velocidade atual e a anterior
    //qDebug()<<"Entrou no RK4 CONVERGENTE";
    Vector3d X(3);

    X << X_0(0),X_0(1),X_0(2);

    double t = 0;
    int cont = 0;
    double v_ant = -1;
    Vector4d Result;

    QString Fres = QString::number(F_res,'g',6);
    QString tensao = QString::number(V,'g',6);
    QString Kt_str = QString::number(Kt,'g',6);
    QString Kv_str = QString::number(Kv,'g',6);
    QString reducao = QString::number(GearRatio,'g',6);
    QString massa = QString::number(m,'g',6);
    QString raio = QString::number(r,'g',6);
    //qDebug()<<"F= "+Fres+" V= "+tensao+" Kt= "+Kt_str+" Kv= "+Kv_str;

    //MatrixXd MatrizResultados(4,10000); //4,10000

    while((X(1)-v_ant) > erro || cont < 5)
    {

        //cout<<"while do RK4 - iteracao "<< cont << endl;

        v_ant = X(1); //atualiza a velocidade anterior


        //armazenamento das variáveis
        Result << X(0),X(1),X(2),t;
        //MatrizResultados(0,cont) = X(0);//corrente
        //MatrizResultados(1,cont) = X(1);//velocidade
        //MatrizResultados(2,cont) = X(2);//posicao
        //MatrizResultados(3,cont) = t;   //tempo

        //equações do sistema
        double eq1 = V/l -((R/l)*X(0))-(((Kv*GearRatio)/(l*r))*X(1));
        double eq2 = ((Kt*GearRatio)/(m*r)*X(0)-(F_res/m)- (B*GearRatio)/(m*r*r)*X(1));
        double eq3 = X(1);

        Vector3d F1; F1 << eq1, eq2, eq3;
        Vector3d F2 = F1 + (h/2)*F1;
        Vector3d F3 = F1 + (h/2)*F2;
        Vector3d F4 = F1 + h*F3;

        Vector3d X_n = X + (h/6)*(F1+ 2*F2 + 2*F3 + F4);
        //Vector3d X_n = X+h*F1;

        //cout << X <<endl;
        //cout <<"--------------------"<<endl;

        t = t+h;
        X = X_n;
        cont++;
    }
    return Result;
}

MatrixXd Resultado_Final_Minisumo(double Massa,double Raio, double ForcaResistente,int indice_QtdMotores, double Gravidade, int QtdMotores, int indicePesos, double torqueMaximo)
{
    //obtém a quantidade de motores no robô:
    //int numMotores = Verifica_Num_Motores(indice_QtdMotores);
    //ForcaResistente = ForcaResistente/numMotores; //Supondo que a força resistente se divida entre os motores

    //faz o loop para todos os testes e motores
    QSqlQuery query;
    query.prepare("select * from tb_Motores");
    if(query.exec())
    {
        MatrixXd notasTestes(9,QtdMotores);
        MatrixXd notasFinais(3,QtdMotores);
        int cont=0;

        VectorXd vetorDeMaximos(6); //armazena os parâmetros máximos para cada teste, onde posição:
        vetorDeMaximos<<0,0,0,0,0,0;//1- tempo maximo arrancada
                                    //2- tempo maximo rev
                                    //3- tempo maximo empurrao
                                    //4- eficiencia
                                    //5- preco
                                    //6- velocidade maxima
        MatrixXd notasModuladas(7,QtdMotores);
        Adequa_Unidades_Robo_SI(&Massa,&Raio);

        while(query.next())//enquanto houver um motor
        {
            Vector3d X_0; X_0 << 0,0,0;
            //cout<<"Entrou no while dos motores"<<endl;


            //adquire as variáveis
            double ID = query.value(0).toDouble();
            //QString Fabricante = query.value(1).toString();
            double Reducao = query.value(2).toDouble();
            double Kt = query.value(3).toDouble();
            double Kv = query.value(4).toDouble();
            double Tensao = query.value(5).toDouble();
            double I_max = query.value(6).toDouble();
            //double I_min = query.value(7).toDouble();
            double Rot_max = query.value(8).toDouble();
            double Torque_max = query.value(9).toDouble();
            double Preco = query.value(10).toDouble();


            Adequa_Unidades_SI(&Torque_max,&Kv,&Rot_max,&Kt,Gravidade);

            //double v_max = Rot_max*Raio; // em m/s

            //Pega o valor de preço e valor de velocidade maxima bem como o ID para identificação
            notasTestes(0,cont) = ID;
            notasFinais(0,cont) = ID;

            //Teste de Arrancada
            Vector4d finalArrancada = RungeKutta4_Convergente(X_0,0, Tensao, Kt, Kv, Reducao, Massa, Raio);
            //Vector3d finalArrancada = Array_Final(resultadosArrancada);
            //cout << "final arrancada\n "<<finalArrancada<<endl;
            notasTestes(1,cont) = finalArrancada(3); //tempo
            vetorDeMaximos(0)= Maior(finalArrancada(3),vetorDeMaximos(0));

            //Teste de Reversão
            X_0 << -finalArrancada(0), //corrente elétrica
                   -finalArrancada(1), //velocidade linear
                   0;                  //posição

            Vector4d finalReversao = RungeKutta4_Convergente(X_0,0, Tensao, Kt, Kv, Reducao, Massa, Raio);
            //Vector3d finalReversao = Array_Final(ResultadosReversao);
            //cout << "final reversao\n "<<finalReversao<<endl;
            notasTestes(2,cont) = finalReversao(3);
            vetorDeMaximos(1)= Maior(finalReversao(3),vetorDeMaximos(1));

            //Teste do Empurrão
            X_0 << 0,0,0;

            VectorXd finalEmpurrao(5);
            finalEmpurrao = RungeKutta4_limitado(X_0,ForcaResistente, Tensao, Kt, Kv, Reducao, Massa, Raio);
            //Vector3d finalEmpurrao = Array_Final(ResultadosEmpurrao);
            //cout << "final empurrao\n "<<finalEmpurrao<<endl;
            notasTestes(3,cont) = finalEmpurrao(3);
            notasTestes(7,cont) = finalEmpurrao(4); //recebe a flag e armazena na última linha do vetor com a nota real dos testes
            vetorDeMaximos(2)= Maior(finalEmpurrao(3),vetorDeMaximos(2));

            //Eficiência no ponto de operação
            double i_final = finalEmpurrao(0);
            if(i_final > I_max)
            {
                i_final = I_max;
            }
            //cout <<"i_final\n"<<i_final <<endl;
            double w_final = finalEmpurrao(1)/Raio;
            //cout <<"w_final\n"<<w_final <<endl;
            double torque = Kt*i_final*Reducao - ForcaResistente*Raio;

            //garante que não haja torques negativos, que gerem potencias mecanicas negativas
            if(torque<0)
            {
                torque = 0;
            }
            if(torque > Torque_max) //taxa o torque máximo pelo torque máximo  informado pelo fabricante
            {
                torque = Torque_max;
            }

            if(torque > torqueMaximo)
            {
                notasTestes(8,cont) = 1; //flag que normalmente é zero recebe 1, caso o motor derrape
            }else
            {
                notasTestes(8,cont) = 0; //flag recebe zero caso o motor não derrape
            }

            double potenciaMecanica = torque*w_final;
            //cout <<"potenciaMecanica\n"<<potenciaMecanica <<endl;
            double potenciaEletrica = R*(pow(i_final,2));
            //cout <<"potenciaEletrica\n"<<potenciaEletrica <<endl;
            //cout <<"---------------------------------"<<endl;
            double eficiencia = (potenciaMecanica/potenciaEletrica)*100;
            if(eficiencia > 100 || eficiencia < 0)
            {
                eficiencia = 0;
            }
            notasTestes(4,cont) = eficiencia;
            vetorDeMaximos(3)= Maior(eficiencia,vetorDeMaximos(3));
            //cout <<"eficiencia:\n"<<eficiencia <<endl;

            notasTestes(5,cont) = Preco;
            notasTestes(6,cont) = (finalArrancada(1)/Raio)*30/pi; //vel linear ---> rotacao em rpm

            vetorDeMaximos(4)= Maior(Preco,vetorDeMaximos(4));

            vetorDeMaximos(5)= Maior(notasTestes(6,cont),vetorDeMaximos(5));
            //cout <<"vetor de maximos\n"<<vetorDeMaximos <<endl;

            cont++;
        }

        //modula as notas entre 0 e 5
        notasModuladas = Modula_Notas(vetorDeMaximos,notasTestes);
        //cout << "matriz de notas moduladas:\n" << notasModuladas << endl;
        Grava_Notas_Moduladas(notasModuladas);

        //faz ponderação
        notasFinais = Ponderacao(indicePesos, notasModuladas, notasTestes);
        //cout << "matriz de notas finais:\n" << notasFinais << endl;

        //faz ordenação do vetor de notas finais depois de ter adquirido todos os motores
        notasFinais = Ordena_Matriz(notasFinais);
        //cout << "matriz de notas finais ORDENADAS:\n" << notasFinais << endl;

        //retorna a matriz de resultados, com ID e nota ordenados
        return notasFinais;
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
MatrixXd Analise_de_Potencias(int QtdMotores)
{
    //calcula a potencia mecanica de todos os motores, bem como sua eficiencia
    //usando os calculos básicos de potencia mecanica e eletrica
    QSqlQuery query;
    query.prepare("select * from tb_Motores");
    int N = 1000; //resolução dos vetores a serem integrados
    int cont =0;
    MatrixXd ResultadosFinais(5,QtdMotores);
    if(query.exec())
    {
        while(query.next())//enquanto houver um motor
        {
            //cout<<"Entrou no while dos motores"<<endl;

            //adquire as variáveis
            double ID = query.value(0).toDouble();
            //QString Fabricante = query.value(1).toString();
            //double Reducao = query.value(2).toDouble();
            double Kt = query.value(3).toDouble();
            double Kv = query.value(4).toDouble();
            double Tensao = query.value(5).toDouble();
            //double I_max = query.value(6).toDouble();
            //double I_min = query.value(7).toDouble();
            double Rot_max = query.value(8).toDouble();
            double Torque_max = query.value(9).toDouble();
            //double Preco = query.value(10).toDouble();

            Adequa_Unidades_SI(&Torque_max,&Kv,&Rot_max,&Kt,Grav);


            //alteracao das unidades
            //Prepara os vetores para posteriores calculos
            double dT = Torque_max/N;
            VectorXd Torques(N);
            VectorXd Rotacoes(N);
            VectorXd correntes(N);
            VectorXd PotEletrica(N);
            VectorXd PotMecanica(N);
            VectorXd Eficiencias(N);
            double mediaPotM=0;
            double mediaPotE=0;
            double mediaEff=0;

            //Efetua as contas
            for(int i=0;i<N;i++)
            {
               Torques(i)= dT+i*dT;
               correntes(i) = Torques(i)/Kt;
               PotEletrica(i)= Tensao*correntes(i);
               Rotacoes(i) = (-Rot_max/Torque_max)*Torques(i) + Rot_max;
               PotMecanica(i)= Torques(i)*Rotacoes(i);
               mediaPotM += PotMecanica(i);
               mediaPotE += PotEletrica(i);
            }
            mediaPotM = mediaPotM/N;
            mediaPotE = mediaPotE/N;
            for(int i=0;i<N;i++)
            {
                //Calcula as eficiencias a partir da media da potencia eletrica
                Eficiencias(i) = (PotMecanica(i)/mediaPotE)*100;
                mediaEff += Eficiencias(i);
            }
            mediaEff = (mediaEff/N);

            //calcula as integrais de potencia e eficiencia:
            double intPotMec = 0;
            double intEff=0;
            for(int j=1;j<N;j++)
            {
                intPotMec = intPotMec + 0.5*dT*(PotMecanica(j)+PotMecanica(j-1));
                intEff = intEff + 0.5*dT*(Eficiencias(j)+Eficiencias(j-1));
            }
            ResultadosFinais(0,cont) = ID;
            ResultadosFinais(1,cont) = intPotMec;
            ResultadosFinais(2,cont) = mediaPotM;
            ResultadosFinais(3,cont) = intEff;
            ResultadosFinais(4,cont) = mediaEff;
            cont++;
        }

    }
    return ResultadosFinais;
}



#endif // LIBCALCULUS_H
