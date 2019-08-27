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
            Results->setObjectName(QStringLiteral("Results"));
        Results->resize(508, 578);
        Results->setStyleSheet(QLatin1String("background-color:#fff\n"
""));
        layoutWidget = new QWidget(Results);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 481, 491));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("background-color:#c73232;\n"
"color:#fff;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        tableWidget_Ranking = new QTableWidget(layoutWidget);
        if (tableWidget_Ranking->columnCount() < 4)
            tableWidget_Ranking->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_Ranking->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_Ranking->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_Ranking->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_Ranking->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget_Ranking->setObjectName(QStringLiteral("tableWidget_Ranking"));

        verticalLayout->addWidget(tableWidget_Ranking);

        Btn_Fechar = new QPushButton(Results);
        Btn_Fechar->setObjectName(QStringLiteral("Btn_Fechar"));
        Btn_Fechar->setGeometry(QRect(410, 540, 80, 25));
        Btn_Fechar->setStyleSheet(QLatin1String("background-color:#c73232;\n"
"color:#fff;"));
        layoutWidget1 = new QWidget(Results);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 540, 312, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Btn_Detalhes = new QPushButton(layoutWidget1);
        Btn_Detalhes->setObjectName(QStringLiteral("Btn_Detalhes"));
        Btn_Detalhes->setStyleSheet(QLatin1String("background-color:#c73232;\n"
"color:#fff;"));

        horizontalLayout->addWidget(Btn_Detalhes);

        Btn_PlotPolar = new QPushButton(layoutWidget1);
        Btn_PlotPolar->setObjectName(QStringLiteral("Btn_PlotPolar"));
        Btn_PlotPolar->setStyleSheet(QLatin1String("background-color:#c73232;\n"
"color:#fff;"));

        horizontalLayout->addWidget(Btn_PlotPolar);

        Btn_PlotLinear = new QPushButton(layoutWidget1);
        Btn_PlotLinear->setObjectName(QStringLiteral("Btn_PlotLinear"));
        Btn_PlotLinear->setStyleSheet(QLatin1String("background-color:#c73232;\n"
"color:#fff;"));

        horizontalLayout->addWidget(Btn_PlotLinear);


        retranslateUi(Results);

        QMetaObject::connectSlotsByName(Results);
    } // setupUi

    void retranslateUi(QDialog *Results)
    {
        Results->setWindowTitle(QApplication::translate("Results", "Dialog", nullptr));
        label->setText(QApplication::translate("Results", "Ranking de Motores", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_Ranking->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Results", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_Ranking->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Results", "Fabricante", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_Ranking->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Results", "Redu\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_Ranking->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Results", "Nota Final", nullptr));
        Btn_Fechar->setText(QApplication::translate("Results", "Fechar", nullptr));
        Btn_Detalhes->setText(QApplication::translate("Results", "Detalhes Motor", nullptr));
        Btn_PlotPolar->setText(QApplication::translate("Results", "Gr\303\241fico Polar", nullptr));
        Btn_PlotLinear->setText(QApplication::translate("Results", "Performance Motor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Results: public Ui_Results {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTS_H
