#include "PythonQtWrapper_QAbstractMessageHandler.h"

#include <QVariant>
#include <qabstractmessagehandler.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qsourcelocation.h>
#include <qurl.h>

void PythonQtWrapper_QAbstractMessageHandler::message(QAbstractMessageHandler* theWrappedObject, QtMsgType  type, const QString&  description, const QUrl&  identifier, const QSourceLocation&  sourceLocation)
{
theWrappedObject->message(type, description, identifier, sourceLocation);
}

