#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONSIZEGRIP_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONSIZEGRIP_H

#include <qstyleoption.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QStyleOptionSizeGrip : public QStyleOptionSizeGrip
{
public:
    PythonQtShell_QStyleOptionSizeGrip():QStyleOptionSizeGrip(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionSizeGrip(const QStyleOptionSizeGrip&  other):QStyleOptionSizeGrip(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionSizeGrip(int  version):QStyleOptionSizeGrip(version),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionSizeGrip : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion StyleOptionType )
enum StyleOptionVersion{
  Version = QStyleOptionSizeGrip::Version};
enum StyleOptionType{
  Type = QStyleOptionSizeGrip::Type};
public slots:
QStyleOptionSizeGrip* new_QStyleOptionSizeGrip();
QStyleOptionSizeGrip* new_QStyleOptionSizeGrip(const QStyleOptionSizeGrip&  other);
void delete_QStyleOptionSizeGrip(QStyleOptionSizeGrip* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEOPTIONSIZEGRIP_H
