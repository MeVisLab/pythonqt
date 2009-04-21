#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONVIEWITEMV3_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONVIEWITEMV3_H

#include <qstyleoption.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QStyleOptionViewItemV3 : public QStyleOptionViewItemV3
{
public:
    PythonQtShell_QStyleOptionViewItemV3():QStyleOptionViewItemV3(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionViewItemV3(const QStyleOptionViewItem&  other):QStyleOptionViewItemV3(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionViewItemV3(const QStyleOptionViewItemV3&  other):QStyleOptionViewItemV3(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionViewItemV3(int  version):QStyleOptionViewItemV3(version),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionViewItemV3 : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion )
enum StyleOptionVersion{
  Version = QStyleOptionViewItemV3::Version};
public slots:
QStyleOptionViewItemV3* new_QStyleOptionViewItemV3();
QStyleOptionViewItemV3* new_QStyleOptionViewItemV3(const QStyleOptionViewItem&  other);
QStyleOptionViewItemV3* new_QStyleOptionViewItemV3(const QStyleOptionViewItemV3&  other);
void delete_QStyleOptionViewItemV3(QStyleOptionViewItemV3* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEOPTIONVIEWITEMV3_H
