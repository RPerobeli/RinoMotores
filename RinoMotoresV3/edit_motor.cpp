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
    QString id_str = ui->Edit_id->text();
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
    query.prepare("update tb_Motores "
                  "set Fabricante= '"+fab_str+"', "
                  "Reducao= '"+GearRatio_str+"', "
                  "Kt= '"+K_t_str+"', "
                  "Kv= '"+K_v_str+"', "
                  "Tensão= '"+tensao_str+"', "
                  "CorrenteMax= '"+Imax_str+"', "
                  "CorrenteMin= '"+Imin_str+"', "
                  "RotaçãoMax= '"+Rot_max_str+"', "
                  "TorqueMax= '"+T_max_str+"', "
                  "Preço= '"+Preco_str+"' where id ='"+id_str+"' ");
    if(query.exec())
     {
        //tab.Preenche_Tabela();
        QMessageBox::information(this,"","Sucesso");
     }
    else
     {
        qDebug()<<"Erro ao alterar registro";
     }
}

void Edit_Motor::on_Edit_id_editingFinished()
{
    QString id_atual = ui->Edit_id->text();
    QSqlQuery query;
    query.prepare("select * from tb_Motores where id ='"+id_atual+"'");
    if(query.exec())
    {
        query.first();
        ui->Edit_Fabricante->setText(query.value(1).toString());
        ui->Edit_Reducao->setText(query.value(2).toString());
        ui->Edit_Kt->setText(query.value(3).toString());
        ui->Edit_Kv->setText(query.value(4).toString());
        ui->Edit_Tensao->setText(query.value(5).toString());
        ui->Edit_CurrMax->setText(query.value(6).toString());
        ui->Edit_CurrMin->setText(query.value(7).toString());
        ui->Edit_Rot->setText(query.value(8).toString());
        ui->Edit_Torque->setText(query.value(9).toString());
        ui->Edit_Preco->setText(query.value(10).toString());

        ui->Edit_Fabricante->setFocus();

    }
    else
    {
       qDebug()<<"Erro";
    }
}

void Edit_Motor::on_Btn_Limpar_clicked()
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
