#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONGROUPBOX_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONGROUPBOX_H

#include <qstyleoption.h>
#include <QObject>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtWrapper_QStyleOptionGroupBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion StyleOptionType )
enum StyleOptionVersion{
  Version = QStyleOptionGroupBox::Version};
enum StyleOptionType{
  Type = QStyleOptionGroupBox::Type};
public slots:
QStyleOptionGroupBox* new_QStyleOptionGroupBox();
QStyleOptionGroupBox* new_QStyleOptionGroupBox(const QStyleOptionGroupBox&  other);
void delete_QStyleOptionGroupBox(QStyleOptionGroupBox* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEOPTIONGROUPBOX_H
