#ifndef PYTHONQTWRAPPER_QACCESSIBLEOBJECT_H
#define PYTHONQTWRAPPER_QACCESSIBLEOBJECT_H

#include <qaccessibleobject.h>
#include <QObject>

#include <QVariant>
#include <qaccessible.h>
#include <qaccessibleobject.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>

class PythonQtWrapper_QAccessibleObject : public QObject
{ Q_OBJECT
public:
public slots:
   QString  actionText(QAccessibleObject* theWrappedObject, int  action, QAccessible::Text  t, int  child) const;
   bool  doAction(QAccessibleObject* theWrappedObject, int  action, int  child, const QList<QVariant >&  params);
   bool  isValid(QAccessibleObject* theWrappedObject) const;
   QObject*  object(QAccessibleObject* theWrappedObject) const;
   QRect  rect(QAccessibleObject* theWrappedObject, int  child) const;
   void setText(QAccessibleObject* theWrappedObject, QAccessible::Text  t, int  child, const QString&  text);
   int  userActionCount(QAccessibleObject* theWrappedObject, int  child) const;
};

#endif // PYTHONQTWRAPPER_QACCESSIBLEOBJECT_H
