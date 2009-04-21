#include "PythonQtWrapper_QGraphicsSceneResizeEvent.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qsize.h>
#include <qwidget.h>

QGraphicsSceneResizeEvent* PythonQtWrapper_QGraphicsSceneResizeEvent::new_QGraphicsSceneResizeEvent()
{ 
return new QGraphicsSceneResizeEvent(); }

QSizeF  PythonQtWrapper_QGraphicsSceneResizeEvent::oldSize(QGraphicsSceneResizeEvent* theWrappedObject) const
{
return  (*theWrappedObject).oldSize();
}

QSizeF  PythonQtWrapper_QGraphicsSceneResizeEvent::newSize(QGraphicsSceneResizeEvent* theWrappedObject) const
{
return  (*theWrappedObject).newSize();
}

void PythonQtWrapper_QGraphicsSceneResizeEvent::setNewSize(QGraphicsSceneResizeEvent* theWrappedObject, const QSizeF&  size)
{
 (*theWrappedObject).setNewSize(size);
}

void PythonQtWrapper_QGraphicsSceneResizeEvent::setOldSize(QGraphicsSceneResizeEvent* theWrappedObject, const QSizeF&  size)
{
 (*theWrappedObject).setOldSize(size);
}

