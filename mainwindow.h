#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <QTime>

#include "cloudvisualizer.h"
#include "cloudio.h"

// PCL //////////////////////////
#include <pcl/io/pcd_io.h>
#include <pcl/io/ply_io.h>
#include <pcl/io/io.h>

// Region Growing
#include <vector>
#include <pcl/point_types.h>
#include <pcl/search/search.h>
#include <pcl/search/kdtree.h>
#include <pcl/features/normal_3d.h>
#include <pcl/filters/passthrough.h>
#include <pcl/segmentation/region_growing.h>

#include "ui_about.h"

// END PCL ///////////////////////



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

    void printInfo(QString text);
    void printError(QString text);
    void printSuccess(QString text);
    void printWithTime(QString text);

    // The Main Cloud!
    pcl::PointCloud<pcl::PointXYZRGB>::Ptr mainCloud;
    pcl::PointCloud<pcl::PointXYZRGB>::Ptr fallbackCloud;
    
private slots:
    void exitProgram();
    void openFile();
    void saveFile();

    void regionGrowing();

    void setWhite();
    void undo();

    void showAboutDialog();

private:
    Ui::MainWindow *ui;
    CF::CloudVisualizer *visu;

    void bleachCloud(pcl::PointCloud<pcl::PointXYZRGB>::Ptr cloud);

};

#endif // MAINWINDOW_H
