#ifndef SSL_H
#define SSL_H


#include <QtCore/QObject>
#include <QtWebSockets/QWebSocket>
#include <QtNetwork/QSslError>
#include <QtCore/QList>
#include <QtCore/QString>
#include <QtCore/QUrl>

QT_FORWARD_DECLARE_CLASS(QWebSocket)

class ssl : public QObject
{
    Q_OBJECT
public:
    explicit ssl(const QUrl &url, QObject *parent = nullptr);
    void send(QString stri);

private Q_SLOTS:
    void onConnected();
    void onTextMessageReceived(QString message);
    void onSslErrors(const QList<QSslError> &errors);

signals:
    void Mes(QString str);


private:
    QWebSocket m_webSocket;
};
#endif // SSL_H
