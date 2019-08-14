/********************************************************************************
** Form generated from reading UI file 'add_motor.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_MOTOR_H
#define UI_ADD_MOTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add_motor
{
public:
    QLabel *label_titulo;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_Tensao;
    QLineEdit *Edit_Tensao;
    QLabel *label_CurrMin;
    QLineEdit *Edit_CurrMin;
    QLabel *label_Torq;
    QLineEdit *Edit_Torque;
    QLabel *label_Reducao;
    QLineEdit *Edit_Reducao;
    QLabel *label_Kv;
    QLineEdit *Edit_Kv;
    QPushButton *BtnOK;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_Fabricante;
    QLineEdit *Edit_Fabricante;
    QLabel *label_CurrMax;
    QLineEdit *Edit_CurrMax;
    QLabel *label_rot;
    QLineEdit *Edit_Rot;
    QLabel *label_preco;
    QLineEdit *Edit_Preco;
    QLabel *label_Kt;
    QLineEdit *Edit_Kt;
    QPushButton *Btn_Limpar;

    void setupUi(QDialog *Add_motor)
    {
        if (Add_motor->objectName().isEmpty())
            Add_motor->setObjectName(QStringLiteral("Add_motor"));
        Add_motor->resize(269, 366);
        Add_motor->setStyleSheet(QStringLiteral("background-color:#fff"));
        label_titulo = new QLabel(Add_motor);
        label_titulo->setObjectName(QStringLiteral("label_titulo"));
        label_titulo->setGeometry(QRect(20, 10, 231, 21));
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(12);
        label_titulo->setFont(font);
        label_titulo->setStyleSheet(QLatin1String("background-color:#fff;\n"
"color:#c73232;"));
        label_titulo->setAlignment(Qt::AlignCenter);
        widget = new QWidget(Add_motor);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(129, 52, 127, 297));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_Tensao = new QLabel(widget);
        label_Tensao->setObjectName(QStringLiteral("label_Tensao"));

        verticalLayout->addWidget(label_Tensao);

        Edit_Tensao = new QLineEdit(widget);
        Edit_Tensao->setObjectName(QStringLiteral("Edit_Tensao"));

        verticalLayout->addWidget(Edit_Tensao);

        label_CurrMin = new QLabel(widget);
        label_CurrMin->setObjectName(QStringLiteral("label_CurrMin"));

        verticalLayout->addWidget(label_CurrMin);

        Edit_CurrMin = new QLineEdit(widget);
        Edit_CurrMin->setObjectName(QStringLiteral("Edit_CurrMin"));

        verticalLayout->addWidget(Edit_CurrMin);

        label_Torq = new QLabel(widget);
        label_Torq->setObjectName(QStringLiteral("label_Torq"));

        verticalLayout->addWidget(label_Torq);

        Edit_Torque = new QLineEdit(widget);
        Edit_Torque->setObjectName(QStringLiteral("Edit_Torque"));

        verticalLayout->addWidget(Edit_Torque);

        label_Reducao = new QLabel(widget);
        label_Reducao->setObjectName(QStringLiteral("label_Reducao"));

        verticalLayout->addWidget(label_Reducao);

        Edit_Reducao = new QLineEdit(widget);
        Edit_Reducao->setObjectName(QStringLiteral("Edit_Reducao"));

        verticalLayout->addWidget(Edit_Reducao);

        label_Kv = new QLabel(widget);
        label_Kv->setObjectName(QStringLiteral("label_Kv"));

        verticalLayout->addWidget(label_Kv);

        Edit_Kv = new QLineEdit(widget);
        Edit_Kv->setObjectName(QStringLiteral("Edit_Kv"));

        verticalLayout->addWidget(Edit_Kv);

        BtnOK = new QPushButton(widget);
        BtnOK->setObjectName(QStringLiteral("BtnOK"));
        BtnOK->setStyleSheet(QLatin1String("background-color:#c73232;\n"
"color:#fff;"));

        verticalLayout->addWidget(BtnOK);

        widget1 = new QWidget(Add_motor);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(12, 52, 110, 297));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_Fabricante = new QLabel(widget1);
        label_Fabricante->setObjectName(QStringLiteral("label_Fabricante"));

        verticalLayout_2->addWidget(label_Fabricante);

        Edit_Fabricante = new QLineEdit(widget1);
        Edit_Fabricante->setObjectName(QStringLiteral("Edit_Fabricante"));

        verticalLayout_2->addWidget(Edit_Fabricante);

        label_CurrMax = new QLabel(widget1);
        label_CurrMax->setObjectName(QStringLiteral("label_CurrMax"));

        verticalLayout_2->addWidget(label_CurrMax);

        Edit_CurrMax = new QLineEdit(widget1);
        Edit_CurrMax->setObjectName(QStringLiteral("Edit_CurrMax"));

        verticalLayout_2->addWidget(Edit_CurrMax);

        label_rot = new QLabel(widget1);
        label_rot->setObjectName(QStringLiteral("label_rot"));

        verticalLayout_2->addWidget(label_rot);

        Edit_Rot = new QLineEdit(widget1);
        Edit_Rot->setObjectName(QStringLiteral("Edit_Rot"));

        verticalLayout_2->addWidget(Edit_Rot);

        label_preco = new QLabel(widget1);
        label_preco->setObjectName(QStringLiteral("label_preco"));

        verticalLayout_2->addWidget(label_preco);

        Edit_Preco = new QLineEdit(widget1);
        Edit_Preco->setObjectName(QStringLiteral("Edit_Preco"));

        verticalLayout_2->addWidget(Edit_Preco);

        label_Kt = new QLabel(widget1);
        label_Kt->setObjectName(QStringLiteral("label_Kt"));

        verticalLayout_2->addWidget(label_Kt);

        Edit_Kt = new QLineEdit(widget1);
        Edit_Kt->setObjectName(QStringLiteral("Edit_Kt"));

        verticalLayout_2->addWidget(Edit_Kt);

        Btn_Limpar = new QPushButton(widget1);
        Btn_Limpar->setObjectName(QStringLiteral("Btn_Limpar"));
        Btn_Limpar->setStyleSheet(QLatin1String("background-color:#c73232;\n"
"color:#fff;"));

        verticalLayout_2->addWidget(Btn_Limpar);


        retranslateUi(Add_motor);

        QMetaObject::connectSlotsByName(Add_motor);
    } // setupUi

    void retranslateUi(QDialog *Add_motor)
    {
        Add_motor->setWindowTitle(QApplication::translate("Add_motor", "Dialog", nullptr));
        label_titulo->setText(QApplication::translate("Add_motor", "Novo motor:", nullptr));
        label_Tensao->setText(QApplication::translate("Add_motor", "Tens\303\243o(V)", nullptr));
        label_CurrMin->setText(QApplication::translate("Add_motor", "Corrente M\303\255n(A)", nullptr));
        label_Torq->setText(QApplication::translate("Add_motor", "Torque M\303\241x (kgf.mm)", nullptr));
        label_Reducao->setText(QApplication::translate("Add_motor", "Reducao", nullptr));
        label_Kv->setText(QApplication::translate("Add_motor", "Kv ()", nullptr));
        BtnOK->setText(QApplication::translate("Add_motor", "Ok", nullptr));
        label_Fabricante->setText(QApplication::translate("Add_motor", "Fabricante", nullptr));
        label_CurrMax->setText(QApplication::translate("Add_motor", "Corrente M\303\241x(A)", nullptr));
        label_rot->setText(QApplication::translate("Add_motor", "Rota\303\247\303\243o M\303\241x(rpm)", nullptr));
        label_preco->setText(QApplication::translate("Add_motor", "Pre\303\247o(R$)", nullptr));
        label_Kt->setText(QApplication::translate("Add_motor", "Kt ())", nullptr));
        Btn_Limpar->setText(QApplication::translate("Add_motor", "Limpar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_motor: public Ui_Add_motor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_MOTOR_H
