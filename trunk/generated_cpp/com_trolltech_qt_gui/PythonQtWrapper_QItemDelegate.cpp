#include "PythonQtWrapper_QItemDelegate.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
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

void PythonQtShell_QItemDelegate::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QItemDelegate::staticMetaObject,
      "childEvent(QItemDelegate*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemDelegate::childEvent(arg__1);
}
QWidget*  PythonQtShell_QItemDelegate::createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "createEditor");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QItemDelegate::staticMetaObject,
      "createEditor(QItemDelegate*,QWidget* ,const QStyleOptionViewItem& ,const QModelIndex& )");
      QWidget*  returnValue;
    void* args[4] = {NULL, (void*)&parent, (void*)&option, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QWidget* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QItemDelegate::createEditor(parent, option, index);
}
void PythonQtShell_QItemDelegate::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QItemDelegate::staticMetaObject,
      "customEvent(QItemDelegate*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemDelegate::customEvent(arg__1);
}
void PythonQtShell_QItemDelegate::drawCheck(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, Qt::CheckState  state) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawCheck");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QItemDelegate::staticMetaObject,
      "drawCheck(QItemDelegate*,QPainter* ,const QStyleOptionViewItem& ,const QRect& ,Qt::CheckState )");
    void* args[5] = {NULL, (void*)&painter, (void*)&option, (void*)&rect, (void*)&state};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemDelegate::drawCheck(painter, option, rect, state);
}
void PythonQtShell_QItemDelegate::drawDecoration(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QPixmap&  pixmap) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawDecoration");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QItemDelegate::staticMetaObject,
      "drawDecoration(QItemDelegate*,QPainter* ,const QStyleOptionViewItem& ,const QRect& ,const QPixmap& )");
    void* args[5] = {NULL, (void*)&painter, (void*)&option, (void*)&rect, (void*)&pixmap};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemDelegate::drawDecoration(painter, option, rect, pixmap);
}
void PythonQtShell_QItemDelegate::drawDisplay(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QString&  text) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawDisplay");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QItemDelegate::staticMetaObject,
      "drawDisplay(QItemDelegate*,QPainter* ,const QStyleOptionViewItem& ,const QRect& ,const QString& )");
    void* args[5] = {NULL, (void*)&painter, (void*)&option, (void*)&rect, (void*)&text};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemDelegate::drawDisplay(painter, option, rect, text);
}
void PythonQtShell_QItemDelegate::drawFocus(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawFocus");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QItemDelegate::staticMetaObject,
      "drawFocus(QItemDelegate*,QPainter* ,const QStyleOptionViewItem& ,const QRect& )");
    void* args[4] = {NULL, (void*)&painter, (void*)&option, (void*)&rect};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemDelegate::drawFocus(painter, option, rect);
}
bool  PythonQtShell_QItemDelegate::editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "editorEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QItemDelegate::staticMetaObject,
      "editorEvent(QItemDelegate*,QEvent* ,QAbstractItemModel* ,const QStyleOptionViewItem& ,const QModelIndex& )");
      bool  returnValue;
    void* args[5] = {NULL, (void*)&event, (void*)&model, (void*)&option, (void*)&index};
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
  return QItemDelegate::editorEvent(event, model, option, index);
}
bool  PythonQtShell_QItemDelegate::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QItemDelegate::staticMetaObject,
      "event(QItemDelegate*,QEvent* )");
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
  return QItemDelegate::event(arg__1);
}
bool  PythonQtShell_QItemDelegate::eventFilter(QObject*  object, QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QItemDelegate::staticMetaObject,
      "eventFilter(QItemDelegate*,QObject* ,QEvent* )");
      bool  returnValue;
    void* args[3] = {NULL, (void*)&object, (void*)&event};
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
  return QItemDelegate::eventFilter(object, event);
}
void PythonQtShell_QItemDelegate::paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QItemDelegate::staticMetaObject,
      "paint(QItemDelegate*,QPainter* ,const QStyleOptionViewItem& ,const QModelIndex& )");
    void* args[4] = {NULL, (void*)&painter, (void*)&option, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemDelegate::paint(painter, option, index);
}
void PythonQtShell_QItemDelegate::setEditorData(QWidget*  editor, const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setEditorData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QItemDelegate::staticMetaObject,
      "setEditorData(QItemDelegate*,QWidget* ,const QModelIndex& )");
    void* args[3] = {NULL, (void*)&editor, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemDelegate::setEditorData(editor, index);
}
void PythonQtShell_QItemDelegate::setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setModelData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QItemDelegate::staticMetaObject,
      "setModelData(QItemDelegate*,QWidget* ,QAbstractItemModel* ,const QModelIndex& )");
    void* args[4] = {NULL, (void*)&editor, (void*)&model, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemDelegate::setModelData(editor, model, index);
}
QSize  PythonQtShell_QItemDelegate::sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sizeHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QItemDelegate::staticMetaObject,
      "sizeHint(QItemDelegate*,const QStyleOptionViewItem& ,const QModelIndex& )");
      QSize  returnValue;
    void* args[3] = {NULL, (void*)&option, (void*)&index};
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
  return QItemDelegate::sizeHint(option, index);
}
void PythonQtShell_QItemDelegate::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QItemDelegate::staticMetaObject,
      "timerEvent(QItemDelegate*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemDelegate::timerEvent(arg__1);
}
void PythonQtShell_QItemDelegate::updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateEditorGeometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QItemDelegate::staticMetaObject,
      "updateEditorGeometry(QItemDelegate*,QWidget* ,const QStyleOptionViewItem& ,const QModelIndex& )");
    void* args[4] = {NULL, (void*)&editor, (void*)&option, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemDelegate::updateEditorGeometry(editor, option, index);
}
QItemDelegate* PythonQtWrapper_QItemDelegate::new_QItemDelegate(QObject*  parent)
{ 
return new PythonQtShell_QItemDelegate(parent); }

void PythonQtWrapper_QItemDelegate::drawFocus(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect) const
{
 ((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->promoted_drawFocus(painter, option, rect);
}

bool  PythonQtWrapper_QItemDelegate::editorEvent(QItemDelegate* theWrappedObject, QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index)
{
return  ((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->promoted_editorEvent(event, model, option, index);
}

void PythonQtWrapper_QItemDelegate::setModelData(QItemDelegate* theWrappedObject, QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const
{
 ((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->promoted_setModelData(editor, model, index);
}

QItemEditorFactory*  PythonQtWrapper_QItemDelegate::itemEditorFactory(QItemDelegate* theWrappedObject) const
{
return  theWrappedObject->itemEditorFactory();
}

void PythonQtWrapper_QItemDelegate::setEditorData(QItemDelegate* theWrappedObject, QWidget*  editor, const QModelIndex&  index) const
{
 ((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->promoted_setEditorData(editor, index);
}

void PythonQtWrapper_QItemDelegate::setItemEditorFactory(QItemDelegate* theWrappedObject, QItemEditorFactory*  factory)
{
 theWrappedObject->setItemEditorFactory(factory);
}

void PythonQtWrapper_QItemDelegate::drawDisplay(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QString&  text) const
{
 ((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->promoted_drawDisplay(painter, option, rect, text);
}

QSize  PythonQtWrapper_QItemDelegate::sizeHint(QItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QModelIndex&  index) const
{
return  ((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->promoted_sizeHint(option, index);
}

void PythonQtWrapper_QItemDelegate::drawCheck(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, Qt::CheckState  state) const
{
 ((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->promoted_drawCheck(painter, option, rect, state);
}

void PythonQtWrapper_QItemDelegate::updateEditorGeometry(QItemDelegate* theWrappedObject, QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const
{
 ((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->promoted_updateEditorGeometry(editor, option, index);
}

QWidget*  PythonQtWrapper_QItemDelegate::createEditor(QItemDelegate* theWrappedObject, QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const
{
return  ((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->promoted_createEditor(parent, option, index);
}

void PythonQtWrapper_QItemDelegate::paint(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const
{
 ((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->promoted_paint(painter, option, index);
}

void PythonQtWrapper_QItemDelegate::setClipping(QItemDelegate* theWrappedObject, bool  clip)
{
 theWrappedObject->setClipping(clip);
}

bool  PythonQtWrapper_QItemDelegate::eventFilter(QItemDelegate* theWrappedObject, QObject*  object, QEvent*  event)
{
return  ((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->promoted_eventFilter(object, event);
}

bool  PythonQtWrapper_QItemDelegate::hasClipping(QItemDelegate* theWrappedObject) const
{
return  theWrappedObject->hasClipping();
}

void PythonQtWrapper_QItemDelegate::drawDecoration(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QPixmap&  pixmap) const
{
 ((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->promoted_drawDecoration(painter, option, rect, pixmap);
}

