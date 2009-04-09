#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONDOCKWIDGET_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONDOCKWIDGET_H

#include <qstyleoption.h>
#include <QObject>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtWrapper_QStyleOptionDockWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion StyleOptionType )
enum StyleOptionVersion{
  Version = QStyleOptionDockWidget::Version};
enum StyleOptionType{
  Type = QStyleOptionDockWidget::Type};
public slots:
QStyleOptionDockWidget* new_QStyleOptionDockWidget();
QStyleOptionDockWidget* new_QStyleOptionDockWidget(const QStyleOptionDockWidget&  other);
void delete_QStyleOptionDockWidget(QStyleOptionDockWidget* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEOPTIONDOCKWIDGET_H
