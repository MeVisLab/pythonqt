#include "PythonQtWrapper_QShortcut.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qkeysequence.h>
#include <qlist.h>
#include <qobject.h>
#include <qwidget.h>

QShortcut* PythonQtWrapper_QShortcut::new_QShortcut(QWidget*  parent)
{ 
return new QShortcut(parent); }

QShortcut* PythonQtWrapper_QShortcut::new_QShortcut(const QKeySequence&  key, QWidget*  parent, const char*  member, const char*  ambiguousMember, Qt::ShortcutContext  context)
{ 
return new QShortcut(key, parent, member, ambiguousMember, context); }

bool  PythonQtWrapper_QShortcut::autoRepeat(QShortcut* theWrappedObject) const
{
return theWrappedObject->autoRepeat();
}

Qt::ShortcutContext  PythonQtWrapper_QShortcut::context(QShortcut* theWrappedObject)
{
return theWrappedObject->context();
}

int  PythonQtWrapper_QShortcut::id(QShortcut* theWrappedObject) const
{
return theWrappedObject->id();
}

bool  PythonQtWrapper_QShortcut::isEnabled(QShortcut* theWrappedObject) const
{
return theWrappedObject->isEnabled();
}

QKeySequence  PythonQtWrapper_QShortcut::key(QShortcut* theWrappedObject) const
{
return theWrappedObject->key();
}

QWidget*  PythonQtWrapper_QShortcut::parentWidget(QShortcut* theWrappedObject) const
{
return theWrappedObject->parentWidget();
}

void PythonQtWrapper_QShortcut::setAutoRepeat(QShortcut* theWrappedObject, bool  on)
{
theWrappedObject->setAutoRepeat(on);
}

void PythonQtWrapper_QShortcut::setContext(QShortcut* theWrappedObject, Qt::ShortcutContext  context)
{
theWrappedObject->setContext(context);
}

void PythonQtWrapper_QShortcut::setEnabled(QShortcut* theWrappedObject, bool  enable)
{
theWrappedObject->setEnabled(enable);
}

void PythonQtWrapper_QShortcut::setKey(QShortcut* theWrappedObject, const QKeySequence&  key)
{
theWrappedObject->setKey(key);
}

void PythonQtWrapper_QShortcut::setWhatsThis(QShortcut* theWrappedObject, const QString&  text)
{
theWrappedObject->setWhatsThis(text);
}

QString  PythonQtWrapper_QShortcut::whatsThis(QShortcut* theWrappedObject) const
{
return theWrappedObject->whatsThis();
}

