/********************************************************************************
** Form generated from reading UI file 'polarwindowmain.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLARWINDOWMAIN_H
#define UI_POLARWINDOWMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PolarWindowMain
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PolarWindowMain)
    {
        if (PolarWindowMain->objectName().isEmpty())
            PolarWindowMain->setObjectName(QStringLiteral("PolarWindowMain"));
        PolarWindowMain->resize(800, 600);
        PolarWindowMain->setStyleSheet(QStringLiteral("background-color: #fff"));
        centralwidget = new QWidget(PolarWindowMain);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        PolarWindowMain->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PolarWindowMain);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        PolarWindowMain->setMenuBar(menubar);
        statusbar = new QStatusBar(PolarWindowMain);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        PolarWindowMain->setStatusBar(statusbar);

        retranslateUi(PolarWindowMain);

        QMetaObject::connectSlotsByName(PolarWindowMain);
    } // setupUi

    void retranslateUi(QMainWindow *PolarWindowMain)
    {
        PolarWindowMain->setWindowTitle(QApplication::translate("PolarWindowMain", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PolarWindowMain: public Ui_PolarWindowMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLARWINDOWMAIN_H
