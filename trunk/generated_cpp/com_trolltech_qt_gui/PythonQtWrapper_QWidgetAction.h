#ifndef PYTHONQTWRAPPER_QWIDGETACTION_H
#define PYTHONQTWRAPPER_QWIDGETACTION_H

#include <qwidgetaction.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qactiongroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qkeysequence.h>
#include <qlist.h>
#include <qmenu.h>
#include <qobject.h>
#include <qwidget.h>
#include <qwidgetaction.h>

class PythonQtShell_QWidgetAction : public QWidgetAction
{
public:
    PythonQtShell_QWidgetAction(QObject*  parent):QWidgetAction(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual QWidget*  createWidget(QWidget*  parent);
virtual void customEvent(QEvent*  arg__1);
virtual void deleteWidget(QWidget*  widget);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWidgetAction : public QWidgetAction
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return QWidgetAction::event(arg__1); }
inline void promoted_deleteWidget(QWidget*  widget) { QWidgetAction::deleteWidget(widget); }
inline QWidget*  promoted_createWidget(QWidget*  parent) { return QWidgetAction::createWidget(parent); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QWidgetAction::eventFilter(arg__1, arg__2); }
};

class PythonQtWrapper_QWidgetAction : public QObject
{ Q_OBJECT
public:
public slots:
QWidgetAction* new_QWidgetAction(QObject*  parent);
void delete_QWidgetAction(QWidgetAction* obj) { delete obj; } 
   bool  event(QWidgetAction* theWrappedObject, QEvent*  arg__1);
   void setDefaultWidget(QWidgetAction* theWrappedObject, QWidget*  w);
   QWidget*  requestWidget(QWidgetAction* theWrappedObject, QWidget*  parent);
   void deleteWidget(QWidgetAction* theWrappedObject, QWidget*  widget);
   void releaseWidget(QWidgetAction* theWrappedObject, QWidget*  widget);
   QWidget*  defaultWidget(QWidgetAction* theWrappedObject) const;
   QWidget*  createWidget(QWidgetAction* theWrappedObject, QWidget*  parent);
   bool  eventFilter(QWidgetAction* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
};

#endif // PYTHONQTWRAPPER_QWIDGETACTION_H
