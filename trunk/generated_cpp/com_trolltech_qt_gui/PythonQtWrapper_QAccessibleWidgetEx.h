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

class PythonQtPublicPromoter_QAccessibleWidgetEx : public QAccessibleWidgetEx
{ public:
inline QAccessible::Role  promoted_role(int  child) const { return QAccessibleWidgetEx::role(child); }
inline QString  promoted_actionText(int  action, QAccessible::Text  t, int  child) const { return QAccessibleWidgetEx::actionText(action, t, child); }
inline bool  promoted_doAction(int  action, int  child, const QList<QVariant >&  params) { return QAccessibleWidgetEx::doAction(action, child, params); }
inline int  promoted_navigate(QAccessible::RelationFlag  rel, int  entry, QAccessibleInterface**  target) const { return QAccessibleWidgetEx::navigate(rel, entry, target); }
inline QAccessible::Relation  promoted_relationTo(int  child, const QAccessibleInterface*  other, int  otherChild) const { return QAccessibleWidgetEx::relationTo(child, other, otherChild); }
inline int  promoted_indexOfChild(const QAccessibleInterface*  child) const { return QAccessibleWidgetEx::indexOfChild(child); }
inline QString  promoted_text(QAccessible::Text  t, int  child) const { return QAccessibleWidgetEx::text(t, child); }
inline int  promoted_childAt(int  x, int  y) const { return QAccessibleWidgetEx::childAt(x, y); }
inline QVariant  promoted_invokeMethodEx(QAccessible::Method  method, int  child, const QList<QVariant >&  params) { return QAccessibleWidgetEx::invokeMethodEx(method, child, params); }
inline QAccessible::State  promoted_state(int  child) const { return QAccessibleWidgetEx::state(child); }
inline int  promoted_childCount() const { return QAccessibleWidgetEx::childCount(); }
inline QRect  promoted_rect(int  child) const { return QAccessibleWidgetEx::rect(child); }
};

class PythonQtWrapper_QAccessibleWidgetEx : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleWidgetEx* new_QAccessibleWidgetEx(QWidget*  o, QAccessible::Role  r = QAccessible::Client, const QString&  name = QString());
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
   int  childCount(QAccessibleWidgetEx* theWrappedObject) const;
   QRect  rect(QAccessibleWidgetEx* theWrappedObject, int  child) const;
};

#endif // PYTHONQTWRAPPER_QACCESSIBLEWIDGETEX_H
