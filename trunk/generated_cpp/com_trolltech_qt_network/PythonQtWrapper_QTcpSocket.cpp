#include "PythonQtWrapper_QTcpSocket.h"

#include <QVariant>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qhostaddress.h>
#include <qlist.h>
#include <qnetworkproxy.h>
#include <qobject.h>
#include <qtcpsocket.h>

QTcpSocket* PythonQtWrapper_QTcpSocket::new_QTcpSocket(QObject*  parent)
{ 
return new QTcpSocket(parent); }

