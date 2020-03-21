/********************************************************************************
** Form generated from reading UI file 'details.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILS_H
#define UI_DETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Details
{
public:
    QLabel *label_titulo;
    QTableWidget *tableWidget;
    QPushButton *BtnOK;

    void setupUi(QDialog *Details)
    {
        if (Details->objectName().isEmpty())
            Details->setObjectName(QString::fromUtf8("Details"));
        Details->resize(369, 480);
        Details->setStyleSheet(QString::fromUtf8("background-color:#fff"));
        label_titulo = new QLabel(Details);
        label_titulo->setObjectName(QString::fromUtf8("label_titulo"));
        label_titulo->setGeometry(QRect(20, 20, 330, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(12);
        label_titulo->setFont(font);
        label_titulo->setStyleSheet(QString::fromUtf8("background-color:#fff;\n"
"color:#c73232;"));
        label_titulo->setAlignment(Qt::AlignCenter);
        tableWidget = new QTableWidget(Details);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 70, 341, 361));
        BtnOK = new QPushButton(Details);
        BtnOK->setObjectName(QString::fromUtf8("BtnOK"));
        BtnOK->setGeometry(QRect(220, 450, 125, 25));
        BtnOK->setStyleSheet(QString::fromUtf8("background-color:#c73232;\n"
"color:#fff;"));

        retranslateUi(Details);

        QMetaObject::connectSlotsByName(Details);
    } // setupUi

    void retranslateUi(QDialog *Details)
    {
        Details->setWindowTitle(QCoreApplication::translate("Details", "Dialog", nullptr));
        label_titulo->setText(QCoreApplication::translate("Details", "Especifica\303\247\303\265es do Motor selecionado:", nullptr));
        BtnOK->setText(QCoreApplication::translate("Details", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Details: public Ui_Details {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILS_H
