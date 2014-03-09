#ifndef REST_H
#define REST_H

#include <QString>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QEventLoop>
#include <QObject>

#include "json.h"

class Rest {

    QNetworkAccessManager networkManager;
    QNetworkRequest request;
    QUrl url;
    QString srvAddress;

public:
    Rest();
    QtJson::JsonObject get(QString action);
    QtJson::JsonObject post(QString action, QtJson::JsonObject content);

};


#endif // REST_H
