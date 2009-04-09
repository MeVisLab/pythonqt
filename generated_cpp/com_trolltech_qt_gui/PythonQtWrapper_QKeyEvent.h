#ifndef PYTHONQTWRAPPER_QKEYEVENT_H
#define PYTHONQTWRAPPER_QKEYEVENT_H

#include <qevent.h>
#include <QObject>

#include <QVariant>
#include <qevent.h>

class PythonQtWrapper_QKeyEvent : public QObject
{ Q_OBJECT
public:
public slots:
QKeyEvent* new_QKeyEvent(QEvent::Type  type, int  key, Qt::KeyboardModifiers  modifiers, const QString&  text = QString(), bool  autorep = false, ushort  count = 1);
void delete_QKeyEvent(QKeyEvent* obj) { delete obj; } 
   int  count(QKeyEvent* theWrappedObject) const;
   QKeyEvent*  static_QKeyEvent_createExtendedKeyEvent(QEvent::Type  type, int  key, Qt::KeyboardModifiers  modifiers, unsigned int  nativeScanCode, unsigned int  nativeVirtualKey, unsigned int  nativeModifiers, const QString&  text = QString(), bool  autorep = false, ushort  count = 1);
   bool  hasExtendedInfo(QKeyEvent* theWrappedObject) const;
   bool  isAutoRepeat(QKeyEvent* theWrappedObject) const;
   int  key(QKeyEvent* theWrappedObject) const;
   bool  matches(QKeyEvent* theWrappedObject, QKeySequence::StandardKey  key) const;
   Qt::KeyboardModifiers  modifiers(QKeyEvent* theWrappedObject) const;
   unsigned int  nativeModifiers(QKeyEvent* theWrappedObject) const;
   unsigned int  nativeScanCode(QKeyEvent* theWrappedObject) const;
   unsigned int  nativeVirtualKey(QKeyEvent* theWrappedObject) const;
   QString  text(QKeyEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QKEYEVENT_H
