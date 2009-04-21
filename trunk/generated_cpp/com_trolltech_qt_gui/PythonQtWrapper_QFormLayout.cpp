#include "PythonQtWrapper_QFormLayout.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
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

void PythonQtShell_QFormLayout::addItem(QLayoutItem*  item)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "addItem");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QFormLayout::staticMetaObject,
      "addItem(QFormLayout*,QLayoutItem* )");
    void* args[2] = {NULL, (void*)&item};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QFormLayout::addItem(item);
}
void PythonQtShell_QFormLayout::childEvent(QChildEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QFormLayout::staticMetaObject,
      "childEvent(QFormLayout*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QFormLayout::childEvent(e);
}
int  PythonQtShell_QFormLayout::count() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "count");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QFormLayout::staticMetaObject,
      "count(QFormLayout*)");
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
  return QFormLayout::count();
}
void PythonQtShell_QFormLayout::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QFormLayout::staticMetaObject,
      "customEvent(QFormLayout*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QFormLayout::customEvent(arg__1);
}
bool  PythonQtShell_QFormLayout::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QFormLayout::staticMetaObject,
      "event(QFormLayout*,QEvent* )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QFormLayout::event(arg__1);
}
bool  PythonQtShell_QFormLayout::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QFormLayout::staticMetaObject,
      "eventFilter(QFormLayout*,QObject* ,QEvent* )");
      bool  returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QFormLayout::eventFilter(arg__1, arg__2);
}
Qt::Orientations  PythonQtShell_QFormLayout::expandingDirections() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "expandingDirections");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QFormLayout::staticMetaObject,
      "expandingDirections(QFormLayout*)");
      Qt::Orientations  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((Qt::Orientations *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QFormLayout::expandingDirections();
}
QRect  PythonQtShell_QFormLayout::geometry() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "geometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QFormLayout::staticMetaObject,
      "geometry(QFormLayout*)");
      QRect  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QRect *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QFormLayout::geometry();
}
int  PythonQtShell_QFormLayout::indexOf(QWidget*  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "indexOf");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QFormLayout::staticMetaObject,
      "indexOf(QFormLayout*,QWidget* )");
      int  returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QFormLayout::indexOf(arg__1);
}
void PythonQtShell_QFormLayout::invalidate()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "invalidate");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QFormLayout::staticMetaObject,
      "invalidate(QFormLayout*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QFormLayout::invalidate();
}
bool  PythonQtShell_QFormLayout::isEmpty() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isEmpty");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QFormLayout::staticMetaObject,
      "isEmpty(QFormLayout*)");
      bool  returnValue;
    void* args[1] = {NULL};
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
  return QFormLayout::isEmpty();
}
QLayoutItem*  PythonQtShell_QFormLayout::itemAt(int  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QFormLayout::staticMetaObject,
      "itemAt(QFormLayout*,int )");
      QLayoutItem*  returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QLayoutItem* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QFormLayout::itemAt(index);
}
QLayout*  PythonQtShell_QFormLayout::layout()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "layout");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QFormLayout::staticMetaObject,
      "layout(QFormLayout*)");
      QLayout*  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QLayout* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QFormLayout::layout();
}
QSize  PythonQtShell_QFormLayout::maximumSize() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "maximumSize");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QFormLayout::staticMetaObject,
      "maximumSize(QFormLayout*)");
      QSize  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QSize *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QFormLayout::maximumSize();
}
QSize  PythonQtShell_QFormLayout::minimumSize() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "minimumSize");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QFormLayout::staticMetaObject,
      "minimumSize(QFormLayout*)");
      QSize  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QSize *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QFormLayout::minimumSize();
}
void PythonQtShell_QFormLayout::setGeometry(const QRect&  rect)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setGeometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QFormLayout::staticMetaObject,
      "setGeometry(QFormLayout*,const QRect& )");
    void* args[2] = {NULL, (void*)&rect};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QFormLayout::setGeometry(rect);
}
QLayoutItem*  PythonQtShell_QFormLayout::takeAt(int  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "takeAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QFormLayout::staticMetaObject,
      "takeAt(QFormLayout*,int )");
      QLayoutItem*  returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QLayoutItem* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QFormLayout::takeAt(index);
}
void PythonQtShell_QFormLayout::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QFormLayout::staticMetaObject,
      "timerEvent(QFormLayout*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QFormLayout::timerEvent(arg__1);
}
QFormLayout* PythonQtWrapper_QFormLayout::new_QFormLayout(QWidget*  parent)
{ 
return new PythonQtShell_QFormLayout(parent); }

Qt::Alignment  PythonQtWrapper_QFormLayout::formAlignment(QFormLayout* theWrappedObject) const
{
return  (*theWrappedObject).formAlignment();
}

Qt::Alignment  PythonQtWrapper_QFormLayout::labelAlignment(QFormLayout* theWrappedObject) const
{
return  (*theWrappedObject).labelAlignment();
}

void PythonQtWrapper_QFormLayout::setLabelAlignment(QFormLayout* theWrappedObject, Qt::Alignment  alignment)
{
 (*theWrappedObject).setLabelAlignment(alignment);
}

QSize  PythonQtWrapper_QFormLayout::sizeHint(QFormLayout* theWrappedObject) const
{
return  (*theWrappedObject).sizeHint();
}

QWidget*  PythonQtWrapper_QFormLayout::labelForField(QFormLayout* theWrappedObject, QLayout*  field) const
{
return  (*theWrappedObject).labelForField(field);
}

QSize  PythonQtWrapper_QFormLayout::minimumSize(QFormLayout* theWrappedObject) const
{
return  (*theWrappedObject).minimumSize();
}

void PythonQtWrapper_QFormLayout::insertRow(QFormLayout* theWrappedObject, int  row, QWidget*  widget)
{
 (*theWrappedObject).insertRow(row, widget);
}

void PythonQtWrapper_QFormLayout::addItem(QFormLayout* theWrappedObject, QLayoutItem*  item)
{
 (*theWrappedObject).addItem(item);
}

void PythonQtWrapper_QFormLayout::insertRow(QFormLayout* theWrappedObject, int  row, QWidget*  label, QWidget*  field)
{
 (*theWrappedObject).insertRow(row, label, field);
}

int  PythonQtWrapper_QFormLayout::horizontalSpacing(QFormLayout* theWrappedObject) const
{
return  (*theWrappedObject).horizontalSpacing();
}

void PythonQtWrapper_QFormLayout::insertRow(QFormLayout* theWrappedObject, int  row, QWidget*  label, QLayout*  field)
{
 (*theWrappedObject).insertRow(row, label, field);
}

void PythonQtWrapper_QFormLayout::setItem(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role, QLayoutItem*  item)
{
 (*theWrappedObject).setItem(row, role, item);
}

void PythonQtWrapper_QFormLayout::addRow(QFormLayout* theWrappedObject, QLayout*  layout)
{
 (*theWrappedObject).addRow(layout);
}

void PythonQtWrapper_QFormLayout::addRow(QFormLayout* theWrappedObject, QWidget*  label, QLayout*  field)
{
 (*theWrappedObject).addRow(label, field);
}

void PythonQtWrapper_QFormLayout::addRow(QFormLayout* theWrappedObject, QWidget*  widget)
{
 (*theWrappedObject).addRow(widget);
}

void PythonQtWrapper_QFormLayout::setFieldGrowthPolicy(QFormLayout* theWrappedObject, QFormLayout::FieldGrowthPolicy  policy)
{
 (*theWrappedObject).setFieldGrowthPolicy(policy);
}

void PythonQtWrapper_QFormLayout::setFormAlignment(QFormLayout* theWrappedObject, Qt::Alignment  alignment)
{
 (*theWrappedObject).setFormAlignment(alignment);
}

void PythonQtWrapper_QFormLayout::insertRow(QFormLayout* theWrappedObject, int  row, const QString&  labelText, QLayout*  field)
{
 (*theWrappedObject).insertRow(row, labelText, field);
}

void PythonQtWrapper_QFormLayout::getItemPosition(QFormLayout* theWrappedObject, int  index, int*  rowPtr, QFormLayout::ItemRole*  rolePtr) const
{
 (*theWrappedObject).getItemPosition(index, rowPtr, rolePtr);
}

int  PythonQtWrapper_QFormLayout::heightForWidth(QFormLayout* theWrappedObject, int  width) const
{
return  (*theWrappedObject).heightForWidth(width);
}

void PythonQtWrapper_QFormLayout::getWidgetPosition(QFormLayout* theWrappedObject, QWidget*  widget, int*  rowPtr, QFormLayout::ItemRole*  rolePtr) const
{
 (*theWrappedObject).getWidgetPosition(widget, rowPtr, rolePtr);
}

void PythonQtWrapper_QFormLayout::addRow(QFormLayout* theWrappedObject, QWidget*  label, QWidget*  field)
{
 (*theWrappedObject).addRow(label, field);
}

int  PythonQtWrapper_QFormLayout::verticalSpacing(QFormLayout* theWrappedObject) const
{
return  (*theWrappedObject).verticalSpacing();
}

void PythonQtWrapper_QFormLayout::addRow(QFormLayout* theWrappedObject, const QString&  labelText, QWidget*  field)
{
 (*theWrappedObject).addRow(labelText, field);
}

void PythonQtWrapper_QFormLayout::setSpacing(QFormLayout* theWrappedObject, int  arg__1)
{
 (*theWrappedObject).setSpacing(arg__1);
}

void PythonQtWrapper_QFormLayout::insertRow(QFormLayout* theWrappedObject, int  row, const QString&  labelText, QWidget*  field)
{
 (*theWrappedObject).insertRow(row, labelText, field);
}

QLayoutItem*  PythonQtWrapper_QFormLayout::itemAt(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role) const
{
return  (*theWrappedObject).itemAt(row, role);
}

QFormLayout::RowWrapPolicy  PythonQtWrapper_QFormLayout::rowWrapPolicy(QFormLayout* theWrappedObject) const
{
return  (*theWrappedObject).rowWrapPolicy();
}

void PythonQtWrapper_QFormLayout::setVerticalSpacing(QFormLayout* theWrappedObject, int  spacing)
{
 (*theWrappedObject).setVerticalSpacing(spacing);
}

int  PythonQtWrapper_QFormLayout::spacing(QFormLayout* theWrappedObject) const
{
return  (*theWrappedObject).spacing();
}

void PythonQtWrapper_QFormLayout::getLayoutPosition(QFormLayout* theWrappedObject, QLayout*  layout, int*  rowPtr, QFormLayout::ItemRole*  rolePtr) const
{
 (*theWrappedObject).getLayoutPosition(layout, rowPtr, rolePtr);
}

void PythonQtWrapper_QFormLayout::setGeometry(QFormLayout* theWrappedObject, const QRect&  rect)
{
 (*theWrappedObject).setGeometry(rect);
}

void PythonQtWrapper_QFormLayout::setWidget(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role, QWidget*  widget)
{
 (*theWrappedObject).setWidget(row, role, widget);
}

bool  PythonQtWrapper_QFormLayout::hasHeightForWidth(QFormLayout* theWrappedObject) const
{
return  (*theWrappedObject).hasHeightForWidth();
}

void PythonQtWrapper_QFormLayout::invalidate(QFormLayout* theWrappedObject)
{
 (*theWrappedObject).invalidate();
}

int  PythonQtWrapper_QFormLayout::count(QFormLayout* theWrappedObject) const
{
return  (*theWrappedObject).count();
}

QFormLayout::FieldGrowthPolicy  PythonQtWrapper_QFormLayout::fieldGrowthPolicy(QFormLayout* theWrappedObject) const
{
return  (*theWrappedObject).fieldGrowthPolicy();
}

QLayoutItem*  PythonQtWrapper_QFormLayout::takeAt(QFormLayout* theWrappedObject, int  index)
{
return  (*theWrappedObject).takeAt(index);
}

int  PythonQtWrapper_QFormLayout::rowCount(QFormLayout* theWrappedObject) const
{
return  (*theWrappedObject).rowCount();
}

void PythonQtWrapper_QFormLayout::setRowWrapPolicy(QFormLayout* theWrappedObject, QFormLayout::RowWrapPolicy  policy)
{
 (*theWrappedObject).setRowWrapPolicy(policy);
}

void PythonQtWrapper_QFormLayout::addRow(QFormLayout* theWrappedObject, const QString&  labelText, QLayout*  field)
{
 (*theWrappedObject).addRow(labelText, field);
}

void PythonQtWrapper_QFormLayout::setHorizontalSpacing(QFormLayout* theWrappedObject, int  spacing)
{
 (*theWrappedObject).setHorizontalSpacing(spacing);
}

QWidget*  PythonQtWrapper_QFormLayout::labelForField(QFormLayout* theWrappedObject, QWidget*  field) const
{
return  (*theWrappedObject).labelForField(field);
}

void PythonQtWrapper_QFormLayout::setLayout(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role, QLayout*  layout)
{
 (*theWrappedObject).setLayout(row, role, layout);
}

void PythonQtWrapper_QFormLayout::insertRow(QFormLayout* theWrappedObject, int  row, QLayout*  layout)
{
 (*theWrappedObject).insertRow(row, layout);
}

QLayoutItem*  PythonQtWrapper_QFormLayout::itemAt(QFormLayout* theWrappedObject, int  index) const
{
return  (*theWrappedObject).itemAt(index);
}

Qt::Orientations  PythonQtWrapper_QFormLayout::expandingDirections(QFormLayout* theWrappedObject) const
{
return  (*theWrappedObject).expandingDirections();
}

