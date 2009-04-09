#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONFRAME_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONFRAME_H

#include <qstyleoption.h>
#include <QObject>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtWrapper_QStyleOptionFrame : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion StyleOptionType )
enum StyleOptionVersion{
  Version = QStyleOptionFrame::Version};
enum StyleOptionType{
  Type = QStyleOptionFrame::Type};
public slots:
QStyleOptionFrame* new_QStyleOptionFrame();
QStyleOptionFrame* new_QStyleOptionFrame(const QStyleOptionFrame&  other);
void delete_QStyleOptionFrame(QStyleOptionFrame* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEOPTIONFRAME_H
