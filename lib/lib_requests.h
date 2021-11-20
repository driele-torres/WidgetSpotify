#ifndef LIB_REQUESTS_H
#define LIB_REQUESTS_H

#include <QObject>
#include <QVariant>
#include <QDateTime>
#include <QJsonDocument>

namespace lib {
    class Requests: public QObject
    {
        Q_OBJECT
    public:
        static Requests& instance();

    QVariant search(const QString q);
    QVariant markets();
    QVariant genreSeeds();
    QVariant categories();

//    {

//    country

//      "categories": {

//        "href": "https://api.spotify.com/v1/me/shows?offset=0&limit=20\n",

//        "items": [

//          {}

//        ],

//        "limit": 20,

//        "next": "https://api.spotify.com/v1/me/shows?offset=1&limit=1",

//        "offset": 0,

//        "previous": "https://api.spotify.com/v1/me/shows?offset=1&limit=1",

//        "total": 4

//      }

//    }

    private:
        explicit Requests(QObject *parent = nullptr): QObject(parent){}
        ~Requests(){}

        QVariant baseRequest(QByteArray route);

        bool getToken();
        bool isTokenValid();
        bool checkTokenValid();

        QByteArray  _token;
        QDateTime   _validation;
        QVariantMap _accessToken;
    };
}
#endif // LIB_REQUESTS_H




