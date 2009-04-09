#include "PythonQtWrapper_QSizeGrip.h"

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
#include <qsizegrip.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qwidget.h>

QSizeGrip* PythonQtWrapper_QSizeGrip::new_QSizeGrip(QWidget*  parent)
{ 
return new QSizeGrip(parent); }

void PythonQtWrapper_QSizeGrip::setVisible(QSizeGrip* theWrappedObject, bool  arg__1)
{
theWrappedObject->setVisible(arg__1);
}

QSize  PythonQtWrapper_QSizeGrip::sizeHint(QSizeGrip* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

