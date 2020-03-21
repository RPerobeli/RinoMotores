/********************************************************************************
** Form generated from reading UI file 'add_motor.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
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
    QWidget *layoutWidget;
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
    QWidget *layoutWidget1;
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
            Add_motor->setObjectName(QString::fromUtf8("Add_motor"));
        Add_motor->resize(269, 366);
        Add_motor->setStyleSheet(QString::fromUtf8("background-color:#fff"));
        label_titulo = new QLabel(Add_motor);
        label_titulo->setObjectName(QString::fromUtf8("label_titulo"));
        label_titulo->setGeometry(QRect(20, 10, 231, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(12);
        label_titulo->setFont(font);
        label_titulo->setStyleSheet(QString::fromUtf8("background-color:#fff;\n"
"color:#c73232;"));
        label_titulo->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(Add_motor);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(129, 52, 127, 297));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_Tensao = new QLabel(layoutWidget);
        label_Tensao->setObjectName(QString::fromUtf8("label_Tensao"));

        verticalLayout->addWidget(label_Tensao);

        Edit_Tensao = new QLineEdit(layoutWidget);
        Edit_Tensao->setObjectName(QString::fromUtf8("Edit_Tensao"));

        verticalLayout->addWidget(Edit_Tensao);

        label_CurrMin = new QLabel(layoutWidget);
        label_CurrMin->setObjectName(QString::fromUtf8("label_CurrMin"));

        verticalLayout->addWidget(label_CurrMin);

        Edit_CurrMin = new QLineEdit(layoutWidget);
        Edit_CurrMin->setObjectName(QString::fromUtf8("Edit_CurrMin"));

        verticalLayout->addWidget(Edit_CurrMin);

        label_Torq = new QLabel(layoutWidget);
        label_Torq->setObjectName(QString::fromUtf8("label_Torq"));

        verticalLayout->addWidget(label_Torq);

        Edit_Torque = new QLineEdit(layoutWidget);
        Edit_Torque->setObjectName(QString::fromUtf8("Edit_Torque"));

        verticalLayout->addWidget(Edit_Torque);

        label_Reducao = new QLabel(layoutWidget);
        label_Reducao->setObjectName(QString::fromUtf8("label_Reducao"));

        verticalLayout->addWidget(label_Reducao);

        Edit_Reducao = new QLineEdit(layoutWidget);
        Edit_Reducao->setObjectName(QString::fromUtf8("Edit_Reducao"));

        verticalLayout->addWidget(Edit_Reducao);

        label_Kv = new QLabel(layoutWidget);
        label_Kv->setObjectName(QString::fromUtf8("label_Kv"));

        verticalLayout->addWidget(label_Kv);

        Edit_Kv = new QLineEdit(layoutWidget);
        Edit_Kv->setObjectName(QString::fromUtf8("Edit_Kv"));

        verticalLayout->addWidget(Edit_Kv);

        BtnOK = new QPushButton(layoutWidget);
        BtnOK->setObjectName(QString::fromUtf8("BtnOK"));
        BtnOK->setStyleSheet(QString::fromUtf8("background-color:#c73232;\n"
"color:#fff;"));

        verticalLayout->addWidget(BtnOK);

        layoutWidget1 = new QWidget(Add_motor);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(12, 52, 110, 297));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_Fabricante = new QLabel(layoutWidget1);
        label_Fabricante->setObjectName(QString::fromUtf8("label_Fabricante"));

        verticalLayout_2->addWidget(label_Fabricante);

        Edit_Fabricante = new QLineEdit(layoutWidget1);
        Edit_Fabricante->setObjectName(QString::fromUtf8("Edit_Fabricante"));

        verticalLayout_2->addWidget(Edit_Fabricante);

        label_CurrMax = new QLabel(layoutWidget1);
        label_CurrMax->setObjectName(QString::fromUtf8("label_CurrMax"));

        verticalLayout_2->addWidget(label_CurrMax);

        Edit_CurrMax = new QLineEdit(layoutWidget1);
        Edit_CurrMax->setObjectName(QString::fromUtf8("Edit_CurrMax"));

        verticalLayout_2->addWidget(Edit_CurrMax);

        label_rot = new QLabel(layoutWidget1);
        label_rot->setObjectName(QString::fromUtf8("label_rot"));

        verticalLayout_2->addWidget(label_rot);

        Edit_Rot = new QLineEdit(layoutWidget1);
        Edit_Rot->setObjectName(QString::fromUtf8("Edit_Rot"));

        verticalLayout_2->addWidget(Edit_Rot);

        label_preco = new QLabel(layoutWidget1);
        label_preco->setObjectName(QString::fromUtf8("label_preco"));

        verticalLayout_2->addWidget(label_preco);

        Edit_Preco = new QLineEdit(layoutWidget1);
        Edit_Preco->setObjectName(QString::fromUtf8("Edit_Preco"));

        verticalLayout_2->addWidget(Edit_Preco);

        label_Kt = new QLabel(layoutWidget1);
        label_Kt->setObjectName(QString::fromUtf8("label_Kt"));

        verticalLayout_2->addWidget(label_Kt);

        Edit_Kt = new QLineEdit(layoutWidget1);
        Edit_Kt->setObjectName(QString::fromUtf8("Edit_Kt"));

        verticalLayout_2->addWidget(Edit_Kt);

        Btn_Limpar = new QPushButton(layoutWidget1);
        Btn_Limpar->setObjectName(QString::fromUtf8("Btn_Limpar"));
        Btn_Limpar->setStyleSheet(QString::fromUtf8("background-color:#c73232;\n"
"color:#fff;"));

        verticalLayout_2->addWidget(Btn_Limpar);


        retranslateUi(Add_motor);

        QMetaObject::connectSlotsByName(Add_motor);
    } // setupUi

    void retranslateUi(QDialog *Add_motor)
    {
        Add_motor->setWindowTitle(QCoreApplication::translate("Add_motor", "Dialog", nullptr));
        label_titulo->setText(QCoreApplication::translate("Add_motor", "Novo motor:", nullptr));
        label_Tensao->setText(QCoreApplication::translate("Add_motor", "Tens\303\243o(V)", nullptr));
        label_CurrMin->setText(QCoreApplication::translate("Add_motor", "Corrente M\303\255n(A)", nullptr));
        label_Torq->setText(QCoreApplication::translate("Add_motor", "Torque M\303\241x (kgf.mm)", nullptr));
        label_Reducao->setText(QCoreApplication::translate("Add_motor", "Reducao", nullptr));
        label_Kv->setText(QCoreApplication::translate("Add_motor", "Kv (V/rpm)", nullptr));
        BtnOK->setText(QCoreApplication::translate("Add_motor", "Ok", nullptr));
        label_Fabricante->setText(QCoreApplication::translate("Add_motor", "Fabricante", nullptr));
        label_CurrMax->setText(QCoreApplication::translate("Add_motor", "Corrente M\303\241x(A)", nullptr));
        label_rot->setText(QCoreApplication::translate("Add_motor", "Rota\303\247\303\243o M\303\241x(rpm)", nullptr));
        label_preco->setText(QCoreApplication::translate("Add_motor", "Pre\303\247o(R$)", nullptr));
        label_Kt->setText(QCoreApplication::translate("Add_motor", "Kt (kg.mm/A)", nullptr));
        Btn_Limpar->setText(QCoreApplication::translate("Add_motor", "Limpar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_motor: public Ui_Add_motor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_MOTOR_H
