#ifndef PYTHONQTWRAPPER_QABSTRACTMESSAGEHANDLER_H
#define PYTHONQTWRAPPER_QABSTRACTMESSAGEHANDLER_H

#include <qabstractmessagehandler.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractmessagehandler.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qsourcelocation.h>
#include <qurl.h>

class PythonQtShell_QAbstractMessageHandler : public QAbstractMessageHandler
{
public:

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void handleMessage(QtMsgType  type, const QString&  description, const QUrl&  identifier, const QSourceLocation&  sourceLocation);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAbstractMessageHandler : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QAbstractMessageHandler(QAbstractMessageHandler* obj) { delete obj; } 
   void message(QAbstractMessageHandler* theWrappedObject, QtMsgType  type, const QString&  description, const QUrl&  identifier = QUrl(), const QSourceLocation&  sourceLocation = QSourceLocation());
};

#endif // PYTHONQTWRAPPER_QABSTRACTMESSAGEHANDLER_H
