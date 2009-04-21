#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONTOOLBOXV2_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONTOOLBOXV2_H

#include <qstyleoption.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QStyleOptionToolBoxV2 : public QStyleOptionToolBoxV2
{
public:
    PythonQtShell_QStyleOptionToolBoxV2():QStyleOptionToolBoxV2(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionToolBoxV2(const QStyleOptionToolBox&  other):QStyleOptionToolBoxV2(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionToolBoxV2(const QStyleOptionToolBoxV2&  other):QStyleOptionToolBoxV2(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionToolBoxV2(int  version):QStyleOptionToolBoxV2(version),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionToolBoxV2 : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion TabPosition SelectedPosition )
enum StyleOptionVersion{
  Version = QStyleOptionToolBoxV2::Version};
enum TabPosition{
  Beginning = QStyleOptionToolBoxV2::Beginning,   Middle = QStyleOptionToolBoxV2::Middle,   End = QStyleOptionToolBoxV2::End,   OnlyOneTab = QStyleOptionToolBoxV2::OnlyOneTab};
enum SelectedPosition{
  NotAdjacent = QStyleOptionToolBoxV2::NotAdjacent,   NextIsSelected = QStyleOptionToolBoxV2::NextIsSelected,   PreviousIsSelected = QStyleOptionToolBoxV2::PreviousIsSelected};
public slots:
QStyleOptionToolBoxV2* new_QStyleOptionToolBoxV2();
QStyleOptionToolBoxV2* new_QStyleOptionToolBoxV2(const QStyleOptionToolBox&  other);
QStyleOptionToolBoxV2* new_QStyleOptionToolBoxV2(const QStyleOptionToolBoxV2&  other);
void delete_QStyleOptionToolBoxV2(QStyleOptionToolBoxV2* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEOPTIONTOOLBOXV2_H
