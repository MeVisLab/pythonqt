#include "PythonQtWrapper_QGridLayout.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qgridlayout.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>
#include <qsize.h>
#include <qwidget.h>

void PythonQtShell_QGridLayout::addItem(QLayoutItem*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "addItem");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGridLayout::staticMetaObject,
      "addItem(QGridLayout*,QLayoutItem* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGridLayout::addItem(arg__1);
}
void PythonQtShell_QGridLayout::childEvent(QChildEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGridLayout::staticMetaObject,
      "childEvent(QGridLayout*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGridLayout::childEvent(e);
}
int  PythonQtShell_QGridLayout::count() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "count");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGridLayout::staticMetaObject,
      "count(QGridLayout*)");
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
  return QGridLayout::count();
}
void PythonQtShell_QGridLayout::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGridLayout::staticMetaObject,
      "customEvent(QGridLayout*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGridLayout::customEvent(arg__1);
}
bool  PythonQtShell_QGridLayout::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGridLayout::staticMetaObject,
      "event(QGridLayout*,QEvent* )");
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
  return QGridLayout::event(arg__1);
}
bool  PythonQtShell_QGridLayout::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGridLayout::staticMetaObject,
      "eventFilter(QGridLayout*,QObject* ,QEvent* )");
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
  return QGridLayout::eventFilter(arg__1, arg__2);
}
Qt::Orientations  PythonQtShell_QGridLayout::expandingDirections() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "expandingDirections");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGridLayout::staticMetaObject,
      "expandingDirections(QGridLayout*)");
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
  return QGridLayout::expandingDirections();
}
QRect  PythonQtShell_QGridLayout::geometry() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "geometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGridLayout::staticMetaObject,
      "geometry(QGridLayout*)");
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
  return QGridLayout::geometry();
}
int  PythonQtShell_QGridLayout::indexOf(QWidget*  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "indexOf");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGridLayout::staticMetaObject,
      "indexOf(QGridLayout*,QWidget* )");
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
  return QGridLayout::indexOf(arg__1);
}
void PythonQtShell_QGridLayout::invalidate()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "invalidate");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGridLayout::staticMetaObject,
      "invalidate(QGridLayout*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGridLayout::invalidate();
}
bool  PythonQtShell_QGridLayout::isEmpty() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isEmpty");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGridLayout::staticMetaObject,
      "isEmpty(QGridLayout*)");
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
  return QGridLayout::isEmpty();
}
QLayoutItem*  PythonQtShell_QGridLayout::itemAt(int  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGridLayout::staticMetaObject,
      "itemAt(QGridLayout*,int )");
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
  return QGridLayout::itemAt(index);
}
QLayout*  PythonQtShell_QGridLayout::layout()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "layout");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGridLayout::staticMetaObject,
      "layout(QGridLayout*)");
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
  return QGridLayout::layout();
}
QSize  PythonQtShell_QGridLayout::maximumSize() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "maximumSize");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGridLayout::staticMetaObject,
      "maximumSize(QGridLayout*)");
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
  return QGridLayout::maximumSize();
}
QSize  PythonQtShell_QGridLayout::minimumSize() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "minimumSize");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGridLayout::staticMetaObject,
      "minimumSize(QGridLayout*)");
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
  return QGridLayout::minimumSize();
}
void PythonQtShell_QGridLayout::setGeometry(const QRect&  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setGeometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGridLayout::staticMetaObject,
      "setGeometry(QGridLayout*,const QRect& )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGridLayout::setGeometry(arg__1);
}
QLayoutItem*  PythonQtShell_QGridLayout::takeAt(int  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "takeAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGridLayout::staticMetaObject,
      "takeAt(QGridLayout*,int )");
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
  return QGridLayout::takeAt(index);
}
void PythonQtShell_QGridLayout::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGridLayout::staticMetaObject,
      "timerEvent(QGridLayout*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGridLayout::timerEvent(arg__1);
}
QGridLayout* PythonQtWrapper_QGridLayout::new_QGridLayout()
{ 
return new PythonQtShell_QGridLayout(); }

QGridLayout* PythonQtWrapper_QGridLayout::new_QGridLayout(QWidget*  parent)
{ 
return new PythonQtShell_QGridLayout(parent); }

void PythonQtWrapper_QGridLayout::setGeometry(QGridLayout* theWrappedObject, const QRect&  arg__1)
{
 ((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->promoted_setGeometry(arg__1);
}

void PythonQtWrapper_QGridLayout::setVerticalSpacing(QGridLayout* theWrappedObject, int  spacing)
{
 theWrappedObject->setVerticalSpacing(spacing);
}

int  PythonQtWrapper_QGridLayout::rowCount(QGridLayout* theWrappedObject) const
{
return  theWrappedObject->rowCount();
}

int  PythonQtWrapper_QGridLayout::verticalSpacing(QGridLayout* theWrappedObject) const
{
return  theWrappedObject->verticalSpacing();
}

void PythonQtWrapper_QGridLayout::getItemPosition(QGridLayout* theWrappedObject, int  idx, int*  row, int*  column, int*  rowSpan, int*  columnSpan)
{
 theWrappedObject->getItemPosition(idx, row, column, rowSpan, columnSpan);
}

void PythonQtWrapper_QGridLayout::addLayout(QGridLayout* theWrappedObject, QLayout*  arg__1, int  row, int  column, Qt::Alignment  arg__4)
{
 theWrappedObject->addLayout(arg__1, row, column, arg__4);
}

QSize  PythonQtWrapper_QGridLayout::minimumSize(QGridLayout* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->promoted_minimumSize();
}

void PythonQtWrapper_QGridLayout::setOriginCorner(QGridLayout* theWrappedObject, Qt::Corner  arg__1)
{
 theWrappedObject->setOriginCorner(arg__1);
}

void PythonQtWrapper_QGridLayout::setRowStretch(QGridLayout* theWrappedObject, int  row, int  stretch)
{
 theWrappedObject->setRowStretch(row, stretch);
}

int  PythonQtWrapper_QGridLayout::minimumHeightForWidth(QGridLayout* theWrappedObject, int  arg__1) const
{
return  theWrappedObject->minimumHeightForWidth(arg__1);
}

Qt::Corner  PythonQtWrapper_QGridLayout::originCorner(QGridLayout* theWrappedObject) const
{
return  theWrappedObject->originCorner();
}

void PythonQtWrapper_QGridLayout::addItem(QGridLayout* theWrappedObject, QLayoutItem*  arg__1)
{
 ((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->promoted_addItem(arg__1);
}

int  PythonQtWrapper_QGridLayout::spacing(QGridLayout* theWrappedObject) const
{
return  theWrappedObject->spacing();
}

void PythonQtWrapper_QGridLayout::setColumnStretch(QGridLayout* theWrappedObject, int  column, int  stretch)
{
 theWrappedObject->setColumnStretch(column, stretch);
}

void PythonQtWrapper_QGridLayout::setHorizontalSpacing(QGridLayout* theWrappedObject, int  spacing)
{
 theWrappedObject->setHorizontalSpacing(spacing);
}

QLayoutItem*  PythonQtWrapper_QGridLayout::takeAt(QGridLayout* theWrappedObject, int  index)
{
return  ((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->promoted_takeAt(index);
}

void PythonQtWrapper_QGridLayout::setRowMinimumHeight(QGridLayout* theWrappedObject, int  row, int  minSize)
{
 theWrappedObject->setRowMinimumHeight(row, minSize);
}

void PythonQtWrapper_QGridLayout::addWidget(QGridLayout* theWrappedObject, QWidget*  arg__1, int  row, int  column, Qt::Alignment  arg__4)
{
 theWrappedObject->addWidget(arg__1, row, column, arg__4);
}

QSize  PythonQtWrapper_QGridLayout::sizeHint(QGridLayout* theWrappedObject) const
{
return  theWrappedObject->sizeHint();
}

void PythonQtWrapper_QGridLayout::addLayout(QGridLayout* theWrappedObject, QLayout*  arg__1, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6)
{
 theWrappedObject->addLayout(arg__1, row, column, rowSpan, columnSpan, arg__6);
}

bool  PythonQtWrapper_QGridLayout::hasHeightForWidth(QGridLayout* theWrappedObject) const
{
return  theWrappedObject->hasHeightForWidth();
}

void PythonQtWrapper_QGridLayout::invalidate(QGridLayout* theWrappedObject)
{
 ((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->promoted_invalidate();
}

int  PythonQtWrapper_QGridLayout::horizontalSpacing(QGridLayout* theWrappedObject) const
{
return  theWrappedObject->horizontalSpacing();
}

void PythonQtWrapper_QGridLayout::addWidget(QGridLayout* theWrappedObject, QWidget*  arg__1, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6)
{
 theWrappedObject->addWidget(arg__1, row, column, rowSpan, columnSpan, arg__6);
}

int  PythonQtWrapper_QGridLayout::columnStretch(QGridLayout* theWrappedObject, int  column) const
{
return  theWrappedObject->columnStretch(column);
}

void PythonQtWrapper_QGridLayout::setDefaultPositioning(QGridLayout* theWrappedObject, int  n, Qt::Orientation  orient)
{
 theWrappedObject->setDefaultPositioning(n, orient);
}

int  PythonQtWrapper_QGridLayout::columnCount(QGridLayout* theWrappedObject) const
{
return  theWrappedObject->columnCount();
}

QLayoutItem*  PythonQtWrapper_QGridLayout::itemAt(QGridLayout* theWrappedObject, int  index) const
{
return  ((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->promoted_itemAt(index);
}

QRect  PythonQtWrapper_QGridLayout::cellRect(QGridLayout* theWrappedObject, int  row, int  column) const
{
return  theWrappedObject->cellRect(row, column);
}

int  PythonQtWrapper_QGridLayout::heightForWidth(QGridLayout* theWrappedObject, int  arg__1) const
{
return  theWrappedObject->heightForWidth(arg__1);
}

QSize  PythonQtWrapper_QGridLayout::maximumSize(QGridLayout* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->promoted_maximumSize();
}

void PythonQtWrapper_QGridLayout::setColumnMinimumWidth(QGridLayout* theWrappedObject, int  column, int  minSize)
{
 theWrappedObject->setColumnMinimumWidth(column, minSize);
}

int  PythonQtWrapper_QGridLayout::rowMinimumHeight(QGridLayout* theWrappedObject, int  row) const
{
return  theWrappedObject->rowMinimumHeight(row);
}

int  PythonQtWrapper_QGridLayout::rowStretch(QGridLayout* theWrappedObject, int  row) const
{
return  theWrappedObject->rowStretch(row);
}

void PythonQtWrapper_QGridLayout::addItem(QGridLayout* theWrappedObject, QLayoutItem*  item, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6)
{
 theWrappedObject->addItem(item, row, column, rowSpan, columnSpan, arg__6);
}

int  PythonQtWrapper_QGridLayout::columnMinimumWidth(QGridLayout* theWrappedObject, int  column) const
{
return  theWrappedObject->columnMinimumWidth(column);
}

Qt::Orientations  PythonQtWrapper_QGridLayout::expandingDirections(QGridLayout* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->promoted_expandingDirections();
}

int  PythonQtWrapper_QGridLayout::count(QGridLayout* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->promoted_count();
}

QLayoutItem*  PythonQtWrapper_QGridLayout::itemAtPosition(QGridLayout* theWrappedObject, int  row, int  column) const
{
return  theWrappedObject->itemAtPosition(row, column);
}

void PythonQtWrapper_QGridLayout::setSpacing(QGridLayout* theWrappedObject, int  spacing)
{
 theWrappedObject->setSpacing(spacing);
}

