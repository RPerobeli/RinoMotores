/********************************************************************************
** Form generated from reading UI file 'motoreswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
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
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *tableWidget;

    void setupUi(QDialog *MotoresWindow)
    {
        if (MotoresWindow->objectName().isEmpty())
            MotoresWindow->setObjectName(QStringLiteral("MotoresWindow"));
        MotoresWindow->resize(900, 695);
        MotoresWindow->setStyleSheet(QStringLiteral("background-color:#fff"));
        comboBox_Pesquisa = new QComboBox(MotoresWindow);
        comboBox_Pesquisa->addItem(QString());
        comboBox_Pesquisa->addItem(QString());
        comboBox_Pesquisa->addItem(QString());
        comboBox_Pesquisa->addItem(QString());
        comboBox_Pesquisa->addItem(QString());
        comboBox_Pesquisa->addItem(QString());
        comboBox_Pesquisa->setObjectName(QStringLiteral("comboBox_Pesquisa"));
        comboBox_Pesquisa->setGeometry(QRect(10, 620, 141, 24));
        comboBox_Pesquisa->setStyleSheet(QLatin1String("background-color:#c73232;\n"
"color:#fff;"));
        layoutWidget = new QWidget(MotoresWindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 660, 451, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Edit_Pesq = new QLineEdit(layoutWidget);
        Edit_Pesq->setObjectName(QStringLiteral("Edit_Pesq"));

        horizontalLayout_2->addWidget(Edit_Pesq);

        Btn_Consultar = new QPushButton(layoutWidget);
        Btn_Consultar->setObjectName(QStringLiteral("Btn_Consultar"));
        Btn_Consultar->setStyleSheet(QLatin1String("background-color:#c73232;\n"
"color:#fff;"));

        horizontalLayout_2->addWidget(Btn_Consultar);

        layoutWidget_3 = new QWidget(MotoresWindow);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(300, 610, 591, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget_3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Btn_Excluir = new QPushButton(layoutWidget_3);
        Btn_Excluir->setObjectName(QStringLiteral("Btn_Excluir"));
        Btn_Excluir->setStyleSheet(QLatin1String("background-color:#c73232;\n"
"color:#fff;"));

        horizontalLayout->addWidget(Btn_Excluir);

        Btn_Alterar = new QPushButton(layoutWidget_3);
        Btn_Alterar->setObjectName(QStringLiteral("Btn_Alterar"));
        Btn_Alterar->setStyleSheet(QLatin1String("background-color:#c73232;\n"
"color:#fff;"));

        horizontalLayout->addWidget(Btn_Alterar);

        Btn_Adicionar = new QPushButton(layoutWidget_3);
        Btn_Adicionar->setObjectName(QStringLiteral("Btn_Adicionar"));
        Btn_Adicionar->setStyleSheet(QLatin1String("background-color:#c73232;\n"
"color:#fff;"));

        horizontalLayout->addWidget(Btn_Adicionar);

        Btn_Fechar = new QPushButton(layoutWidget_3);
        Btn_Fechar->setObjectName(QStringLiteral("Btn_Fechar"));
        Btn_Fechar->setStyleSheet(QLatin1String("background-color:#c73232;\n"
"color:#fff;"));

        horizontalLayout->addWidget(Btn_Fechar);

        widget = new QWidget(MotoresWindow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 21, 881, 551));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("background-color:#c73232;\n"
"color:#fff;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        tableWidget = new QTableWidget(widget);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
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
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);


        retranslateUi(MotoresWindow);

        QMetaObject::connectSlotsByName(MotoresWindow);
    } // setupUi

    void retranslateUi(QDialog *MotoresWindow)
    {
        MotoresWindow->setWindowTitle(QApplication::translate("MotoresWindow", "Dialog", nullptr));
        comboBox_Pesquisa->setItemText(0, QApplication::translate("MotoresWindow", "Fabricante", nullptr));
        comboBox_Pesquisa->setItemText(1, QApplication::translate("MotoresWindow", "Tens\303\243o", nullptr));
        comboBox_Pesquisa->setItemText(2, QApplication::translate("MotoresWindow", "CorrenteM\303\241x", nullptr));
        comboBox_Pesquisa->setItemText(3, QApplication::translate("MotoresWindow", "CorrenteM\303\255n", nullptr));
        comboBox_Pesquisa->setItemText(4, QApplication::translate("MotoresWindow", "Rota\303\247\303\243oM\303\241x", nullptr));
        comboBox_Pesquisa->setItemText(5, QApplication::translate("MotoresWindow", "TorqueM\303\241x", nullptr));

        Btn_Consultar->setText(QApplication::translate("MotoresWindow", "Consultar Motor", nullptr));
        Btn_Excluir->setText(QApplication::translate("MotoresWindow", "Excluir Selecionados", nullptr));
        Btn_Alterar->setText(QApplication::translate("MotoresWindow", "Alterar Motor", nullptr));
        Btn_Adicionar->setText(QApplication::translate("MotoresWindow", "Adicionar Motor", nullptr));
        Btn_Fechar->setText(QApplication::translate("MotoresWindow", "Fechar", nullptr));
        label->setText(QApplication::translate("MotoresWindow", "DataBase dos Motores", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MotoresWindow", "Fabricante", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MotoresWindow", "Tens\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MotoresWindow", "Corrente m\303\255n", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MotoresWindow", "Corrente M\303\241x", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MotoresWindow", "Rota\303\247\303\243o M\303\241x", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MotoresWindow", "Torque M\303\241x", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MotoresWindow", "Pre\303\247o", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MotoresWindow: public Ui_MotoresWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOTORESWINDOW_H
