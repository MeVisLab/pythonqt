#ifndef PYTHONQTWRAPPER_QSOCKETNOTIFIER_H
#define PYTHONQTWRAPPER_QSOCKETNOTIFIER_H

#include <qsocketnotifier.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qsocketnotifier.h>

class PythonQtWrapper_QSocketNotifier : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  Read = QSocketNotifier::Read,   Write = QSocketNotifier::Write,   Exception = QSocketNotifier::Exception};
public slots:
QSocketNotifier* new_QSocketNotifier(int  socket, QSocketNotifier::Type  arg__2, QObject*  parent = 0);
void delete_QSocketNotifier(QSocketNotifier* obj) { delete obj; } 
   bool  isEnabled(QSocketNotifier* theWrappedObject) const;
   int  socket(QSocketNotifier* theWrappedObject) const;
   QSocketNotifier::Type  type(QSocketNotifier* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSOCKETNOTIFIER_H
