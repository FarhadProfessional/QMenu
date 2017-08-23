#ifndef MAINAPP_H
#define MAINAPP_H

#include <QMainWindow>

namespace Ui {
class MainApp;
}

class MainApp : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainApp(QWidget *parent = 0);
    ~MainApp();

    bool actionC;
    bool actionD;
    bool actionF;

public slots:
    void initializeMenu();

private slots:
    void on_actionC_triggered();
    void on_actionD_triggered();
    void on_actionF_triggered();

private:
    Ui::MainApp *ui;
};

#endif // MAINAPP_H
