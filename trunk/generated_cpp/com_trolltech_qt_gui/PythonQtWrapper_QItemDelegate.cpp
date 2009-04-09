#include "PythonQtWrapper_QItemDelegate.h"

#include <QVariant>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qfont.h>
#include <qitemdelegate.h>
#include <qitemeditorfactory.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qsize.h>
#include <qstyleoption.h>
#include <qwidget.h>

QItemDelegate* PythonQtWrapper_QItemDelegate::new_QItemDelegate(QObject*  parent)
{ 
return new QItemDelegate(parent); }

QWidget*  PythonQtWrapper_QItemDelegate::createEditor(QItemDelegate* theWrappedObject, QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const
{
return theWrappedObject->createEditor(parent, option, index);
}

bool  PythonQtWrapper_QItemDelegate::hasClipping(QItemDelegate* theWrappedObject) const
{
return theWrappedObject->hasClipping();
}

QItemEditorFactory*  PythonQtWrapper_QItemDelegate::itemEditorFactory(QItemDelegate* theWrappedObject) const
{
return theWrappedObject->itemEditorFactory();
}

void PythonQtWrapper_QItemDelegate::paint(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const
{
theWrappedObject->paint(painter, option, index);
}

void PythonQtWrapper_QItemDelegate::setClipping(QItemDelegate* theWrappedObject, bool  clip)
{
theWrappedObject->setClipping(clip);
}

void PythonQtWrapper_QItemDelegate::setEditorData(QItemDelegate* theWrappedObject, QWidget*  editor, const QModelIndex&  index) const
{
theWrappedObject->setEditorData(editor, index);
}

void PythonQtWrapper_QItemDelegate::setItemEditorFactory(QItemDelegate* theWrappedObject, QItemEditorFactory*  factory)
{
theWrappedObject->setItemEditorFactory(factory);
}

void PythonQtWrapper_QItemDelegate::setModelData(QItemDelegate* theWrappedObject, QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const
{
theWrappedObject->setModelData(editor, model, index);
}

QSize  PythonQtWrapper_QItemDelegate::sizeHint(QItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QModelIndex&  index) const
{
return theWrappedObject->sizeHint(option, index);
}

void PythonQtWrapper_QItemDelegate::updateEditorGeometry(QItemDelegate* theWrappedObject, QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const
{
theWrappedObject->updateEditorGeometry(editor, option, index);
}

