#ifndef PYTHONQTWRAPPER_QACCESSIBLEWIDGETEX_H
#define PYTHONQTWRAPPER_QACCESSIBLEWIDGETEX_H

#include <qaccessiblewidget.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaccessible.h>
#include <qaccessiblewidget.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>
#include <qwidget.h>

class PythonQtShell_QAccessibleWidgetEx : public QAccessibleWidgetEx
{
public:
    PythonQtShell_QAccessibleWidgetEx(QWidget*  o, QAccessible::Role  r = QAccessible::Client, const QString&  name = QString()):QAccessibleWidgetEx(o, r, name),_wrapper(NULL) {};

virtual QString  actionText(int  action, QAccessible::Text  t, int  child) const;
virtual int  childAt(int  x, int  y) const;
virtual int  childCount() const;
virtual bool  doAction(int  action, int  child, const QList<QVariant >&  params);
virtual int  indexOfChild(const QAccessibleInterface*  child) const;
virtual QVariant  invokeMethodEx(QAccessible::Method  method, int  child, const QList<QVariant >&  params);
virtual bool  isValid() const;
virtual int  navigate(QAccessible::RelationFlag  rel, int  entry, QAccessibleInterface**  target) const;
virtual QObject*  object() const;
virtual QRect  rect(int  child) const;
virtual QAccessible::Relation  relationTo(int  child, const QAccessibleInterface*  other, int  otherChild) const;
virtual QAccessible::Role  role(int  child) const;
virtual void setText(QAccessible::Text  t, int  child, const QString&  text);
virtual QAccessible::State  state(int  child) const;
virtual QString  text(QAccessible::Text  t, int  child) const;
virtual int  userActionCount(int  child) const;
virtual QVariant  virtual_hook(const QVariant&  data);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAccessibleWidgetEx : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleWidgetEx* new_QAccessibleWidgetEx(QWidget*  o, QAccessible::Role  r = QAccessible::Client, const QString&  name = QString());
   int  childCount(QAccessibleWidgetEx* theWrappedObject) const;
   QRect  rect(QAccessibleWidgetEx* theWrappedObject, int  child) const;
   QAccessible::Role  role(QAccessibleWidgetEx* theWrappedObject, int  child) const;
   QString  actionText(QAccessibleWidgetEx* theWrappedObject, int  action, QAccessible::Text  t, int  child) const;
   bool  doAction(QAccessibleWidgetEx* theWrappedObject, int  action, int  child, const QList<QVariant >&  params);
   int  navigate(QAccessibleWidgetEx* theWrappedObject, QAccessible::RelationFlag  rel, int  entry, QAccessibleInterface**  target) const;
   QAccessible::Relation  relationTo(QAccessibleWidgetEx* theWrappedObject, int  child, const QAccessibleInterface*  other, int  otherChild) const;
   int  indexOfChild(QAccessibleWidgetEx* theWrappedObject, const QAccessibleInterface*  child) const;
   QString  text(QAccessibleWidgetEx* theWrappedObject, QAccessible::Text  t, int  child) const;
   int  childAt(QAccessibleWidgetEx* theWrappedObject, int  x, int  y) const;
   QVariant  invokeMethodEx(QAccessibleWidgetEx* theWrappedObject, QAccessible::Method  method, int  child, const QList<QVariant >&  params);
   QAccessible::State  state(QAccessibleWidgetEx* theWrappedObject, int  child) const;
};

#endif // PYTHONQTWRAPPER_QACCESSIBLEWIDGETEX_H
