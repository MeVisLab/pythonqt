#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONPROGRESSBAR_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONPROGRESSBAR_H

#include <qstyleoption.h>
#include <QObject>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtWrapper_QStyleOptionProgressBar : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion StyleOptionType )
enum StyleOptionVersion{
  Version = QStyleOptionProgressBar::Version};
enum StyleOptionType{
  Type = QStyleOptionProgressBar::Type};
public slots:
QStyleOptionProgressBar* new_QStyleOptionProgressBar();
QStyleOptionProgressBar* new_QStyleOptionProgressBar(const QStyleOptionProgressBar&  other);
void delete_QStyleOptionProgressBar(QStyleOptionProgressBar* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEOPTIONPROGRESSBAR_H
