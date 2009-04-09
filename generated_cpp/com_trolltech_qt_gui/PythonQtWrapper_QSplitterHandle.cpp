#include "PythonQtWrapper_QSplitterHandle.h"

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
#include <qwidget.h>

QSplitterHandle* PythonQtWrapper_QSplitterHandle::new_QSplitterHandle(Qt::Orientation  o, QSplitter*  parent)
{ 
return new QSplitterHandle(o, parent); }

bool  PythonQtWrapper_QSplitterHandle::opaqueResize(QSplitterHandle* theWrappedObject) const
{
return theWrappedObject->opaqueResize();
}

Qt::Orientation  PythonQtWrapper_QSplitterHandle::orientation(QSplitterHandle* theWrappedObject) const
{
return theWrappedObject->orientation();
}

void PythonQtWrapper_QSplitterHandle::setOrientation(QSplitterHandle* theWrappedObject, Qt::Orientation  o)
{
theWrappedObject->setOrientation(o);
}

QSize  PythonQtWrapper_QSplitterHandle::sizeHint(QSplitterHandle* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

QSplitter*  PythonQtWrapper_QSplitterHandle::splitter(QSplitterHandle* theWrappedObject) const
{
return theWrappedObject->splitter();
}

