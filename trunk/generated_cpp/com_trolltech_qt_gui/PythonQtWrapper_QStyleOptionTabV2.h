#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONTABV2_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONTABV2_H

#include <qstyleoption.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QStyleOptionTabV2 : public QStyleOptionTabV2
{
public:
    PythonQtShell_QStyleOptionTabV2():QStyleOptionTabV2(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTabV2(const QStyleOptionTab&  other):QStyleOptionTabV2(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTabV2(const QStyleOptionTabV2&  other):QStyleOptionTabV2(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTabV2(int  version):QStyleOptionTabV2(version),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionTabV2 : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion )
enum StyleOptionVersion{
  Version = QStyleOptionTabV2::Version};
public slots:
QStyleOptionTabV2* new_QStyleOptionTabV2();
QStyleOptionTabV2* new_QStyleOptionTabV2(const QStyleOptionTab&  other);
QStyleOptionTabV2* new_QStyleOptionTabV2(const QStyleOptionTabV2&  other);
void delete_QStyleOptionTabV2(QStyleOptionTabV2* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEOPTIONTABV2_H
