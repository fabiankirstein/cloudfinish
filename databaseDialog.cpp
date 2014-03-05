#include "databaseDialog.h"

DatabaseDialog::DatabaseDialog(QWidget *parent, std::string databasePath) : QDialog(parent), ui(new Ui::databaseDialog) {
    ui->setupUi(this);
    connect(ui->halloButton, SIGNAL(clicked()),this, SLOT(sendSignal()));

    this->databasePath = databasePath;


    //ui->tableView->horizontalHeader()->setResizeMode(QHeaderView::ResizeToContents);

}

void DatabaseDialog::initData()
{
    std::list<std::string> files = Util::readFileNames(databasePath,"meta");

    QStandardItemModel *model = new QStandardItemModel(files.size(),3,this); // 2 Rows, 3 Colums

    model->setHorizontalHeaderItem(0, new QStandardItem(QString("Name")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("Identifier")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("Features")));

    ui->tableView->setModel(model);
    ui->tableView->setColumnWidth( 0, 200);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);

    int index = 0;
    std::list<std::string>::const_iterator it;
    for(it=files.begin(); it!=files.end(); ++it)
    {
        QString fileName = QString::fromStdString(*it).split(".",QString::SkipEmptyParts).at(0);
        QStandardItem *firstRow = new QStandardItem(fileName);

        QSettings settings(QString::fromStdString(this->databasePath + "/" + fileName.toStdString() + ".meta"), QSettings::IniFormat);
        QString countFeatures = settings.value("countFeatures", "unknown").toString();
        QStandardItem *thirdRow = new QStandardItem(countFeatures);

        model->setItem(index,0,firstRow);
        model->setItem(index,2,thirdRow);
        index++;

    }

}


void DatabaseDialog::sendSignal()
{
    emit buttonClicked();
}
