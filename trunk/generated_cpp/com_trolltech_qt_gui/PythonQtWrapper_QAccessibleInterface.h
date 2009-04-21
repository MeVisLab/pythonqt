#ifndef PYTHONQTWRAPPER_QACCESSIBLEINTERFACE_H
#define PYTHONQTWRAPPER_QACCESSIBLEINTERFACE_H

#include <qaccessible.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaccessible.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>

class PythonQtShell_QAccessibleInterface : public QAccessibleInterface
{
public:
    PythonQtShell_QAccessibleInterface():QAccessibleInterface(),_wrapper(NULL) {};

virtual QString  actionText(int  action, QAccessible::Text  t, int  child) const;
virtual int  childAt(int  x, int  y) const;
virtual int  childCount() const;
virtual bool  doAction(int  action, int  child, const QList<QVariant >&  params = QVariantList());
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

class PythonQtWrapper_QAccessibleInterface : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleInterface* new_QAccessibleInterface();
void delete_QAccessibleInterface(QAccessibleInterface* obj) { delete obj; } 
   QSet<QAccessible::Method >  supportedMethods(QAccessibleInterface* theWrappedObject);
   QVariant  invokeMethod(QAccessibleInterface* theWrappedObject, QAccessible::Method  method, int  child = 0, const QList<QVariant >&  params = QVariantList());
};

#endif // PYTHONQTWRAPPER_QACCESSIBLEINTERFACE_H
