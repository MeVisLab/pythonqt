#include "PythonQtWrapper_QMotifStyle.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qapplication.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qicon.h>
#include <qlist.h>
#include <qmotifstyle.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qstyleoption.h>
#include <qwidget.h>

void PythonQtShell_QMotifStyle::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMotifStyle::staticMetaObject,
      "childEvent(QMotifStyle*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMotifStyle::childEvent(arg__1);
}
void PythonQtShell_QMotifStyle::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMotifStyle::staticMetaObject,
      "customEvent(QMotifStyle*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMotifStyle::customEvent(arg__1);
}
void PythonQtShell_QMotifStyle::drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawComplexControl");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMotifStyle::staticMetaObject,
      "drawComplexControl(QMotifStyle*,QStyle::ComplexControl ,const QStyleOptionComplex* ,QPainter* ,const QWidget* )");
    void* args[5] = {NULL, (void*)&cc, (void*)&opt, (void*)&p, (void*)&w};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMotifStyle::drawComplexControl(cc, opt, p, w);
}
void PythonQtShell_QMotifStyle::drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawControl");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMotifStyle::staticMetaObject,
      "drawControl(QMotifStyle*,QStyle::ControlElement ,const QStyleOption* ,QPainter* ,const QWidget* )");
    void* args[5] = {NULL, (void*)&element, (void*)&opt, (void*)&p, (void*)&w};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMotifStyle::drawControl(element, opt, p, w);
}
void PythonQtShell_QMotifStyle::drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawItemPixmap");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMotifStyle::staticMetaObject,
      "drawItemPixmap(QMotifStyle*,QPainter* ,const QRect& ,int ,const QPixmap& )");
    void* args[5] = {NULL, (void*)&painter, (void*)&rect, (void*)&alignment, (void*)&pixmap};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMotifStyle::drawItemPixmap(painter, rect, alignment, pixmap);
}
void PythonQtShell_QMotifStyle::drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawItemText");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMotifStyle::staticMetaObject,
      "drawItemText(QMotifStyle*,QPainter* ,const QRect& ,int ,const QPalette& ,bool ,const QString& ,QPalette::ColorRole )");
    void* args[8] = {NULL, (void*)&painter, (void*)&rect, (void*)&flags, (void*)&pal, (void*)&enabled, (void*)&text, (void*)&textRole};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMotifStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
}
void PythonQtShell_QMotifStyle::drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawPrimitive");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMotifStyle::staticMetaObject,
      "drawPrimitive(QMotifStyle*,QStyle::PrimitiveElement ,const QStyleOption* ,QPainter* ,const QWidget* )");
    void* args[5] = {NULL, (void*)&pe, (void*)&opt, (void*)&p, (void*)&w};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMotifStyle::drawPrimitive(pe, opt, p, w);
}
bool  PythonQtShell_QMotifStyle::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMotifStyle::staticMetaObject,
      "event(QMotifStyle*,QEvent* )");
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
  return QMotifStyle::event(arg__1);
}
bool  PythonQtShell_QMotifStyle::eventFilter(QObject*  o, QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMotifStyle::staticMetaObject,
      "eventFilter(QMotifStyle*,QObject* ,QEvent* )");
      bool  returnValue;
    void* args[3] = {NULL, (void*)&o, (void*)&e};
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
  return QMotifStyle::eventFilter(o, e);
}
QPixmap  PythonQtShell_QMotifStyle::generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "generatedIconPixmap");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMotifStyle::staticMetaObject,
      "generatedIconPixmap(QMotifStyle*,QIcon::Mode ,const QPixmap& ,const QStyleOption* )");
      QPixmap  returnValue;
    void* args[4] = {NULL, (void*)&iconMode, (void*)&pixmap, (void*)&opt};
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
  return QMotifStyle::generatedIconPixmap(iconMode, pixmap, opt);
}
QStyle::SubControl  PythonQtShell_QMotifStyle::hitTestComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hitTestComplexControl");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMotifStyle::staticMetaObject,
      "hitTestComplexControl(QMotifStyle*,QStyle::ComplexControl ,const QStyleOptionComplex* ,const QPoint& ,const QWidget* )");
      QStyle::SubControl  returnValue;
    void* args[5] = {NULL, (void*)&cc, (void*)&opt, (void*)&pt, (void*)&w};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QStyle::SubControl *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QMotifStyle::hitTestComplexControl(cc, opt, pt, w);
}
QRect  PythonQtShell_QMotifStyle::itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemPixmapRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMotifStyle::staticMetaObject,
      "itemPixmapRect(QMotifStyle*,const QRect& ,int ,const QPixmap& )");
      QRect  returnValue;
    void* args[4] = {NULL, (void*)&r, (void*)&flags, (void*)&pixmap};
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
  return QMotifStyle::itemPixmapRect(r, flags, pixmap);
}
int  PythonQtShell_QMotifStyle::pixelMetric(QStyle::PixelMetric  metric, const QStyleOption*  option, const QWidget*  widget) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "pixelMetric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMotifStyle::staticMetaObject,
      "pixelMetric(QMotifStyle*,QStyle::PixelMetric ,const QStyleOption* ,const QWidget* )");
      int  returnValue;
    void* args[4] = {NULL, (void*)&metric, (void*)&option, (void*)&widget};
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
  return QMotifStyle::pixelMetric(metric, option, widget);
}
void PythonQtShell_QMotifStyle::polish(QApplication*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "polish");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMotifStyle::staticMetaObject,
      "polish(QMotifStyle*,QApplication* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMotifStyle::polish(arg__1);
}
void PythonQtShell_QMotifStyle::polish(QPalette&  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "polish");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMotifStyle::staticMetaObject,
      "polish(QMotifStyle*,QPalette& )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMotifStyle::polish(arg__1);
}
void PythonQtShell_QMotifStyle::polish(QWidget*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "polish");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMotifStyle::staticMetaObject,
      "polish(QMotifStyle*,QWidget* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMotifStyle::polish(arg__1);
}
QSize  PythonQtShell_QMotifStyle::sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sizeFromContents");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMotifStyle::staticMetaObject,
      "sizeFromContents(QMotifStyle*,QStyle::ContentsType ,const QStyleOption* ,const QSize& ,const QWidget* )");
      QSize  returnValue;
    void* args[5] = {NULL, (void*)&ct, (void*)&opt, (void*)&contentsSize, (void*)&widget};
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
  return QMotifStyle::sizeFromContents(ct, opt, contentsSize, widget);
}
QPalette  PythonQtShell_QMotifStyle::standardPalette() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "standardPalette");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMotifStyle::staticMetaObject,
      "standardPalette(QMotifStyle*)");
      QPalette  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QPalette *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QMotifStyle::standardPalette();
}
QPixmap  PythonQtShell_QMotifStyle::standardPixmap(QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "standardPixmap");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMotifStyle::staticMetaObject,
      "standardPixmap(QMotifStyle*,QStyle::StandardPixmap ,const QStyleOption* ,const QWidget* )");
      QPixmap  returnValue;
    void* args[4] = {NULL, (void*)&standardPixmap, (void*)&opt, (void*)&widget};
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
  QPixmap  result;
return result;
}
int  PythonQtShell_QMotifStyle::styleHint(QStyle::StyleHint  hint, const QStyleOption*  opt, const QWidget*  widget, QStyleHintReturn*  returnData) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "styleHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMotifStyle::staticMetaObject,
      "styleHint(QMotifStyle*,QStyle::StyleHint ,const QStyleOption* ,const QWidget* ,QStyleHintReturn* )");
      int  returnValue;
    void* args[5] = {NULL, (void*)&hint, (void*)&opt, (void*)&widget, (void*)&returnData};
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
  return QMotifStyle::styleHint(hint, opt, widget, returnData);
}
QRect  PythonQtShell_QMotifStyle::subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "subControlRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMotifStyle::staticMetaObject,
      "subControlRect(QMotifStyle*,QStyle::ComplexControl ,const QStyleOptionComplex* ,QStyle::SubControl ,const QWidget* )");
      QRect  returnValue;
    void* args[5] = {NULL, (void*)&cc, (void*)&opt, (void*)&sc, (void*)&widget};
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
  return QMotifStyle::subControlRect(cc, opt, sc, widget);
}
QRect  PythonQtShell_QMotifStyle::subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "subElementRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMotifStyle::staticMetaObject,
      "subElementRect(QMotifStyle*,QStyle::SubElement ,const QStyleOption* ,const QWidget* )");
      QRect  returnValue;
    void* args[4] = {NULL, (void*)&r, (void*)&opt, (void*)&widget};
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
  return QMotifStyle::subElementRect(r, opt, widget);
}
void PythonQtShell_QMotifStyle::timerEvent(QTimerEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMotifStyle::staticMetaObject,
      "timerEvent(QMotifStyle*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMotifStyle::timerEvent(event);
}
void PythonQtShell_QMotifStyle::unpolish(QApplication*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "unpolish");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMotifStyle::staticMetaObject,
      "unpolish(QMotifStyle*,QApplication* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMotifStyle::unpolish(arg__1);
}
void PythonQtShell_QMotifStyle::unpolish(QWidget*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "unpolish");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMotifStyle::staticMetaObject,
      "unpolish(QMotifStyle*,QWidget* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMotifStyle::unpolish(arg__1);
}
QMotifStyle* PythonQtWrapper_QMotifStyle::new_QMotifStyle(bool  useHighlightCols)
{ 
return new PythonQtShell_QMotifStyle(useHighlightCols); }

void PythonQtWrapper_QMotifStyle::timerEvent(QMotifStyle* theWrappedObject, QTimerEvent*  event)
{
 ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_timerEvent(event);
}

void PythonQtWrapper_QMotifStyle::drawComplexControl(QMotifStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w) const
{
 ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_drawComplexControl(cc, opt, p, w);
}

void PythonQtWrapper_QMotifStyle::polish(QMotifStyle* theWrappedObject, QApplication*  arg__1)
{
 ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_polish(arg__1);
}

bool  PythonQtWrapper_QMotifStyle::useHighlightColors(QMotifStyle* theWrappedObject) const
{
return  theWrappedObject->useHighlightColors();
}

QSize  PythonQtWrapper_QMotifStyle::sizeFromContents(QMotifStyle* theWrappedObject, QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget) const
{
return  ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_sizeFromContents(ct, opt, contentsSize, widget);
}

QRect  PythonQtWrapper_QMotifStyle::subElementRect(QMotifStyle* theWrappedObject, QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget) const
{
return  ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_subElementRect(r, opt, widget);
}

void PythonQtWrapper_QMotifStyle::drawControl(QMotifStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w) const
{
 ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_drawControl(element, opt, p, w);
}

int  PythonQtWrapper_QMotifStyle::pixelMetric(QMotifStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option, const QWidget*  widget) const
{
return  ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_pixelMetric(metric, option, widget);
}

int  PythonQtWrapper_QMotifStyle::styleHint(QMotifStyle* theWrappedObject, QStyle::StyleHint  hint, const QStyleOption*  opt, const QWidget*  widget, QStyleHintReturn*  returnData) const
{
return  ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_styleHint(hint, opt, widget, returnData);
}

void PythonQtWrapper_QMotifStyle::polish(QMotifStyle* theWrappedObject, QWidget*  arg__1)
{
 ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_polish(arg__1);
}

QPalette  PythonQtWrapper_QMotifStyle::standardPalette(QMotifStyle* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_standardPalette();
}

void PythonQtWrapper_QMotifStyle::unpolish(QMotifStyle* theWrappedObject, QWidget*  arg__1)
{
 ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_unpolish(arg__1);
}

bool  PythonQtWrapper_QMotifStyle::eventFilter(QMotifStyle* theWrappedObject, QObject*  o, QEvent*  e)
{
return  ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_eventFilter(o, e);
}

QRect  PythonQtWrapper_QMotifStyle::subControlRect(QMotifStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const
{
return  ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_subControlRect(cc, opt, sc, widget);
}

void PythonQtWrapper_QMotifStyle::polish(QMotifStyle* theWrappedObject, QPalette&  arg__1)
{
 ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_polish(arg__1);
}

bool  PythonQtWrapper_QMotifStyle::event(QMotifStyle* theWrappedObject, QEvent*  arg__1)
{
return  ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_event(arg__1);
}

void PythonQtWrapper_QMotifStyle::setUseHighlightColors(QMotifStyle* theWrappedObject, bool  arg__1)
{
 theWrappedObject->setUseHighlightColors(arg__1);
}

void PythonQtWrapper_QMotifStyle::unpolish(QMotifStyle* theWrappedObject, QApplication*  arg__1)
{
 ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_unpolish(arg__1);
}

void PythonQtWrapper_QMotifStyle::drawPrimitive(QMotifStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w) const
{
 ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_drawPrimitive(pe, opt, p, w);
}

