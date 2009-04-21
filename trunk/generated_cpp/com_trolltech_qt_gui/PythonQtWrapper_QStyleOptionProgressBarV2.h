#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONPROGRESSBARV2_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONPROGRESSBARV2_H

#include <qstyleoption.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QStyleOptionProgressBarV2 : public QStyleOptionProgressBarV2
{
public:
    PythonQtShell_QStyleOptionProgressBarV2():QStyleOptionProgressBarV2(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionProgressBarV2(const QStyleOptionProgressBar&  other):QStyleOptionProgressBarV2(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionProgressBarV2(const QStyleOptionProgressBarV2&  other):QStyleOptionProgressBarV2(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionProgressBarV2(int  version):QStyleOptionProgressBarV2(version),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionProgressBarV2 : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion StyleOptionType )
enum StyleOptionVersion{
  Version = QStyleOptionProgressBarV2::Version};
enum StyleOptionType{
  Type = QStyleOptionProgressBarV2::Type};
public slots:
QStyleOptionProgressBarV2* new_QStyleOptionProgressBarV2();
QStyleOptionProgressBarV2* new_QStyleOptionProgressBarV2(const QStyleOptionProgressBar&  other);
QStyleOptionProgressBarV2* new_QStyleOptionProgressBarV2(const QStyleOptionProgressBarV2&  other);
void delete_QStyleOptionProgressBarV2(QStyleOptionProgressBarV2* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEOPTIONPROGRESSBARV2_H
