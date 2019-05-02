/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_7;
    QComboBox *Uni_Raio;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_8;
    QComboBox *Uni_massa;
    QLabel *label_17;
    QLineEdit *lineEdit_14;
    QLabel *label_18;
    QLineEdit *Edit_CG;
    QLabel *label_3;
    QComboBox *comboBox_Aplicacao;
    QLabel *label_2;
    QComboBox *comboBox;
    QPushButton *Btn_Motores;
    QPushButton *Btn_Calcular;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(612, 552);
        MainWindow->setStyleSheet(QStringLiteral("background-color:#fff"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Imagem = new QLabel(centralWidget);
        Imagem->setObjectName(QStringLiteral("Imagem"));
        Imagem->setGeometry(QRect(220, 20, 371, 371));
        Imagem->setPixmap(QPixmap(QString::fromUtf8("LogoNova2017.png")));
        Imagem->setScaledContents(true);
        Btn_Instrucoes = new QPushButton(centralWidget);
        Btn_Instrucoes->setObjectName(QStringLiteral("Btn_Instrucoes"));
        Btn_Instrucoes->setGeometry(QRect(20, 20, 93, 28));
        Btn_Instrucoes->setStyleSheet(QLatin1String("background-color:#305dbf;\n"
"color:#fff;"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(21, 61, 88, 16));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 84, 173, 387));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout->addWidget(label_10);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit_7 = new QLineEdit(widget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        horizontalLayout->addWidget(lineEdit_7);

        Uni_Raio = new QComboBox(widget);
        Uni_Raio->addItem(QString());
        Uni_Raio->addItem(QString());
        Uni_Raio->addItem(QString());
        Uni_Raio->setObjectName(QStringLiteral("Uni_Raio"));
        Uni_Raio->setStyleSheet(QLatin1String("background-color:#000;\n"
"color:#fff;"));

        horizontalLayout->addWidget(Uni_Raio);


        verticalLayout->addLayout(horizontalLayout);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setAutoFillBackground(false);

        verticalLayout->addWidget(label_11);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit_8 = new QLineEdit(widget);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        horizontalLayout_2->addWidget(lineEdit_8);

        Uni_massa = new QComboBox(widget);
        Uni_massa->addItem(QString());
        Uni_massa->addItem(QString());
        Uni_massa->setObjectName(QStringLiteral("Uni_massa"));
        Uni_massa->setStyleSheet(QLatin1String("background-color:#000;\n"
"color:#fff;"));

        horizontalLayout_2->addWidget(Uni_massa);


        verticalLayout->addLayout(horizontalLayout_2);

        label_17 = new QLabel(widget);
        label_17->setObjectName(QStringLiteral("label_17"));
        sizePolicy.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy);
        label_17->setAutoFillBackground(false);

        verticalLayout->addWidget(label_17);

        lineEdit_14 = new QLineEdit(widget);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));

        verticalLayout->addWidget(lineEdit_14);

        label_18 = new QLabel(widget);
        label_18->setObjectName(QStringLiteral("label_18"));
        sizePolicy.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy);
        label_18->setAutoFillBackground(false);

        verticalLayout->addWidget(label_18);

        Edit_CG = new QLineEdit(widget);
        Edit_CG->setObjectName(QStringLiteral("Edit_CG"));

        verticalLayout->addWidget(Edit_CG);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        comboBox_Aplicacao = new QComboBox(widget);
        comboBox_Aplicacao->addItem(QString());
        comboBox_Aplicacao->addItem(QString());
        comboBox_Aplicacao->addItem(QString());
        comboBox_Aplicacao->addItem(QString());
        comboBox_Aplicacao->setObjectName(QStringLiteral("comboBox_Aplicacao"));
        comboBox_Aplicacao->setStyleSheet(QLatin1String("background-color:#c73232;\n"
"color:#fff;"));

        verticalLayout->addWidget(comboBox_Aplicacao);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setStyleSheet(QLatin1String("background-color:#c73232;\n"
"color:#fff;"));

        verticalLayout->addWidget(comboBox);

        Btn_Motores = new QPushButton(widget);
        Btn_Motores->setObjectName(QStringLiteral("Btn_Motores"));
        Btn_Motores->setStyleSheet(QLatin1String("background-color:#c73232;\n"
"color:#fff;"));

        verticalLayout->addWidget(Btn_Motores);

        Btn_Calcular = new QPushButton(widget);
        Btn_Calcular->setObjectName(QStringLiteral("Btn_Calcular"));
        Btn_Calcular->setStyleSheet(QLatin1String("background-color:#c73232;\n"
"color:#fff;"));

        verticalLayout->addWidget(Btn_Calcular);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 612, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        Uni_Raio->setCurrentIndex(0);
        Uni_massa->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Imagem->setText(QString());
        Btn_Instrucoes->setText(QApplication::translate("MainWindow", "Instru\303\247\303\265es", nullptr));
        label->setText(QApplication::translate("MainWindow", "Dados do rob\303\264:", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Raio da roda(mm):", nullptr));
        Uni_Raio->setItemText(0, QApplication::translate("MainWindow", "mm", nullptr));
        Uni_Raio->setItemText(1, QApplication::translate("MainWindow", "cm", nullptr));
        Uni_Raio->setItemText(2, QApplication::translate("MainWindow", "m", nullptr));

        label_11->setText(QApplication::translate("MainWindow", "Massa do rob\303\264(g):", nullptr));
        Uni_massa->setItemText(0, QApplication::translate("MainWindow", "g", nullptr));
        Uni_massa->setItemText(1, QApplication::translate("MainWindow", "kg", nullptr));

        label_17->setText(QApplication::translate("MainWindow", "Qtd de motores:", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "Posi\303\247\303\243o aproximada do CG", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Selecione a Aplica\303\247\303\243o:", nullptr));
        comboBox_Aplicacao->setItemText(0, QApplication::translate("MainWindow", "Selecione", nullptr));
        comboBox_Aplicacao->setItemText(1, QApplication::translate("MainWindow", "Mini-sum\303\264", nullptr));
        comboBox_Aplicacao->setItemText(2, QApplication::translate("MainWindow", "Seguidor de Linha", nullptr));
        comboBox_Aplicacao->setItemText(3, QApplication::translate("MainWindow", "VSSS", nullptr));

        label_2->setText(QApplication::translate("MainWindow", "Tipo de motor desejado:", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "Selecione", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "R\303\241pido", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "Forte", nullptr));
        comboBox->setItemText(3, QApplication::translate("MainWindow", "Eficiente", nullptr));
        comboBox->setItemText(4, QApplication::translate("MainWindow", "Barato", nullptr));

        Btn_Motores->setText(QApplication::translate("MainWindow", "Motores", nullptr));
        Btn_Calcular->setText(QApplication::translate("MainWindow", "Calcular", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
