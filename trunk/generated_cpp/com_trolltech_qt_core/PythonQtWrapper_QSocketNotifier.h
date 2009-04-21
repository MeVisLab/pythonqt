#ifndef PYTHONQTWRAPPER_QSOCKETNOTIFIER_H
#define PYTHONQTWRAPPER_QSOCKETNOTIFIER_H

#include <qsocketnotifier.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qsocketnotifier.h>

class PythonQtShell_QSocketNotifier : public QSocketNotifier
{
public:
    PythonQtShell_QSocketNotifier(int  socket, QSocketNotifier::Type  arg__2, QObject*  parent = 0):QSocketNotifier(socket, arg__2, parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSocketNotifier : public QSocketNotifier
{ public:
inline bool  event(QEvent*  arg__1) { return QSocketNotifier::event(arg__1); }
};

class PythonQtWrapper_QSocketNotifier : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  Read = QSocketNotifier::Read,   Write = QSocketNotifier::Write,   Exception = QSocketNotifier::Exception};
public slots:
QSocketNotifier* new_QSocketNotifier(int  socket, QSocketNotifier::Type  arg__2, QObject*  parent = 0);
void delete_QSocketNotifier(QSocketNotifier* obj) { delete obj; } 
   bool  event(QSocketNotifier* theWrappedObject, QEvent*  arg__1);
   int  socket(QSocketNotifier* theWrappedObject) const;
   bool  isEnabled(QSocketNotifier* theWrappedObject) const;
   QSocketNotifier::Type  type(QSocketNotifier* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSOCKETNOTIFIER_H
