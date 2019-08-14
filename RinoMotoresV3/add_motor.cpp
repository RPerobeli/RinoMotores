#include "add_motor.h"
#include "ui_add_motor.h"
#include "motoreswindow.h"
#include "mainwindow.h"
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>

Add_motor::Add_motor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_motor)
{
    ui->setupUi(this);
    setWindowTitle("Adicionar Motor");
}

Add_motor::~Add_motor()
{
    delete ui;
}

void Add_motor::on_BtnOK_clicked()
{
    QString fab_str = ui->Edit_Fabricante->text();
    QString tensao_str = ui->Edit_Tensao->text();
    QString Imax_str = ui->Edit_CurrMax->text();
    QString Imin_str = ui->Edit_CurrMin->text();
    QString Rot_max_str = ui->Edit_Rot->text();
    QString T_max_str = ui->Edit_Torque->text();
    QString Preco_str = ui->Edit_Preco->text();
    QString GearRatio_str = ui->Edit_Reducao->text();
    QString K_t_str = ui->Edit_Kt->text();
    QString K_v_str = ui->Edit_Kv->text();

    //Resistra os valores obtidos no banco de dados, caso sucesso, limpa todas as células para receberem um novo valor
    QSqlQuery query;
    query.prepare("insert into tb_Motores (Fabricante,Tensão,CorrenteMax,CorrenteMin,RotaçãoMax,TorqueMax,Preço,Reducao,Kt,Kv)"
                  " values('"+fab_str+"','"+tensao_str+"','"+Imax_str+"','"+Imin_str+"','"+Rot_max_str+"','"+T_max_str+"','"+Preco_str+"','"+GearRatio_str+"','"+K_t_str+"','"+K_v_str+"')");
     if(query.exec())
     {
        //tab.Preenche_Tabela();
        QMessageBox::information(this,"","Sucesso");

     }
     else
     {
        qDebug()<<"Erro ao inserir registro";
     }
}

void Add_motor::on_Btn_Limpar_clicked()
{
    ui->Edit_Fabricante->clear();
    ui->Edit_Tensao->clear();
    ui->Edit_CurrMax->clear();
    ui->Edit_CurrMin->clear();
    ui->Edit_Rot->clear();
    ui->Edit_Torque->clear();
    ui->Edit_Preco->clear();
    ui->Edit_Reducao->clear();
    ui->Edit_Kv->clear();
    ui->Edit_Kt->clear();
    ui->Edit_Fabricante->setFocus();
}
