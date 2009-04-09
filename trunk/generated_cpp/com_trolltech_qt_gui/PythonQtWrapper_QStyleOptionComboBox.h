#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONCOMBOBOX_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONCOMBOBOX_H

#include <qstyleoption.h>
#include <QObject>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtWrapper_QStyleOptionComboBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion StyleOptionType )
enum StyleOptionVersion{
  Version = QStyleOptionComboBox::Version};
enum StyleOptionType{
  Type = QStyleOptionComboBox::Type};
public slots:
QStyleOptionComboBox* new_QStyleOptionComboBox();
QStyleOptionComboBox* new_QStyleOptionComboBox(const QStyleOptionComboBox&  other);
void delete_QStyleOptionComboBox(QStyleOptionComboBox* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEOPTIONCOMBOBOX_H
