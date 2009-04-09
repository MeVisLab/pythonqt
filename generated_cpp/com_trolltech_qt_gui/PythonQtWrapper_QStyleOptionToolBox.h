#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONTOOLBOX_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONTOOLBOX_H

#include <qstyleoption.h>
#include <QObject>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtWrapper_QStyleOptionToolBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion StyleOptionType )
enum StyleOptionVersion{
  Version = QStyleOptionToolBox::Version};
enum StyleOptionType{
  Type = QStyleOptionToolBox::Type};
public slots:
QStyleOptionToolBox* new_QStyleOptionToolBox();
QStyleOptionToolBox* new_QStyleOptionToolBox(const QStyleOptionToolBox&  other);
void delete_QStyleOptionToolBox(QStyleOptionToolBox* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEOPTIONTOOLBOX_H
