/********************************************************************************
** Form generated from reading UI file 'polarwindowmain.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
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
            PolarWindowMain->setObjectName(QString::fromUtf8("PolarWindowMain"));
        PolarWindowMain->resize(800, 600);
        PolarWindowMain->setStyleSheet(QString::fromUtf8("background-color: #fff"));
        centralwidget = new QWidget(PolarWindowMain);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        PolarWindowMain->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PolarWindowMain);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        PolarWindowMain->setMenuBar(menubar);
        statusbar = new QStatusBar(PolarWindowMain);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PolarWindowMain->setStatusBar(statusbar);

        retranslateUi(PolarWindowMain);

        QMetaObject::connectSlotsByName(PolarWindowMain);
    } // setupUi

    void retranslateUi(QMainWindow *PolarWindowMain)
    {
        PolarWindowMain->setWindowTitle(QCoreApplication::translate("PolarWindowMain", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PolarWindowMain: public Ui_PolarWindowMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLARWINDOWMAIN_H
