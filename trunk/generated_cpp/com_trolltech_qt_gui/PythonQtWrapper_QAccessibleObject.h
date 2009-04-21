#ifndef PYTHONQTWRAPPER_QACCESSIBLEOBJECT_H
#define PYTHONQTWRAPPER_QACCESSIBLEOBJECT_H

#include <qaccessibleobject.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaccessible.h>
#include <qaccessibleobject.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>

class PythonQtShell_QAccessibleObject : public QAccessibleObject
{
public:
    PythonQtShell_QAccessibleObject(QObject*  object):QAccessibleObject(object),_wrapper(NULL) {};

virtual QString  actionText(int  action, QAccessible::Text  t, int  child) const;
virtual int  childAt(int  x, int  y) const;
virtual int  childCount() const;
virtual bool  doAction(int  action, int  child, const QList<QVariant >&  params);
virtual int  indexOfChild(const QAccessibleInterface*  arg__1) const;
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

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAccessibleObject : public QAccessibleObject
{ public:
inline QObject*  promoted_object() const { return QAccessibleObject::object(); }
inline int  promoted_userActionCount(int  child) const { return QAccessibleObject::userActionCount(child); }
inline bool  promoted_isValid() const { return QAccessibleObject::isValid(); }
inline QString  promoted_actionText(int  action, QAccessible::Text  t, int  child) const { return QAccessibleObject::actionText(action, t, child); }
inline bool  promoted_doAction(int  action, int  child, const QList<QVariant >&  params) { return QAccessibleObject::doAction(action, child, params); }
inline void promoted_setText(QAccessible::Text  t, int  child, const QString&  text) { QAccessibleObject::setText(t, child, text); }
inline QRect  promoted_rect(int  child) const { return QAccessibleObject::rect(child); }
};

class PythonQtWrapper_QAccessibleObject : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleObject* new_QAccessibleObject(QObject*  object);
   QObject*  object(QAccessibleObject* theWrappedObject) const;
   int  userActionCount(QAccessibleObject* theWrappedObject, int  child) const;
   bool  isValid(QAccessibleObject* theWrappedObject) const;
   QString  actionText(QAccessibleObject* theWrappedObject, int  action, QAccessible::Text  t, int  child) const;
   bool  doAction(QAccessibleObject* theWrappedObject, int  action, int  child, const QList<QVariant >&  params);
   void setText(QAccessibleObject* theWrappedObject, QAccessible::Text  t, int  child, const QString&  text);
   QRect  rect(QAccessibleObject* theWrappedObject, int  child) const;
};

#endif // PYTHONQTWRAPPER_QACCESSIBLEOBJECT_H
