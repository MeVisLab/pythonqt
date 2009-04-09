#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONTITLEBAR_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONTITLEBAR_H

#include <qstyleoption.h>
#include <QObject>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtWrapper_QStyleOptionTitleBar : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion StyleOptionType )
enum StyleOptionVersion{
  Version = QStyleOptionTitleBar::Version};
enum StyleOptionType{
  Type = QStyleOptionTitleBar::Type};
public slots:
QStyleOptionTitleBar* new_QStyleOptionTitleBar();
QStyleOptionTitleBar* new_QStyleOptionTitleBar(const QStyleOptionTitleBar&  other);
void delete_QStyleOptionTitleBar(QStyleOptionTitleBar* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEOPTIONTITLEBAR_H
