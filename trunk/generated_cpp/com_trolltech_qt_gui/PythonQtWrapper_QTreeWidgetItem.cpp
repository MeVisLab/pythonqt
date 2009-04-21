#include "PythonQtWrapper_QTreeWidgetItem.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbrush.h>
#include <qdatastream.h>
#include <qfont.h>
#include <qicon.h>
#include <qlist.h>
#include <qsize.h>
#include <qstringlist.h>
#include <qtreewidget.h>

QTreeWidgetItem*  PythonQtShell_QTreeWidgetItem::clone() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "clone");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeWidgetItem::staticMetaObject,
      "clone(QTreeWidgetItem*)");
      QTreeWidgetItem*  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QTreeWidgetItem* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTreeWidgetItem::clone();
}
QVariant  PythonQtShell_QTreeWidgetItem::data(int  column, int  role) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "data");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeWidgetItem::staticMetaObject,
      "data(QTreeWidgetItem*,int ,int )");
      QVariant  returnValue;
    void* args[3] = {NULL, (void*)&column, (void*)&role};
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
  return QTreeWidgetItem::data(column, role);
}
bool  PythonQtShell_QTreeWidgetItem::operator_less(const QTreeWidgetItem&  other) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "operator_less");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeWidgetItem::staticMetaObject,
      "operator_less(QTreeWidgetItem*,const QTreeWidgetItem& )");
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
  return QTreeWidgetItem::operator<(other);
}
void PythonQtShell_QTreeWidgetItem::read(QDataStream&  in)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "read");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeWidgetItem::staticMetaObject,
      "read(QTreeWidgetItem*,QDataStream& )");
    void* args[2] = {NULL, (void*)&in};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidgetItem::read(in);
}
void PythonQtShell_QTreeWidgetItem::setData(int  column, int  role, const QVariant&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeWidgetItem::staticMetaObject,
      "setData(QTreeWidgetItem*,int ,int ,const QVariant& )");
    void* args[4] = {NULL, (void*)&column, (void*)&role, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidgetItem::setData(column, role, value);
}
void PythonQtShell_QTreeWidgetItem::write(QDataStream&  out) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "write");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeWidgetItem::staticMetaObject,
      "write(QTreeWidgetItem*,QDataStream& )");
    void* args[2] = {NULL, (void*)&out};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeWidgetItem::write(out);
}
QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(QTreeWidget*  view, QTreeWidgetItem*  after, int  type)
{ 
return new PythonQtShell_QTreeWidgetItem(view, after, type); }

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(QTreeWidget*  view, const QStringList&  strings, int  type)
{ 
return new PythonQtShell_QTreeWidgetItem(view, strings, type); }

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(QTreeWidget*  view, int  type)
{ 
return new PythonQtShell_QTreeWidgetItem(view, type); }

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(QTreeWidgetItem*  parent, QTreeWidgetItem*  after, int  type)
{ 
return new PythonQtShell_QTreeWidgetItem(parent, after, type); }

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(QTreeWidgetItem*  parent, const QStringList&  strings, int  type)
{ 
return new PythonQtShell_QTreeWidgetItem(parent, strings, type); }

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(QTreeWidgetItem*  parent, int  type)
{ 
return new PythonQtShell_QTreeWidgetItem(parent, type); }

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(const QStringList&  strings, int  type)
{ 
return new PythonQtShell_QTreeWidgetItem(strings, type); }

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(int  type)
{ 
return new PythonQtShell_QTreeWidgetItem(type); }

void PythonQtWrapper_QTreeWidgetItem::setForeground(QTreeWidgetItem* theWrappedObject, int  column, const QBrush&  brush)
{
 theWrappedObject->setForeground(column, brush);
}

QString  PythonQtWrapper_QTreeWidgetItem::statusTip(QTreeWidgetItem* theWrappedObject, int  column) const
{
return  theWrappedObject->statusTip(column);
}

void PythonQtWrapper_QTreeWidgetItem::setWhatsThis(QTreeWidgetItem* theWrappedObject, int  column, const QString&  whatsThis)
{
 theWrappedObject->setWhatsThis(column, whatsThis);
}

void PythonQtWrapper_QTreeWidgetItem::insertChildren(QTreeWidgetItem* theWrappedObject, int  index, const QList<QTreeWidgetItem* >&  children)
{
 theWrappedObject->insertChildren(index, children);
}

QTreeWidget*  PythonQtWrapper_QTreeWidgetItem::treeWidget(QTreeWidgetItem* theWrappedObject) const
{
return  theWrappedObject->treeWidget();
}

bool  PythonQtWrapper_QTreeWidgetItem::isSelected(QTreeWidgetItem* theWrappedObject) const
{
return  theWrappedObject->isSelected();
}

int  PythonQtWrapper_QTreeWidgetItem::type(QTreeWidgetItem* theWrappedObject) const
{
return  theWrappedObject->type();
}

void PythonQtWrapper_QTreeWidgetItem::setHidden(QTreeWidgetItem* theWrappedObject, bool  hide)
{
 theWrappedObject->setHidden(hide);
}

QBrush  PythonQtWrapper_QTreeWidgetItem::background(QTreeWidgetItem* theWrappedObject, int  column) const
{
return  theWrappedObject->background(column);
}

void PythonQtWrapper_QTreeWidgetItem::setData(QTreeWidgetItem* theWrappedObject, int  column, int  role, const QVariant&  value)
{
 ((PythonQtPublicPromoter_QTreeWidgetItem*)theWrappedObject)->promoted_setData(column, role, value);
}

Qt::CheckState  PythonQtWrapper_QTreeWidgetItem::checkState(QTreeWidgetItem* theWrappedObject, int  column) const
{
return  theWrappedObject->checkState(column);
}

QString  PythonQtWrapper_QTreeWidgetItem::text(QTreeWidgetItem* theWrappedObject, int  column) const
{
return  theWrappedObject->text(column);
}

int  PythonQtWrapper_QTreeWidgetItem::columnCount(QTreeWidgetItem* theWrappedObject) const
{
return  theWrappedObject->columnCount();
}

void PythonQtWrapper_QTreeWidgetItem::insertChild(QTreeWidgetItem* theWrappedObject, int  index, QTreeWidgetItem*  child)
{
 theWrappedObject->insertChild(index, child);
}

void PythonQtWrapper_QTreeWidgetItem::removeChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child)
{
 theWrappedObject->removeChild(child);
}

void PythonQtWrapper_QTreeWidgetItem::setSelected(QTreeWidgetItem* theWrappedObject, bool  select)
{
 theWrappedObject->setSelected(select);
}

void PythonQtWrapper_QTreeWidgetItem::writeTo(QTreeWidgetItem* theWrappedObject, QDataStream&  out)
{
out <<  (*theWrappedObject);
}

QBrush  PythonQtWrapper_QTreeWidgetItem::foreground(QTreeWidgetItem* theWrappedObject, int  column) const
{
return  theWrappedObject->foreground(column);
}

bool  PythonQtWrapper_QTreeWidgetItem::isDisabled(QTreeWidgetItem* theWrappedObject) const
{
return  theWrappedObject->isDisabled();
}

void PythonQtWrapper_QTreeWidgetItem::setFont(QTreeWidgetItem* theWrappedObject, int  column, const QFont&  font)
{
 theWrappedObject->setFont(column, font);
}

QIcon  PythonQtWrapper_QTreeWidgetItem::icon(QTreeWidgetItem* theWrappedObject, int  column) const
{
return  theWrappedObject->icon(column);
}

bool  PythonQtWrapper_QTreeWidgetItem::isHidden(QTreeWidgetItem* theWrappedObject) const
{
return  theWrappedObject->isHidden();
}

void PythonQtWrapper_QTreeWidgetItem::setStatusTip(QTreeWidgetItem* theWrappedObject, int  column, const QString&  statusTip)
{
 theWrappedObject->setStatusTip(column, statusTip);
}

void PythonQtWrapper_QTreeWidgetItem::addChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child)
{
 theWrappedObject->addChild(child);
}

int  PythonQtWrapper_QTreeWidgetItem::indexOfChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child) const
{
return  theWrappedObject->indexOfChild(child);
}

void PythonQtWrapper_QTreeWidgetItem::setSizeHint(QTreeWidgetItem* theWrappedObject, int  column, const QSize&  size)
{
 theWrappedObject->setSizeHint(column, size);
}

void PythonQtWrapper_QTreeWidgetItem::setBackground(QTreeWidgetItem* theWrappedObject, int  column, const QBrush&  brush)
{
 theWrappedObject->setBackground(column, brush);
}

int  PythonQtWrapper_QTreeWidgetItem::childCount(QTreeWidgetItem* theWrappedObject) const
{
return  theWrappedObject->childCount();
}

QVariant  PythonQtWrapper_QTreeWidgetItem::data(QTreeWidgetItem* theWrappedObject, int  column, int  role) const
{
return  ((PythonQtPublicPromoter_QTreeWidgetItem*)theWrappedObject)->promoted_data(column, role);
}

int  PythonQtWrapper_QTreeWidgetItem::textAlignment(QTreeWidgetItem* theWrappedObject, int  column) const
{
return  theWrappedObject->textAlignment(column);
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidgetItem::clone(QTreeWidgetItem* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QTreeWidgetItem*)theWrappedObject)->promoted_clone();
}

void PythonQtWrapper_QTreeWidgetItem::readFrom(QTreeWidgetItem* theWrappedObject, QDataStream&  in)
{
in >>  (*theWrappedObject);
}

void PythonQtWrapper_QTreeWidgetItem::sortChildren(QTreeWidgetItem* theWrappedObject, int  column, Qt::SortOrder  order)
{
 theWrappedObject->sortChildren(column, order);
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidgetItem::child(QTreeWidgetItem* theWrappedObject, int  index) const
{
return  theWrappedObject->child(index);
}

void PythonQtWrapper_QTreeWidgetItem::setTextAlignment(QTreeWidgetItem* theWrappedObject, int  column, int  alignment)
{
 theWrappedObject->setTextAlignment(column, alignment);
}

void PythonQtWrapper_QTreeWidgetItem::setToolTip(QTreeWidgetItem* theWrappedObject, int  column, const QString&  toolTip)
{
 theWrappedObject->setToolTip(column, toolTip);
}

QString  PythonQtWrapper_QTreeWidgetItem::whatsThis(QTreeWidgetItem* theWrappedObject, int  column) const
{
return  theWrappedObject->whatsThis(column);
}

Qt::ItemFlags  PythonQtWrapper_QTreeWidgetItem::flags(QTreeWidgetItem* theWrappedObject) const
{
return  theWrappedObject->flags();
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidgetItem::takeChild(QTreeWidgetItem* theWrappedObject, int  index)
{
return  theWrappedObject->takeChild(index);
}

void PythonQtWrapper_QTreeWidgetItem::setChildIndicatorPolicy(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem::ChildIndicatorPolicy  policy)
{
 theWrappedObject->setChildIndicatorPolicy(policy);
}

void PythonQtWrapper_QTreeWidgetItem::setFirstColumnSpanned(QTreeWidgetItem* theWrappedObject, bool  span)
{
 theWrappedObject->setFirstColumnSpanned(span);
}

QSize  PythonQtWrapper_QTreeWidgetItem::sizeHint(QTreeWidgetItem* theWrappedObject, int  column) const
{
return  theWrappedObject->sizeHint(column);
}

bool  PythonQtWrapper_QTreeWidgetItem::isExpanded(QTreeWidgetItem* theWrappedObject) const
{
return  theWrappedObject->isExpanded();
}

void PythonQtWrapper_QTreeWidgetItem::setDisabled(QTreeWidgetItem* theWrappedObject, bool  disabled)
{
 theWrappedObject->setDisabled(disabled);
}

QFont  PythonQtWrapper_QTreeWidgetItem::font(QTreeWidgetItem* theWrappedObject, int  column) const
{
return  theWrappedObject->font(column);
}

void PythonQtWrapper_QTreeWidgetItem::setExpanded(QTreeWidgetItem* theWrappedObject, bool  expand)
{
 theWrappedObject->setExpanded(expand);
}

void PythonQtWrapper_QTreeWidgetItem::addChildren(QTreeWidgetItem* theWrappedObject, const QList<QTreeWidgetItem* >&  children)
{
 theWrappedObject->addChildren(children);
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidgetItem::parent(QTreeWidgetItem* theWrappedObject) const
{
return  theWrappedObject->parent();
}

QTreeWidgetItem::ChildIndicatorPolicy  PythonQtWrapper_QTreeWidgetItem::childIndicatorPolicy(QTreeWidgetItem* theWrappedObject) const
{
return  theWrappedObject->childIndicatorPolicy();
}

void PythonQtWrapper_QTreeWidgetItem::setCheckState(QTreeWidgetItem* theWrappedObject, int  column, Qt::CheckState  state)
{
 theWrappedObject->setCheckState(column, state);
}

QList<QTreeWidgetItem* >  PythonQtWrapper_QTreeWidgetItem::takeChildren(QTreeWidgetItem* theWrappedObject)
{
return  theWrappedObject->takeChildren();
}

void PythonQtWrapper_QTreeWidgetItem::setText(QTreeWidgetItem* theWrappedObject, int  column, const QString&  text)
{
 theWrappedObject->setText(column, text);
}

QString  PythonQtWrapper_QTreeWidgetItem::toolTip(QTreeWidgetItem* theWrappedObject, int  column) const
{
return  theWrappedObject->toolTip(column);
}

bool  PythonQtWrapper_QTreeWidgetItem::isFirstColumnSpanned(QTreeWidgetItem* theWrappedObject) const
{
return  theWrappedObject->isFirstColumnSpanned();
}

void PythonQtWrapper_QTreeWidgetItem::setFlags(QTreeWidgetItem* theWrappedObject, Qt::ItemFlags  flags)
{
 theWrappedObject->setFlags(flags);
}

void PythonQtWrapper_QTreeWidgetItem::setIcon(QTreeWidgetItem* theWrappedObject, int  column, const QIcon&  icon)
{
 theWrappedObject->setIcon(column, icon);
}

