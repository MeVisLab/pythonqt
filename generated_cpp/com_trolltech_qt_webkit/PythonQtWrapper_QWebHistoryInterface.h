#ifndef PYTHONQTWRAPPER_QWEBHISTORYINTERFACE_H
#define PYTHONQTWRAPPER_QWEBHISTORYINTERFACE_H

#include <qwebhistoryinterface.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qwebhistoryinterface.h>

class PythonQtShell_QWebHistoryInterface : public QWebHistoryInterface
{
public:
    PythonQtShell_QWebHistoryInterface(QObject*  parent = 0):QWebHistoryInterface(parent),_wrapper(NULL) {};

virtual void addHistoryEntry(const QString&  url);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  historyContains(const QString&  url) const;
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebHistoryInterface : public QObject
{ Q_OBJECT
public:
public slots:
QWebHistoryInterface* new_QWebHistoryInterface(QObject*  parent = 0);
void delete_QWebHistoryInterface(QWebHistoryInterface* obj) { delete obj; } 
   QWebHistoryInterface*  static_QWebHistoryInterface_defaultInterface();
   void static_QWebHistoryInterface_setDefaultInterface(QWebHistoryInterface*  defaultInterface);
};

#endif // PYTHONQTWRAPPER_QWEBHISTORYINTERFACE_H
