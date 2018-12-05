#include "ssl.h"
#include <QtCore/QDebug>
#include <QtWebSockets/QWebSocket>
#include <QCoreApplication>
#include <chate.h>
#include "chate.cpp"




QT_USE_NAMESPACE

//! [constructor]
ssl::ssl(const QUrl &url, QObject *parent) :
    QObject(parent)

{
    connect(&m_webSocket, &QWebSocket::connected, this, &ssl::onConnected);
    connect(&m_webSocket, QOverload<const QList<QSslError>&>::of(&QWebSocket::sslErrors),
            this, &ssl::onSslErrors);
    m_webSocket.open(QUrl(url));
}
//! [constructor]

//! [onConnected]
void ssl::onConnected()
{
    qDebug() << "WebSocket connected";
    connect(&m_webSocket, &QWebSocket::textMessageReceived,
            this, &ssl::onTextMessageReceived);
    m_webSocket.sendTextMessage("test");
}
//! [onConnected]

//! [onTextMessageReceived]
void ssl::onTextMessageReceived(QString message)
{
   emit Mes(message);
}

void ssl::onSslErrors(const QList<QSslError> &errors)
{
    Q_UNUSED(errors);

    // WARNING: Never ignore SSL errors in production code.
    // The proper way to handle self-signed certificates is to add a custom root
    // to the CA store.

    m_webSocket.ignoreSslErrors();
}
//! [onTextMessageReceived]
void ssl::send(QString stri)
{
    m_webSocket.sendTextMessage(stri);
}
