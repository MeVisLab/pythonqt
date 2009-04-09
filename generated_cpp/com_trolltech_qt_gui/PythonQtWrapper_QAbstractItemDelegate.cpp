#include "PythonQtWrapper_QAbstractItemDelegate.h"

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

QWidget*  PythonQtWrapper_QAbstractItemDelegate::createEditor(QAbstractItemDelegate* theWrappedObject, QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const
{
return theWrappedObject->createEditor(parent, option, index);
}

bool  PythonQtWrapper_QAbstractItemDelegate::editorEvent(QAbstractItemDelegate* theWrappedObject, QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index)
{
return theWrappedObject->editorEvent(event, model, option, index);
}

void PythonQtWrapper_QAbstractItemDelegate::paint(QAbstractItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const
{
theWrappedObject->paint(painter, option, index);
}

void PythonQtWrapper_QAbstractItemDelegate::setEditorData(QAbstractItemDelegate* theWrappedObject, QWidget*  editor, const QModelIndex&  index) const
{
theWrappedObject->setEditorData(editor, index);
}

void PythonQtWrapper_QAbstractItemDelegate::setModelData(QAbstractItemDelegate* theWrappedObject, QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const
{
theWrappedObject->setModelData(editor, model, index);
}

QSize  PythonQtWrapper_QAbstractItemDelegate::sizeHint(QAbstractItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QModelIndex&  index) const
{
return theWrappedObject->sizeHint(option, index);
}

void PythonQtWrapper_QAbstractItemDelegate::updateEditorGeometry(QAbstractItemDelegate* theWrappedObject, QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const
{
theWrappedObject->updateEditorGeometry(editor, option, index);
}

