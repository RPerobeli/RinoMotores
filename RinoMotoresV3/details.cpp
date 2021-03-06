#include "details.h"
#include "ui_details.h"
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <iostream>

using namespace std;

Details::Details(QWidget *parent, QString id) :
    QDialog(parent),
    ui(new Ui::Details)
{
    ui->setupUi(this);
    setWindowTitle("Especificações do Motor.");

    QSqlQuery query,query2;
    query.prepare("select * from tb_Motores where id = '"+id+"'");
    query2.prepare("select * from tb_CondicoesContorno where excluir = 'true'");
    if(query.exec())
    {
        query.first();
        //QStringList cabecalho ={"",query.value(1).toString()};
        //ui->tableWidget->setHorizontalHeaderLabels(cabecalho);
        ui->label_titulo->setText(query.value(1).toString());
        ui->tableWidget->setColumnWidth(0,100);

        ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers); //Não permite edição na tabela
        ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows); //Ao clicar em um item, a linha inteira é selecionada
        ui->tableWidget->verticalHeader()->setVisible(false); //Esconde os valores das linhas

        ui->tableWidget->setRowCount(10);

//        if(query2.exec())
//        {
//            qDebug()<<"encontrou o torque máximo no banco de dados";
//            query2.first();
//            cout << query2.value(12).toFloat();
//        }

        //primeira coluna
        ui->tableWidget->insertColumn(0);
        ui->tableWidget->setItem(0,0,new QTableWidgetItem("ID"));
        ui->tableWidget->setItem(1,0,new QTableWidgetItem("Redução"));
        ui->tableWidget->setItem(2,0,new QTableWidgetItem("Kt (kg.mm/A)"));
        ui->tableWidget->setItem(3,0,new QTableWidgetItem("Kv (V/rpm)"));
        ui->tableWidget->setItem(4,0,new QTableWidgetItem("Tensão (kg.mm)"));
        ui->tableWidget->setItem(5,0,new QTableWidgetItem("Corrente Máx (A)"));
        ui->tableWidget->setItem(6,0,new QTableWidgetItem("Corrente Mín (A)"));
        ui->tableWidget->setItem(7,0,new QTableWidgetItem("Rotação Máx (rpm)"));
        ui->tableWidget->setItem(8,0,new QTableWidgetItem("Torque Máx (kg.mm)"));
        ui->tableWidget->setItem(9,0,new QTableWidgetItem("Preço (R$)"));


        //segunda coluna
        ui->tableWidget->insertColumn(1);
        ui->tableWidget->setItem(0,1,new QTableWidgetItem(query.value(0).toString()));
        ui->tableWidget->setItem(1,1,new QTableWidgetItem(query.value(2).toString()));
        ui->tableWidget->setItem(2,1,new QTableWidgetItem(query.value(3).toString()));
        ui->tableWidget->setItem(3,1,new QTableWidgetItem(query.value(4).toString()));
        ui->tableWidget->setItem(4,1,new QTableWidgetItem(query.value(5).toString()));
        ui->tableWidget->setItem(5,1,new QTableWidgetItem(query.value(6).toString()));
        ui->tableWidget->setItem(6,1,new QTableWidgetItem(query.value(7).toString()));
        ui->tableWidget->setItem(7,1,new QTableWidgetItem(query.value(8).toString()));
        ui->tableWidget->setItem(8,1,new QTableWidgetItem(query.value(9).toString()));
        ui->tableWidget->setItem(9,1,new QTableWidgetItem(query.value(10).toString()));


    }
}

Details::~Details()
{
    delete ui;
}

void Details::on_BtnOK_clicked()
{
    this->close();
}
