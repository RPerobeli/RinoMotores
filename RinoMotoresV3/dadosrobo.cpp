#include "dadosrobo.h"
#include "ui_dadosrobo.h"
#include "motoreswindow.h"
#include "mainwindow.h"
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>

DadosRobo::DadosRobo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DadosRobo)
{
    ui->setupUi(this);

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
                   "5 - Bom projeto");
    MsgBox.exec();
}
