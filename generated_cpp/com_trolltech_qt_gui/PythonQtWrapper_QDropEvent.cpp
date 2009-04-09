#include "PythonQtWrapper_QDropEvent.h"

#include <QVariant>
#include <qmimedata.h>
#include <qpoint.h>
#include <qwidget.h>

QDropEvent* PythonQtWrapper_QDropEvent::new_QDropEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type)
{ 
return new QDropEvent(pos, actions, data, buttons, modifiers, type); }

void PythonQtWrapper_QDropEvent::acceptProposedAction(QDropEvent* theWrappedObject)
{
theWrappedObject->acceptProposedAction();
}

Qt::DropAction  PythonQtWrapper_QDropEvent::dropAction(QDropEvent* theWrappedObject) const
{
return theWrappedObject->dropAction();
}

Qt::KeyboardModifiers  PythonQtWrapper_QDropEvent::keyboardModifiers(QDropEvent* theWrappedObject) const
{
return theWrappedObject->keyboardModifiers();
}

const QMimeData*  PythonQtWrapper_QDropEvent::mimeData(QDropEvent* theWrappedObject) const
{
return theWrappedObject->mimeData();
}

Qt::MouseButtons  PythonQtWrapper_QDropEvent::mouseButtons(QDropEvent* theWrappedObject) const
{
return theWrappedObject->mouseButtons();
}

const QPoint&  PythonQtWrapper_QDropEvent::pos(QDropEvent* theWrappedObject) const
{
return theWrappedObject->pos();
}

Qt::DropActions  PythonQtWrapper_QDropEvent::possibleActions(QDropEvent* theWrappedObject) const
{
return theWrappedObject->possibleActions();
}

Qt::DropAction  PythonQtWrapper_QDropEvent::proposedAction(QDropEvent* theWrappedObject) const
{
return theWrappedObject->proposedAction();
}

void PythonQtWrapper_QDropEvent::setDropAction(QDropEvent* theWrappedObject, Qt::DropAction  action)
{
theWrappedObject->setDropAction(action);
}

QWidget*  PythonQtWrapper_QDropEvent::source(QDropEvent* theWrappedObject) const
{
return theWrappedObject->source();
}

