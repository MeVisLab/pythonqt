#ifndef PYTHONQTWRAPPER_QACCESSIBLEBRIDGE_H
#define PYTHONQTWRAPPER_QACCESSIBLEBRIDGE_H

#include <qaccessiblebridge.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaccessible.h>

class PythonQtShell_QAccessibleBridge : public QAccessibleBridge
{
public:
    PythonQtShell_QAccessibleBridge():QAccessibleBridge(),_wrapper(NULL) {};

virtual void notifyAccessibilityUpdate(int  arg__1, QAccessibleInterface*  arg__2, int  arg__3);
virtual void setRootObject(QAccessibleInterface*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAccessibleBridge : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleBridge* new_QAccessibleBridge();
void delete_QAccessibleBridge(QAccessibleBridge* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QACCESSIBLEBRIDGE_H
