/********************************************************************************
** Form generated from reading UI file 'database.ui'
**
** Created: Tue 21. Jan 20:06:33 2014
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASE_H
#define UI_DATABASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>

QT_BEGIN_NAMESPACE

class Ui_databaseDialog
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *halloButton;
    QTableView *tableView;

    void setupUi(QDialog *databaseDialog)
    {
        if (databaseDialog->objectName().isEmpty())
            databaseDialog->setObjectName(QString::fromUtf8("databaseDialog"));
        databaseDialog->resize(900, 570);
        databaseDialog->setMinimumSize(QSize(900, 570));
        databaseDialog->setMaximumSize(QSize(900, 570));
        databaseDialog->setModal(false);
        buttonBox = new QDialogButtonBox(databaseDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(540, 530, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        halloButton = new QPushButton(databaseDialog);
        halloButton->setObjectName(QString::fromUtf8("halloButton"));
        halloButton->setGeometry(QRect(10, 530, 75, 23));
        tableView = new QTableView(databaseDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 10, 881, 511));

        retranslateUi(databaseDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), databaseDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), databaseDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(databaseDialog);
    } // setupUi

    void retranslateUi(QDialog *databaseDialog)
    {
        databaseDialog->setWindowTitle(QApplication::translate("databaseDialog", "Feature Database Manager", 0, QApplication::UnicodeUTF8));
        halloButton->setText(QApplication::translate("databaseDialog", "Open Model", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class databaseDialog: public Ui_databaseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASE_H
