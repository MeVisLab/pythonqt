#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONFOCUSRECT_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONFOCUSRECT_H

#include <qstyleoption.h>
#include <QObject>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtWrapper_QStyleOptionFocusRect : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion StyleOptionType )
enum StyleOptionVersion{
  Version = QStyleOptionFocusRect::Version};
enum StyleOptionType{
  Type = QStyleOptionFocusRect::Type};
public slots:
QStyleOptionFocusRect* new_QStyleOptionFocusRect();
QStyleOptionFocusRect* new_QStyleOptionFocusRect(const QStyleOptionFocusRect&  other);
void delete_QStyleOptionFocusRect(QStyleOptionFocusRect* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEOPTIONFOCUSRECT_H
