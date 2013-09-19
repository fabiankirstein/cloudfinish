#-------------------------------------------------
#
# Project created by QtCreator 2013-09-07T11:39:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = cloudfinish
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    cloudvisualizer.cpp \
    cloudio.cpp

HEADERS  += mainwindow.h \
    cloudvisualizer.h \
    cloudio.h

FORMS    += mainwindow.ui \
    about.ui


win32:CONFIG(release, debug|release): LIBS += -L'C:/Program Files/Boost/lib/' \
-llibboost_system-vc100-mt-1_50 \
-llibboost_filesystem-vc100-mt-1_50 \
-llibboost_thread-vc100-mt-1_50 \
-llibboost_date_time-vc100-mt-1_50 \
-llibboost_iostreams-vc100-mt-1_50 \
-llibboost_mpi-vc100-mt-1_50 \
-llibboost_serialization-vc100-mt-1_50 \
-llibboost_chrono-vc100-mt-1_50


win32:CONFIG(release, debug|release): LIBS += -L'C:/Program Files/PCL 1.7.0/lib/' \
-lpcl_common_release \
-lpcl_features_release \
-lpcl_filters_release \
-lpcl_io_ply_release \
-lpcl_io_release \
-lpcl_kdtree_release \
-lpcl_keypoints_release \
-lpcl_ml_release \
-lpcl_octree_release \
-lpcl_outofcore_release \
-lpcl_people_release \
-lpcl_recognition_release \
-lpcl_registration_release \
-lpcl_sample_consensus_release \
-lpcl_search_release \
-lpcl_segmentation_release \
-lpcl_stereo_release \
-lpcl_surface_release \
-lpcl_tracking_release \
-lpcl_visualization_release


win32:CONFIG(release, debug|release): LIBS += -L'C:/Program Files/VTK/lib/vtk-5.8/' \
-lQVTK \
-lvtkCommon \
-lvtkRendering \
-lvtkHybrid \
-lvtkCharts \
-lvtkViews \
-lvtkInfovis \
-lvtkWidgets \
-lvtkexoIIc \
-lvtkVolumeRendering \
-lvtkGraphics \
-lvtkverdict \
-lvtkImaging \
-lvtkftgl \
-lvtkfreetype \
-lvtkIO \
-lvtkFiltering \
-lvtkDICOMParser \
-lvtkNetCDF_cxx \
-lvtkNetCDF \
-lvtkmetaio \
-lvtksys \
-lvtksqlite \
-lvtkpng \
-lvtktiff \
-lvtkjpeg \
-lvtkexpat \
-lvtklibxml2 \
-lvtkzlib \
-lvtkalglib \


LIBS += -L'C:/Program Files/OpenNI/Lib64' -lopenNI64
LIBS += -L'C:/Program Files/flann/lib' -lflann_cpp_s

INCLUDEPATH += 'C:/Program Files/PCL 1.7.0/include/pcl-1.7'
INCLUDEPATH += 'C:/Program Files/Boost/include'
INCLUDEPATH += 'C:/Program Files (x86)/Eigen/include'
INCLUDEPATH += 'C:/Program Files/flann/include'
INCLUDEPATH += 'C:/Program Files/VTK/include/vtk-5.8'
INCLUDEPATH += 'C:/Program Files/OpenNI/include'
