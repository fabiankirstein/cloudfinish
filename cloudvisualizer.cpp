#include "cloudvisualizer.h"

using namespace CF;

CloudVisualizer::CloudVisualizer(QVTKWidget *vtkwidget, QObject *parent)
{
    this->vtkwidget = vtkwidget;
    this->vtkwidget->SetRenderWindow(this->visualizer.getRenderWindow());

}

void CloudVisualizer::update()
{
    this->vtkwidget->update();
}
