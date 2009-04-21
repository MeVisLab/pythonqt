#include "PythonQtWrapper_QActionEvent.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qaction.h>

QActionEvent* PythonQtWrapper_QActionEvent::new_QActionEvent(int  type, QAction*  action, QAction*  before)
{ 
return new QActionEvent(type, action, before); }

QAction*  PythonQtWrapper_QActionEvent::action(QActionEvent* theWrappedObject) const
{
return  (*theWrappedObject).action();
}

QAction*  PythonQtWrapper_QActionEvent::before(QActionEvent* theWrappedObject) const
{
return  (*theWrappedObject).before();
}

