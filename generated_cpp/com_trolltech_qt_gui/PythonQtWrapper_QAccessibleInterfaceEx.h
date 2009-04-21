#ifndef PYTHONQTWRAPPER_QACCESSIBLEINTERFACEEX_H
#define PYTHONQTWRAPPER_QACCESSIBLEINTERFACEEX_H

#include <qaccessible.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaccessible.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>

class PythonQtShell_QAccessibleInterfaceEx : public QAccessibleInterfaceEx
{
public:
    PythonQtShell_QAccessibleInterfaceEx():QAccessibleInterfaceEx(),_wrapper(NULL) {};

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

class PythonQtPublicPromoter_QAccessibleInterfaceEx : public QAccessibleInterfaceEx
{ public:
inline QVariant  promoted_virtual_hook(const QVariant&  data) { return QAccessibleInterfaceEx::virtual_hook(data); }
};

class PythonQtWrapper_QAccessibleInterfaceEx : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleInterfaceEx* new_QAccessibleInterfaceEx();
void delete_QAccessibleInterfaceEx(QAccessibleInterfaceEx* obj) { delete obj; } 
   QVariant  virtual_hook(QAccessibleInterfaceEx* theWrappedObject, const QVariant&  data);
};

#endif // PYTHONQTWRAPPER_QACCESSIBLEINTERFACEEX_H
