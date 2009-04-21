#include "PythonQtWrapper_QListWidgetItem.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbrush.h>
#include <qdatastream.h>
#include <qfont.h>
#include <qicon.h>
#include <qlistwidget.h>
#include <qsize.h>

QListWidgetItem*  PythonQtShell_QListWidgetItem::clone() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "clone");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QListWidgetItem::staticMetaObject,
      "clone(QListWidgetItem*)");
      QListWidgetItem*  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QListWidgetItem* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QListWidgetItem::clone();
}
QVariant  PythonQtShell_QListWidgetItem::data(int  role) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "data");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QListWidgetItem::staticMetaObject,
      "data(QListWidgetItem*,int )");
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
  return QListWidgetItem::data(role);
}
bool  PythonQtShell_QListWidgetItem::operator_less(const QListWidgetItem&  other) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "operator_less");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QListWidgetItem::staticMetaObject,
      "operator_less(QListWidgetItem*,const QListWidgetItem& )");
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
  return QListWidgetItem::operator<(other);
}
void PythonQtShell_QListWidgetItem::read(QDataStream&  in)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "read");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QListWidgetItem::staticMetaObject,
      "read(QListWidgetItem*,QDataStream& )");
    void* args[2] = {NULL, (void*)&in};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QListWidgetItem::read(in);
}
void PythonQtShell_QListWidgetItem::setBackgroundColor(const QColor&  color)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setBackgroundColor");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QListWidgetItem::staticMetaObject,
      "setBackgroundColor(QListWidgetItem*,const QColor& )");
    void* args[2] = {NULL, (void*)&color};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QListWidgetItem::setBackgroundColor(color);
}
void PythonQtShell_QListWidgetItem::setData(int  role, const QVariant&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QListWidgetItem::staticMetaObject,
      "setData(QListWidgetItem*,int ,const QVariant& )");
    void* args[3] = {NULL, (void*)&role, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QListWidgetItem::setData(role, value);
}
void PythonQtShell_QListWidgetItem::write(QDataStream&  out) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "write");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QListWidgetItem::staticMetaObject,
      "write(QListWidgetItem*,QDataStream& )");
    void* args[2] = {NULL, (void*)&out};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QListWidgetItem::write(out);
}
QListWidgetItem* PythonQtWrapper_QListWidgetItem::new_QListWidgetItem(QListWidget*  view, int  type)
{ 
return new PythonQtShell_QListWidgetItem(view, type); }

QListWidgetItem* PythonQtWrapper_QListWidgetItem::new_QListWidgetItem(const QIcon&  icon, const QString&  text, QListWidget*  view, int  type)
{ 
return new PythonQtShell_QListWidgetItem(icon, text, view, type); }

QListWidgetItem* PythonQtWrapper_QListWidgetItem::new_QListWidgetItem(const QString&  text, QListWidget*  view, int  type)
{ 
return new PythonQtShell_QListWidgetItem(text, view, type); }

Qt::ItemFlags  PythonQtWrapper_QListWidgetItem::flags(QListWidgetItem* theWrappedObject) const
{
return  theWrappedObject->flags();
}

void PythonQtWrapper_QListWidgetItem::setToolTip(QListWidgetItem* theWrappedObject, const QString&  toolTip)
{
 theWrappedObject->setToolTip(toolTip);
}

void PythonQtWrapper_QListWidgetItem::setCheckState(QListWidgetItem* theWrappedObject, Qt::CheckState  state)
{
 theWrappedObject->setCheckState(state);
}

void PythonQtWrapper_QListWidgetItem::setSizeHint(QListWidgetItem* theWrappedObject, const QSize&  size)
{
 theWrappedObject->setSizeHint(size);
}

void PythonQtWrapper_QListWidgetItem::setStatusTip(QListWidgetItem* theWrappedObject, const QString&  statusTip)
{
 theWrappedObject->setStatusTip(statusTip);
}

int  PythonQtWrapper_QListWidgetItem::textAlignment(QListWidgetItem* theWrappedObject) const
{
return  theWrappedObject->textAlignment();
}

void PythonQtWrapper_QListWidgetItem::setSelected(QListWidgetItem* theWrappedObject, bool  select)
{
 theWrappedObject->setSelected(select);
}

QFont  PythonQtWrapper_QListWidgetItem::font(QListWidgetItem* theWrappedObject) const
{
return  theWrappedObject->font();
}

void PythonQtWrapper_QListWidgetItem::setIcon(QListWidgetItem* theWrappedObject, const QIcon&  icon)
{
 theWrappedObject->setIcon(icon);
}

void PythonQtWrapper_QListWidgetItem::setText(QListWidgetItem* theWrappedObject, const QString&  text)
{
 theWrappedObject->setText(text);
}

void PythonQtWrapper_QListWidgetItem::setTextAlignment(QListWidgetItem* theWrappedObject, int  alignment)
{
 theWrappedObject->setTextAlignment(alignment);
}

QString  PythonQtWrapper_QListWidgetItem::text(QListWidgetItem* theWrappedObject) const
{
return  theWrappedObject->text();
}

QListWidget*  PythonQtWrapper_QListWidgetItem::listWidget(QListWidgetItem* theWrappedObject) const
{
return  theWrappedObject->listWidget();
}

void PythonQtWrapper_QListWidgetItem::setBackground(QListWidgetItem* theWrappedObject, const QBrush&  brush)
{
 theWrappedObject->setBackground(brush);
}

void PythonQtWrapper_QListWidgetItem::setWhatsThis(QListWidgetItem* theWrappedObject, const QString&  whatsThis)
{
 theWrappedObject->setWhatsThis(whatsThis);
}

QString  PythonQtWrapper_QListWidgetItem::toolTip(QListWidgetItem* theWrappedObject) const
{
return  theWrappedObject->toolTip();
}

void PythonQtWrapper_QListWidgetItem::setData(QListWidgetItem* theWrappedObject, int  role, const QVariant&  value)
{
 ((PythonQtPublicPromoter_QListWidgetItem*)theWrappedObject)->promoted_setData(role, value);
}

QBrush  PythonQtWrapper_QListWidgetItem::background(QListWidgetItem* theWrappedObject) const
{
return  theWrappedObject->background();
}

void PythonQtWrapper_QListWidgetItem::setFlags(QListWidgetItem* theWrappedObject, Qt::ItemFlags  flags)
{
 theWrappedObject->setFlags(flags);
}

void PythonQtWrapper_QListWidgetItem::readFrom(QListWidgetItem* theWrappedObject, QDataStream&  in)
{
in >>  (*theWrappedObject);
}

QListWidgetItem*  PythonQtWrapper_QListWidgetItem::clone(QListWidgetItem* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QListWidgetItem*)theWrappedObject)->promoted_clone();
}

QString  PythonQtWrapper_QListWidgetItem::statusTip(QListWidgetItem* theWrappedObject) const
{
return  theWrappedObject->statusTip();
}

void PythonQtWrapper_QListWidgetItem::setFont(QListWidgetItem* theWrappedObject, const QFont&  font)
{
 theWrappedObject->setFont(font);
}

int  PythonQtWrapper_QListWidgetItem::type(QListWidgetItem* theWrappedObject) const
{
return  theWrappedObject->type();
}

QString  PythonQtWrapper_QListWidgetItem::whatsThis(QListWidgetItem* theWrappedObject) const
{
return  theWrappedObject->whatsThis();
}

Qt::CheckState  PythonQtWrapper_QListWidgetItem::checkState(QListWidgetItem* theWrappedObject) const
{
return  theWrappedObject->checkState();
}

bool  PythonQtWrapper_QListWidgetItem::isSelected(QListWidgetItem* theWrappedObject) const
{
return  theWrappedObject->isSelected();
}

void PythonQtWrapper_QListWidgetItem::setHidden(QListWidgetItem* theWrappedObject, bool  hide)
{
 theWrappedObject->setHidden(hide);
}

void PythonQtWrapper_QListWidgetItem::setForeground(QListWidgetItem* theWrappedObject, const QBrush&  brush)
{
 theWrappedObject->setForeground(brush);
}

QIcon  PythonQtWrapper_QListWidgetItem::icon(QListWidgetItem* theWrappedObject) const
{
return  theWrappedObject->icon();
}

void PythonQtWrapper_QListWidgetItem::writeTo(QListWidgetItem* theWrappedObject, QDataStream&  out)
{
out <<  (*theWrappedObject);
}

QSize  PythonQtWrapper_QListWidgetItem::sizeHint(QListWidgetItem* theWrappedObject) const
{
return  theWrappedObject->sizeHint();
}

QVariant  PythonQtWrapper_QListWidgetItem::data(QListWidgetItem* theWrappedObject, int  role) const
{
return  ((PythonQtPublicPromoter_QListWidgetItem*)theWrappedObject)->promoted_data(role);
}

QBrush  PythonQtWrapper_QListWidgetItem::foreground(QListWidgetItem* theWrappedObject) const
{
return  theWrappedObject->foreground();
}

bool  PythonQtWrapper_QListWidgetItem::isHidden(QListWidgetItem* theWrappedObject) const
{
return  theWrappedObject->isHidden();
}

