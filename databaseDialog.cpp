#include "databaseDialog.h"

DatabaseDialog::DatabaseDialog(QWidget *parent) : QDialog(parent), ui(new Ui::databaseDialog) {
    ui->setupUi(this);

    connect(ui->halloButton, SIGNAL(clicked()),this, SLOT(sendSignal()));

    QStandardItemModel *model = new QStandardItemModel(2,3,this); // 2 Rows, 3 Colums

    model->setHorizontalHeaderItem(0, new QStandardItem(QString("Column 1")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("Column 2")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("Column 3")));

    ui->tableView->setModel(model);

    ui->halloButton->setText("Hallo");
}


void DatabaseDialog::sendSignal()
{
    emit buttonClicked();
}
