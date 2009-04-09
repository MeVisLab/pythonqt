#ifndef PYTHONQTWRAPPER_QACCESSIBLEINTERFACE_H
#define PYTHONQTWRAPPER_QACCESSIBLEINTERFACE_H

#include <qaccessible.h>
#include <QObject>

#include <QVariant>
#include <qaccessible.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>

class PythonQtWrapper_QAccessibleInterface : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QAccessibleInterface(QAccessibleInterface* obj) { delete obj; } 
   QString  actionText(QAccessibleInterface* theWrappedObject, int  action, QAccessible::Text  t, int  child) const;
   int  childAt(QAccessibleInterface* theWrappedObject, int  x, int  y) const;
   int  childCount(QAccessibleInterface* theWrappedObject) const;
   bool  doAction(QAccessibleInterface* theWrappedObject, int  action, int  child, const QList<QVariant >&  params = QVariantList());
   int  indexOfChild(QAccessibleInterface* theWrappedObject, const QAccessibleInterface*  arg__1) const;
   QVariant  invokeMethod(QAccessibleInterface* theWrappedObject, QAccessible::Method  method, int  child = 0, const QList<QVariant >&  params = QVariantList());
   bool  isValid(QAccessibleInterface* theWrappedObject) const;
   int  navigate(QAccessibleInterface* theWrappedObject, QAccessible::RelationFlag  relation, int  index, QAccessibleInterface**  iface) const;
   QObject*  object(QAccessibleInterface* theWrappedObject) const;
   QRect  rect(QAccessibleInterface* theWrappedObject, int  child) const;
   QAccessible::Relation  relationTo(QAccessibleInterface* theWrappedObject, int  child, const QAccessibleInterface*  other, int  otherChild) const;
   QAccessible::Role  role(QAccessibleInterface* theWrappedObject, int  child) const;
   void setText(QAccessibleInterface* theWrappedObject, QAccessible::Text  t, int  child, const QString&  text);
   QAccessible::State  state(QAccessibleInterface* theWrappedObject, int  child) const;
   QSet<QAccessible::Method >  supportedMethods(QAccessibleInterface* theWrappedObject);
   QString  text(QAccessibleInterface* theWrappedObject, QAccessible::Text  t, int  child) const;
   int  userActionCount(QAccessibleInterface* theWrappedObject, int  child) const;
};

#endif // PYTHONQTWRAPPER_QACCESSIBLEINTERFACE_H
