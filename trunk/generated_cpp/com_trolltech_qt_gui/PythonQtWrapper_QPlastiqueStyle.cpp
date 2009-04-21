#include "PythonQtWrapper_QPlastiqueStyle.h"

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
#include <qplastiquestyle.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qstyleoption.h>
#include <qwidget.h>

void PythonQtShell_QPlastiqueStyle::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlastiqueStyle::staticMetaObject,
      "childEvent(QPlastiqueStyle*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlastiqueStyle::childEvent(arg__1);
}
void PythonQtShell_QPlastiqueStyle::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlastiqueStyle::staticMetaObject,
      "customEvent(QPlastiqueStyle*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlastiqueStyle::customEvent(arg__1);
}
void PythonQtShell_QPlastiqueStyle::drawComplexControl(QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawComplexControl");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlastiqueStyle::staticMetaObject,
      "drawComplexControl(QPlastiqueStyle*,QStyle::ComplexControl ,const QStyleOptionComplex* ,QPainter* ,const QWidget* )");
    void* args[5] = {NULL, (void*)&control, (void*)&option, (void*)&painter, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlastiqueStyle::drawComplexControl(control, option, painter, widget);
}
void PythonQtShell_QPlastiqueStyle::drawControl(QStyle::ControlElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawControl");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlastiqueStyle::staticMetaObject,
      "drawControl(QPlastiqueStyle*,QStyle::ControlElement ,const QStyleOption* ,QPainter* ,const QWidget* )");
    void* args[5] = {NULL, (void*)&element, (void*)&option, (void*)&painter, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlastiqueStyle::drawControl(element, option, painter, widget);
}
void PythonQtShell_QPlastiqueStyle::drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawItemPixmap");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlastiqueStyle::staticMetaObject,
      "drawItemPixmap(QPlastiqueStyle*,QPainter* ,const QRect& ,int ,const QPixmap& )");
    void* args[5] = {NULL, (void*)&painter, (void*)&rect, (void*)&alignment, (void*)&pixmap};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlastiqueStyle::drawItemPixmap(painter, rect, alignment, pixmap);
}
void PythonQtShell_QPlastiqueStyle::drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawItemText");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlastiqueStyle::staticMetaObject,
      "drawItemText(QPlastiqueStyle*,QPainter* ,const QRect& ,int ,const QPalette& ,bool ,const QString& ,QPalette::ColorRole )");
    void* args[8] = {NULL, (void*)&painter, (void*)&rect, (void*)&flags, (void*)&pal, (void*)&enabled, (void*)&text, (void*)&textRole};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlastiqueStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
}
void PythonQtShell_QPlastiqueStyle::drawPrimitive(QStyle::PrimitiveElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawPrimitive");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlastiqueStyle::staticMetaObject,
      "drawPrimitive(QPlastiqueStyle*,QStyle::PrimitiveElement ,const QStyleOption* ,QPainter* ,const QWidget* )");
    void* args[5] = {NULL, (void*)&element, (void*)&option, (void*)&painter, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlastiqueStyle::drawPrimitive(element, option, painter, widget);
}
bool  PythonQtShell_QPlastiqueStyle::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlastiqueStyle::staticMetaObject,
      "event(QPlastiqueStyle*,QEvent* )");
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
  return QPlastiqueStyle::event(arg__1);
}
bool  PythonQtShell_QPlastiqueStyle::eventFilter(QObject*  watched, QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlastiqueStyle::staticMetaObject,
      "eventFilter(QPlastiqueStyle*,QObject* ,QEvent* )");
      bool  returnValue;
    void* args[3] = {NULL, (void*)&watched, (void*)&event};
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
  return QPlastiqueStyle::eventFilter(watched, event);
}
QPixmap  PythonQtShell_QPlastiqueStyle::generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "generatedIconPixmap");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlastiqueStyle::staticMetaObject,
      "generatedIconPixmap(QPlastiqueStyle*,QIcon::Mode ,const QPixmap& ,const QStyleOption* )");
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
  return QPlastiqueStyle::generatedIconPixmap(iconMode, pixmap, opt);
}
QStyle::SubControl  PythonQtShell_QPlastiqueStyle::hitTestComplexControl(QStyle::ComplexControl  control, const QStyleOptionComplex*  option, const QPoint&  pos, const QWidget*  widget) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hitTestComplexControl");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlastiqueStyle::staticMetaObject,
      "hitTestComplexControl(QPlastiqueStyle*,QStyle::ComplexControl ,const QStyleOptionComplex* ,const QPoint& ,const QWidget* )");
      QStyle::SubControl  returnValue;
    void* args[5] = {NULL, (void*)&control, (void*)&option, (void*)&pos, (void*)&widget};
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
  return QPlastiqueStyle::hitTestComplexControl(control, option, pos, widget);
}
QRect  PythonQtShell_QPlastiqueStyle::itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemPixmapRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlastiqueStyle::staticMetaObject,
      "itemPixmapRect(QPlastiqueStyle*,const QRect& ,int ,const QPixmap& )");
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
  return QPlastiqueStyle::itemPixmapRect(r, flags, pixmap);
}
int  PythonQtShell_QPlastiqueStyle::pixelMetric(QStyle::PixelMetric  metric, const QStyleOption*  option, const QWidget*  widget) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "pixelMetric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlastiqueStyle::staticMetaObject,
      "pixelMetric(QPlastiqueStyle*,QStyle::PixelMetric ,const QStyleOption* ,const QWidget* )");
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
  return QPlastiqueStyle::pixelMetric(metric, option, widget);
}
void PythonQtShell_QPlastiqueStyle::polish(QApplication*  app)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "polish");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlastiqueStyle::staticMetaObject,
      "polish(QPlastiqueStyle*,QApplication* )");
    void* args[2] = {NULL, (void*)&app};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlastiqueStyle::polish(app);
}
void PythonQtShell_QPlastiqueStyle::polish(QPalette&  pal)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "polish");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlastiqueStyle::staticMetaObject,
      "polish(QPlastiqueStyle*,QPalette& )");
    void* args[2] = {NULL, (void*)&pal};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlastiqueStyle::polish(pal);
}
void PythonQtShell_QPlastiqueStyle::polish(QWidget*  widget)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "polish");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlastiqueStyle::staticMetaObject,
      "polish(QPlastiqueStyle*,QWidget* )");
    void* args[2] = {NULL, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlastiqueStyle::polish(widget);
}
QSize  PythonQtShell_QPlastiqueStyle::sizeFromContents(QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sizeFromContents");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlastiqueStyle::staticMetaObject,
      "sizeFromContents(QPlastiqueStyle*,QStyle::ContentsType ,const QStyleOption* ,const QSize& ,const QWidget* )");
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
  return QPlastiqueStyle::sizeFromContents(type, option, size, widget);
}
QPalette  PythonQtShell_QPlastiqueStyle::standardPalette() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "standardPalette");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlastiqueStyle::staticMetaObject,
      "standardPalette(QPlastiqueStyle*)");
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
  return QPlastiqueStyle::standardPalette();
}
QPixmap  PythonQtShell_QPlastiqueStyle::standardPixmap(QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "standardPixmap");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlastiqueStyle::staticMetaObject,
      "standardPixmap(QPlastiqueStyle*,QStyle::StandardPixmap ,const QStyleOption* ,const QWidget* )");
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
int  PythonQtShell_QPlastiqueStyle::styleHint(QStyle::StyleHint  hint, const QStyleOption*  option, const QWidget*  widget, QStyleHintReturn*  returnData) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "styleHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlastiqueStyle::staticMetaObject,
      "styleHint(QPlastiqueStyle*,QStyle::StyleHint ,const QStyleOption* ,const QWidget* ,QStyleHintReturn* )");
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
  return QPlastiqueStyle::styleHint(hint, option, widget, returnData);
}
QRect  PythonQtShell_QPlastiqueStyle::subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "subControlRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlastiqueStyle::staticMetaObject,
      "subControlRect(QPlastiqueStyle*,QStyle::ComplexControl ,const QStyleOptionComplex* ,QStyle::SubControl ,const QWidget* )");
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
  return QPlastiqueStyle::subControlRect(cc, opt, sc, widget);
}
QRect  PythonQtShell_QPlastiqueStyle::subElementRect(QStyle::SubElement  element, const QStyleOption*  option, const QWidget*  widget) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "subElementRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlastiqueStyle::staticMetaObject,
      "subElementRect(QPlastiqueStyle*,QStyle::SubElement ,const QStyleOption* ,const QWidget* )");
      QRect  returnValue;
    void* args[4] = {NULL, (void*)&element, (void*)&option, (void*)&widget};
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
  return QPlastiqueStyle::subElementRect(element, option, widget);
}
void PythonQtShell_QPlastiqueStyle::timerEvent(QTimerEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlastiqueStyle::staticMetaObject,
      "timerEvent(QPlastiqueStyle*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlastiqueStyle::timerEvent(event);
}
void PythonQtShell_QPlastiqueStyle::unpolish(QApplication*  app)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "unpolish");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlastiqueStyle::staticMetaObject,
      "unpolish(QPlastiqueStyle*,QApplication* )");
    void* args[2] = {NULL, (void*)&app};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlastiqueStyle::unpolish(app);
}
void PythonQtShell_QPlastiqueStyle::unpolish(QWidget*  widget)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "unpolish");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlastiqueStyle::staticMetaObject,
      "unpolish(QPlastiqueStyle*,QWidget* )");
    void* args[2] = {NULL, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlastiqueStyle::unpolish(widget);
}
QPlastiqueStyle* PythonQtWrapper_QPlastiqueStyle::new_QPlastiqueStyle()
{ 
return new PythonQtShell_QPlastiqueStyle(); }

void PythonQtWrapper_QPlastiqueStyle::drawPrimitive(QPlastiqueStyle* theWrappedObject, QStyle::PrimitiveElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const
{
 (*theWrappedObject).drawPrimitive(element, option, painter, widget);
}

QRect  PythonQtWrapper_QPlastiqueStyle::subElementRect(QPlastiqueStyle* theWrappedObject, QStyle::SubElement  element, const QStyleOption*  option, const QWidget*  widget) const
{
return  (*theWrappedObject).subElementRect(element, option, widget);
}

void PythonQtWrapper_QPlastiqueStyle::polish(QPlastiqueStyle* theWrappedObject, QPalette&  pal)
{
 (*theWrappedObject).polish(pal);
}

int  PythonQtWrapper_QPlastiqueStyle::pixelMetric(QPlastiqueStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option, const QWidget*  widget) const
{
return  (*theWrappedObject).pixelMetric(metric, option, widget);
}

void PythonQtWrapper_QPlastiqueStyle::timerEvent(QPlastiqueStyle* theWrappedObject, QTimerEvent*  event)
{
 (*((PythonQtPublicPromoter_QPlastiqueStyle*)theWrappedObject)).timerEvent(event);
}

void PythonQtWrapper_QPlastiqueStyle::drawComplexControl(QPlastiqueStyle* theWrappedObject, QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget) const
{
 (*theWrappedObject).drawComplexControl(control, option, painter, widget);
}

void PythonQtWrapper_QPlastiqueStyle::unpolish(QPlastiqueStyle* theWrappedObject, QApplication*  app)
{
 (*theWrappedObject).unpolish(app);
}

QSize  PythonQtWrapper_QPlastiqueStyle::sizeFromContents(QPlastiqueStyle* theWrappedObject, QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const
{
return  (*theWrappedObject).sizeFromContents(type, option, size, widget);
}

bool  PythonQtWrapper_QPlastiqueStyle::eventFilter(QPlastiqueStyle* theWrappedObject, QObject*  watched, QEvent*  event)
{
return  (*((PythonQtPublicPromoter_QPlastiqueStyle*)theWrappedObject)).eventFilter(watched, event);
}

void PythonQtWrapper_QPlastiqueStyle::polish(QPlastiqueStyle* theWrappedObject, QApplication*  app)
{
 (*theWrappedObject).polish(app);
}

QRect  PythonQtWrapper_QPlastiqueStyle::subControlRect(QPlastiqueStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const
{
return  (*theWrappedObject).subControlRect(cc, opt, sc, widget);
}

QStyle::SubControl  PythonQtWrapper_QPlastiqueStyle::hitTestComplexControl(QPlastiqueStyle* theWrappedObject, QStyle::ComplexControl  control, const QStyleOptionComplex*  option, const QPoint&  pos, const QWidget*  widget) const
{
return  (*theWrappedObject).hitTestComplexControl(control, option, pos, widget);
}

void PythonQtWrapper_QPlastiqueStyle::unpolish(QPlastiqueStyle* theWrappedObject, QWidget*  widget)
{
 (*theWrappedObject).unpolish(widget);
}

int  PythonQtWrapper_QPlastiqueStyle::styleHint(QPlastiqueStyle* theWrappedObject, QStyle::StyleHint  hint, const QStyleOption*  option, const QWidget*  widget, QStyleHintReturn*  returnData) const
{
return  (*theWrappedObject).styleHint(hint, option, widget, returnData);
}

void PythonQtWrapper_QPlastiqueStyle::polish(QPlastiqueStyle* theWrappedObject, QWidget*  widget)
{
 (*theWrappedObject).polish(widget);
}

QPalette  PythonQtWrapper_QPlastiqueStyle::standardPalette(QPlastiqueStyle* theWrappedObject) const
{
return  (*theWrappedObject).standardPalette();
}

void PythonQtWrapper_QPlastiqueStyle::drawControl(QPlastiqueStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const
{
 (*theWrappedObject).drawControl(element, option, painter, widget);
}

