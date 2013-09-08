#ifndef CLOUDVISUALIZER_H
#define CLOUDVISUALIZER_H

#include <QObject>

#include <pcl/visualization/pcl_visualizer.h>
#include <QVTKWidget.h>

#include <vtkRenderer.h>
#include <vtkRenderWindow.h>

namespace CF {

class CloudVisualizer : public QObject
{
    Q_OBJECT
    QVTKWidget *vtkwidget;

public:
    explicit CloudVisualizer(QVTKWidget *vtkwidget, QObject *parent = 0);
    pcl::visualization::PCLVisualizer visualizer;

signals:
    
public slots:
    
};

}

#endif // CLOUDVISUALIZER_H
