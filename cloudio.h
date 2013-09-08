#ifndef CLOUDIO_H
#define CLOUDIO_H

#include <QObject>

#include <pcl/io/pcd_io.h>
#include <pcl/io/ply_io.h>
#include <pcl/io/io.h>

class cloudio : public QObject
{
    Q_OBJECT
public:
    explicit cloudio(QObject *parent = 0);
    
signals:
    
public slots:
    //void openCloud();

    
};

#endif // CLOUDIO_H
