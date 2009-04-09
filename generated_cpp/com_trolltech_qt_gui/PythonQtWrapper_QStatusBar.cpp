#include "PythonQtWrapper_QStatusBar.h"

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
#include <qstatusbar.h>
#include <qstyle.h>
#include <qwidget.h>

QStatusBar* PythonQtWrapper_QStatusBar::new_QStatusBar(QWidget*  parent)
{ 
return new QStatusBar(parent); }

void PythonQtWrapper_QStatusBar::addPermanentWidget(QStatusBar* theWrappedObject, QWidget*  widget, int  stretch)
{
theWrappedObject->addPermanentWidget(widget, stretch);
}

void PythonQtWrapper_QStatusBar::addWidget(QStatusBar* theWrappedObject, QWidget*  widget, int  stretch)
{
theWrappedObject->addWidget(widget, stretch);
}

QString  PythonQtWrapper_QStatusBar::currentMessage(QStatusBar* theWrappedObject) const
{
return theWrappedObject->currentMessage();
}

int  PythonQtWrapper_QStatusBar::insertPermanentWidget(QStatusBar* theWrappedObject, int  index, QWidget*  widget, int  stretch)
{
return theWrappedObject->insertPermanentWidget(index, widget, stretch);
}

int  PythonQtWrapper_QStatusBar::insertWidget(QStatusBar* theWrappedObject, int  index, QWidget*  widget, int  stretch)
{
return theWrappedObject->insertWidget(index, widget, stretch);
}

bool  PythonQtWrapper_QStatusBar::isSizeGripEnabled(QStatusBar* theWrappedObject) const
{
return theWrappedObject->isSizeGripEnabled();
}

void PythonQtWrapper_QStatusBar::removeWidget(QStatusBar* theWrappedObject, QWidget*  widget)
{
theWrappedObject->removeWidget(widget);
}

void PythonQtWrapper_QStatusBar::setSizeGripEnabled(QStatusBar* theWrappedObject, bool  arg__1)
{
theWrappedObject->setSizeGripEnabled(arg__1);
}

