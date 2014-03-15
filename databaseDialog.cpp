#include "databaseDialog.h"

DatabaseDialog::DatabaseDialog(QWidget *parent) : QDialog(parent), ui(new Ui::databaseDialog) {
    ui->setupUi(this);
    connect(ui->halloButton, SIGNAL(clicked()),this, SLOT(openModel()));
    connect(ui->openRDF, SIGNAL(clicked()), this, SLOT(openRDF()));


    //ui->tableView->horizontalHeader()->setResizeMode(QHeaderView::ResizeToContents);

}

void DatabaseDialog::initData(std::string databasePath)
{

    std::list<std::string> files = Util::readFileNames(databasePath,"meta");

    QStandardItemModel *model = new QStandardItemModel(files.size(),3,this); // 2 Rows, 3 Colums

    model->setHorizontalHeaderItem(0, new QStandardItem(QString("Name")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("RDF-URL")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("Features")));

    ui->tableView->setModel(model);
    ui->tableView->setColumnWidth( 0, 200);
    ui->tableView->setColumnWidth( 1, 300);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);

    int index = 0;
    std::list<std::string>::const_iterator it;
    for(it=files.begin(); it!=files.end(); ++it)
    {
        QString fileName = QString::fromStdString(*it).split(".",QString::SkipEmptyParts).at(0);
        QStandardItem *firstRow = new QStandardItem(fileName);

        QSettings settings(QString::fromStdString(databasePath) + "/" + fileName + ".meta", QSettings::IniFormat);
        QString countFeatures = settings.value("countFeatures", "unknown").toString();
        QStandardItem *thirdRow = new QStandardItem(countFeatures);

        QString url = settings.value("url", "unknown").toString();
        QStandardItem *secondRow = new QStandardItem(url);

        model->setItem(index,0,firstRow);
        model->setItem(index,1,secondRow);
        model->setItem(index,2,thirdRow);
        index++;

    }

}


void DatabaseDialog::openModel()
{
    QItemSelectionModel *select = ui->tableView->selectionModel();
    QModelIndexList indexList = select->selectedRows();
    if(indexList.size() == 1){
        int selectedRow = indexList.at(0).row();
        QString value = ui->tableView->model()->data(ui->tableView->model()->index(selectedRow,0)).toString();
        this->close();
        emit openSelectedModel(value);
    }

}

void DatabaseDialog::openRDF()
{
    QItemSelectionModel *select = ui->tableView->selectionModel();
    QModelIndexList indexList = select->selectedRows();
    if(indexList.size() == 1){
        int selectedRow = indexList.at(0).row();
        QString value = ui->tableView->model()->data(ui->tableView->model()->index(selectedRow,1)).toString();
        QDesktopServices::openUrl(QUrl(value));
    }
}
