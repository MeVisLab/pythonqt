#include "PythonQtWrapper_QSpacerItem.h"

#include <QVariant>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qrect.h>
#include <qsize.h>
#include <qwidget.h>

QSpacerItem* PythonQtWrapper_QSpacerItem::new_QSpacerItem(int  w, int  h, QSizePolicy::Policy  hData, QSizePolicy::Policy  vData)
{ 
return new QSpacerItem(w, h, hData, vData); }

Qt::Alignment  PythonQtWrapper_QSpacerItem::alignment(QSpacerItem* theWrappedObject) const
{
return theWrappedObject->alignment();
}

void PythonQtWrapper_QSpacerItem::changeSize(QSpacerItem* theWrappedObject, int  w, int  h, QSizePolicy::Policy  hData, QSizePolicy::Policy  vData)
{
theWrappedObject->changeSize(w, h, hData, vData);
}

QSizePolicy::ControlTypes  PythonQtWrapper_QSpacerItem::controlTypes(QSpacerItem* theWrappedObject) const
{
return theWrappedObject->controlTypes();
}

Qt::Orientations  PythonQtWrapper_QSpacerItem::expandingDirections(QSpacerItem* theWrappedObject) const
{
return theWrappedObject->expandingDirections();
}

QRect  PythonQtWrapper_QSpacerItem::geometry(QSpacerItem* theWrappedObject) const
{
return theWrappedObject->geometry();
}

bool  PythonQtWrapper_QSpacerItem::hasHeightForWidth(QSpacerItem* theWrappedObject) const
{
return theWrappedObject->hasHeightForWidth();
}

int  PythonQtWrapper_QSpacerItem::heightForWidth(QSpacerItem* theWrappedObject, int  arg__1) const
{
return theWrappedObject->heightForWidth(arg__1);
}

void PythonQtWrapper_QSpacerItem::invalidate(QSpacerItem* theWrappedObject)
{
theWrappedObject->invalidate();
}

bool  PythonQtWrapper_QSpacerItem::isEmpty(QSpacerItem* theWrappedObject) const
{
return theWrappedObject->isEmpty();
}

QLayout*  PythonQtWrapper_QSpacerItem::layout(QSpacerItem* theWrappedObject)
{
return theWrappedObject->layout();
}

QSize  PythonQtWrapper_QSpacerItem::maximumSize(QSpacerItem* theWrappedObject) const
{
return theWrappedObject->maximumSize();
}

int  PythonQtWrapper_QSpacerItem::minimumHeightForWidth(QSpacerItem* theWrappedObject, int  arg__1) const
{
return theWrappedObject->minimumHeightForWidth(arg__1);
}

QSize  PythonQtWrapper_QSpacerItem::minimumSize(QSpacerItem* theWrappedObject) const
{
return theWrappedObject->minimumSize();
}

void PythonQtWrapper_QSpacerItem::setAlignment(QSpacerItem* theWrappedObject, Qt::Alignment  a)
{
theWrappedObject->setAlignment(a);
}

void PythonQtWrapper_QSpacerItem::setGeometry(QSpacerItem* theWrappedObject, const QRect&  arg__1)
{
theWrappedObject->setGeometry(arg__1);
}

QSize  PythonQtWrapper_QSpacerItem::sizeHint(QSpacerItem* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

QSpacerItem*  PythonQtWrapper_QSpacerItem::spacerItem(QSpacerItem* theWrappedObject)
{
return theWrappedObject->spacerItem();
}

QWidget*  PythonQtWrapper_QSpacerItem::widget(QSpacerItem* theWrappedObject)
{
return theWrappedObject->widget();
}

