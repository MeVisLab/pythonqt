#ifndef PYTHONQTWRAPPER_QACCESSIBLEOBJECTEX_H
#define PYTHONQTWRAPPER_QACCESSIBLEOBJECTEX_H

#include <qaccessibleobject.h>
#include <QObject>

#include <QVariant>
#include <qaccessible.h>
#include <qaccessibleobject.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>

class PythonQtWrapper_QAccessibleObjectEx : public QObject
{ Q_OBJECT
public:
public slots:
   QString  actionText(QAccessibleObjectEx* theWrappedObject, int  action, QAccessible::Text  t, int  child) const;
   bool  doAction(QAccessibleObjectEx* theWrappedObject, int  action, int  child, const QList<QVariant >&  params);
   bool  isValid(QAccessibleObjectEx* theWrappedObject) const;
   QObject*  object(QAccessibleObjectEx* theWrappedObject) const;
   QRect  rect(QAccessibleObjectEx* theWrappedObject, int  child) const;
   void setText(QAccessibleObjectEx* theWrappedObject, QAccessible::Text  t, int  child, const QString&  text);
   int  userActionCount(QAccessibleObjectEx* theWrappedObject, int  child) const;
};

#endif // PYTHONQTWRAPPER_QACCESSIBLEOBJECTEX_H
