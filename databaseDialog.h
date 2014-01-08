#ifndef DATABASEDIALOG_H
#define DATABASEDIALOG_H

#endif // DATABASEDIALOG_H

#include <QDialog>
#include <QStandardItemModel>
#include <QStandardItem>

#include <list>
#include <string>

#include "util.h"
#include "ui_database.h"

class DatabaseDialog : public QDialog, public Ui::databaseDialog {
    Q_OBJECT

private:
    Ui::databaseDialog *ui;

public:
    DatabaseDialog(QWidget * parent, std::string databasePath);


signals:
    void buttonClicked();

public slots:
    void sendSignal();

};
