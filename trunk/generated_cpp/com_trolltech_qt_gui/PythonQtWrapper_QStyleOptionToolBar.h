#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONTOOLBAR_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONTOOLBAR_H

#include <qstyleoption.h>
#include <QObject>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtWrapper_QStyleOptionToolBar : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion StyleOptionType ToolBarPosition ToolBarFeature )
enum StyleOptionVersion{
  Version = QStyleOptionToolBar::Version};
enum StyleOptionType{
  Type = QStyleOptionToolBar::Type};
enum ToolBarPosition{
  Beginning = QStyleOptionToolBar::Beginning,   Middle = QStyleOptionToolBar::Middle,   End = QStyleOptionToolBar::End,   OnlyOne = QStyleOptionToolBar::OnlyOne};
enum ToolBarFeature{
  None = QStyleOptionToolBar::None,   Movable = QStyleOptionToolBar::Movable};
public slots:
QStyleOptionToolBar* new_QStyleOptionToolBar();
QStyleOptionToolBar* new_QStyleOptionToolBar(const QStyleOptionToolBar&  other);
void delete_QStyleOptionToolBar(QStyleOptionToolBar* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEOPTIONTOOLBAR_H
