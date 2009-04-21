#include "PythonQtWrapper_QBoxLayout.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qboxlayout.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>
#include <qsize.h>
#include <qwidget.h>

void PythonQtShell_QBoxLayout::addItem(QLayoutItem*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "addItem");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QBoxLayout::staticMetaObject,
      "addItem(QBoxLayout*,QLayoutItem* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QBoxLayout::addItem(arg__1);
}
void PythonQtShell_QBoxLayout::childEvent(QChildEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QBoxLayout::staticMetaObject,
      "childEvent(QBoxLayout*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QBoxLayout::childEvent(e);
}
int  PythonQtShell_QBoxLayout::count() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "count");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QBoxLayout::staticMetaObject,
      "count(QBoxLayout*)");
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
  return QBoxLayout::count();
}
void PythonQtShell_QBoxLayout::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QBoxLayout::staticMetaObject,
      "customEvent(QBoxLayout*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QBoxLayout::customEvent(arg__1);
}
bool  PythonQtShell_QBoxLayout::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QBoxLayout::staticMetaObject,
      "event(QBoxLayout*,QEvent* )");
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
  return QBoxLayout::event(arg__1);
}
bool  PythonQtShell_QBoxLayout::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QBoxLayout::staticMetaObject,
      "eventFilter(QBoxLayout*,QObject* ,QEvent* )");
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
  return QBoxLayout::eventFilter(arg__1, arg__2);
}
Qt::Orientations  PythonQtShell_QBoxLayout::expandingDirections() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "expandingDirections");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QBoxLayout::staticMetaObject,
      "expandingDirections(QBoxLayout*)");
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
  return QBoxLayout::expandingDirections();
}
QRect  PythonQtShell_QBoxLayout::geometry() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "geometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QBoxLayout::staticMetaObject,
      "geometry(QBoxLayout*)");
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
  return QBoxLayout::geometry();
}
int  PythonQtShell_QBoxLayout::indexOf(QWidget*  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "indexOf");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QBoxLayout::staticMetaObject,
      "indexOf(QBoxLayout*,QWidget* )");
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
  return QBoxLayout::indexOf(arg__1);
}
void PythonQtShell_QBoxLayout::invalidate()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "invalidate");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QBoxLayout::staticMetaObject,
      "invalidate(QBoxLayout*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QBoxLayout::invalidate();
}
bool  PythonQtShell_QBoxLayout::isEmpty() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isEmpty");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QBoxLayout::staticMetaObject,
      "isEmpty(QBoxLayout*)");
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
  return QBoxLayout::isEmpty();
}
QLayoutItem*  PythonQtShell_QBoxLayout::itemAt(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QBoxLayout::staticMetaObject,
      "itemAt(QBoxLayout*,int )");
      QLayoutItem*  returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QBoxLayout::itemAt(arg__1);
}
QLayout*  PythonQtShell_QBoxLayout::layout()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "layout");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QBoxLayout::staticMetaObject,
      "layout(QBoxLayout*)");
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
  return QBoxLayout::layout();
}
QSize  PythonQtShell_QBoxLayout::maximumSize() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "maximumSize");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QBoxLayout::staticMetaObject,
      "maximumSize(QBoxLayout*)");
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
  return QBoxLayout::maximumSize();
}
QSize  PythonQtShell_QBoxLayout::minimumSize() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "minimumSize");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QBoxLayout::staticMetaObject,
      "minimumSize(QBoxLayout*)");
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
  return QBoxLayout::minimumSize();
}
void PythonQtShell_QBoxLayout::setGeometry(const QRect&  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setGeometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QBoxLayout::staticMetaObject,
      "setGeometry(QBoxLayout*,const QRect& )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QBoxLayout::setGeometry(arg__1);
}
QLayoutItem*  PythonQtShell_QBoxLayout::takeAt(int  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "takeAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QBoxLayout::staticMetaObject,
      "takeAt(QBoxLayout*,int )");
      QLayoutItem*  returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QBoxLayout::takeAt(arg__1);
}
void PythonQtShell_QBoxLayout::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QBoxLayout::staticMetaObject,
      "timerEvent(QBoxLayout*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QBoxLayout::timerEvent(arg__1);
}
QBoxLayout* PythonQtWrapper_QBoxLayout::new_QBoxLayout(QBoxLayout::Direction  arg__1, QWidget*  parent)
{ 
return new PythonQtShell_QBoxLayout(arg__1, parent); }

void PythonQtWrapper_QBoxLayout::insertLayout(QBoxLayout* theWrappedObject, int  index, QLayout*  layout, int  stretch)
{
 (*theWrappedObject).insertLayout(index, layout, stretch);
}

void PythonQtWrapper_QBoxLayout::addStretch(QBoxLayout* theWrappedObject, int  stretch)
{
 (*theWrappedObject).addStretch(stretch);
}

void PythonQtWrapper_QBoxLayout::setGeometry(QBoxLayout* theWrappedObject, const QRect&  arg__1)
{
 (*theWrappedObject).setGeometry(arg__1);
}

void PythonQtWrapper_QBoxLayout::insertSpacerItem(QBoxLayout* theWrappedObject, int  index, QSpacerItem*  spacerItem)
{
 (*theWrappedObject).insertSpacerItem(index, spacerItem);
}

int  PythonQtWrapper_QBoxLayout::minimumHeightForWidth(QBoxLayout* theWrappedObject, int  arg__1) const
{
return  (*theWrappedObject).minimumHeightForWidth(arg__1);
}

bool  PythonQtWrapper_QBoxLayout::setStretchFactor(QBoxLayout* theWrappedObject, QWidget*  w, int  stretch)
{
return  (*theWrappedObject).setStretchFactor(w, stretch);
}

void PythonQtWrapper_QBoxLayout::addSpacing(QBoxLayout* theWrappedObject, int  size)
{
 (*theWrappedObject).addSpacing(size);
}

void PythonQtWrapper_QBoxLayout::addLayout(QBoxLayout* theWrappedObject, QLayout*  layout, int  stretch)
{
 (*theWrappedObject).addLayout(layout, stretch);
}

QSize  PythonQtWrapper_QBoxLayout::minimumSize(QBoxLayout* theWrappedObject) const
{
return  (*theWrappedObject).minimumSize();
}

void PythonQtWrapper_QBoxLayout::addSpacerItem(QBoxLayout* theWrappedObject, QSpacerItem*  spacerItem)
{
 (*theWrappedObject).addSpacerItem(spacerItem);
}

QSize  PythonQtWrapper_QBoxLayout::sizeHint(QBoxLayout* theWrappedObject) const
{
return  (*theWrappedObject).sizeHint();
}

void PythonQtWrapper_QBoxLayout::addItem(QBoxLayout* theWrappedObject, QLayoutItem*  arg__1)
{
 (*theWrappedObject).addItem(arg__1);
}

QBoxLayout::Direction  PythonQtWrapper_QBoxLayout::direction(QBoxLayout* theWrappedObject) const
{
return  (*theWrappedObject).direction();
}

void PythonQtWrapper_QBoxLayout::insertWidget(QBoxLayout* theWrappedObject, int  index, QWidget*  widget, int  stretch, Qt::Alignment  alignment)
{
 (*theWrappedObject).insertWidget(index, widget, stretch, alignment);
}

void PythonQtWrapper_QBoxLayout::insertStretch(QBoxLayout* theWrappedObject, int  index, int  stretch)
{
 (*theWrappedObject).insertStretch(index, stretch);
}

void PythonQtWrapper_QBoxLayout::setSpacing(QBoxLayout* theWrappedObject, int  spacing)
{
 (*theWrappedObject).setSpacing(spacing);
}

int  PythonQtWrapper_QBoxLayout::count(QBoxLayout* theWrappedObject) const
{
return  (*theWrappedObject).count();
}

QLayoutItem*  PythonQtWrapper_QBoxLayout::itemAt(QBoxLayout* theWrappedObject, int  arg__1) const
{
return  (*theWrappedObject).itemAt(arg__1);
}

void PythonQtWrapper_QBoxLayout::addWidget(QBoxLayout* theWrappedObject, QWidget*  arg__1, int  stretch, Qt::Alignment  alignment)
{
 (*theWrappedObject).addWidget(arg__1, stretch, alignment);
}

bool  PythonQtWrapper_QBoxLayout::hasHeightForWidth(QBoxLayout* theWrappedObject) const
{
return  (*theWrappedObject).hasHeightForWidth();
}

void PythonQtWrapper_QBoxLayout::insertSpacing(QBoxLayout* theWrappedObject, int  index, int  size)
{
 (*theWrappedObject).insertSpacing(index, size);
}

QSize  PythonQtWrapper_QBoxLayout::maximumSize(QBoxLayout* theWrappedObject) const
{
return  (*theWrappedObject).maximumSize();
}

bool  PythonQtWrapper_QBoxLayout::setStretchFactor(QBoxLayout* theWrappedObject, QLayout*  l, int  stretch)
{
return  (*theWrappedObject).setStretchFactor(l, stretch);
}

int  PythonQtWrapper_QBoxLayout::spacing(QBoxLayout* theWrappedObject) const
{
return  (*theWrappedObject).spacing();
}

QLayoutItem*  PythonQtWrapper_QBoxLayout::takeAt(QBoxLayout* theWrappedObject, int  arg__1)
{
return  (*theWrappedObject).takeAt(arg__1);
}

void PythonQtWrapper_QBoxLayout::invalidate(QBoxLayout* theWrappedObject)
{
 (*theWrappedObject).invalidate();
}

void PythonQtWrapper_QBoxLayout::setDirection(QBoxLayout* theWrappedObject, QBoxLayout::Direction  arg__1)
{
 (*theWrappedObject).setDirection(arg__1);
}

int  PythonQtWrapper_QBoxLayout::heightForWidth(QBoxLayout* theWrappedObject, int  arg__1) const
{
return  (*theWrappedObject).heightForWidth(arg__1);
}

Qt::Orientations  PythonQtWrapper_QBoxLayout::expandingDirections(QBoxLayout* theWrappedObject) const
{
return  (*theWrappedObject).expandingDirections();
}

void PythonQtWrapper_QBoxLayout::addStrut(QBoxLayout* theWrappedObject, int  arg__1)
{
 (*theWrappedObject).addStrut(arg__1);
}

