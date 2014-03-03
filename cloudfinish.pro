#-------------------------------------------------
#
# Project created by QtCreator 2013-09-07T11:39:07
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = cloudfinish
TEMPLATE = app

RESOURCES = icons.qrc

SOURCES += main.cpp\
        mainwindow.cpp \
    cloudvisualizer.cpp \
    cloudio.cpp \
    databaseDialog.cpp \
    util.cpp \
    json.cpp \
    rest.cpp

HEADERS  += mainwindow.h \
    cloudvisualizer.h \
    cloudio.h \
    databaseDialog.h \
    util.h \
    json.h \
    rest.h

FORMS    += mainwindow.ui \
    about.ui \
    database.ui


win32:CONFIG(release, debug|release): LIBS += -L'$$(CF_BOOST)/lib/' \
-llibboost_system-vc100-mt-1_50 \
-llibboost_filesystem-vc100-mt-1_50 \
-llibboost_thread-vc100-mt-1_50 \
-llibboost_date_time-vc100-mt-1_50 \
-llibboost_iostreams-vc100-mt-1_50 \
-llibboost_mpi-vc100-mt-1_50 \
-llibboost_serialization-vc100-mt-1_50 \
-llibboost_chrono-vc100-mt-1_50


win32:CONFIG(release, debug|release): LIBS += -L'$$(CF_PCL)/lib/' \
-lpcl_common_release \
-lpcl_features_release \
-lpcl_filters_release \
-lpcl_io_ply_release \
-lpcl_io_release \
-lpcl_kdtree_release \
-lpcl_keypoints_release \
-lpcl_octree_release \
-lpcl_outofcore_release \
-lpcl_people_release \
-lpcl_recognition_release \
-lpcl_registration_release \
-lpcl_sample_consensus_release \
-lpcl_search_release \
-lpcl_segmentation_release \
-lpcl_surface_release \
-lpcl_tracking_release \
-lpcl_visualization_release


win32:CONFIG(release, debug|release): LIBS += -L'$$(CF_VTK)/lib/vtk-5.8/' \
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


LIBS += -L'$$(CF_OPENNI)/Lib' -lopenNI
LIBS += -L'$$(CF_FLANN)/lib' -lflann_cpp_s

INCLUDEPATH += '$$(CF_PCL)/include/pcl-1.7'
INCLUDEPATH += '$$(CF_BOOST)/include'
INCLUDEPATH += '$$(CF_EIGEN)/include'
INCLUDEPATH += '$$(CF_FLANN)/include'
INCLUDEPATH += '$$(CF_VTK)/include/vtk-5.8'
INCLUDEPATH += '$$(CF_OPENNI)/include'
