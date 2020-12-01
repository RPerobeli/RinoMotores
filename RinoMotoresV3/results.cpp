#include "results.h"
#include "ui_results.h"
#include "details.h"
#include "ui_details.h"
#include <../Eigen/Eigen/Dense>
#include "mainwindow.h"
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include "QMessageBox"
#include <iostream>
#include "polarwindowmain.h"


#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QScatterSeries>
#include <QtCharts/QLineSeries>
#include <QtCharts/QSplineSeries>
#include <QtCharts/QAreaSeries>
#include <QtCharts/QValueAxis>
#include <QtCharts/QPolarChart>
#include <QtCore/QDebug>
#include <QtCharts/QChartView>

QT_CHARTS_USE_NAMESPACE

using namespace Eigen;
using namespace std;

Results::Results(QWidget *parent, MatrixXd* Matriz, bool analisePot) :
    QDialog(parent),
    ui(new Ui::Results)
{
    ui->setupUi(this);
    setWindowTitle("Resultado da Simulação");
    //preenche o table widget com a matriz resultante
    if(analisePot)
    {
        Preenche_Tabela_Analise_Potencia(*Matriz);
    }else
    {
        Preenche_Tabela_Resultados(*Matriz);
    }


    ui->Btn_Detalhes->setEnabled(false);
    ui->Btn_PlotPolar->setEnabled(false);
    ui->Btn_PlotLinear->setEnabled(false);
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
    QStringList cabecalho ={"ID", "Fabricante/Modelo","Redução", "Nota Final", "Deslizamento"};
    ui->tableWidget_Ranking->setHorizontalHeaderLabels(cabecalho);
    ui->tableWidget_Ranking->setColumnWidth(0,100);

    ui->tableWidget_Ranking->setEditTriggers(QAbstractItemView::NoEditTriggers); //Não permite edição na tabela
    ui->tableWidget_Ranking->setSelectionBehavior(QAbstractItemView::SelectRows); //Ao clicar em um item, a linha inteira é selecionada
    ui->tableWidget_Ranking->verticalHeader()->setVisible(false); //Esconde os valores das linhas

    ui->tableWidget_Ranking->setColumnCount(5);
    for(int i = 0; i<m.cols();i++)
    {
        QString Nota = QString::number(m(1,i),'g',6);
        QString ID = QString::number(m(0,i),'g',4);
        QString deslizamento;
        if(m(2,i) != 0)
        {
            deslizamento = "Derrapa";
        }else
        {
            deslizamento = "Não derrapa";
        }
        QSqlQuery query;
        query.prepare("select * from tb_Motores where id = '"+ID+"'");
        if(query.exec())
        {
            query.first();
            ui->tableWidget_Ranking->insertRow(i);
            ui->tableWidget_Ranking->setItem(i,0,new QTableWidgetItem(ID));
            ui->tableWidget_Ranking->setItem(i,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tableWidget_Ranking->setItem(i,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tableWidget_Ranking->setItem(i,3,new QTableWidgetItem(Nota));
            ui->tableWidget_Ranking->setItem(i,4,new QTableWidgetItem(deslizamento));
        }
    }
}

void Results::Preenche_Tabela_Analise_Potencia(MatrixXd m)
{
    //Insere na tabela os titulos das colunas e define um tamanho menor para a coluna de ID
    QStringList cabecalho ={"ID", "Fabricante/Modelo","Redução", "Eficiencia Média", "Potencia Mec Média"};
    ui->tableWidget_Ranking->setHorizontalHeaderLabels(cabecalho);
    ui->tableWidget_Ranking->setColumnWidth(0,100);

    ui->tableWidget_Ranking->setEditTriggers(QAbstractItemView::NoEditTriggers); //Não permite edição na tabela
    ui->tableWidget_Ranking->setSelectionBehavior(QAbstractItemView::SelectRows); //Ao clicar em um item, a linha inteira é selecionada
    ui->tableWidget_Ranking->verticalHeader()->setVisible(false); //Esconde os valores das linhas

    ui->tableWidget_Ranking->setColumnCount(5);
    for(int i = 0; i<m.cols();i++)
    {
        QString Pot = QString::number(m(2,i),'g',6); //2, se quiser a media, 1 se quiser a area da integral
        QString Eff = QString::number(m(4,i), 'g',6); //4, se quiser a media, 3 se quiser a area da integral
        QString ID = QString::number(m(0,i),'g',4);
        QSqlQuery query;
        query.prepare("select * from tb_Motores where id = '"+ID+"'");
        if(query.exec())
        {
            query.first();
            ui->tableWidget_Ranking->insertRow(i);
            ui->tableWidget_Ranking->setItem(i,0,new QTableWidgetItem(ID));
            ui->tableWidget_Ranking->setItem(i,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tableWidget_Ranking->setItem(i,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tableWidget_Ranking->setItem(i,3,new QTableWidgetItem(Eff));
            ui->tableWidget_Ranking->setItem(i,4,new QTableWidgetItem(Pot));
        }
    }

}

void Results::on_Btn_Detalhes_clicked()
{
    int Linha_Atual = ui->tableWidget_Ranking->currentRow();
    QString id = ui->tableWidget_Ranking->item(Linha_Atual,0)->text();    //pega o valor do identificador para exibir os detalhes através dele

    Details Janela_Detalhes_Motor(this,id);
    Janela_Detalhes_Motor.exec();

    ui->Btn_Detalhes->setEnabled(false);
}

void Results::on_Btn_PlotPolar_clicked()
{
    int Linha_Atual = ui->tableWidget_Ranking->currentRow();
    QString id = ui->tableWidget_Ranking->item(Linha_Atual,0)->text();    //pega o valor do identificador para exibir os detalhes através dele
    QString nome = ui->tableWidget_Ranking->item(Linha_Atual,1)->text();

    //abre a nova janela com o gráafico polar
    //este codigo vai na janela do gráfico polar
    QSqlQuery query;
    query.prepare("select * from tb_Modulacao where ID = '"+id+"'");
    if(query.exec())
    {
        query.first();
        VectorXf Valores(6);
        for(int i=0;i<Valores.size();i++)
        {
            Valores(i)=query.value(i+1).toFloat();
            cout <<Valores(i) <<endl;
        }

        const qreal angularMin = 0;
        const qreal angularMax = 360;

        const qreal radialMin = 0;
        const qreal radialMax = 5;

        QLineSeries *series3 = new QLineSeries();
        series3->setName("Motor "+ nome);
        qreal ad = (angularMax - angularMin) / 6;
        //qreal rd = (radialMax - radialMin) / 3 * 1.3;
        //series3->append(angularMin, radialMax);
        series3->append(angularMin, Valores(0));            // Teste de Arrancada
        series3->append(angularMin + ad*1, Valores(1));     // Teste de Reversão
        series3->append(angularMin + ad*2, Valores(2));     // Teste do Empurrão
        series3->append(angularMin + ad*3, Valores(3));     // Eficiência
        series3->append(angularMin + ad*4, Valores(4));     // Preço
        series3->append(angularMin + ad*5, Valores(5));     // Velocidade máxima
        series3->append(angularMin + ad*6, Valores(0));     // Arrancada novamente para fechar o gráfico

        QAreaSeries *series5 = new QAreaSeries();
        series5->setName("Area");
        series5->setUpperSeries(series3);
        series5->setOpacity(0.5);

        QPolarChart *chart = new QPolarChart();
        chart->addSeries(series3);
        chart->addSeries(series5);

        chart->setTitle("NOTAS DE CADA TESTE PARA O MOTOR: "+nome+".");

        QValueAxis *angularAxis = new QValueAxis();
        angularAxis->setTickCount(7); // First and last ticks are co-located on 0/360 angle.
        angularAxis->setLabelFormat("%.1f");
        angularAxis->setShadesVisible(true);
        angularAxis->setShadesBrush(QBrush(QColor(249, 249, 255)));
        chart->addAxis(angularAxis, QPolarChart::PolarOrientationAngular);

        //QLegend *legend = new QLegend();

        QValueAxis *radialAxis = new QValueAxis();
        radialAxis->setTickCount(7);
        radialAxis->setLabelFormat("%d");
        chart->addAxis(radialAxis, QPolarChart::PolarOrientationRadial);

        series3->attachAxis(radialAxis);
        series3->attachAxis(angularAxis);
        series5->attachAxis(radialAxis);
        series5->attachAxis(angularAxis);

        radialAxis->setRange(radialMin, radialMax);
        angularAxis->setRange(angularMin, angularMax);

        QChartView *chartView = new QChartView();
        chartView->setChart(chart);
        chartView->setRenderHint(QPainter::Antialiasing);

        Polarwindow = new PolarWindowMain(this);
        Polarwindow->setCentralWidget(chartView);
        Polarwindow->resize(800,600);
        Polarwindow->show();
    }

    ui->Btn_PlotPolar->setEnabled(false);
}

void Results::on_tableWidget_Ranking_cellClicked()
{
    ui->Btn_Detalhes->setEnabled(true);
    ui->Btn_PlotPolar->setEnabled(true);
    ui->Btn_PlotLinear->setEnabled(true);
}
