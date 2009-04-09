#include "PythonQtWrapper_QSvgWidget.h"

#include <QByteArray>
#include <QSize>
#include <QSvgRenderer>
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
#include <qstyle.h>
#include <qsvgrenderer.h>
#include <qsvgwidget.h>
#include <qwidget.h>

QSvgWidget* PythonQtWrapper_QSvgWidget::new_QSvgWidget(QWidget*  parent)
{ 
return new QSvgWidget(parent); }

QSvgWidget* PythonQtWrapper_QSvgWidget::new_QSvgWidget(const QString&  file, QWidget*  parent)
{ 
return new QSvgWidget(file, parent); }

QSvgRenderer*  PythonQtWrapper_QSvgWidget::renderer(QSvgWidget* theWrappedObject) const
{
return theWrappedObject->renderer();
}

QSize  PythonQtWrapper_QSvgWidget::sizeHint(QSvgWidget* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

