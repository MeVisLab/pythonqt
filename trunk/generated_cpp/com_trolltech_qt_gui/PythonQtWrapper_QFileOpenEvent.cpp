#include "PythonQtWrapper_QFileOpenEvent.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>

QFileOpenEvent* PythonQtWrapper_QFileOpenEvent::new_QFileOpenEvent(const QString&  file)
{ 
return new QFileOpenEvent(file); }

QString  PythonQtWrapper_QFileOpenEvent::file(QFileOpenEvent* theWrappedObject) const
{
  return ( theWrappedObject->file());
}

