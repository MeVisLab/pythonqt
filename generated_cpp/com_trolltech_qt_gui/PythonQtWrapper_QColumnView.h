#ifndef PYTHONQTWRAPPER_QCOLUMNVIEW_H
#define PYTHONQTWRAPPER_QCOLUMNVIEW_H

#include <qcolumnview.h>
#include <QObject>

#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolumnview.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qitemselectionmodel.h>
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
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtWrapper_QColumnView : public QObject
{ Q_OBJECT
public:
public slots:
QColumnView* new_QColumnView(QWidget*  parent = 0);
void delete_QColumnView(QColumnView* obj) { delete obj; } 
   QList<int >  columnWidths(QColumnView* theWrappedObject) const;
   QModelIndex  indexAt(QColumnView* theWrappedObject, const QPoint&  point) const;
   QWidget*  previewWidget(QColumnView* theWrappedObject) const;
   bool  resizeGripsVisible(QColumnView* theWrappedObject) const;
   void scrollTo(QColumnView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
   void selectAll(QColumnView* theWrappedObject);
   void setColumnWidths(QColumnView* theWrappedObject, const QList<int >&  list);
   void setModel(QColumnView* theWrappedObject, QAbstractItemModel*  model);
   void setPreviewWidget(QColumnView* theWrappedObject, QWidget*  widget);
   void setResizeGripsVisible(QColumnView* theWrappedObject, bool  visible);
   void setRootIndex(QColumnView* theWrappedObject, const QModelIndex&  index);
   void setSelectionModel(QColumnView* theWrappedObject, QItemSelectionModel*  selectionModel);
   QSize  sizeHint(QColumnView* theWrappedObject) const;
   QRect  visualRect(QColumnView* theWrappedObject, const QModelIndex&  index) const;
};

#endif // PYTHONQTWRAPPER_QCOLUMNVIEW_H
