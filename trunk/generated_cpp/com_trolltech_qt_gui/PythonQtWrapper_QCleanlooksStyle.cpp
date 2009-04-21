#include "PythonQtWrapper_QCleanlooksStyle.h"

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

void PythonQtShell_QCleanlooksStyle::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCleanlooksStyle::staticMetaObject,
      "childEvent(QCleanlooksStyle*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QCleanlooksStyle::childEvent(arg__1);
}
void PythonQtShell_QCleanlooksStyle::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCleanlooksStyle::staticMetaObject,
      "customEvent(QCleanlooksStyle*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QCleanlooksStyle::customEvent(arg__1);
}
void PythonQtShell_QCleanlooksStyle::drawComplexControl(QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawComplexControl");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCleanlooksStyle::staticMetaObject,
      "drawComplexControl(QCleanlooksStyle*,QStyle::ComplexControl ,const QStyleOptionComplex* ,QPainter* ,const QWidget* )");
    void* args[5] = {NULL, (void*)&control, (void*)&option, (void*)&painter, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QCleanlooksStyle::drawComplexControl(control, option, painter, widget);
}
void PythonQtShell_QCleanlooksStyle::drawControl(QStyle::ControlElement  ce, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawControl");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCleanlooksStyle::staticMetaObject,
      "drawControl(QCleanlooksStyle*,QStyle::ControlElement ,const QStyleOption* ,QPainter* ,const QWidget* )");
    void* args[5] = {NULL, (void*)&ce, (void*)&option, (void*)&painter, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QCleanlooksStyle::drawControl(ce, option, painter, widget);
}
void PythonQtShell_QCleanlooksStyle::drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawItemPixmap");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCleanlooksStyle::staticMetaObject,
      "drawItemPixmap(QCleanlooksStyle*,QPainter* ,const QRect& ,int ,const QPixmap& )");
    void* args[5] = {NULL, (void*)&painter, (void*)&rect, (void*)&alignment, (void*)&pixmap};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QCleanlooksStyle::drawItemPixmap(painter, rect, alignment, pixmap);
}
void PythonQtShell_QCleanlooksStyle::drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawItemText");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCleanlooksStyle::staticMetaObject,
      "drawItemText(QCleanlooksStyle*,QPainter* ,const QRect& ,int ,const QPalette& ,bool ,const QString& ,QPalette::ColorRole )");
    void* args[8] = {NULL, (void*)&painter, (void*)&rect, (void*)&flags, (void*)&pal, (void*)&enabled, (void*)&text, (void*)&textRole};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QCleanlooksStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
}
void PythonQtShell_QCleanlooksStyle::drawPrimitive(QStyle::PrimitiveElement  elem, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawPrimitive");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCleanlooksStyle::staticMetaObject,
      "drawPrimitive(QCleanlooksStyle*,QStyle::PrimitiveElement ,const QStyleOption* ,QPainter* ,const QWidget* )");
    void* args[5] = {NULL, (void*)&elem, (void*)&option, (void*)&painter, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QCleanlooksStyle::drawPrimitive(elem, option, painter, widget);
}
bool  PythonQtShell_QCleanlooksStyle::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCleanlooksStyle::staticMetaObject,
      "event(QCleanlooksStyle*,QEvent* )");
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
  return QCleanlooksStyle::event(arg__1);
}
bool  PythonQtShell_QCleanlooksStyle::eventFilter(QObject*  o, QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCleanlooksStyle::staticMetaObject,
      "eventFilter(QCleanlooksStyle*,QObject* ,QEvent* )");
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
  return QCleanlooksStyle::eventFilter(o, e);
}
QPixmap  PythonQtShell_QCleanlooksStyle::generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "generatedIconPixmap");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCleanlooksStyle::staticMetaObject,
      "generatedIconPixmap(QCleanlooksStyle*,QIcon::Mode ,const QPixmap& ,const QStyleOption* )");
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
  return QCleanlooksStyle::generatedIconPixmap(iconMode, pixmap, opt);
}
QStyle::SubControl  PythonQtShell_QCleanlooksStyle::hitTestComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hitTestComplexControl");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCleanlooksStyle::staticMetaObject,
      "hitTestComplexControl(QCleanlooksStyle*,QStyle::ComplexControl ,const QStyleOptionComplex* ,const QPoint& ,const QWidget* )");
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
  return QCleanlooksStyle::hitTestComplexControl(cc, opt, pt, w);
}
QRect  PythonQtShell_QCleanlooksStyle::itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemPixmapRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCleanlooksStyle::staticMetaObject,
      "itemPixmapRect(QCleanlooksStyle*,const QRect& ,int ,const QPixmap& )");
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
  return QCleanlooksStyle::itemPixmapRect(r, flags, pixmap);
}
int  PythonQtShell_QCleanlooksStyle::pixelMetric(QStyle::PixelMetric  metric, const QStyleOption*  option, const QWidget*  widget) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "pixelMetric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCleanlooksStyle::staticMetaObject,
      "pixelMetric(QCleanlooksStyle*,QStyle::PixelMetric ,const QStyleOption* ,const QWidget* )");
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
  return QCleanlooksStyle::pixelMetric(metric, option, widget);
}
void PythonQtShell_QCleanlooksStyle::polish(QApplication*  app)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "polish");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCleanlooksStyle::staticMetaObject,
      "polish(QCleanlooksStyle*,QApplication* )");
    void* args[2] = {NULL, (void*)&app};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QCleanlooksStyle::polish(app);
}
void PythonQtShell_QCleanlooksStyle::polish(QPalette&  pal)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "polish");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCleanlooksStyle::staticMetaObject,
      "polish(QCleanlooksStyle*,QPalette& )");
    void* args[2] = {NULL, (void*)&pal};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QCleanlooksStyle::polish(pal);
}
void PythonQtShell_QCleanlooksStyle::polish(QWidget*  widget)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "polish");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCleanlooksStyle::staticMetaObject,
      "polish(QCleanlooksStyle*,QWidget* )");
    void* args[2] = {NULL, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QCleanlooksStyle::polish(widget);
}
QSize  PythonQtShell_QCleanlooksStyle::sizeFromContents(QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sizeFromContents");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCleanlooksStyle::staticMetaObject,
      "sizeFromContents(QCleanlooksStyle*,QStyle::ContentsType ,const QStyleOption* ,const QSize& ,const QWidget* )");
      QSize  returnValue;
    void* args[5] = {NULL, (void*)&type, (void*)&option, (void*)&size, (void*)&widget};
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
  return QCleanlooksStyle::sizeFromContents(type, option, size, widget);
}
QPalette  PythonQtShell_QCleanlooksStyle::standardPalette() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "standardPalette");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCleanlooksStyle::staticMetaObject,
      "standardPalette(QCleanlooksStyle*)");
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
  return QCleanlooksStyle::standardPalette();
}
QPixmap  PythonQtShell_QCleanlooksStyle::standardPixmap(QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "standardPixmap");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCleanlooksStyle::staticMetaObject,
      "standardPixmap(QCleanlooksStyle*,QStyle::StandardPixmap ,const QStyleOption* ,const QWidget* )");
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
int  PythonQtShell_QCleanlooksStyle::styleHint(QStyle::StyleHint  hint, const QStyleOption*  option, const QWidget*  widget, QStyleHintReturn*  returnData) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "styleHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCleanlooksStyle::staticMetaObject,
      "styleHint(QCleanlooksStyle*,QStyle::StyleHint ,const QStyleOption* ,const QWidget* ,QStyleHintReturn* )");
      int  returnValue;
    void* args[5] = {NULL, (void*)&hint, (void*)&option, (void*)&widget, (void*)&returnData};
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
  return QCleanlooksStyle::styleHint(hint, option, widget, returnData);
}
QRect  PythonQtShell_QCleanlooksStyle::subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "subControlRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCleanlooksStyle::staticMetaObject,
      "subControlRect(QCleanlooksStyle*,QStyle::ComplexControl ,const QStyleOptionComplex* ,QStyle::SubControl ,const QWidget* )");
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
  return QCleanlooksStyle::subControlRect(cc, opt, sc, widget);
}
QRect  PythonQtShell_QCleanlooksStyle::subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "subElementRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCleanlooksStyle::staticMetaObject,
      "subElementRect(QCleanlooksStyle*,QStyle::SubElement ,const QStyleOption* ,const QWidget* )");
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
  return QCleanlooksStyle::subElementRect(r, opt, widget);
}
void PythonQtShell_QCleanlooksStyle::timerEvent(QTimerEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCleanlooksStyle::staticMetaObject,
      "timerEvent(QCleanlooksStyle*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QCleanlooksStyle::timerEvent(event);
}
void PythonQtShell_QCleanlooksStyle::unpolish(QApplication*  app)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "unpolish");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCleanlooksStyle::staticMetaObject,
      "unpolish(QCleanlooksStyle*,QApplication* )");
    void* args[2] = {NULL, (void*)&app};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QCleanlooksStyle::unpolish(app);
}
void PythonQtShell_QCleanlooksStyle::unpolish(QWidget*  widget)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "unpolish");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCleanlooksStyle::staticMetaObject,
      "unpolish(QCleanlooksStyle*,QWidget* )");
    void* args[2] = {NULL, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QCleanlooksStyle::unpolish(widget);
}
QCleanlooksStyle* PythonQtWrapper_QCleanlooksStyle::new_QCleanlooksStyle()
{ 
return new PythonQtShell_QCleanlooksStyle(); }

void PythonQtWrapper_QCleanlooksStyle::drawItemPixmap(QCleanlooksStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const
{
 ((PythonQtPublicPromoter_QCleanlooksStyle*)theWrappedObject)->promoted_drawItemPixmap(painter, rect, alignment, pixmap);
}

void PythonQtWrapper_QCleanlooksStyle::unpolish(QCleanlooksStyle* theWrappedObject, QWidget*  widget)
{
 ((PythonQtPublicPromoter_QCleanlooksStyle*)theWrappedObject)->promoted_unpolish(widget);
}

QPixmap  PythonQtWrapper_QCleanlooksStyle::generatedIconPixmap(QCleanlooksStyle* theWrappedObject, QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const
{
return  ((PythonQtPublicPromoter_QCleanlooksStyle*)theWrappedObject)->promoted_generatedIconPixmap(iconMode, pixmap, opt);
}

QRect  PythonQtWrapper_QCleanlooksStyle::itemPixmapRect(QCleanlooksStyle* theWrappedObject, const QRect&  r, int  flags, const QPixmap&  pixmap) const
{
return  ((PythonQtPublicPromoter_QCleanlooksStyle*)theWrappedObject)->promoted_itemPixmapRect(r, flags, pixmap);
}

void PythonQtWrapper_QCleanlooksStyle::drawPrimitive(QCleanlooksStyle* theWrappedObject, QStyle::PrimitiveElement  elem, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const
{
 ((PythonQtPublicPromoter_QCleanlooksStyle*)theWrappedObject)->promoted_drawPrimitive(elem, option, painter, widget);
}

void PythonQtWrapper_QCleanlooksStyle::unpolish(QCleanlooksStyle* theWrappedObject, QApplication*  app)
{
 ((PythonQtPublicPromoter_QCleanlooksStyle*)theWrappedObject)->promoted_unpolish(app);
}

void PythonQtWrapper_QCleanlooksStyle::drawComplexControl(QCleanlooksStyle* theWrappedObject, QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget) const
{
 ((PythonQtPublicPromoter_QCleanlooksStyle*)theWrappedObject)->promoted_drawComplexControl(control, option, painter, widget);
}

int  PythonQtWrapper_QCleanlooksStyle::pixelMetric(QCleanlooksStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option, const QWidget*  widget) const
{
return  ((PythonQtPublicPromoter_QCleanlooksStyle*)theWrappedObject)->promoted_pixelMetric(metric, option, widget);
}

QRect  PythonQtWrapper_QCleanlooksStyle::subElementRect(QCleanlooksStyle* theWrappedObject, QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget) const
{
return  ((PythonQtPublicPromoter_QCleanlooksStyle*)theWrappedObject)->promoted_subElementRect(r, opt, widget);
}

QRect  PythonQtWrapper_QCleanlooksStyle::subControlRect(QCleanlooksStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const
{
return  ((PythonQtPublicPromoter_QCleanlooksStyle*)theWrappedObject)->promoted_subControlRect(cc, opt, sc, widget);
}

void PythonQtWrapper_QCleanlooksStyle::drawItemText(QCleanlooksStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole) const
{
 ((PythonQtPublicPromoter_QCleanlooksStyle*)theWrappedObject)->promoted_drawItemText(painter, rect, flags, pal, enabled, text, textRole);
}

void PythonQtWrapper_QCleanlooksStyle::polish(QCleanlooksStyle* theWrappedObject, QPalette&  pal)
{
 ((PythonQtPublicPromoter_QCleanlooksStyle*)theWrappedObject)->promoted_polish(pal);
}

void PythonQtWrapper_QCleanlooksStyle::polish(QCleanlooksStyle* theWrappedObject, QApplication*  app)
{
 ((PythonQtPublicPromoter_QCleanlooksStyle*)theWrappedObject)->promoted_polish(app);
}

QPalette  PythonQtWrapper_QCleanlooksStyle::standardPalette(QCleanlooksStyle* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QCleanlooksStyle*)theWrappedObject)->promoted_standardPalette();
}

void PythonQtWrapper_QCleanlooksStyle::drawControl(QCleanlooksStyle* theWrappedObject, QStyle::ControlElement  ce, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const
{
 ((PythonQtPublicPromoter_QCleanlooksStyle*)theWrappedObject)->promoted_drawControl(ce, option, painter, widget);
}

QSize  PythonQtWrapper_QCleanlooksStyle::sizeFromContents(QCleanlooksStyle* theWrappedObject, QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const
{
return  ((PythonQtPublicPromoter_QCleanlooksStyle*)theWrappedObject)->promoted_sizeFromContents(type, option, size, widget);
}

int  PythonQtWrapper_QCleanlooksStyle::styleHint(QCleanlooksStyle* theWrappedObject, QStyle::StyleHint  hint, const QStyleOption*  option, const QWidget*  widget, QStyleHintReturn*  returnData) const
{
return  ((PythonQtPublicPromoter_QCleanlooksStyle*)theWrappedObject)->promoted_styleHint(hint, option, widget, returnData);
}

void PythonQtWrapper_QCleanlooksStyle::polish(QCleanlooksStyle* theWrappedObject, QWidget*  widget)
{
 ((PythonQtPublicPromoter_QCleanlooksStyle*)theWrappedObject)->promoted_polish(widget);
}

QStyle::SubControl  PythonQtWrapper_QCleanlooksStyle::hitTestComplexControl(QCleanlooksStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w) const
{
return  ((PythonQtPublicPromoter_QCleanlooksStyle*)theWrappedObject)->promoted_hitTestComplexControl(cc, opt, pt, w);
}

