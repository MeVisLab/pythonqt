#include "PythonQtWrapper_QShortcutEvent.h"

#include <QVariant>
#include <qkeysequence.h>

QShortcutEvent* PythonQtWrapper_QShortcutEvent::new_QShortcutEvent(const QKeySequence&  key, int  id, bool  ambiguous)
{ 
return new QShortcutEvent(key, id, ambiguous); }

bool  PythonQtWrapper_QShortcutEvent::isAmbiguous(QShortcutEvent* theWrappedObject) const
{
return theWrappedObject->isAmbiguous();
}

const QKeySequence&  PythonQtWrapper_QShortcutEvent::key(QShortcutEvent* theWrappedObject) const
{
return theWrappedObject->key();
}

int  PythonQtWrapper_QShortcutEvent::shortcutId(QShortcutEvent* theWrappedObject) const
{
return theWrappedObject->shortcutId();
}

