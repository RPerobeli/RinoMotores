#ifndef EDIT_MOTOR_H
#define EDIT_MOTOR_H

#include <QDialog>

namespace Ui {
class Edit_Motor;
}

class Edit_Motor : public QDialog
{
    Q_OBJECT

public:
    explicit Edit_Motor(QWidget *parent = nullptr);
    ~Edit_Motor();

private slots:
    void on_BtnOK_clicked();

    void on_Edit_id_editingFinished();

    void on_Btn_Limpar_clicked();

private:
    Ui::Edit_Motor *ui;
};

#endif // EDIT_MOTOR_H
