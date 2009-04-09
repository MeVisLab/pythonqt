#ifndef PYTHONQTWRAPPER_QACCESSIBLEINTERFACEEX_H
#define PYTHONQTWRAPPER_QACCESSIBLEINTERFACEEX_H

#include <qaccessible.h>
#include <QObject>

#include <QVariant>
#include <qaccessible.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>

class PythonQtWrapper_QAccessibleInterfaceEx : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QAccessibleInterfaceEx(QAccessibleInterfaceEx* obj) { delete obj; } 
   QVariant  invokeMethodEx(QAccessibleInterfaceEx* theWrappedObject, QAccessible::Method  method, int  child, const QList<QVariant >&  params);
   QVariant  virtual_hook(QAccessibleInterfaceEx* theWrappedObject, const QVariant&  data);
};

#endif // PYTHONQTWRAPPER_QACCESSIBLEINTERFACEEX_H
