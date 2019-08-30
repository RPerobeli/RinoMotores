/********************************************************************************
** Form generated from reading UI file 'polarwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLARWINDOW_H
#define UI_POLARWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_PolarWindow
{
public:

    void setupUi(QDialog *PolarWindow)
    {
        if (PolarWindow->objectName().isEmpty())
            PolarWindow->setObjectName(QStringLiteral("PolarWindow"));
        PolarWindow->resize(400, 300);
        PolarWindow->setStyleSheet(QStringLiteral("background-color: #fff"));

        retranslateUi(PolarWindow);

        QMetaObject::connectSlotsByName(PolarWindow);
    } // setupUi

    void retranslateUi(QDialog *PolarWindow)
    {
        PolarWindow->setWindowTitle(QApplication::translate("PolarWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PolarWindow: public Ui_PolarWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLARWINDOW_H
