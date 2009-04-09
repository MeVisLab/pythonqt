#include "PythonQtWrapper_QStackedLayout.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>
#include <qsize.h>
#include <qstackedlayout.h>
#include <qwidget.h>

QStackedLayout* PythonQtWrapper_QStackedLayout::new_QStackedLayout()
{ 
return new QStackedLayout(); }

QStackedLayout* PythonQtWrapper_QStackedLayout::new_QStackedLayout(QLayout*  parentLayout)
{ 
return new QStackedLayout(parentLayout); }

QStackedLayout* PythonQtWrapper_QStackedLayout::new_QStackedLayout(QWidget*  parent)
{ 
return new QStackedLayout(parent); }

void PythonQtWrapper_QStackedLayout::addItem(QStackedLayout* theWrappedObject, QLayoutItem*  item)
{
theWrappedObject->addItem(item);
}

int  PythonQtWrapper_QStackedLayout::addWidget(QStackedLayout* theWrappedObject, QWidget*  w)
{
return theWrappedObject->addWidget(w);
}

int  PythonQtWrapper_QStackedLayout::count(QStackedLayout* theWrappedObject) const
{
return theWrappedObject->count();
}

int  PythonQtWrapper_QStackedLayout::currentIndex(QStackedLayout* theWrappedObject) const
{
return theWrappedObject->currentIndex();
}

QWidget*  PythonQtWrapper_QStackedLayout::currentWidget(QStackedLayout* theWrappedObject) const
{
return theWrappedObject->currentWidget();
}

int  PythonQtWrapper_QStackedLayout::insertWidget(QStackedLayout* theWrappedObject, int  index, QWidget*  w)
{
return theWrappedObject->insertWidget(index, w);
}

QLayoutItem*  PythonQtWrapper_QStackedLayout::itemAt(QStackedLayout* theWrappedObject, int  arg__1) const
{
return theWrappedObject->itemAt(arg__1);
}

QSize  PythonQtWrapper_QStackedLayout::minimumSize(QStackedLayout* theWrappedObject) const
{
return theWrappedObject->minimumSize();
}

void PythonQtWrapper_QStackedLayout::setGeometry(QStackedLayout* theWrappedObject, const QRect&  rect)
{
theWrappedObject->setGeometry(rect);
}

void PythonQtWrapper_QStackedLayout::setStackingMode(QStackedLayout* theWrappedObject, QStackedLayout::StackingMode  stackingMode)
{
theWrappedObject->setStackingMode(stackingMode);
}

QSize  PythonQtWrapper_QStackedLayout::sizeHint(QStackedLayout* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

QStackedLayout::StackingMode  PythonQtWrapper_QStackedLayout::stackingMode(QStackedLayout* theWrappedObject) const
{
return theWrappedObject->stackingMode();
}

QLayoutItem*  PythonQtWrapper_QStackedLayout::takeAt(QStackedLayout* theWrappedObject, int  arg__1)
{
return theWrappedObject->takeAt(arg__1);
}

QWidget*  PythonQtWrapper_QStackedLayout::widget(QStackedLayout* theWrappedObject)
{
return theWrappedObject->widget();
}

QWidget*  PythonQtWrapper_QStackedLayout::widget(QStackedLayout* theWrappedObject, int  arg__1) const
{
return theWrappedObject->widget(arg__1);
}

