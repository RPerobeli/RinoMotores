#include "edit_motor.h"
#include "ui_edit_motor.h"
#include "motoreswindow.h"
#include "mainwindow.h"
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>

Edit_Motor::Edit_Motor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Edit_Motor)
{
    ui->setupUi(this);
}

Edit_Motor::~Edit_Motor()
{
    delete ui;
}

void Edit_Motor::on_BtnOK_clicked()
{
    QString fab_str = ui->Edit_Fabricante->text();
    QString tensao_str = ui->Edit_Tensao->text();
    QString Imax_str = ui->Edit_CurrMax->text();
    QString Imin_str = ui->Edit_CurrMin->text();
    QString Rot_max_str = ui->Edit_Rot->text();
    QString T_max_str = ui->Edit_Torque->text();
    QString Preco_str = ui->Edit_Preco->text();

    //Resistra os valores obtidos no banco de dados, caso sucesso, limpa todas as células para receberem um novo valor
    QSqlQuery query;
    query.prepare("insert into tb_Motores (Fabricante,Tensão,CorrenteMax,CorrenteMin,RotaçãoMax,TorqueMax,Preço)"
                  " values('"+fab_str+"','"+tensao_str+"','"+Imax_str+"','"+Imin_str+"','"+Rot_max_str+"','"+T_max_str+"','"+Preco_str+"')");
     if(query.exec())
     {
        //tab.Preenche_Tabela();
        QMessageBox::information(this,"","Sucesso");
        ui->Edit_Fabricante->clear();
        ui->Edit_Tensao->clear();
        ui->Edit_CurrMax->clear();
        ui->Edit_CurrMin->clear();
        ui->Edit_Rot->clear();
        ui->Edit_Torque->clear();
        ui->Edit_Preco->clear();
        ui->Edit_Fabricante->setFocus();

     }
     else
     {
        qDebug()<<"Erro ao alterar registro";
     }
}
