#ifndef POLARWINDOWMAIN_H
#define POLARWINDOWMAIN_H

#include <QMainWindow>

namespace Ui {
class PolarWindowMain;
}

class PolarWindowMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit PolarWindowMain(QWidget *parent = nullptr);
    ~PolarWindowMain();

private:
    Ui::PolarWindowMain *ui;
};

#endif // POLARWINDOWMAIN_H
