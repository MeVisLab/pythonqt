#include "PythonQtWrapper_QLayout.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>
#include <qsize.h>
#include <qwidget.h>

bool  PythonQtWrapper_QLayout::activate(QLayout* theWrappedObject)
{
return theWrappedObject->activate();
}

void PythonQtWrapper_QLayout::addItem(QLayout* theWrappedObject, QLayoutItem*  arg__1)
{
theWrappedObject->addItem(arg__1);
}

void PythonQtWrapper_QLayout::addWidget(QLayout* theWrappedObject, QWidget*  w)
{
theWrappedObject->addWidget(w);
}

Qt::Alignment  PythonQtWrapper_QLayout::alignment(QLayout* theWrappedObject) const
{
return theWrappedObject->alignment();
}

QSize  PythonQtWrapper_QLayout::static_QLayout_closestAcceptableSize(const QWidget*  w, const QSize&  s)
{
return QLayout::closestAcceptableSize(w, s);
}

QRect  PythonQtWrapper_QLayout::contentsRect(QLayout* theWrappedObject) const
{
return theWrappedObject->contentsRect();
}

QSizePolicy::ControlTypes  PythonQtWrapper_QLayout::controlTypes(QLayout* theWrappedObject) const
{
return theWrappedObject->controlTypes();
}

int  PythonQtWrapper_QLayout::count(QLayout* theWrappedObject) const
{
return theWrappedObject->count();
}

Qt::Orientations  PythonQtWrapper_QLayout::expandingDirections(QLayout* theWrappedObject) const
{
return theWrappedObject->expandingDirections();
}

QRect  PythonQtWrapper_QLayout::geometry(QLayout* theWrappedObject) const
{
return theWrappedObject->geometry();
}

void PythonQtWrapper_QLayout::getContentsMargins(QLayout* theWrappedObject, int*  left, int*  top, int*  right, int*  bottom) const
{
theWrappedObject->getContentsMargins(left, top, right, bottom);
}

bool  PythonQtWrapper_QLayout::hasHeightForWidth(QLayout* theWrappedObject) const
{
return theWrappedObject->hasHeightForWidth();
}

int  PythonQtWrapper_QLayout::heightForWidth(QLayout* theWrappedObject, int  arg__1) const
{
return theWrappedObject->heightForWidth(arg__1);
}

int  PythonQtWrapper_QLayout::indexOf(QLayout* theWrappedObject, QWidget*  arg__1) const
{
return theWrappedObject->indexOf(arg__1);
}

void PythonQtWrapper_QLayout::invalidate(QLayout* theWrappedObject)
{
theWrappedObject->invalidate();
}

bool  PythonQtWrapper_QLayout::isEmpty(QLayout* theWrappedObject) const
{
return theWrappedObject->isEmpty();
}

bool  PythonQtWrapper_QLayout::isEnabled(QLayout* theWrappedObject) const
{
return theWrappedObject->isEnabled();
}

QLayoutItem*  PythonQtWrapper_QLayout::itemAt(QLayout* theWrappedObject, int  index) const
{
return theWrappedObject->itemAt(index);
}

QLayout*  PythonQtWrapper_QLayout::layout(QLayout* theWrappedObject)
{
return theWrappedObject->layout();
}

QSize  PythonQtWrapper_QLayout::maximumSize(QLayout* theWrappedObject) const
{
return theWrappedObject->maximumSize();
}

QWidget*  PythonQtWrapper_QLayout::menuBar(QLayout* theWrappedObject) const
{
return theWrappedObject->menuBar();
}

int  PythonQtWrapper_QLayout::minimumHeightForWidth(QLayout* theWrappedObject, int  arg__1) const
{
return theWrappedObject->minimumHeightForWidth(arg__1);
}

QSize  PythonQtWrapper_QLayout::minimumSize(QLayout* theWrappedObject) const
{
return theWrappedObject->minimumSize();
}

QWidget*  PythonQtWrapper_QLayout::parentWidget(QLayout* theWrappedObject) const
{
return theWrappedObject->parentWidget();
}

void PythonQtWrapper_QLayout::removeItem(QLayout* theWrappedObject, QLayoutItem*  arg__1)
{
theWrappedObject->removeItem(arg__1);
}

void PythonQtWrapper_QLayout::removeWidget(QLayout* theWrappedObject, QWidget*  w)
{
theWrappedObject->removeWidget(w);
}

void PythonQtWrapper_QLayout::setAlignment(QLayout* theWrappedObject, Qt::Alignment  alignment)
{
theWrappedObject->setAlignment(alignment);
}

bool  PythonQtWrapper_QLayout::setAlignment(QLayout* theWrappedObject, QLayout*  l, Qt::Alignment  alignment)
{
return theWrappedObject->setAlignment(l, alignment);
}

bool  PythonQtWrapper_QLayout::setAlignment(QLayout* theWrappedObject, QWidget*  w, Qt::Alignment  alignment)
{
return theWrappedObject->setAlignment(w, alignment);
}

void PythonQtWrapper_QLayout::setContentsMargins(QLayout* theWrappedObject, int  left, int  top, int  right, int  bottom)
{
theWrappedObject->setContentsMargins(left, top, right, bottom);
}

void PythonQtWrapper_QLayout::setEnabled(QLayout* theWrappedObject, bool  arg__1)
{
theWrappedObject->setEnabled(arg__1);
}

void PythonQtWrapper_QLayout::setGeometry(QLayout* theWrappedObject, const QRect&  arg__1)
{
theWrappedObject->setGeometry(arg__1);
}

void PythonQtWrapper_QLayout::setMargin(QLayout* theWrappedObject, int  arg__1)
{
theWrappedObject->setMargin(arg__1);
}

void PythonQtWrapper_QLayout::setMenuBar(QLayout* theWrappedObject, QWidget*  w)
{
theWrappedObject->setMenuBar(w);
}

void PythonQtWrapper_QLayout::setSizeConstraint(QLayout* theWrappedObject, QLayout::SizeConstraint  arg__1)
{
theWrappedObject->setSizeConstraint(arg__1);
}

void PythonQtWrapper_QLayout::setSpacing(QLayout* theWrappedObject, int  arg__1)
{
theWrappedObject->setSpacing(arg__1);
}

QLayout::SizeConstraint  PythonQtWrapper_QLayout::sizeConstraint(QLayout* theWrappedObject) const
{
return theWrappedObject->sizeConstraint();
}

QSize  PythonQtWrapper_QLayout::sizeHint(QLayout* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

QSpacerItem*  PythonQtWrapper_QLayout::spacerItem(QLayout* theWrappedObject)
{
return theWrappedObject->spacerItem();
}

int  PythonQtWrapper_QLayout::spacing(QLayout* theWrappedObject) const
{
return theWrappedObject->spacing();
}

QLayoutItem*  PythonQtWrapper_QLayout::takeAt(QLayout* theWrappedObject, int  index)
{
return theWrappedObject->takeAt(index);
}

int  PythonQtWrapper_QLayout::totalHeightForWidth(QLayout* theWrappedObject, int  w) const
{
return theWrappedObject->totalHeightForWidth(w);
}

QSize  PythonQtWrapper_QLayout::totalMaximumSize(QLayout* theWrappedObject) const
{
return theWrappedObject->totalMaximumSize();
}

QSize  PythonQtWrapper_QLayout::totalMinimumSize(QLayout* theWrappedObject) const
{
return theWrappedObject->totalMinimumSize();
}

QSize  PythonQtWrapper_QLayout::totalSizeHint(QLayout* theWrappedObject) const
{
return theWrappedObject->totalSizeHint();
}

void PythonQtWrapper_QLayout::update(QLayout* theWrappedObject)
{
theWrappedObject->update();
}

QWidget*  PythonQtWrapper_QLayout::widget(QLayout* theWrappedObject)
{
return theWrappedObject->widget();
}

