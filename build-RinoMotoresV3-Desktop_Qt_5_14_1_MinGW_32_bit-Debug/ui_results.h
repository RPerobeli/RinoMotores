/********************************************************************************
** Form generated from reading UI file 'results.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTS_H
#define UI_RESULTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Results
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *tableWidget_Ranking;
    QPushButton *Btn_Fechar;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *Btn_Detalhes;
    QPushButton *Btn_PlotPolar;
    QPushButton *Btn_PlotLinear;

    void setupUi(QDialog *Results)
    {
        if (Results->objectName().isEmpty())
            Results->setObjectName(QString::fromUtf8("Results"));
        Results->resize(649, 578);
        Results->setStyleSheet(QString::fromUtf8("background-color:#fff\n"
""));
        layoutWidget = new QWidget(Results);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 631, 491));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color:#c73232;\n"
"color:#fff;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        tableWidget_Ranking = new QTableWidget(layoutWidget);
        if (tableWidget_Ranking->columnCount() < 5)
            tableWidget_Ranking->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_Ranking->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_Ranking->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_Ranking->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_Ranking->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_Ranking->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget_Ranking->setObjectName(QString::fromUtf8("tableWidget_Ranking"));

        verticalLayout->addWidget(tableWidget_Ranking);

        Btn_Fechar = new QPushButton(Results);
        Btn_Fechar->setObjectName(QString::fromUtf8("Btn_Fechar"));
        Btn_Fechar->setGeometry(QRect(529, 540, 111, 25));
        Btn_Fechar->setStyleSheet(QString::fromUtf8("background-color:#c73232;\n"
"color:#fff;"));
        layoutWidget1 = new QWidget(Results);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 540, 312, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Btn_Detalhes = new QPushButton(layoutWidget1);
        Btn_Detalhes->setObjectName(QString::fromUtf8("Btn_Detalhes"));
        Btn_Detalhes->setStyleSheet(QString::fromUtf8("background-color:#c73232;\n"
"color:#fff;"));

        horizontalLayout->addWidget(Btn_Detalhes);

        Btn_PlotPolar = new QPushButton(layoutWidget1);
        Btn_PlotPolar->setObjectName(QString::fromUtf8("Btn_PlotPolar"));
        Btn_PlotPolar->setStyleSheet(QString::fromUtf8("background-color:#c73232;\n"
"color:#fff;"));

        horizontalLayout->addWidget(Btn_PlotPolar);

        Btn_PlotLinear = new QPushButton(layoutWidget1);
        Btn_PlotLinear->setObjectName(QString::fromUtf8("Btn_PlotLinear"));
        Btn_PlotLinear->setStyleSheet(QString::fromUtf8("background-color:#c73232;\n"
"color:#fff;"));

        horizontalLayout->addWidget(Btn_PlotLinear);


        retranslateUi(Results);

        QMetaObject::connectSlotsByName(Results);
    } // setupUi

    void retranslateUi(QDialog *Results)
    {
        Results->setWindowTitle(QCoreApplication::translate("Results", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Results", "Ranking de Motores", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_Ranking->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Results", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_Ranking->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Results", "Fabricante/Modelo", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_Ranking->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Results", "Redu\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_Ranking->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Results", "Nota Final", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_Ranking->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Results", "Deslizamento", nullptr));
        Btn_Fechar->setText(QCoreApplication::translate("Results", "Fechar", nullptr));
        Btn_Detalhes->setText(QCoreApplication::translate("Results", "Detalhes Motor", nullptr));
        Btn_PlotPolar->setText(QCoreApplication::translate("Results", "Gr\303\241fico Polar", nullptr));
        Btn_PlotLinear->setText(QCoreApplication::translate("Results", "Performance Motor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Results: public Ui_Results {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTS_H
