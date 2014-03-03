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
