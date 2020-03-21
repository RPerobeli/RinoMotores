/********************************************************************************
** Form generated from reading UI file 'edit_motor.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_MOTOR_H
#define UI_EDIT_MOTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Edit_Motor
{
public:
    QLabel *label_titulo;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_id;
    QLineEdit *Edit_id;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
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
    QVBoxLayout *verticalLayout;
    QLabel *label_Tensao;
    QLineEdit *Edit_Tensao;
    QLabel *label_CurrMin;
    QLineEdit *Edit_CurrMin;
    QLabel *label_Torq;
    QLineEdit *Edit_Torque;
    QLabel *label_reducao;
    QLineEdit *Edit_Reducao;
    QLabel *label_Kv;
    QLineEdit *Edit_Kv;
    QPushButton *BtnOK;

    void setupUi(QDialog *Edit_Motor)
    {
        if (Edit_Motor->objectName().isEmpty())
            Edit_Motor->setObjectName(QString::fromUtf8("Edit_Motor"));
        Edit_Motor->resize(277, 416);
        Edit_Motor->setStyleSheet(QString::fromUtf8("background-color:#fff"));
        label_titulo = new QLabel(Edit_Motor);
        label_titulo->setObjectName(QString::fromUtf8("label_titulo"));
        label_titulo->setGeometry(QRect(20, 30, 231, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(12);
        label_titulo->setFont(font);
        label_titulo->setStyleSheet(QString::fromUtf8("background-color:#fff;\n"
"color:#c73232;"));
        label_titulo->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(Edit_Motor);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 70, 134, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_id = new QLabel(layoutWidget);
        label_id->setObjectName(QString::fromUtf8("label_id"));

        horizontalLayout_2->addWidget(label_id);

        Edit_id = new QLineEdit(layoutWidget);
        Edit_id->setObjectName(QString::fromUtf8("Edit_id"));

        horizontalLayout_2->addWidget(Edit_id);

        layoutWidget1 = new QWidget(Edit_Motor);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 100, 246, 299));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
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


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_Tensao = new QLabel(layoutWidget1);
        label_Tensao->setObjectName(QString::fromUtf8("label_Tensao"));

        verticalLayout->addWidget(label_Tensao);

        Edit_Tensao = new QLineEdit(layoutWidget1);
        Edit_Tensao->setObjectName(QString::fromUtf8("Edit_Tensao"));

        verticalLayout->addWidget(Edit_Tensao);

        label_CurrMin = new QLabel(layoutWidget1);
        label_CurrMin->setObjectName(QString::fromUtf8("label_CurrMin"));

        verticalLayout->addWidget(label_CurrMin);

        Edit_CurrMin = new QLineEdit(layoutWidget1);
        Edit_CurrMin->setObjectName(QString::fromUtf8("Edit_CurrMin"));

        verticalLayout->addWidget(Edit_CurrMin);

        label_Torq = new QLabel(layoutWidget1);
        label_Torq->setObjectName(QString::fromUtf8("label_Torq"));

        verticalLayout->addWidget(label_Torq);

        Edit_Torque = new QLineEdit(layoutWidget1);
        Edit_Torque->setObjectName(QString::fromUtf8("Edit_Torque"));

        verticalLayout->addWidget(Edit_Torque);

        label_reducao = new QLabel(layoutWidget1);
        label_reducao->setObjectName(QString::fromUtf8("label_reducao"));

        verticalLayout->addWidget(label_reducao);

        Edit_Reducao = new QLineEdit(layoutWidget1);
        Edit_Reducao->setObjectName(QString::fromUtf8("Edit_Reducao"));

        verticalLayout->addWidget(Edit_Reducao);

        label_Kv = new QLabel(layoutWidget1);
        label_Kv->setObjectName(QString::fromUtf8("label_Kv"));

        verticalLayout->addWidget(label_Kv);

        Edit_Kv = new QLineEdit(layoutWidget1);
        Edit_Kv->setObjectName(QString::fromUtf8("Edit_Kv"));

        verticalLayout->addWidget(Edit_Kv);

        BtnOK = new QPushButton(layoutWidget1);
        BtnOK->setObjectName(QString::fromUtf8("BtnOK"));
        BtnOK->setStyleSheet(QString::fromUtf8("background-color:#c73232;\n"
"color:#fff;"));

        verticalLayout->addWidget(BtnOK);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Edit_Motor);

        QMetaObject::connectSlotsByName(Edit_Motor);
    } // setupUi

    void retranslateUi(QDialog *Edit_Motor)
    {
        Edit_Motor->setWindowTitle(QCoreApplication::translate("Edit_Motor", "Dialog", nullptr));
        label_titulo->setText(QCoreApplication::translate("Edit_Motor", "Alterar motor:", nullptr));
        label_id->setText(QCoreApplication::translate("Edit_Motor", "ID:", nullptr));
        label_Fabricante->setText(QCoreApplication::translate("Edit_Motor", "Fabricante", nullptr));
        label_CurrMax->setText(QCoreApplication::translate("Edit_Motor", "Corrente M\303\241x(A)", nullptr));
        label_rot->setText(QCoreApplication::translate("Edit_Motor", "Rota\303\247\303\243o M\303\241x(rpm)", nullptr));
        label_preco->setText(QCoreApplication::translate("Edit_Motor", "Pre\303\247o(R$)", nullptr));
        label_Kt->setText(QCoreApplication::translate("Edit_Motor", "Kt (kg.mm/A)", nullptr));
        Edit_Kt->setText(QString());
        Btn_Limpar->setText(QCoreApplication::translate("Edit_Motor", "Limpar", nullptr));
        label_Tensao->setText(QCoreApplication::translate("Edit_Motor", "Tens\303\243o(V)", nullptr));
        label_CurrMin->setText(QCoreApplication::translate("Edit_Motor", "Corrente M\303\255n(A)", nullptr));
        label_Torq->setText(QCoreApplication::translate("Edit_Motor", "Torque M\303\241x (kgf.mm)", nullptr));
        label_reducao->setText(QCoreApplication::translate("Edit_Motor", "Reducao", nullptr));
        Edit_Reducao->setText(QString());
        label_Kv->setText(QCoreApplication::translate("Edit_Motor", "Kv (V/rpm)", nullptr));
        Edit_Kv->setText(QString());
        BtnOK->setText(QCoreApplication::translate("Edit_Motor", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Edit_Motor: public Ui_Edit_Motor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_MOTOR_H
