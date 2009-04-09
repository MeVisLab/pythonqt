#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONHEADER_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONHEADER_H

#include <qstyleoption.h>
#include <QObject>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtWrapper_QStyleOptionHeader : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion SectionPosition SelectedPosition StyleOptionType SortIndicator )
enum StyleOptionVersion{
  Version = QStyleOptionHeader::Version};
enum SectionPosition{
  Beginning = QStyleOptionHeader::Beginning,   Middle = QStyleOptionHeader::Middle,   End = QStyleOptionHeader::End,   OnlyOneSection = QStyleOptionHeader::OnlyOneSection};
enum SelectedPosition{
  NotAdjacent = QStyleOptionHeader::NotAdjacent,   NextIsSelected = QStyleOptionHeader::NextIsSelected,   PreviousIsSelected = QStyleOptionHeader::PreviousIsSelected,   NextAndPreviousAreSelected = QStyleOptionHeader::NextAndPreviousAreSelected};
enum StyleOptionType{
  Type = QStyleOptionHeader::Type};
enum SortIndicator{
  None = QStyleOptionHeader::None,   SortUp = QStyleOptionHeader::SortUp,   SortDown = QStyleOptionHeader::SortDown};
public slots:
QStyleOptionHeader* new_QStyleOptionHeader();
QStyleOptionHeader* new_QStyleOptionHeader(const QStyleOptionHeader&  other);
void delete_QStyleOptionHeader(QStyleOptionHeader* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEOPTIONHEADER_H
