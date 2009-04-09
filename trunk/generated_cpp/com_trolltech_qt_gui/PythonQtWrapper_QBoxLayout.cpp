#include "PythonQtWrapper_QBoxLayout.h"

#include <QVariant>
#include <qboxlayout.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>
#include <qsize.h>
#include <qwidget.h>

QBoxLayout* PythonQtWrapper_QBoxLayout::new_QBoxLayout(QBoxLayout::Direction  arg__1, QWidget*  parent)
{ 
return new QBoxLayout(arg__1, parent); }

void PythonQtWrapper_QBoxLayout::addItem(QBoxLayout* theWrappedObject, QLayoutItem*  arg__1)
{
theWrappedObject->addItem(arg__1);
}

void PythonQtWrapper_QBoxLayout::addLayout(QBoxLayout* theWrappedObject, QLayout*  layout, int  stretch)
{
theWrappedObject->addLayout(layout, stretch);
}

void PythonQtWrapper_QBoxLayout::addSpacerItem(QBoxLayout* theWrappedObject, QSpacerItem*  spacerItem)
{
theWrappedObject->addSpacerItem(spacerItem);
}

void PythonQtWrapper_QBoxLayout::addSpacing(QBoxLayout* theWrappedObject, int  size)
{
theWrappedObject->addSpacing(size);
}

void PythonQtWrapper_QBoxLayout::addStretch(QBoxLayout* theWrappedObject, int  stretch)
{
theWrappedObject->addStretch(stretch);
}

void PythonQtWrapper_QBoxLayout::addStrut(QBoxLayout* theWrappedObject, int  arg__1)
{
theWrappedObject->addStrut(arg__1);
}

void PythonQtWrapper_QBoxLayout::addWidget(QBoxLayout* theWrappedObject, QWidget*  arg__1, int  stretch, Qt::Alignment  alignment)
{
theWrappedObject->addWidget(arg__1, stretch, alignment);
}

int  PythonQtWrapper_QBoxLayout::count(QBoxLayout* theWrappedObject) const
{
return theWrappedObject->count();
}

QBoxLayout::Direction  PythonQtWrapper_QBoxLayout::direction(QBoxLayout* theWrappedObject) const
{
return theWrappedObject->direction();
}

Qt::Orientations  PythonQtWrapper_QBoxLayout::expandingDirections(QBoxLayout* theWrappedObject) const
{
return theWrappedObject->expandingDirections();
}

bool  PythonQtWrapper_QBoxLayout::hasHeightForWidth(QBoxLayout* theWrappedObject) const
{
return theWrappedObject->hasHeightForWidth();
}

int  PythonQtWrapper_QBoxLayout::heightForWidth(QBoxLayout* theWrappedObject, int  arg__1) const
{
return theWrappedObject->heightForWidth(arg__1);
}

void PythonQtWrapper_QBoxLayout::insertLayout(QBoxLayout* theWrappedObject, int  index, QLayout*  layout, int  stretch)
{
theWrappedObject->insertLayout(index, layout, stretch);
}

void PythonQtWrapper_QBoxLayout::insertSpacerItem(QBoxLayout* theWrappedObject, int  index, QSpacerItem*  spacerItem)
{
theWrappedObject->insertSpacerItem(index, spacerItem);
}

void PythonQtWrapper_QBoxLayout::insertSpacing(QBoxLayout* theWrappedObject, int  index, int  size)
{
theWrappedObject->insertSpacing(index, size);
}

void PythonQtWrapper_QBoxLayout::insertStretch(QBoxLayout* theWrappedObject, int  index, int  stretch)
{
theWrappedObject->insertStretch(index, stretch);
}

void PythonQtWrapper_QBoxLayout::insertWidget(QBoxLayout* theWrappedObject, int  index, QWidget*  widget, int  stretch, Qt::Alignment  alignment)
{
theWrappedObject->insertWidget(index, widget, stretch, alignment);
}

void PythonQtWrapper_QBoxLayout::invalidate(QBoxLayout* theWrappedObject)
{
theWrappedObject->invalidate();
}

QLayoutItem*  PythonQtWrapper_QBoxLayout::itemAt(QBoxLayout* theWrappedObject, int  arg__1) const
{
return theWrappedObject->itemAt(arg__1);
}

QSize  PythonQtWrapper_QBoxLayout::maximumSize(QBoxLayout* theWrappedObject) const
{
return theWrappedObject->maximumSize();
}

int  PythonQtWrapper_QBoxLayout::minimumHeightForWidth(QBoxLayout* theWrappedObject, int  arg__1) const
{
return theWrappedObject->minimumHeightForWidth(arg__1);
}

QSize  PythonQtWrapper_QBoxLayout::minimumSize(QBoxLayout* theWrappedObject) const
{
return theWrappedObject->minimumSize();
}

void PythonQtWrapper_QBoxLayout::setDirection(QBoxLayout* theWrappedObject, QBoxLayout::Direction  arg__1)
{
theWrappedObject->setDirection(arg__1);
}

void PythonQtWrapper_QBoxLayout::setGeometry(QBoxLayout* theWrappedObject, const QRect&  arg__1)
{
theWrappedObject->setGeometry(arg__1);
}

void PythonQtWrapper_QBoxLayout::setSpacing(QBoxLayout* theWrappedObject, int  spacing)
{
theWrappedObject->setSpacing(spacing);
}

bool  PythonQtWrapper_QBoxLayout::setStretchFactor(QBoxLayout* theWrappedObject, QLayout*  l, int  stretch)
{
return theWrappedObject->setStretchFactor(l, stretch);
}

bool  PythonQtWrapper_QBoxLayout::setStretchFactor(QBoxLayout* theWrappedObject, QWidget*  w, int  stretch)
{
return theWrappedObject->setStretchFactor(w, stretch);
}

QSize  PythonQtWrapper_QBoxLayout::sizeHint(QBoxLayout* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

int  PythonQtWrapper_QBoxLayout::spacing(QBoxLayout* theWrappedObject) const
{
return theWrappedObject->spacing();
}

QLayoutItem*  PythonQtWrapper_QBoxLayout::takeAt(QBoxLayout* theWrappedObject, int  arg__1)
{
return theWrappedObject->takeAt(arg__1);
}

