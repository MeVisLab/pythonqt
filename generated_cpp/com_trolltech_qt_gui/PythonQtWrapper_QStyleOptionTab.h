#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONTAB_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONTAB_H

#include <qstyleoption.h>
#include <QObject>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtWrapper_QStyleOptionTab : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion CornerWidget TabPosition SelectedPosition StyleOptionType )
enum StyleOptionVersion{
  Version = QStyleOptionTab::Version};
enum CornerWidget{
  NoCornerWidgets = QStyleOptionTab::NoCornerWidgets,   LeftCornerWidget = QStyleOptionTab::LeftCornerWidget,   RightCornerWidget = QStyleOptionTab::RightCornerWidget};
enum TabPosition{
  Beginning = QStyleOptionTab::Beginning,   Middle = QStyleOptionTab::Middle,   End = QStyleOptionTab::End,   OnlyOneTab = QStyleOptionTab::OnlyOneTab};
enum SelectedPosition{
  NotAdjacent = QStyleOptionTab::NotAdjacent,   NextIsSelected = QStyleOptionTab::NextIsSelected,   PreviousIsSelected = QStyleOptionTab::PreviousIsSelected};
enum StyleOptionType{
  Type = QStyleOptionTab::Type};
public slots:
QStyleOptionTab* new_QStyleOptionTab();
QStyleOptionTab* new_QStyleOptionTab(const QStyleOptionTab&  other);
void delete_QStyleOptionTab(QStyleOptionTab* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEOPTIONTAB_H
