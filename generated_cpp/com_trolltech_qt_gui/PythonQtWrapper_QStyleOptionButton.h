#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONBUTTON_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONBUTTON_H

#include <qstyleoption.h>
#include <QObject>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtWrapper_QStyleOptionButton : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion ButtonFeature StyleOptionType )
enum StyleOptionVersion{
  Version = QStyleOptionButton::Version};
enum ButtonFeature{
  None = QStyleOptionButton::None,   Flat = QStyleOptionButton::Flat,   HasMenu = QStyleOptionButton::HasMenu,   DefaultButton = QStyleOptionButton::DefaultButton,   AutoDefaultButton = QStyleOptionButton::AutoDefaultButton,   CommandLinkButton = QStyleOptionButton::CommandLinkButton};
enum StyleOptionType{
  Type = QStyleOptionButton::Type};
public slots:
QStyleOptionButton* new_QStyleOptionButton();
QStyleOptionButton* new_QStyleOptionButton(const QStyleOptionButton&  other);
void delete_QStyleOptionButton(QStyleOptionButton* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEOPTIONBUTTON_H
