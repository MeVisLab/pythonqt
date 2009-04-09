#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONTABWIDGETFRAME_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONTABWIDGETFRAME_H

#include <qstyleoption.h>
#include <QObject>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtWrapper_QStyleOptionTabWidgetFrame : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion StyleOptionType )
enum StyleOptionVersion{
  Version = QStyleOptionTabWidgetFrame::Version};
enum StyleOptionType{
  Type = QStyleOptionTabWidgetFrame::Type};
public slots:
QStyleOptionTabWidgetFrame* new_QStyleOptionTabWidgetFrame();
QStyleOptionTabWidgetFrame* new_QStyleOptionTabWidgetFrame(const QStyleOptionTabWidgetFrame&  other);
void delete_QStyleOptionTabWidgetFrame(QStyleOptionTabWidgetFrame* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEOPTIONTABWIDGETFRAME_H
