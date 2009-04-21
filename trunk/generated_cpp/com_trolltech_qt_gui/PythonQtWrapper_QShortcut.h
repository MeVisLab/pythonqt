#ifndef PYTHONQTWRAPPER_QSHORTCUT_H
#define PYTHONQTWRAPPER_QSHORTCUT_H

#include <qshortcut.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qkeysequence.h>
#include <qlist.h>
#include <qobject.h>
#include <qwidget.h>

class PythonQtShell_QShortcut : public QShortcut
{
public:
    PythonQtShell_QShortcut(QWidget*  parent):QShortcut(parent),_wrapper(NULL) {};
    PythonQtShell_QShortcut(const QKeySequence&  key, QWidget*  parent, const char*  member = 0, const char*  ambiguousMember = 0, Qt::ShortcutContext  context = Qt::WindowShortcut):QShortcut(key, parent, member, ambiguousMember, context),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QShortcut : public QShortcut
{ public:
inline bool  event(QEvent*  e) { return QShortcut::event(e); }
};

class PythonQtWrapper_QShortcut : public QObject
{ Q_OBJECT
public:
public slots:
QShortcut* new_QShortcut(QWidget*  parent);
QShortcut* new_QShortcut(const QKeySequence&  key, QWidget*  parent, const char*  member = 0, const char*  ambiguousMember = 0, Qt::ShortcutContext  context = Qt::WindowShortcut);
void delete_QShortcut(QShortcut* obj) { delete obj; } 
   QWidget*  parentWidget(QShortcut* theWrappedObject) const;
   bool  event(QShortcut* theWrappedObject, QEvent*  e);
   bool  autoRepeat(QShortcut* theWrappedObject) const;
   void setContext(QShortcut* theWrappedObject, Qt::ShortcutContext  context);
   void setKey(QShortcut* theWrappedObject, const QKeySequence&  key);
   bool  isEnabled(QShortcut* theWrappedObject) const;
   void setAutoRepeat(QShortcut* theWrappedObject, bool  on);
   int  id(QShortcut* theWrappedObject) const;
   QKeySequence  key(QShortcut* theWrappedObject) const;
   QString  whatsThis(QShortcut* theWrappedObject) const;
   void setWhatsThis(QShortcut* theWrappedObject, const QString&  text);
   Qt::ShortcutContext  context(QShortcut* theWrappedObject);
   void setEnabled(QShortcut* theWrappedObject, bool  enable);
};

#endif // PYTHONQTWRAPPER_QSHORTCUT_H
