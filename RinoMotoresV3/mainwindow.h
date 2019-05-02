#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <motoreswindow.h>
//#include <resultwindow.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Btn_Motores_clicked();

    void on_Btn_Instrucoes_clicked();

    void on_Btn_Calcular_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
