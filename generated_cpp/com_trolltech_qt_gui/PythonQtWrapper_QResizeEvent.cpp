#include "PythonQtWrapper_QResizeEvent.h"

#include <QVariant>
#include <qsize.h>

QResizeEvent* PythonQtWrapper_QResizeEvent::new_QResizeEvent(const QSize&  size, const QSize&  oldSize)
{ 
return new QResizeEvent(size, oldSize); }

const QSize&  PythonQtWrapper_QResizeEvent::oldSize(QResizeEvent* theWrappedObject) const
{
return theWrappedObject->oldSize();
}

const QSize&  PythonQtWrapper_QResizeEvent::size(QResizeEvent* theWrappedObject) const
{
return theWrappedObject->size();
}

