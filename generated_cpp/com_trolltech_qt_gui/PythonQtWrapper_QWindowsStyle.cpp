#include "PythonQtWrapper_QWindowsStyle.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qapplication.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qicon.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qstyleoption.h>
#include <qwidget.h>
#include <qwindowsstyle.h>

void PythonQtShell_QWindowsStyle::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWindowsStyle::staticMetaObject,
      "childEvent(QWindowsStyle*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWindowsStyle::childEvent(arg__1);
}
void PythonQtShell_QWindowsStyle::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWindowsStyle::staticMetaObject,
      "customEvent(QWindowsStyle*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWindowsStyle::customEvent(arg__1);
}
void PythonQtShell_QWindowsStyle::drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawComplexControl");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWindowsStyle::staticMetaObject,
      "drawComplexControl(QWindowsStyle*,QStyle::ComplexControl ,const QStyleOptionComplex* ,QPainter* ,const QWidget* )");
    void* args[5] = {NULL, (void*)&cc, (void*)&opt, (void*)&p, (void*)&w};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWindowsStyle::drawComplexControl(cc, opt, p, w);
}
void PythonQtShell_QWindowsStyle::drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawControl");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWindowsStyle::staticMetaObject,
      "drawControl(QWindowsStyle*,QStyle::ControlElement ,const QStyleOption* ,QPainter* ,const QWidget* )");
    void* args[5] = {NULL, (void*)&element, (void*)&opt, (void*)&p, (void*)&w};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWindowsStyle::drawControl(element, opt, p, w);
}
void PythonQtShell_QWindowsStyle::drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawItemPixmap");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWindowsStyle::staticMetaObject,
      "drawItemPixmap(QWindowsStyle*,QPainter* ,const QRect& ,int ,const QPixmap& )");
    void* args[5] = {NULL, (void*)&painter, (void*)&rect, (void*)&alignment, (void*)&pixmap};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWindowsStyle::drawItemPixmap(painter, rect, alignment, pixmap);
}
void PythonQtShell_QWindowsStyle::drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawItemText");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWindowsStyle::staticMetaObject,
      "drawItemText(QWindowsStyle*,QPainter* ,const QRect& ,int ,const QPalette& ,bool ,const QString& ,QPalette::ColorRole )");
    void* args[8] = {NULL, (void*)&painter, (void*)&rect, (void*)&flags, (void*)&pal, (void*)&enabled, (void*)&text, (void*)&textRole};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWindowsStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
}
void PythonQtShell_QWindowsStyle::drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawPrimitive");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWindowsStyle::staticMetaObject,
      "drawPrimitive(QWindowsStyle*,QStyle::PrimitiveElement ,const QStyleOption* ,QPainter* ,const QWidget* )");
    void* args[5] = {NULL, (void*)&pe, (void*)&opt, (void*)&p, (void*)&w};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWindowsStyle::drawPrimitive(pe, opt, p, w);
}
bool  PythonQtShell_QWindowsStyle::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWindowsStyle::staticMetaObject,
      "event(QWindowsStyle*,QEvent* )");
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
  return QWindowsStyle::event(arg__1);
}
bool  PythonQtShell_QWindowsStyle::eventFilter(QObject*  o, QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWindowsStyle::staticMetaObject,
      "eventFilter(QWindowsStyle*,QObject* ,QEvent* )");
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
  return QWindowsStyle::eventFilter(o, e);
}
QPixmap  PythonQtShell_QWindowsStyle::generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "generatedIconPixmap");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWindowsStyle::staticMetaObject,
      "generatedIconPixmap(QWindowsStyle*,QIcon::Mode ,const QPixmap& ,const QStyleOption* )");
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
  return QWindowsStyle::generatedIconPixmap(iconMode, pixmap, opt);
}
QStyle::SubControl  PythonQtShell_QWindowsStyle::hitTestComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hitTestComplexControl");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWindowsStyle::staticMetaObject,
      "hitTestComplexControl(QWindowsStyle*,QStyle::ComplexControl ,const QStyleOptionComplex* ,const QPoint& ,const QWidget* )");
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
  return QWindowsStyle::hitTestComplexControl(cc, opt, pt, w);
}
QRect  PythonQtShell_QWindowsStyle::itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemPixmapRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWindowsStyle::staticMetaObject,
      "itemPixmapRect(QWindowsStyle*,const QRect& ,int ,const QPixmap& )");
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
  return QWindowsStyle::itemPixmapRect(r, flags, pixmap);
}
int  PythonQtShell_QWindowsStyle::pixelMetric(QStyle::PixelMetric  pm, const QStyleOption*  option, const QWidget*  widget) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "pixelMetric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWindowsStyle::staticMetaObject,
      "pixelMetric(QWindowsStyle*,QStyle::PixelMetric ,const QStyleOption* ,const QWidget* )");
      int  returnValue;
    void* args[4] = {NULL, (void*)&pm, (void*)&option, (void*)&widget};
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
  return QWindowsStyle::pixelMetric(pm, option, widget);
}
void PythonQtShell_QWindowsStyle::polish(QApplication*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "polish");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWindowsStyle::staticMetaObject,
      "polish(QWindowsStyle*,QApplication* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWindowsStyle::polish(arg__1);
}
void PythonQtShell_QWindowsStyle::polish(QPalette&  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "polish");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWindowsStyle::staticMetaObject,
      "polish(QWindowsStyle*,QPalette& )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWindowsStyle::polish(arg__1);
}
void PythonQtShell_QWindowsStyle::polish(QWidget*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "polish");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWindowsStyle::staticMetaObject,
      "polish(QWindowsStyle*,QWidget* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWindowsStyle::polish(arg__1);
}
QSize  PythonQtShell_QWindowsStyle::sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sizeFromContents");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWindowsStyle::staticMetaObject,
      "sizeFromContents(QWindowsStyle*,QStyle::ContentsType ,const QStyleOption* ,const QSize& ,const QWidget* )");
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
  return QWindowsStyle::sizeFromContents(ct, opt, contentsSize, widget);
}
QPalette  PythonQtShell_QWindowsStyle::standardPalette() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "standardPalette");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWindowsStyle::staticMetaObject,
      "standardPalette(QWindowsStyle*)");
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
  return QWindowsStyle::standardPalette();
}
QPixmap  PythonQtShell_QWindowsStyle::standardPixmap(QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "standardPixmap");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWindowsStyle::staticMetaObject,
      "standardPixmap(QWindowsStyle*,QStyle::StandardPixmap ,const QStyleOption* ,const QWidget* )");
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
int  PythonQtShell_QWindowsStyle::styleHint(QStyle::StyleHint  hint, const QStyleOption*  opt, const QWidget*  widget, QStyleHintReturn*  returnData) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "styleHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWindowsStyle::staticMetaObject,
      "styleHint(QWindowsStyle*,QStyle::StyleHint ,const QStyleOption* ,const QWidget* ,QStyleHintReturn* )");
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
  return QWindowsStyle::styleHint(hint, opt, widget, returnData);
}
QRect  PythonQtShell_QWindowsStyle::subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  w) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "subControlRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWindowsStyle::staticMetaObject,
      "subControlRect(QWindowsStyle*,QStyle::ComplexControl ,const QStyleOptionComplex* ,QStyle::SubControl ,const QWidget* )");
      QRect  returnValue;
    void* args[5] = {NULL, (void*)&cc, (void*)&opt, (void*)&sc, (void*)&w};
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
  return QWindowsStyle::subControlRect(cc, opt, sc, w);
}
QRect  PythonQtShell_QWindowsStyle::subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "subElementRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWindowsStyle::staticMetaObject,
      "subElementRect(QWindowsStyle*,QStyle::SubElement ,const QStyleOption* ,const QWidget* )");
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
  return QWindowsStyle::subElementRect(r, opt, widget);
}
void PythonQtShell_QWindowsStyle::timerEvent(QTimerEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWindowsStyle::staticMetaObject,
      "timerEvent(QWindowsStyle*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWindowsStyle::timerEvent(event);
}
void PythonQtShell_QWindowsStyle::unpolish(QApplication*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "unpolish");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWindowsStyle::staticMetaObject,
      "unpolish(QWindowsStyle*,QApplication* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWindowsStyle::unpolish(arg__1);
}
void PythonQtShell_QWindowsStyle::unpolish(QWidget*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "unpolish");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWindowsStyle::staticMetaObject,
      "unpolish(QWindowsStyle*,QWidget* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWindowsStyle::unpolish(arg__1);
}
QWindowsStyle* PythonQtWrapper_QWindowsStyle::new_QWindowsStyle()
{ 
return new PythonQtShell_QWindowsStyle(); }

QRect  PythonQtWrapper_QWindowsStyle::subElementRect(QWindowsStyle* theWrappedObject, QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget) const
{
return  ((PythonQtPublicPromoter_QWindowsStyle*)theWrappedObject)->promoted_subElementRect(r, opt, widget);
}

void PythonQtWrapper_QWindowsStyle::drawControl(QWindowsStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w) const
{
 ((PythonQtPublicPromoter_QWindowsStyle*)theWrappedObject)->promoted_drawControl(element, opt, p, w);
}

int  PythonQtWrapper_QWindowsStyle::styleHint(QWindowsStyle* theWrappedObject, QStyle::StyleHint  hint, const QStyleOption*  opt, const QWidget*  widget, QStyleHintReturn*  returnData) const
{
return  ((PythonQtPublicPromoter_QWindowsStyle*)theWrappedObject)->promoted_styleHint(hint, opt, widget, returnData);
}

void PythonQtWrapper_QWindowsStyle::timerEvent(QWindowsStyle* theWrappedObject, QTimerEvent*  event)
{
 ((PythonQtPublicPromoter_QWindowsStyle*)theWrappedObject)->promoted_timerEvent(event);
}

void PythonQtWrapper_QWindowsStyle::drawComplexControl(QWindowsStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w) const
{
 ((PythonQtPublicPromoter_QWindowsStyle*)theWrappedObject)->promoted_drawComplexControl(cc, opt, p, w);
}

int  PythonQtWrapper_QWindowsStyle::pixelMetric(QWindowsStyle* theWrappedObject, QStyle::PixelMetric  pm, const QStyleOption*  option, const QWidget*  widget) const
{
return  ((PythonQtPublicPromoter_QWindowsStyle*)theWrappedObject)->promoted_pixelMetric(pm, option, widget);
}

void PythonQtWrapper_QWindowsStyle::drawPrimitive(QWindowsStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w) const
{
 ((PythonQtPublicPromoter_QWindowsStyle*)theWrappedObject)->promoted_drawPrimitive(pe, opt, p, w);
}

void PythonQtWrapper_QWindowsStyle::polish(QWindowsStyle* theWrappedObject, QApplication*  arg__1)
{
 ((PythonQtPublicPromoter_QWindowsStyle*)theWrappedObject)->promoted_polish(arg__1);
}

QSize  PythonQtWrapper_QWindowsStyle::sizeFromContents(QWindowsStyle* theWrappedObject, QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget) const
{
return  ((PythonQtPublicPromoter_QWindowsStyle*)theWrappedObject)->promoted_sizeFromContents(ct, opt, contentsSize, widget);
}

bool  PythonQtWrapper_QWindowsStyle::eventFilter(QWindowsStyle* theWrappedObject, QObject*  o, QEvent*  e)
{
return  ((PythonQtPublicPromoter_QWindowsStyle*)theWrappedObject)->promoted_eventFilter(o, e);
}

void PythonQtWrapper_QWindowsStyle::polish(QWindowsStyle* theWrappedObject, QPalette&  arg__1)
{
 ((PythonQtPublicPromoter_QWindowsStyle*)theWrappedObject)->promoted_polish(arg__1);
}

void PythonQtWrapper_QWindowsStyle::unpolish(QWindowsStyle* theWrappedObject, QApplication*  arg__1)
{
 ((PythonQtPublicPromoter_QWindowsStyle*)theWrappedObject)->promoted_unpolish(arg__1);
}

void PythonQtWrapper_QWindowsStyle::polish(QWindowsStyle* theWrappedObject, QWidget*  arg__1)
{
 ((PythonQtPublicPromoter_QWindowsStyle*)theWrappedObject)->promoted_polish(arg__1);
}

void PythonQtWrapper_QWindowsStyle::unpolish(QWindowsStyle* theWrappedObject, QWidget*  arg__1)
{
 ((PythonQtPublicPromoter_QWindowsStyle*)theWrappedObject)->promoted_unpolish(arg__1);
}

