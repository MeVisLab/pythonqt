#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONVIEWITEMV4_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONVIEWITEMV4_H

#include <qstyleoption.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QStyleOptionViewItemV4 : public QStyleOptionViewItemV4
{
public:
    PythonQtShell_QStyleOptionViewItemV4():QStyleOptionViewItemV4(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionViewItemV4(const QStyleOptionViewItem&  other):QStyleOptionViewItemV4(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionViewItemV4(const QStyleOptionViewItemV4&  other):QStyleOptionViewItemV4(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionViewItemV4(int  version):QStyleOptionViewItemV4(version),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionViewItemV4 : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ViewItemPosition StyleOptionVersion )
enum ViewItemPosition{
  Invalid = QStyleOptionViewItemV4::Invalid,   Beginning = QStyleOptionViewItemV4::Beginning,   Middle = QStyleOptionViewItemV4::Middle,   End = QStyleOptionViewItemV4::End,   OnlyOne = QStyleOptionViewItemV4::OnlyOne};
enum StyleOptionVersion{
  Version = QStyleOptionViewItemV4::Version};
public slots:
QStyleOptionViewItemV4* new_QStyleOptionViewItemV4();
QStyleOptionViewItemV4* new_QStyleOptionViewItemV4(const QStyleOptionViewItem&  other);
QStyleOptionViewItemV4* new_QStyleOptionViewItemV4(const QStyleOptionViewItemV4&  other);
void delete_QStyleOptionViewItemV4(QStyleOptionViewItemV4* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEOPTIONVIEWITEMV4_H
