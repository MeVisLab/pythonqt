#include "PythonQtWrapper_QDragMoveEvent.h"

#include <QVariant>
#include <qmimedata.h>
#include <qpoint.h>
#include <qrect.h>
#include <qwidget.h>

QDragMoveEvent* PythonQtWrapper_QDragMoveEvent::new_QDragMoveEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type)
{ 
return new QDragMoveEvent(pos, actions, data, buttons, modifiers, type); }

void PythonQtWrapper_QDragMoveEvent::accept(QDragMoveEvent* theWrappedObject, const QRect&  r)
{
theWrappedObject->accept(r);
}

QRect  PythonQtWrapper_QDragMoveEvent::answerRect(QDragMoveEvent* theWrappedObject) const
{
return theWrappedObject->answerRect();
}

void PythonQtWrapper_QDragMoveEvent::ignore(QDragMoveEvent* theWrappedObject, const QRect&  r)
{
theWrappedObject->ignore(r);
}

