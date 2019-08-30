#include "polarwindowmain.h"
#include "ui_polarwindowmain.h"
#include "results.h"

PolarWindowMain::PolarWindowMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PolarWindowMain)
{
    ui->setupUi(this);
    setWindowTitle("Gráfico Polar");
}

PolarWindowMain::~PolarWindowMain()
{
    delete ui;
}
