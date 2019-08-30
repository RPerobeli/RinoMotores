#include "polarwindowmain.h"
#include "ui_polarwindowmain.h"

PolarWindowMain::PolarWindowMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PolarWindowMain)
{
    ui->setupUi(this);
}

PolarWindowMain::~PolarWindowMain()
{
    delete ui;
}
