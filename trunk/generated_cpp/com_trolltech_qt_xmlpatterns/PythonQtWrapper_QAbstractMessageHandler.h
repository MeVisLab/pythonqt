#ifndef PYTHONQTWRAPPER_QABSTRACTMESSAGEHANDLER_H
#define PYTHONQTWRAPPER_QABSTRACTMESSAGEHANDLER_H

#include <qabstractmessagehandler.h>
#include <QObject>

#include <QVariant>
#include <qabstractmessagehandler.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qsourcelocation.h>
#include <qurl.h>

class PythonQtWrapper_QAbstractMessageHandler : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QAbstractMessageHandler(QAbstractMessageHandler* obj) { delete obj; } 
   void message(QAbstractMessageHandler* theWrappedObject, QtMsgType  type, const QString&  description, const QUrl&  identifier = QUrl(), const QSourceLocation&  sourceLocation = QSourceLocation());
};

#endif // PYTHONQTWRAPPER_QABSTRACTMESSAGEHANDLER_H
