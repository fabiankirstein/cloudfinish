#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "cloudvisualizer.h"
#include "cloudio.h"

#include <QVTKWidget.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void exitProgram();

private:
    Ui::MainWindow *ui;
    CF::CloudVisualizer *visu;

};

#endif // MAINWINDOW_H
