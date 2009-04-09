#include "PythonQtWrapper_QUndoStack.h"

#include <QVariant>
#include <qaction.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qundostack.h>

QUndoStack* PythonQtWrapper_QUndoStack::new_QUndoStack(QObject*  parent)
{ 
return new QUndoStack(parent); }

void PythonQtWrapper_QUndoStack::beginMacro(QUndoStack* theWrappedObject, const QString&  text)
{
theWrappedObject->beginMacro(text);
}

bool  PythonQtWrapper_QUndoStack::canRedo(QUndoStack* theWrappedObject) const
{
return theWrappedObject->canRedo();
}

bool  PythonQtWrapper_QUndoStack::canUndo(QUndoStack* theWrappedObject) const
{
return theWrappedObject->canUndo();
}

int  PythonQtWrapper_QUndoStack::cleanIndex(QUndoStack* theWrappedObject) const
{
return theWrappedObject->cleanIndex();
}

void PythonQtWrapper_QUndoStack::clear(QUndoStack* theWrappedObject)
{
theWrappedObject->clear();
}

const QUndoCommand*  PythonQtWrapper_QUndoStack::command(QUndoStack* theWrappedObject, int  index) const
{
return theWrappedObject->command(index);
}

int  PythonQtWrapper_QUndoStack::count(QUndoStack* theWrappedObject) const
{
return theWrappedObject->count();
}

QAction*  PythonQtWrapper_QUndoStack::createRedoAction(QUndoStack* theWrappedObject, QObject*  parent, const QString&  prefix) const
{
return theWrappedObject->createRedoAction(parent, prefix);
}

QAction*  PythonQtWrapper_QUndoStack::createUndoAction(QUndoStack* theWrappedObject, QObject*  parent, const QString&  prefix) const
{
return theWrappedObject->createUndoAction(parent, prefix);
}

void PythonQtWrapper_QUndoStack::endMacro(QUndoStack* theWrappedObject)
{
theWrappedObject->endMacro();
}

int  PythonQtWrapper_QUndoStack::index(QUndoStack* theWrappedObject) const
{
return theWrappedObject->index();
}

bool  PythonQtWrapper_QUndoStack::isActive(QUndoStack* theWrappedObject) const
{
return theWrappedObject->isActive();
}

bool  PythonQtWrapper_QUndoStack::isClean(QUndoStack* theWrappedObject) const
{
return theWrappedObject->isClean();
}

void PythonQtWrapper_QUndoStack::push(QUndoStack* theWrappedObject, QUndoCommand*  cmd)
{
theWrappedObject->push(cmd);
}

QString  PythonQtWrapper_QUndoStack::redoText(QUndoStack* theWrappedObject) const
{
return theWrappedObject->redoText();
}

void PythonQtWrapper_QUndoStack::setUndoLimit(QUndoStack* theWrappedObject, int  limit)
{
theWrappedObject->setUndoLimit(limit);
}

QString  PythonQtWrapper_QUndoStack::text(QUndoStack* theWrappedObject, int  idx) const
{
return theWrappedObject->text(idx);
}

int  PythonQtWrapper_QUndoStack::undoLimit(QUndoStack* theWrappedObject) const
{
return theWrappedObject->undoLimit();
}

QString  PythonQtWrapper_QUndoStack::undoText(QUndoStack* theWrappedObject) const
{
return theWrappedObject->undoText();
}

