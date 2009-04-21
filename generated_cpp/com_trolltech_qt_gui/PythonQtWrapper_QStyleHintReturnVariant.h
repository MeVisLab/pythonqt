#ifndef PYTHONQTWRAPPER_QSTYLEHINTRETURNVARIANT_H
#define PYTHONQTWRAPPER_QSTYLEHINTRETURNVARIANT_H

#include <qstyleoption.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtShell_QStyleHintReturnVariant : public QStyleHintReturnVariant
{
public:
    PythonQtShell_QStyleHintReturnVariant():QStyleHintReturnVariant(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleHintReturnVariant : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion StyleOptionType )
enum StyleOptionVersion{
  Version = QStyleHintReturnVariant::Version};
enum StyleOptionType{
  Type = QStyleHintReturnVariant::Type};
public slots:
QStyleHintReturnVariant* new_QStyleHintReturnVariant();
void delete_QStyleHintReturnVariant(QStyleHintReturnVariant* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEHINTRETURNVARIANT_H
