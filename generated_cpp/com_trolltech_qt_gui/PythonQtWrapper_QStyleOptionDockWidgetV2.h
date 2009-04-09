#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONDOCKWIDGETV2_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONDOCKWIDGETV2_H

#include <qstyleoption.h>
#include <QObject>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

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
