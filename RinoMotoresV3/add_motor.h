#ifndef ADD_MOTOR_H
#define ADD_MOTOR_H

#include "motoreswindow.h"
#include "mainwindow.h"
#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>

namespace Ui {
class Add_motor;
}

class Add_motor : public QDialog
{
    Q_OBJECT

public:
    explicit Add_motor(QWidget *parent = nullptr);
    ~Add_motor();

private slots:
    void on_BtnOK_clicked();

    void on_Btn_Limpar_clicked();

private:
    Ui::Add_motor *ui;
};

#endif // ADD_MOTOR_H
