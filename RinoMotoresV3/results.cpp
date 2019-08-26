#include "results.h"
#include "ui_results.h"
#include <../Eigen/Eigen/Dense>
#include "mainwindow.h"
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include "QMessageBox"

using namespace Eigen;

Results::Results(QWidget *parent, MatrixXd* Matriz) :
    QDialog(parent),
    ui(new Ui::Results)
{
    ui->setupUi(this);

    //preenche o table widget com a matriz resultante
    Preenche_Tabela_Resultados(*Matriz);

}

Results::~Results()
{
    delete ui;
}

void Results::on_Btn_Fechar_clicked()
{
    this->close();
}

void Results::Preenche_Tabela_Resultados(MatrixXd m)
{
    //Insere na tabela os titulos das colunas e define um tamanho menor para a coluna de ID
    QStringList cabecalho ={"ID", "Fabricante/Modelo","Redução", "Nota Final"};
    ui->tableWidget_Ranking->setHorizontalHeaderLabels(cabecalho);
    ui->tableWidget_Ranking->setColumnWidth(0,100);

    ui->tableWidget_Ranking->setEditTriggers(QAbstractItemView::NoEditTriggers); //Não permite edição na tabela
    ui->tableWidget_Ranking->setSelectionBehavior(QAbstractItemView::SelectRows); //Ao clicar em um item, a linha inteira é selecionada
    ui->tableWidget_Ranking->verticalHeader()->setVisible(false); //Esconde os valores das linhas

    ui->tableWidget_Ranking->setColumnCount(4);
    for(int i = 0; i<m.cols();i++)
    {
        QString Nota = QString::number(m(1,i),'g',6);
        QString ID = QString::number(m(0,i),'g',4);
        QSqlQuery query;
        query.prepare("select * from tb_Motores where ID = '"+ID+"'");
        if(query.exec())
        {
            query.first();
            ui->tableWidget_Ranking->insertRow(i);
            ui->tableWidget_Ranking->setItem(i,0,new QTableWidgetItem(ID));
            ui->tableWidget_Ranking->setItem(i,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tableWidget_Ranking->setItem(i,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tableWidget_Ranking->setItem(i,3,new QTableWidgetItem(Nota));
        }
    }
}
