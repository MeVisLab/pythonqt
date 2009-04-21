#include "PythonQtWrapper_QIconEngine.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qpainter.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qsize.h>

QSize  PythonQtShell_QIconEngine::actualSize(const QSize&  size, QIcon::Mode  mode, QIcon::State  state)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actualSize");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QIconEngine::staticMetaObject,
      "actualSize(QIconEngine*,const QSize& ,QIcon::Mode ,QIcon::State )");
      QSize  returnValue;
    void* args[4] = {NULL, (void*)&size, (void*)&mode, (void*)&state};
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
  return QIconEngine::actualSize(size, mode, state);
}
void PythonQtShell_QIconEngine::addFile(const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "addFile");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QIconEngine::staticMetaObject,
      "addFile(QIconEngine*,const QString& ,const QSize& ,QIcon::Mode ,QIcon::State )");
    void* args[5] = {NULL, (void*)&fileName, (void*)&size, (void*)&mode, (void*)&state};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QIconEngine::addFile(fileName, size, mode, state);
}
void PythonQtShell_QIconEngine::addPixmap(const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "addPixmap");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QIconEngine::staticMetaObject,
      "addPixmap(QIconEngine*,const QPixmap& ,QIcon::Mode ,QIcon::State )");
    void* args[4] = {NULL, (void*)&pixmap, (void*)&mode, (void*)&state};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QIconEngine::addPixmap(pixmap, mode, state);
}
void PythonQtShell_QIconEngine::paint(QPainter*  painter, const QRect&  rect, QIcon::Mode  mode, QIcon::State  state)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QIconEngine::staticMetaObject,
      "paint(QIconEngine*,QPainter* ,const QRect& ,QIcon::Mode ,QIcon::State )");
    void* args[5] = {NULL, (void*)&painter, (void*)&rect, (void*)&mode, (void*)&state};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  
}
QPixmap  PythonQtShell_QIconEngine::pixmap(const QSize&  size, QIcon::Mode  mode, QIcon::State  state)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "pixmap");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QIconEngine::staticMetaObject,
      "pixmap(QIconEngine*,const QSize& ,QIcon::Mode ,QIcon::State )");
      QPixmap  returnValue;
    void* args[4] = {NULL, (void*)&size, (void*)&mode, (void*)&state};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QPixmap *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QIconEngine::pixmap(size, mode, state);
}
QIconEngine* PythonQtWrapper_QIconEngine::new_QIconEngine()
{ 
return new PythonQtShell_QIconEngine(); }

void PythonQtWrapper_QIconEngine::addPixmap(QIconEngine* theWrappedObject, const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state)
{
 ((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->promoted_addPixmap(pixmap, mode, state);
}

void PythonQtWrapper_QIconEngine::addFile(QIconEngine* theWrappedObject, const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state)
{
 ((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->promoted_addFile(fileName, size, mode, state);
}

QSize  PythonQtWrapper_QIconEngine::actualSize(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state)
{
return  ((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->promoted_actualSize(size, mode, state);
}

QPixmap  PythonQtWrapper_QIconEngine::pixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state)
{
return  ((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->promoted_pixmap(size, mode, state);
}

