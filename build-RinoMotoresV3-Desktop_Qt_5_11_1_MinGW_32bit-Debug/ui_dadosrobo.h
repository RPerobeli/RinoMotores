/********************************************************************************
** Form generated from reading UI file 'dadosrobo.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DADOSROBO_H
#define UI_DADOSROBO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DadosRobo
{
public:
    QLabel *Imagem;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_Massa;
    QLineEdit *Edit_Massa;
    QLabel *label_raio;
    QLineEdit *Edit_Raio;
    QLabel *label_comprimento;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_L;
    QLineEdit *Edit_Comprimento;
    QLabel *label_Cg;
    QHBoxLayout *horizontalLayout;
    QLabel *label_X;
    QLineEdit *Edit_Cg;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_Gravidade;
    QLineEdit *Edit_Gravidade;
    QLabel *label_coefAtrito;
    QLineEdit *Edit_CoefAtrito;
    QLabel *label_Forca;
    QLineEdit *Edit_Forca;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_QtdMotores;
    QComboBox *comboBox_QtdMotores;
    QLabel *label_Aux1;
    QVBoxLayout *verticalLayout;
    QLabel *label_PosicaoEixo1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_E1;
    QLineEdit *Edit_PosicaoEixo1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_PosicaoEixo2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_E2;
    QLineEdit *Edit_PosicaoEixo2;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_7;
    QPushButton *BtnOK;
    QPushButton *Btn_Cancel;
    QWidget *widget;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_titulo;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Btn_Avisos;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *DadosRobo)
    {
        if (DadosRobo->objectName().isEmpty())
            DadosRobo->setObjectName(QStringLiteral("DadosRobo"));
        DadosRobo->resize(642, 579);
        DadosRobo->setStyleSheet(QStringLiteral("background-color:#fff"));
        Imagem = new QLabel(DadosRobo);
        Imagem->setObjectName(QStringLiteral("Imagem"));
        Imagem->setGeometry(QRect(31, 350, 321, 211));
        Imagem->setPixmap(QPixmap(QString::fromUtf8("img_CG.png")));
        Imagem->setScaledContents(true);
        layoutWidget = new QWidget(DadosRobo);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 117, 168, 215));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_Massa = new QLabel(layoutWidget);
        label_Massa->setObjectName(QStringLiteral("label_Massa"));

        verticalLayout_3->addWidget(label_Massa);

        Edit_Massa = new QLineEdit(layoutWidget);
        Edit_Massa->setObjectName(QStringLiteral("Edit_Massa"));

        verticalLayout_3->addWidget(Edit_Massa);

        label_raio = new QLabel(layoutWidget);
        label_raio->setObjectName(QStringLiteral("label_raio"));

        verticalLayout_3->addWidget(label_raio);

        Edit_Raio = new QLineEdit(layoutWidget);
        Edit_Raio->setObjectName(QStringLiteral("Edit_Raio"));

        verticalLayout_3->addWidget(Edit_Raio);

        label_comprimento = new QLabel(layoutWidget);
        label_comprimento->setObjectName(QStringLiteral("label_comprimento"));

        verticalLayout_3->addWidget(label_comprimento);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_L = new QLabel(layoutWidget);
        label_L->setObjectName(QStringLiteral("label_L"));

        horizontalLayout_3->addWidget(label_L);

        Edit_Comprimento = new QLineEdit(layoutWidget);
        Edit_Comprimento->setObjectName(QStringLiteral("Edit_Comprimento"));

        horizontalLayout_3->addWidget(Edit_Comprimento);


        verticalLayout_3->addLayout(horizontalLayout_3);

        label_Cg = new QLabel(layoutWidget);
        label_Cg->setObjectName(QStringLiteral("label_Cg"));

        verticalLayout_3->addWidget(label_Cg);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_X = new QLabel(layoutWidget);
        label_X->setObjectName(QStringLiteral("label_X"));

        horizontalLayout->addWidget(label_X);

        Edit_Cg = new QLineEdit(layoutWidget);
        Edit_Cg->setObjectName(QStringLiteral("Edit_Cg"));

        horizontalLayout->addWidget(Edit_Cg);


        verticalLayout_3->addLayout(horizontalLayout);

        layoutWidget1 = new QWidget(DadosRobo);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(230, 120, 192, 157));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_Gravidade = new QLabel(layoutWidget1);
        label_Gravidade->setObjectName(QStringLiteral("label_Gravidade"));

        verticalLayout_4->addWidget(label_Gravidade);

        Edit_Gravidade = new QLineEdit(layoutWidget1);
        Edit_Gravidade->setObjectName(QStringLiteral("Edit_Gravidade"));

        verticalLayout_4->addWidget(Edit_Gravidade);

        label_coefAtrito = new QLabel(layoutWidget1);
        label_coefAtrito->setObjectName(QStringLiteral("label_coefAtrito"));

        verticalLayout_4->addWidget(label_coefAtrito);

        Edit_CoefAtrito = new QLineEdit(layoutWidget1);
        Edit_CoefAtrito->setObjectName(QStringLiteral("Edit_CoefAtrito"));

        verticalLayout_4->addWidget(Edit_CoefAtrito);

        label_Forca = new QLabel(layoutWidget1);
        label_Forca->setObjectName(QStringLiteral("label_Forca"));

        verticalLayout_4->addWidget(label_Forca);

        Edit_Forca = new QLineEdit(layoutWidget1);
        Edit_Forca->setObjectName(QStringLiteral("Edit_Forca"));

        verticalLayout_4->addWidget(Edit_Forca);

        layoutWidget2 = new QWidget(DadosRobo);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(450, 120, 171, 190));
        verticalLayout_6 = new QVBoxLayout(layoutWidget2);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_QtdMotores = new QLabel(layoutWidget2);
        label_QtdMotores->setObjectName(QStringLiteral("label_QtdMotores"));

        verticalLayout_5->addWidget(label_QtdMotores);

        comboBox_QtdMotores = new QComboBox(layoutWidget2);
        comboBox_QtdMotores->addItem(QString());
        comboBox_QtdMotores->addItem(QString());
        comboBox_QtdMotores->addItem(QString());
        comboBox_QtdMotores->addItem(QString());
        comboBox_QtdMotores->addItem(QString());
        comboBox_QtdMotores->setObjectName(QStringLiteral("comboBox_QtdMotores"));
        comboBox_QtdMotores->setStyleSheet(QLatin1String("background-color:#c73232;\n"
"color:#fff;"));

        verticalLayout_5->addWidget(comboBox_QtdMotores);

        label_Aux1 = new QLabel(layoutWidget2);
        label_Aux1->setObjectName(QStringLiteral("label_Aux1"));

        verticalLayout_5->addWidget(label_Aux1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_PosicaoEixo1 = new QLabel(layoutWidget2);
        label_PosicaoEixo1->setObjectName(QStringLiteral("label_PosicaoEixo1"));

        verticalLayout->addWidget(label_PosicaoEixo1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_E1 = new QLabel(layoutWidget2);
        label_E1->setObjectName(QStringLiteral("label_E1"));

        horizontalLayout_5->addWidget(label_E1);

        Edit_PosicaoEixo1 = new QLineEdit(layoutWidget2);
        Edit_PosicaoEixo1->setObjectName(QStringLiteral("Edit_PosicaoEixo1"));

        horizontalLayout_5->addWidget(Edit_PosicaoEixo1);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_5->addLayout(verticalLayout);


        verticalLayout_6->addLayout(verticalLayout_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_PosicaoEixo2 = new QLabel(layoutWidget2);
        label_PosicaoEixo2->setObjectName(QStringLiteral("label_PosicaoEixo2"));

        verticalLayout_2->addWidget(label_PosicaoEixo2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_E2 = new QLabel(layoutWidget2);
        label_E2->setObjectName(QStringLiteral("label_E2"));

        horizontalLayout_4->addWidget(label_E2);

        Edit_PosicaoEixo2 = new QLineEdit(layoutWidget2);
        Edit_PosicaoEixo2->setObjectName(QStringLiteral("Edit_PosicaoEixo2"));

        horizontalLayout_4->addWidget(Edit_PosicaoEixo2);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_6->addLayout(verticalLayout_2);

        layoutWidget3 = new QWidget(DadosRobo);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(500, 490, 131, 59));
        verticalLayout_7 = new QVBoxLayout(layoutWidget3);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        BtnOK = new QPushButton(layoutWidget3);
        BtnOK->setObjectName(QStringLiteral("BtnOK"));
        BtnOK->setStyleSheet(QLatin1String("background-color:#c73232;\n"
"color:#fff;"));

        verticalLayout_7->addWidget(BtnOK);

        Btn_Cancel = new QPushButton(layoutWidget3);
        Btn_Cancel->setObjectName(QStringLiteral("Btn_Cancel"));
        Btn_Cancel->setStyleSheet(QLatin1String("background-color:#c73232;\n"
"color:#fff;"));

        verticalLayout_7->addWidget(Btn_Cancel);

        widget = new QWidget(DadosRobo);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 611, 69));
        verticalLayout_8 = new QVBoxLayout(widget);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_titulo = new QLabel(widget);
        label_titulo->setObjectName(QStringLiteral("label_titulo"));
        QFont font;
        font.setPointSize(16);
        label_titulo->setFont(font);
        label_titulo->setStyleSheet(QLatin1String("background-color:#c73232;\n"
"color:#fff;"));
        label_titulo->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_titulo);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        Btn_Avisos = new QPushButton(widget);
        Btn_Avisos->setObjectName(QStringLiteral("Btn_Avisos"));
        Btn_Avisos->setStyleSheet(QLatin1String("background-color:#305dbf;\n"
"color:#fff;"));

        horizontalLayout_2->addWidget(Btn_Avisos);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_8->addLayout(horizontalLayout_2);


        retranslateUi(DadosRobo);

        QMetaObject::connectSlotsByName(DadosRobo);
    } // setupUi

    void retranslateUi(QDialog *DadosRobo)
    {
        DadosRobo->setWindowTitle(QApplication::translate("DadosRobo", "Dialog", nullptr));
        Imagem->setText(QString());
        label_Massa->setText(QApplication::translate("DadosRobo", "Massa do Rob\303\264 (g):", nullptr));
        label_raio->setText(QApplication::translate("DadosRobo", "Raio da Roda (mm):", nullptr));
        label_comprimento->setText(QApplication::translate("DadosRobo", "Comprimento do rob\303\264 (mm):", nullptr));
        label_L->setText(QApplication::translate("DadosRobo", "L: ", nullptr));
        label_Cg->setText(QApplication::translate("DadosRobo", "Centro de Gravidade (mm):", nullptr));
        label_X->setText(QApplication::translate("DadosRobo", "X:", nullptr));
        label_Gravidade->setText(QApplication::translate("DadosRobo", "Gravidade (m/s\302\262):", nullptr));
        label_coefAtrito->setText(QApplication::translate("DadosRobo", "Coeficiente de Atrito (din\303\242mico) :", nullptr));
        label_Forca->setText(QApplication::translate("DadosRobo", "Forca Resistente (N) :", nullptr));
        label_QtdMotores->setText(QApplication::translate("DadosRobo", "Quantidade de motores:", nullptr));
        comboBox_QtdMotores->setItemText(0, QApplication::translate("DadosRobo", "Selecione", nullptr));
        comboBox_QtdMotores->setItemText(1, QApplication::translate("DadosRobo", "1 motor para 2 rodas", nullptr));
        comboBox_QtdMotores->setItemText(2, QApplication::translate("DadosRobo", "2 motores para 2 rodas", nullptr));
        comboBox_QtdMotores->setItemText(3, QApplication::translate("DadosRobo", "2 motores para 4 rodas", nullptr));
        comboBox_QtdMotores->setItemText(4, QApplication::translate("DadosRobo", "4 motores para 4 rodas", nullptr));

        label_Aux1->setText(QApplication::translate("DadosRobo", "Posi\303\247\303\243o das  rodas (mm):", nullptr));
        label_PosicaoEixo1->setText(QApplication::translate("DadosRobo", "Posi\303\247\303\243o Eixo traseiro:", nullptr));
        label_E1->setText(QApplication::translate("DadosRobo", "E1: ", nullptr));
        label_PosicaoEixo2->setText(QApplication::translate("DadosRobo", "Posi\303\247\303\243o eixo dianteiro:", nullptr));
        label_E2->setText(QApplication::translate("DadosRobo", "E2: ", nullptr));
        BtnOK->setText(QApplication::translate("DadosRobo", "Ok", nullptr));
        Btn_Cancel->setText(QApplication::translate("DadosRobo", "Cancelar", nullptr));
        label_titulo->setText(QApplication::translate("DadosRobo", "Dados Externos ao Motor", nullptr));
        Btn_Avisos->setText(QApplication::translate("DadosRobo", "Avisos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DadosRobo: public Ui_DadosRobo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DADOSROBO_H
