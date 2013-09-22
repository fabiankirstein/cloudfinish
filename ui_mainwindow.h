/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun 22. Sep 17:51:57 2013
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
#include <QtGui/QCommandLinkButton>
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
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QVTKWidget *vtkwidget;
    QTextBrowser *console;
    QWidget *widget;
    QGroupBox *rgGroupBox;
    QCommandLinkButton *startRegionGrowing;
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
    QGroupBox *groupBox;
    QPushButton *startGrouping;
    QTextEdit *clFilePath;
    QPushButton *clSetCloudButton;
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
    QMenuBar *menuBar;
    QMenu *menuDatei;
    QMenu *menuExtras;
    QMenu *menuHilfe;
    QMenu *menuBearbeiten;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(860, 1156);
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
        actionUser_Guide = new QAction(MainWindow);
        actionUser_Guide->setObjectName(QString::fromUtf8("actionUser_Guide"));
        iconOpenPointCloud = new QAction(MainWindow);
        iconOpenPointCloud->setObjectName(QString::fromUtf8("iconOpenPointCloud"));
        actionResetColor = new QAction(MainWindow);
        actionResetColor->setObjectName(QString::fromUtf8("actionResetColor"));
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
        rgGroupBox->setGeometry(QRect(10, 0, 281, 171));
        startRegionGrowing = new QCommandLinkButton(rgGroupBox);
        startRegionGrowing->setObjectName(QString::fromUtf8("startRegionGrowing"));
        startRegionGrowing->setGeometry(QRect(180, 130, 91, 41));
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
        rgCurvature->setMinimum(1);

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

        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 380, 281, 191));
        startGrouping = new QPushButton(groupBox);
        startGrouping->setObjectName(QString::fromUtf8("startGrouping"));
        startGrouping->setGeometry(QRect(180, 150, 75, 23));
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
        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 180, 281, 191));
        startMinCut = new QPushButton(groupBox_2);
        startMinCut->setObjectName(QString::fromUtf8("startMinCut"));
        startMinCut->setGeometry(QRect(200, 160, 75, 23));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 20, 261, 16));
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
        menuBar->addAction(menuHilfe->menuAction());
        menuDatei->addAction(actionOpenPointCloud);
        menuDatei->addAction(actionSavePointCloud);
        menuDatei->addSeparator();
        menuDatei->addAction(actionSavePNG);
        menuExtras->addAction(actionResetColor);
        menuHilfe->addAction(actionUser_Guide);
        menuHilfe->addAction(actionAbout);
        menuBearbeiten->addAction(actionUndo);
        mainToolBar->addAction(iconOpenPointCloud);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CloundFinish v0.1", 0, QApplication::UnicodeUTF8));
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
        rgGroupBox->setTitle(QApplication::translate("MainWindow", "Region Growing (Smoothness Contraint)", 0, QApplication::UnicodeUTF8));
        startRegionGrowing->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Curvature Threshold:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Smoothness Threshold: ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        rgSmothnessThres->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>bedfaer</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_2->setText(QApplication::translate("MainWindow", "Min. Cluster Size:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Max. Cluster Size:", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Classification", 0, QApplication::UnicodeUTF8));
        startGrouping->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        clSetCloudButton->setText(QApplication::translate("MainWindow", "Set Cloud", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Min-Cut", 0, QApplication::UnicodeUTF8));
        startMinCut->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Set the foreground with Shift + Mouseclick", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Radius: ", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Sigma:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Source Weight:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Number of Neighbours: ", 0, QApplication::UnicodeUTF8));
        menuDatei->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuExtras->setTitle(QApplication::translate("MainWindow", "Extras", 0, QApplication::UnicodeUTF8));
        menuHilfe->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        menuBearbeiten->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
