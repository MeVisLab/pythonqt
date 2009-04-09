#include "PythonQtWrapper_QPrintPreviewWidget.h"

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
#include <qprinter.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qwidget.h>

QPrintPreviewWidget* PythonQtWrapper_QPrintPreviewWidget::new_QPrintPreviewWidget(QPrinter*  printer, QWidget*  parent, Qt::WindowFlags  flags)
{ 
return new QPrintPreviewWidget(printer, parent, flags); }

QPrintPreviewWidget* PythonQtWrapper_QPrintPreviewWidget::new_QPrintPreviewWidget(QWidget*  parent, Qt::WindowFlags  flags)
{ 
return new QPrintPreviewWidget(parent, flags); }

int  PythonQtWrapper_QPrintPreviewWidget::currentPage(QPrintPreviewWidget* theWrappedObject) const
{
return theWrappedObject->currentPage();
}

int  PythonQtWrapper_QPrintPreviewWidget::numPages(QPrintPreviewWidget* theWrappedObject) const
{
return theWrappedObject->numPages();
}

QPrinter::Orientation  PythonQtWrapper_QPrintPreviewWidget::orientation(QPrintPreviewWidget* theWrappedObject) const
{
return theWrappedObject->orientation();
}

void PythonQtWrapper_QPrintPreviewWidget::setVisible(QPrintPreviewWidget* theWrappedObject, bool  visible)
{
theWrappedObject->setVisible(visible);
}

QPrintPreviewWidget::ViewMode  PythonQtWrapper_QPrintPreviewWidget::viewMode(QPrintPreviewWidget* theWrappedObject) const
{
return theWrappedObject->viewMode();
}

qreal  PythonQtWrapper_QPrintPreviewWidget::zoomFactor(QPrintPreviewWidget* theWrappedObject) const
{
return theWrappedObject->zoomFactor();
}

QPrintPreviewWidget::ZoomMode  PythonQtWrapper_QPrintPreviewWidget::zoomMode(QPrintPreviewWidget* theWrappedObject) const
{
return theWrappedObject->zoomMode();
}

