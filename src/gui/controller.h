#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include "QMainWindow"
#include "model/paintpp.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow{
    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

    void initGUIPaintPP();

private:

    Ui::MainWindow *ui;

    PaintPP* paintPP = nullptr;

};
#endif // MAIN_WINDOW_H
