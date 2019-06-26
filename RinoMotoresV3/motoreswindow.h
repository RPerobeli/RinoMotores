#ifndef MOTORESWINDOW_H
#define MOTORESWINDOW_H

#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>

namespace Ui {
class MotoresWindow;
}

class MotoresWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MotoresWindow(QWidget *parent = nullptr);
    ~MotoresWindow();
    void Preenche_Tabela();

    void Propriedades_Tabela();

private slots:
    void on_Btn_Fechar_clicked();

    void on_Btn_Adicionar_clicked();

    void on_Btn_Consultar_clicked();



    void on_Btn_Excluir_clicked();


    void on_Btn_Atualizar_clicked();

    void on_Btn_Alterar_clicked();

private:
    Ui::MotoresWindow *ui;
};

#endif // MOTORESWINDOW_H
