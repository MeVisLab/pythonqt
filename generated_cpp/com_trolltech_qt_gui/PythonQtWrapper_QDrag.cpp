#include "PythonQtWrapper_QDrag.h"

#include <QPixmap>
#include <QPoint>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdrag.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qwidget.h>

QDrag* PythonQtWrapper_QDrag::new_QDrag(QWidget*  dragSource)
{ 
return new QDrag(dragSource); }

Qt::DropAction  PythonQtWrapper_QDrag::exec(QDrag* theWrappedObject, Qt::DropActions  supportedActions)
{
return theWrappedObject->exec(supportedActions);
}

Qt::DropAction  PythonQtWrapper_QDrag::exec(QDrag* theWrappedObject, Qt::DropActions  supportedActions, Qt::DropAction  defaultAction)
{
return theWrappedObject->exec(supportedActions, defaultAction);
}

QPoint  PythonQtWrapper_QDrag::hotSpot(QDrag* theWrappedObject) const
{
return theWrappedObject->hotSpot();
}

QMimeData*  PythonQtWrapper_QDrag::mimeData(QDrag* theWrappedObject) const
{
return theWrappedObject->mimeData();
}

QPixmap  PythonQtWrapper_QDrag::pixmap(QDrag* theWrappedObject) const
{
return theWrappedObject->pixmap();
}

void PythonQtWrapper_QDrag::setDragCursor(QDrag* theWrappedObject, const QPixmap&  cursor, Qt::DropAction  action)
{
theWrappedObject->setDragCursor(cursor, action);
}

void PythonQtWrapper_QDrag::setHotSpot(QDrag* theWrappedObject, const QPoint&  hotspot)
{
theWrappedObject->setHotSpot(hotspot);
}

void PythonQtWrapper_QDrag::setMimeData(QDrag* theWrappedObject, QMimeData*  data)
{
theWrappedObject->setMimeData(data);
}

void PythonQtWrapper_QDrag::setPixmap(QDrag* theWrappedObject, const QPixmap&  arg__1)
{
theWrappedObject->setPixmap(arg__1);
}

QWidget*  PythonQtWrapper_QDrag::source(QDrag* theWrappedObject) const
{
return theWrappedObject->source();
}

QWidget*  PythonQtWrapper_QDrag::target(QDrag* theWrappedObject) const
{
return theWrappedObject->target();
}

