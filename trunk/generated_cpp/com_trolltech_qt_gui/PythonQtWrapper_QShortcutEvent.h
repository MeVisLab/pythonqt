#ifndef PYTHONQTWRAPPER_QSHORTCUTEVENT_H
#define PYTHONQTWRAPPER_QSHORTCUTEVENT_H

#include <qevent.h>
#include <QObject>

#include <QVariant>
#include <qkeysequence.h>

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
