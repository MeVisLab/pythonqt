#ifndef PYTHONQTWRAPPER_QACCESSIBLEOBJECTEX_H
#define PYTHONQTWRAPPER_QACCESSIBLEOBJECTEX_H

#include <qaccessibleobject.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaccessible.h>
#include <qaccessibleobject.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>

class PythonQtShell_QAccessibleObjectEx : public QAccessibleObjectEx
{
public:
    PythonQtShell_QAccessibleObjectEx(QObject*  object):QAccessibleObjectEx(object),_wrapper(NULL) {};

virtual QString  actionText(int  action, QAccessible::Text  t, int  child) const;
virtual int  childAt(int  x, int  y) const;
virtual int  childCount() const;
virtual bool  doAction(int  action, int  child, const QList<QVariant >&  params);
virtual int  indexOfChild(const QAccessibleInterface*  arg__1) const;
virtual QVariant  invokeMethodEx(QAccessible::Method  method, int  child, const QList<QVariant >&  params);
virtual bool  isValid() const;
virtual int  navigate(QAccessible::RelationFlag  relation, int  index, QAccessibleInterface**  iface) const;
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

class PythonQtPublicPromoter_QAccessibleObjectEx : public QAccessibleObjectEx
{ public:
inline QString  promoted_actionText(int  action, QAccessible::Text  t, int  child) const { return QAccessibleObjectEx::actionText(action, t, child); }
inline bool  promoted_doAction(int  action, int  child, const QList<QVariant >&  params) { return QAccessibleObjectEx::doAction(action, child, params); }
inline int  promoted_userActionCount(int  child) const { return QAccessibleObjectEx::userActionCount(child); }
inline bool  promoted_isValid() const { return QAccessibleObjectEx::isValid(); }
inline void promoted_setText(QAccessible::Text  t, int  child, const QString&  text) { QAccessibleObjectEx::setText(t, child, text); }
inline QRect  promoted_rect(int  child) const { return QAccessibleObjectEx::rect(child); }
inline QObject*  promoted_object() const { return QAccessibleObjectEx::object(); }
};

class PythonQtWrapper_QAccessibleObjectEx : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleObjectEx* new_QAccessibleObjectEx(QObject*  object);
   QString  actionText(QAccessibleObjectEx* theWrappedObject, int  action, QAccessible::Text  t, int  child) const;
   bool  doAction(QAccessibleObjectEx* theWrappedObject, int  action, int  child, const QList<QVariant >&  params);
   int  userActionCount(QAccessibleObjectEx* theWrappedObject, int  child) const;
   bool  isValid(QAccessibleObjectEx* theWrappedObject) const;
   void setText(QAccessibleObjectEx* theWrappedObject, QAccessible::Text  t, int  child, const QString&  text);
   QRect  rect(QAccessibleObjectEx* theWrappedObject, int  child) const;
   QObject*  object(QAccessibleObjectEx* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QACCESSIBLEOBJECTEX_H
