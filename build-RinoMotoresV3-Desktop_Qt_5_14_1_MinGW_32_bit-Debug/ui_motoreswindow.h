/********************************************************************************
** Form generated from reading UI file 'motoreswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOTORESWINDOW_H
#define UI_MOTORESWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MotoresWindow
{
public:
    QComboBox *comboBox_Pesquisa;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *Edit_Pesq;
    QPushButton *Btn_Consultar;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *Btn_Excluir;
    QPushButton *Btn_Alterar;
    QPushButton *Btn_Adicionar;
    QPushButton *Btn_Fechar;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *Btn_Atualizar;

    void setupUi(QDialog *MotoresWindow)
    {
        if (MotoresWindow->objectName().isEmpty())
            MotoresWindow->setObjectName(QString::fromUtf8("MotoresWindow"));
        MotoresWindow->resize(990, 694);
        MotoresWindow->setStyleSheet(QString::fromUtf8("background-color:#fff"));
        comboBox_Pesquisa = new QComboBox(MotoresWindow);
        comboBox_Pesquisa->addItem(QString());
        comboBox_Pesquisa->addItem(QString());
        comboBox_Pesquisa->addItem(QString());
        comboBox_Pesquisa->addItem(QString());
        comboBox_Pesquisa->addItem(QString());
        comboBox_Pesquisa->addItem(QString());
        comboBox_Pesquisa->addItem(QString());
        comboBox_Pesquisa->addItem(QString());
        comboBox_Pesquisa->addItem(QString());
        comboBox_Pesquisa->addItem(QString());
        comboBox_Pesquisa->setObjectName(QString::fromUtf8("comboBox_Pesquisa"));
        comboBox_Pesquisa->setGeometry(QRect(10, 620, 141, 24));
        comboBox_Pesquisa->setStyleSheet(QString::fromUtf8("background-color:#c73232;\n"
"color:#fff;"));
        layoutWidget = new QWidget(MotoresWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 660, 451, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Edit_Pesq = new QLineEdit(layoutWidget);
        Edit_Pesq->setObjectName(QString::fromUtf8("Edit_Pesq"));

        horizontalLayout_2->addWidget(Edit_Pesq);

        Btn_Consultar = new QPushButton(layoutWidget);
        Btn_Consultar->setObjectName(QString::fromUtf8("Btn_Consultar"));
        Btn_Consultar->setStyleSheet(QString::fromUtf8("background-color:#c73232;\n"
"color:#fff;"));

        horizontalLayout_2->addWidget(Btn_Consultar);

        layoutWidget_3 = new QWidget(MotoresWindow);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(470, 600, 511, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Btn_Excluir = new QPushButton(layoutWidget_3);
        Btn_Excluir->setObjectName(QString::fromUtf8("Btn_Excluir"));
        Btn_Excluir->setStyleSheet(QString::fromUtf8("background-color:#c73232;\n"
"color:#fff;"));

        horizontalLayout->addWidget(Btn_Excluir);

        Btn_Alterar = new QPushButton(layoutWidget_3);
        Btn_Alterar->setObjectName(QString::fromUtf8("Btn_Alterar"));
        Btn_Alterar->setStyleSheet(QString::fromUtf8("background-color:#c73232;\n"
"color:#fff;"));

        horizontalLayout->addWidget(Btn_Alterar);

        Btn_Adicionar = new QPushButton(layoutWidget_3);
        Btn_Adicionar->setObjectName(QString::fromUtf8("Btn_Adicionar"));
        Btn_Adicionar->setStyleSheet(QString::fromUtf8("background-color:#c73232;\n"
"color:#fff;"));

        horizontalLayout->addWidget(Btn_Adicionar);

        Btn_Fechar = new QPushButton(layoutWidget_3);
        Btn_Fechar->setObjectName(QString::fromUtf8("Btn_Fechar"));
        Btn_Fechar->setStyleSheet(QString::fromUtf8("background-color:#c73232;\n"
"color:#fff;"));

        horizontalLayout->addWidget(Btn_Fechar);

        layoutWidget1 = new QWidget(MotoresWindow);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 21, 971, 551));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color:#c73232;\n"
"color:#fff;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        tableWidget = new QTableWidget(layoutWidget1);
        if (tableWidget->columnCount() < 10)
            tableWidget->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        Btn_Atualizar = new QPushButton(MotoresWindow);
        Btn_Atualizar->setObjectName(QString::fromUtf8("Btn_Atualizar"));
        Btn_Atualizar->setGeometry(QRect(10, 580, 121, 25));
        Btn_Atualizar->setStyleSheet(QString::fromUtf8("background-color:#c73232;\n"
"color:#fff;"));

        retranslateUi(MotoresWindow);

        QMetaObject::connectSlotsByName(MotoresWindow);
    } // setupUi

    void retranslateUi(QDialog *MotoresWindow)
    {
        MotoresWindow->setWindowTitle(QCoreApplication::translate("MotoresWindow", "Dialog", nullptr));
        comboBox_Pesquisa->setItemText(0, QCoreApplication::translate("MotoresWindow", "Fabricante", nullptr));
        comboBox_Pesquisa->setItemText(1, QCoreApplication::translate("MotoresWindow", "Tens\303\243o", nullptr));
        comboBox_Pesquisa->setItemText(2, QCoreApplication::translate("MotoresWindow", "CorrenteMax", nullptr));
        comboBox_Pesquisa->setItemText(3, QCoreApplication::translate("MotoresWindow", "CorrenteMin", nullptr));
        comboBox_Pesquisa->setItemText(4, QCoreApplication::translate("MotoresWindow", "Rota\303\247\303\243oMax", nullptr));
        comboBox_Pesquisa->setItemText(5, QCoreApplication::translate("MotoresWindow", "TorqueMax", nullptr));
        comboBox_Pesquisa->setItemText(6, QCoreApplication::translate("MotoresWindow", "Pre\303\247o", nullptr));
        comboBox_Pesquisa->setItemText(7, QCoreApplication::translate("MotoresWindow", "Reducao", nullptr));
        comboBox_Pesquisa->setItemText(8, QCoreApplication::translate("MotoresWindow", "Kt", nullptr));
        comboBox_Pesquisa->setItemText(9, QCoreApplication::translate("MotoresWindow", "Kv", nullptr));

        Btn_Consultar->setText(QCoreApplication::translate("MotoresWindow", "Consultar Motor", nullptr));
        Btn_Excluir->setText(QCoreApplication::translate("MotoresWindow", "Excluir Selecionados", nullptr));
        Btn_Alterar->setText(QCoreApplication::translate("MotoresWindow", "Alterar Motor", nullptr));
        Btn_Adicionar->setText(QCoreApplication::translate("MotoresWindow", "Adicionar Motor", nullptr));
        Btn_Fechar->setText(QCoreApplication::translate("MotoresWindow", "Fechar", nullptr));
        label->setText(QCoreApplication::translate("MotoresWindow", "DataBase dos Motores", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MotoresWindow", "Fabricante", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MotoresWindow", "Redu\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MotoresWindow", "Kt", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MotoresWindow", "Kv", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MotoresWindow", "Tens\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MotoresWindow", "Corrente m\303\255n", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MotoresWindow", "Corrente M\303\241x", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MotoresWindow", "Rota\303\247\303\243o M\303\241x", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MotoresWindow", "Torque M\303\241x", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MotoresWindow", "Pre\303\247o", nullptr));
        Btn_Atualizar->setText(QCoreApplication::translate("MotoresWindow", "Atualizar Tabela", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MotoresWindow: public Ui_MotoresWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOTORESWINDOW_H
