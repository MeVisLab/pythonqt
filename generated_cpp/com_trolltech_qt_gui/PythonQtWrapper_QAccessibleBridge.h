#ifndef PYTHONQTWRAPPER_QACCESSIBLEBRIDGE_H
#define PYTHONQTWRAPPER_QACCESSIBLEBRIDGE_H

#include <qaccessiblebridge.h>
#include <QObject>

#include <QVariant>
#include <qaccessible.h>

class PythonQtWrapper_QAccessibleBridge : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QAccessibleBridge(QAccessibleBridge* obj) { delete obj; } 
   void notifyAccessibilityUpdate(QAccessibleBridge* theWrappedObject, int  arg__1, QAccessibleInterface*  arg__2, int  arg__3);
   void setRootObject(QAccessibleBridge* theWrappedObject, QAccessibleInterface*  arg__1);
};

#endif // PYTHONQTWRAPPER_QACCESSIBLEBRIDGE_H
