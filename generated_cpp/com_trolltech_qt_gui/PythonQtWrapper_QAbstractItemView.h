#ifndef PYTHONQTWRAPPER_QABSTRACTITEMVIEW_H
#define PYTHONQTWRAPPER_QABSTRACTITEMVIEW_H

#include <qabstractitemview.h>
#include <QObject>

#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
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

class PythonQtWrapper_QAbstractItemView : public QObject
{ Q_OBJECT
public:
Q_ENUMS(EditTrigger )
enum EditTrigger{
  NoEditTriggers = QAbstractItemView::NoEditTriggers,   CurrentChanged = QAbstractItemView::CurrentChanged,   DoubleClicked = QAbstractItemView::DoubleClicked,   SelectedClicked = QAbstractItemView::SelectedClicked,   EditKeyPressed = QAbstractItemView::EditKeyPressed,   AnyKeyPressed = QAbstractItemView::AnyKeyPressed,   AllEditTriggers = QAbstractItemView::AllEditTriggers};
public slots:
void delete_QAbstractItemView(QAbstractItemView* obj) { delete obj; } 
   bool  alternatingRowColors(QAbstractItemView* theWrappedObject) const;
   int  autoScrollMargin(QAbstractItemView* theWrappedObject) const;
   void closePersistentEditor(QAbstractItemView* theWrappedObject, const QModelIndex&  index);
   QModelIndex  currentIndex(QAbstractItemView* theWrappedObject) const;
   QAbstractItemView::DragDropMode  dragDropMode(QAbstractItemView* theWrappedObject) const;
   bool  dragDropOverwriteMode(QAbstractItemView* theWrappedObject) const;
   bool  dragEnabled(QAbstractItemView* theWrappedObject) const;
   QAbstractItemView::EditTriggers  editTriggers(QAbstractItemView* theWrappedObject) const;
   bool  hasAutoScroll(QAbstractItemView* theWrappedObject) const;
   QAbstractItemView::ScrollMode  horizontalScrollMode(QAbstractItemView* theWrappedObject) const;
   QSize  iconSize(QAbstractItemView* theWrappedObject) const;
   QModelIndex  indexAt(QAbstractItemView* theWrappedObject, const QPoint&  point) const;
   QWidget*  indexWidget(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const;
   QVariant  inputMethodQuery(QAbstractItemView* theWrappedObject, Qt::InputMethodQuery  query) const;
   QAbstractItemDelegate*  itemDelegate(QAbstractItemView* theWrappedObject) const;
   QAbstractItemDelegate*  itemDelegate(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const;
   QAbstractItemDelegate*  itemDelegateForColumn(QAbstractItemView* theWrappedObject, int  column) const;
   QAbstractItemDelegate*  itemDelegateForRow(QAbstractItemView* theWrappedObject, int  row) const;
   void keyboardSearch(QAbstractItemView* theWrappedObject, const QString&  search);
   QAbstractItemModel*  model(QAbstractItemView* theWrappedObject) const;
   void openPersistentEditor(QAbstractItemView* theWrappedObject, const QModelIndex&  index);
   QModelIndex  rootIndex(QAbstractItemView* theWrappedObject) const;
   void scrollTo(QAbstractItemView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
   QAbstractItemView::SelectionBehavior  selectionBehavior(QAbstractItemView* theWrappedObject) const;
   QAbstractItemView::SelectionMode  selectionMode(QAbstractItemView* theWrappedObject) const;
   QItemSelectionModel*  selectionModel(QAbstractItemView* theWrappedObject) const;
   void setAlternatingRowColors(QAbstractItemView* theWrappedObject, bool  enable);
   void setAutoScroll(QAbstractItemView* theWrappedObject, bool  enable);
   void setAutoScrollMargin(QAbstractItemView* theWrappedObject, int  margin);
   void setDragDropMode(QAbstractItemView* theWrappedObject, QAbstractItemView::DragDropMode  behavior);
   void setDragDropOverwriteMode(QAbstractItemView* theWrappedObject, bool  overwrite);
   void setDragEnabled(QAbstractItemView* theWrappedObject, bool  enable);
   void setDropIndicatorShown(QAbstractItemView* theWrappedObject, bool  enable);
   void setEditTriggers(QAbstractItemView* theWrappedObject, QAbstractItemView::EditTriggers  triggers);
   void setHorizontalScrollMode(QAbstractItemView* theWrappedObject, QAbstractItemView::ScrollMode  mode);
   void setIconSize(QAbstractItemView* theWrappedObject, const QSize&  size);
   void setIndexWidget(QAbstractItemView* theWrappedObject, const QModelIndex&  index, QWidget*  widget);
   void setItemDelegate(QAbstractItemView* theWrappedObject, QAbstractItemDelegate*  delegate);
   void setItemDelegateForColumn(QAbstractItemView* theWrappedObject, int  column, QAbstractItemDelegate*  delegate);
   void setItemDelegateForRow(QAbstractItemView* theWrappedObject, int  row, QAbstractItemDelegate*  delegate);
   void setModel(QAbstractItemView* theWrappedObject, QAbstractItemModel*  model);
   void setSelectionBehavior(QAbstractItemView* theWrappedObject, QAbstractItemView::SelectionBehavior  behavior);
   void setSelectionMode(QAbstractItemView* theWrappedObject, QAbstractItemView::SelectionMode  mode);
   void setSelectionModel(QAbstractItemView* theWrappedObject, QItemSelectionModel*  selectionModel);
   void setTabKeyNavigation(QAbstractItemView* theWrappedObject, bool  enable);
   void setTextElideMode(QAbstractItemView* theWrappedObject, Qt::TextElideMode  mode);
   void setVerticalScrollMode(QAbstractItemView* theWrappedObject, QAbstractItemView::ScrollMode  mode);
   bool  showDropIndicator(QAbstractItemView* theWrappedObject) const;
   int  sizeHintForColumn(QAbstractItemView* theWrappedObject, int  column) const;
   QSize  sizeHintForIndex(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const;
   int  sizeHintForRow(QAbstractItemView* theWrappedObject, int  row) const;
   bool  tabKeyNavigation(QAbstractItemView* theWrappedObject) const;
   Qt::TextElideMode  textElideMode(QAbstractItemView* theWrappedObject) const;
   QAbstractItemView::ScrollMode  verticalScrollMode(QAbstractItemView* theWrappedObject) const;
   QRect  visualRect(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const;
};

#endif // PYTHONQTWRAPPER_QABSTRACTITEMVIEW_H
