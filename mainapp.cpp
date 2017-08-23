#include "mainapp.h"
#include "ui_mainapp.h"

MainApp::MainApp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainApp)
{
    ui->setupUi(this);

    initializeMenu();
}

MainApp::~MainApp()
{
    delete ui;
}

void MainApp::initializeMenu()
{
    ui->actionC->setIcon(QIcon(":/images/Images/tick.png"));
    ui->actionD->setIcon(QIcon(":/images/Images/tick.png"));
    ui->actionF->setIcon(QIcon(":/images/Images/tick.png"));

    ui->actionC->setIconVisibleInMenu(false);
    ui->actionD->setIconVisibleInMenu(false);
    ui->actionF->setIconVisibleInMenu(false);
}

void MainApp::on_actionC_triggered()
{
    if(!ui->actionC->isIconVisibleInMenu())
        ui->actionC->setIconVisibleInMenu(true);
    else
        ui->actionC->setIconVisibleInMenu(false);

    //ui->menuB->setStyleSheet("background-color: rgb(221, 221, 221);");
    //ui->menuB->setFont(QFont("B Yekan",11,75));
}

void MainApp::on_actionD_triggered()
{
    if(!ui->actionD->isIconVisibleInMenu())
        ui->actionD->setIconVisibleInMenu(true);
    else
        ui->actionD->setIconVisibleInMenu(false);
}

void MainApp::on_actionF_triggered()
{
    if(!ui->actionF->isIconVisibleInMenu())
        ui->actionF->setIconVisibleInMenu(true);
    else
        ui->actionF->setIconVisibleInMenu(false);
}
