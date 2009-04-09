#include "PythonQtWrapper_QUndoGroup.h"

#include <QVariant>
#include <qaction.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qundogroup.h>
#include <qundostack.h>

QUndoGroup* PythonQtWrapper_QUndoGroup::new_QUndoGroup(QObject*  parent)
{ 
return new QUndoGroup(parent); }

QUndoStack*  PythonQtWrapper_QUndoGroup::activeStack(QUndoGroup* theWrappedObject) const
{
return theWrappedObject->activeStack();
}

void PythonQtWrapper_QUndoGroup::addStack(QUndoGroup* theWrappedObject, QUndoStack*  stack)
{
theWrappedObject->addStack(stack);
}

bool  PythonQtWrapper_QUndoGroup::canRedo(QUndoGroup* theWrappedObject) const
{
return theWrappedObject->canRedo();
}

bool  PythonQtWrapper_QUndoGroup::canUndo(QUndoGroup* theWrappedObject) const
{
return theWrappedObject->canUndo();
}

QAction*  PythonQtWrapper_QUndoGroup::createRedoAction(QUndoGroup* theWrappedObject, QObject*  parent, const QString&  prefix) const
{
return theWrappedObject->createRedoAction(parent, prefix);
}

QAction*  PythonQtWrapper_QUndoGroup::createUndoAction(QUndoGroup* theWrappedObject, QObject*  parent, const QString&  prefix) const
{
return theWrappedObject->createUndoAction(parent, prefix);
}

bool  PythonQtWrapper_QUndoGroup::isClean(QUndoGroup* theWrappedObject) const
{
return theWrappedObject->isClean();
}

QString  PythonQtWrapper_QUndoGroup::redoText(QUndoGroup* theWrappedObject) const
{
return theWrappedObject->redoText();
}

void PythonQtWrapper_QUndoGroup::removeStack(QUndoGroup* theWrappedObject, QUndoStack*  stack)
{
theWrappedObject->removeStack(stack);
}

QList<QUndoStack* >  PythonQtWrapper_QUndoGroup::stacks(QUndoGroup* theWrappedObject) const
{
return theWrappedObject->stacks();
}

QString  PythonQtWrapper_QUndoGroup::undoText(QUndoGroup* theWrappedObject) const
{
return theWrappedObject->undoText();
}

