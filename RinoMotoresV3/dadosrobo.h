#ifndef DADOSROBO_H
#define DADOSROBO_H

#include <QDialog>

namespace Ui {
class DadosRobo;
}

class DadosRobo : public QDialog
{
    Q_OBJECT

public:
    explicit DadosRobo(QWidget *parent = nullptr);
    ~DadosRobo();

private slots:
    void on_Btn_Avisos_clicked();

private:
    Ui::DadosRobo *ui;
};

#endif // DADOSROBO_H
