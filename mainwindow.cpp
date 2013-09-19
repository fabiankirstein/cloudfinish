#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "cloudvisualizer.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    window()->showMaximized();

    ui->console->setFontPointSize(11.0);
    // CONNECTIONS
    connect(ui->actionOpenPointCloud, SIGNAL(triggered()), this, SLOT(openFile()));
    connect(ui->actionSavePointCloud, SIGNAL(triggered()), this, SLOT(saveFile()));
    connect(ui->startRegionGrowing, SIGNAL(clicked()), this, SLOT(regionGrowing()));
    connect(ui->actionUndo, SIGNAL(triggered()), this, SLOT(undo()));
    connect(ui->buttonSetWhite, SIGNAL(clicked()), this, SLOT(setWhite()));
    connect(ui->actionAbout, SIGNAL(triggered()), this, SLOT(showAboutDialog()));


    // END CONNECTIONS
    mainCloud = pcl::PointCloud<pcl::PointXYZRGB>::Ptr(new pcl::PointCloud<pcl::PointXYZRGB>);
    visu = new CF::CloudVisualizer(ui->vtkwidget, this);

    this->printInfo("Welcome ...");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::printInfo(QString text)
{
    ui->console->setTextColor(Qt::black);
    this->printWithTime(text);
}

void MainWindow::printError(QString text)
{
    ui->console->setTextColor(Qt::red);
    this->printWithTime(text);
}

void MainWindow::printSuccess(QString text)
{
    ui->console->setTextColor(Qt::darkGreen);
    this->printWithTime(text);
}

void MainWindow::printWithTime(QString text)
{
     ui->console->append("[" + QTime::currentTime().toString() + "]  " + text);
}


void MainWindow::exitProgram()
{
    QApplication::quit();
}

/**
 * Opens a Cloud File
 *
 * @brief MainWindow::openFile
 */
void MainWindow::openFile()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Point Cloud"), "", tr("PCD (*.pcd);;PLY (*.ply)"));

    if(fileName != NULL) {

        if(fileName.endsWith(".pcd")) {
            this->printInfo("Loading File: " + fileName);
            qApp->processEvents();
            pcl::io::loadPCDFile(fileName.toStdString(), *mainCloud);
            this->printSuccess("Done Loading File: " + fileName);
        }

        if(fileName.endsWith(".ply")) {
            this->printInfo("Loading File: " + fileName);
            qApp->processEvents();
            pcl::io::loadPLYFile(fileName.toStdString(), *mainCloud);
            this->printSuccess("Done Loading File: " + fileName);
        }

        visu->visualizer.removePointCloud("cat");
        //this->bleachCloud(mainCloud);
        visu->visualizer.addPointCloud(mainCloud, "cat");
        visu->visualizer.resetCamera();
        visu->update();
    }

}

void MainWindow::saveFile()
{
    QString saveFile = QFileDialog::getSaveFileName(this, tr("Save as PCD"), "", ".pcd");

    if(saveFile != NULL) {
        pcl::io::savePCDFileASCII(saveFile.toStdString(), *mainCloud);
    }

}

void MainWindow::bleachCloud(pcl::PointCloud<pcl::PointXYZRGB>::Ptr cloud)
{
    for(int i = 0; i < cloud->points.size(); i++) {
        cloud->points[i].r = 255;
        cloud->points[i].g = 255;
        cloud->points[i].b = 255;
    }
}


void MainWindow::regionGrowing()
{

    if(mainCloud->size() == 0) {
        QMessageBox msgBox;
        msgBox.critical(0,"Error","Please open a Point Cloud first!");
        msgBox.setFixedSize(500,200);

    } else {

        fallbackCloud = pcl::PointCloud<pcl::PointXYZRGB>::Ptr(mainCloud);

        this->printInfo("Performing Region Growing ...");
        qApp->processEvents();

        pcl::search::Search<pcl::PointXYZRGB>::Ptr tree = boost::shared_ptr<pcl::search::Search<pcl::PointXYZRGB>>(new pcl::search::KdTree<pcl::PointXYZRGB>);
        pcl::PointCloud <pcl::Normal>::Ptr normals (new pcl::PointCloud <pcl::Normal>);
        pcl::NormalEstimation<pcl::PointXYZRGB, pcl::Normal> normal_estimator;
        normal_estimator.setSearchMethod (tree);
        normal_estimator.setInputCloud (mainCloud);

        normal_estimator.setKSearch (50);
        normal_estimator.compute (*normals);

        pcl::RegionGrowing<pcl::PointXYZRGB, pcl::Normal> reg;
        //reg.setMinClusterSize (100);
        //reg.setMaxClusterSize (10000);
        reg.setSearchMethod (tree);
        reg.setNumberOfNeighbours (30);
        reg.setInputCloud (mainCloud);
        //reg.setIndices (indices);
        reg.setInputNormals (normals);

        double smoothnessThreshold = ui->rgSmothnessThres->value();
        reg.setSmoothnessThreshold (smoothnessThreshold / 180.0 * M_PI);

        reg.setCurvatureThreshold (1.0);

        std::vector <pcl::PointIndices> clusters;
        reg.extract (clusters);

        mainCloud = reg.getColoredCloud ();

        this->printSuccess("Finished Region Growing");

        //visu->visualizer.removePointCloud("cat");
        visu->visualizer.updatePointCloud(mainCloud, "cat");
        visu->update();

    }
}

void MainWindow::setWhite()
{
    this->bleachCloud(mainCloud);
    visu->visualizer.updatePointCloud(mainCloud, "cat");
    visu->update();
    this->printSuccess("Set Color of Cloud to White");
}

void MainWindow::undo()
{
    if(fallbackCloud != NULL) {
        mainCloud = pcl::PointCloud<pcl::PointXYZRGB>::Ptr(fallbackCloud);
        visu->visualizer.updatePointCloud(mainCloud, "cat");
        visu->update();
        this->printSuccess("Undo last Step");
    }

}

void MainWindow::showAboutDialog()
{
    QDialog *about = new QDialog(0,0);

    Ui_aboutDialog aboutUi;
    aboutUi.setupUi(about);

    about->show();
}
