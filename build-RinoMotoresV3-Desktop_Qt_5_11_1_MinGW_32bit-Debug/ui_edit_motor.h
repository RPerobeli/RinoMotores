/********************************************************************************
** Form generated from reading UI file 'edit_motor.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_MOTOR_H
#define UI_EDIT_MOTOR_H

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

class Ui_Edit_Motor
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_Fabricante;
    QLineEdit *Edit_Fabricante;
    QLabel *label_CurrMax;
    QLineEdit *Edit_CurrMax;
    QLabel *label_rot;
    QLineEdit *Edit_Rot;
    QLabel *label_preco;
    QLineEdit *Edit_Preco;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_Tensao;
    QLineEdit *Edit_Tensao;
    QLabel *label_CurrMin;
    QLineEdit *Edit_CurrMin;
    QLabel *label_Torq;
    QLineEdit *Edit_Torque;
    QPushButton *BtnOK;
    QLabel *label_titulo;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_id;
    QLineEdit *Edit_id;

    void setupUi(QDialog *Edit_Motor)
    {
        if (Edit_Motor->objectName().isEmpty())
            Edit_Motor->setObjectName(QStringLiteral("Edit_Motor"));
        Edit_Motor->resize(275, 321);
        Edit_Motor->setStyleSheet(QStringLiteral("background-color:#fff"));
        layoutWidget = new QWidget(Edit_Motor);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 100, 246, 213));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_Fabricante = new QLabel(layoutWidget);
        label_Fabricante->setObjectName(QStringLiteral("label_Fabricante"));

        verticalLayout->addWidget(label_Fabricante);

        Edit_Fabricante = new QLineEdit(layoutWidget);
        Edit_Fabricante->setObjectName(QStringLiteral("Edit_Fabricante"));

        verticalLayout->addWidget(Edit_Fabricante);

        label_CurrMax = new QLabel(layoutWidget);
        label_CurrMax->setObjectName(QStringLiteral("label_CurrMax"));

        verticalLayout->addWidget(label_CurrMax);

        Edit_CurrMax = new QLineEdit(layoutWidget);
        Edit_CurrMax->setObjectName(QStringLiteral("Edit_CurrMax"));

        verticalLayout->addWidget(Edit_CurrMax);

        label_rot = new QLabel(layoutWidget);
        label_rot->setObjectName(QStringLiteral("label_rot"));

        verticalLayout->addWidget(label_rot);

        Edit_Rot = new QLineEdit(layoutWidget);
        Edit_Rot->setObjectName(QStringLiteral("Edit_Rot"));

        verticalLayout->addWidget(Edit_Rot);

        label_preco = new QLabel(layoutWidget);
        label_preco->setObjectName(QStringLiteral("label_preco"));

        verticalLayout->addWidget(label_preco);

        Edit_Preco = new QLineEdit(layoutWidget);
        Edit_Preco->setObjectName(QStringLiteral("Edit_Preco"));

        verticalLayout->addWidget(Edit_Preco);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_Tensao = new QLabel(layoutWidget);
        label_Tensao->setObjectName(QStringLiteral("label_Tensao"));

        verticalLayout_2->addWidget(label_Tensao);

        Edit_Tensao = new QLineEdit(layoutWidget);
        Edit_Tensao->setObjectName(QStringLiteral("Edit_Tensao"));

        verticalLayout_2->addWidget(Edit_Tensao);

        label_CurrMin = new QLabel(layoutWidget);
        label_CurrMin->setObjectName(QStringLiteral("label_CurrMin"));

        verticalLayout_2->addWidget(label_CurrMin);

        Edit_CurrMin = new QLineEdit(layoutWidget);
        Edit_CurrMin->setObjectName(QStringLiteral("Edit_CurrMin"));

        verticalLayout_2->addWidget(Edit_CurrMin);

        label_Torq = new QLabel(layoutWidget);
        label_Torq->setObjectName(QStringLiteral("label_Torq"));

        verticalLayout_2->addWidget(label_Torq);

        Edit_Torque = new QLineEdit(layoutWidget);
        Edit_Torque->setObjectName(QStringLiteral("Edit_Torque"));

        verticalLayout_2->addWidget(Edit_Torque);

        BtnOK = new QPushButton(layoutWidget);
        BtnOK->setObjectName(QStringLiteral("BtnOK"));
        BtnOK->setStyleSheet(QLatin1String("background-color:#c73232;\n"
"color:#fff;"));

        verticalLayout_2->addWidget(BtnOK);


        horizontalLayout->addLayout(verticalLayout_2);

        label_titulo = new QLabel(Edit_Motor);
        label_titulo->setObjectName(QStringLiteral("label_titulo"));
        label_titulo->setGeometry(QRect(20, 30, 231, 21));
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(12);
        label_titulo->setFont(font);
        label_titulo->setStyleSheet(QLatin1String("background-color:#fff;\n"
"color:#c73232;"));
        label_titulo->setAlignment(Qt::AlignCenter);
        widget = new QWidget(Edit_Motor);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 70, 134, 26));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_id = new QLabel(widget);
        label_id->setObjectName(QStringLiteral("label_id"));

        horizontalLayout_2->addWidget(label_id);

        Edit_id = new QLineEdit(widget);
        Edit_id->setObjectName(QStringLiteral("Edit_id"));

        horizontalLayout_2->addWidget(Edit_id);


        retranslateUi(Edit_Motor);

        QMetaObject::connectSlotsByName(Edit_Motor);
    } // setupUi

    void retranslateUi(QDialog *Edit_Motor)
    {
        Edit_Motor->setWindowTitle(QApplication::translate("Edit_Motor", "Dialog", nullptr));
        label_Fabricante->setText(QApplication::translate("Edit_Motor", "Fabricante", nullptr));
        label_CurrMax->setText(QApplication::translate("Edit_Motor", "Corrente M\303\241x(A)", nullptr));
        label_rot->setText(QApplication::translate("Edit_Motor", "Rota\303\247\303\243o M\303\241x(rpm)", nullptr));
        label_preco->setText(QApplication::translate("Edit_Motor", "Pre\303\247o(R$)", nullptr));
        label_Tensao->setText(QApplication::translate("Edit_Motor", "Tens\303\243o(V)", nullptr));
        label_CurrMin->setText(QApplication::translate("Edit_Motor", "Corrente M\303\255n(A)", nullptr));
        label_Torq->setText(QApplication::translate("Edit_Motor", "Torque M\303\241x (kgf.mm)", nullptr));
        BtnOK->setText(QApplication::translate("Edit_Motor", "Ok", nullptr));
        label_titulo->setText(QApplication::translate("Edit_Motor", "Alterar motor:", nullptr));
        label_id->setText(QApplication::translate("Edit_Motor", "ID:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Edit_Motor: public Ui_Edit_Motor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_MOTOR_H
