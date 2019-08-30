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
#include "polarwindow.h"
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

Results::Results(QWidget *parent, MatrixXd* Matriz) :
    QDialog(parent),
    ui(new Ui::Results)
{
    ui->setupUi(this);
    setWindowTitle("Resultado da Simulação");
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
        query.prepare("select * from tb_Motores where id = '"+ID+"'");
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

void Results::on_Btn_Detalhes_clicked()
{
    int Linha_Atual = ui->tableWidget_Ranking->currentRow();
    QString id = ui->tableWidget_Ranking->item(Linha_Atual,0)->text();    //pega o valor do identificador para exibir os detalhes através dele

    Details Janela_Detalhes_Motor(this,id);
    Janela_Detalhes_Motor.exec();
}

void Results::on_Btn_PlotPolar_clicked()
{
    int Linha_Atual = ui->tableWidget_Ranking->currentRow();
    QString id = ui->tableWidget_Ranking->item(Linha_Atual,0)->text();    //pega o valor do identificador para exibir os detalhes através dele

    //abre a nova janela com o gráafico polar
    //este codigo vai na janela do gráfico polar
    QSqlQuery query;
    query.prepare("select * from tb_Modulacao where ID = '"+id+"'");
    if(query.exec())
    {
        query.first();
        VectorXf Valores(6);
        VectorXf* pointValores;
        for(int i=0;i<Valores.size();i++)
        {
            Valores(i)=query.value(i+1).toFloat();
            cout <<Valores(i) <<endl;
        }

        const qreal angularMin = -100;
        const qreal angularMax = 100;

        const qreal radialMin = -100;
        const qreal radialMax = 100;

        QScatterSeries *series1 = new QScatterSeries();
        series1->setName("scatter");
        for (int i = angularMin; i <= angularMax; i += 10)
            series1->append(i, (i / radialMax) * radialMax + 8.0);

        QSplineSeries *series2 = new QSplineSeries();
        series2->setName("spline");
        for (int i = angularMin; i <= angularMax; i += 10)
            series2->append(i, (i / radialMax) * radialMax);

        QLineSeries *series3 = new QLineSeries();
        series3->setName("star outer");
        qreal ad = (angularMax - angularMin) / 8;
        qreal rd = (radialMax - radialMin) / 3 * 1.3;
        series3->append(angularMin, radialMax);
        series3->append(angularMin + ad*1, radialMin + rd);
        series3->append(angularMin + ad*2, radialMax);
        series3->append(angularMin + ad*3, radialMin + rd);
        series3->append(angularMin + ad*4, radialMax);
        series3->append(angularMin + ad*5, radialMin + rd);
        series3->append(angularMin + ad*6, radialMax);
        series3->append(angularMin + ad*7, radialMin + rd);
        series3->append(angularMin + ad*8, radialMax);

        QLineSeries *series4 = new QLineSeries();
        series4->setName("star inner");
        ad = (angularMax - angularMin) / 8;
        rd = (radialMax - radialMin) / 3;
        series4->append(angularMin, radialMax);
        series4->append(angularMin + ad*1, radialMin + rd);
        series4->append(angularMin + ad*2, radialMax);
        series4->append(angularMin + ad*3, radialMin + rd);
        series4->append(angularMin + ad*4, radialMax);
        series4->append(angularMin + ad*5, radialMin + rd);
        series4->append(angularMin + ad*6, radialMax);
        series4->append(angularMin + ad*7, radialMin + rd);
        series4->append(angularMin + ad*8, radialMax);

        QAreaSeries *series5 = new QAreaSeries();
        series5->setName("star area");
        series5->setUpperSeries(series3);
        series5->setLowerSeries(series4);
        series5->setOpacity(0.5);

        QPolarChart *chart = new QPolarChart();
        chart->addSeries(series1);
        chart->addSeries(series2);
        chart->addSeries(series3);
        chart->addSeries(series4);
        chart->addSeries(series5);

        chart->setTitle("Use arrow keys to scroll, +/- to zoom, and space to switch chart type.");

        QValueAxis *angularAxis = new QValueAxis();
        angularAxis->setTickCount(9); // First and last ticks are co-located on 0/360 angle.
        angularAxis->setLabelFormat("%.1f");
        angularAxis->setShadesVisible(true);
        angularAxis->setShadesBrush(QBrush(QColor(249, 249, 255)));
        chart->addAxis(angularAxis, QPolarChart::PolarOrientationAngular);

        QValueAxis *radialAxis = new QValueAxis();
        radialAxis->setTickCount(9);
        radialAxis->setLabelFormat("%d");
        chart->addAxis(radialAxis, QPolarChart::PolarOrientationRadial);

        series1->attachAxis(radialAxis);
        series1->attachAxis(angularAxis);
        series2->attachAxis(radialAxis);
        series2->attachAxis(angularAxis);
        series3->attachAxis(radialAxis);
        series3->attachAxis(angularAxis);
        series4->attachAxis(radialAxis);
        series4->attachAxis(angularAxis);
        series5->attachAxis(radialAxis);
        series5->attachAxis(angularAxis);

        radialAxis->setRange(radialMin, radialMax);
        angularAxis->setRange(angularMin, angularMax);

        QChartView *chartView = new QChartView();
        chartView->setChart(chart);
        chartView->setRenderHint(QPainter::Antialiasing);

        PolarWindowMain *Polarwindow = new PolarWindowMain;
        Polarwindow->setCentralWidget(chartView);
        Polarwindow->resize(800,600);
        Polarwindow->show();
    }


}
