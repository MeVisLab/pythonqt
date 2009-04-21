#ifndef PYTHONQTWRAPPER_QSHORTCUTEVENT_H
#define PYTHONQTWRAPPER_QSHORTCUTEVENT_H

#include <qevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qkeysequence.h>

class PythonQtShell_QShortcutEvent : public QShortcutEvent
{
public:
    PythonQtShell_QShortcutEvent(const QKeySequence&  key, int  id, bool  ambiguous = false):QShortcutEvent(key, id, ambiguous),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QShortcutEvent : public QObject
{ Q_OBJECT
public:
public slots:
QShortcutEvent* new_QShortcutEvent(const QKeySequence&  key, int  id, bool  ambiguous = false);
void delete_QShortcutEvent(QShortcutEvent* obj) { delete obj; } 
   bool  isAmbiguous(QShortcutEvent* theWrappedObject) const;
   const QKeySequence&  key(QShortcutEvent* theWrappedObject) const;
   int  shortcutId(QShortcutEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSHORTCUTEVENT_H
