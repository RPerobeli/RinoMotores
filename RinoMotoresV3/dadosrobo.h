#ifndef DADOSROBO_H
#define DADOSROBO_H

#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>

namespace Ui {
class DadosRobo;
}

class DadosRobo : public QDialog
{
    Q_OBJECT

public:
    explicit DadosRobo(QWidget *parent = nullptr);
    ~DadosRobo();

    bool Valida_Robo_Minisumo(double massa, double raio, double L, double CG, double g, double mi, double F_res, double e1, double e2);

    bool Valida_Robo_Vsss(double massa, double raio, double L, double CG, double g, double mi, double F_res, double e1, double e2);

    bool Valida_Robo_Seguidor(double massa, double raio, double L, double CG, double g, double mi, double F_res, double e1, double e2);

    bool Valida_Robo(double massa, double raio, double L, double CG, double g, double mi, double F_res, double e1, double e2);

private slots:
    void on_Btn_Avisos_clicked();

    void on_Btn_Cancel_clicked();

    void on_BtnOK_clicked();

    void on_comboBox_QtdMotores_currentIndexChanged(int index);

private:
    Ui::DadosRobo *ui;
};

#endif // DADOSROBO_H
