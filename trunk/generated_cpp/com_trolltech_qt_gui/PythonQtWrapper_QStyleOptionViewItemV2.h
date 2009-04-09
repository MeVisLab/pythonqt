#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONVIEWITEMV2_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONVIEWITEMV2_H

#include <qstyleoption.h>
#include <QObject>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtWrapper_QStyleOptionViewItemV2 : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion ViewItemFeature )
enum StyleOptionVersion{
  Version = QStyleOptionViewItemV2::Version};
enum ViewItemFeature{
  None = QStyleOptionViewItemV2::None,   WrapText = QStyleOptionViewItemV2::WrapText,   Alternate = QStyleOptionViewItemV2::Alternate,   HasCheckIndicator = QStyleOptionViewItemV2::HasCheckIndicator,   HasDisplay = QStyleOptionViewItemV2::HasDisplay,   HasDecoration = QStyleOptionViewItemV2::HasDecoration};
public slots:
QStyleOptionViewItemV2* new_QStyleOptionViewItemV2();
QStyleOptionViewItemV2* new_QStyleOptionViewItemV2(const QStyleOptionViewItem&  other);
QStyleOptionViewItemV2* new_QStyleOptionViewItemV2(const QStyleOptionViewItemV2&  other);
void delete_QStyleOptionViewItemV2(QStyleOptionViewItemV2* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEOPTIONVIEWITEMV2_H
