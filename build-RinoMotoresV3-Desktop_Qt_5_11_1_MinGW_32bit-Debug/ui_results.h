/********************************************************************************
** Form generated from reading UI file 'results.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTS_H
#define UI_RESULTS_H

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

class Ui_Results
{
public:
    QLineEdit *lineEdit_Corrente;
    QLineEdit *lineEdit_Torque;
    QLineEdit *lineEdit_Pot;
    QLineEdit *lineEdit_Velocidade;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_Rotacao;
    QLineEdit *lineEdit_PotMax;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_Resultado;
    QLineEdit *lineEdit_Resultado_2;
    QLineEdit *lineEdit_Resultado_3;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *Btn_OK;

    void setupUi(QDialog *Results)
    {
        if (Results->objectName().isEmpty())
            Results->setObjectName(QStringLiteral("Results"));
        Results->resize(568, 328);
        Results->setStyleSheet(QLatin1String("background-color:#fff\n"
""));
        lineEdit_Corrente = new QLineEdit(Results);
        lineEdit_Corrente->setObjectName(QStringLiteral("lineEdit_Corrente"));
        lineEdit_Corrente->setGeometry(QRect(370, 240, 113, 24));
        lineEdit_Corrente->setReadOnly(true);
        lineEdit_Torque = new QLineEdit(Results);
        lineEdit_Torque->setObjectName(QStringLiteral("lineEdit_Torque"));
        lineEdit_Torque->setGeometry(QRect(10, 180, 113, 24));
        lineEdit_Torque->setReadOnly(true);
        lineEdit_Pot = new QLineEdit(Results);
        lineEdit_Pot->setObjectName(QStringLiteral("lineEdit_Pot"));
        lineEdit_Pot->setGeometry(QRect(10, 240, 113, 24));
        lineEdit_Pot->setReadOnly(true);
        lineEdit_Velocidade = new QLineEdit(Results);
        lineEdit_Velocidade->setObjectName(QStringLiteral("lineEdit_Velocidade"));
        lineEdit_Velocidade->setGeometry(QRect(370, 180, 113, 24));
        lineEdit_Velocidade->setReadOnly(true);
        layoutWidget = new QWidget(Results);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 150, 551, 18));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        lineEdit_Rotacao = new QLineEdit(Results);
        lineEdit_Rotacao->setObjectName(QStringLiteral("lineEdit_Rotacao"));
        lineEdit_Rotacao->setGeometry(QRect(190, 180, 113, 24));
        lineEdit_Rotacao->setReadOnly(true);
        lineEdit_PotMax = new QLineEdit(Results);
        lineEdit_PotMax->setObjectName(QStringLiteral("lineEdit_PotMax"));
        lineEdit_PotMax->setGeometry(QRect(190, 240, 113, 24));
        lineEdit_PotMax->setReadOnly(true);
        layoutWidget_2 = new QWidget(Results);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(11, 11, 431, 111));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lineEdit_Resultado = new QLineEdit(layoutWidget_2);
        lineEdit_Resultado->setObjectName(QStringLiteral("lineEdit_Resultado"));
        lineEdit_Resultado->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_Resultado);

        lineEdit_Resultado_2 = new QLineEdit(layoutWidget_2);
        lineEdit_Resultado_2->setObjectName(QStringLiteral("lineEdit_Resultado_2"));
        lineEdit_Resultado_2->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_Resultado_2);

        lineEdit_Resultado_3 = new QLineEdit(layoutWidget_2);
        lineEdit_Resultado_3->setObjectName(QStringLiteral("lineEdit_Resultado_3"));
        lineEdit_Resultado_3->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_Resultado_3);

        layoutWidget_3 = new QWidget(Results);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(460, 10, 51, 111));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_2->addWidget(label_8);

        lineEdit = new QLineEdit(layoutWidget_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_3 = new QLineEdit(layoutWidget_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_2 = new QLineEdit(layoutWidget_3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        layoutWidget_4 = new QWidget(Results);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 210, 541, 18));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        label_6 = new QLabel(layoutWidget_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_2->addWidget(label_6);

        label_7 = new QLabel(layoutWidget_4);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_2->addWidget(label_7);

        Btn_OK = new QPushButton(Results);
        Btn_OK->setObjectName(QStringLiteral("Btn_OK"));
        Btn_OK->setGeometry(QRect(460, 290, 80, 25));
        Btn_OK->setStyleSheet(QLatin1String("background-color:#c73232;\n"
"color:#fff;\n"
""));

        retranslateUi(Results);

        QMetaObject::connectSlotsByName(Results);
    } // setupUi

    void retranslateUi(QDialog *Results)
    {
        Results->setWindowTitle(QApplication::translate("Results", "Dialog", nullptr));
        label_2->setText(QApplication::translate("Results", "Torque atual(kg.mm", nullptr));
        label_3->setText(QApplication::translate("Results", "Rota\303\247ao atual no rob\303\264", nullptr));
        label_4->setText(QApplication::translate("Results", "Velocidade linear do rob\303\264(mm/s)", nullptr));
        label->setText(QApplication::translate("Results", "O motor mais indicado \303\251:", nullptr));
        label_8->setText(QApplication::translate("Results", "Notas:", nullptr));
        label_5->setText(QApplication::translate("Results", "Pot\303\252ncia prevista(W)", nullptr));
        label_6->setText(QApplication::translate("Results", "Pot\303\252ncia m\303\241xima te\303\263rica", nullptr));
        label_7->setText(QApplication::translate("Results", "Corrente atual(A)", nullptr));
        Btn_OK->setText(QApplication::translate("Results", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Results: public Ui_Results {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTS_H
