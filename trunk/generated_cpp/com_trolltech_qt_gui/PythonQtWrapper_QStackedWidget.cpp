#include "PythonQtWrapper_QStackedWidget.h"

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
#include <qstackedwidget.h>
#include <qstyle.h>
#include <qwidget.h>

QStackedWidget* PythonQtWrapper_QStackedWidget::new_QStackedWidget(QWidget*  parent)
{ 
return new QStackedWidget(parent); }

int  PythonQtWrapper_QStackedWidget::addWidget(QStackedWidget* theWrappedObject, QWidget*  w)
{
return theWrappedObject->addWidget(w);
}

int  PythonQtWrapper_QStackedWidget::count(QStackedWidget* theWrappedObject) const
{
return theWrappedObject->count();
}

int  PythonQtWrapper_QStackedWidget::currentIndex(QStackedWidget* theWrappedObject) const
{
return theWrappedObject->currentIndex();
}

QWidget*  PythonQtWrapper_QStackedWidget::currentWidget(QStackedWidget* theWrappedObject) const
{
return theWrappedObject->currentWidget();
}

int  PythonQtWrapper_QStackedWidget::indexOf(QStackedWidget* theWrappedObject, QWidget*  arg__1) const
{
return theWrappedObject->indexOf(arg__1);
}

int  PythonQtWrapper_QStackedWidget::insertWidget(QStackedWidget* theWrappedObject, int  index, QWidget*  w)
{
return theWrappedObject->insertWidget(index, w);
}

void PythonQtWrapper_QStackedWidget::removeWidget(QStackedWidget* theWrappedObject, QWidget*  w)
{
theWrappedObject->removeWidget(w);
}

QWidget*  PythonQtWrapper_QStackedWidget::widget(QStackedWidget* theWrappedObject, int  arg__1) const
{
return theWrappedObject->widget(arg__1);
}

