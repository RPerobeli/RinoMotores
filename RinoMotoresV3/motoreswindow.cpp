#include "motoreswindow.h"
#include "mainwindow.h"
#include "ui_motoreswindow.h"
#include "QMessageBox"
#include <../Eigen/Eigen/Dense>
#include "add_motor.h"
#include "edit_motor.h"
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

//Salva o banco de dados em uma variável
static QSqlDatabase DbMotores = QSqlDatabase::addDatabase("QSQLITE");

void Database_Verify()
{
    //Confere se o banco de dados foi aberto
    if(!DbMotores.open())
    {
        //Caixa de mensagem que aparece quando há erro ao abrir o banco de dados
        QMessageBox ErroOpenDb;
        ErroOpenDb.setText("Erro ao abrir ao banco de dados!");
        ErroOpenDb.exec();
        return;
    }
    else
    {
       qDebug()<<"Banco Aberto";
    }
    if(!DbMotores.isOpen())
    {
        //Caixa de mensagem que aparece quando há erro ao abrir o banco de dados
        QMessageBox ErroOpenDb;
        ErroOpenDb.setText("Erro ao conectar o banco de dados!");
        ErroOpenDb.exec();
        return;
    }
    else
    {
       qDebug()<<"Conectado ao Banco";
    }
    return;
}

MotoresWindow::MotoresWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MotoresWindow)
{
    ui->setupUi(this);
    setWindowTitle("Database dos Motores");
    ui->Edit_Pesq->setFocus();

    //Indica o caminho do banco de dados
    //DbMotores.setDatabaseName("D:/UFJF/Projetos Qt/RinoMotoresV3/db_Motores.db");
    DbMotores.setDatabaseName("../RinoMotoresV3/db_Motores.db");
    if(!DbMotores.open())
    {
        //Caixa de mensagem que aparece quando há erro ao abrir o banco de dados
        QMessageBox ErroOpenDb;
        ErroOpenDb.setText("Erro ao abrir ao banco de dados!");
        ErroOpenDb.exec();
        return;
    }
    else
    {
       qDebug()<<"Banco Aberto";
    }

    Database_Verify();
    //Ao iniciar a janela, exibe na tabela todos os motores do banco de dados
    Preenche_Tabela();

}

void MotoresWindow::Propriedades_Tabela()
{
    //Insere na tabela os titulos das colunas e define um tamanho menor para a coluna de ID
    QStringList cabecalho = {"ID","Fabricante","Tensão(v)","Corrente Máx(A)","Corrente Mín(A)","Rotação Máx(rpm)","Torque Máx(kgf.mm)","Preço(R$)"};
    ui->tableWidget->setHorizontalHeaderLabels(cabecalho);
    ui->tableWidget->setColumnWidth(0,30);

    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers); //Não permite edição na tabela
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows); //Ao clicar em um item, a linha inteira é selecionada
    ui->tableWidget->verticalHeader()->setVisible(false); //Esconde os valores das linhas
}

void MotoresWindow::Preenche_Tabela()
{
    QSqlQuery query;
    query.prepare("select * from tb_Motores");
    if(query.exec())
        {
            int linha = 0;
            ui->tableWidget->setColumnCount(8);
            while(query.next())
                {
                    ui->tableWidget->insertRow(linha);
                    ui->tableWidget->setItem(linha,0,new QTableWidgetItem(query.value(0).toString()));
                    ui->tableWidget->setItem(linha,1,new QTableWidgetItem(query.value(1).toString()));
                    ui->tableWidget->setItem(linha,2,new QTableWidgetItem(query.value(2).toString()));
                    ui->tableWidget->setItem(linha,3,new QTableWidgetItem(query.value(3).toString()));
                    ui->tableWidget->setItem(linha,4,new QTableWidgetItem(query.value(4).toString()));
                    ui->tableWidget->setItem(linha,5,new QTableWidgetItem(query.value(5).toString()));
                    ui->tableWidget->setItem(linha,6,new QTableWidgetItem(query.value(6).toString()));
                    ui->tableWidget->setItem(linha,7,new QTableWidgetItem(query.value(7).toString()));
                    linha++;
                }
            Propriedades_Tabela();


        }else
            {
                QMessageBox::warning(this,"ERRO","Erro ao exibir o banco de dados");
            }
}

MotoresWindow::~MotoresWindow()
{
    delete ui;
}

void MotoresWindow::on_Btn_Fechar_clicked()
{
    this->close();
}

void MotoresWindow::on_Btn_Adicionar_clicked()
{
    Add_motor Janela_adicionar_motor(this);
    Janela_adicionar_motor.exec();
}
QString Verifica_Caracteristica(int indice)
{
   QString corresp;
   //switch para saber qual procura fazer pelo banco de dados, através do indice da comboBox
   switch(indice)
   {
   case 0:
       corresp="Fabricante";
       break;
   case 1:
       corresp="Tensão";
       break;
   case 2:
       corresp="Corrente Max";
       break;
   case 3:
       corresp="Corrente Min";
       break;
   case 4:
       corresp="Rotação Max";
       break;
   case 5:
       corresp="Torque Max";
       break;
   case 6:
       corresp="Preço";
       break;
   }
   return corresp;

}
void MotoresWindow::on_Btn_Consultar_clicked()
{
    //Recebe o texto desejado pelo usuário e a que característica esse texto corresponde.
    QString procurado = ui->Edit_Pesq->text();
    int indice = ui->comboBox_Pesquisa->currentIndex();

    QString corresp = Verifica_Caracteristica(indice);

    //Cria uma variável do sipo SQLquery para acessar o banco de dados, através do exec() ele procura no banco e dados a correspondência desejada
    //Como exec() é booleano faz-se necessário o uso de um if
    QSqlQuery query;
    query.prepare("select * from tb_Motores where "+corresp+"='"+procurado+"'");
    //qDebug()<<query.lastError();
    //qDebug()<<corresp;
    //qDebug()<<procurado;
    if(query.exec())
    {
        qDebug()<<"query executada com sucesso";
        int linha=0;
        //limpa a tabela do programa para inserir novas informações
        ui->tableWidget->setRowCount(0);
        //sempre que o query encontrar um valor compatível:
        while(query.next())
        {
           ui->tableWidget->insertRow(linha);
           ui->tableWidget->setItem(linha,0,new QTableWidgetItem(query.value(0).toString()));
           ui->tableWidget->setItem(linha,1,new QTableWidgetItem(query.value(1).toString()));
           ui->tableWidget->setItem(linha,2,new QTableWidgetItem(query.value(2).toString()));
           ui->tableWidget->setItem(linha,3,new QTableWidgetItem(query.value(3).toString()));
           ui->tableWidget->setItem(linha,4,new QTableWidgetItem(query.value(4).toString()));
           ui->tableWidget->setItem(linha,5,new QTableWidgetItem(query.value(5).toString()));
           ui->tableWidget->setItem(linha,6,new QTableWidgetItem(query.value(6).toString()));
           ui->tableWidget->setItem(linha,7,new QTableWidgetItem(query.value(7).toString()));
           linha++;
        }
        Propriedades_Tabela();
    }else
    {
        qDebug()<<"Erro na consulta";
    }
}

void MotoresWindow::on_Btn_Excluir_clicked()
{
    int Linha_Atual = ui->tableWidget->currentRow();
    QString id = ui->tableWidget->item(Linha_Atual,0)->text();    //pega o valor do identificador para excluir através dele
    QSqlQuery query;
    query.prepare("delete from tb_Motores where id ="+id);
    if(query.exec())
    {
        ui->tableWidget->removeRow(Linha_Atual);
    }else
    {
        QMessageBox::warning(this,"ERRO","Erro ao excluir registro");
    }
}



void MotoresWindow::on_Btn_Atualizar_clicked()
{
    ui->tableWidget->setRowCount(0);
    Preenche_Tabela();
}

void MotoresWindow::on_Btn_Alterar_clicked()
{
    Edit_Motor Janela_alterar_motor(this);
    Janela_alterar_motor.exec();
}
