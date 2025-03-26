#ifndef NETWORKSERVER_H
#define NETWORKSERVER_H

#include <QObject>

class networkServer : public QObject
{
    Q_OBJECT
public:
    explicit networkServer(QObject *parent = nullptr);

signals:
};

#endif // NETWORKSERVER_H
