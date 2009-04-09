#include "PythonQtWrapper_QFileOpenEvent.h"

#include <QVariant>

QFileOpenEvent* PythonQtWrapper_QFileOpenEvent::new_QFileOpenEvent(const QString&  file)
{ 
return new QFileOpenEvent(file); }

QString  PythonQtWrapper_QFileOpenEvent::file(QFileOpenEvent* theWrappedObject) const
{
return theWrappedObject->file();
}

