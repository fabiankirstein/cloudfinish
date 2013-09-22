#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "cloudvisualizer.h"

// Min-Cut
#include <pcl/segmentation/min_cut_segmentation.h>

const std::string cloud = "hallo";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    window()->showMaximized();

    ui->console->setFontPointSize(11.0);
    // CONNECTIONS

    // Menu
    connect(ui->actionOpenPointCloud, SIGNAL(triggered()), this, SLOT(openFile()));
    connect(ui->actionSavePointCloud, SIGNAL(triggered()), this, SLOT(saveFile()));
    connect(ui->actionSavePNG, SIGNAL(triggered()), this, SLOT(saveAsPNG()));
    connect(ui->actionAbout, SIGNAL(triggered()), this, SLOT(showAboutDialog()));
    connect(ui->actionUndo, SIGNAL(triggered()), this, SLOT(undo()));
    connect(ui->actionResetColor, SIGNAL(triggered()), this, SLOT(setWhite()));
    connect(ui->actionShowCoordinateSystem, SIGNAL(triggered()), this, SLOT(toggleCoordinateSystem()));



    // Icons
    connect(ui->iconOpenPointCloud, SIGNAL(triggered()), this, SLOT(openFile()));
    connect(ui->iconResetColor, SIGNAL(triggered()), this, SLOT(setWhite()));


    // Algorithms
    connect(ui->startRegionGrowing, SIGNAL(clicked()), this, SLOT(regionGrowing()));
    connect(ui->startGrouping, SIGNAL(clicked()), this, SLOT(corresGrouping()));
    connect(ui->clSetCloudButton, SIGNAL(clicked()), this, SLOT(clSetCloud()));
    connect(ui->startMinCut, SIGNAL(clicked()), this, SLOT(minCut()));
    connect(ui->startCluster, SIGNAL(clicked()), this, SLOT(cluster()));

    // END CONNECTIONS
    mainCloud = pcl::PointCloud<pcl::PointXYZRGB>::Ptr(new pcl::PointCloud<pcl::PointXYZRGB>);
    visu = new CF::CloudVisualizer(ui->vtkwidget, this);

    // Bind Point Picking Callback
    boost::function<void(const pcl::visualization::PointPickingEvent&)> f = boost::bind(&MainWindow::mcPickPointCallback, this, _1);
    visu->visualizer.registerPointPickingCallback(f);

    // Init Properties
    this->clCloud = QString();
    this->mcPickPoint = pcl::PointXYZ();

    this->printInfo("Welcome ...");
    this->setStatusTip("No Point Cloud loaded");

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


        visu->visualizer.removeAllPointClouds();
        visu->visualizer.removeAllShapes();
        //this->bleachCloud(mainCloud);
        visu->visualizer.addPointCloud(mainCloud, cloud);
        visu->visualizer.resetCamera();
        visu->update();

        this->setStatusTip("Loaded Point Cloud: " + fileName);
    }

}

void MainWindow::saveFile()
{
    QString saveFile = QFileDialog::getSaveFileName(this, tr("Save as PCD"), "", ".pcd");

    if(saveFile != NULL) {
        pcl::io::savePCDFile(saveFile.toStdString(), *mainCloud);
    }
    this->printSuccess("Saved as PCD to: " + saveFile);

}

void MainWindow::saveAsPNG()
{
    QString saveFile = QFileDialog::getSaveFileName(this, tr("Save as PNG"), "", ".png");

    if(saveFile != NULL) {
         visu->visualizer.saveScreenshot(saveFile.toStdString());
    }
    this->printSuccess("Exported as PNG to: " + saveFile);
}

void MainWindow::bleachCloud(pcl::PointCloud<pcl::PointXYZRGB>::Ptr cloud)
{
    for(int i = 0; i < cloud->points.size(); i++) {
        cloud->points[i].r = 255;
        cloud->points[i].g = 255;
        cloud->points[i].b = 255;
    }
}

void MainWindow::setFallBack()
{
    fallbackCloud = pcl::PointCloud<pcl::PointXYZRGB>::Ptr(mainCloud);
}

void MainWindow::displayError(QString message)
{
    QMessageBox msgBox;
    msgBox.critical(0,"Error",message);
    msgBox.setFixedSize(500,200);
}

void MainWindow::updateCloud()
{
    visu->visualizer.updatePointCloud(mainCloud, cloud);
    visu->update();
}

/**
 * @brief MainWindow::regionGrowing
 *
 * Based on PCL-Tutorial
 * http://pointclouds.org/documentation/tutorials/region_growing_segmentation.php
 *
 */

void MainWindow::regionGrowing()
{

    if(mainCloud->size() == 0) {
        this->displayError("Please open a Point Cloud first!");
    } else {

        // Get User Input
        int minClusterSize = 0;
        if(ui->rgMinCluster > 0) {
            minClusterSize = ui->rgMinCluster->value();
        }

        int maxClusterSize = 0;
        if(ui->rgMaxCluster > 0) {
            maxClusterSize = ui->rgMaxCluster->value();
        }

        double smoothnessThreshold = ui->rgSmothnessThres->value();
        double curvatureThreshold = ui->rgCurvature->value();

        this->setFallBack();

        this->printInfo("Performing Region Growing ...");
        qApp->processEvents();

        // Determine Normals
        pcl::search::Search<pcl::PointXYZRGB>::Ptr tree = boost::shared_ptr<pcl::search::Search<pcl::PointXYZRGB>>(new pcl::search::KdTree<pcl::PointXYZRGB>);
        pcl::PointCloud <pcl::Normal>::Ptr normals (new pcl::PointCloud <pcl::Normal>);
        pcl::NormalEstimation<pcl::PointXYZRGB, pcl::Normal> normal_estimator;
        normal_estimator.setSearchMethod (tree);
        normal_estimator.setInputCloud (mainCloud);
        normal_estimator.setKSearch (50);
        normal_estimator.compute (*normals);

        // Perform Region Growing
        pcl::RegionGrowing<pcl::PointXYZRGB, pcl::Normal> reg;

        if(minClusterSize > 0) {
            reg.setMinClusterSize(minClusterSize);
        }
        if(maxClusterSize > 0) {
            reg.setMaxClusterSize(maxClusterSize);
        }

        reg.setSearchMethod (tree);
        reg.setNumberOfNeighbours (30);
        reg.setInputCloud (mainCloud);
        reg.setInputNormals (normals);
        reg.setSmoothnessThreshold (smoothnessThreshold / 180.0 * M_PI);
        reg.setCurvatureThreshold (curvatureThreshold);

        std::vector <pcl::PointIndices> clusters;
        reg.extract (clusters);

        mainCloud = reg.getColoredCloud ();

        this->printSuccess("Finished Region Growing");
        this->updateCloud();

    }
}


void MainWindow::mcPickPointCallback(const pcl::visualization::PointPickingEvent &event)
{
    event.getPoint(this->mcPickPoint.x, this->mcPickPoint.y, this->mcPickPoint.z);
    visu->visualizer.removeShape("mcPickSphere");
    visu->visualizer.addSphere(this->mcPickPoint, 0.1, 0.5, 0.6, 0.3, "mcPickSphere");
    this->printInfo("Set Point at: x=" + QString::number(this->mcPickPoint.x) + ", y=" + QString::number(this->mcPickPoint.y) + ", z=" + QString::number(this->mcPickPoint.z));
}


/**
 * @brief MainWindow::minCut
 *
 * Based on PCL-Tutorial
 * http://pointclouds.org/documentation/tutorials/min_cut_segmentation.php
 *
 */
void MainWindow::minCut()
{
    if(mainCloud->size() == 0) {
        this->displayError("Please open a Point Cloud first!");
        return;
    }

    // Get User Input
    double sigma = ui->mcSigma->value();
    double radius = ui->mcRadius->value();
    double sourceWeight = ui->mcSourceWeight->value();
    int neighbours = ui->mcNeighbours->value();


    this->setFallBack();

    this->printInfo("Performing Min-Cut Segmentation ...");
    qApp->processEvents();

    pcl::PointCloud <pcl::PointXYZ>::Ptr cloud (new pcl::PointCloud <pcl::PointXYZ>);
    pcl::copyPointCloud(*mainCloud, *cloud);

    pcl::IndicesPtr indices (new std::vector <int>);
    pcl::PassThrough<pcl::PointXYZ> pass;
    pass.setInputCloud (cloud);
    pass.setFilterFieldName ("z");
    pass.setFilterLimits (0.0, 1.0);
    pass.filter (*indices);

    pcl::MinCutSegmentation<pcl::PointXYZ> seg;
    seg.setInputCloud (cloud);
    //seg.setIndices (indices);


    pcl::PointCloud<pcl::PointXYZ>::Ptr background_points(new pcl::PointCloud<pcl::PointXYZ> ());
    pcl::PointXYZ bgPoint;

    pcl::PointCloud<pcl::PointXYZ>::Ptr foreground_points(new pcl::PointCloud<pcl::PointXYZ> ());
    pcl::PointXYZ point;
//    point.x = 68.97;
//    point.y = -18.55;
//    point.z = 0.57;

    bgPoint.x = 1.08;
    bgPoint.y = 3.13;
    bgPoint.z = -9.77;

    background_points->points.push_back(bgPoint);
    foreground_points->points.push_back(this->mcPickPoint);
    seg.setForegroundPoints (foreground_points);
    seg.setBackgroundPoints(background_points);

    seg.setSigma(sigma);
    seg.setRadius(radius);
    seg.setNumberOfNeighbours(neighbours);
    seg.setSourceWeight(sourceWeight);


    std::vector <pcl::PointIndices> clusters;
    seg.extract (clusters);

    this->printInfo("Maximim flow is: " + QString::number(seg.getMaxFlow()));

    mainCloud = seg.getColoredCloud();
    this->printSuccess("Finished Min-Cut Segmentation ");
    this->updateCloud();

}

/**
 * @brief MainWindow::cluster
 *
 * Based on PCL-Tutorial
 * http://pointclouds.org/documentation/tutorials/cluster_extraction.php
 */
void MainWindow::cluster()
{
    if(mainCloud->size() == 0) {
        this->displayError("Please open a Point Cloud first!");
        return;
    }

    this->setFallBack();

    // Get User Input
    double clusterTolerance = ui->eclTolerance->value();
    int minCluster = ui->eclMinCluster->value();
    int maxCluster = ui->eclMaxCluster->value();


    pcl::PointCloud<pcl::PointXYZRGB>::Ptr cloud_f (new pcl::PointCloud<pcl::PointXYZRGB>);

    // Create the filtering object: downsample the dataset using a leaf size of 1cm
    pcl::VoxelGrid<pcl::PointXYZRGB> vg;
    pcl::PointCloud<pcl::PointXYZRGB>::Ptr cloud_filtered (new pcl::PointCloud<pcl::PointXYZRGB>);
    vg.setInputCloud (mainCloud);
    vg.setLeafSize (0.01f, 0.01f, 0.01f);
    vg.filter (*cloud_filtered);


     // Create the segmentation object for the planar model and set all the parameters
     pcl::SACSegmentation<pcl::PointXYZRGB> seg;
     pcl::PointIndices::Ptr inliers (new pcl::PointIndices);
     pcl::ModelCoefficients::Ptr coefficients (new pcl::ModelCoefficients);
     pcl::PointCloud<pcl::PointXYZRGB>::Ptr cloud_plane (new pcl::PointCloud<pcl::PointXYZRGB> ());
     pcl::PCDWriter writer;
     seg.setOptimizeCoefficients (true);
     seg.setModelType (pcl::SACMODEL_PLANE);
     seg.setMethodType (pcl::SAC_RANSAC);
     seg.setMaxIterations (100);
     seg.setDistanceThreshold (0.02);

     int i=0, nr_points = (int) cloud_filtered->points.size ();
     while (cloud_filtered->points.size () > 0.3 * nr_points)
     {
         // Segment the largest planar component from the remaining cloud
         seg.setInputCloud (cloud_filtered);
         seg.segment (*inliers, *coefficients);
         if (inliers->indices.size () == 0)
         {
             std::cout << "Could not estimate a planar model for the given dataset." << std::endl;
             break;
         }

         // Extract the planar inliers from the input cloud
         pcl::ExtractIndices<pcl::PointXYZRGB> extract;
         extract.setInputCloud (cloud_filtered);
         extract.setIndices (inliers);
         extract.setNegative (false);

         // Get the points associated with the planar surface
         extract.filter (*cloud_plane);
         std::cout << "PointCloud representing the planar component: " << cloud_plane->points.size () << " data points." << std::endl;

         // Remove the planar inliers, extract the rest
         extract.setNegative (true);
         extract.filter (*cloud_f);
         *cloud_filtered = *cloud_f;
     }

     // Creating the KdTree object for the search method of the extraction
     pcl::search::KdTree<pcl::PointXYZRGB>::Ptr tree (new pcl::search::KdTree<pcl::PointXYZRGB>);
     tree->setInputCloud (cloud_filtered);

     std::vector<pcl::PointIndices> cluster_indices;
     pcl::EuclideanClusterExtraction<pcl::PointXYZRGB> ec;
     ec.setClusterTolerance (clusterTolerance);
     ec.setMinClusterSize (minCluster);
     ec.setMaxClusterSize (maxCluster);
     ec.setSearchMethod (tree);
     ec.setInputCloud (cloud_filtered);
     ec.extract (cluster_indices);


     pcl::PointCloud<pcl::PointXYZRGB>::Ptr result (new pcl::PointCloud<pcl::PointXYZRGB>);

     int j = 0;
     for (std::vector<pcl::PointIndices>::const_iterator it = cluster_indices.begin (); it != cluster_indices.end (); ++it)
     {
       pcl::PointCloud<pcl::PointXYZRGB>::Ptr cloud_cluster (new pcl::PointCloud<pcl::PointXYZRGB>);
       for (std::vector<int>::const_iterator pit = it->indices.begin (); pit != it->indices.end (); pit++)
         cloud_cluster->points.push_back (cloud_filtered->points[*pit]); //*
       cloud_cluster->width = cloud_cluster->points.size ();
       cloud_cluster->height = 1;
       cloud_cluster->is_dense = true;

       int colorR = qrand() % ((255 + 1) - 100);
       int colorG = qrand() % ((255 + 1) - 100);
       int colorB = qrand() % ((255 + 1) - 100);

       for(int i = 0; i < cloud_cluster->points.size(); i++) {
           cloud_cluster->points[i].r = colorR;
           cloud_cluster->points[i].g = colorG;
           cloud_cluster->points[i].b = colorB;
       }

       result->operator +=(*cloud_cluster);

       std::cout << "PointCloud representing the Cluster: " << cloud_cluster->points.size () << " data points." << std::endl;
       std::stringstream ss;
       ss << "cloud_cluster_" << j << ".pcd";
       //writer.write<pcl::PointXYZRGB> (ss.str (), *cloud_cluster, false); //*
       j++;
     }

     mainCloud = result;
     this->printSuccess("Finished Clustering");
     this->updateCloud();
}

/**
 * @brief MainWindow::corresGrouping
 *
 * Based on PCL-Tutorial
 * http://pointclouds.org/documentation/tutorials/correspondence_grouping.php
 */
void MainWindow::corresGrouping()
{

    typedef pcl::PointXYZRGB PointType;
    typedef pcl::Normal NormalType;
    typedef pcl::ReferenceFrame RFType;
    typedef pcl::SHOT352 DescriptorType;

    //Algorithm params
    bool show_keypoints_ (true);
    bool show_correspondences_ (true);
    bool use_cloud_resolution_ (false);
    bool use_hough_ (true);
    float model_ss_ (0.01f);
    float scene_ss_ (0.03f);
    float rf_rad_ (0.015f*20);
    float descr_rad_ (0.02f);
    float cg_size_ (0.01f);
    float cg_thresh_ (5.0f);

    pcl::PointCloud<PointType>::Ptr model (new pcl::PointCloud<PointType> ());
    pcl::PointCloud<PointType>::Ptr model_keypoints (new pcl::PointCloud<PointType> ());
    //pcl::PointCloud<PointType>::Ptr scene (new pcl::PointCloud<PointType> ());
    pcl::PointCloud<PointType>::Ptr scene_keypoints (new pcl::PointCloud<PointType> ());
    pcl::PointCloud<NormalType>::Ptr model_normals (new pcl::PointCloud<NormalType> ());
    pcl::PointCloud<NormalType>::Ptr scene_normals (new pcl::PointCloud<NormalType> ());
    pcl::PointCloud<DescriptorType>::Ptr model_descriptors (new pcl::PointCloud<DescriptorType> ());
    pcl::PointCloud<DescriptorType>::Ptr scene_descriptors (new pcl::PointCloud<DescriptorType> ());

    // Load Model
    if(clCloud.isNull()) {
        this->displayError("Pleas Set a Cloud first.");
        return;
    } else {
        pcl::io::loadPCDFile(this->clCloud.toStdString(), *model);
    }

    // Maybe CLoud Resolution here

    // Compute Normals
    pcl::NormalEstimationOMP<PointType, NormalType> norm_est;
    norm_est.setKSearch (10);
    norm_est.setInputCloud (model);
    norm_est.compute (*model_normals);
    norm_est.setInputCloud (mainCloud);
    norm_est.compute (*scene_normals);

    //  Downsample Clouds to Extract keypoints
    pcl::PointCloud<int> sampled_indices;

    pcl::UniformSampling<PointType> uniform_sampling;
    uniform_sampling.setInputCloud (model);
    uniform_sampling.setRadiusSearch (model_ss_);
    uniform_sampling.compute (sampled_indices);
    pcl::copyPointCloud (*model, sampled_indices.points, *model_keypoints);
    //std::cout << "Model total points: " << model->size () << "; Selected Keypoints: " << model_keypoints->size () << std::endl;

    uniform_sampling.setInputCloud (mainCloud);
    uniform_sampling.setRadiusSearch (scene_ss_);
    uniform_sampling.compute (sampled_indices);
    pcl::copyPointCloud (*mainCloud, sampled_indices.points, *scene_keypoints);
    //std::cout << "Scene total points: " << scene->size () << "; Selected Keypoints: " << scene_keypoints->size () << std::endl;


    //  Compute Descriptor for keypoints
    pcl::SHOTEstimationOMP<PointType, NormalType, DescriptorType> descr_est;
    descr_est.setRadiusSearch (descr_rad_);

    descr_est.setInputCloud (model_keypoints);
    descr_est.setInputNormals (model_normals);
    descr_est.setSearchSurface (model);
    descr_est.compute (*model_descriptors);

    descr_est.setInputCloud (scene_keypoints);
    descr_est.setInputNormals (scene_normals);
    descr_est.setSearchSurface (mainCloud);
    descr_est.compute (*scene_descriptors);

    this->printInfo("Descriptors for model found: " + QString::number(model_descriptors->size()));
    this->printInfo("Descriptors for scene found: " + QString::number(scene_descriptors->size()));

    if(model_descriptors->empty()) {
        this->printError("Input Cloud is empty");
        return;
    }

    //  Find Model-Scene Correspondences with KdTree
    pcl::CorrespondencesPtr model_scene_corrs (new pcl::Correspondences ());

    pcl::KdTreeFLANN<DescriptorType> match_search;
    match_search.setInputCloud (model_descriptors);

    //  For each scene keypoint descriptor, find nearest neighbor into the model keypoints descriptor cloud and add it to the correspondences vector.
    for (size_t i = 0; i < scene_descriptors->size (); ++i)
    {
        std::vector<int> neigh_indices (1);
        std::vector<float> neigh_sqr_dists (1);
        if (!pcl_isfinite (scene_descriptors->at (i).descriptor[0])) //skipping NaNs
        {
            continue;
        }
        int found_neighs = match_search.nearestKSearch (scene_descriptors->at (i), 1, neigh_indices, neigh_sqr_dists);
        if(found_neighs == 1 && neigh_sqr_dists[0] < 1.0f) //  add match only if the squared descriptor distance is less than 0.25 (SHOT descriptor distances are between 0 and 1 by design)
        {
            pcl::Correspondence corr (neigh_indices[0], static_cast<int> (i), neigh_sqr_dists[0]);
            model_scene_corrs->push_back (corr);
        }
    }

    this->printInfo("Correspondences found: " + QString::number(model_scene_corrs->size()));


    //  Actual Clustering
    std::vector<Eigen::Matrix4f, Eigen::aligned_allocator<Eigen::Matrix4f> > rototranslations;
    std::vector<pcl::Correspondences> clustered_corrs;

    //  Using Hough3D
//    pcl::PointCloud<RFType>::Ptr model_rf (new pcl::PointCloud<RFType> ());
//    pcl::PointCloud<RFType>::Ptr scene_rf (new pcl::PointCloud<RFType> ());

//    pcl::BOARDLocalReferenceFrameEstimation<PointType, NormalType, RFType> rf_est;
//    rf_est.setFindHoles (true);
//    rf_est.setRadiusSearch (rf_rad_);

//    rf_est.setInputCloud (model_keypoints);
//    rf_est.setInputNormals (model_normals);
//    rf_est.setSearchSurface (model);
//    rf_est.compute (*model_rf);

//    rf_est.setInputCloud (scene_keypoints);
//    rf_est.setInputNormals (scene_normals);
//    rf_est.setSearchSurface (mainCloud);
//    rf_est.compute (*scene_rf);

//    //  Clustering
//    pcl::Hough3DGrouping<PointType, PointType, RFType, RFType> clusterer;
//    clusterer.setHoughBinSize (cg_size_);
//    clusterer.setHoughThreshold (cg_thresh_);
//    clusterer.setUseInterpolation (true);
//    clusterer.setUseDistanceWeight (false);

//    clusterer.setInputCloud (model_keypoints);
//    clusterer.setInputRf (model_rf);
//    clusterer.setSceneCloud (scene_keypoints);
//    clusterer.setSceneRf (scene_rf);
//    clusterer.setModelSceneCorrespondences (model_scene_corrs);

//    //clusterer.cluster (clustered_corrs);
//    clusterer.recognize (rototranslations, clustered_corrs);

    // Using GeometricConsistency
    pcl::GeometricConsistencyGrouping<PointType, PointType> gc_clusterer;
    gc_clusterer.setGCSize (cg_size_);
    gc_clusterer.setGCThreshold (cg_thresh_);

    gc_clusterer.setInputCloud (model_keypoints);
    gc_clusterer.setSceneCloud (scene_keypoints);
    gc_clusterer.setModelSceneCorrespondences (model_scene_corrs);

    //gc_clusterer.cluster (clustered_corrs);
    gc_clusterer.recognize (rototranslations, clustered_corrs);


    this->printInfo("Model instances found: " + QString::number(rototranslations.size()));

    for (size_t i = 0; i < rototranslations.size (); ++i)
    {

        this->printInfo("Instance " + QString::number(i + 1) + ": ");
        this->printInfo("Correspondences belonging to this instance: " + QString::number(clustered_corrs[i].size()));

      // Print the rotation matrix and translation vector
      Eigen::Matrix3f rotation = rototranslations[i].block<3,3>(0, 0);
      Eigen::Vector3f translation = rototranslations[i].block<3,1>(0, 3);



//      printf ("\n");
//      printf ("            | %6.3f %6.3f %6.3f | \n", rotation (0,0), rotation (0,1), rotation (0,2));
//      printf ("        R = | %6.3f %6.3f %6.3f | \n", rotation (1,0), rotation (1,1), rotation (1,2));
//      printf ("            | %6.3f %6.3f %6.3f | \n", rotation (2,0), rotation (2,1), rotation (2,2));
//      printf ("\n");
//      printf ("        t = < %0.3f, %0.3f, %0.3f >\n", translation (0), translation (1), translation (2));
    }

    //  Visualization
    //pcl::visualization::PCLVisualizer viewer ("Correspondence Grouping");
    //viewer.addPointCloud (scene, "scene_cloud");

    this->updateCloud();

    pcl::PointCloud<PointType>::Ptr off_scene_model (new pcl::PointCloud<PointType> ());
    pcl::PointCloud<PointType>::Ptr off_scene_model_keypoints (new pcl::PointCloud<PointType> ());

    if (show_correspondences_ || show_keypoints_)
    {
        //  We are translating the model so that it doesn't end in the middle of the scene representation
        pcl::transformPointCloud (*model, *off_scene_model, Eigen::Vector3f (-1,0,0), Eigen::Quaternionf (1, 0, 0, 0));
        pcl::transformPointCloud (*model_keypoints, *off_scene_model_keypoints, Eigen::Vector3f (-1,0,0), Eigen::Quaternionf (1, 0, 0, 0));


        pcl::visualization::PointCloudColorHandlerCustom<PointType> off_scene_model_color_handler (off_scene_model, 255, 255, 128);
        visu->visualizer.addPointCloud (off_scene_model, off_scene_model_color_handler, "off_scene_model");
    }

    if (show_keypoints_)
    {
        pcl::visualization::PointCloudColorHandlerCustom<PointType> scene_keypoints_color_handler (scene_keypoints, 0, 0, 255);
        visu->visualizer.addPointCloud (scene_keypoints, scene_keypoints_color_handler, "scene_keypoints");
        visu->visualizer.setPointCloudRenderingProperties (pcl::visualization::PCL_VISUALIZER_POINT_SIZE, 5, "scene_keypoints");

        pcl::visualization::PointCloudColorHandlerCustom<PointType> off_scene_model_keypoints_color_handler (off_scene_model_keypoints, 0, 0, 255);
        visu->visualizer.addPointCloud (off_scene_model_keypoints, off_scene_model_keypoints_color_handler, "off_scene_model_keypoints");
        visu->visualizer.setPointCloudRenderingProperties (pcl::visualization::PCL_VISUALIZER_POINT_SIZE, 5, "off_scene_model_keypoints");
    }

    for (size_t i = 0; i < rototranslations.size (); ++i)
    {
        pcl::PointCloud<PointType>::Ptr rotated_model (new pcl::PointCloud<PointType> ());
        pcl::transformPointCloud (*model, *rotated_model, rototranslations[i]);

        std::stringstream ss_cloud;
        ss_cloud << "instance" << i;

        pcl::visualization::PointCloudColorHandlerCustom<PointType> rotated_model_color_handler (rotated_model, 255, 0, 0);
        visu->visualizer.addPointCloud (rotated_model, rotated_model_color_handler, ss_cloud.str ());

        if (show_correspondences_)
        {
            for (size_t j = 0; j < clustered_corrs[i].size (); ++j)
            {
                std::stringstream ss_line;
                ss_line << "correspondence_line" << i << "_" << j;
                PointType& model_point = off_scene_model_keypoints->at (clustered_corrs[i][j].index_query);
                PointType& scene_point = scene_keypoints->at (clustered_corrs[i][j].index_match);

                //  We are drawing a line for each pair of clustered correspondences found between the model and the scene
                visu->visualizer.addLine<PointType, PointType> (model_point, scene_point, 0, 255, 0, ss_line.str ());
            }
        }
    }

}

void MainWindow::clSetCloud()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Point Cloud"), "", tr("PCD (*.pcd)"));

    if(fileName != NULL) {
        this->clCloud = fileName;
        ui->clFilePath->clear();
        ui->clFilePath->append(fileName);
    }
}

void MainWindow::setWhite()
{
    this->bleachCloud(mainCloud);
    visu->visualizer.updatePointCloud(mainCloud, cloud);
    visu->update();
    this->printSuccess("Set Color of Cloud to White");
}

void MainWindow::undo()
{
    if(fallbackCloud != NULL) {
        mainCloud = pcl::PointCloud<pcl::PointXYZRGB>::Ptr(fallbackCloud);
        visu->visualizer.updatePointCloud(mainCloud, cloud);
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

void MainWindow::toggleCoordinateSystem()
{
    if(ui->actionShowCoordinateSystem->isChecked()) {
        visu->visualizer.addCoordinateSystem();
    }
    else {
        visu->visualizer.removeCoordinateSystem();
    }
    visu->update();
}

