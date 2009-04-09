#include "PythonQtWrapper_QFormLayout.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>
#include <qsize.h>
#include <qwidget.h>

QFormLayout* PythonQtWrapper_QFormLayout::new_QFormLayout(QWidget*  parent)
{ 
return new QFormLayout(parent); }

void PythonQtWrapper_QFormLayout::addItem(QFormLayout* theWrappedObject, QLayoutItem*  item)
{
theWrappedObject->addItem(item);
}

void PythonQtWrapper_QFormLayout::addRow(QFormLayout* theWrappedObject, QLayout*  layout)
{
theWrappedObject->addRow(layout);
}

void PythonQtWrapper_QFormLayout::addRow(QFormLayout* theWrappedObject, QWidget*  label, QLayout*  field)
{
theWrappedObject->addRow(label, field);
}

void PythonQtWrapper_QFormLayout::addRow(QFormLayout* theWrappedObject, QWidget*  label, QWidget*  field)
{
theWrappedObject->addRow(label, field);
}

void PythonQtWrapper_QFormLayout::addRow(QFormLayout* theWrappedObject, QWidget*  widget)
{
theWrappedObject->addRow(widget);
}

void PythonQtWrapper_QFormLayout::addRow(QFormLayout* theWrappedObject, const QString&  labelText, QLayout*  field)
{
theWrappedObject->addRow(labelText, field);
}

void PythonQtWrapper_QFormLayout::addRow(QFormLayout* theWrappedObject, const QString&  labelText, QWidget*  field)
{
theWrappedObject->addRow(labelText, field);
}

int  PythonQtWrapper_QFormLayout::count(QFormLayout* theWrappedObject) const
{
return theWrappedObject->count();
}

Qt::Orientations  PythonQtWrapper_QFormLayout::expandingDirections(QFormLayout* theWrappedObject) const
{
return theWrappedObject->expandingDirections();
}

QFormLayout::FieldGrowthPolicy  PythonQtWrapper_QFormLayout::fieldGrowthPolicy(QFormLayout* theWrappedObject) const
{
return theWrappedObject->fieldGrowthPolicy();
}

Qt::Alignment  PythonQtWrapper_QFormLayout::formAlignment(QFormLayout* theWrappedObject) const
{
return theWrappedObject->formAlignment();
}

void PythonQtWrapper_QFormLayout::getItemPosition(QFormLayout* theWrappedObject, int  index, int*  rowPtr, QFormLayout::ItemRole*  rolePtr) const
{
theWrappedObject->getItemPosition(index, rowPtr, rolePtr);
}

void PythonQtWrapper_QFormLayout::getLayoutPosition(QFormLayout* theWrappedObject, QLayout*  layout, int*  rowPtr, QFormLayout::ItemRole*  rolePtr) const
{
theWrappedObject->getLayoutPosition(layout, rowPtr, rolePtr);
}

void PythonQtWrapper_QFormLayout::getWidgetPosition(QFormLayout* theWrappedObject, QWidget*  widget, int*  rowPtr, QFormLayout::ItemRole*  rolePtr) const
{
theWrappedObject->getWidgetPosition(widget, rowPtr, rolePtr);
}

bool  PythonQtWrapper_QFormLayout::hasHeightForWidth(QFormLayout* theWrappedObject) const
{
return theWrappedObject->hasHeightForWidth();
}

int  PythonQtWrapper_QFormLayout::heightForWidth(QFormLayout* theWrappedObject, int  width) const
{
return theWrappedObject->heightForWidth(width);
}

int  PythonQtWrapper_QFormLayout::horizontalSpacing(QFormLayout* theWrappedObject) const
{
return theWrappedObject->horizontalSpacing();
}

void PythonQtWrapper_QFormLayout::insertRow(QFormLayout* theWrappedObject, int  row, QLayout*  layout)
{
theWrappedObject->insertRow(row, layout);
}

void PythonQtWrapper_QFormLayout::insertRow(QFormLayout* theWrappedObject, int  row, QWidget*  label, QLayout*  field)
{
theWrappedObject->insertRow(row, label, field);
}

void PythonQtWrapper_QFormLayout::insertRow(QFormLayout* theWrappedObject, int  row, QWidget*  label, QWidget*  field)
{
theWrappedObject->insertRow(row, label, field);
}

void PythonQtWrapper_QFormLayout::insertRow(QFormLayout* theWrappedObject, int  row, QWidget*  widget)
{
theWrappedObject->insertRow(row, widget);
}

void PythonQtWrapper_QFormLayout::insertRow(QFormLayout* theWrappedObject, int  row, const QString&  labelText, QLayout*  field)
{
theWrappedObject->insertRow(row, labelText, field);
}

void PythonQtWrapper_QFormLayout::insertRow(QFormLayout* theWrappedObject, int  row, const QString&  labelText, QWidget*  field)
{
theWrappedObject->insertRow(row, labelText, field);
}

void PythonQtWrapper_QFormLayout::invalidate(QFormLayout* theWrappedObject)
{
theWrappedObject->invalidate();
}

QLayoutItem*  PythonQtWrapper_QFormLayout::itemAt(QFormLayout* theWrappedObject, int  index) const
{
return theWrappedObject->itemAt(index);
}

QLayoutItem*  PythonQtWrapper_QFormLayout::itemAt(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role) const
{
return theWrappedObject->itemAt(row, role);
}

Qt::Alignment  PythonQtWrapper_QFormLayout::labelAlignment(QFormLayout* theWrappedObject) const
{
return theWrappedObject->labelAlignment();
}

QWidget*  PythonQtWrapper_QFormLayout::labelForField(QFormLayout* theWrappedObject, QLayout*  field) const
{
return theWrappedObject->labelForField(field);
}

QWidget*  PythonQtWrapper_QFormLayout::labelForField(QFormLayout* theWrappedObject, QWidget*  field) const
{
return theWrappedObject->labelForField(field);
}

QSize  PythonQtWrapper_QFormLayout::minimumSize(QFormLayout* theWrappedObject) const
{
return theWrappedObject->minimumSize();
}

int  PythonQtWrapper_QFormLayout::rowCount(QFormLayout* theWrappedObject) const
{
return theWrappedObject->rowCount();
}

QFormLayout::RowWrapPolicy  PythonQtWrapper_QFormLayout::rowWrapPolicy(QFormLayout* theWrappedObject) const
{
return theWrappedObject->rowWrapPolicy();
}

void PythonQtWrapper_QFormLayout::setFieldGrowthPolicy(QFormLayout* theWrappedObject, QFormLayout::FieldGrowthPolicy  policy)
{
theWrappedObject->setFieldGrowthPolicy(policy);
}

void PythonQtWrapper_QFormLayout::setFormAlignment(QFormLayout* theWrappedObject, Qt::Alignment  alignment)
{
theWrappedObject->setFormAlignment(alignment);
}

void PythonQtWrapper_QFormLayout::setGeometry(QFormLayout* theWrappedObject, const QRect&  rect)
{
theWrappedObject->setGeometry(rect);
}

void PythonQtWrapper_QFormLayout::setHorizontalSpacing(QFormLayout* theWrappedObject, int  spacing)
{
theWrappedObject->setHorizontalSpacing(spacing);
}

void PythonQtWrapper_QFormLayout::setItem(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role, QLayoutItem*  item)
{
theWrappedObject->setItem(row, role, item);
}

void PythonQtWrapper_QFormLayout::setLabelAlignment(QFormLayout* theWrappedObject, Qt::Alignment  alignment)
{
theWrappedObject->setLabelAlignment(alignment);
}

void PythonQtWrapper_QFormLayout::setLayout(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role, QLayout*  layout)
{
theWrappedObject->setLayout(row, role, layout);
}

void PythonQtWrapper_QFormLayout::setRowWrapPolicy(QFormLayout* theWrappedObject, QFormLayout::RowWrapPolicy  policy)
{
theWrappedObject->setRowWrapPolicy(policy);
}

void PythonQtWrapper_QFormLayout::setSpacing(QFormLayout* theWrappedObject, int  arg__1)
{
theWrappedObject->setSpacing(arg__1);
}

void PythonQtWrapper_QFormLayout::setVerticalSpacing(QFormLayout* theWrappedObject, int  spacing)
{
theWrappedObject->setVerticalSpacing(spacing);
}

void PythonQtWrapper_QFormLayout::setWidget(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role, QWidget*  widget)
{
theWrappedObject->setWidget(row, role, widget);
}

QSize  PythonQtWrapper_QFormLayout::sizeHint(QFormLayout* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

int  PythonQtWrapper_QFormLayout::spacing(QFormLayout* theWrappedObject) const
{
return theWrappedObject->spacing();
}

QLayoutItem*  PythonQtWrapper_QFormLayout::takeAt(QFormLayout* theWrappedObject, int  index)
{
return theWrappedObject->takeAt(index);
}

int  PythonQtWrapper_QFormLayout::verticalSpacing(QFormLayout* theWrappedObject) const
{
return theWrappedObject->verticalSpacing();
}

