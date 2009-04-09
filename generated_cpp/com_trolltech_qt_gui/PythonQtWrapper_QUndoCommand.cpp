#include "PythonQtWrapper_QUndoCommand.h"

#include <QVariant>
#include <qundostack.h>

QUndoCommand* PythonQtWrapper_QUndoCommand::new_QUndoCommand(QUndoCommand*  parent)
{ 
return new QUndoCommand(parent); }

QUndoCommand* PythonQtWrapper_QUndoCommand::new_QUndoCommand(const QString&  text, QUndoCommand*  parent)
{ 
return new QUndoCommand(text, parent); }

const QUndoCommand*  PythonQtWrapper_QUndoCommand::child(QUndoCommand* theWrappedObject, int  index) const
{
return theWrappedObject->child(index);
}

int  PythonQtWrapper_QUndoCommand::childCount(QUndoCommand* theWrappedObject) const
{
return theWrappedObject->childCount();
}

int  PythonQtWrapper_QUndoCommand::id(QUndoCommand* theWrappedObject) const
{
return theWrappedObject->id();
}

bool  PythonQtWrapper_QUndoCommand::mergeWith(QUndoCommand* theWrappedObject, const QUndoCommand*  other)
{
return theWrappedObject->mergeWith(other);
}

void PythonQtWrapper_QUndoCommand::redo(QUndoCommand* theWrappedObject)
{
theWrappedObject->redo();
}

void PythonQtWrapper_QUndoCommand::setText(QUndoCommand* theWrappedObject, const QString&  text)
{
theWrappedObject->setText(text);
}

QString  PythonQtWrapper_QUndoCommand::text(QUndoCommand* theWrappedObject) const
{
return theWrappedObject->text();
}

void PythonQtWrapper_QUndoCommand::undo(QUndoCommand* theWrappedObject)
{
theWrappedObject->undo();
}

