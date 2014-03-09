#include "rest.h"


Rest::Rest() {
    srvAddress = "http://localhost:9000";
}

QtJson::JsonObject Rest::get(QString action){
    url.setUrl(srvAddress + "/" + action);
    request.setUrl(url);
    QNetworkReply* currentReply = networkManager.get(request);  // GET

    QEventLoop loop;
    QObject::connect(currentReply, SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();

    QString data = (QString)currentReply->readAll();
    bool ok;
    QtJson::JsonObject result = QtJson::parse(data,ok).toMap();
    if(!ok) {
        return result;
    } else  {
         return result;
    }
}

QtJson::JsonObject Rest::post(QString action, QtJson::JsonObject content) {
    url.setUrl(srvAddress + "/" + action);
    request.setUrl(url);

    QByteArray jsonString = QtJson::serialize(content);
    QByteArray postDataSize = QByteArray::number(jsonString.size());

    request.setRawHeader("Content-Type", "application/json");
    request.setRawHeader("Content-Length", postDataSize);
    QNetworkReply* currentReply = networkManager.post(request,jsonString);
    QEventLoop loop;
    QObject::connect(currentReply, SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();

    QString data = (QString)currentReply->readAll();
    bool ok;
    QtJson::JsonObject result = QtJson::parse(data,ok).toMap();
    if(!ok) {
        return result;
    } else  {
        return result;
    }

}
