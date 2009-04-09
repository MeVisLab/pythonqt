#ifndef PYTHONQTWRAPPER_QSTYLEHINTRETURNMASK_H
#define PYTHONQTWRAPPER_QSTYLEHINTRETURNMASK_H

#include <qstyleoption.h>
#include <QObject>

#include <QVariant>

class PythonQtWrapper_QStyleHintReturnMask : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion StyleOptionType )
enum StyleOptionVersion{
  Version = QStyleHintReturnMask::Version};
enum StyleOptionType{
  Type = QStyleHintReturnMask::Type};
public slots:
QStyleHintReturnMask* new_QStyleHintReturnMask();
void delete_QStyleHintReturnMask(QStyleHintReturnMask* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEHINTRETURNMASK_H
