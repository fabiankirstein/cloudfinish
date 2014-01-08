#include "databaseDialog.h"

DatabaseDialog::DatabaseDialog(QWidget *parent, std::string databasePath) : QDialog(parent), ui(new Ui::databaseDialog) {
    ui->setupUi(this);

    connect(ui->halloButton, SIGNAL(clicked()),this, SLOT(sendSignal()));

    std::list<std::string> files = Util::readFileNames(databasePath);

    QStandardItemModel *model = new QStandardItemModel(files.size(),3,this); // 2 Rows, 3 Colums

    model->setHorizontalHeaderItem(0, new QStandardItem(QString("Column 1")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("Column 2")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("Column 3")));

    ui->tableView->setModel(model);
    ui->tableView->setColumnWidth( 0, 200);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);

    int index = 0;
    std::list<std::string>::const_iterator it;
    for(it=files.begin(); it!=files.end(); ++it)
    {
        QStandardItem *firstRow = new QStandardItem(QString::fromStdString(*it));
        model->setItem(index,0,firstRow);
        index++;

    }


    //ui->tableView->horizontalHeader()->setResizeMode(QHeaderView::ResizeToContents);

}


void DatabaseDialog::sendSignal()
{
    emit buttonClicked();
}
