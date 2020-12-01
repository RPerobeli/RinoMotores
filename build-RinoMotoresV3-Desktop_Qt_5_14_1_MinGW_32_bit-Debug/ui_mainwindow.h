/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *Imagem;
    QPushButton *Btn_Instrucoes;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QComboBox *comboBox_Aplicacao;
    QLabel *label_2;
    QComboBox *comboBox;
    QPushButton *Btn_Motores;
    QPushButton *Btn_DadosRobo;
    QPushButton *Btn_Calcular;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(501, 388);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:#fff"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Imagem = new QLabel(centralWidget);
        Imagem->setObjectName(QString::fromUtf8("Imagem"));
        Imagem->setGeometry(QRect(180, 10, 311, 301));
        Imagem->setPixmap(QPixmap(QString::fromUtf8("LogoNova2017.png")));
        Imagem->setScaledContents(true);
        Btn_Instrucoes = new QPushButton(centralWidget);
        Btn_Instrucoes->setObjectName(QString::fromUtf8("Btn_Instrucoes"));
        Btn_Instrucoes->setGeometry(QRect(10, 20, 93, 28));
        Btn_Instrucoes->setStyleSheet(QString::fromUtf8("background-color:#305dbf;\n"
"color:#fff;"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 90, 156, 211));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        comboBox_Aplicacao = new QComboBox(layoutWidget);
        comboBox_Aplicacao->addItem(QString());
        comboBox_Aplicacao->addItem(QString());
        comboBox_Aplicacao->addItem(QString());
        comboBox_Aplicacao->addItem(QString());
        comboBox_Aplicacao->addItem(QString());
        comboBox_Aplicacao->addItem(QString());
        comboBox_Aplicacao->setObjectName(QString::fromUtf8("comboBox_Aplicacao"));
        comboBox_Aplicacao->setStyleSheet(QString::fromUtf8("background-color:#c73232;\n"
"color:#fff;"));

        verticalLayout->addWidget(comboBox_Aplicacao);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setStyleSheet(QString::fromUtf8("background-color:#c73232;\n"
"color:#fff;"));

        verticalLayout->addWidget(comboBox);

        Btn_Motores = new QPushButton(layoutWidget);
        Btn_Motores->setObjectName(QString::fromUtf8("Btn_Motores"));
        Btn_Motores->setStyleSheet(QString::fromUtf8("background-color:#c73232;\n"
"color:#fff;"));

        verticalLayout->addWidget(Btn_Motores);

        Btn_DadosRobo = new QPushButton(layoutWidget);
        Btn_DadosRobo->setObjectName(QString::fromUtf8("Btn_DadosRobo"));
        Btn_DadosRobo->setStyleSheet(QString::fromUtf8("background-color:#c73232;\n"
"color:#fff;"));

        verticalLayout->addWidget(Btn_DadosRobo);

        Btn_Calcular = new QPushButton(layoutWidget);
        Btn_Calcular->setObjectName(QString::fromUtf8("Btn_Calcular"));
        Btn_Calcular->setStyleSheet(QString::fromUtf8("background-color:#c73232;\n"
"color:#fff;"));

        verticalLayout->addWidget(Btn_Calcular);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 501, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Imagem->setText(QString());
        Btn_Instrucoes->setText(QCoreApplication::translate("MainWindow", "Instru\303\247\303\265es", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Selecione a Aplica\303\247\303\243o:", nullptr));
        comboBox_Aplicacao->setItemText(0, QCoreApplication::translate("MainWindow", "Selecione", nullptr));
        comboBox_Aplicacao->setItemText(1, QCoreApplication::translate("MainWindow", "Mini-sum\303\264", nullptr));
        comboBox_Aplicacao->setItemText(2, QCoreApplication::translate("MainWindow", "Seguidor de Linha", nullptr));
        comboBox_Aplicacao->setItemText(3, QCoreApplication::translate("MainWindow", "VSSS", nullptr));
        comboBox_Aplicacao->setItemText(4, QCoreApplication::translate("MainWindow", "Outros", nullptr));
        comboBox_Aplicacao->setItemText(5, QCoreApplication::translate("MainWindow", "Analise de Pot\303\252ncia", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "Foco de motor desejado:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Selecione", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "R\303\241pido", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Forte", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Eficiente", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Barato", nullptr));

        Btn_Motores->setText(QCoreApplication::translate("MainWindow", "Motores", nullptr));
        Btn_DadosRobo->setText(QCoreApplication::translate("MainWindow", "Dados Externos ao Motor", nullptr));
        Btn_Calcular->setText(QCoreApplication::translate("MainWindow", "Calcular", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
