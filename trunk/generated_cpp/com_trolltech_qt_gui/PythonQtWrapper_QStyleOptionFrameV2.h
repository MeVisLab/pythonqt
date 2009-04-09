#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONFRAMEV2_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONFRAMEV2_H

#include <qstyleoption.h>
#include <QObject>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtWrapper_QStyleOptionFrameV2 : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion FrameFeature )
enum StyleOptionVersion{
  Version = QStyleOptionFrameV2::Version};
enum FrameFeature{
  None = QStyleOptionFrameV2::None,   Flat = QStyleOptionFrameV2::Flat};
public slots:
QStyleOptionFrameV2* new_QStyleOptionFrameV2();
QStyleOptionFrameV2* new_QStyleOptionFrameV2(const QStyleOptionFrame&  other);
QStyleOptionFrameV2* new_QStyleOptionFrameV2(const QStyleOptionFrameV2&  other);
void delete_QStyleOptionFrameV2(QStyleOptionFrameV2* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEOPTIONFRAMEV2_H
