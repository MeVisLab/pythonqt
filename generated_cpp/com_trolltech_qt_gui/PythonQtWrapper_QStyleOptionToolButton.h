#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONTOOLBUTTON_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONTOOLBUTTON_H

#include <qstyleoption.h>
#include <QObject>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtWrapper_QStyleOptionToolButton : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion ToolButtonFeature StyleOptionType )
enum StyleOptionVersion{
  Version = QStyleOptionToolButton::Version};
enum ToolButtonFeature{
  None = QStyleOptionToolButton::None,   Arrow = QStyleOptionToolButton::Arrow,   Menu = QStyleOptionToolButton::Menu,   MenuButtonPopup = QStyleOptionToolButton::MenuButtonPopup,   PopupDelay = QStyleOptionToolButton::PopupDelay,   HasMenu = QStyleOptionToolButton::HasMenu};
enum StyleOptionType{
  Type = QStyleOptionToolButton::Type};
public slots:
QStyleOptionToolButton* new_QStyleOptionToolButton();
QStyleOptionToolButton* new_QStyleOptionToolButton(const QStyleOptionToolButton&  other);
void delete_QStyleOptionToolButton(QStyleOptionToolButton* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEOPTIONTOOLBUTTON_H
