#include "PythonQtWrapper_QHeaderView.h"

#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qheaderview.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qwidget.h>

QHeaderView* PythonQtWrapper_QHeaderView::new_QHeaderView(Qt::Orientation  orientation, QWidget*  parent)
{ 
return new QHeaderView(orientation, parent); }

bool  PythonQtWrapper_QHeaderView::cascadingSectionResizes(QHeaderView* theWrappedObject) const
{
return theWrappedObject->cascadingSectionResizes();
}

int  PythonQtWrapper_QHeaderView::count(QHeaderView* theWrappedObject) const
{
return theWrappedObject->count();
}

Qt::Alignment  PythonQtWrapper_QHeaderView::defaultAlignment(QHeaderView* theWrappedObject) const
{
return theWrappedObject->defaultAlignment();
}

int  PythonQtWrapper_QHeaderView::defaultSectionSize(QHeaderView* theWrappedObject) const
{
return theWrappedObject->defaultSectionSize();
}

void PythonQtWrapper_QHeaderView::doItemsLayout(QHeaderView* theWrappedObject)
{
theWrappedObject->doItemsLayout();
}

int  PythonQtWrapper_QHeaderView::hiddenSectionCount(QHeaderView* theWrappedObject) const
{
return theWrappedObject->hiddenSectionCount();
}

void PythonQtWrapper_QHeaderView::hideSection(QHeaderView* theWrappedObject, int  logicalIndex)
{
theWrappedObject->hideSection(logicalIndex);
}

bool  PythonQtWrapper_QHeaderView::highlightSections(QHeaderView* theWrappedObject) const
{
return theWrappedObject->highlightSections();
}

bool  PythonQtWrapper_QHeaderView::isClickable(QHeaderView* theWrappedObject) const
{
return theWrappedObject->isClickable();
}

bool  PythonQtWrapper_QHeaderView::isMovable(QHeaderView* theWrappedObject) const
{
return theWrappedObject->isMovable();
}

bool  PythonQtWrapper_QHeaderView::isSectionHidden(QHeaderView* theWrappedObject, int  logicalIndex) const
{
return theWrappedObject->isSectionHidden(logicalIndex);
}

bool  PythonQtWrapper_QHeaderView::isSortIndicatorShown(QHeaderView* theWrappedObject) const
{
return theWrappedObject->isSortIndicatorShown();
}

int  PythonQtWrapper_QHeaderView::length(QHeaderView* theWrappedObject) const
{
return theWrappedObject->length();
}

int  PythonQtWrapper_QHeaderView::logicalIndex(QHeaderView* theWrappedObject, int  visualIndex) const
{
return theWrappedObject->logicalIndex(visualIndex);
}

int  PythonQtWrapper_QHeaderView::logicalIndexAt(QHeaderView* theWrappedObject, const QPoint&  pos) const
{
return theWrappedObject->logicalIndexAt(pos);
}

int  PythonQtWrapper_QHeaderView::logicalIndexAt(QHeaderView* theWrappedObject, int  position) const
{
return theWrappedObject->logicalIndexAt(position);
}

int  PythonQtWrapper_QHeaderView::logicalIndexAt(QHeaderView* theWrappedObject, int  x, int  y) const
{
return theWrappedObject->logicalIndexAt(x, y);
}

int  PythonQtWrapper_QHeaderView::minimumSectionSize(QHeaderView* theWrappedObject) const
{
return theWrappedObject->minimumSectionSize();
}

void PythonQtWrapper_QHeaderView::moveSection(QHeaderView* theWrappedObject, int  from, int  to)
{
theWrappedObject->moveSection(from, to);
}

int  PythonQtWrapper_QHeaderView::offset(QHeaderView* theWrappedObject) const
{
return theWrappedObject->offset();
}

Qt::Orientation  PythonQtWrapper_QHeaderView::orientation(QHeaderView* theWrappedObject) const
{
return theWrappedObject->orientation();
}

void PythonQtWrapper_QHeaderView::reset(QHeaderView* theWrappedObject)
{
theWrappedObject->reset();
}

QHeaderView::ResizeMode  PythonQtWrapper_QHeaderView::resizeMode(QHeaderView* theWrappedObject, int  logicalIndex) const
{
return theWrappedObject->resizeMode(logicalIndex);
}

void PythonQtWrapper_QHeaderView::resizeSection(QHeaderView* theWrappedObject, int  logicalIndex, int  size)
{
theWrappedObject->resizeSection(logicalIndex, size);
}

void PythonQtWrapper_QHeaderView::resizeSections(QHeaderView* theWrappedObject, QHeaderView::ResizeMode  mode)
{
theWrappedObject->resizeSections(mode);
}

bool  PythonQtWrapper_QHeaderView::restoreState(QHeaderView* theWrappedObject, const QByteArray&  state)
{
return theWrappedObject->restoreState(state);
}

QByteArray  PythonQtWrapper_QHeaderView::saveState(QHeaderView* theWrappedObject) const
{
return theWrappedObject->saveState();
}

int  PythonQtWrapper_QHeaderView::sectionPosition(QHeaderView* theWrappedObject, int  logicalIndex) const
{
return theWrappedObject->sectionPosition(logicalIndex);
}

int  PythonQtWrapper_QHeaderView::sectionSize(QHeaderView* theWrappedObject, int  logicalIndex) const
{
return theWrappedObject->sectionSize(logicalIndex);
}

int  PythonQtWrapper_QHeaderView::sectionSizeHint(QHeaderView* theWrappedObject, int  logicalIndex) const
{
return theWrappedObject->sectionSizeHint(logicalIndex);
}

int  PythonQtWrapper_QHeaderView::sectionViewportPosition(QHeaderView* theWrappedObject, int  logicalIndex) const
{
return theWrappedObject->sectionViewportPosition(logicalIndex);
}

bool  PythonQtWrapper_QHeaderView::sectionsHidden(QHeaderView* theWrappedObject) const
{
return theWrappedObject->sectionsHidden();
}

bool  PythonQtWrapper_QHeaderView::sectionsMoved(QHeaderView* theWrappedObject) const
{
return theWrappedObject->sectionsMoved();
}

void PythonQtWrapper_QHeaderView::setCascadingSectionResizes(QHeaderView* theWrappedObject, bool  enable)
{
theWrappedObject->setCascadingSectionResizes(enable);
}

void PythonQtWrapper_QHeaderView::setClickable(QHeaderView* theWrappedObject, bool  clickable)
{
theWrappedObject->setClickable(clickable);
}

void PythonQtWrapper_QHeaderView::setDefaultAlignment(QHeaderView* theWrappedObject, Qt::Alignment  alignment)
{
theWrappedObject->setDefaultAlignment(alignment);
}

void PythonQtWrapper_QHeaderView::setDefaultSectionSize(QHeaderView* theWrappedObject, int  size)
{
theWrappedObject->setDefaultSectionSize(size);
}

void PythonQtWrapper_QHeaderView::setHighlightSections(QHeaderView* theWrappedObject, bool  highlight)
{
theWrappedObject->setHighlightSections(highlight);
}

void PythonQtWrapper_QHeaderView::setMinimumSectionSize(QHeaderView* theWrappedObject, int  size)
{
theWrappedObject->setMinimumSectionSize(size);
}

void PythonQtWrapper_QHeaderView::setModel(QHeaderView* theWrappedObject, QAbstractItemModel*  model)
{
theWrappedObject->setModel(model);
}

void PythonQtWrapper_QHeaderView::setMovable(QHeaderView* theWrappedObject, bool  movable)
{
theWrappedObject->setMovable(movable);
}

void PythonQtWrapper_QHeaderView::setResizeMode(QHeaderView* theWrappedObject, QHeaderView::ResizeMode  mode)
{
theWrappedObject->setResizeMode(mode);
}

void PythonQtWrapper_QHeaderView::setResizeMode(QHeaderView* theWrappedObject, int  logicalIndex, QHeaderView::ResizeMode  mode)
{
theWrappedObject->setResizeMode(logicalIndex, mode);
}

void PythonQtWrapper_QHeaderView::setSectionHidden(QHeaderView* theWrappedObject, int  logicalIndex, bool  hide)
{
theWrappedObject->setSectionHidden(logicalIndex, hide);
}

void PythonQtWrapper_QHeaderView::setSortIndicator(QHeaderView* theWrappedObject, int  logicalIndex, Qt::SortOrder  order)
{
theWrappedObject->setSortIndicator(logicalIndex, order);
}

void PythonQtWrapper_QHeaderView::setSortIndicatorShown(QHeaderView* theWrappedObject, bool  show)
{
theWrappedObject->setSortIndicatorShown(show);
}

void PythonQtWrapper_QHeaderView::setStretchLastSection(QHeaderView* theWrappedObject, bool  stretch)
{
theWrappedObject->setStretchLastSection(stretch);
}

void PythonQtWrapper_QHeaderView::showSection(QHeaderView* theWrappedObject, int  logicalIndex)
{
theWrappedObject->showSection(logicalIndex);
}

QSize  PythonQtWrapper_QHeaderView::sizeHint(QHeaderView* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

Qt::SortOrder  PythonQtWrapper_QHeaderView::sortIndicatorOrder(QHeaderView* theWrappedObject) const
{
return theWrappedObject->sortIndicatorOrder();
}

int  PythonQtWrapper_QHeaderView::sortIndicatorSection(QHeaderView* theWrappedObject) const
{
return theWrappedObject->sortIndicatorSection();
}

bool  PythonQtWrapper_QHeaderView::stretchLastSection(QHeaderView* theWrappedObject) const
{
return theWrappedObject->stretchLastSection();
}

int  PythonQtWrapper_QHeaderView::stretchSectionCount(QHeaderView* theWrappedObject) const
{
return theWrappedObject->stretchSectionCount();
}

void PythonQtWrapper_QHeaderView::swapSections(QHeaderView* theWrappedObject, int  first, int  second)
{
theWrappedObject->swapSections(first, second);
}

int  PythonQtWrapper_QHeaderView::visualIndex(QHeaderView* theWrappedObject, int  logicalIndex) const
{
return theWrappedObject->visualIndex(logicalIndex);
}

int  PythonQtWrapper_QHeaderView::visualIndexAt(QHeaderView* theWrappedObject, int  position) const
{
return theWrappedObject->visualIndexAt(position);
}

