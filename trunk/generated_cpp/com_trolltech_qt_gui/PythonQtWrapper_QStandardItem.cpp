#include "PythonQtWrapper_QStandardItem.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qbrush.h>
#include <qdatastream.h>
#include <qfont.h>
#include <qicon.h>
#include <qlist.h>
#include <qsize.h>
#include <qstandarditemmodel.h>

QStandardItem*  PythonQtShell_QStandardItem::clone() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "clone");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItem::staticMetaObject,
      "clone(QStandardItem*)");
      QStandardItem*  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QStandardItem* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QStandardItem::clone();
}
QVariant  PythonQtShell_QStandardItem::data(int  role) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "data");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItem::staticMetaObject,
      "data(QStandardItem*,int )");
      QVariant  returnValue;
    void* args[2] = {NULL, (void*)&role};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QVariant *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QStandardItem::data(role);
}
bool  PythonQtShell_QStandardItem::operator_less(const QStandardItem&  other) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "operator_less");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItem::staticMetaObject,
      "operator_less(QStandardItem*,const QStandardItem& )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&other};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QStandardItem::operator<(other);
}
void PythonQtShell_QStandardItem::read(QDataStream&  in)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "read");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItem::staticMetaObject,
      "read(QStandardItem*,QDataStream& )");
    void* args[2] = {NULL, (void*)&in};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QStandardItem::read(in);
}
void PythonQtShell_QStandardItem::setData(const QVariant&  value, int  role)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItem::staticMetaObject,
      "setData(QStandardItem*,const QVariant& ,int )");
    void* args[3] = {NULL, (void*)&value, (void*)&role};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QStandardItem::setData(value, role);
}
int  PythonQtShell_QStandardItem::type() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "type");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItem::staticMetaObject,
      "type(QStandardItem*)");
      int  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((int *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QStandardItem::type();
}
void PythonQtShell_QStandardItem::write(QDataStream&  out) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "write");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItem::staticMetaObject,
      "write(QStandardItem*,QDataStream& )");
    void* args[2] = {NULL, (void*)&out};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QStandardItem::write(out);
}
QStandardItem* PythonQtWrapper_QStandardItem::new_QStandardItem()
{ 
return new PythonQtShell_QStandardItem(); }

QStandardItem* PythonQtWrapper_QStandardItem::new_QStandardItem(const QIcon&  icon, const QString&  text)
{ 
return new PythonQtShell_QStandardItem(icon, text); }

QStandardItem* PythonQtWrapper_QStandardItem::new_QStandardItem(const QString&  text)
{ 
return new PythonQtShell_QStandardItem(text); }

QStandardItem* PythonQtWrapper_QStandardItem::new_QStandardItem(int  rows, int  columns)
{ 
return new PythonQtShell_QStandardItem(rows, columns); }

QStandardItem*  PythonQtWrapper_QStandardItem::child(QStandardItem* theWrappedObject, int  row, int  column) const
{
return  theWrappedObject->child(row, column);
}

void PythonQtWrapper_QStandardItem::insertColumns(QStandardItem* theWrappedObject, int  column, int  count)
{
 theWrappedObject->insertColumns(column, count);
}

void PythonQtWrapper_QStandardItem::setSizeHint(QStandardItem* theWrappedObject, const QSize&  sizeHint)
{
 theWrappedObject->setSizeHint(sizeHint);
}

QFont  PythonQtWrapper_QStandardItem::font(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->font();
}

void PythonQtWrapper_QStandardItem::setCheckable(QStandardItem* theWrappedObject, bool  checkable)
{
 theWrappedObject->setCheckable(checkable);
}

void PythonQtWrapper_QStandardItem::setTextAlignment(QStandardItem* theWrappedObject, Qt::Alignment  textAlignment)
{
 theWrappedObject->setTextAlignment(textAlignment);
}

QString  PythonQtWrapper_QStandardItem::accessibleDescription(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->accessibleDescription();
}

void PythonQtWrapper_QStandardItem::setFlags(QStandardItem* theWrappedObject, Qt::ItemFlags  flags)
{
 theWrappedObject->setFlags(flags);
}

bool  PythonQtWrapper_QStandardItem::hasChildren(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->hasChildren();
}

void PythonQtWrapper_QStandardItem::setAccessibleText(QStandardItem* theWrappedObject, const QString&  accessibleText)
{
 theWrappedObject->setAccessibleText(accessibleText);
}

void PythonQtWrapper_QStandardItem::setEditable(QStandardItem* theWrappedObject, bool  editable)
{
 theWrappedObject->setEditable(editable);
}

QBrush  PythonQtWrapper_QStandardItem::foreground(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->foreground();
}

QSize  PythonQtWrapper_QStandardItem::sizeHint(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->sizeHint();
}

void PythonQtWrapper_QStandardItem::removeColumn(QStandardItem* theWrappedObject, int  column)
{
 theWrappedObject->removeColumn(column);
}

void PythonQtWrapper_QStandardItem::setData(QStandardItem* theWrappedObject, const QVariant&  value, int  role)
{
 ((PythonQtPublicPromoter_QStandardItem*)theWrappedObject)->promoted_setData(value, role);
}

QModelIndex  PythonQtWrapper_QStandardItem::index(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->index();
}

int  PythonQtWrapper_QStandardItem::type(QStandardItem* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QStandardItem*)theWrappedObject)->promoted_type();
}

void PythonQtWrapper_QStandardItem::insertRows(QStandardItem* theWrappedObject, int  row, const QList<QStandardItem* >&  items)
{
 theWrappedObject->insertRows(row, items);
}

int  PythonQtWrapper_QStandardItem::column(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->column();
}

void PythonQtWrapper_QStandardItem::appendRow(QStandardItem* theWrappedObject, const QList<QStandardItem* >&  items)
{
 theWrappedObject->appendRow(items);
}

void PythonQtWrapper_QStandardItem::insertRow(QStandardItem* theWrappedObject, int  row, const QList<QStandardItem* >&  items)
{
 theWrappedObject->insertRow(row, items);
}

void PythonQtWrapper_QStandardItem::insertColumn(QStandardItem* theWrappedObject, int  column, const QList<QStandardItem* >&  items)
{
 theWrappedObject->insertColumn(column, items);
}

void PythonQtWrapper_QStandardItem::insertRows(QStandardItem* theWrappedObject, int  row, int  count)
{
 theWrappedObject->insertRows(row, count);
}

void PythonQtWrapper_QStandardItem::setChild(QStandardItem* theWrappedObject, int  row, int  column, QStandardItem*  item)
{
 theWrappedObject->setChild(row, column, item);
}

Qt::Alignment  PythonQtWrapper_QStandardItem::textAlignment(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->textAlignment();
}

void PythonQtWrapper_QStandardItem::setWhatsThis(QStandardItem* theWrappedObject, const QString&  whatsThis)
{
 theWrappedObject->setWhatsThis(whatsThis);
}

void PythonQtWrapper_QStandardItem::setFont(QStandardItem* theWrappedObject, const QFont&  font)
{
 theWrappedObject->setFont(font);
}

void PythonQtWrapper_QStandardItem::setEnabled(QStandardItem* theWrappedObject, bool  enabled)
{
 theWrappedObject->setEnabled(enabled);
}

void PythonQtWrapper_QStandardItem::setRowCount(QStandardItem* theWrappedObject, int  rows)
{
 theWrappedObject->setRowCount(rows);
}

void PythonQtWrapper_QStandardItem::removeRow(QStandardItem* theWrappedObject, int  row)
{
 theWrappedObject->removeRow(row);
}

void PythonQtWrapper_QStandardItem::setStatusTip(QStandardItem* theWrappedObject, const QString&  statusTip)
{
 theWrappedObject->setStatusTip(statusTip);
}

QStandardItemModel*  PythonQtWrapper_QStandardItem::model(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->model();
}

void PythonQtWrapper_QStandardItem::setTristate(QStandardItem* theWrappedObject, bool  tristate)
{
 theWrappedObject->setTristate(tristate);
}

int  PythonQtWrapper_QStandardItem::columnCount(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->columnCount();
}

void PythonQtWrapper_QStandardItem::setSelectable(QStandardItem* theWrappedObject, bool  selectable)
{
 theWrappedObject->setSelectable(selectable);
}

void PythonQtWrapper_QStandardItem::setText(QStandardItem* theWrappedObject, const QString&  text)
{
 theWrappedObject->setText(text);
}

QIcon  PythonQtWrapper_QStandardItem::icon(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->icon();
}

bool  PythonQtWrapper_QStandardItem::isEditable(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->isEditable();
}

void PythonQtWrapper_QStandardItem::sortChildren(QStandardItem* theWrappedObject, int  column, Qt::SortOrder  order)
{
 theWrappedObject->sortChildren(column, order);
}

QString  PythonQtWrapper_QStandardItem::accessibleText(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->accessibleText();
}

void PythonQtWrapper_QStandardItem::appendRows(QStandardItem* theWrappedObject, const QList<QStandardItem* >&  items)
{
 theWrappedObject->appendRows(items);
}

bool  PythonQtWrapper_QStandardItem::isSelectable(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->isSelectable();
}

bool  PythonQtWrapper_QStandardItem::isDropEnabled(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->isDropEnabled();
}

QString  PythonQtWrapper_QStandardItem::toolTip(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->toolTip();
}

void PythonQtWrapper_QStandardItem::writeTo(QStandardItem* theWrappedObject, QDataStream&  out)
{
out <<  (*theWrappedObject);
}

void PythonQtWrapper_QStandardItem::setChild(QStandardItem* theWrappedObject, int  row, QStandardItem*  item)
{
 theWrappedObject->setChild(row, item);
}

void PythonQtWrapper_QStandardItem::insertRow(QStandardItem* theWrappedObject, int  row, QStandardItem*  item)
{
 theWrappedObject->insertRow(row, item);
}

int  PythonQtWrapper_QStandardItem::row(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->row();
}

QString  PythonQtWrapper_QStandardItem::whatsThis(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->whatsThis();
}

QString  PythonQtWrapper_QStandardItem::statusTip(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->statusTip();
}

void PythonQtWrapper_QStandardItem::removeRows(QStandardItem* theWrappedObject, int  row, int  count)
{
 theWrappedObject->removeRows(row, count);
}

void PythonQtWrapper_QStandardItem::setDropEnabled(QStandardItem* theWrappedObject, bool  dropEnabled)
{
 theWrappedObject->setDropEnabled(dropEnabled);
}

void PythonQtWrapper_QStandardItem::setBackground(QStandardItem* theWrappedObject, const QBrush&  brush)
{
 theWrappedObject->setBackground(brush);
}

void PythonQtWrapper_QStandardItem::appendColumn(QStandardItem* theWrappedObject, const QList<QStandardItem* >&  items)
{
 theWrappedObject->appendColumn(items);
}

void PythonQtWrapper_QStandardItem::setForeground(QStandardItem* theWrappedObject, const QBrush&  brush)
{
 theWrappedObject->setForeground(brush);
}

QBrush  PythonQtWrapper_QStandardItem::background(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->background();
}

int  PythonQtWrapper_QStandardItem::rowCount(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->rowCount();
}

void PythonQtWrapper_QStandardItem::readFrom(QStandardItem* theWrappedObject, QDataStream&  in)
{
in >>  (*theWrappedObject);
}

Qt::ItemFlags  PythonQtWrapper_QStandardItem::flags(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->flags();
}

void PythonQtWrapper_QStandardItem::setColumnCount(QStandardItem* theWrappedObject, int  columns)
{
 theWrappedObject->setColumnCount(columns);
}

QStandardItem*  PythonQtWrapper_QStandardItem::clone(QStandardItem* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QStandardItem*)theWrappedObject)->promoted_clone();
}

QStandardItem*  PythonQtWrapper_QStandardItem::parent(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->parent();
}

bool  PythonQtWrapper_QStandardItem::isTristate(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->isTristate();
}

void PythonQtWrapper_QStandardItem::appendRow(QStandardItem* theWrappedObject, QStandardItem*  item)
{
 theWrappedObject->appendRow(item);
}

bool  PythonQtWrapper_QStandardItem::isEnabled(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->isEnabled();
}

QString  PythonQtWrapper_QStandardItem::text(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->text();
}

QList<QStandardItem* >  PythonQtWrapper_QStandardItem::takeColumn(QStandardItem* theWrappedObject, int  column)
{
return  theWrappedObject->takeColumn(column);
}

void PythonQtWrapper_QStandardItem::setCheckState(QStandardItem* theWrappedObject, Qt::CheckState  checkState)
{
 theWrappedObject->setCheckState(checkState);
}

QStandardItem*  PythonQtWrapper_QStandardItem::takeChild(QStandardItem* theWrappedObject, int  row, int  column)
{
return  theWrappedObject->takeChild(row, column);
}

void PythonQtWrapper_QStandardItem::setIcon(QStandardItem* theWrappedObject, const QIcon&  icon)
{
 theWrappedObject->setIcon(icon);
}

void PythonQtWrapper_QStandardItem::setToolTip(QStandardItem* theWrappedObject, const QString&  toolTip)
{
 theWrappedObject->setToolTip(toolTip);
}

bool  PythonQtWrapper_QStandardItem::isDragEnabled(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->isDragEnabled();
}

QVariant  PythonQtWrapper_QStandardItem::data(QStandardItem* theWrappedObject, int  role) const
{
return  ((PythonQtPublicPromoter_QStandardItem*)theWrappedObject)->promoted_data(role);
}

void PythonQtWrapper_QStandardItem::removeColumns(QStandardItem* theWrappedObject, int  column, int  count)
{
 theWrappedObject->removeColumns(column, count);
}

Qt::CheckState  PythonQtWrapper_QStandardItem::checkState(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->checkState();
}

void PythonQtWrapper_QStandardItem::setAccessibleDescription(QStandardItem* theWrappedObject, const QString&  accessibleDescription)
{
 theWrappedObject->setAccessibleDescription(accessibleDescription);
}

bool  PythonQtWrapper_QStandardItem::isCheckable(QStandardItem* theWrappedObject) const
{
return  theWrappedObject->isCheckable();
}

QList<QStandardItem* >  PythonQtWrapper_QStandardItem::takeRow(QStandardItem* theWrappedObject, int  row)
{
return  theWrappedObject->takeRow(row);
}

void PythonQtWrapper_QStandardItem::setDragEnabled(QStandardItem* theWrappedObject, bool  dragEnabled)
{
 theWrappedObject->setDragEnabled(dragEnabled);
}

