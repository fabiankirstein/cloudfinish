/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue 17. Sep 12:46:54 2013
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
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
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
    QAction *actionSave_Point_Cloud;
    QAction *actionExport;
    QAction *actionAbout;
    QAction *actionUser_Guide;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QVTKWidget *vtkwidget;
    QTextBrowser *console;
    QWidget *widget;
    QGroupBox *rgGroupBox;
    QCommandLinkButton *startRegionGrowing;
    QDoubleSpinBox *rgSmothnessThres;
    QLabel *label;
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
        MainWindow->resize(860, 536);
        actionOpenPointCloud = new QAction(MainWindow);
        actionOpenPointCloud->setObjectName(QString::fromUtf8("actionOpenPointCloud"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionSave_Point_Cloud = new QAction(MainWindow);
        actionSave_Point_Cloud->setObjectName(QString::fromUtf8("actionSave_Point_Cloud"));
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QString::fromUtf8("actionExport"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionUser_Guide = new QAction(MainWindow);
        actionUser_Guide->setObjectName(QString::fromUtf8("actionUser_Guide"));
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
        startRegionGrowing->setGeometry(QRect(176, 120, 91, 40));
        rgSmothnessThres = new QDoubleSpinBox(rgGroupBox);
        rgSmothnessThres->setObjectName(QString::fromUtf8("rgSmothnessThres"));
        rgSmothnessThres->setGeometry(QRect(190, 20, 71, 20));
        rgSmothnessThres->setMinimum(0.1);
        rgSmothnessThres->setMaximum(30);
        rgSmothnessThres->setValue(5);
        label = new QLabel(rgGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 131, 16));

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
        menuDatei->addAction(actionSave_Point_Cloud);
        menuDatei->addSeparator();
        menuDatei->addAction(actionExport);
        menuHilfe->addAction(actionUser_Guide);
        menuHilfe->addAction(actionAbout);
        menuBearbeiten->addAction(actionUndo);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CloundFinish v0.1", 0, QApplication::UnicodeUTF8));
        actionOpenPointCloud->setText(QApplication::translate("MainWindow", "Open Point Cloud", 0, QApplication::UnicodeUTF8));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", 0, QApplication::UnicodeUTF8));
        actionSave_Point_Cloud->setText(QApplication::translate("MainWindow", "Save Point Cloud", 0, QApplication::UnicodeUTF8));
        actionExport->setText(QApplication::translate("MainWindow", "Export", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        actionUser_Guide->setText(QApplication::translate("MainWindow", "User Guide", 0, QApplication::UnicodeUTF8));
        rgGroupBox->setTitle(QApplication::translate("MainWindow", "Region Growing", 0, QApplication::UnicodeUTF8));
        startRegionGrowing->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Smoothness Threshold", 0, QApplication::UnicodeUTF8));
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
