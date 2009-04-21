#include "PythonQtWrapper_QDropEvent.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qmimedata.h>
#include <qpoint.h>
#include <qwidget.h>

QDropEvent* PythonQtWrapper_QDropEvent::new_QDropEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type)
{ 
return new PythonQtShell_QDropEvent(pos, actions, data, buttons, modifiers, type); }

Qt::KeyboardModifiers  PythonQtWrapper_QDropEvent::keyboardModifiers(QDropEvent* theWrappedObject) const
{
return  (*theWrappedObject).keyboardModifiers();
}

Qt::DropAction  PythonQtWrapper_QDropEvent::proposedAction(QDropEvent* theWrappedObject) const
{
return  (*theWrappedObject).proposedAction();
}

Qt::DropAction  PythonQtWrapper_QDropEvent::dropAction(QDropEvent* theWrappedObject) const
{
return  (*theWrappedObject).dropAction();
}

void PythonQtWrapper_QDropEvent::setDropAction(QDropEvent* theWrappedObject, Qt::DropAction  action)
{
 (*theWrappedObject).setDropAction(action);
}

const QMimeData*  PythonQtWrapper_QDropEvent::mimeData(QDropEvent* theWrappedObject) const
{
return  (*theWrappedObject).mimeData();
}

void PythonQtWrapper_QDropEvent::acceptProposedAction(QDropEvent* theWrappedObject)
{
 (*theWrappedObject).acceptProposedAction();
}

Qt::DropActions  PythonQtWrapper_QDropEvent::possibleActions(QDropEvent* theWrappedObject) const
{
return  (*theWrappedObject).possibleActions();
}

QWidget*  PythonQtWrapper_QDropEvent::source(QDropEvent* theWrappedObject) const
{
return  (*theWrappedObject).source();
}

const QPoint&  PythonQtWrapper_QDropEvent::pos(QDropEvent* theWrappedObject) const
{
return  (*theWrappedObject).pos();
}

Qt::MouseButtons  PythonQtWrapper_QDropEvent::mouseButtons(QDropEvent* theWrappedObject) const
{
return  (*theWrappedObject).mouseButtons();
}

