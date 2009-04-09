#include "PythonQtWrapper_QWidgetItem.h"

#include <QVariant>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qrect.h>
#include <qsize.h>
#include <qwidget.h>

QWidgetItem* PythonQtWrapper_QWidgetItem::new_QWidgetItem(QWidget*  w)
{ 
return new QWidgetItem(w); }

Qt::Alignment  PythonQtWrapper_QWidgetItem::alignment(QWidgetItem* theWrappedObject) const
{
return theWrappedObject->alignment();
}

QSizePolicy::ControlTypes  PythonQtWrapper_QWidgetItem::controlTypes(QWidgetItem* theWrappedObject) const
{
return theWrappedObject->controlTypes();
}

Qt::Orientations  PythonQtWrapper_QWidgetItem::expandingDirections(QWidgetItem* theWrappedObject) const
{
return theWrappedObject->expandingDirections();
}

QRect  PythonQtWrapper_QWidgetItem::geometry(QWidgetItem* theWrappedObject) const
{
return theWrappedObject->geometry();
}

bool  PythonQtWrapper_QWidgetItem::hasHeightForWidth(QWidgetItem* theWrappedObject) const
{
return theWrappedObject->hasHeightForWidth();
}

int  PythonQtWrapper_QWidgetItem::heightForWidth(QWidgetItem* theWrappedObject, int  arg__1) const
{
return theWrappedObject->heightForWidth(arg__1);
}

void PythonQtWrapper_QWidgetItem::invalidate(QWidgetItem* theWrappedObject)
{
theWrappedObject->invalidate();
}

bool  PythonQtWrapper_QWidgetItem::isEmpty(QWidgetItem* theWrappedObject) const
{
return theWrappedObject->isEmpty();
}

QLayout*  PythonQtWrapper_QWidgetItem::layout(QWidgetItem* theWrappedObject)
{
return theWrappedObject->layout();
}

QSize  PythonQtWrapper_QWidgetItem::maximumSize(QWidgetItem* theWrappedObject) const
{
return theWrappedObject->maximumSize();
}

int  PythonQtWrapper_QWidgetItem::minimumHeightForWidth(QWidgetItem* theWrappedObject, int  arg__1) const
{
return theWrappedObject->minimumHeightForWidth(arg__1);
}

QSize  PythonQtWrapper_QWidgetItem::minimumSize(QWidgetItem* theWrappedObject) const
{
return theWrappedObject->minimumSize();
}

void PythonQtWrapper_QWidgetItem::setAlignment(QWidgetItem* theWrappedObject, Qt::Alignment  a)
{
theWrappedObject->setAlignment(a);
}

void PythonQtWrapper_QWidgetItem::setGeometry(QWidgetItem* theWrappedObject, const QRect&  arg__1)
{
theWrappedObject->setGeometry(arg__1);
}

QSize  PythonQtWrapper_QWidgetItem::sizeHint(QWidgetItem* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

QSpacerItem*  PythonQtWrapper_QWidgetItem::spacerItem(QWidgetItem* theWrappedObject)
{
return theWrappedObject->spacerItem();
}

QWidget*  PythonQtWrapper_QWidgetItem::widget(QWidgetItem* theWrappedObject)
{
return theWrappedObject->widget();
}

