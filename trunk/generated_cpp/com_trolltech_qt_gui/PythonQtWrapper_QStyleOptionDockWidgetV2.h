#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONDOCKWIDGETV2_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONDOCKWIDGETV2_H

#include <qstyleoption.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QStyleOptionDockWidgetV2 : public QStyleOptionDockWidgetV2
{
public:
    PythonQtShell_QStyleOptionDockWidgetV2():QStyleOptionDockWidgetV2(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionDockWidgetV2(const QStyleOptionDockWidget&  other):QStyleOptionDockWidgetV2(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionDockWidgetV2(const QStyleOptionDockWidgetV2&  other):QStyleOptionDockWidgetV2(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionDockWidgetV2(int  version):QStyleOptionDockWidgetV2(version),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionDockWidgetV2 : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion )
enum StyleOptionVersion{
  Version = QStyleOptionDockWidgetV2::Version};
public slots:
QStyleOptionDockWidgetV2* new_QStyleOptionDockWidgetV2();
QStyleOptionDockWidgetV2* new_QStyleOptionDockWidgetV2(const QStyleOptionDockWidget&  other);
QStyleOptionDockWidgetV2* new_QStyleOptionDockWidgetV2(const QStyleOptionDockWidgetV2&  other);
void delete_QStyleOptionDockWidgetV2(QStyleOptionDockWidgetV2* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEOPTIONDOCKWIDGETV2_H
