#ifndef PYTHONQTWRAPPER_QSTYLEHINTRETURN_H
#define PYTHONQTWRAPPER_QSTYLEHINTRETURN_H

#include <qstyleoption.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtShell_QStyleHintReturn : public QStyleHintReturn
{
public:
    PythonQtShell_QStyleHintReturn(int  version = QStyleOption::Version, int  type = SH_Default):QStyleHintReturn(version, type),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleHintReturn : public QObject
{ Q_OBJECT
public:
Q_ENUMS(HintReturnType StyleOptionVersion StyleOptionType )
enum HintReturnType{
  SH_Default = QStyleHintReturn::SH_Default,   SH_Mask = QStyleHintReturn::SH_Mask,   SH_Variant = QStyleHintReturn::SH_Variant};
enum StyleOptionVersion{
  Version = QStyleHintReturn::Version};
enum StyleOptionType{
  Type = QStyleHintReturn::Type};
public slots:
QStyleHintReturn* new_QStyleHintReturn(int  version = QStyleOption::Version, int  type = SH_Default);
void delete_QStyleHintReturn(QStyleHintReturn* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEHINTRETURN_H
