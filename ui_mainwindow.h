/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri 21. Feb 13:56:15 2014
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
#include <QtGui/QDockWidget>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
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
    QAction *actionObjectsDock;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QVTKWidget *vtkwidget;
    QTextBrowser *console;
    QMenuBar *menuBar;
    QMenu *menuDatei;
    QMenu *menuExtras;
    QMenu *menuHilfe;
    QMenu *menuBearbeiten;
    QMenu *menuView;
    QMenu *menuWindows;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *rgDockWidget;
    QWidget *dockWidgetContents;
    QPushButton *startRegionGrowing;
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
    QDockWidget *mcDockWidget;
    QWidget *dockWidgetContents_2;
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
    QPushButton *startMinCut;
    QDockWidget *ecDockWidget;
    QWidget *dockWidgetContents_3;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QDoubleSpinBox *eclTolerance;
    QLabel *label_10;
    QSpinBox *eclMinCluster;
    QLabel *label_11;
    QSpinBox *eclMaxCluster;
    QLabel *label_12;
    QPushButton *startCluster;
    QDockWidget *houghDockWidget;
    QWidget *dockWidgetContents_4;
    QTextEdit *clFilePath;
    QPushButton *clSetCloudButton;
    QWidget *formLayoutWidget_4;
    QFormLayout *formLayout_4;
    QLabel *label_13;
    QDoubleSpinBox *clSceneRadius;
    QLabel *label_14;
    QDoubleSpinBox *clModelRadius;
    QLabel *label_15;
    QLabel *label_16;
    QDoubleSpinBox *clDescriptorDistance;
    QLabel *label_17;
    QDoubleSpinBox *clReferenceRadius;
    QLabel *label_18;
    QDoubleSpinBox *clBinSize;
    QLabel *label_19;
    QDoubleSpinBox *clThreshold;
    QLabel *label_20;
    QCheckBox *clKeypoints;
    QDoubleSpinBox *clDescriptorRadius;
    QPushButton *startGrouping;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents_5;
    QPushButton *openDatabase;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *calcShotFeatures;
    QWidget *formLayoutWidget_5;
    QFormLayout *formLayout_5;
    QLabel *label_21;
    QDoubleSpinBox *fdShotSceneRadius;
    QLabel *label_22;
    QDoubleSpinBox *fdShotDescriptorRadius;
    QWidget *tab_2;
    QTextEdit *fdDatabasePath;
    QPushButton *fdSetDatabase;
    QLabel *fdMessage;
    QWidget *formLayoutWidget_6;
    QFormLayout *formLayout_6;
    QLineEdit *fdIdent;
    QLabel *label_23;
    QPushButton *fdAddToDatabase;
    QPushButton *fdStartIdentify;
    QWidget *formLayoutWidget_7;
    QFormLayout *formLayout_7;
    QDoubleSpinBox *fdDescriptorDistance;
    QLabel *label_24;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1141, 1386);
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
        actionObjectsDock = new QAction(MainWindow);
        actionObjectsDock->setObjectName(QString::fromUtf8("actionObjectsDock"));
        actionObjectsDock->setCheckable(true);
        actionObjectsDock->setChecked(true);
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

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1141, 21));
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
        menuWindows = new QMenu(menuBar);
        menuWindows->setObjectName(QString::fromUtf8("menuWindows"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        rgDockWidget = new QDockWidget(MainWindow);
        rgDockWidget->setObjectName(QString::fromUtf8("rgDockWidget"));
        rgDockWidget->setMinimumSize(QSize(280, 180));
        rgDockWidget->setMaximumSize(QSize(300, 180));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        startRegionGrowing = new QPushButton(dockWidgetContents);
        startRegionGrowing->setObjectName(QString::fromUtf8("startRegionGrowing"));
        startRegionGrowing->setGeometry(QRect(190, 120, 75, 23));
        formLayoutWidget = new QWidget(dockWidgetContents);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 261, 101));
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

        rgDockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), rgDockWidget);
        mcDockWidget = new QDockWidget(MainWindow);
        mcDockWidget->setObjectName(QString::fromUtf8("mcDockWidget"));
        mcDockWidget->setMinimumSize(QSize(280, 200));
        mcDockWidget->setMaximumSize(QSize(280, 200));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        label_5 = new QLabel(dockWidgetContents_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 0, 261, 16));
        formLayoutWidget_2 = new QWidget(dockWidgetContents_2);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(10, 20, 261, 111));
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

        startMinCut = new QPushButton(dockWidgetContents_2);
        startMinCut->setObjectName(QString::fromUtf8("startMinCut"));
        startMinCut->setGeometry(QRect(190, 140, 75, 23));
        mcDockWidget->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), mcDockWidget);
        ecDockWidget = new QDockWidget(MainWindow);
        ecDockWidget->setObjectName(QString::fromUtf8("ecDockWidget"));
        ecDockWidget->setMinimumSize(QSize(280, 160));
        ecDockWidget->setMaximumSize(QSize(280, 160));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        formLayoutWidget_3 = new QWidget(dockWidgetContents_3);
        formLayoutWidget_3->setObjectName(QString::fromUtf8("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(10, 10, 261, 81));
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

        startCluster = new QPushButton(dockWidgetContents_3);
        startCluster->setObjectName(QString::fromUtf8("startCluster"));
        startCluster->setGeometry(QRect(190, 100, 75, 23));
        ecDockWidget->setWidget(dockWidgetContents_3);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), ecDockWidget);
        houghDockWidget = new QDockWidget(MainWindow);
        houghDockWidget->setObjectName(QString::fromUtf8("houghDockWidget"));
        houghDockWidget->setMinimumSize(QSize(280, 320));
        houghDockWidget->setMaximumSize(QSize(280, 320));
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QString::fromUtf8("dockWidgetContents_4"));
        clFilePath = new QTextEdit(dockWidgetContents_4);
        clFilePath->setObjectName(QString::fromUtf8("clFilePath"));
        clFilePath->setGeometry(QRect(10, 10, 181, 21));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(clFilePath->sizePolicy().hasHeightForWidth());
        clFilePath->setSizePolicy(sizePolicy1);
        clFilePath->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        clFilePath->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        clFilePath->setTabChangesFocus(true);
        clFilePath->setLineWrapMode(QTextEdit::NoWrap);
        clFilePath->setReadOnly(true);
        clSetCloudButton = new QPushButton(dockWidgetContents_4);
        clSetCloudButton->setObjectName(QString::fromUtf8("clSetCloudButton"));
        clSetCloudButton->setGeometry(QRect(200, 10, 75, 23));
        formLayoutWidget_4 = new QWidget(dockWidgetContents_4);
        formLayoutWidget_4->setObjectName(QString::fromUtf8("formLayoutWidget_4"));
        formLayoutWidget_4->setGeometry(QRect(10, 40, 261, 216));
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

        label_19 = new QLabel(formLayoutWidget_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout_4->setWidget(6, QFormLayout::LabelRole, label_19);

        clThreshold = new QDoubleSpinBox(formLayoutWidget_4);
        clThreshold->setObjectName(QString::fromUtf8("clThreshold"));
        clThreshold->setMinimum(-1);
        clThreshold->setSingleStep(0.1);
        clThreshold->setValue(-0.5);

        formLayout_4->setWidget(6, QFormLayout::FieldRole, clThreshold);

        label_20 = new QLabel(formLayoutWidget_4);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        formLayout_4->setWidget(7, QFormLayout::LabelRole, label_20);

        clKeypoints = new QCheckBox(formLayoutWidget_4);
        clKeypoints->setObjectName(QString::fromUtf8("clKeypoints"));
        clKeypoints->setChecked(true);
        clKeypoints->setTristate(false);

        formLayout_4->setWidget(7, QFormLayout::FieldRole, clKeypoints);

        clDescriptorRadius = new QDoubleSpinBox(formLayoutWidget_4);
        clDescriptorRadius->setObjectName(QString::fromUtf8("clDescriptorRadius"));
        clDescriptorRadius->setMinimum(0.01);
        clDescriptorRadius->setSingleStep(0.1);
        clDescriptorRadius->setValue(0.1);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, clDescriptorRadius);

        startGrouping = new QPushButton(dockWidgetContents_4);
        startGrouping->setObjectName(QString::fromUtf8("startGrouping"));
        startGrouping->setGeometry(QRect(190, 260, 75, 23));
        houghDockWidget->setWidget(dockWidgetContents_4);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), houghDockWidget);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidget->setEnabled(true);
        dockWidget->setMinimumSize(QSize(280, 38));
        dockWidget->setMaximumSize(QSize(280, 524287));
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QString::fromUtf8("dockWidgetContents_5"));
        openDatabase = new QPushButton(dockWidgetContents_5);
        openDatabase->setObjectName(QString::fromUtf8("openDatabase"));
        openDatabase->setGeometry(QRect(10, 40, 181, 23));
        tabWidget = new QTabWidget(dockWidgetContents_5);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 80, 281, 131));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        calcShotFeatures = new QPushButton(tab);
        calcShotFeatures->setObjectName(QString::fromUtf8("calcShotFeatures"));
        calcShotFeatures->setGeometry(QRect(150, 70, 111, 23));
        formLayoutWidget_5 = new QWidget(tab);
        formLayoutWidget_5->setObjectName(QString::fromUtf8("formLayoutWidget_5"));
        formLayoutWidget_5->setGeometry(QRect(10, 10, 251, 51));
        formLayout_5 = new QFormLayout(formLayoutWidget_5);
        formLayout_5->setSpacing(6);
        formLayout_5->setContentsMargins(11, 11, 11, 11);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(formLayoutWidget_5);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_21);

        fdShotSceneRadius = new QDoubleSpinBox(formLayoutWidget_5);
        fdShotSceneRadius->setObjectName(QString::fromUtf8("fdShotSceneRadius"));
        fdShotSceneRadius->setDecimals(3);
        fdShotSceneRadius->setMinimum(0.01);
        fdShotSceneRadius->setSingleStep(0.1);
        fdShotSceneRadius->setValue(0.4);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, fdShotSceneRadius);

        label_22 = new QLabel(formLayoutWidget_5);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_22);

        fdShotDescriptorRadius = new QDoubleSpinBox(formLayoutWidget_5);
        fdShotDescriptorRadius->setObjectName(QString::fromUtf8("fdShotDescriptorRadius"));
        fdShotDescriptorRadius->setMinimum(0.01);
        fdShotDescriptorRadius->setSingleStep(0.1);
        fdShotDescriptorRadius->setValue(0.1);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, fdShotDescriptorRadius);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        fdDatabasePath = new QTextEdit(dockWidgetContents_5);
        fdDatabasePath->setObjectName(QString::fromUtf8("fdDatabasePath"));
        fdDatabasePath->setGeometry(QRect(10, 10, 181, 21));
        sizePolicy1.setHeightForWidth(fdDatabasePath->sizePolicy().hasHeightForWidth());
        fdDatabasePath->setSizePolicy(sizePolicy1);
        fdDatabasePath->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        fdDatabasePath->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        fdDatabasePath->setTabChangesFocus(true);
        fdDatabasePath->setLineWrapMode(QTextEdit::NoWrap);
        fdDatabasePath->setReadOnly(true);
        fdSetDatabase = new QPushButton(dockWidgetContents_5);
        fdSetDatabase->setObjectName(QString::fromUtf8("fdSetDatabase"));
        fdSetDatabase->setGeometry(QRect(200, 10, 75, 23));
        fdMessage = new QLabel(dockWidgetContents_5);
        fdMessage->setObjectName(QString::fromUtf8("fdMessage"));
        fdMessage->setGeometry(QRect(10, 220, 261, 16));
        formLayoutWidget_6 = new QWidget(dockWidgetContents_5);
        formLayoutWidget_6->setObjectName(QString::fromUtf8("formLayoutWidget_6"));
        formLayoutWidget_6->setGeometry(QRect(10, 250, 261, 31));
        formLayout_6 = new QFormLayout(formLayoutWidget_6);
        formLayout_6->setSpacing(6);
        formLayout_6->setContentsMargins(11, 11, 11, 11);
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        formLayout_6->setContentsMargins(0, 0, 0, 0);
        fdIdent = new QLineEdit(formLayoutWidget_6);
        fdIdent->setObjectName(QString::fromUtf8("fdIdent"));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, fdIdent);

        label_23 = new QLabel(formLayoutWidget_6);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_23);

        fdAddToDatabase = new QPushButton(dockWidgetContents_5);
        fdAddToDatabase->setObjectName(QString::fromUtf8("fdAddToDatabase"));
        fdAddToDatabase->setEnabled(false);
        fdAddToDatabase->setGeometry(QRect(164, 280, 111, 23));
        fdStartIdentify = new QPushButton(dockWidgetContents_5);
        fdStartIdentify->setObjectName(QString::fromUtf8("fdStartIdentify"));
        fdStartIdentify->setGeometry(QRect(10, 350, 75, 23));
        formLayoutWidget_7 = new QWidget(dockWidgetContents_5);
        formLayoutWidget_7->setObjectName(QString::fromUtf8("formLayoutWidget_7"));
        formLayoutWidget_7->setGeometry(QRect(10, 310, 261, 22));
        formLayout_7 = new QFormLayout(formLayoutWidget_7);
        formLayout_7->setSpacing(6);
        formLayout_7->setContentsMargins(11, 11, 11, 11);
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        formLayout_7->setContentsMargins(0, 0, 0, 0);
        fdDescriptorDistance = new QDoubleSpinBox(formLayoutWidget_7);
        fdDescriptorDistance->setObjectName(QString::fromUtf8("fdDescriptorDistance"));
        fdDescriptorDistance->setMinimum(0.01);
        fdDescriptorDistance->setMaximum(0.99);
        fdDescriptorDistance->setSingleStep(0.01);
        fdDescriptorDistance->setValue(0.25);

        formLayout_7->setWidget(0, QFormLayout::FieldRole, fdDescriptorDistance);

        label_24 = new QLabel(formLayoutWidget_7);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_24);

        dockWidget->setWidget(dockWidgetContents_5);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

        menuBar->addAction(menuDatei->menuAction());
        menuBar->addAction(menuBearbeiten->menuAction());
        menuBar->addAction(menuExtras->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuWindows->menuAction());
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
        menuWindows->addAction(actionObjectsDock);
        mainToolBar->addAction(iconOpenPointCloud);
        mainToolBar->addAction(iconSavePNG);
        mainToolBar->addAction(iconSavePointCloud);
        mainToolBar->addSeparator();
        mainToolBar->addAction(iconUndo);
        mainToolBar->addAction(iconResetColor);
        mainToolBar->addSeparator();
        mainToolBar->addAction(iconAbout);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


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
        actionObjectsDock->setText(QApplication::translate("MainWindow", "Objects", 0, QApplication::UnicodeUTF8));
        menuDatei->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuExtras->setTitle(QApplication::translate("MainWindow", "Extras", 0, QApplication::UnicodeUTF8));
        menuHilfe->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        menuBearbeiten->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0, QApplication::UnicodeUTF8));
        menuWindows->setTitle(QApplication::translate("MainWindow", "Windows", 0, QApplication::UnicodeUTF8));
        mainToolBar->setWindowTitle(QApplication::translate("MainWindow", "Toolbar", 0, QApplication::UnicodeUTF8));
        rgDockWidget->setWindowTitle(QApplication::translate("MainWindow", " Region Growing Segmentation (Smoothness Constraint)", 0, QApplication::UnicodeUTF8));
        startRegionGrowing->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Curvature Threshold:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Smoothness Threshold: ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        rgSmothnessThres->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>bedfaer</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_2->setText(QApplication::translate("MainWindow", "Min. Cluster Size:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Max. Cluster Size:", 0, QApplication::UnicodeUTF8));
        mcDockWidget->setWindowTitle(QApplication::translate("MainWindow", "Min-Cut Segmentation", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Set the center of the object with Shift + Mouseclick", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Radius: ", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Sigma:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Source Weight:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Number of Neighbours: ", 0, QApplication::UnicodeUTF8));
        startMinCut->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        ecDockWidget->setWindowTitle(QApplication::translate("MainWindow", "Euclidean Cluster Segmentation", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Cluster Tolerance:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Min. Cluster Size:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Max. Cluster Size:", 0, QApplication::UnicodeUTF8));
        startCluster->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        houghDockWidget->setWindowTitle(QApplication::translate("MainWindow", "Recognition with Hough3D", 0, QApplication::UnicodeUTF8));
        clSetCloudButton->setText(QApplication::translate("MainWindow", "Set Model", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "Scene Radius:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "Model Radius:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "Descriptor Radius:", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "Descriptor Distance:", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "Reference Frame Radius: ", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "Bin Size:", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "Threshold:", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "Display Keypoints:", 0, QApplication::UnicodeUTF8));
        clKeypoints->setText(QString());
        startGrouping->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        startGrouping->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", 0, QApplication::UnicodeUTF8));
        dockWidget->setWindowTitle(QApplication::translate("MainWindow", "Feature Database", 0, QApplication::UnicodeUTF8));
        openDatabase->setText(QApplication::translate("MainWindow", "Open Database Manager", 0, QApplication::UnicodeUTF8));
        calcShotFeatures->setText(QApplication::translate("MainWindow", "Calculate Features", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindow", "Radius:", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("MainWindow", "Descriptor Radius:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "SHOT352", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "FPFH", 0, QApplication::UnicodeUTF8));
        fdSetDatabase->setText(QApplication::translate("MainWindow", "Set DB", 0, QApplication::UnicodeUTF8));
        fdMessage->setText(QApplication::translate("MainWindow", "No Feature Descriptors calculated yet.", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("MainWindow", "Identifier:", 0, QApplication::UnicodeUTF8));
        fdAddToDatabase->setText(QApplication::translate("MainWindow", "Add to Database", 0, QApplication::UnicodeUTF8));
        fdStartIdentify->setText(QApplication::translate("MainWindow", "Identify", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("MainWindow", "Descriptor Distance:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
