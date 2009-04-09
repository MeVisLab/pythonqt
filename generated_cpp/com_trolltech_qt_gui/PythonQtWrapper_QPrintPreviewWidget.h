#ifndef PYTHONQTWRAPPER_QPRINTPREVIEWWIDGET_H
#define PYTHONQTWRAPPER_QPRINTPREVIEWWIDGET_H

#include <qprintpreviewwidget.h>
#include <QObject>

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

class PythonQtWrapper_QPrintPreviewWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ZoomMode ViewMode )
enum ZoomMode{
  CustomZoom = QPrintPreviewWidget::CustomZoom,   FitToWidth = QPrintPreviewWidget::FitToWidth,   FitInView = QPrintPreviewWidget::FitInView};
enum ViewMode{
  SinglePageView = QPrintPreviewWidget::SinglePageView,   FacingPagesView = QPrintPreviewWidget::FacingPagesView,   AllPagesView = QPrintPreviewWidget::AllPagesView};
public slots:
QPrintPreviewWidget* new_QPrintPreviewWidget(QPrinter*  printer, QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
QPrintPreviewWidget* new_QPrintPreviewWidget(QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
void delete_QPrintPreviewWidget(QPrintPreviewWidget* obj) { delete obj; } 
   int  currentPage(QPrintPreviewWidget* theWrappedObject) const;
   int  numPages(QPrintPreviewWidget* theWrappedObject) const;
   QPrinter::Orientation  orientation(QPrintPreviewWidget* theWrappedObject) const;
   void setVisible(QPrintPreviewWidget* theWrappedObject, bool  visible);
   QPrintPreviewWidget::ViewMode  viewMode(QPrintPreviewWidget* theWrappedObject) const;
   qreal  zoomFactor(QPrintPreviewWidget* theWrappedObject) const;
   QPrintPreviewWidget::ZoomMode  zoomMode(QPrintPreviewWidget* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QPRINTPREVIEWWIDGET_H
