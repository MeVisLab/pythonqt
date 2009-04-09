#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONPROGRESSBARV2_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONPROGRESSBARV2_H

#include <qstyleoption.h>
#include <QObject>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

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
