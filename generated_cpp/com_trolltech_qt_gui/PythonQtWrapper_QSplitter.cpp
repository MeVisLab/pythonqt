#include "PythonQtWrapper_QSplitter.h"

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qinputcontext.h>
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
#include <qsize.h>
#include <qsizepolicy.h>
#include <qsplitter.h>
#include <qstyle.h>
#include <qtextstream.h>
#include <qwidget.h>

QSplitter* PythonQtWrapper_QSplitter::new_QSplitter(QWidget*  parent)
{ 
return new QSplitter(parent); }

QSplitter* PythonQtWrapper_QSplitter::new_QSplitter(Qt::Orientation  arg__1, QWidget*  parent)
{ 
return new QSplitter(arg__1, parent); }

void PythonQtWrapper_QSplitter::addWidget(QSplitter* theWrappedObject, QWidget*  widget)
{
theWrappedObject->addWidget(widget);
}

bool  PythonQtWrapper_QSplitter::childrenCollapsible(QSplitter* theWrappedObject) const
{
return theWrappedObject->childrenCollapsible();
}

int  PythonQtWrapper_QSplitter::count(QSplitter* theWrappedObject) const
{
return theWrappedObject->count();
}

void PythonQtWrapper_QSplitter::getRange(QSplitter* theWrappedObject, int  index, int*  arg__2, int*  arg__3) const
{
theWrappedObject->getRange(index, arg__2, arg__3);
}

QSplitterHandle*  PythonQtWrapper_QSplitter::handle(QSplitter* theWrappedObject, int  index) const
{
return theWrappedObject->handle(index);
}

int  PythonQtWrapper_QSplitter::handleWidth(QSplitter* theWrappedObject) const
{
return theWrappedObject->handleWidth();
}

int  PythonQtWrapper_QSplitter::indexOf(QSplitter* theWrappedObject, QWidget*  w) const
{
return theWrappedObject->indexOf(w);
}

void PythonQtWrapper_QSplitter::insertWidget(QSplitter* theWrappedObject, int  index, QWidget*  widget)
{
theWrappedObject->insertWidget(index, widget);
}

bool  PythonQtWrapper_QSplitter::isCollapsible(QSplitter* theWrappedObject, int  index) const
{
return theWrappedObject->isCollapsible(index);
}

QSize  PythonQtWrapper_QSplitter::minimumSizeHint(QSplitter* theWrappedObject) const
{
return theWrappedObject->minimumSizeHint();
}

bool  PythonQtWrapper_QSplitter::opaqueResize(QSplitter* theWrappedObject) const
{
return theWrappedObject->opaqueResize();
}

void PythonQtWrapper_QSplitter::writeTo(QSplitter* theWrappedObject, QTextStream&  arg__1)
{
arg__1 <<  *theWrappedObject;
}

void PythonQtWrapper_QSplitter::readFrom(QSplitter* theWrappedObject, QTextStream&  arg__1)
{
arg__1 >>  *theWrappedObject;
}

Qt::Orientation  PythonQtWrapper_QSplitter::orientation(QSplitter* theWrappedObject) const
{
return theWrappedObject->orientation();
}

void PythonQtWrapper_QSplitter::refresh(QSplitter* theWrappedObject)
{
theWrappedObject->refresh();
}

bool  PythonQtWrapper_QSplitter::restoreState(QSplitter* theWrappedObject, const QByteArray&  state)
{
return theWrappedObject->restoreState(state);
}

QByteArray  PythonQtWrapper_QSplitter::saveState(QSplitter* theWrappedObject) const
{
return theWrappedObject->saveState();
}

void PythonQtWrapper_QSplitter::setChildrenCollapsible(QSplitter* theWrappedObject, bool  arg__1)
{
theWrappedObject->setChildrenCollapsible(arg__1);
}

void PythonQtWrapper_QSplitter::setCollapsible(QSplitter* theWrappedObject, int  index, bool  arg__2)
{
theWrappedObject->setCollapsible(index, arg__2);
}

void PythonQtWrapper_QSplitter::setHandleWidth(QSplitter* theWrappedObject, int  arg__1)
{
theWrappedObject->setHandleWidth(arg__1);
}

void PythonQtWrapper_QSplitter::setOpaqueResize(QSplitter* theWrappedObject, bool  opaque)
{
theWrappedObject->setOpaqueResize(opaque);
}

void PythonQtWrapper_QSplitter::setOrientation(QSplitter* theWrappedObject, Qt::Orientation  arg__1)
{
theWrappedObject->setOrientation(arg__1);
}

void PythonQtWrapper_QSplitter::setSizes(QSplitter* theWrappedObject, const QList<int >&  list)
{
theWrappedObject->setSizes(list);
}

void PythonQtWrapper_QSplitter::setStretchFactor(QSplitter* theWrappedObject, int  index, int  stretch)
{
theWrappedObject->setStretchFactor(index, stretch);
}

QSize  PythonQtWrapper_QSplitter::sizeHint(QSplitter* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

QList<int >  PythonQtWrapper_QSplitter::sizes(QSplitter* theWrappedObject) const
{
return theWrappedObject->sizes();
}

QWidget*  PythonQtWrapper_QSplitter::widget(QSplitter* theWrappedObject, int  index) const
{
return theWrappedObject->widget(index);
}

