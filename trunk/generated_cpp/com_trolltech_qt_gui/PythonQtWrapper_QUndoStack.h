#ifndef PYTHONQTWRAPPER_QUNDOSTACK_H
#define PYTHONQTWRAPPER_QUNDOSTACK_H

#include <qundostack.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaction.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qundostack.h>

class PythonQtShell_QUndoStack : public QUndoStack
{
public:
    PythonQtShell_QUndoStack(QObject*  parent = 0):QUndoStack(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QUndoStack : public QObject
{ Q_OBJECT
public:
public slots:
QUndoStack* new_QUndoStack(QObject*  parent = 0);
void delete_QUndoStack(QUndoStack* obj) { delete obj; } 
   bool  canUndo(QUndoStack* theWrappedObject) const;
   QString  redoText(QUndoStack* theWrappedObject) const;
   QAction*  createRedoAction(QUndoStack* theWrappedObject, QObject*  parent, const QString&  prefix = QString()) const;
   void endMacro(QUndoStack* theWrappedObject);
   QString  undoText(QUndoStack* theWrappedObject) const;
   QString  text(QUndoStack* theWrappedObject, int  idx) const;
   QAction*  createUndoAction(QUndoStack* theWrappedObject, QObject*  parent, const QString&  prefix = QString()) const;
   bool  isActive(QUndoStack* theWrappedObject) const;
   int  index(QUndoStack* theWrappedObject) const;
   void beginMacro(QUndoStack* theWrappedObject, const QString&  text);
   const QUndoCommand*  command(QUndoStack* theWrappedObject, int  index) const;
   bool  canRedo(QUndoStack* theWrappedObject) const;
   void push(QUndoStack* theWrappedObject, QUndoCommand*  cmd);
   int  count(QUndoStack* theWrappedObject) const;
   int  cleanIndex(QUndoStack* theWrappedObject) const;
   void clear(QUndoStack* theWrappedObject);
   int  undoLimit(QUndoStack* theWrappedObject) const;
   bool  isClean(QUndoStack* theWrappedObject) const;
   void setUndoLimit(QUndoStack* theWrappedObject, int  limit);
};

#endif // PYTHONQTWRAPPER_QUNDOSTACK_H
