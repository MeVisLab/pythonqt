#include "PythonQtWrapper_QLayoutItem.h"

#include <QVariant>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qrect.h>
#include <qsize.h>
#include <qwidget.h>

Qt::Alignment  PythonQtWrapper_QLayoutItem::alignment(QLayoutItem* theWrappedObject) const
{
return theWrappedObject->alignment();
}

QSizePolicy::ControlTypes  PythonQtWrapper_QLayoutItem::controlTypes(QLayoutItem* theWrappedObject) const
{
return theWrappedObject->controlTypes();
}

Qt::Orientations  PythonQtWrapper_QLayoutItem::expandingDirections(QLayoutItem* theWrappedObject) const
{
return theWrappedObject->expandingDirections();
}

QRect  PythonQtWrapper_QLayoutItem::geometry(QLayoutItem* theWrappedObject) const
{
return theWrappedObject->geometry();
}

bool  PythonQtWrapper_QLayoutItem::hasHeightForWidth(QLayoutItem* theWrappedObject) const
{
return theWrappedObject->hasHeightForWidth();
}

int  PythonQtWrapper_QLayoutItem::heightForWidth(QLayoutItem* theWrappedObject, int  arg__1) const
{
return theWrappedObject->heightForWidth(arg__1);
}

void PythonQtWrapper_QLayoutItem::invalidate(QLayoutItem* theWrappedObject)
{
theWrappedObject->invalidate();
}

bool  PythonQtWrapper_QLayoutItem::isEmpty(QLayoutItem* theWrappedObject) const
{
return theWrappedObject->isEmpty();
}

QLayout*  PythonQtWrapper_QLayoutItem::layout(QLayoutItem* theWrappedObject)
{
return theWrappedObject->layout();
}

QSize  PythonQtWrapper_QLayoutItem::maximumSize(QLayoutItem* theWrappedObject) const
{
return theWrappedObject->maximumSize();
}

int  PythonQtWrapper_QLayoutItem::minimumHeightForWidth(QLayoutItem* theWrappedObject, int  arg__1) const
{
return theWrappedObject->minimumHeightForWidth(arg__1);
}

QSize  PythonQtWrapper_QLayoutItem::minimumSize(QLayoutItem* theWrappedObject) const
{
return theWrappedObject->minimumSize();
}

void PythonQtWrapper_QLayoutItem::setAlignment(QLayoutItem* theWrappedObject, Qt::Alignment  a)
{
theWrappedObject->setAlignment(a);
}

void PythonQtWrapper_QLayoutItem::setGeometry(QLayoutItem* theWrappedObject, const QRect&  arg__1)
{
theWrappedObject->setGeometry(arg__1);
}

QSize  PythonQtWrapper_QLayoutItem::sizeHint(QLayoutItem* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

QSpacerItem*  PythonQtWrapper_QLayoutItem::spacerItem(QLayoutItem* theWrappedObject)
{
return theWrappedObject->spacerItem();
}

QWidget*  PythonQtWrapper_QLayoutItem::widget(QLayoutItem* theWrappedObject)
{
return theWrappedObject->widget();
}

