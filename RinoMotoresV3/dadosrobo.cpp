#include "dadosrobo.h"
#include "ui_dadosrobo.h"
#include "motoreswindow.h"
#include "mainwindow.h"
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>



DadosRobo::DadosRobo(QWidget *parent, int indiceAplicacao) :
    QDialog(parent),
    ui(new Ui::DadosRobo)
{
    ui->setupUi(this);

    //Preenche os edits com dados do banco de dados
    QSqlQuery query;
    query.prepare("select * from tb_CondicoesContorno where excluir = 'true'");
    if(query.exec())
    {
        //Pega o primeiro resultado, que se espera ser único e atribui seus valores nos campos de texto
        query.first();
        ui->Edit_Massa->setText(query.value(1).toString());
        ui->Edit_Raio->setText(query.value(2).toString());
        ui->Edit_Comprimento->setText(query.value(3).toString());
        ui->Edit_Cg->setText(query.value(4).toString());
        ui->Edit_Gravidade->setText(query.value(5).toString());
        ui->Edit_CoefAtrito->setText(query.value(6).toString());
        ui->Edit_Forca->setText(query.value(7).toString());
        ui->comboBox_QtdMotores->setCurrentIndex(query.value(8).toInt());
        ui->Edit_PosicaoEixo1->setText(query.value(9).toString());
        ui->Edit_PosicaoEixo2->setText(query.value(10).toString());
        ui->Edit_Massa->setFocus();

        //Torna o edit de segundo eixo indisponível
        if(ui->comboBox_QtdMotores->currentIndex() == 3 || ui->comboBox_QtdMotores->currentIndex() == 4)
        {
            ui->Edit_PosicaoEixo2->setEnabled(true);
        }else
        {
            ui->Edit_PosicaoEixo2->setEnabled(false);
        }

        //Torna o combobox não editável
        ui->comboBox_QtdMotores->setEditable(false);

        qDebug()<<"Dados preenchidos corretamente";
    }else
    {
        qDebug()<<"Dados não preenchidos";
    }


}

DadosRobo::~DadosRobo()
{
    delete ui;
}

void DadosRobo::on_Btn_Avisos_clicked()
{
    QMessageBox MsgBox;
    MsgBox.setText("Avisos importantes,\n"
                   "1 - NOVAMENTE, reitero a importância de se atentar às unidades.\n"
                   "2 - Use ponto como separador decimal ao preencher os dados.\n"
                   "3 - Selecione a quantidades de motores usados dentre as opções \n  "
                   "    (caso o seu robô não atenda às especificações, o software poderá emitir informações erradas).\n"
                   "4 - Utilize um software de modelagem 3D que informe a posição do centro de gravidade.\n"
                   "     O software provavelmente informa a posição em relação a origem, então faça os ajustes para informar a posição do CG como mostrado na figura.\n"
                   "5 - Caso o seu robô tenha 4 rodas, e portanto, eixo dianteiro, informar a distancia do eixo de forma semelhante para o eixo traseiro,"
                   " como mostrado na figura por E1.\n"
                   "6 - Bom projeto.");
    MsgBox.exec();
}

void DadosRobo::on_Btn_Cancel_clicked()
{

    this->close();
}

void DadosRobo::on_BtnOK_clicked()
{
    //Grava todos os dados inseridos na janela de dados externos em variáveis, para serem gravados posteriormente na janela principal de cálculo
    //Dados do robo:
    QString Massa_str = ui->Edit_Massa->text();
    double Massa = Massa_str.toDouble();
    QString Raio_str = ui->Edit_Raio->text();
    double Raio = Raio_str.toDouble();
    QString Comprimento_str = ui->Edit_Comprimento->text();
    double Comprimento = Comprimento_str.toDouble();
    QString CentroDeGravidade_str = ui->Edit_Cg->text();
    double CentroDeGravidade = CentroDeGravidade_str.toDouble();
    //Dados de contorno do sistema:
    QString Gravidade_str = ui->Edit_Gravidade->text();
    double Gravidade = Gravidade_str.toDouble();
    QString ForcaRes_str = ui->Edit_Forca->text();
    double ForcaRes = ForcaRes_str.toDouble();
    QString CoefAtrito_str = ui->Edit_CoefAtrito->text();
    double CoefAtrito = CoefAtrito_str.toDouble();
    //Dados sobre os eixos:
    int indice = ui->comboBox_QtdMotores->currentIndex();
    QString indice_str = QString::number(indice);
    QString E1_str = ui->Edit_PosicaoEixo1->text();
    double E1 = E1_str.toDouble();
    QString E2_str = ui->Edit_PosicaoEixo2->text();
    double E2 = E2_str.toDouble();

    //recebe se há algum valor invalido
    bool CloseWindow = Valida_Robo_Minisumo(Massa,Raio,Comprimento,CentroDeGravidade,Gravidade,CoefAtrito,ForcaRes,E1,E2);


    //Resistra os valores obtidos no banco de dados, caso sucesso, limpa todas as células para receberem um novo valor
    QSqlQuery query;
    query.prepare("update tb_CondicoesContorno "
                  "set Massa = '"+Massa_str+"', "
                  "Raio = '"+Raio_str+"', "
                  "Comprimento = '"+Comprimento_str+"', "
                  "CentroDeGravidade = '"+CentroDeGravidade_str+"', "
                  "Gravidade = '"+Gravidade_str+"', "
                  "CoefAtrito = '"+CoefAtrito_str+"', "
                  "ForcaResistente = '"+ForcaRes_str+"', "
                  "Indice_QtdMotores = '"+indice_str+"', "
                  "e1 = '"+E1_str+"', "
                  "e2 = '"+E2_str+"'");

     if(query.exec())
     {
        qDebug()<<"SUCESSO ao atualizar registro do robo";
        QMessageBox MsgBox;
        MsgBox.setText("Sucesso, pressione o botão CALCULAR.");
        MsgBox.exec();

     }
     else
     {
        qDebug()<<"Erro ao atualizar registro do robo";
     }

     //Verifica se a janela está liberada para ser fechada, caso não, emite mensagem de erro
     if(CloseWindow)
     {
         this->close();
     }else
     {
         QMessageBox MsgBox;
         MsgBox.setText("Valores inválidos");
         MsgBox.exec();
     }

}

void DadosRobo::on_comboBox_QtdMotores_currentIndexChanged(int index)
{
    //Quando o usuário selecionar a opção de robos com 4 rodas, o segundo eixo (dianteiro) se faz necessário
    if(index==3 || index==4)
    {
        ui->Edit_PosicaoEixo2->setEnabled(true);
    }
    else
    {
        ui->Edit_PosicaoEixo2->setEnabled(false);
    }

}

bool DadosRobo::Valida_Robo_Minisumo(double massa, double raio,  double L, double CG, double g, double mi, double F_res, double e1, double e2 )
{
    //Função que verifica se os dados preenchidos são válidos, se o robô pertence à categoria MINISUMO, se validos, retornarao true
    bool respostas[9];
    for(int i =0;i<9;i++)
    {
        respostas[i]= false;
    }

    if(massa > 0 && massa <= 500) //massa em gramas
    {
        respostas[0]= true;
    }else
    {
        ui->label_Massa->setStyleSheet("color:#c73232;");
    }
    if((raio > 0)&&(raio<=L/2)) //dimensões em mm
    {
        respostas[1] = true;
    }else
    {
        ui->label_raio->setStyleSheet("color:#c73232;");
    }
    if(L > 0) //comprimento
    {
        respostas[2]= true;
    }else
    {
        ui->label_comprimento->setStyleSheet("color:#c73232;");
    }
    if(CG > 0)
    {
        respostas[3]= true;
    }else
    {
        ui->label_Cg->setStyleSheet("color:#c73232;");
    }
    if(g > 0)
    {
        respostas[4]= true;
    }else
    {
        ui->label_Gravidade->setStyleSheet("color:#c73232;");
    }
    if(mi>=0 && mi<=1)
    {
        respostas[5]= true;
    }else
    {
        ui->label_coefAtrito->setStyleSheet("color:#c73232;");
    }
    if(F_res>0)
    {
        respostas[6]= true;
    }else
    {
         ui->label_Forca->setStyleSheet("color:#c73232;");
    }
    if(e1>0)
    {
        respostas[7]= true;
    }else
    {
        ui->label_PosicaoEixo1->setStyleSheet("color:#c73232");
    }
    if (ui->Edit_PosicaoEixo2->isEnabled())
    {
        if(e2>0)
        {
            respostas[8]= true;
        }else
        {
            ui->label_PosicaoEixo2->setStyleSheet("color:#c73232");
        }
    }else
    {
        respostas[8]=true;
    }

    bool respostaFinal = true;
    //percorre todo o vetor conferindo se algum valor deu inválido, e armazena a resposta final
    for(int i=0;i<9;i++)
    {
        if(!respostas[i])
        {
            respostaFinal = false;
        }
    }
    return respostaFinal;
}

bool DadosRobo::Valida_Robo_Seguidor(double massa, double raio, double L, double CG, double g, double mi, double F_res, double e1, double e2)
{
    //Função que verifica se os dados preenchidos são válidos, se o robô pertence à categoria SEGUIDOR DE LINHA, se validos, retornarao true
    bool respostas[9];
    for(int i =0;i<9;i++)
    {
        respostas[i]= false;
    }
}

bool DadosRobo::Valida_Robo_Vsss(double massa, double raio, double L, double CG, double g, double mi, double F_res, double e1, double e2)
{
    //Função que verifica se os dados preenchidos são válidos, se o robô pertence à categoria VERY SMALL SIZE SOCCER, se validos, retornarao true
    bool respostas[9];
    for(int i =0;i<9;i++)
    {
        respostas[i]= false;
    }
}

bool DadosRobo::Valida_Robo_Outros(double massa, double raio, double L, double CG, double g, double mi, double F_res, double e1, double e2)
{
    //Função que verifica se os dados preenchidos são válidos (basicamente, numeros maiores que zero), para QUALQUER MOTOR
    bool respostas[9];
    for(int i =0;i<9;i++)
    {
        respostas[i]= false;
    }
}
