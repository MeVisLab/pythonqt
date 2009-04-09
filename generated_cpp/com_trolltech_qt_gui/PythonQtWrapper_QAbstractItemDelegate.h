#ifndef PYTHONQTWRAPPER_QABSTRACTITEMDELEGATE_H
#define PYTHONQTWRAPPER_QABSTRACTITEMDELEGATE_H

#include <qabstractitemdelegate.h>
#include <QObject>

#include <QVariant>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qsize.h>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtWrapper_QAbstractItemDelegate : public QObject
{ Q_OBJECT
public:
Q_ENUMS(EndEditHint )
enum EndEditHint{
  NoHint = QAbstractItemDelegate::NoHint,   EditNextItem = QAbstractItemDelegate::EditNextItem,   EditPreviousItem = QAbstractItemDelegate::EditPreviousItem,   SubmitModelCache = QAbstractItemDelegate::SubmitModelCache,   RevertModelCache = QAbstractItemDelegate::RevertModelCache};
public slots:
void delete_QAbstractItemDelegate(QAbstractItemDelegate* obj) { delete obj; } 
   QWidget*  createEditor(QAbstractItemDelegate* theWrappedObject, QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   bool  editorEvent(QAbstractItemDelegate* theWrappedObject, QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index);
   void paint(QAbstractItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   void setEditorData(QAbstractItemDelegate* theWrappedObject, QWidget*  editor, const QModelIndex&  index) const;
   void setModelData(QAbstractItemDelegate* theWrappedObject, QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const;
   QSize  sizeHint(QAbstractItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   void updateEditorGeometry(QAbstractItemDelegate* theWrappedObject, QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
};

#endif // PYTHONQTWRAPPER_QABSTRACTITEMDELEGATE_H
