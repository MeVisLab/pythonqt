#ifndef PYTHONQTWRAPPER_QSTYLEDITEMDELEGATE_H
#define PYTHONQTWRAPPER_QSTYLEDITEMDELEGATE_H

#include <qstyleditemdelegate.h>
#include <QObject>

#include <QVariant>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qitemeditorfactory.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qpainter.h>
#include <qsize.h>
#include <qstyleditemdelegate.h>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtWrapper_QStyledItemDelegate : public QObject
{ Q_OBJECT
public:
public slots:
QStyledItemDelegate* new_QStyledItemDelegate(QObject*  parent = 0);
void delete_QStyledItemDelegate(QStyledItemDelegate* obj) { delete obj; } 
   QWidget*  createEditor(QStyledItemDelegate* theWrappedObject, QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   QString  displayText(QStyledItemDelegate* theWrappedObject, const QVariant&  value, const QLocale&  locale) const;
   QItemEditorFactory*  itemEditorFactory(QStyledItemDelegate* theWrappedObject) const;
   void paint(QStyledItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   void setEditorData(QStyledItemDelegate* theWrappedObject, QWidget*  editor, const QModelIndex&  index) const;
   void setItemEditorFactory(QStyledItemDelegate* theWrappedObject, QItemEditorFactory*  factory);
   void setModelData(QStyledItemDelegate* theWrappedObject, QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const;
   QSize  sizeHint(QStyledItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   void updateEditorGeometry(QStyledItemDelegate* theWrappedObject, QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
};

#endif // PYTHONQTWRAPPER_QSTYLEDITEMDELEGATE_H
