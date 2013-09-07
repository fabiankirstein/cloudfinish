#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->exitButton, SIGNAL(clicked()), this, SLOT(exitProgram()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::exitProgram()
{
    QApplication::quit();
}

