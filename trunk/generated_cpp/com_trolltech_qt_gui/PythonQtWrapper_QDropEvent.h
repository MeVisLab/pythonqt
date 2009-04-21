#ifndef PYTHONQTWRAPPER_QDROPEVENT_H
#define PYTHONQTWRAPPER_QDROPEVENT_H

#include <qevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qmimedata.h>
#include <qpoint.h>
#include <qwidget.h>

class PythonQtShell_QDropEvent : public QDropEvent
{
public:
    PythonQtShell_QDropEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::Drop):QDropEvent(pos, actions, data, buttons, modifiers, type),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QDropEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDropEvent* new_QDropEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::Drop);
void delete_QDropEvent(QDropEvent* obj) { delete obj; } 
   Qt::KeyboardModifiers  keyboardModifiers(QDropEvent* theWrappedObject) const;
   Qt::DropAction  proposedAction(QDropEvent* theWrappedObject) const;
   Qt::DropAction  dropAction(QDropEvent* theWrappedObject) const;
   void setDropAction(QDropEvent* theWrappedObject, Qt::DropAction  action);
   const QMimeData*  mimeData(QDropEvent* theWrappedObject) const;
   void acceptProposedAction(QDropEvent* theWrappedObject);
   Qt::DropActions  possibleActions(QDropEvent* theWrappedObject) const;
   QWidget*  source(QDropEvent* theWrappedObject) const;
   const QPoint&  pos(QDropEvent* theWrappedObject) const;
   Qt::MouseButtons  mouseButtons(QDropEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QDROPEVENT_H
