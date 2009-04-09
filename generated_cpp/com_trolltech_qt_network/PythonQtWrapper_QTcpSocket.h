#ifndef PYTHONQTWRAPPER_QTCPSOCKET_H
#define PYTHONQTWRAPPER_QTCPSOCKET_H

#include <qtcpsocket.h>
#include <QObject>

#include <QVariant>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qhostaddress.h>
#include <qlist.h>
#include <qnetworkproxy.h>
#include <qobject.h>
#include <qtcpsocket.h>

class PythonQtWrapper_QTcpSocket : public QObject
{ Q_OBJECT
public:
public slots:
QTcpSocket* new_QTcpSocket(QObject*  parent = 0);
void delete_QTcpSocket(QTcpSocket* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QTCPSOCKET_H
