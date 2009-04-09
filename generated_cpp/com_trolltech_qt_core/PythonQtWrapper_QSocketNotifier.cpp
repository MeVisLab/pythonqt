#include "PythonQtWrapper_QSocketNotifier.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qsocketnotifier.h>

QSocketNotifier* PythonQtWrapper_QSocketNotifier::new_QSocketNotifier(int  socket, QSocketNotifier::Type  arg__2, QObject*  parent)
{ 
return new QSocketNotifier(socket, arg__2, parent); }

bool  PythonQtWrapper_QSocketNotifier::isEnabled(QSocketNotifier* theWrappedObject) const
{
return theWrappedObject->isEnabled();
}

int  PythonQtWrapper_QSocketNotifier::socket(QSocketNotifier* theWrappedObject) const
{
return theWrappedObject->socket();
}

QSocketNotifier::Type  PythonQtWrapper_QSocketNotifier::type(QSocketNotifier* theWrappedObject) const
{
return theWrappedObject->type();
}

