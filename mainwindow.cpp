#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "cloudvisualizer.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->exitButton, SIGNAL(clicked()), this, SLOT(exitProgram()));
    connect(ui->actionOpenPointCloud, SIGNAL(triggered()), this, SLOT(exitProgram()));

    pcl::PointCloud<pcl::PointXYZRGBA>::Ptr cloud (new pcl::PointCloud<pcl::PointXYZRGBA>);
    pcl::io::loadPCDFile("cat.pcd", *cloud);

    visu = new CF::CloudVisualizer(ui->vtkwidget, this);

    for(int i = 0; i < cloud->points.size(); i++) {
        cloud->points[i].r = 255;
        cloud->points[i].g = 255;
        cloud->points[i].b = 255;
    }



    visu->visualizer.addPointCloud(cloud);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::exitProgram()
{
    QApplication::quit();
}

