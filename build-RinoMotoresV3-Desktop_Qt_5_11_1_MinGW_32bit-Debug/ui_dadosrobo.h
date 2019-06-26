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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DadosRobo
{
public:
    QLabel *label_ImagemCG;
    QLabel *label_titulo;
    QPushButton *Btn_Avisos;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QComboBox *comboBox_Pesquisa;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_6;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *BtnOK;
    QPushButton *Btn_Cancel;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_Massa;
    QLineEdit *Edit_Massa;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_raio;
    QLineEdit *Edit_Raio;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_Cg;
    QHBoxLayout *horizontalLayout;
    QLineEdit *Edit_Cg;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_coefAtrito;
    QLineEdit *Edit_CoefAtrito;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_Forca;
    QLineEdit *Edit_Forca;

    void setupUi(QDialog *DadosRobo)
    {
        if (DadosRobo->objectName().isEmpty())
            DadosRobo->setObjectName(QStringLiteral("DadosRobo"));
        DadosRobo->resize(575, 414);
        DadosRobo->setStyleSheet(QStringLiteral("background-color:#fff"));
        label_ImagemCG = new QLabel(DadosRobo);
        label_ImagemCG->setObjectName(QStringLiteral("label_ImagemCG"));
        label_ImagemCG->setGeometry(QRect(220, 200, 331, 171));
        label_titulo = new QLabel(DadosRobo);
        label_titulo->setObjectName(QStringLiteral("label_titulo"));
        label_titulo->setGeometry(QRect(10, 10, 551, 51));
        QFont font;
        font.setPointSize(16);
        label_titulo->setFont(font);
        label_titulo->setStyleSheet(QLatin1String("background-color:#c73232;\n"
"color:#fff;"));
        label_titulo->setAlignment(Qt::AlignCenter);
        Btn_Avisos = new QPushButton(DadosRobo);
        Btn_Avisos->setObjectName(QStringLiteral("Btn_Avisos"));
        Btn_Avisos->setGeometry(QRect(230, 70, 93, 28));
        Btn_Avisos->setStyleSheet(QLatin1String("background-color:#305dbf;\n"
"color:#fff;"));
        widget = new QWidget(DadosRobo);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(380, 110, 181, 49));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        comboBox_Pesquisa = new QComboBox(widget);
        comboBox_Pesquisa->addItem(QString());
        comboBox_Pesquisa->addItem(QString());
        comboBox_Pesquisa->addItem(QString());
        comboBox_Pesquisa->addItem(QString());
        comboBox_Pesquisa->addItem(QString());
        comboBox_Pesquisa->setObjectName(QStringLiteral("comboBox_Pesquisa"));
        comboBox_Pesquisa->setStyleSheet(QLatin1String("background-color:#c73232;\n"
"color:#fff;"));

        verticalLayout->addWidget(comboBox_Pesquisa);

        widget1 = new QWidget(DadosRobo);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(260, 110, 110, 49));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        lineEdit_6 = new QLineEdit(widget1);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        verticalLayout_2->addWidget(lineEdit_6);

        widget2 = new QWidget(DadosRobo);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(320, 380, 241, 27));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        BtnOK = new QPushButton(widget2);
        BtnOK->setObjectName(QStringLiteral("BtnOK"));
        BtnOK->setStyleSheet(QLatin1String("background-color:#c73232;\n"
"color:#fff;"));

        horizontalLayout_2->addWidget(BtnOK);

        Btn_Cancel = new QPushButton(widget2);
        Btn_Cancel->setObjectName(QStringLiteral("Btn_Cancel"));
        Btn_Cancel->setStyleSheet(QLatin1String("background-color:#c73232;\n"
"color:#fff;"));

        horizontalLayout_2->addWidget(Btn_Cancel);

        widget3 = new QWidget(DadosRobo);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(30, 110, 162, 277));
        verticalLayout_8 = new QVBoxLayout(widget3);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_Massa = new QLabel(widget3);
        label_Massa->setObjectName(QStringLiteral("label_Massa"));

        verticalLayout_3->addWidget(label_Massa);

        Edit_Massa = new QLineEdit(widget3);
        Edit_Massa->setObjectName(QStringLiteral("Edit_Massa"));

        verticalLayout_3->addWidget(Edit_Massa);


        verticalLayout_8->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_raio = new QLabel(widget3);
        label_raio->setObjectName(QStringLiteral("label_raio"));

        verticalLayout_4->addWidget(label_raio);

        Edit_Raio = new QLineEdit(widget3);
        Edit_Raio->setObjectName(QStringLiteral("Edit_Raio"));

        verticalLayout_4->addWidget(Edit_Raio);


        verticalLayout_8->addLayout(verticalLayout_4);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_Cg = new QLabel(widget3);
        label_Cg->setObjectName(QStringLiteral("label_Cg"));

        verticalLayout_7->addWidget(label_Cg);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Edit_Cg = new QLineEdit(widget3);
        Edit_Cg->setObjectName(QStringLiteral("Edit_Cg"));

        horizontalLayout->addWidget(Edit_Cg);


        verticalLayout_7->addLayout(horizontalLayout);


        verticalLayout_8->addLayout(verticalLayout_7);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_coefAtrito = new QLabel(widget3);
        label_coefAtrito->setObjectName(QStringLiteral("label_coefAtrito"));

        verticalLayout_5->addWidget(label_coefAtrito);

        Edit_CoefAtrito = new QLineEdit(widget3);
        Edit_CoefAtrito->setObjectName(QStringLiteral("Edit_CoefAtrito"));

        verticalLayout_5->addWidget(Edit_CoefAtrito);


        verticalLayout_8->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_Forca = new QLabel(widget3);
        label_Forca->setObjectName(QStringLiteral("label_Forca"));

        verticalLayout_6->addWidget(label_Forca);

        Edit_Forca = new QLineEdit(widget3);
        Edit_Forca->setObjectName(QStringLiteral("Edit_Forca"));

        verticalLayout_6->addWidget(Edit_Forca);


        verticalLayout_8->addLayout(verticalLayout_6);


        retranslateUi(DadosRobo);

        QMetaObject::connectSlotsByName(DadosRobo);
    } // setupUi

    void retranslateUi(QDialog *DadosRobo)
    {
        DadosRobo->setWindowTitle(QApplication::translate("DadosRobo", "Dialog", nullptr));
        label_ImagemCG->setText(QApplication::translate("DadosRobo", "TextLabel", nullptr));
        label_titulo->setText(QApplication::translate("DadosRobo", "Dados Externos ao Motor", nullptr));
        Btn_Avisos->setText(QApplication::translate("DadosRobo", "Avisos", nullptr));
        label_2->setText(QApplication::translate("DadosRobo", "Quantidade de motores:", nullptr));
        comboBox_Pesquisa->setItemText(0, QApplication::translate("DadosRobo", "Selecione", nullptr));
        comboBox_Pesquisa->setItemText(1, QApplication::translate("DadosRobo", "1 motor para 2 rodas", nullptr));
        comboBox_Pesquisa->setItemText(2, QApplication::translate("DadosRobo", "2 motores para 2 rodas", nullptr));
        comboBox_Pesquisa->setItemText(3, QApplication::translate("DadosRobo", "2 motores para 4 rodas", nullptr));
        comboBox_Pesquisa->setItemText(4, QApplication::translate("DadosRobo", "4 motores para 4 rodas", nullptr));

        label->setText(QApplication::translate("DadosRobo", "Gravidade (m/s\302\262):", nullptr));
        BtnOK->setText(QApplication::translate("DadosRobo", "Ok", nullptr));
        Btn_Cancel->setText(QApplication::translate("DadosRobo", "Cancelar", nullptr));
        label_Massa->setText(QApplication::translate("DadosRobo", "Massa do Rob\303\264 (g):", nullptr));
        label_raio->setText(QApplication::translate("DadosRobo", "Raio da Roda (mm):", nullptr));
        label_Cg->setText(QApplication::translate("DadosRobo", "Centro de Gravidade (mm):", nullptr));
        label_coefAtrito->setText(QApplication::translate("DadosRobo", "Coeficiente de Atrito :", nullptr));
        label_Forca->setText(QApplication::translate("DadosRobo", "Forca Resistente (N) :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DadosRobo: public Ui_DadosRobo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DADOSROBO_H
