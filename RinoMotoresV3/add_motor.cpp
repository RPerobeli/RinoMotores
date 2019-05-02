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


    QSqlQuery query;
    //query.prepare("insert into tb_Motores (Fabricante,Tensão,CorrenteMax,CorrenteMin,RotaçãoMax,TorqueMax,Preço)"
    //              " values('"+fab_str+"','"+tensao_str+"','"+Imax_str+"','"+Imin_str+"','"+Rot_max_str+"','"+T_max_str+"','"+Preco_str+"')");
    query.prepare("insert into tb_Motores (Fabricante,Tensão,CorrenteMax) values('"+fab_str+"','"+tensao_str+"','"+Imax_str+"')");
     if(query.exec())
     {
        QMessageBox::information(this,"","Sucesso");
        ui->Edit_Fabricante->clear();
        ui->Edit_Tensao->clear();
        ui->Edit_CurrMax->clear();
        ui->Edit_CurrMin->clear();
        ui->Edit_Rot->clear();
        ui->Edit_Torque->clear();
        ui->Edit_Preco->clear();
        ui->Edit_Fabricante->setFocus();
       }else
        {
            qDebug()<<"Erro ao inserir registro";
      }
}
