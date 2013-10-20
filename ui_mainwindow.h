/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun 20. Oct 18:50:39 2013
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "QVTKWidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpenPointCloud;
    QAction *actionUndo;
    QAction *actionSavePointCloud;
    QAction *actionSavePNG;
    QAction *actionAbout;
    QAction *actionUser_Guide;
    QAction *iconOpenPointCloud;
    QAction *actionResetColor;
    QAction *iconResetColor;
    QAction *actionShowCoordinateSystem;
    QAction *iconSavePointCloud;
    QAction *iconSavePNG;
    QAction *iconUndo;
    QAction *iconShowCoordinateSystem;
    QAction *iconAbout;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QVTKWidget *vtkwidget;
    QTextBrowser *console;
    QWidget *widget;
    QGroupBox *rgGroupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_3;
    QDoubleSpinBox *rgCurvature;
    QLabel *label;
    QDoubleSpinBox *rgSmothnessThres;
    QLabel *label_2;
    QSpinBox *rgMinCluster;
    QSpinBox *rgMaxCluster;
    QLabel *label_4;
    QPushButton *startRegionGrowing;
    QGroupBox *groupBox;
    QPushButton *startGrouping;
    QTextEdit *clFilePath;
    QPushButton *clSetCloudButton;
    QWidget *formLayoutWidget_4;
    QFormLayout *formLayout_4;
    QLabel *label_13;
    QDoubleSpinBox *clSceneRadius;
    QLabel *label_14;
    QDoubleSpinBox *clModelRadius;
    QLabel *label_15;
    QDoubleSpinBox *clDescriptorRadius;
    QLabel *label_16;
    QDoubleSpinBox *clDescriptorDistance;
    QLabel *label_17;
    QDoubleSpinBox *clReferenceRadius;
    QLabel *label_18;
    QDoubleSpinBox *clBinSize;
    QDoubleSpinBox *clThreshold;
    QLabel *label_19;
    QCheckBox *clKeypoints;
    QLabel *label_20;
    QGroupBox *groupBox_2;
    QPushButton *startMinCut;
    QLabel *label_5;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QDoubleSpinBox *mcRadius;
    QLabel *label_6;
    QDoubleSpinBox *mcSigma;
    QLabel *label_7;
    QDoubleSpinBox *mcSourceWeight;
    QLabel *label_8;
    QSpinBox *mcNeighbours;
    QLabel *label_9;
    QGroupBox *groupBox_3;
    QPushButton *startCluster;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QDoubleSpinBox *eclTolerance;
    QLabel *label_10;
    QSpinBox *eclMinCluster;
    QLabel *label_11;
    QSpinBox *eclMaxCluster;
    QLabel *label_12;
    QMenuBar *menuBar;
    QMenu *menuDatei;
    QMenu *menuExtras;
    QMenu *menuHilfe;
    QMenu *menuBearbeiten;
    QMenu *menuView;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(860, 1156);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionOpenPointCloud = new QAction(MainWindow);
        actionOpenPointCloud->setObjectName(QString::fromUtf8("actionOpenPointCloud"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionSavePointCloud = new QAction(MainWindow);
        actionSavePointCloud->setObjectName(QString::fromUtf8("actionSavePointCloud"));
        actionSavePNG = new QAction(MainWindow);
        actionSavePNG->setObjectName(QString::fromUtf8("actionSavePNG"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout->setCheckable(false);
        actionUser_Guide = new QAction(MainWindow);
        actionUser_Guide->setObjectName(QString::fromUtf8("actionUser_Guide"));
        iconOpenPointCloud = new QAction(MainWindow);
        iconOpenPointCloud->setObjectName(QString::fromUtf8("iconOpenPointCloud"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        iconOpenPointCloud->setIcon(icon1);
        actionResetColor = new QAction(MainWindow);
        actionResetColor->setObjectName(QString::fromUtf8("actionResetColor"));
        iconResetColor = new QAction(MainWindow);
        iconResetColor->setObjectName(QString::fromUtf8("iconResetColor"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/white.png"), QSize(), QIcon::Normal, QIcon::Off);
        iconResetColor->setIcon(icon2);
        actionShowCoordinateSystem = new QAction(MainWindow);
        actionShowCoordinateSystem->setObjectName(QString::fromUtf8("actionShowCoordinateSystem"));
        actionShowCoordinateSystem->setCheckable(true);
        iconSavePointCloud = new QAction(MainWindow);
        iconSavePointCloud->setObjectName(QString::fromUtf8("iconSavePointCloud"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        iconSavePointCloud->setIcon(icon3);
        iconSavePNG = new QAction(MainWindow);
        iconSavePNG->setObjectName(QString::fromUtf8("iconSavePNG"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/export.png"), QSize(), QIcon::Normal, QIcon::Off);
        iconSavePNG->setIcon(icon4);
        iconUndo = new QAction(MainWindow);
        iconUndo->setObjectName(QString::fromUtf8("iconUndo"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        iconUndo->setIcon(icon5);
        iconShowCoordinateSystem = new QAction(MainWindow);
        iconShowCoordinateSystem->setObjectName(QString::fromUtf8("iconShowCoordinateSystem"));
        iconShowCoordinateSystem->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/coordinate.png"), QSize(), QIcon::Normal, QIcon::Off);
        iconShowCoordinateSystem->setIcon(icon6);
        iconAbout = new QAction(MainWindow);
        iconAbout->setObjectName(QString::fromUtf8("iconAbout"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        iconAbout->setIcon(icon7);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMinimumSize(QSize(860, 0));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        vtkwidget = new QVTKWidget(centralWidget);
        vtkwidget->setObjectName(QString::fromUtf8("vtkwidget"));
        vtkwidget->setEnabled(true);
        vtkwidget->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(vtkwidget);

        console = new QTextBrowser(centralWidget);
        console->setObjectName(QString::fromUtf8("console"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(console->sizePolicy().hasHeightForWidth());
        console->setSizePolicy(sizePolicy);
        console->setMinimumSize(QSize(0, 100));
        console->setMaximumSize(QSize(16777215, 150));

        verticalLayout->addWidget(console);


        horizontalLayout_2->addLayout(verticalLayout);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(300, 0));
        widget->setStyleSheet(QString::fromUtf8(""));
        rgGroupBox = new QGroupBox(widget);
        rgGroupBox->setObjectName(QString::fromUtf8("rgGroupBox"));
        rgGroupBox->setGeometry(QRect(10, 0, 281, 161));
        formLayoutWidget = new QWidget(rgGroupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 20, 261, 101));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        rgCurvature = new QDoubleSpinBox(formLayoutWidget);
        rgCurvature->setObjectName(QString::fromUtf8("rgCurvature"));
        rgCurvature->setMinimum(0.01);
        rgCurvature->setValue(1);

        formLayout->setWidget(0, QFormLayout::FieldRole, rgCurvature);

        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        rgSmothnessThres = new QDoubleSpinBox(formLayoutWidget);
        rgSmothnessThres->setObjectName(QString::fromUtf8("rgSmothnessThres"));
        rgSmothnessThres->setMinimumSize(QSize(0, 0));
        rgSmothnessThres->setMaximumSize(QSize(16777215, 16777215));
        rgSmothnessThres->setMinimum(0.1);
        rgSmothnessThres->setMaximum(30);
        rgSmothnessThres->setValue(5);

        formLayout->setWidget(1, QFormLayout::FieldRole, rgSmothnessThres);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        rgMinCluster = new QSpinBox(formLayoutWidget);
        rgMinCluster->setObjectName(QString::fromUtf8("rgMinCluster"));
        rgMinCluster->setMinimum(0);
        rgMinCluster->setMaximum(100000);
        rgMinCluster->setSingleStep(10);
        rgMinCluster->setValue(0);

        formLayout->setWidget(2, QFormLayout::FieldRole, rgMinCluster);

        rgMaxCluster = new QSpinBox(formLayoutWidget);
        rgMaxCluster->setObjectName(QString::fromUtf8("rgMaxCluster"));
        rgMaxCluster->setMaximum(1000000);
        rgMaxCluster->setSingleStep(100);

        formLayout->setWidget(3, QFormLayout::FieldRole, rgMaxCluster);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        startRegionGrowing = new QPushButton(rgGroupBox);
        startRegionGrowing->setObjectName(QString::fromUtf8("startRegionGrowing"));
        startRegionGrowing->setGeometry(QRect(200, 130, 75, 23));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 520, 281, 301));
        startGrouping = new QPushButton(groupBox);
        startGrouping->setObjectName(QString::fromUtf8("startGrouping"));
        startGrouping->setGeometry(QRect(200, 270, 75, 23));
        clFilePath = new QTextEdit(groupBox);
        clFilePath->setObjectName(QString::fromUtf8("clFilePath"));
        clFilePath->setGeometry(QRect(10, 20, 181, 21));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(clFilePath->sizePolicy().hasHeightForWidth());
        clFilePath->setSizePolicy(sizePolicy2);
        clFilePath->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        clFilePath->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        clFilePath->setTabChangesFocus(true);
        clFilePath->setLineWrapMode(QTextEdit::NoWrap);
        clFilePath->setReadOnly(true);
        clSetCloudButton = new QPushButton(groupBox);
        clSetCloudButton->setObjectName(QString::fromUtf8("clSetCloudButton"));
        clSetCloudButton->setGeometry(QRect(200, 20, 75, 23));
        formLayoutWidget_4 = new QWidget(groupBox);
        formLayoutWidget_4->setObjectName(QString::fromUtf8("formLayoutWidget_4"));
        formLayoutWidget_4->setGeometry(QRect(10, 50, 261, 211));
        formLayout_4 = new QFormLayout(formLayoutWidget_4);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(formLayoutWidget_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_13);

        clSceneRadius = new QDoubleSpinBox(formLayoutWidget_4);
        clSceneRadius->setObjectName(QString::fromUtf8("clSceneRadius"));
        clSceneRadius->setMinimum(0.01);
        clSceneRadius->setSingleStep(0.1);
        clSceneRadius->setValue(0.4);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, clSceneRadius);

        label_14 = new QLabel(formLayoutWidget_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_14);

        clModelRadius = new QDoubleSpinBox(formLayoutWidget_4);
        clModelRadius->setObjectName(QString::fromUtf8("clModelRadius"));
        clModelRadius->setMinimum(0.01);
        clModelRadius->setSingleStep(0.1);
        clModelRadius->setValue(0.4);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, clModelRadius);

        label_15 = new QLabel(formLayoutWidget_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_15);

        clDescriptorRadius = new QDoubleSpinBox(formLayoutWidget_4);
        clDescriptorRadius->setObjectName(QString::fromUtf8("clDescriptorRadius"));
        clDescriptorRadius->setMinimum(0.01);
        clDescriptorRadius->setSingleStep(0.1);
        clDescriptorRadius->setValue(0.1);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, clDescriptorRadius);

        label_16 = new QLabel(formLayoutWidget_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_16);

        clDescriptorDistance = new QDoubleSpinBox(formLayoutWidget_4);
        clDescriptorDistance->setObjectName(QString::fromUtf8("clDescriptorDistance"));
        clDescriptorDistance->setMinimum(0.01);
        clDescriptorDistance->setMaximum(0.99);
        clDescriptorDistance->setSingleStep(0.1);
        clDescriptorDistance->setValue(0.01);

        formLayout_4->setWidget(3, QFormLayout::FieldRole, clDescriptorDistance);

        label_17 = new QLabel(formLayoutWidget_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, label_17);

        clReferenceRadius = new QDoubleSpinBox(formLayoutWidget_4);
        clReferenceRadius->setObjectName(QString::fromUtf8("clReferenceRadius"));
        clReferenceRadius->setMinimum(0.01);
        clReferenceRadius->setSingleStep(0.1);
        clReferenceRadius->setValue(0.2);

        formLayout_4->setWidget(4, QFormLayout::FieldRole, clReferenceRadius);

        label_18 = new QLabel(formLayoutWidget_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        formLayout_4->setWidget(5, QFormLayout::LabelRole, label_18);

        clBinSize = new QDoubleSpinBox(formLayoutWidget_4);
        clBinSize->setObjectName(QString::fromUtf8("clBinSize"));
        clBinSize->setMinimum(0.01);
        clBinSize->setSingleStep(0.1);
        clBinSize->setValue(0.4);

        formLayout_4->setWidget(5, QFormLayout::FieldRole, clBinSize);

        clThreshold = new QDoubleSpinBox(formLayoutWidget_4);
        clThreshold->setObjectName(QString::fromUtf8("clThreshold"));
        clThreshold->setMinimum(-1);
        clThreshold->setSingleStep(0.1);
        clThreshold->setValue(-0.5);

        formLayout_4->setWidget(6, QFormLayout::FieldRole, clThreshold);

        label_19 = new QLabel(formLayoutWidget_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout_4->setWidget(6, QFormLayout::LabelRole, label_19);

        clKeypoints = new QCheckBox(formLayoutWidget_4);
        clKeypoints->setObjectName(QString::fromUtf8("clKeypoints"));
        clKeypoints->setChecked(true);
        clKeypoints->setTristate(false);

        formLayout_4->setWidget(7, QFormLayout::FieldRole, clKeypoints);

        label_20 = new QLabel(formLayoutWidget_4);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        formLayout_4->setWidget(7, QFormLayout::LabelRole, label_20);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 170, 281, 191));
        startMinCut = new QPushButton(groupBox_2);
        startMinCut->setObjectName(QString::fromUtf8("startMinCut"));
        startMinCut->setGeometry(QRect(200, 160, 75, 23));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 20, 261, 16));
        formLayoutWidget_2 = new QWidget(groupBox_2);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(10, 40, 261, 111));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        mcRadius = new QDoubleSpinBox(formLayoutWidget_2);
        mcRadius->setObjectName(QString::fromUtf8("mcRadius"));
        mcRadius->setMinimum(0.01);
        mcRadius->setMaximum(10000);
        mcRadius->setValue(5);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, mcRadius);

        label_6 = new QLabel(formLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        mcSigma = new QDoubleSpinBox(formLayoutWidget_2);
        mcSigma->setObjectName(QString::fromUtf8("mcSigma"));
        mcSigma->setMinimum(0.01);
        mcSigma->setSingleStep(0.25);
        mcSigma->setValue(0.25);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, mcSigma);

        label_7 = new QLabel(formLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_7);

        mcSourceWeight = new QDoubleSpinBox(formLayoutWidget_2);
        mcSourceWeight->setObjectName(QString::fromUtf8("mcSourceWeight"));
        mcSourceWeight->setSingleStep(0.5);
        mcSourceWeight->setValue(0.5);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, mcSourceWeight);

        label_8 = new QLabel(formLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_8);

        mcNeighbours = new QSpinBox(formLayoutWidget_2);
        mcNeighbours->setObjectName(QString::fromUtf8("mcNeighbours"));
        mcNeighbours->setMinimum(1);
        mcNeighbours->setMaximum(1000);
        mcNeighbours->setValue(10);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, mcNeighbours);

        label_9 = new QLabel(formLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_9);

        groupBox_3 = new QGroupBox(widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 370, 281, 141));
        startCluster = new QPushButton(groupBox_3);
        startCluster->setObjectName(QString::fromUtf8("startCluster"));
        startCluster->setGeometry(QRect(200, 110, 75, 23));
        formLayoutWidget_3 = new QWidget(groupBox_3);
        formLayoutWidget_3->setObjectName(QString::fromUtf8("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(10, 20, 261, 81));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        eclTolerance = new QDoubleSpinBox(formLayoutWidget_3);
        eclTolerance->setObjectName(QString::fromUtf8("eclTolerance"));
        eclTolerance->setMinimum(0.01);
        eclTolerance->setSingleStep(0.01);
        eclTolerance->setValue(0.1);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, eclTolerance);

        label_10 = new QLabel(formLayoutWidget_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_10);

        eclMinCluster = new QSpinBox(formLayoutWidget_3);
        eclMinCluster->setObjectName(QString::fromUtf8("eclMinCluster"));
        eclMinCluster->setMinimum(1);
        eclMinCluster->setMaximum(1000000);
        eclMinCluster->setSingleStep(100);
        eclMinCluster->setValue(100);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, eclMinCluster);

        label_11 = new QLabel(formLayoutWidget_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_11);

        eclMaxCluster = new QSpinBox(formLayoutWidget_3);
        eclMaxCluster->setObjectName(QString::fromUtf8("eclMaxCluster"));
        eclMaxCluster->setMinimum(10);
        eclMaxCluster->setMaximum(100000000);
        eclMaxCluster->setSingleStep(1000);
        eclMaxCluster->setValue(100000);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, eclMaxCluster);

        label_12 = new QLabel(formLayoutWidget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_12);


        horizontalLayout_2->addWidget(widget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 860, 21));
        menuDatei = new QMenu(menuBar);
        menuDatei->setObjectName(QString::fromUtf8("menuDatei"));
        menuExtras = new QMenu(menuBar);
        menuExtras->setObjectName(QString::fromUtf8("menuExtras"));
        menuHilfe = new QMenu(menuBar);
        menuHilfe->setObjectName(QString::fromUtf8("menuHilfe"));
        menuBearbeiten = new QMenu(menuBar);
        menuBearbeiten->setObjectName(QString::fromUtf8("menuBearbeiten"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuDatei->menuAction());
        menuBar->addAction(menuBearbeiten->menuAction());
        menuBar->addAction(menuExtras->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHilfe->menuAction());
        menuDatei->addAction(actionOpenPointCloud);
        menuDatei->addAction(actionSavePointCloud);
        menuDatei->addSeparator();
        menuDatei->addAction(actionSavePNG);
        menuExtras->addAction(actionResetColor);
        menuHilfe->addAction(actionUser_Guide);
        menuHilfe->addAction(actionAbout);
        menuBearbeiten->addAction(actionUndo);
        menuView->addAction(actionShowCoordinateSystem);
        mainToolBar->addAction(iconOpenPointCloud);
        mainToolBar->addAction(iconSavePNG);
        mainToolBar->addAction(iconSavePointCloud);
        mainToolBar->addSeparator();
        mainToolBar->addAction(iconUndo);
        mainToolBar->addAction(iconResetColor);
        mainToolBar->addSeparator();
        mainToolBar->addAction(iconAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CloudFinish", 0, QApplication::UnicodeUTF8));
        actionOpenPointCloud->setText(QApplication::translate("MainWindow", "Open Point Cloud", 0, QApplication::UnicodeUTF8));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", 0, QApplication::UnicodeUTF8));
        actionSavePointCloud->setText(QApplication::translate("MainWindow", "Save Point Cloud", 0, QApplication::UnicodeUTF8));
        actionSavePNG->setText(QApplication::translate("MainWindow", "Export as PNG", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        actionUser_Guide->setText(QApplication::translate("MainWindow", "User Guide", 0, QApplication::UnicodeUTF8));
        iconOpenPointCloud->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        iconOpenPointCloud->setToolTip(QApplication::translate("MainWindow", "Open Point Cloud", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        iconOpenPointCloud->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionResetColor->setText(QApplication::translate("MainWindow", "Reset Color", 0, QApplication::UnicodeUTF8));
        iconResetColor->setText(QApplication::translate("MainWindow", "Reset Color", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        iconResetColor->setToolTip(QApplication::translate("MainWindow", "Reset the Cloud Color to White", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionShowCoordinateSystem->setText(QApplication::translate("MainWindow", "Show Coordinate System", 0, QApplication::UnicodeUTF8));
        iconSavePointCloud->setText(QApplication::translate("MainWindow", "Save Cloud", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        iconSavePointCloud->setToolTip(QApplication::translate("MainWindow", "Save Point Cloud", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        iconSavePointCloud->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        iconSavePNG->setText(QApplication::translate("MainWindow", "Export as PNG", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        iconSavePNG->setToolTip(QApplication::translate("MainWindow", "Export as PNG", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        iconUndo->setText(QApplication::translate("MainWindow", "Undo", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        iconUndo->setToolTip(QApplication::translate("MainWindow", "Undo the last step", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        iconShowCoordinateSystem->setText(QApplication::translate("MainWindow", "Show Coordinate System", 0, QApplication::UnicodeUTF8));
        iconAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        iconAbout->setToolTip(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        rgGroupBox->setTitle(QApplication::translate("MainWindow", "Region Growing Segmentation (Smoothness Contraint)", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Curvature Threshold:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Smoothness Threshold: ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        rgSmothnessThres->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>bedfaer</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_2->setText(QApplication::translate("MainWindow", "Min. Cluster Size:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Max. Cluster Size:", 0, QApplication::UnicodeUTF8));
        startRegionGrowing->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Recognition with Hough3D", 0, QApplication::UnicodeUTF8));
        startGrouping->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        startGrouping->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", 0, QApplication::UnicodeUTF8));
        clSetCloudButton->setText(QApplication::translate("MainWindow", "Set Model", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "Scene Radius:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "Model Radius:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "Descriptor Radius:", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "Descriptor Distance:", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "Reference Frame Radius: ", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "Bin Size:", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "Threshold:", 0, QApplication::UnicodeUTF8));
        clKeypoints->setText(QString());
        label_20->setText(QApplication::translate("MainWindow", "Display Keypoints:", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Min-Cut Segmentation", 0, QApplication::UnicodeUTF8));
        startMinCut->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Set the center of the object with Shift + Mouseclick", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Radius: ", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Sigma:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Source Weight:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Number of Neighbours: ", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Euclidean Cluster Segmentation", 0, QApplication::UnicodeUTF8));
        startCluster->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Cluster Tolerance:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Min. Cluster Size:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Max. Cluster Size:", 0, QApplication::UnicodeUTF8));
        menuDatei->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuExtras->setTitle(QApplication::translate("MainWindow", "Extras", 0, QApplication::UnicodeUTF8));
        menuHilfe->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        menuBearbeiten->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0, QApplication::UnicodeUTF8));
        mainToolBar->setWindowTitle(QApplication::translate("MainWindow", "Toolbar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
