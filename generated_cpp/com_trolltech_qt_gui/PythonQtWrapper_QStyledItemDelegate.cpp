#include "PythonQtWrapper_QStyledItemDelegate.h"

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

QStyledItemDelegate* PythonQtWrapper_QStyledItemDelegate::new_QStyledItemDelegate(QObject*  parent)
{ 
return new QStyledItemDelegate(parent); }

QWidget*  PythonQtWrapper_QStyledItemDelegate::createEditor(QStyledItemDelegate* theWrappedObject, QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const
{
return theWrappedObject->createEditor(parent, option, index);
}

QString  PythonQtWrapper_QStyledItemDelegate::displayText(QStyledItemDelegate* theWrappedObject, const QVariant&  value, const QLocale&  locale) const
{
return theWrappedObject->displayText(value, locale);
}

QItemEditorFactory*  PythonQtWrapper_QStyledItemDelegate::itemEditorFactory(QStyledItemDelegate* theWrappedObject) const
{
return theWrappedObject->itemEditorFactory();
}

void PythonQtWrapper_QStyledItemDelegate::paint(QStyledItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const
{
theWrappedObject->paint(painter, option, index);
}

void PythonQtWrapper_QStyledItemDelegate::setEditorData(QStyledItemDelegate* theWrappedObject, QWidget*  editor, const QModelIndex&  index) const
{
theWrappedObject->setEditorData(editor, index);
}

void PythonQtWrapper_QStyledItemDelegate::setItemEditorFactory(QStyledItemDelegate* theWrappedObject, QItemEditorFactory*  factory)
{
theWrappedObject->setItemEditorFactory(factory);
}

void PythonQtWrapper_QStyledItemDelegate::setModelData(QStyledItemDelegate* theWrappedObject, QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const
{
theWrappedObject->setModelData(editor, model, index);
}

QSize  PythonQtWrapper_QStyledItemDelegate::sizeHint(QStyledItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QModelIndex&  index) const
{
return theWrappedObject->sizeHint(option, index);
}

void PythonQtWrapper_QStyledItemDelegate::updateEditorGeometry(QStyledItemDelegate* theWrappedObject, QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const
{
theWrappedObject->updateEditorGeometry(editor, option, index);
}

